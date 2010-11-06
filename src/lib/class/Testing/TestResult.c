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
    Array PArray11571 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_passedSelectors_0_1 = new_Variable_named(L"passedSelectors", 0);
    Variable VAR_errorsSelectors_0_2 = new_Variable_named(L"errorsSelectors", 0);
    Variable VAR_failuresSelectors_0_3 = new_Variable_named(L"failuresSelectors", 0);
    Array PArray11572 = new_Array_with(3, (Optr)VAR_passedSelectors_0_1, (Optr)VAR_errorsSelectors_0_2, (Optr)VAR_failuresSelectors_0_3);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11576 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_select_thenCollect_ = new_Symbol(L"select:thenCollect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11578 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11580 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11581 = new_Send((Optr)PSend11580, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11579 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11580, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11581, (Optr)&t_method_return);
    Block PBlock11577 = new_Block_with(PArray11578, empty_Array, PThreadedCode11579, 1, PSend11581);
    Array PArray11583 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11585 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11584 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11585, (Optr)&t_method_return);
    Block PBlock11582 = new_Block_with(PArray11583, empty_Array, PThreadedCode11584, 1, PSend11585);
    // select:thenCollect:. 
    Send PSend11575 = new_Send((Optr)PSend11576, SMB_select_thenCollect_, 2, (Optr)PBlock11577, (Optr)PBlock11582);
    Assign PAssign11574 = new_Assign((Optr)VAR_passedSelectors_0_1, (Optr)PSend11575);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11588 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11590 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11592 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11593 = new_Send((Optr)PSend11592, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11591 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11592, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11593, (Optr)&t_method_return);
    Block PBlock11589 = new_Block_with(PArray11590, empty_Array, PThreadedCode11591, 1, PSend11593);
    Array PArray11595 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11597 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11596 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11597, (Optr)&t_method_return);
    Block PBlock11594 = new_Block_with(PArray11595, empty_Array, PThreadedCode11596, 1, PSend11597);
    // select:thenCollect:. 
    Send PSend11587 = new_Send((Optr)PSend11588, SMB_select_thenCollect_, 2, (Optr)PBlock11589, (Optr)PBlock11594);
    Assign PAssign11586 = new_Assign((Optr)VAR_errorsSelectors_0_2, (Optr)PSend11587);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11600 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11602 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11604 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11605 = new_Send((Optr)PSend11604, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11603 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11604, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11605, (Optr)&t_method_return);
    Block PBlock11601 = new_Block_with(PArray11602, empty_Array, PThreadedCode11603, 1, PSend11605);
    Array PArray11607 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11609 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11608 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11609, (Optr)&t_method_return);
    Block PBlock11606 = new_Block_with(PArray11607, empty_Array, PThreadedCode11608, 1, PSend11609);
    // select:thenCollect:. 
    Send PSend11599 = new_Send((Optr)PSend11600, SMB_select_thenCollect_, 2, (Optr)PBlock11601, (Optr)PBlock11606);
    Assign PAssign11598 = new_Assign((Optr)VAR_failuresSelectors_0_3, (Optr)PSend11599);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11611 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11613 = new_Send((Optr)VAR_passedSelectors_0_1, SMB_asSet, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11614 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11613);
    // asSet. 
    Send PSend11615 = new_Send((Optr)VAR_failuresSelectors_0_3, SMB_asSet, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11616 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11615);
    // asSet. 
    Send PSend11617 = new_Send((Optr)VAR_errorsSelectors_0_2, SMB_asSet, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11618 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11617);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11619 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11612 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_variable, (Optr)VAR_passedSelectors_0_1, (Optr)&t_send0, (Optr)PSend11613, (Optr)&t_send2, (Optr)PSend11614, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_variable, (Optr)VAR_failuresSelectors_0_3, (Optr)&t_send0, (Optr)PSend11615, (Optr)&t_send2, (Optr)PSend11616, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_variable, (Optr)VAR_errorsSelectors_0_2, (Optr)&t_send0, (Optr)PSend11617, (Optr)&t_send2, (Optr)PSend11618, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11619, (Optr)&t_method_return);
    Block PBlock11610 = new_Block_with(PArray11611, empty_Array, PThreadedCode11612, 4, PSend11614, PSend11616, PSend11618, PSend11619);
    // class. 
    Send PSend11620 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11621 = new_Send((Optr)PSend11620, SMB_newTestDictionary, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11622 = new_Send((Optr)PBlock11610, SMB_value_, 1, (Optr)PSend11621);
    Array PThreadedCode11573 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign11574, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11576, (Optr)&t_push_closure, (Optr)PBlock11577, (Optr)&t_push_closure, (Optr)PBlock11582, (Optr)&t_send2, (Optr)PSend11575, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11586, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11588, (Optr)&t_push_closure, (Optr)PBlock11589, (Optr)&t_push_closure, (Optr)PBlock11594, (Optr)&t_send2, (Optr)PSend11587, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11598, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11600, (Optr)&t_push_closure, (Optr)PBlock11601, (Optr)&t_push_closure, (Optr)PBlock11606, (Optr)&t_send2, (Optr)PSend11599, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11610, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11620, (Optr)&t_send0, (Optr)PSend11621, (Optr)&t_send1, (Optr)PSend11622, (Optr)&t_method_return);
    Method PMethod11570 = new_Method_with(PArray11571, PArray11572, empty_Array, PThreadedCode11573, 4, PAssign11574, PAssign11586, PAssign11598, PSend11622);
    
    MethodClosure MC_SMB_selectResultsForTestCase_ = new_MethodClosure((Method)PMethod11570, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_selectResultsForTestCase_, MC_SMB_selectResultsForTestCase_);
}


static void init_SMB_hasPassed() {
    Symbol SMB_hasPassed = new_Symbol(L"hasPassed");
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    // hasErrors. 
    Send PSend11625 = new_Send((Optr)self, SMB_hasErrors, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11626 = new_Send((Optr)PSend11625, SMB_not, 0);
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    // hasFailures. 
    Send PSend11629 = new_Send((Optr)self, SMB_hasFailures, 0);
    // not. 
    Send PSend11630 = new_Send((Optr)PSend11629, SMB_not, 0);
    Array PThreadedCode11628 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11629, (Optr)&t_send0, (Optr)PSend11630, (Optr)&t_block_return);
    Block PBlock11627 = new_Block_with(empty_Array, empty_Array, PThreadedCode11628, 1, PSend11630);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11631 = new_Send((Optr)PSend11626, SMB_and_, 1, (Optr)PBlock11627);
    Array PThreadedCode11624 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11625, (Optr)&t_send0, (Optr)PSend11626, (Optr)&t_push_closure, (Optr)PBlock11627, (Optr)&t_send1, (Optr)PSend11631, (Optr)&t_method_return);
    Method PMethod11623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11624, 1, PSend11631);
    
    MethodClosure MC_SMB_hasPassed = new_MethodClosure((Method)PMethod11623, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasPassed, MC_SMB_hasPassed);
}


static void init_SMB_isPassedFor_selector_() {
    Symbol SMB_isPassedFor_selector_ = new_Symbol(L"isPassedFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11633 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11635 = new_Send((Optr)self, SMB_passed, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11637 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11639 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11640 = new_Send((Optr)PSend11639, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11643 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11644 = new_Send((Optr)PSend11643, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11642 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11643, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11644, (Optr)&t_block_return);
    Block PBlock11641 = new_Block_with(empty_Array, empty_Array, PThreadedCode11642, 1, PSend11644);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11645 = new_Send((Optr)PSend11640, SMB_and_, 1, (Optr)PBlock11641);
    Array PThreadedCode11638 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11639, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11640, (Optr)&t_push_closure, (Optr)PBlock11641, (Optr)&t_send1, (Optr)PSend11645, (Optr)&t_method_return);
    Block PBlock11636 = new_Block_with(PArray11637, empty_Array, PThreadedCode11638, 1, PSend11645);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11646 = new_Send((Optr)PSend11635, SMB_anySatisfy_, 1, (Optr)PBlock11636);
    Array PThreadedCode11634 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11635, (Optr)&t_push_closure, (Optr)PBlock11636, (Optr)&t_send1, (Optr)PSend11646, (Optr)&t_method_return);
    Method PMethod11632 = new_Method_with(PArray11633, empty_Array, empty_Array, PThreadedCode11634, 1, PSend11646);
    
    MethodClosure MC_SMB_isPassedFor_selector_ = new_MethodClosure((Method)PMethod11632, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassedFor_selector_, MC_SMB_isPassedFor_selector_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper11649 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11651 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11650 = new_Assign((Optr)slot_Testing_TestResult_passed, (Optr)PSend11651);
    // new. 
    Send PSend11653 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11652 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11653);
    // new. 
    Send PSend11655 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11654 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11655);
    Array PThreadedCode11648 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11649, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11650, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11651, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11652, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11653, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11654, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11655, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11647 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11648, 5, PSuper11649, PAssign11650, PAssign11652, PAssign11654, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod11647, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_diff_() {
    Symbol SMB_diff_ = new_Symbol(L"diff:");
    Variable VAR_aTestResult_0_0 = new_Variable_named(L"aTestResult", 0);
    Array PArray11657 = new_Array_with(1, (Optr)VAR_aTestResult_0_0);
    Variable VAR_passed1Selectors_0_1 = new_Variable_named(L"passed1Selectors", 0);
    Variable VAR_failed1Selectors_0_2 = new_Variable_named(L"failed1Selectors", 0);
    Variable VAR_errors1Selectors_0_3 = new_Variable_named(L"errors1Selectors", 0);
    Variable VAR_passed2Selectors_0_4 = new_Variable_named(L"passed2Selectors", 0);
    Variable VAR_failed2Selectors_0_5 = new_Variable_named(L"failed2Selectors", 0);
    Variable VAR_errors2Selectors_0_6 = new_Variable_named(L"errors2Selectors", 0);
    Array PArray11658 = new_Array_with(6, (Optr)VAR_passed1Selectors_0_1, (Optr)VAR_failed1Selectors_0_2, (Optr)VAR_errors1Selectors_0_3, (Optr)VAR_passed2Selectors_0_4, (Optr)VAR_failed2Selectors_0_5, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11662 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11664 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11666 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11665 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11666, (Optr)&t_method_return);
    Block PBlock11663 = new_Block_with(PArray11664, empty_Array, PThreadedCode11665, 1, PSend11666);
    // collect:. 
    Send PSend11661 = new_Send((Optr)PSend11662, SMB_collect_, 1, (Optr)PBlock11663);
    Assign PAssign11660 = new_Assign((Optr)VAR_passed1Selectors_0_1, (Optr)PSend11661);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11669 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11671 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11673 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11672 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11673, (Optr)&t_method_return);
    Block PBlock11670 = new_Block_with(PArray11671, empty_Array, PThreadedCode11672, 1, PSend11673);
    // collect:. 
    Send PSend11668 = new_Send((Optr)PSend11669, SMB_collect_, 1, (Optr)PBlock11670);
    Assign PAssign11667 = new_Assign((Optr)VAR_failed1Selectors_0_2, (Optr)PSend11668);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11676 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11678 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11680 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11679 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11680, (Optr)&t_method_return);
    Block PBlock11677 = new_Block_with(PArray11678, empty_Array, PThreadedCode11679, 1, PSend11680);
    // collect:. 
    Send PSend11675 = new_Send((Optr)PSend11676, SMB_collect_, 1, (Optr)PBlock11677);
    Assign PAssign11674 = new_Assign((Optr)VAR_errors1Selectors_0_3, (Optr)PSend11675);
    // passed. 
    Send PSend11683 = new_Send((Optr)VAR_aTestResult_0_0, SMB_passed, 0);
    Array PArray11685 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11687 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11686 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11687, (Optr)&t_method_return);
    Block PBlock11684 = new_Block_with(PArray11685, empty_Array, PThreadedCode11686, 1, PSend11687);
    // collect:. 
    Send PSend11682 = new_Send((Optr)PSend11683, SMB_collect_, 1, (Optr)PBlock11684);
    Assign PAssign11681 = new_Assign((Optr)VAR_passed2Selectors_0_4, (Optr)PSend11682);
    // failures. 
    Send PSend11690 = new_Send((Optr)VAR_aTestResult_0_0, SMB_failures, 0);
    Array PArray11692 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11694 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11693 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11694, (Optr)&t_method_return);
    Block PBlock11691 = new_Block_with(PArray11692, empty_Array, PThreadedCode11693, 1, PSend11694);
    // collect:. 
    Send PSend11689 = new_Send((Optr)PSend11690, SMB_collect_, 1, (Optr)PBlock11691);
    Assign PAssign11688 = new_Assign((Optr)VAR_failed2Selectors_0_5, (Optr)PSend11689);
    // errors. 
    Send PSend11697 = new_Send((Optr)VAR_aTestResult_0_0, SMB_errors, 0);
    Array PArray11699 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11701 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11700 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11701, (Optr)&t_method_return);
    Block PBlock11698 = new_Block_with(PArray11699, empty_Array, PThreadedCode11700, 1, PSend11701);
    // collect:. 
    Send PSend11696 = new_Send((Optr)PSend11697, SMB_collect_, 1, (Optr)PBlock11698);
    Assign PAssign11695 = new_Assign((Optr)VAR_errors2Selectors_0_6, (Optr)PSend11696);
    Symbol SMB_copyWithoutAll_ = new_Symbol(L"copyWithoutAll:");
    // copyWithoutAll:. 
    Send PSend11702 = new_Send((Optr)VAR_passed1Selectors_0_1, SMB_copyWithoutAll_, 1, (Optr)VAR_passed2Selectors_0_4);
    // copyWithoutAll:. 
    Send PSend11703 = new_Send((Optr)VAR_failed1Selectors_0_2, SMB_copyWithoutAll_, 1, (Optr)VAR_failed2Selectors_0_5);
    // copyWithoutAll:. 
    Send PSend11704 = new_Send((Optr)VAR_errors1Selectors_0_3, SMB_copyWithoutAll_, 1, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend11705 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)PSend11702, (Optr)PSend11703, (Optr)PSend11704);
    Array PThreadedCode11659 = instantiate_Array_with(ThreadedCode_Class, 0, 92, (Optr)&t_push1, (Optr)PAssign11660, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11662, (Optr)&t_push_closure, (Optr)PBlock11663, (Optr)&t_send1, (Optr)PSend11661, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11667, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11669, (Optr)&t_push_closure, (Optr)PBlock11670, (Optr)&t_send1, (Optr)PSend11668, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11674, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11676, (Optr)&t_push_closure, (Optr)PBlock11677, (Optr)&t_send1, (Optr)PSend11675, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11681, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11683, (Optr)&t_push_closure, (Optr)PBlock11684, (Optr)&t_send1, (Optr)PSend11682, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11688, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11690, (Optr)&t_push_closure, (Optr)PBlock11691, (Optr)&t_send1, (Optr)PSend11689, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11695, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11697, (Optr)&t_push_closure, (Optr)PBlock11698, (Optr)&t_send1, (Optr)PSend11696, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_passed1Selectors_0_1, (Optr)&t_push_variable, (Optr)VAR_passed2Selectors_0_4, (Optr)&t_send1, (Optr)PSend11702, (Optr)&t_push_variable, (Optr)VAR_failed1Selectors_0_2, (Optr)&t_push_variable, (Optr)VAR_failed2Selectors_0_5, (Optr)&t_send1, (Optr)PSend11703, (Optr)&t_push_variable, (Optr)VAR_errors1Selectors_0_3, (Optr)&t_push_variable, (Optr)VAR_errors2Selectors_0_6, (Optr)&t_send1, (Optr)PSend11704, (Optr)&t_send3, (Optr)PSend11705, (Optr)&t_method_return);
    Method PMethod11656 = new_Method_with(PArray11657, PArray11658, empty_Array, PThreadedCode11659, 7, PAssign11660, PAssign11667, PAssign11674, PAssign11681, PAssign11688, PAssign11695, PSend11705);
    
    MethodClosure MC_SMB_diff_ = new_MethodClosure((Method)PMethod11656, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_diff_, MC_SMB_diff_);
}


static void init_SMB_errorCount() {
    Symbol SMB_errorCount = new_Symbol(L"errorCount");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11708 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11709 = new_Send((Optr)PSend11708, SMB_size, 0);
    Array PThreadedCode11707 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11708, (Optr)&t_send0, (Optr)PSend11709, (Optr)&t_method_return);
    Method PMethod11706 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11707, 1, PSend11709);
    
    MethodClosure MC_SMB_errorCount = new_MethodClosure((Method)PMethod11706, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errorCount, MC_SMB_errorCount);
}


static void init_SMB_timeStamp_() {
    Symbol SMB_timeStamp_ = new_Symbol(L"timeStamp:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11711 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11713 = new_Assign((Optr)slot_Testing_TestResult_timeStamp, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11712 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11713, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11710 = new_Method_with(PArray11711, empty_Array, empty_Array, PThreadedCode11712, 2, PAssign11713, self);
    
    MethodClosure MC_SMB_timeStamp_ = new_MethodClosure((Method)PMethod11710, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp_, MC_SMB_timeStamp_);
}


static void init_SMB_errors() {
    Symbol SMB_errors = new_Symbol(L"errors");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11716 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Array PThreadedCode11715 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11716, (Optr)&t_method_return);
    Method PMethod11714 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11715, 1, PSend11716);
    
    MethodClosure MC_SMB_errors = new_MethodClosure((Method)PMethod11714, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errors, MC_SMB_errors);
}


static void init_SMB_passed() {
    Symbol SMB_passed = new_Symbol(L"passed");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11719 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11720 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11721 = new_Send((Optr)PSend11719, SMB__append_, 1, (Optr)PSend11720);
    Array PThreadedCode11718 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11719, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11720, (Optr)&t_send1, (Optr)PSend11721, (Optr)&t_method_return);
    Method PMethod11717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11718, 1, PSend11721);
    
    MethodClosure MC_SMB_passed = new_MethodClosure((Method)PMethod11717, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passed, MC_SMB_passed);
}


static void init_SMB_fileOutOn_() {
    Symbol SMB_fileOutOn_ = new_Symbol(L"fileOutOn:");
    Variable VAR_aFileStream_0_0 = new_Variable_named(L"aFileStream", 0);
    Array PArray11723 = new_Array_with(1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_printer_0_1 = new_Variable_named(L"printer", 0);
    Array PArray11724 = new_Array_with(1, (Optr)VAR_printer_0_1);
    Variable VAR_title_1_0 = new_Variable_named(L"title", 1);
    Variable VAR_testCases_1_1 = new_Variable_named(L"testCases", 1);
    Array PArray11728 = new_Array_with(2, (Optr)VAR_title_1_0, (Optr)VAR_testCases_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11731 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11733 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11734 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)VAR_title_1_0);
    // cr. 
    Send PSend11735 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11732 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11733, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_title_1_0, (Optr)&t_send1, (Optr)PSend11734, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11735, (Optr)&t_method_return);
    Block PBlock11730 = new_Block_with(PArray11731, empty_Array, PThreadedCode11732, 3, PSend11733, PSend11734, PSend11735);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11736 = new_Send((Optr)PBlock11730, SMB_value_, 1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_aTestCase_2_0 = new_Variable_named(L"aTestCase", 2);
    Array PArray11738 = new_Array_with(1, (Optr)VAR_aTestCase_2_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11740 = new_Send((Optr)VAR_aTestCase_2_0, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    // cr. 
    Send PSend11741 = new_Send((Optr)VAR_aFileStream_0_0, SMB_cr, 0);
    Array PThreadedCode11739 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aTestCase_2_0, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11740, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send0, (Optr)PSend11741, (Optr)&t_method_return);
    Block PBlock11737 = new_Block_with(PArray11738, empty_Array, PThreadedCode11739, 2, PSend11740, PSend11741);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11742 = new_Send((Optr)VAR_testCases_1_1, SMB_do_, 1, (Optr)PBlock11737);
    Array PThreadedCode11729 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11730, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11736, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCases_1_1, (Optr)&t_push_closure, (Optr)PBlock11737, (Optr)&t_send1, (Optr)PSend11742, (Optr)&t_method_return);
    Block PBlock11727 = new_Block_with(PArray11728, empty_Array, PThreadedCode11729, 2, PSend11736, PSend11742);
    Assign PAssign11726 = new_Assign((Optr)VAR_printer_0_1, (Optr)PBlock11727);
    // printOn:. 
    Send PSend11743 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    String string_11744 = new_String(L"Failures:");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11745 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Constant string_11744_Const = new_Constant((Optr)string_11744);
    // value:value:. 
    Send PSend11746 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11744_Const, (Optr)PSend11745);
    String string_11747 = new_String(L"Errors:");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11748 = new_Send((Optr)self, SMB_errors, 0);
    Constant string_11747_Const = new_Constant((Optr)string_11747);
    // value:value:. 
    Send PSend11749 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11747_Const, (Optr)PSend11748);
    Array PThreadedCode11725 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11726, (Optr)&t_push_closure, (Optr)PBlock11727, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11743, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11744, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11745, (Optr)&t_send2, (Optr)PSend11746, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11747, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11748, (Optr)&t_send2, (Optr)PSend11749, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11722 = new_Method_with(PArray11723, PArray11724, empty_Array, PThreadedCode11725, 5, PAssign11726, PSend11743, PSend11746, PSend11749, self);
    
    MethodClosure MC_SMB_fileOutOn_ = new_MethodClosure((Method)PMethod11722, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_fileOutOn_, MC_SMB_fileOutOn_);
}


static void init_SMB_runCase_() {
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11751 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Variable VAR_testCasePassed_0_1 = new_Variable_named(L"testCasePassed", 0);
    Array PArray11752 = new_Array_with(1, (Optr)VAR_testCasePassed_0_1);
    Assign PAssign11754 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)true_Const);
    Symbol SMB_runCase = new_Symbol(L"runCase");
    // runCase. 
    Send PSend11759 = new_Send((Optr)VAR_aTestCase_0_0, SMB_runCase, 0);
    Array PThreadedCode11758 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11759, (Optr)&t_block_return);
    Block PBlock11757 = new_Block_with(empty_Array, empty_Array, PThreadedCode11758, 1, PSend11759);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11760 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11761 = new_Send((Optr)PSend11760, SMB_failure, 0);
    Variable VAR_signal_1_0 = new_Variable_named(L"signal", 1);
    Array PArray11763 = new_Array_with(1, (Optr)VAR_signal_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11765 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11766 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    Symbol SMB_return_ = new_Symbol(L"return:");
    // return:. 
    Send PSend11767 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11764 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11765, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11766, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11767, (Optr)&t_method_return);
    Block PBlock11762 = new_Block_with(PArray11763, empty_Array, PThreadedCode11764, 3, PSend11765, PAssign11766, PSend11767);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11768 = new_Send((Optr)PBlock11757, SMB_on_do_, 2, (Optr)PSend11761, (Optr)PBlock11762);
    Array PThreadedCode11756 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11757, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11760, (Optr)&t_send0, (Optr)PSend11761, (Optr)&t_push_closure, (Optr)PBlock11762, (Optr)&t_send2, (Optr)PSend11768, (Optr)&t_block_return);
    Block PBlock11755 = new_Block_with(empty_Array, empty_Array, PThreadedCode11756, 1, PSend11768);
    // class. 
    Send PSend11769 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend11770 = new_Send((Optr)PSend11769, SMB_error, 0);
    Array PArray11772 = new_Array_with(1, (Optr)VAR_signal_1_0);
    // add:. 
    Send PSend11774 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11775 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    // return:. 
    Send PSend11776 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11773 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11774, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11775, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11776, (Optr)&t_method_return);
    Block PBlock11771 = new_Block_with(PArray11772, empty_Array, PThreadedCode11773, 3, PSend11774, PAssign11775, PSend11776);
    // on:do:. 
    Send PSend11777 = new_Send((Optr)PBlock11755, SMB_on_do_, 2, (Optr)PSend11770, (Optr)PBlock11771);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // add:. 
    Send PSend11781 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11780 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11781, (Optr)&t_block_return);
    Block PBlock11779 = new_Block_with(empty_Array, empty_Array, PThreadedCode11780, 1, PSend11781);
    // ifTrue:. 
    Send PSend11778 = new_Send((Optr)VAR_testCasePassed_0_1, SMB_ifTrue_, 1, (Optr)PBlock11779);
    Array PThreadedCode11753 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign11754, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11755, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11769, (Optr)&t_send0, (Optr)PSend11770, (Optr)&t_push_closure, (Optr)PBlock11771, (Optr)&t_send2, (Optr)PSend11777, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCasePassed_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend11778, (Optr)PBlock11779, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11750 = new_Method_with(PArray11751, PArray11752, empty_Array, PThreadedCode11753, 4, PAssign11754, PSend11777, PSend11778, self);
    
    MethodClosure MC_SMB_runCase_ = new_MethodClosure((Method)PMethod11750, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCase_, MC_SMB_runCase_);
}


static void init_SMB_failureCount() {
    Symbol SMB_failureCount = new_Symbol(L"failureCount");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11784 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11785 = new_Send((Optr)PSend11784, SMB_size, 0);
    Array PThreadedCode11783 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11784, (Optr)&t_send0, (Optr)PSend11785, (Optr)&t_method_return);
    Method PMethod11782 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11783, 1, PSend11785);
    
    MethodClosure MC_SMB_failureCount = new_MethodClosure((Method)PMethod11782, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failureCount, MC_SMB_failureCount);
}


static void init_SMB_resetFailures() {
    Symbol SMB_resetFailures = new_Symbol(L"resetFailures");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11789 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11788 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11789);
    Array PThreadedCode11787 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11788, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11789, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11787, 2, PAssign11788, self);
    
    MethodClosure MC_SMB_resetFailures = new_MethodClosure((Method)PMethod11786, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetFailures, MC_SMB_resetFailures);
}


static void init_SMB_dispatchResultsIntoHistory() {
    Symbol SMB_dispatchResultsIntoHistory = new_Symbol(L"dispatchResultsIntoHistory");
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    // classesTested. 
    Send PSend11792 = new_Send((Optr)self, SMB_classesTested, 0);
    Variable VAR_testClass_1_0 = new_Variable_named(L"testClass", 1);
    Array PArray11794 = new_Array_with(1, (Optr)VAR_testClass_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11796 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    // selectResultsForTestCase:. 
    Send PSend11797 = new_Send((Optr)self, SMB_selectResultsForTestCase_, 1, (Optr)VAR_testClass_1_0);
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    // historyAt:put:. 
    Send PSend11798 = new_Send((Optr)PSend11796, SMB_historyAt_put_, 2, (Optr)VAR_testClass_1_0, (Optr)PSend11797);
    Array PThreadedCode11795 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11796, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_send1, (Optr)PSend11797, (Optr)&t_send2, (Optr)PSend11798, (Optr)&t_method_return);
    Block PBlock11793 = new_Block_with(PArray11794, empty_Array, PThreadedCode11795, 1, PSend11798);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11799 = new_Send((Optr)PSend11792, SMB_do_, 1, (Optr)PBlock11793);
    Array PThreadedCode11791 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11792, (Optr)&t_push_closure, (Optr)PBlock11793, (Optr)&t_send1, (Optr)PSend11799, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11790 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11791, 2, PSend11799, self);
    
    MethodClosure MC_SMB_dispatchResultsIntoHistory = new_MethodClosure((Method)PMethod11790, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_dispatchResultsIntoHistory, MC_SMB_dispatchResultsIntoHistory);
}


static void init_SMB_isFailureFor_selector_() {
    Symbol SMB_isFailureFor_selector_ = new_Symbol(L"isFailureFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11801 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11803 = new_Send((Optr)self, SMB_failures, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11805 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11807 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11808 = new_Send((Optr)PSend11807, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11811 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11812 = new_Send((Optr)PSend11811, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11810 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11811, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11812, (Optr)&t_block_return);
    Block PBlock11809 = new_Block_with(empty_Array, empty_Array, PThreadedCode11810, 1, PSend11812);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11813 = new_Send((Optr)PSend11808, SMB_and_, 1, (Optr)PBlock11809);
    Array PThreadedCode11806 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11807, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11808, (Optr)&t_push_closure, (Optr)PBlock11809, (Optr)&t_send1, (Optr)PSend11813, (Optr)&t_method_return);
    Block PBlock11804 = new_Block_with(PArray11805, empty_Array, PThreadedCode11806, 1, PSend11813);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11814 = new_Send((Optr)PSend11803, SMB_anySatisfy_, 1, (Optr)PBlock11804);
    Array PThreadedCode11802 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11803, (Optr)&t_push_closure, (Optr)PBlock11804, (Optr)&t_send1, (Optr)PSend11814, (Optr)&t_method_return);
    Method PMethod11800 = new_Method_with(PArray11801, empty_Array, empty_Array, PThreadedCode11802, 1, PSend11814);
    
    MethodClosure MC_SMB_isFailureFor_selector_ = new_MethodClosure((Method)PMethod11800, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailureFor_selector_, MC_SMB_isFailureFor_selector_);
}


static void init_SMB_timeStamp() {
    Symbol SMB_timeStamp = new_Symbol(L"timeStamp");
    Array PThreadedCode11816 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_timeStamp, (Optr)&t_method_return);
    Method PMethod11815 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11816, 1, slot_Testing_TestResult_timeStamp);
    
    MethodClosure MC_SMB_timeStamp = new_MethodClosure((Method)PMethod11815, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp, MC_SMB_timeStamp);
}


static void init_SMB_resetErrors() {
    Symbol SMB_resetErrors = new_Symbol(L"resetErrors");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11820 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11819 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11820);
    Array PThreadedCode11818 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11819, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11820, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11817 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11818, 2, PAssign11819, self);
    
    MethodClosure MC_SMB_resetErrors = new_MethodClosure((Method)PMethod11817, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetErrors, MC_SMB_resetErrors);
}


static void init_SMB_unexpectedErrors() {
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11824 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11826 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11825 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11826, (Optr)&t_method_return);
    Block PBlock11823 = new_Block_with(PArray11824, empty_Array, PThreadedCode11825, 1, PSend11826);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11827 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_select_, 1, (Optr)PBlock11823);
    Array PThreadedCode11822 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_closure, (Optr)PBlock11823, (Optr)&t_send1, (Optr)PSend11827, (Optr)&t_method_return);
    Method PMethod11821 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11822, 1, PSend11827);
    
    MethodClosure MC_SMB_unexpectedErrors = new_MethodClosure((Method)PMethod11821, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrors, MC_SMB_unexpectedErrors);
}


static void init_SMB_isFailure_() {
    Symbol SMB_isFailure_ = new_Symbol(L"isFailure:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11829 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11831 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11832 = new_Send((Optr)PSend11831, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11830 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11831, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11832, (Optr)&t_method_return);
    Method PMethod11828 = new_Method_with(PArray11829, empty_Array, empty_Array, PThreadedCode11830, 1, PSend11832);
    
    MethodClosure MC_SMB_isFailure_ = new_MethodClosure((Method)PMethod11828, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailure_, MC_SMB_isFailure_);
}


static void init_SMB_classesTested() {
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11835 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11837 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11839 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Array PThreadedCode11838 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11839, (Optr)&t_method_return);
    Block PBlock11836 = new_Block_with(PArray11837, empty_Array, PThreadedCode11838, 1, PSend11839);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend11840 = new_Send((Optr)PSend11835, SMB_collect_, 1, (Optr)PBlock11836);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11841 = new_Send((Optr)PSend11840, SMB_asSet, 0);
    Array PThreadedCode11834 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11835, (Optr)&t_push_closure, (Optr)PBlock11836, (Optr)&t_send1, (Optr)PSend11840, (Optr)&t_send0, (Optr)PSend11841, (Optr)&t_method_return);
    Method PMethod11833 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11834, 1, PSend11841);
    
    MethodClosure MC_SMB_classesTested = new_MethodClosure((Method)PMethod11833, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_classesTested, MC_SMB_classesTested);
}


static void init_SMB_unexpectedErrorCount() {
    Symbol SMB_unexpectedErrorCount = new_Symbol(L"unexpectedErrorCount");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11844 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11845 = new_Send((Optr)PSend11844, SMB_size, 0);
    Array PThreadedCode11843 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11844, (Optr)&t_send0, (Optr)PSend11845, (Optr)&t_method_return);
    Method PMethod11842 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11843, 1, PSend11845);
    
    MethodClosure MC_SMB_unexpectedErrorCount = new_MethodClosure((Method)PMethod11842, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrorCount, MC_SMB_unexpectedErrorCount);
}


static void init_SMB_passedCount() {
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11848 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11849 = new_Send((Optr)PSend11848, SMB_size, 0);
    Array PThreadedCode11847 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11848, (Optr)&t_send0, (Optr)PSend11849, (Optr)&t_method_return);
    Method PMethod11846 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11847, 1, PSend11849);
    
    MethodClosure MC_SMB_passedCount = new_MethodClosure((Method)PMethod11846, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passedCount, MC_SMB_passedCount);
}


static void init_SMB_failures() {
    Symbol SMB_failures = new_Symbol(L"failures");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11853 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend11855 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11856 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11855);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11857 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11854 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11855, (Optr)&t_send1, (Optr)PSend11856, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11857, (Optr)&t_method_return);
    Block PBlock11852 = new_Block_with(PArray11853, empty_Array, PThreadedCode11854, 2, PSend11856, PSend11857);
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend11858 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11859 = new_Send((Optr)PBlock11852, SMB_value_, 1, (Optr)PSend11858);
    Array PThreadedCode11851 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11852, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11858, (Optr)&t_send1, (Optr)PSend11859, (Optr)&t_method_return);
    Method PMethod11850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11851, 1, PSend11859);
    
    MethodClosure MC_SMB_failures = new_MethodClosure((Method)PMethod11850, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failures, MC_SMB_failures);
}


static void init_SMB_correctCount() {
    Symbol SMB_correctCount = new_Symbol(L"correctCount");
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    // passedCount. 
    Send PSend11862 = new_Send((Optr)self, SMB_passedCount, 0);
    Array PThreadedCode11861 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11862, (Optr)&t_method_return);
    Method PMethod11860 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11861, 1, PSend11862);
    
    MethodClosure MC_SMB_correctCount = new_MethodClosure((Method)PMethod11860, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_correctCount, MC_SMB_correctCount);
}


static void init_SMB_isPassed_() {
    Symbol SMB_isPassed_ = new_Symbol(L"isPassed:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11864 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11866 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11867 = new_Send((Optr)PSend11866, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11865 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11866, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11867, (Optr)&t_method_return);
    Method PMethod11863 = new_Method_with(PArray11864, empty_Array, empty_Array, PThreadedCode11865, 1, PSend11867);
    
    MethodClosure MC_SMB_isPassed_ = new_MethodClosure((Method)PMethod11863, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassed_, MC_SMB_isPassed_);
}


static void init_SMB_expectedPassCount() {
    Symbol SMB_expectedPassCount = new_Symbol(L"expectedPassCount");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11870 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11871 = new_Send((Optr)PSend11870, SMB_size, 0);
    Array PThreadedCode11869 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11870, (Optr)&t_send0, (Optr)PSend11871, (Optr)&t_method_return);
    Method PMethod11868 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11869, 1, PSend11871);
    
    MethodClosure MC_SMB_expectedPassCount = new_MethodClosure((Method)PMethod11868, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPassCount, MC_SMB_expectedPassCount);
}


static void init_SMB_defects() {
    Symbol SMB_defects = new_Symbol(L"defects");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11875 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11877 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11878 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11877);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11879 = new_Send((Optr)self, SMB_failures, 0);
    // addAll:. 
    Send PSend11880 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11879);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11881 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11876 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11877, (Optr)&t_send1, (Optr)PSend11878, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11879, (Optr)&t_send1, (Optr)PSend11880, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11881, (Optr)&t_method_return);
    Block PBlock11874 = new_Block_with(PArray11875, empty_Array, PThreadedCode11876, 3, PSend11878, PSend11880, PSend11881);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11882 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11883 = new_Send((Optr)PBlock11874, SMB_value_, 1, (Optr)PSend11882);
    Array PThreadedCode11873 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock11874, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11882, (Optr)&t_send1, (Optr)PSend11883, (Optr)&t_method_return);
    Method PMethod11872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11873, 1, PSend11883);
    
    MethodClosure MC_SMB_defects = new_MethodClosure((Method)PMethod11872, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_defects, MC_SMB_defects);
}


static void init_SMB_expectedDefectCount() {
    Symbol SMB_expectedDefectCount = new_Symbol(L"expectedDefectCount");
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11886 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11887 = new_Send((Optr)PSend11886, SMB_size, 0);
    Array PThreadedCode11885 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11886, (Optr)&t_send0, (Optr)PSend11887, (Optr)&t_method_return);
    Method PMethod11884 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11885, 1, PSend11887);
    
    MethodClosure MC_SMB_expectedDefectCount = new_MethodClosure((Method)PMethod11884, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefectCount, MC_SMB_expectedDefectCount);
}


static void init_SMB_expectedDefects() {
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend11890 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_asOrderedCollection, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11891 = new_Send((Optr)slot_Testing_TestResult_errors, SMB__append_, 1, (Optr)PSend11890);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11893 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11895 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11896 = new_Send((Optr)PSend11895, SMB_not, 0);
    Array PThreadedCode11894 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11895, (Optr)&t_send0, (Optr)PSend11896, (Optr)&t_method_return);
    Block PBlock11892 = new_Block_with(PArray11893, empty_Array, PThreadedCode11894, 1, PSend11896);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11897 = new_Send((Optr)PSend11891, SMB_select_, 1, (Optr)PBlock11892);
    Array PThreadedCode11889 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend11890, (Optr)&t_send1, (Optr)PSend11891, (Optr)&t_push_closure, (Optr)PBlock11892, (Optr)&t_send1, (Optr)PSend11897, (Optr)&t_method_return);
    Method PMethod11888 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11889, 1, PSend11897);
    
    MethodClosure MC_SMB_expectedDefects = new_MethodClosure((Method)PMethod11888, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefects, MC_SMB_expectedDefects);
}


static void init_SMB_expectedPasses() {
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11901 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11903 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11902 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11903, (Optr)&t_method_return);
    Block PBlock11900 = new_Block_with(PArray11901, empty_Array, PThreadedCode11902, 1, PSend11903);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11904 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock11900);
    Array PThreadedCode11899 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock11900, (Optr)&t_send1, (Optr)PSend11904, (Optr)&t_method_return);
    Method PMethod11898 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11899, 1, PSend11904);
    
    MethodClosure MC_SMB_expectedPasses = new_MethodClosure((Method)PMethod11898, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPasses, MC_SMB_expectedPasses);
}


static void init_SMB_unexpectedFailureCount() {
    Symbol SMB_unexpectedFailureCount = new_Symbol(L"unexpectedFailureCount");
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend11907 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11908 = new_Send((Optr)PSend11907, SMB_size, 0);
    Array PThreadedCode11906 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11907, (Optr)&t_send0, (Optr)PSend11908, (Optr)&t_method_return);
    Method PMethod11905 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11906, 1, PSend11908);
    
    MethodClosure MC_SMB_unexpectedFailureCount = new_MethodClosure((Method)PMethod11905, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailureCount, MC_SMB_unexpectedFailureCount);
}


static void init_SMB_isErrorFor_selector_() {
    Symbol SMB_isErrorFor_selector_ = new_Symbol(L"isErrorFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11910 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11912 = new_Send((Optr)self, SMB_errors, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11914 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11916 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11917 = new_Send((Optr)PSend11916, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11920 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11921 = new_Send((Optr)PSend11920, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11919 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11920, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11921, (Optr)&t_block_return);
    Block PBlock11918 = new_Block_with(empty_Array, empty_Array, PThreadedCode11919, 1, PSend11921);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11922 = new_Send((Optr)PSend11917, SMB_and_, 1, (Optr)PBlock11918);
    Array PThreadedCode11915 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11916, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11917, (Optr)&t_push_closure, (Optr)PBlock11918, (Optr)&t_send1, (Optr)PSend11922, (Optr)&t_method_return);
    Block PBlock11913 = new_Block_with(PArray11914, empty_Array, PThreadedCode11915, 1, PSend11922);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11923 = new_Send((Optr)PSend11912, SMB_anySatisfy_, 1, (Optr)PBlock11913);
    Array PThreadedCode11911 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11912, (Optr)&t_push_closure, (Optr)PBlock11913, (Optr)&t_send1, (Optr)PSend11923, (Optr)&t_method_return);
    Method PMethod11909 = new_Method_with(PArray11910, empty_Array, empty_Array, PThreadedCode11911, 1, PSend11923);
    
    MethodClosure MC_SMB_isErrorFor_selector_ = new_MethodClosure((Method)PMethod11909, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isErrorFor_selector_, MC_SMB_isErrorFor_selector_);
}


static void init_SMB_hasErrors() {
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11926 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11927 = new_Send((Optr)PSend11926, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend11928 = new_Send((Optr)PSend11927, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode11925 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11926, (Optr)&t_send0, (Optr)PSend11927, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11928, (Optr)&t_method_return);
    Method PMethod11924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11925, 1, PSend11928);
    
    MethodClosure MC_SMB_hasErrors = new_MethodClosure((Method)PMethod11924, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasErrors, MC_SMB_hasErrors);
}


static void init_SMB_unexpectedPasses() {
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11932 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11934 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11935 = new_Send((Optr)PSend11934, SMB_not, 0);
    Array PThreadedCode11933 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11934, (Optr)&t_send0, (Optr)PSend11935, (Optr)&t_method_return);
    Block PBlock11931 = new_Block_with(PArray11932, empty_Array, PThreadedCode11933, 1, PSend11935);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11936 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock11931);
    Array PThreadedCode11930 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock11931, (Optr)&t_send1, (Optr)PSend11936, (Optr)&t_method_return);
    Method PMethod11929 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11930, 1, PSend11936);
    
    MethodClosure MC_SMB_unexpectedPasses = new_MethodClosure((Method)PMethod11929, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPasses, MC_SMB_unexpectedPasses);
}


static void init_SMB_isError_() {
    Symbol SMB_isError_ = new_Symbol(L"isError:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11938 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11940 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11941 = new_Send((Optr)PSend11940, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11939 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11940, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11941, (Optr)&t_method_return);
    Method PMethod11937 = new_Method_with(PArray11938, empty_Array, empty_Array, PThreadedCode11939, 1, PSend11941);
    
    MethodClosure MC_SMB_isError_ = new_MethodClosure((Method)PMethod11937, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isError_, MC_SMB_isError_);
}


static void init_SMB_unexpectedPassCount() {
    Symbol SMB_unexpectedPassCount = new_Symbol(L"unexpectedPassCount");
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend11944 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11945 = new_Send((Optr)PSend11944, SMB_size, 0);
    Array PThreadedCode11943 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11944, (Optr)&t_send0, (Optr)PSend11945, (Optr)&t_method_return);
    Method PMethod11942 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11943, 1, PSend11945);
    
    MethodClosure MC_SMB_unexpectedPassCount = new_MethodClosure((Method)PMethod11942, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPassCount, MC_SMB_unexpectedPassCount);
}


static void init_SMB_runCount() {
    Symbol SMB_runCount = new_Symbol(L"runCount");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11948 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_size, 0);
    // size. 
    Send PSend11949 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11950 = new_Send((Optr)PSend11948, SMB__plus_, 1, (Optr)PSend11949);
    // size. 
    Send PSend11951 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_size, 0);
    // +. 
    Send PSend11952 = new_Send((Optr)PSend11950, SMB__plus_, 1, (Optr)PSend11951);
    Array PThreadedCode11947 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send0, (Optr)PSend11948, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend11949, (Optr)&t_send1, (Optr)PSend11950, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send0, (Optr)PSend11951, (Optr)&t_send1, (Optr)PSend11952, (Optr)&t_method_return);
    Method PMethod11946 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11947, 1, PSend11952);
    
    MethodClosure MC_SMB_runCount = new_MethodClosure((Method)PMethod11946, Testing_TestResult_Class);
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
    Send PSend11955 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_status_1_0 = new_Variable_named(L"status", 1);
    Array PArray11957 = new_Array_with(1, (Optr)VAR_status_1_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend11959 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_status_1_0);
    Variable VAR_testCase_2_0 = new_Variable_named(L"testCase", 2);
    Array PArray11961 = new_Array_with(1, (Optr)VAR_testCase_2_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11963 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    // updateTestHistoryFor:status:. 
    Send PSend11964 = new_Send((Optr)PSend11963, SMB_updateTestHistoryFor_status_, 2, (Optr)VAR_testCase_2_0, (Optr)VAR_status_1_0);
    Array PThreadedCode11962 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11963, (Optr)&t_push_variable, (Optr)VAR_testCase_2_0, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send2, (Optr)PSend11964, (Optr)&t_method_return);
    Block PBlock11960 = new_Block_with(PArray11961, empty_Array, PThreadedCode11962, 1, PSend11964);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11965 = new_Send((Optr)PSend11959, SMB_do_, 1, (Optr)PBlock11960);
    Array PThreadedCode11958 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send1, (Optr)PSend11959, (Optr)&t_push_closure, (Optr)PBlock11960, (Optr)&t_send1, (Optr)PSend11965, (Optr)&t_method_return);
    Block PBlock11956 = new_Block_with(PArray11957, empty_Array, PThreadedCode11958, 1, PSend11965);
    // do:. 
    Send PSend11966 = new_Send((Optr)PSend11955, SMB_do_, 1, (Optr)PBlock11956);
    Array PThreadedCode11954 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend11955, (Optr)&t_push_closure, (Optr)PBlock11956, (Optr)&t_send1, (Optr)PSend11966, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11953 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11954, 2, PSend11966, self);
    
    MethodClosure MC_SMB_updateResultsInHistory = new_MethodClosure((Method)PMethod11953, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_updateResultsInHistory, MC_SMB_updateResultsInHistory);
}


static void init_SMB_unexpectedFailures() {
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11970 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11972 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11971 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11972, (Optr)&t_method_return);
    Block PBlock11969 = new_Block_with(PArray11970, empty_Array, PThreadedCode11971, 1, PSend11972);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11973 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_select_, 1, (Optr)PBlock11969);
    Array PThreadedCode11968 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_closure, (Optr)PBlock11969, (Optr)&t_send1, (Optr)PSend11973, (Optr)&t_method_return);
    Method PMethod11967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11968, 1, PSend11973);
    
    MethodClosure MC_SMB_unexpectedFailures = new_MethodClosure((Method)PMethod11967, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailures, MC_SMB_unexpectedFailures);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11977 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11979 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_passed);
    // addAll:. 
    Send PSend11980 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_failures);
    // addAll:. 
    Send PSend11981 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_errors);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11982 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11978 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send1, (Optr)PSend11979, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send1, (Optr)PSend11980, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send1, (Optr)PSend11981, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11982, (Optr)&t_method_return);
    Block PBlock11976 = new_Block_with(PArray11977, empty_Array, PThreadedCode11978, 4, PSend11979, PSend11980, PSend11981, PSend11982);
    Symbol SMB_runCount = new_Symbol(L"runCount");
    // runCount. 
    Send PSend11983 = new_Send((Optr)self, SMB_runCount, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend11984 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)PSend11983);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11985 = new_Send((Optr)PBlock11976, SMB_value_, 1, (Optr)PSend11984);
    Array PThreadedCode11975 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11976, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11983, (Optr)&t_send1, (Optr)PSend11984, (Optr)&t_send1, (Optr)PSend11985, (Optr)&t_method_return);
    Method PMethod11974 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11975, 1, PSend11985);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11974, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_tests, MC_SMB_tests);
}


static void init_SMB_hasFailures() {
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11988 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11989 = new_Send((Optr)PSend11988, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend11990 = new_Send((Optr)PSend11989, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode11987 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11988, (Optr)&t_send0, (Optr)PSend11989, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11990, (Optr)&t_method_return);
    Method PMethod11986 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11987, 1, PSend11990);
    
    MethodClosure MC_SMB_hasFailures = new_MethodClosure((Method)PMethod11986, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasFailures, MC_SMB_hasFailures);
}


static void init_class_SMB_historyAt_() {
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11992 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend11994 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Array PThreadedCode11993 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend11994, (Optr)&t_method_return);
    Method PMethod11991 = new_Method_with(PArray11992, empty_Array, empty_Array, PThreadedCode11993, 1, PSend11994);
    
    MethodClosure MC_SMB_historyAt_ = new_MethodClosure((Method)PMethod11991, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_, MC_SMB_historyAt_);
}


static void init_class_SMB_resumableFailure() {
    Symbol SMB_resumableFailure = new_Symbol(L"resumableFailure");
    Array PThreadedCode11996 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ResumableTestFailure_classReference, (Optr)&t_method_return);
    Method PMethod11995 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11996, 1, ResumableTestFailure_classReference);
    
    MethodClosure MC_SMB_resumableFailure = new_MethodClosure((Method)PMethod11995, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_resumableFailure, MC_SMB_resumableFailure);
}


static void init_class_SMB_failure() {
    Symbol SMB_failure = new_Symbol(L"failure");
    Array PThreadedCode11998 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestFailure_classReference, (Optr)&t_method_return);
    Method PMethod11997 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11998, 1, TestFailure_classReference);
    
    MethodClosure MC_SMB_failure = new_MethodClosure((Method)PMethod11997, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_failure, MC_SMB_failure);
}


static void init_class_SMB_updateTestHistoryFor_status_() {
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Variable VAR_aSymbol_0_1 = new_Variable_named(L"aSymbol", 0);
    Array PArray12000 = new_Array_with(2, (Optr)VAR_aTestCase_0_0, (Optr)VAR_aSymbol_0_1);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_3 = new_Variable_named(L"sel", 0);
    Array PArray12001 = new_Array_with(2, (Optr)VAR_cls_0_2, (Optr)VAR_sel_0_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend12004 = new_Send((Optr)VAR_aTestCase_0_0, SMB_class, 0);
    Assign PAssign12003 = new_Assign((Optr)VAR_cls_0_2, (Optr)PSend12004);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend12006 = new_Send((Optr)VAR_aTestCase_0_0, SMB_selector, 0);
    Assign PAssign12005 = new_Assign((Optr)VAR_sel_0_3, (Optr)PSend12006);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend12007 = new_Send((Optr)self, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_3, (Optr)VAR_cls_0_2);
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    // historyAt:. 
    Send PSend12008 = new_Send((Optr)self, SMB_historyAt_, 1, (Optr)VAR_cls_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12009 = new_Send((Optr)PSend12008, SMB_at_, 1, (Optr)VAR_aSymbol_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend12010 = new_Send((Optr)PSend12009, SMB_add_, 1, (Optr)VAR_sel_0_3);
    Array PThreadedCode12002 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign12003, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12004, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12005, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend12006, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend12007, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send1, (Optr)PSend12008, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_1, (Optr)&t_send1, (Optr)PSend12009, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_send1, (Optr)PSend12010, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11999 = new_Method_with(PArray12000, PArray12001, empty_Array, PThreadedCode12002, 5, PAssign12003, PAssign12005, PSend12007, PSend12010, self);
    
    MethodClosure MC_SMB_updateTestHistoryFor_status_ = new_MethodClosure((Method)PMethod11999, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_updateTestHistoryFor_status_, MC_SMB_updateTestHistoryFor_status_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray12014 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend12016 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12017 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend12018 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend12017);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend12019 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend12020 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend12019);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend12021 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend12022 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend12021);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend12023 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode12015 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend12016, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12017, (Optr)&t_send2, (Optr)PSend12018, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12019, (Optr)&t_send2, (Optr)PSend12020, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend12021, (Optr)&t_send2, (Optr)PSend12022, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend12023, (Optr)&t_method_return);
    Block PBlock12013 = new_Block_with(PArray12014, empty_Array, PThreadedCode12015, 5, PSend12016, PSend12018, PSend12020, PSend12022, PSend12023);
    // new. 
    Send PSend12024 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12025 = new_Send((Optr)PBlock12013, SMB_value_, 1, (Optr)PSend12024);
    Array PThreadedCode12012 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock12013, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend12024, (Optr)&t_send1, (Optr)PSend12025, (Optr)&t_method_return);
    Method PMethod12011 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12012, 1, PSend12025);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod12011, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_historyFor_() {
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12027 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_history_0_1 = new_Variable_named(L"history", 0);
    Array PArray12028 = new_Array_with(1, (Optr)VAR_history_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12031 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend12034 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Assign PAssign12033 = new_Assign((Optr)VAR_history_0_1, (Optr)PSend12034);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend12037 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12038 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12037);
    Array PThreadedCode12036 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12037, (Optr)&t_send1, (Optr)PSend12038, (Optr)&t_block_return);
    Block PBlock12035 = new_Block_with(empty_Array, empty_Array, PThreadedCode12036, 1, PSend12038);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend12039 = new_Send((Optr)VAR_history_0_1, SMB_ifNil_, 1, (Optr)PBlock12035);
    Array PThreadedCode12032 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12033, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend12034, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_push_closure, (Optr)PBlock12035, (Optr)&t_send1, (Optr)PSend12039, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_method_return);
    Block PBlock12030 = new_Block_with(PArray12031, empty_Array, PThreadedCode12032, 3, PAssign12033, PSend12039, VAR_history_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12040 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12030);
    Array PThreadedCode12029 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12030, (Optr)&t_send1, (Optr)PSend12040, (Optr)&t_method_return);
    Method PMethod12026 = new_Method_with(PArray12027, PArray12028, empty_Array, PThreadedCode12029, 1, PSend12040);
    
    MethodClosure MC_SMB_historyFor_ = new_MethodClosure((Method)PMethod12026, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyFor_, MC_SMB_historyFor_);
}


static void init_class_SMB_signalFailureWith_() {
    Symbol SMB_signalFailureWith_ = new_Symbol(L"signalFailureWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12042 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend12044 = new_Send((Optr)self, SMB_failure, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12045 = new_Send((Optr)PSend12044, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12043 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12044, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12045, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12041 = new_Method_with(PArray12042, empty_Array, empty_Array, PThreadedCode12043, 2, PSend12045, self);
    
    MethodClosure MC_SMB_signalFailureWith_ = new_MethodClosure((Method)PMethod12041, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalFailureWith_, MC_SMB_signalFailureWith_);
}


static void init_class_SMB_signalErrorWith_() {
    Symbol SMB_signalErrorWith_ = new_Symbol(L"signalErrorWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray12047 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend12049 = new_Send((Optr)self, SMB_error, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12050 = new_Send((Optr)PSend12049, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode12048 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12049, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12050, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12046 = new_Method_with(PArray12047, empty_Array, empty_Array, PThreadedCode12048, 2, PSend12050, self);
    
    MethodClosure MC_SMB_signalErrorWith_ = new_MethodClosure((Method)PMethod12046, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalErrorWith_, MC_SMB_signalErrorWith_);
}


static void init_class_SMB_exError() {
    Symbol SMB_exError = new_Symbol(L"exError");
    Array PThreadedCode12052 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_method_return);
    Method PMethod12051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12052, 1, Error_classReference);
    
    MethodClosure MC_SMB_exError = new_MethodClosure((Method)PMethod12051, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_exError, MC_SMB_exError);
}


static void init_class_SMB_historyAt_put_() {
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Variable VAR_aDictionary_0_1 = new_Variable_named(L"aDictionary", 0);
    Array PArray12054 = new_Array_with(2, (Optr)VAR_aTestCaseClass_0_0, (Optr)VAR_aDictionary_0_1);
    Symbol SMB_history_ = new_Symbol(L"history:");
    // history:. 
    Send PSend12056 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history_, 1, (Optr)VAR_aDictionary_0_1);
    Array PThreadedCode12055 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_1, (Optr)&t_send1, (Optr)PSend12056, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12053 = new_Method_with(PArray12054, empty_Array, empty_Array, PThreadedCode12055, 2, PSend12056, self);
    
    MethodClosure MC_SMB_historyAt_put_ = new_MethodClosure((Method)PMethod12053, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_put_, MC_SMB_historyAt_put_);
}


static void init_class_SMB_removeFromTestHistory_in_() {
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Variable VAR_aTestCaseClass_0_1 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12058 = new_Array_with(2, (Optr)VAR_aSelector_0_0, (Optr)VAR_aTestCaseClass_0_1);
    Variable VAR_lastRun_0_2 = new_Variable_named(L"lastRun", 0);
    Array PArray12059 = new_Array_with(1, (Optr)VAR_lastRun_0_2);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend12062 = new_Send((Optr)self, SMB_historyFor_, 1, (Optr)VAR_aTestCaseClass_0_1);
    Assign PAssign12061 = new_Assign((Optr)VAR_lastRun_0_2, (Optr)PSend12062);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend12063 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_set_1_0 = new_Variable_named(L"set", 1);
    Array PArray12065 = new_Array_with(1, (Optr)VAR_set_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12067 = new_Send((Optr)VAR_lastRun_0_2, SMB_at_, 1, (Optr)VAR_set_1_0);
    Array PThreadedCode12069 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock12068 = new_Block_with(empty_Array, empty_Array, PThreadedCode12069, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend12070 = new_Send((Optr)PSend12067, SMB_remove_ifAbsent_, 2, (Optr)VAR_aSelector_0_0, (Optr)PBlock12068);
    Array PThreadedCode12066 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_lastRun_0_2, (Optr)&t_push_variable, (Optr)VAR_set_1_0, (Optr)&t_send1, (Optr)PSend12067, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_push_closure, (Optr)PBlock12068, (Optr)&t_send2, (Optr)PSend12070, (Optr)&t_method_return);
    Block PBlock12064 = new_Block_with(PArray12065, empty_Array, PThreadedCode12066, 1, PSend12070);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12071 = new_Send((Optr)PSend12063, SMB_do_, 1, (Optr)PBlock12064);
    Array PThreadedCode12060 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12061, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_1, (Optr)&t_send1, (Optr)PSend12062, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12063, (Optr)&t_push_closure, (Optr)PBlock12064, (Optr)&t_send1, (Optr)PSend12071, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12057 = new_Method_with(PArray12058, PArray12059, empty_Array, PThreadedCode12060, 3, PAssign12061, PSend12071, self);
    
    MethodClosure MC_SMB_removeFromTestHistory_in_ = new_MethodClosure((Method)PMethod12057, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_removeFromTestHistory_in_, MC_SMB_removeFromTestHistory_in_);
}


static void init_class_SMB_error() {
    Symbol SMB_error = new_Symbol(L"error");
    Symbol SMB_exError = new_Symbol(L"exError");
    // exError. 
    Send PSend12074 = new_Send((Optr)self, SMB_exError, 0);
    Array PThreadedCode12073 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12074, (Optr)&t_method_return);
    Method PMethod12072 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12073, 1, PSend12074);
    
    MethodClosure MC_SMB_error = new_MethodClosure((Method)PMethod12072, HEADER(Testing_TestResult_Class));
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