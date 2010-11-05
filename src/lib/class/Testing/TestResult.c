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
    Array PArray11522 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_passedSelectors_0_1 = new_Variable_named(L"passedSelectors", 0);
    Variable VAR_errorsSelectors_0_2 = new_Variable_named(L"errorsSelectors", 0);
    Variable VAR_failuresSelectors_0_3 = new_Variable_named(L"failuresSelectors", 0);
    Array PArray11523 = new_Array_with(3, (Optr)VAR_passedSelectors_0_1, (Optr)VAR_errorsSelectors_0_2, (Optr)VAR_failuresSelectors_0_3);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11527 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_select_thenCollect_ = new_Symbol(L"select:thenCollect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11529 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11531 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11532 = new_Send((Optr)PSend11531, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11530 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11531, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11532, (Optr)&t_method_return);
    Block PBlock11528 = new_Block_with(PArray11529, empty_Array, PThreadedCode11530, 1, PSend11532);
    Array PArray11534 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11536 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11535 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11536, (Optr)&t_method_return);
    Block PBlock11533 = new_Block_with(PArray11534, empty_Array, PThreadedCode11535, 1, PSend11536);
    // select:thenCollect:. 
    Send PSend11526 = new_Send((Optr)PSend11527, SMB_select_thenCollect_, 2, (Optr)PBlock11528, (Optr)PBlock11533);
    Assign PAssign11525 = new_Assign((Optr)VAR_passedSelectors_0_1, (Optr)PSend11526);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11539 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11541 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11543 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11544 = new_Send((Optr)PSend11543, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11542 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11543, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11544, (Optr)&t_method_return);
    Block PBlock11540 = new_Block_with(PArray11541, empty_Array, PThreadedCode11542, 1, PSend11544);
    Array PArray11546 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11548 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11547 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11548, (Optr)&t_method_return);
    Block PBlock11545 = new_Block_with(PArray11546, empty_Array, PThreadedCode11547, 1, PSend11548);
    // select:thenCollect:. 
    Send PSend11538 = new_Send((Optr)PSend11539, SMB_select_thenCollect_, 2, (Optr)PBlock11540, (Optr)PBlock11545);
    Assign PAssign11537 = new_Assign((Optr)VAR_errorsSelectors_0_2, (Optr)PSend11538);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11551 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11553 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // class. 
    Send PSend11555 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    // ==. 
    Send PSend11556 = new_Send((Optr)PSend11555, SMB__pequals_, 1, (Optr)VAR_aTestCaseClass_0_0);
    Array PThreadedCode11554 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11555, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send1, (Optr)PSend11556, (Optr)&t_method_return);
    Block PBlock11552 = new_Block_with(PArray11553, empty_Array, PThreadedCode11554, 1, PSend11556);
    Array PArray11558 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11560 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11559 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11560, (Optr)&t_method_return);
    Block PBlock11557 = new_Block_with(PArray11558, empty_Array, PThreadedCode11559, 1, PSend11560);
    // select:thenCollect:. 
    Send PSend11550 = new_Send((Optr)PSend11551, SMB_select_thenCollect_, 2, (Optr)PBlock11552, (Optr)PBlock11557);
    Assign PAssign11549 = new_Assign((Optr)VAR_failuresSelectors_0_3, (Optr)PSend11550);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11562 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11564 = new_Send((Optr)VAR_passedSelectors_0_1, SMB_asSet, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11565 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11564);
    // asSet. 
    Send PSend11566 = new_Send((Optr)VAR_failuresSelectors_0_3, SMB_asSet, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11567 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11566);
    // asSet. 
    Send PSend11568 = new_Send((Optr)VAR_errorsSelectors_0_2, SMB_asSet, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11569 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11568);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11570 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11563 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_variable, (Optr)VAR_passedSelectors_0_1, (Optr)&t_send0, (Optr)PSend11564, (Optr)&t_send2, (Optr)PSend11565, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_variable, (Optr)VAR_failuresSelectors_0_3, (Optr)&t_send0, (Optr)PSend11566, (Optr)&t_send2, (Optr)PSend11567, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_variable, (Optr)VAR_errorsSelectors_0_2, (Optr)&t_send0, (Optr)PSend11568, (Optr)&t_send2, (Optr)PSend11569, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11570, (Optr)&t_method_return);
    Block PBlock11561 = new_Block_with(PArray11562, empty_Array, PThreadedCode11563, 4, PSend11565, PSend11567, PSend11569, PSend11570);
    // class. 
    Send PSend11571 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11572 = new_Send((Optr)PSend11571, SMB_newTestDictionary, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11573 = new_Send((Optr)PBlock11561, SMB_value_, 1, (Optr)PSend11572);
    Array PThreadedCode11524 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign11525, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11527, (Optr)&t_push_closure, (Optr)PBlock11528, (Optr)&t_push_closure, (Optr)PBlock11533, (Optr)&t_send2, (Optr)PSend11526, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11537, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11539, (Optr)&t_push_closure, (Optr)PBlock11540, (Optr)&t_push_closure, (Optr)PBlock11545, (Optr)&t_send2, (Optr)PSend11538, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11549, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11551, (Optr)&t_push_closure, (Optr)PBlock11552, (Optr)&t_push_closure, (Optr)PBlock11557, (Optr)&t_send2, (Optr)PSend11550, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11561, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11571, (Optr)&t_send0, (Optr)PSend11572, (Optr)&t_send1, (Optr)PSend11573, (Optr)&t_method_return);
    Method PMethod11521 = new_Method_with(PArray11522, PArray11523, empty_Array, PThreadedCode11524, 4, PAssign11525, PAssign11537, PAssign11549, PSend11573);
    
    MethodClosure MC_SMB_selectResultsForTestCase_ = new_MethodClosure((Method)PMethod11521, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_selectResultsForTestCase_, MC_SMB_selectResultsForTestCase_);
}


static void init_SMB_hasPassed() {
    Symbol SMB_hasPassed = new_Symbol(L"hasPassed");
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    // hasErrors. 
    Send PSend11576 = new_Send((Optr)self, SMB_hasErrors, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11577 = new_Send((Optr)PSend11576, SMB_not, 0);
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    // hasFailures. 
    Send PSend11580 = new_Send((Optr)self, SMB_hasFailures, 0);
    // not. 
    Send PSend11581 = new_Send((Optr)PSend11580, SMB_not, 0);
    Array PThreadedCode11579 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11580, (Optr)&t_send0, (Optr)PSend11581, (Optr)&t_block_return);
    Block PBlock11578 = new_Block_with(empty_Array, empty_Array, PThreadedCode11579, 1, PSend11581);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11582 = new_Send((Optr)PSend11577, SMB_and_, 1, (Optr)PBlock11578);
    Array PThreadedCode11575 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11576, (Optr)&t_send0, (Optr)PSend11577, (Optr)&t_push_closure, (Optr)PBlock11578, (Optr)&t_send1, (Optr)PSend11582, (Optr)&t_method_return);
    Method PMethod11574 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11575, 1, PSend11582);
    
    MethodClosure MC_SMB_hasPassed = new_MethodClosure((Method)PMethod11574, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasPassed, MC_SMB_hasPassed);
}


static void init_SMB_isPassedFor_selector_() {
    Symbol SMB_isPassedFor_selector_ = new_Symbol(L"isPassedFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11584 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11586 = new_Send((Optr)self, SMB_passed, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11588 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11590 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11591 = new_Send((Optr)PSend11590, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11594 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11595 = new_Send((Optr)PSend11594, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11593 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11594, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11595, (Optr)&t_block_return);
    Block PBlock11592 = new_Block_with(empty_Array, empty_Array, PThreadedCode11593, 1, PSend11595);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11596 = new_Send((Optr)PSend11591, SMB_and_, 1, (Optr)PBlock11592);
    Array PThreadedCode11589 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11590, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11591, (Optr)&t_push_closure, (Optr)PBlock11592, (Optr)&t_send1, (Optr)PSend11596, (Optr)&t_method_return);
    Block PBlock11587 = new_Block_with(PArray11588, empty_Array, PThreadedCode11589, 1, PSend11596);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11597 = new_Send((Optr)PSend11586, SMB_anySatisfy_, 1, (Optr)PBlock11587);
    Array PThreadedCode11585 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11586, (Optr)&t_push_closure, (Optr)PBlock11587, (Optr)&t_send1, (Optr)PSend11597, (Optr)&t_method_return);
    Method PMethod11583 = new_Method_with(PArray11584, empty_Array, empty_Array, PThreadedCode11585, 1, PSend11597);
    
    MethodClosure MC_SMB_isPassedFor_selector_ = new_MethodClosure((Method)PMethod11583, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassedFor_selector_, MC_SMB_isPassedFor_selector_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper11600 = new_Super(SMB_initialize, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11602 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11601 = new_Assign((Optr)slot_Testing_TestResult_passed, (Optr)PSend11602);
    // new. 
    Send PSend11604 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11603 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11604);
    // new. 
    Send PSend11606 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11605 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11606);
    Array PThreadedCode11599 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11600, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11601, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11602, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11603, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11604, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11605, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11606, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11598 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11599, 5, PSuper11600, PAssign11601, PAssign11603, PAssign11605, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod11598, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_diff_() {
    Symbol SMB_diff_ = new_Symbol(L"diff:");
    Variable VAR_aTestResult_0_0 = new_Variable_named(L"aTestResult", 0);
    Array PArray11608 = new_Array_with(1, (Optr)VAR_aTestResult_0_0);
    Variable VAR_passed1Selectors_0_1 = new_Variable_named(L"passed1Selectors", 0);
    Variable VAR_failed1Selectors_0_2 = new_Variable_named(L"failed1Selectors", 0);
    Variable VAR_errors1Selectors_0_3 = new_Variable_named(L"errors1Selectors", 0);
    Variable VAR_passed2Selectors_0_4 = new_Variable_named(L"passed2Selectors", 0);
    Variable VAR_failed2Selectors_0_5 = new_Variable_named(L"failed2Selectors", 0);
    Variable VAR_errors2Selectors_0_6 = new_Variable_named(L"errors2Selectors", 0);
    Array PArray11609 = new_Array_with(6, (Optr)VAR_passed1Selectors_0_1, (Optr)VAR_failed1Selectors_0_2, (Optr)VAR_errors1Selectors_0_3, (Optr)VAR_passed2Selectors_0_4, (Optr)VAR_failed2Selectors_0_5, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11613 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11615 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11617 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11616 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11617, (Optr)&t_method_return);
    Block PBlock11614 = new_Block_with(PArray11615, empty_Array, PThreadedCode11616, 1, PSend11617);
    // collect:. 
    Send PSend11612 = new_Send((Optr)PSend11613, SMB_collect_, 1, (Optr)PBlock11614);
    Assign PAssign11611 = new_Assign((Optr)VAR_passed1Selectors_0_1, (Optr)PSend11612);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11620 = new_Send((Optr)self, SMB_failures, 0);
    Array PArray11622 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11624 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11623 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11624, (Optr)&t_method_return);
    Block PBlock11621 = new_Block_with(PArray11622, empty_Array, PThreadedCode11623, 1, PSend11624);
    // collect:. 
    Send PSend11619 = new_Send((Optr)PSend11620, SMB_collect_, 1, (Optr)PBlock11621);
    Assign PAssign11618 = new_Assign((Optr)VAR_failed1Selectors_0_2, (Optr)PSend11619);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11627 = new_Send((Optr)self, SMB_errors, 0);
    Array PArray11629 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11631 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11630 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11631, (Optr)&t_method_return);
    Block PBlock11628 = new_Block_with(PArray11629, empty_Array, PThreadedCode11630, 1, PSend11631);
    // collect:. 
    Send PSend11626 = new_Send((Optr)PSend11627, SMB_collect_, 1, (Optr)PBlock11628);
    Assign PAssign11625 = new_Assign((Optr)VAR_errors1Selectors_0_3, (Optr)PSend11626);
    // passed. 
    Send PSend11634 = new_Send((Optr)VAR_aTestResult_0_0, SMB_passed, 0);
    Array PArray11636 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11638 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11637 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11638, (Optr)&t_method_return);
    Block PBlock11635 = new_Block_with(PArray11636, empty_Array, PThreadedCode11637, 1, PSend11638);
    // collect:. 
    Send PSend11633 = new_Send((Optr)PSend11634, SMB_collect_, 1, (Optr)PBlock11635);
    Assign PAssign11632 = new_Assign((Optr)VAR_passed2Selectors_0_4, (Optr)PSend11633);
    // failures. 
    Send PSend11641 = new_Send((Optr)VAR_aTestResult_0_0, SMB_failures, 0);
    Array PArray11643 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11645 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11644 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11645, (Optr)&t_method_return);
    Block PBlock11642 = new_Block_with(PArray11643, empty_Array, PThreadedCode11644, 1, PSend11645);
    // collect:. 
    Send PSend11640 = new_Send((Optr)PSend11641, SMB_collect_, 1, (Optr)PBlock11642);
    Assign PAssign11639 = new_Assign((Optr)VAR_failed2Selectors_0_5, (Optr)PSend11640);
    // errors. 
    Send PSend11648 = new_Send((Optr)VAR_aTestResult_0_0, SMB_errors, 0);
    Array PArray11650 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    // selector. 
    Send PSend11652 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    Array PThreadedCode11651 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11652, (Optr)&t_method_return);
    Block PBlock11649 = new_Block_with(PArray11650, empty_Array, PThreadedCode11651, 1, PSend11652);
    // collect:. 
    Send PSend11647 = new_Send((Optr)PSend11648, SMB_collect_, 1, (Optr)PBlock11649);
    Assign PAssign11646 = new_Assign((Optr)VAR_errors2Selectors_0_6, (Optr)PSend11647);
    Symbol SMB_copyWithoutAll_ = new_Symbol(L"copyWithoutAll:");
    // copyWithoutAll:. 
    Send PSend11653 = new_Send((Optr)VAR_passed1Selectors_0_1, SMB_copyWithoutAll_, 1, (Optr)VAR_passed2Selectors_0_4);
    // copyWithoutAll:. 
    Send PSend11654 = new_Send((Optr)VAR_failed1Selectors_0_2, SMB_copyWithoutAll_, 1, (Optr)VAR_failed2Selectors_0_5);
    // copyWithoutAll:. 
    Send PSend11655 = new_Send((Optr)VAR_errors1Selectors_0_3, SMB_copyWithoutAll_, 1, (Optr)VAR_errors2Selectors_0_6);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    // with:with:with:. 
    Send PSend11656 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)PSend11653, (Optr)PSend11654, (Optr)PSend11655);
    Array PThreadedCode11610 = instantiate_Array_with(ThreadedCode_Class, 0, 92, (Optr)&t_push1, (Optr)PAssign11611, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11613, (Optr)&t_push_closure, (Optr)PBlock11614, (Optr)&t_send1, (Optr)PSend11612, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11618, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11620, (Optr)&t_push_closure, (Optr)PBlock11621, (Optr)&t_send1, (Optr)PSend11619, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11625, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11627, (Optr)&t_push_closure, (Optr)PBlock11628, (Optr)&t_send1, (Optr)PSend11626, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11632, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11634, (Optr)&t_push_closure, (Optr)PBlock11635, (Optr)&t_send1, (Optr)PSend11633, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11639, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11641, (Optr)&t_push_closure, (Optr)PBlock11642, (Optr)&t_send1, (Optr)PSend11640, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11646, (Optr)&t_push_variable, (Optr)VAR_aTestResult_0_0, (Optr)&t_send0, (Optr)PSend11648, (Optr)&t_push_closure, (Optr)PBlock11649, (Optr)&t_send1, (Optr)PSend11647, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_passed1Selectors_0_1, (Optr)&t_push_variable, (Optr)VAR_passed2Selectors_0_4, (Optr)&t_send1, (Optr)PSend11653, (Optr)&t_push_variable, (Optr)VAR_failed1Selectors_0_2, (Optr)&t_push_variable, (Optr)VAR_failed2Selectors_0_5, (Optr)&t_send1, (Optr)PSend11654, (Optr)&t_push_variable, (Optr)VAR_errors1Selectors_0_3, (Optr)&t_push_variable, (Optr)VAR_errors2Selectors_0_6, (Optr)&t_send1, (Optr)PSend11655, (Optr)&t_send3, (Optr)PSend11656, (Optr)&t_method_return);
    Method PMethod11607 = new_Method_with(PArray11608, PArray11609, empty_Array, PThreadedCode11610, 7, PAssign11611, PAssign11618, PAssign11625, PAssign11632, PAssign11639, PAssign11646, PSend11656);
    
    MethodClosure MC_SMB_diff_ = new_MethodClosure((Method)PMethod11607, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_diff_, MC_SMB_diff_);
}


static void init_SMB_errorCount() {
    Symbol SMB_errorCount = new_Symbol(L"errorCount");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11659 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11660 = new_Send((Optr)PSend11659, SMB_size, 0);
    Array PThreadedCode11658 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11659, (Optr)&t_send0, (Optr)PSend11660, (Optr)&t_method_return);
    Method PMethod11657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11658, 1, PSend11660);
    
    MethodClosure MC_SMB_errorCount = new_MethodClosure((Method)PMethod11657, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errorCount, MC_SMB_errorCount);
}


static void init_SMB_timeStamp_() {
    Symbol SMB_timeStamp_ = new_Symbol(L"timeStamp:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray11662 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign11664 = new_Assign((Optr)slot_Testing_TestResult_timeStamp, (Optr)VAR_anObject_0_0);
    Array PThreadedCode11663 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign11664, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11661 = new_Method_with(PArray11662, empty_Array, empty_Array, PThreadedCode11663, 2, PAssign11664, self);
    
    MethodClosure MC_SMB_timeStamp_ = new_MethodClosure((Method)PMethod11661, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp_, MC_SMB_timeStamp_);
}


static void init_SMB_errors() {
    Symbol SMB_errors = new_Symbol(L"errors");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11667 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Array PThreadedCode11666 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11667, (Optr)&t_method_return);
    Method PMethod11665 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11666, 1, PSend11667);
    
    MethodClosure MC_SMB_errors = new_MethodClosure((Method)PMethod11665, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_errors, MC_SMB_errors);
}


static void init_SMB_passed() {
    Symbol SMB_passed = new_Symbol(L"passed");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11670 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11671 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11672 = new_Send((Optr)PSend11670, SMB__append_, 1, (Optr)PSend11671);
    Array PThreadedCode11669 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11670, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11671, (Optr)&t_send1, (Optr)PSend11672, (Optr)&t_method_return);
    Method PMethod11668 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11669, 1, PSend11672);
    
    MethodClosure MC_SMB_passed = new_MethodClosure((Method)PMethod11668, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passed, MC_SMB_passed);
}


static void init_SMB_fileOutOn_() {
    Symbol SMB_fileOutOn_ = new_Symbol(L"fileOutOn:");
    Variable VAR_aFileStream_0_0 = new_Variable_named(L"aFileStream", 0);
    Array PArray11674 = new_Array_with(1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_printer_0_1 = new_Variable_named(L"printer", 0);
    Array PArray11675 = new_Array_with(1, (Optr)VAR_printer_0_1);
    Variable VAR_title_1_0 = new_Variable_named(L"title", 1);
    Variable VAR_testCases_1_1 = new_Variable_named(L"testCases", 1);
    Array PArray11679 = new_Array_with(2, (Optr)VAR_title_1_0, (Optr)VAR_testCases_1_1);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray11682 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend11684 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend11685 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)VAR_title_1_0);
    // cr. 
    Send PSend11686 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode11683 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11684, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_title_1_0, (Optr)&t_send1, (Optr)PSend11685, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend11686, (Optr)&t_method_return);
    Block PBlock11681 = new_Block_with(PArray11682, empty_Array, PThreadedCode11683, 3, PSend11684, PSend11685, PSend11686);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11687 = new_Send((Optr)PBlock11681, SMB_value_, 1, (Optr)VAR_aFileStream_0_0);
    Variable VAR_aTestCase_2_0 = new_Variable_named(L"aTestCase", 2);
    Array PArray11689 = new_Array_with(1, (Optr)VAR_aTestCase_2_0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11691 = new_Send((Optr)VAR_aTestCase_2_0, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    // cr. 
    Send PSend11692 = new_Send((Optr)VAR_aFileStream_0_0, SMB_cr, 0);
    Array PThreadedCode11690 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_aTestCase_2_0, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11691, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send0, (Optr)PSend11692, (Optr)&t_method_return);
    Block PBlock11688 = new_Block_with(PArray11689, empty_Array, PThreadedCode11690, 2, PSend11691, PSend11692);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11693 = new_Send((Optr)VAR_testCases_1_1, SMB_do_, 1, (Optr)PBlock11688);
    Array PThreadedCode11680 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock11681, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11687, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCases_1_1, (Optr)&t_push_closure, (Optr)PBlock11688, (Optr)&t_send1, (Optr)PSend11693, (Optr)&t_method_return);
    Block PBlock11678 = new_Block_with(PArray11679, empty_Array, PThreadedCode11680, 2, PSend11687, PSend11693);
    Assign PAssign11677 = new_Assign((Optr)VAR_printer_0_1, (Optr)PBlock11678);
    // printOn:. 
    Send PSend11694 = new_Send((Optr)self, SMB_printOn_, 1, (Optr)VAR_aFileStream_0_0);
    String string_11695 = new_String(L"Failures:");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11696 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_value_value_ = new_Symbol(L"value:value:");
    Constant string_11695_Const = new_Constant((Optr)string_11695);
    // value:value:. 
    Send PSend11697 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11695_Const, (Optr)PSend11696);
    String string_11698 = new_String(L"Errors:");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11699 = new_Send((Optr)self, SMB_errors, 0);
    Constant string_11698_Const = new_Constant((Optr)string_11698);
    // value:value:. 
    Send PSend11700 = new_Send((Optr)VAR_printer_0_1, SMB_value_value_, 2, (Optr)string_11698_Const, (Optr)PSend11699);
    Array PThreadedCode11676 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign11677, (Optr)&t_push_closure, (Optr)PBlock11678, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aFileStream_0_0, (Optr)&t_send1, (Optr)PSend11694, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11695, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11696, (Optr)&t_send2, (Optr)PSend11697, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_printer_0_1, (Optr)&t_push1, (Optr)string_11698, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11699, (Optr)&t_send2, (Optr)PSend11700, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11673 = new_Method_with(PArray11674, PArray11675, empty_Array, PThreadedCode11676, 5, PAssign11677, PSend11694, PSend11697, PSend11700, self);
    
    MethodClosure MC_SMB_fileOutOn_ = new_MethodClosure((Method)PMethod11673, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_fileOutOn_, MC_SMB_fileOutOn_);
}


static void init_SMB_runCase_() {
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11702 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Variable VAR_testCasePassed_0_1 = new_Variable_named(L"testCasePassed", 0);
    Array PArray11703 = new_Array_with(1, (Optr)VAR_testCasePassed_0_1);
    Assign PAssign11705 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)true_Const);
    Symbol SMB_runCase = new_Symbol(L"runCase");
    // runCase. 
    Send PSend11710 = new_Send((Optr)VAR_aTestCase_0_0, SMB_runCase, 0);
    Array PThreadedCode11709 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11710, (Optr)&t_block_return);
    Block PBlock11708 = new_Block_with(empty_Array, empty_Array, PThreadedCode11709, 1, PSend11710);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11711 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11712 = new_Send((Optr)PSend11711, SMB_failure, 0);
    Variable VAR_signal_1_0 = new_Variable_named(L"signal", 1);
    Array PArray11714 = new_Array_with(1, (Optr)VAR_signal_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11716 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11717 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    Symbol SMB_return_ = new_Symbol(L"return:");
    // return:. 
    Send PSend11718 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11715 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11716, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11717, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11718, (Optr)&t_method_return);
    Block PBlock11713 = new_Block_with(PArray11714, empty_Array, PThreadedCode11715, 3, PSend11716, PAssign11717, PSend11718);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend11719 = new_Send((Optr)PBlock11708, SMB_on_do_, 2, (Optr)PSend11712, (Optr)PBlock11713);
    Array PThreadedCode11707 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11708, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11711, (Optr)&t_send0, (Optr)PSend11712, (Optr)&t_push_closure, (Optr)PBlock11713, (Optr)&t_send2, (Optr)PSend11719, (Optr)&t_block_return);
    Block PBlock11706 = new_Block_with(empty_Array, empty_Array, PThreadedCode11707, 1, PSend11719);
    // class. 
    Send PSend11720 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend11721 = new_Send((Optr)PSend11720, SMB_error, 0);
    Array PArray11723 = new_Array_with(1, (Optr)VAR_signal_1_0);
    // add:. 
    Send PSend11725 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Assign PAssign11726 = new_Assign((Optr)VAR_testCasePassed_0_1, (Optr)false_Const);
    // return:. 
    Send PSend11727 = new_Send((Optr)VAR_signal_1_0, SMB_return_, 1, (Optr)false_Const);
    Array PThreadedCode11724 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11725, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11726, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_signal_1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11727, (Optr)&t_method_return);
    Block PBlock11722 = new_Block_with(PArray11723, empty_Array, PThreadedCode11724, 3, PSend11725, PAssign11726, PSend11727);
    // on:do:. 
    Send PSend11728 = new_Send((Optr)PBlock11706, SMB_on_do_, 2, (Optr)PSend11721, (Optr)PBlock11722);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // add:. 
    Send PSend11732 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_add_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11731 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11732, (Optr)&t_block_return);
    Block PBlock11730 = new_Block_with(empty_Array, empty_Array, PThreadedCode11731, 1, PSend11732);
    // ifTrue:. 
    Send PSend11729 = new_Send((Optr)VAR_testCasePassed_0_1, SMB_ifTrue_, 1, (Optr)PBlock11730);
    Array PThreadedCode11704 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign11705, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock11706, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11720, (Optr)&t_send0, (Optr)PSend11721, (Optr)&t_push_closure, (Optr)PBlock11722, (Optr)&t_send2, (Optr)PSend11728, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_testCasePassed_0_1, (Optr)&t_send_ifTrue_, (Optr)PSend11729, (Optr)PBlock11730, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11701 = new_Method_with(PArray11702, PArray11703, empty_Array, PThreadedCode11704, 4, PAssign11705, PSend11728, PSend11729, self);
    
    MethodClosure MC_SMB_runCase_ = new_MethodClosure((Method)PMethod11701, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_runCase_, MC_SMB_runCase_);
}


static void init_SMB_failureCount() {
    Symbol SMB_failureCount = new_Symbol(L"failureCount");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11735 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11736 = new_Send((Optr)PSend11735, SMB_size, 0);
    Array PThreadedCode11734 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11735, (Optr)&t_send0, (Optr)PSend11736, (Optr)&t_method_return);
    Method PMethod11733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11734, 1, PSend11736);
    
    MethodClosure MC_SMB_failureCount = new_MethodClosure((Method)PMethod11733, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failureCount, MC_SMB_failureCount);
}


static void init_SMB_resetFailures() {
    Symbol SMB_resetFailures = new_Symbol(L"resetFailures");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11740 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign11739 = new_Assign((Optr)slot_Testing_TestResult_failures, (Optr)PSend11740);
    Array PThreadedCode11738 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11739, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11740, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11738, 2, PAssign11739, self);
    
    MethodClosure MC_SMB_resetFailures = new_MethodClosure((Method)PMethod11737, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetFailures, MC_SMB_resetFailures);
}


static void init_SMB_dispatchResultsIntoHistory() {
    Symbol SMB_dispatchResultsIntoHistory = new_Symbol(L"dispatchResultsIntoHistory");
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    // classesTested. 
    Send PSend11743 = new_Send((Optr)self, SMB_classesTested, 0);
    Variable VAR_testClass_1_0 = new_Variable_named(L"testClass", 1);
    Array PArray11745 = new_Array_with(1, (Optr)VAR_testClass_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11747 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_selectResultsForTestCase_ = new_Symbol(L"selectResultsForTestCase:");
    // selectResultsForTestCase:. 
    Send PSend11748 = new_Send((Optr)self, SMB_selectResultsForTestCase_, 1, (Optr)VAR_testClass_1_0);
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    // historyAt:put:. 
    Send PSend11749 = new_Send((Optr)PSend11747, SMB_historyAt_put_, 2, (Optr)VAR_testClass_1_0, (Optr)PSend11748);
    Array PThreadedCode11746 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11747, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_testClass_1_0, (Optr)&t_send1, (Optr)PSend11748, (Optr)&t_send2, (Optr)PSend11749, (Optr)&t_method_return);
    Block PBlock11744 = new_Block_with(PArray11745, empty_Array, PThreadedCode11746, 1, PSend11749);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11750 = new_Send((Optr)PSend11743, SMB_do_, 1, (Optr)PBlock11744);
    Array PThreadedCode11742 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11743, (Optr)&t_push_closure, (Optr)PBlock11744, (Optr)&t_send1, (Optr)PSend11750, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11741 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11742, 2, PSend11750, self);
    
    MethodClosure MC_SMB_dispatchResultsIntoHistory = new_MethodClosure((Method)PMethod11741, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_dispatchResultsIntoHistory, MC_SMB_dispatchResultsIntoHistory);
}


static void init_SMB_isFailureFor_selector_() {
    Symbol SMB_isFailureFor_selector_ = new_Symbol(L"isFailureFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11752 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11754 = new_Send((Optr)self, SMB_failures, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11756 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11758 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11759 = new_Send((Optr)PSend11758, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11762 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11763 = new_Send((Optr)PSend11762, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11761 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11762, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11763, (Optr)&t_block_return);
    Block PBlock11760 = new_Block_with(empty_Array, empty_Array, PThreadedCode11761, 1, PSend11763);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11764 = new_Send((Optr)PSend11759, SMB_and_, 1, (Optr)PBlock11760);
    Array PThreadedCode11757 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11758, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11759, (Optr)&t_push_closure, (Optr)PBlock11760, (Optr)&t_send1, (Optr)PSend11764, (Optr)&t_method_return);
    Block PBlock11755 = new_Block_with(PArray11756, empty_Array, PThreadedCode11757, 1, PSend11764);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11765 = new_Send((Optr)PSend11754, SMB_anySatisfy_, 1, (Optr)PBlock11755);
    Array PThreadedCode11753 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11754, (Optr)&t_push_closure, (Optr)PBlock11755, (Optr)&t_send1, (Optr)PSend11765, (Optr)&t_method_return);
    Method PMethod11751 = new_Method_with(PArray11752, empty_Array, empty_Array, PThreadedCode11753, 1, PSend11765);
    
    MethodClosure MC_SMB_isFailureFor_selector_ = new_MethodClosure((Method)PMethod11751, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailureFor_selector_, MC_SMB_isFailureFor_selector_);
}


static void init_SMB_timeStamp() {
    Symbol SMB_timeStamp = new_Symbol(L"timeStamp");
    Array PThreadedCode11767 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_timeStamp, (Optr)&t_method_return);
    Method PMethod11766 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11767, 1, slot_Testing_TestResult_timeStamp);
    
    MethodClosure MC_SMB_timeStamp = new_MethodClosure((Method)PMethod11766, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_timeStamp, MC_SMB_timeStamp);
}


static void init_SMB_resetErrors() {
    Symbol SMB_resetErrors = new_Symbol(L"resetErrors");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11771 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign11770 = new_Assign((Optr)slot_Testing_TestResult_errors, (Optr)PSend11771);
    Array PThreadedCode11769 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11770, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11771, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11768 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11769, 2, PAssign11770, self);
    
    MethodClosure MC_SMB_resetErrors = new_MethodClosure((Method)PMethod11768, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_resetErrors, MC_SMB_resetErrors);
}


static void init_SMB_unexpectedErrors() {
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11775 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11777 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11776 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11777, (Optr)&t_method_return);
    Block PBlock11774 = new_Block_with(PArray11775, empty_Array, PThreadedCode11776, 1, PSend11777);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11778 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_select_, 1, (Optr)PBlock11774);
    Array PThreadedCode11773 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_closure, (Optr)PBlock11774, (Optr)&t_send1, (Optr)PSend11778, (Optr)&t_method_return);
    Method PMethod11772 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11773, 1, PSend11778);
    
    MethodClosure MC_SMB_unexpectedErrors = new_MethodClosure((Method)PMethod11772, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrors, MC_SMB_unexpectedErrors);
}


static void init_SMB_isFailure_() {
    Symbol SMB_isFailure_ = new_Symbol(L"isFailure:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11780 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11782 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11783 = new_Send((Optr)PSend11782, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11781 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11782, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11783, (Optr)&t_method_return);
    Method PMethod11779 = new_Method_with(PArray11780, empty_Array, empty_Array, PThreadedCode11781, 1, PSend11783);
    
    MethodClosure MC_SMB_isFailure_ = new_MethodClosure((Method)PMethod11779, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isFailure_, MC_SMB_isFailure_);
}


static void init_SMB_classesTested() {
    Symbol SMB_classesTested = new_Symbol(L"classesTested");
    Symbol SMB_tests = new_Symbol(L"tests");
    // tests. 
    Send PSend11786 = new_Send((Optr)self, SMB_tests, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11788 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11790 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Array PThreadedCode11789 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11790, (Optr)&t_method_return);
    Block PBlock11787 = new_Block_with(PArray11788, empty_Array, PThreadedCode11789, 1, PSend11790);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend11791 = new_Send((Optr)PSend11786, SMB_collect_, 1, (Optr)PBlock11787);
    Symbol SMB_asSet = new_Symbol(L"asSet");
    // asSet. 
    Send PSend11792 = new_Send((Optr)PSend11791, SMB_asSet, 0);
    Array PThreadedCode11785 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11786, (Optr)&t_push_closure, (Optr)PBlock11787, (Optr)&t_send1, (Optr)PSend11791, (Optr)&t_send0, (Optr)PSend11792, (Optr)&t_method_return);
    Method PMethod11784 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11785, 1, PSend11792);
    
    MethodClosure MC_SMB_classesTested = new_MethodClosure((Method)PMethod11784, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_classesTested, MC_SMB_classesTested);
}


static void init_SMB_unexpectedErrorCount() {
    Symbol SMB_unexpectedErrorCount = new_Symbol(L"unexpectedErrorCount");
    Symbol SMB_unexpectedErrors = new_Symbol(L"unexpectedErrors");
    // unexpectedErrors. 
    Send PSend11795 = new_Send((Optr)self, SMB_unexpectedErrors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11796 = new_Send((Optr)PSend11795, SMB_size, 0);
    Array PThreadedCode11794 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11795, (Optr)&t_send0, (Optr)PSend11796, (Optr)&t_method_return);
    Method PMethod11793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11794, 1, PSend11796);
    
    MethodClosure MC_SMB_unexpectedErrorCount = new_MethodClosure((Method)PMethod11793, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedErrorCount, MC_SMB_unexpectedErrorCount);
}


static void init_SMB_passedCount() {
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11799 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11800 = new_Send((Optr)PSend11799, SMB_size, 0);
    Array PThreadedCode11798 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11799, (Optr)&t_send0, (Optr)PSend11800, (Optr)&t_method_return);
    Method PMethod11797 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11798, 1, PSend11800);
    
    MethodClosure MC_SMB_passedCount = new_MethodClosure((Method)PMethod11797, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_passedCount, MC_SMB_passedCount);
}


static void init_SMB_failures() {
    Symbol SMB_failures = new_Symbol(L"failures");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11804 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend11806 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11807 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11806);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11808 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11805 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11806, (Optr)&t_send1, (Optr)PSend11807, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11808, (Optr)&t_method_return);
    Block PBlock11803 = new_Block_with(PArray11804, empty_Array, PThreadedCode11805, 2, PSend11807, PSend11808);
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend11809 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11810 = new_Send((Optr)PBlock11803, SMB_value_, 1, (Optr)PSend11809);
    Array PThreadedCode11802 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock11803, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11809, (Optr)&t_send1, (Optr)PSend11810, (Optr)&t_method_return);
    Method PMethod11801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11802, 1, PSend11810);
    
    MethodClosure MC_SMB_failures = new_MethodClosure((Method)PMethod11801, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_failures, MC_SMB_failures);
}


static void init_SMB_correctCount() {
    Symbol SMB_correctCount = new_Symbol(L"correctCount");
    Symbol SMB_passedCount = new_Symbol(L"passedCount");
    // passedCount. 
    Send PSend11813 = new_Send((Optr)self, SMB_passedCount, 0);
    Array PThreadedCode11812 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11813, (Optr)&t_method_return);
    Method PMethod11811 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11812, 1, PSend11813);
    
    MethodClosure MC_SMB_correctCount = new_MethodClosure((Method)PMethod11811, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_correctCount, MC_SMB_correctCount);
}


static void init_SMB_isPassed_() {
    Symbol SMB_isPassed_ = new_Symbol(L"isPassed:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11815 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_passed = new_Symbol(L"passed");
    // passed. 
    Send PSend11817 = new_Send((Optr)self, SMB_passed, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11818 = new_Send((Optr)PSend11817, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11816 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11817, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11818, (Optr)&t_method_return);
    Method PMethod11814 = new_Method_with(PArray11815, empty_Array, empty_Array, PThreadedCode11816, 1, PSend11818);
    
    MethodClosure MC_SMB_isPassed_ = new_MethodClosure((Method)PMethod11814, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isPassed_, MC_SMB_isPassed_);
}


static void init_SMB_expectedPassCount() {
    Symbol SMB_expectedPassCount = new_Symbol(L"expectedPassCount");
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    // expectedPasses. 
    Send PSend11821 = new_Send((Optr)self, SMB_expectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11822 = new_Send((Optr)PSend11821, SMB_size, 0);
    Array PThreadedCode11820 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11821, (Optr)&t_send0, (Optr)PSend11822, (Optr)&t_method_return);
    Method PMethod11819 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11820, 1, PSend11822);
    
    MethodClosure MC_SMB_expectedPassCount = new_MethodClosure((Method)PMethod11819, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPassCount, MC_SMB_expectedPassCount);
}


static void init_SMB_defects() {
    Symbol SMB_defects = new_Symbol(L"defects");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11826 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11828 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11829 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11828);
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11830 = new_Send((Optr)self, SMB_failures, 0);
    // addAll:. 
    Send PSend11831 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)PSend11830);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11832 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11827 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11828, (Optr)&t_send1, (Optr)PSend11829, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11830, (Optr)&t_send1, (Optr)PSend11831, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11832, (Optr)&t_method_return);
    Block PBlock11825 = new_Block_with(PArray11826, empty_Array, PThreadedCode11827, 3, PSend11829, PSend11831, PSend11832);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11833 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11834 = new_Send((Optr)PBlock11825, SMB_value_, 1, (Optr)PSend11833);
    Array PThreadedCode11824 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock11825, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend11833, (Optr)&t_send1, (Optr)PSend11834, (Optr)&t_method_return);
    Method PMethod11823 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11824, 1, PSend11834);
    
    MethodClosure MC_SMB_defects = new_MethodClosure((Method)PMethod11823, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_defects, MC_SMB_defects);
}


static void init_SMB_expectedDefectCount() {
    Symbol SMB_expectedDefectCount = new_Symbol(L"expectedDefectCount");
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    // expectedDefects. 
    Send PSend11837 = new_Send((Optr)self, SMB_expectedDefects, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11838 = new_Send((Optr)PSend11837, SMB_size, 0);
    Array PThreadedCode11836 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11837, (Optr)&t_send0, (Optr)PSend11838, (Optr)&t_method_return);
    Method PMethod11835 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11836, 1, PSend11838);
    
    MethodClosure MC_SMB_expectedDefectCount = new_MethodClosure((Method)PMethod11835, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefectCount, MC_SMB_expectedDefectCount);
}


static void init_SMB_expectedDefects() {
    Symbol SMB_expectedDefects = new_Symbol(L"expectedDefects");
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend11841 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_asOrderedCollection, 0);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend11842 = new_Send((Optr)slot_Testing_TestResult_errors, SMB__append_, 1, (Optr)PSend11841);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11844 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11846 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11847 = new_Send((Optr)PSend11846, SMB_not, 0);
    Array PThreadedCode11845 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11846, (Optr)&t_send0, (Optr)PSend11847, (Optr)&t_method_return);
    Block PBlock11843 = new_Block_with(PArray11844, empty_Array, PThreadedCode11845, 1, PSend11847);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11848 = new_Send((Optr)PSend11842, SMB_select_, 1, (Optr)PBlock11843);
    Array PThreadedCode11840 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend11841, (Optr)&t_send1, (Optr)PSend11842, (Optr)&t_push_closure, (Optr)PBlock11843, (Optr)&t_send1, (Optr)PSend11848, (Optr)&t_method_return);
    Method PMethod11839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11840, 1, PSend11848);
    
    MethodClosure MC_SMB_expectedDefects = new_MethodClosure((Method)PMethod11839, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedDefects, MC_SMB_expectedDefects);
}


static void init_SMB_expectedPasses() {
    Symbol SMB_expectedPasses = new_Symbol(L"expectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11852 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11854 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11853 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11854, (Optr)&t_method_return);
    Block PBlock11851 = new_Block_with(PArray11852, empty_Array, PThreadedCode11853, 1, PSend11854);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11855 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock11851);
    Array PThreadedCode11850 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock11851, (Optr)&t_send1, (Optr)PSend11855, (Optr)&t_method_return);
    Method PMethod11849 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11850, 1, PSend11855);
    
    MethodClosure MC_SMB_expectedPasses = new_MethodClosure((Method)PMethod11849, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_expectedPasses, MC_SMB_expectedPasses);
}


static void init_SMB_unexpectedFailureCount() {
    Symbol SMB_unexpectedFailureCount = new_Symbol(L"unexpectedFailureCount");
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    // unexpectedFailures. 
    Send PSend11858 = new_Send((Optr)self, SMB_unexpectedFailures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11859 = new_Send((Optr)PSend11858, SMB_size, 0);
    Array PThreadedCode11857 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11858, (Optr)&t_send0, (Optr)PSend11859, (Optr)&t_method_return);
    Method PMethod11856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11857, 1, PSend11859);
    
    MethodClosure MC_SMB_unexpectedFailureCount = new_MethodClosure((Method)PMethod11856, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailureCount, MC_SMB_unexpectedFailureCount);
}


static void init_SMB_isErrorFor_selector_() {
    Symbol SMB_isErrorFor_selector_ = new_Symbol(L"isErrorFor:selector:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray11861 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11863 = new_Send((Optr)self, SMB_errors, 0);
    Variable VAR_testCase_1_0 = new_Variable_named(L"testCase", 1);
    Array PArray11865 = new_Array_with(1, (Optr)VAR_testCase_1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11867 = new_Send((Optr)VAR_testCase_1_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11868 = new_Send((Optr)PSend11867, SMB__pequals_, 1, (Optr)VAR_class_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11871 = new_Send((Optr)VAR_testCase_1_0, SMB_selector, 0);
    // ==. 
    Send PSend11872 = new_Send((Optr)PSend11871, SMB__pequals_, 1, (Optr)VAR_selector_0_1);
    Array PThreadedCode11870 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11871, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_send1, (Optr)PSend11872, (Optr)&t_block_return);
    Block PBlock11869 = new_Block_with(empty_Array, empty_Array, PThreadedCode11870, 1, PSend11872);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend11873 = new_Send((Optr)PSend11868, SMB_and_, 1, (Optr)PBlock11869);
    Array PThreadedCode11866 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_testCase_1_0, (Optr)&t_send0, (Optr)PSend11867, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_send1, (Optr)PSend11868, (Optr)&t_push_closure, (Optr)PBlock11869, (Optr)&t_send1, (Optr)PSend11873, (Optr)&t_method_return);
    Block PBlock11864 = new_Block_with(PArray11865, empty_Array, PThreadedCode11866, 1, PSend11873);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend11874 = new_Send((Optr)PSend11863, SMB_anySatisfy_, 1, (Optr)PBlock11864);
    Array PThreadedCode11862 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11863, (Optr)&t_push_closure, (Optr)PBlock11864, (Optr)&t_send1, (Optr)PSend11874, (Optr)&t_method_return);
    Method PMethod11860 = new_Method_with(PArray11861, empty_Array, empty_Array, PThreadedCode11862, 1, PSend11874);
    
    MethodClosure MC_SMB_isErrorFor_selector_ = new_MethodClosure((Method)PMethod11860, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isErrorFor_selector_, MC_SMB_isErrorFor_selector_);
}


static void init_SMB_hasErrors() {
    Symbol SMB_hasErrors = new_Symbol(L"hasErrors");
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11877 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11878 = new_Send((Optr)PSend11877, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend11879 = new_Send((Optr)PSend11878, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode11876 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11877, (Optr)&t_send0, (Optr)PSend11878, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11879, (Optr)&t_method_return);
    Method PMethod11875 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11876, 1, PSend11879);
    
    MethodClosure MC_SMB_hasErrors = new_MethodClosure((Method)PMethod11875, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasErrors, MC_SMB_hasErrors);
}


static void init_SMB_unexpectedPasses() {
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11883 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11885 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11886 = new_Send((Optr)PSend11885, SMB_not, 0);
    Array PThreadedCode11884 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11885, (Optr)&t_send0, (Optr)PSend11886, (Optr)&t_method_return);
    Block PBlock11882 = new_Block_with(PArray11883, empty_Array, PThreadedCode11884, 1, PSend11886);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11887 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_select_, 1, (Optr)PBlock11882);
    Array PThreadedCode11881 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_push_closure, (Optr)PBlock11882, (Optr)&t_send1, (Optr)PSend11887, (Optr)&t_method_return);
    Method PMethod11880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11881, 1, PSend11887);
    
    MethodClosure MC_SMB_unexpectedPasses = new_MethodClosure((Method)PMethod11880, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPasses, MC_SMB_unexpectedPasses);
}


static void init_SMB_isError_() {
    Symbol SMB_isError_ = new_Symbol(L"isError:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Array PArray11889 = new_Array_with(1, (Optr)VAR_aTestCase_0_0);
    Symbol SMB_errors = new_Symbol(L"errors");
    // errors. 
    Send PSend11891 = new_Send((Optr)self, SMB_errors, 0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend11892 = new_Send((Optr)PSend11891, SMB_includes_, 1, (Optr)VAR_aTestCase_0_0);
    Array PThreadedCode11890 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11891, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send1, (Optr)PSend11892, (Optr)&t_method_return);
    Method PMethod11888 = new_Method_with(PArray11889, empty_Array, empty_Array, PThreadedCode11890, 1, PSend11892);
    
    MethodClosure MC_SMB_isError_ = new_MethodClosure((Method)PMethod11888, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_isError_, MC_SMB_isError_);
}


static void init_SMB_unexpectedPassCount() {
    Symbol SMB_unexpectedPassCount = new_Symbol(L"unexpectedPassCount");
    Symbol SMB_unexpectedPasses = new_Symbol(L"unexpectedPasses");
    // unexpectedPasses. 
    Send PSend11895 = new_Send((Optr)self, SMB_unexpectedPasses, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11896 = new_Send((Optr)PSend11895, SMB_size, 0);
    Array PThreadedCode11894 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11895, (Optr)&t_send0, (Optr)PSend11896, (Optr)&t_method_return);
    Method PMethod11893 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11894, 1, PSend11896);
    
    MethodClosure MC_SMB_unexpectedPassCount = new_MethodClosure((Method)PMethod11893, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedPassCount, MC_SMB_unexpectedPassCount);
}


static void init_SMB_runCount() {
    Symbol SMB_runCount = new_Symbol(L"runCount");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11899 = new_Send((Optr)slot_Testing_TestResult_passed, SMB_size, 0);
    // size. 
    Send PSend11900 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend11901 = new_Send((Optr)PSend11899, SMB__plus_, 1, (Optr)PSend11900);
    // size. 
    Send PSend11902 = new_Send((Optr)slot_Testing_TestResult_errors, SMB_size, 0);
    // +. 
    Send PSend11903 = new_Send((Optr)PSend11901, SMB__plus_, 1, (Optr)PSend11902);
    Array PThreadedCode11898 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send0, (Optr)PSend11899, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send0, (Optr)PSend11900, (Optr)&t_send1, (Optr)PSend11901, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send0, (Optr)PSend11902, (Optr)&t_send1, (Optr)PSend11903, (Optr)&t_method_return);
    Method PMethod11897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11898, 1, PSend11903);
    
    MethodClosure MC_SMB_runCount = new_MethodClosure((Method)PMethod11897, Testing_TestResult_Class);
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
    Send PSend11906 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_status_1_0 = new_Variable_named(L"status", 1);
    Array PArray11908 = new_Array_with(1, (Optr)VAR_status_1_0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend11910 = new_Send((Optr)self, SMB_perform_, 1, (Optr)VAR_status_1_0);
    Variable VAR_testCase_2_0 = new_Variable_named(L"testCase", 2);
    Array PArray11912 = new_Array_with(1, (Optr)VAR_testCase_2_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11914 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    // updateTestHistoryFor:status:. 
    Send PSend11915 = new_Send((Optr)PSend11914, SMB_updateTestHistoryFor_status_, 2, (Optr)VAR_testCase_2_0, (Optr)VAR_status_1_0);
    Array PThreadedCode11913 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11914, (Optr)&t_push_variable, (Optr)VAR_testCase_2_0, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send2, (Optr)PSend11915, (Optr)&t_method_return);
    Block PBlock11911 = new_Block_with(PArray11912, empty_Array, PThreadedCode11913, 1, PSend11915);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend11916 = new_Send((Optr)PSend11910, SMB_do_, 1, (Optr)PBlock11911);
    Array PThreadedCode11909 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_status_1_0, (Optr)&t_send1, (Optr)PSend11910, (Optr)&t_push_closure, (Optr)PBlock11911, (Optr)&t_send1, (Optr)PSend11916, (Optr)&t_method_return);
    Block PBlock11907 = new_Block_with(PArray11908, empty_Array, PThreadedCode11909, 1, PSend11916);
    // do:. 
    Send PSend11917 = new_Send((Optr)PSend11906, SMB_do_, 1, (Optr)PBlock11907);
    Array PThreadedCode11905 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend11906, (Optr)&t_push_closure, (Optr)PBlock11907, (Optr)&t_send1, (Optr)PSend11917, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11904 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11905, 2, PSend11917, self);
    
    MethodClosure MC_SMB_updateResultsInHistory = new_MethodClosure((Method)PMethod11904, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_updateResultsInHistory, MC_SMB_updateResultsInHistory);
}


static void init_SMB_unexpectedFailures() {
    Symbol SMB_unexpectedFailures = new_Symbol(L"unexpectedFailures");
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray11921 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_shouldPass = new_Symbol(L"shouldPass");
    // shouldPass. 
    Send PSend11923 = new_Send((Optr)VAR_each_1_0, SMB_shouldPass, 0);
    Array PThreadedCode11922 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend11923, (Optr)&t_method_return);
    Block PBlock11920 = new_Block_with(PArray11921, empty_Array, PThreadedCode11922, 1, PSend11923);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend11924 = new_Send((Optr)slot_Testing_TestResult_failures, SMB_select_, 1, (Optr)PBlock11920);
    Array PThreadedCode11919 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_push_closure, (Optr)PBlock11920, (Optr)&t_send1, (Optr)PSend11924, (Optr)&t_method_return);
    Method PMethod11918 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11919, 1, PSend11924);
    
    MethodClosure MC_SMB_unexpectedFailures = new_MethodClosure((Method)PMethod11918, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_unexpectedFailures, MC_SMB_unexpectedFailures);
}


static void init_SMB_tests() {
    Symbol SMB_tests = new_Symbol(L"tests");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11928 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend11930 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_passed);
    // addAll:. 
    Send PSend11931 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_failures);
    // addAll:. 
    Send PSend11932 = new_Send((Optr)VAR__receiver__1_0, SMB_addAll_, 1, (Optr)slot_Testing_TestResult_errors);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11933 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11929 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_passed, (Optr)&t_send1, (Optr)PSend11930, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_failures, (Optr)&t_send1, (Optr)PSend11931, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Testing_TestResult_errors, (Optr)&t_send1, (Optr)PSend11932, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11933, (Optr)&t_method_return);
    Block PBlock11927 = new_Block_with(PArray11928, empty_Array, PThreadedCode11929, 4, PSend11930, PSend11931, PSend11932, PSend11933);
    Symbol SMB_runCount = new_Symbol(L"runCount");
    // runCount. 
    Send PSend11934 = new_Send((Optr)self, SMB_runCount, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend11935 = new_Send((Optr)OrderedCollection_classReference, SMB_new_, 1, (Optr)PSend11934);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11936 = new_Send((Optr)PBlock11927, SMB_value_, 1, (Optr)PSend11935);
    Array PThreadedCode11926 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_closure, (Optr)PBlock11927, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11934, (Optr)&t_send1, (Optr)PSend11935, (Optr)&t_send1, (Optr)PSend11936, (Optr)&t_method_return);
    Method PMethod11925 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11926, 1, PSend11936);
    
    MethodClosure MC_SMB_tests = new_MethodClosure((Method)PMethod11925, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_tests, MC_SMB_tests);
}


static void init_SMB_hasFailures() {
    Symbol SMB_hasFailures = new_Symbol(L"hasFailures");
    Symbol SMB_failures = new_Symbol(L"failures");
    // failures. 
    Send PSend11939 = new_Send((Optr)self, SMB_failures, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend11940 = new_Send((Optr)PSend11939, SMB_size, 0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend11941 = new_Send((Optr)PSend11940, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode11938 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11939, (Optr)&t_send0, (Optr)PSend11940, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend11941, (Optr)&t_method_return);
    Method PMethod11937 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11938, 1, PSend11941);
    
    MethodClosure MC_SMB_hasFailures = new_MethodClosure((Method)PMethod11937, Testing_TestResult_Class);
    store_method(Testing_TestResult_Class, SMB_hasFailures, MC_SMB_hasFailures);
}


static void init_class_SMB_historyAt_() {
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11943 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend11945 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Array PThreadedCode11944 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend11945, (Optr)&t_method_return);
    Method PMethod11942 = new_Method_with(PArray11943, empty_Array, empty_Array, PThreadedCode11944, 1, PSend11945);
    
    MethodClosure MC_SMB_historyAt_ = new_MethodClosure((Method)PMethod11942, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_, MC_SMB_historyAt_);
}


static void init_class_SMB_resumableFailure() {
    Symbol SMB_resumableFailure = new_Symbol(L"resumableFailure");
    Array PThreadedCode11947 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)ResumableTestFailure_classReference, (Optr)&t_method_return);
    Method PMethod11946 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11947, 1, ResumableTestFailure_classReference);
    
    MethodClosure MC_SMB_resumableFailure = new_MethodClosure((Method)PMethod11946, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_resumableFailure, MC_SMB_resumableFailure);
}


static void init_class_SMB_failure() {
    Symbol SMB_failure = new_Symbol(L"failure");
    Array PThreadedCode11949 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestFailure_classReference, (Optr)&t_method_return);
    Method PMethod11948 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11949, 1, TestFailure_classReference);
    
    MethodClosure MC_SMB_failure = new_MethodClosure((Method)PMethod11948, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_failure, MC_SMB_failure);
}


static void init_class_SMB_updateTestHistoryFor_status_() {
    Symbol SMB_updateTestHistoryFor_status_ = new_Symbol(L"updateTestHistoryFor:status:");
    Variable VAR_aTestCase_0_0 = new_Variable_named(L"aTestCase", 0);
    Variable VAR_aSymbol_0_1 = new_Variable_named(L"aSymbol", 0);
    Array PArray11951 = new_Array_with(2, (Optr)VAR_aTestCase_0_0, (Optr)VAR_aSymbol_0_1);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_3 = new_Variable_named(L"sel", 0);
    Array PArray11952 = new_Array_with(2, (Optr)VAR_cls_0_2, (Optr)VAR_sel_0_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend11955 = new_Send((Optr)VAR_aTestCase_0_0, SMB_class, 0);
    Assign PAssign11954 = new_Assign((Optr)VAR_cls_0_2, (Optr)PSend11955);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend11957 = new_Send((Optr)VAR_aTestCase_0_0, SMB_selector, 0);
    Assign PAssign11956 = new_Assign((Optr)VAR_sel_0_3, (Optr)PSend11957);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend11958 = new_Send((Optr)self, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_3, (Optr)VAR_cls_0_2);
    Symbol SMB_historyAt_ = new_Symbol(L"historyAt:");
    // historyAt:. 
    Send PSend11959 = new_Send((Optr)self, SMB_historyAt_, 1, (Optr)VAR_cls_0_2);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend11960 = new_Send((Optr)PSend11959, SMB_at_, 1, (Optr)VAR_aSymbol_0_1);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend11961 = new_Send((Optr)PSend11960, SMB_add_, 1, (Optr)VAR_sel_0_3);
    Array PThreadedCode11953 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign11954, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11955, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11956, (Optr)&t_push_variable, (Optr)VAR_aTestCase_0_0, (Optr)&t_send0, (Optr)PSend11957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend11958, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send1, (Optr)PSend11959, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_1, (Optr)&t_send1, (Optr)PSend11960, (Optr)&t_push_variable, (Optr)VAR_sel_0_3, (Optr)&t_send1, (Optr)PSend11961, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11950 = new_Method_with(PArray11951, PArray11952, empty_Array, PThreadedCode11953, 5, PAssign11954, PAssign11956, PSend11958, PSend11961, self);
    
    MethodClosure MC_SMB_updateTestHistoryFor_status_ = new_MethodClosure((Method)PMethod11950, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_updateTestHistoryFor_status_, MC_SMB_updateTestHistoryFor_status_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray11965 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend11967 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend11968 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend11969 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend11968);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend11970 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend11971 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend11970);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend11972 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend11973 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend11972);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend11974 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode11966 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend11967, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11968, (Optr)&t_send2, (Optr)PSend11969, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11970, (Optr)&t_send2, (Optr)PSend11971, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend11972, (Optr)&t_send2, (Optr)PSend11973, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend11974, (Optr)&t_method_return);
    Block PBlock11964 = new_Block_with(PArray11965, empty_Array, PThreadedCode11966, 5, PSend11967, PSend11969, PSend11971, PSend11973, PSend11974);
    // new. 
    Send PSend11975 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11976 = new_Send((Optr)PBlock11964, SMB_value_, 1, (Optr)PSend11975);
    Array PThreadedCode11963 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock11964, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend11975, (Optr)&t_send1, (Optr)PSend11976, (Optr)&t_method_return);
    Method PMethod11962 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11963, 1, PSend11976);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod11962, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_historyFor_() {
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray11978 = new_Array_with(1, (Optr)VAR_aTestCaseClass_0_0);
    Variable VAR_history_0_1 = new_Variable_named(L"history", 0);
    Array PArray11979 = new_Array_with(1, (Optr)VAR_history_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray11982 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_history = new_Symbol(L"history");
    // history. 
    Send PSend11985 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history, 0);
    Assign PAssign11984 = new_Assign((Optr)VAR_history_0_1, (Optr)PSend11985);
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend11988 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend11989 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend11988);
    Array PThreadedCode11987 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11988, (Optr)&t_send1, (Optr)PSend11989, (Optr)&t_block_return);
    Block PBlock11986 = new_Block_with(empty_Array, empty_Array, PThreadedCode11987, 1, PSend11989);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend11990 = new_Send((Optr)VAR_history_0_1, SMB_ifNil_, 1, (Optr)PBlock11986);
    Array PThreadedCode11983 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign11984, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_send0, (Optr)PSend11985, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_push_closure, (Optr)PBlock11986, (Optr)&t_send1, (Optr)PSend11990, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_history_0_1, (Optr)&t_method_return);
    Block PBlock11981 = new_Block_with(PArray11982, empty_Array, PThreadedCode11983, 3, PAssign11984, PSend11990, VAR_history_0_1);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend11991 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock11981);
    Array PThreadedCode11980 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock11981, (Optr)&t_send1, (Optr)PSend11991, (Optr)&t_method_return);
    Method PMethod11977 = new_Method_with(PArray11978, PArray11979, empty_Array, PThreadedCode11980, 1, PSend11991);
    
    MethodClosure MC_SMB_historyFor_ = new_MethodClosure((Method)PMethod11977, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyFor_, MC_SMB_historyFor_);
}


static void init_class_SMB_signalFailureWith_() {
    Symbol SMB_signalFailureWith_ = new_Symbol(L"signalFailureWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11993 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_failure = new_Symbol(L"failure");
    // failure. 
    Send PSend11995 = new_Send((Optr)self, SMB_failure, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend11996 = new_Send((Optr)PSend11995, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode11994 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11995, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend11996, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11992 = new_Method_with(PArray11993, empty_Array, empty_Array, PThreadedCode11994, 2, PSend11996, self);
    
    MethodClosure MC_SMB_signalFailureWith_ = new_MethodClosure((Method)PMethod11992, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalFailureWith_, MC_SMB_signalFailureWith_);
}


static void init_class_SMB_signalErrorWith_() {
    Symbol SMB_signalErrorWith_ = new_Symbol(L"signalErrorWith:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray11998 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_error = new_Symbol(L"error");
    // error. 
    Send PSend12000 = new_Send((Optr)self, SMB_error, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend12001 = new_Send((Optr)PSend12000, SMB_signal_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode11999 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12000, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend12001, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11997 = new_Method_with(PArray11998, empty_Array, empty_Array, PThreadedCode11999, 2, PSend12001, self);
    
    MethodClosure MC_SMB_signalErrorWith_ = new_MethodClosure((Method)PMethod11997, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_signalErrorWith_, MC_SMB_signalErrorWith_);
}


static void init_class_SMB_exError() {
    Symbol SMB_exError = new_Symbol(L"exError");
    Array PThreadedCode12003 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)Error_classReference, (Optr)&t_method_return);
    Method PMethod12002 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12003, 1, Error_classReference);
    
    MethodClosure MC_SMB_exError = new_MethodClosure((Method)PMethod12002, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_exError, MC_SMB_exError);
}


static void init_class_SMB_historyAt_put_() {
    Symbol SMB_historyAt_put_ = new_Symbol(L"historyAt:put:");
    Variable VAR_aTestCaseClass_0_0 = new_Variable_named(L"aTestCaseClass", 0);
    Variable VAR_aDictionary_0_1 = new_Variable_named(L"aDictionary", 0);
    Array PArray12005 = new_Array_with(2, (Optr)VAR_aTestCaseClass_0_0, (Optr)VAR_aDictionary_0_1);
    Symbol SMB_history_ = new_Symbol(L"history:");
    // history:. 
    Send PSend12007 = new_Send((Optr)VAR_aTestCaseClass_0_0, SMB_history_, 1, (Optr)VAR_aDictionary_0_1);
    Array PThreadedCode12006 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_0, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_1, (Optr)&t_send1, (Optr)PSend12007, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12004 = new_Method_with(PArray12005, empty_Array, empty_Array, PThreadedCode12006, 2, PSend12007, self);
    
    MethodClosure MC_SMB_historyAt_put_ = new_MethodClosure((Method)PMethod12004, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_historyAt_put_, MC_SMB_historyAt_put_);
}


static void init_class_SMB_removeFromTestHistory_in_() {
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Variable VAR_aTestCaseClass_0_1 = new_Variable_named(L"aTestCaseClass", 0);
    Array PArray12009 = new_Array_with(2, (Optr)VAR_aSelector_0_0, (Optr)VAR_aTestCaseClass_0_1);
    Variable VAR_lastRun_0_2 = new_Variable_named(L"lastRun", 0);
    Array PArray12010 = new_Array_with(1, (Optr)VAR_lastRun_0_2);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend12013 = new_Send((Optr)self, SMB_historyFor_, 1, (Optr)VAR_aTestCaseClass_0_1);
    Assign PAssign12012 = new_Assign((Optr)VAR_lastRun_0_2, (Optr)PSend12013);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend12014 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Variable VAR_set_1_0 = new_Variable_named(L"set", 1);
    Array PArray12016 = new_Array_with(1, (Optr)VAR_set_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12018 = new_Send((Optr)VAR_lastRun_0_2, SMB_at_, 1, (Optr)VAR_set_1_0);
    Array PThreadedCode12020 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_nil);
    Block PBlock12019 = new_Block_with(empty_Array, empty_Array, PThreadedCode12020, 0);
    Symbol SMB_remove_ifAbsent_ = new_Symbol(L"remove:ifAbsent:");
    // remove:ifAbsent:. 
    Send PSend12021 = new_Send((Optr)PSend12018, SMB_remove_ifAbsent_, 2, (Optr)VAR_aSelector_0_0, (Optr)PBlock12019);
    Array PThreadedCode12017 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_lastRun_0_2, (Optr)&t_push_variable, (Optr)VAR_set_1_0, (Optr)&t_send1, (Optr)PSend12018, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_push_closure, (Optr)PBlock12019, (Optr)&t_send2, (Optr)PSend12021, (Optr)&t_method_return);
    Block PBlock12015 = new_Block_with(PArray12016, empty_Array, PThreadedCode12017, 1, PSend12021);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12022 = new_Send((Optr)PSend12014, SMB_do_, 1, (Optr)PBlock12015);
    Array PThreadedCode12011 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12012, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aTestCaseClass_0_1, (Optr)&t_send1, (Optr)PSend12013, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend12014, (Optr)&t_push_closure, (Optr)PBlock12015, (Optr)&t_send1, (Optr)PSend12022, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12008 = new_Method_with(PArray12009, PArray12010, empty_Array, PThreadedCode12011, 3, PAssign12012, PSend12022, self);
    
    MethodClosure MC_SMB_removeFromTestHistory_in_ = new_MethodClosure((Method)PMethod12008, HEADER(Testing_TestResult_Class));
    store_method(HEADER(Testing_TestResult_Class), SMB_removeFromTestHistory_in_, MC_SMB_removeFromTestHistory_in_);
}


static void init_class_SMB_error() {
    Symbol SMB_error = new_Symbol(L"error");
    Symbol SMB_exError = new_Symbol(L"exError");
    // exError. 
    Send PSend12025 = new_Send((Optr)self, SMB_exError, 0);
    Array PThreadedCode12024 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12025, (Optr)&t_method_return);
    Method PMethod12023 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12024, 1, PSend12025);
    
    MethodClosure MC_SMB_error = new_MethodClosure((Method)PMethod12023, HEADER(Testing_TestResult_Class));
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