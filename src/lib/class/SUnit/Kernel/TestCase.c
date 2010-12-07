#include <lib/class/SUnit/Kernel/TestCase.h>


Optr slot_SUnit_Kernel_TestCase_Class_class_history;
Optr layout_SUnit_Kernel_TestCase_Class_class;
Optr slot_SUnit_Kernel_TestCase_testSelector;
Optr layout_SUnit_Kernel_TestCase;


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode383 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod382 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode383, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod382, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_setTestSelector_() {
    Symbol SMB_setTestSelector_ = new_Symbol(L"setTestSelector:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray385 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Assign PAssign387 = new_Assign((Optr)slot_SUnit_Kernel_TestCase_testSelector, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode386 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign387, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod384 = new_Method_with(PArray385, empty_Array, empty_Array, PThreadedCode386, 2, PAssign387, self);
    
    MethodClosure MC_SMB_setTestSelector_ = new_MethodClosure((Method)PMethod384, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_setTestSelector_, MC_SMB_setTestSelector_);
}


static void init_SMB_resources() {
    /*
    resources
// 
// 	^Array new
// 			
    */
    Symbol SMB_resources = new_Symbol(L"resources");
    Variable VAR_allResources_0_0 = new_Variable_named(L"allResources", 0);
    Variable VAR_resourceQueue_0_1 = new_Variable_named(L"resourceQueue", 0);
    Array PArray389 = new_Array_with(2, (Optr)VAR_allResources_0_0, (Optr)VAR_resourceQueue_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend392 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign391 = new_Assign((Optr)VAR_allResources_0_0, (Optr)PSend392);
    // new. 
    Send PSend394 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign393 = new_Assign((Optr)VAR_resourceQueue_0_1, (Optr)PSend394);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend395 = new_Send((Optr)self, SMB_class, 0);
    // resources. 
    Send PSend396 = new_Send((Optr)PSend395, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend397 = new_Send((Optr)VAR_resourceQueue_0_1, SMB_addAll_, 1, (Optr)PSend396);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend400 = new_Send((Optr)VAR_resourceQueue_0_1, SMB_isEmpty, 0);
    Array PThreadedCode399 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_resourceQueue_0_1, (Optr)&t_send0, (Optr)PSend400, (Optr)&t_block_return);
    Block PBlock398 = new_Block_with(empty_Array, empty_Array, PThreadedCode399, 1, PSend400);
    Variable VAR_next_1_0 = new_Variable_named(L"next", 1);
    Array PArray402 = new_Array_with(1, (Optr)VAR_next_1_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend405 = new_Send((Optr)VAR_resourceQueue_0_1, SMB_removeFirst, 0);
    Assign PAssign404 = new_Assign((Optr)VAR_next_1_0, (Optr)PSend405);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend406 = new_Send((Optr)VAR_allResources_0_0, SMB_add_, 1, (Optr)VAR_next_1_0);
    // resources. 
    Send PSend407 = new_Send((Optr)VAR_next_1_0, SMB_resources, 0);
    // addAll:. 
    Send PSend408 = new_Send((Optr)VAR_resourceQueue_0_1, SMB_addAll_, 1, (Optr)PSend407);
    Array PThreadedCode403 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign404, (Optr)&t_push_variable, (Optr)VAR_resourceQueue_0_1, (Optr)&t_send0, (Optr)PSend405, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_allResources_0_0, (Optr)&t_push_variable, (Optr)VAR_next_1_0, (Optr)&t_send1, (Optr)PSend406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resourceQueue_0_1, (Optr)&t_push_variable, (Optr)VAR_next_1_0, (Optr)&t_send0, (Optr)PSend407, (Optr)&t_send1, (Optr)PSend408, (Optr)&t_method_return);
    Block PBlock401 = new_Block_with(empty_Array, PArray402, PThreadedCode403, 3, PAssign404, PSend406, PSend408);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend409 = new_Send((Optr)PBlock398, SMB_whileFalse_, 1, (Optr)PBlock401);
    Array PThreadedCode390 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign391, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend392, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign393, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend394, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resourceQueue_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend395, (Optr)&t_send0, (Optr)PSend396, (Optr)&t_send1, (Optr)PSend397, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock398, (Optr)&t_push_closure, (Optr)PBlock401, (Optr)&t_send1, (Optr)PSend409, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_allResources_0_0, (Optr)&t_method_return);
    Method PMethod388 = new_Method_with(empty_Array, PArray389, empty_Array, PThreadedCode390, 5, PAssign391, PAssign393, PSend397, PSend409, VAR_allResources_0_0);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod388, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_resources, MC_SMB_resources);
}


static void init_SMB_run_() {
    /*
    run: aSymbol
// 
// 	^(self selector: aSymbol) run
// 			
    */
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray411 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    // runCase:. 
    Send PSend413 = new_Send((Optr)VAR_aResult_0_0, SMB_runCase_, 1, (Optr)self);
    Array PThreadedCode412 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend413, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod410 = new_Method_with(PArray411, empty_Array, empty_Array, PThreadedCode412, 2, PSend413, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod410, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_runCase() {
    Symbol SMB_runCase = new_Symbol(L"runCase");
    Symbol SMB_setUp = new_Symbol(L"setUp");
    // setUp. 
    Send PSend418 = new_Send((Optr)self, SMB_setUp, 0);
    Symbol SMB_performTest = new_Symbol(L"performTest");
    // performTest. 
    Send PSend419 = new_Send((Optr)self, SMB_performTest, 0);
    Array PThreadedCode417 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend418, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend419, (Optr)&t_block_return);
    Block PBlock416 = new_Block_with(empty_Array, empty_Array, PThreadedCode417, 2, PSend418, PSend419);
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    // tearDown. 
    Send PSend422 = new_Send((Optr)self, SMB_tearDown, 0);
    Symbol SMB_cleanUpInstanceVariables = new_Symbol(L"cleanUpInstanceVariables");
    // cleanUpInstanceVariables. 
    Send PSend423 = new_Send((Optr)self, SMB_cleanUpInstanceVariables, 0);
    Array PThreadedCode421 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend422, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend423, (Optr)&t_block_return);
    Block PBlock420 = new_Block_with(empty_Array, empty_Array, PThreadedCode421, 2, PSend422, PSend423);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend424 = new_Send((Optr)PBlock416, SMB_ensure_, 1, (Optr)PBlock420);
    Array PThreadedCode415 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock416, (Optr)&t_push_closure, (Optr)PBlock420, (Optr)&t_send1, (Optr)PSend424, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod414 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode415, 2, PSend424, self);
    
    MethodClosure MC_SMB_runCase = new_MethodClosure((Method)PMethod414, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_runCase, MC_SMB_runCase);
}


static void init_SMB_performTest() {
    Symbol SMB_performTest = new_Symbol(L"performTest");
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend427 = new_Send((Optr)slot_SUnit_Kernel_TestCase_testSelector, SMB_asSymbol, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend428 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend427);
    Array PThreadedCode426 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_SUnit_Kernel_TestCase_testSelector, (Optr)&t_send0, (Optr)PSend427, (Optr)&t_send1, (Optr)PSend428, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod425 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode426, 2, PSend428, self);
    
    MethodClosure MC_SMB_performTest = new_MethodClosure((Method)PMethod425, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_performTest, MC_SMB_performTest);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Array PThreadedCode430 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod429 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode430, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod429, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_cleanUpInstanceVariables() {
    Symbol SMB_cleanUpInstanceVariables = new_Symbol(L"cleanUpInstanceVariables");
    Array PThreadedCode432 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod431 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode432, 1, self);
    
    MethodClosure MC_SMB_cleanUpInstanceVariables = new_MethodClosure((Method)PMethod431, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_cleanUpInstanceVariables, MC_SMB_cleanUpInstanceVariables);
}


static void init_class_SMB_testSelectors() {
    Symbol SMB_testSelectors = new_Symbol(L"testSelectors");
    Symbol SMB_selectors = new_Symbol(L"selectors");
    // selectors. 
    Send PSend435 = new_Send((Optr)self, SMB_selectors, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend436 = new_Send((Optr)PSend435, SMB_asArray, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray438 = new_Array_with(1, (Optr)VAR_each_1_0);
    String string_440 = new_String(L"test");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_440_Const = new_Constant((Optr)string_440);
    // beginsWith:. 
    Send PSend441 = new_Send((Optr)VAR_each_1_0, SMB_beginsWith_, 1, (Optr)string_440_Const);
    Character char_444 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // includes:. 
    Send PSend445 = new_Send((Optr)VAR_each_1_0, SMB_includes_, 1, (Optr)char_444_Const);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend446 = new_Send((Optr)PSend445, SMB_not, 0);
    Array PThreadedCode443 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend445, (Optr)&t_send0, (Optr)PSend446, (Optr)&t_block_return);
    Block PBlock442 = new_Block_with(empty_Array, empty_Array, PThreadedCode443, 1, PSend446);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend447 = new_Send((Optr)PSend441, SMB_and_, 1, (Optr)PBlock442);
    Array PThreadedCode439 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push1, (Optr)string_440, (Optr)&t_send1, (Optr)PSend441, (Optr)&t_push_closure, (Optr)PBlock442, (Optr)&t_send1, (Optr)PSend447, (Optr)&t_method_return);
    Block PBlock437 = new_Block_with(PArray438, empty_Array, PThreadedCode439, 1, PSend447);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend448 = new_Send((Optr)PSend436, SMB_select_, 1, (Optr)PBlock437);
    Array PThreadedCode434 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend435, (Optr)&t_send0, (Optr)PSend436, (Optr)&t_push_closure, (Optr)PBlock437, (Optr)&t_send1, (Optr)PSend448, (Optr)&t_method_return);
    Method PMethod433 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode434, 1, PSend448);
    
    MethodClosure MC_SMB_testSelectors = new_MethodClosure((Method)PMethod433, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_testSelectors, MC_SMB_testSelectors);
}


static void init_class_SMB_browserIcon_selector_() {
    Symbol SMB_browserIcon_selector_ = new_Symbol(L"browserIcon:selector:");
    Variable VAR_aClassDescription_0_0 = new_Variable_named(L"aClassDescription", 0);
    Variable VAR_aSelector_0_1 = new_Variable_named(L"aSelector", 0);
    Array PArray450 = new_Array_with(2, (Optr)VAR_aClassDescription_0_0, (Optr)VAR_aSelector_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray453 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isMeta = new_Symbol(L"isMeta");
    // isMeta. 
    Send PSend455 = new_Send((Optr)VAR_aClassDescription_0_0, SMB_isMeta, 0);
    Symbol SMB_isAbstract = new_Symbol(L"isAbstract");
    // isAbstract. 
    Send PSend458 = new_Send((Optr)VAR_aClassDescription_0_0, SMB_isAbstract, 0);
    String string_461 = new_String(L"test");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_461_Const = new_Constant((Optr)string_461);
    // beginsWith:. 
    Send PSend462 = new_Send((Optr)VAR_aSelector_0_1, SMB_beginsWith_, 1, (Optr)string_461_Const);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend463 = new_Send((Optr)PSend462, SMB_not, 0);
    Array PThreadedCode460 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_1, (Optr)&t_push1, (Optr)string_461, (Optr)&t_send1, (Optr)PSend462, (Optr)&t_send0, (Optr)PSend463, (Optr)&t_block_return);
    Block PBlock459 = new_Block_with(empty_Array, empty_Array, PThreadedCode460, 1, PSend463);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend464 = new_Send((Optr)PSend458, SMB_or_, 1, (Optr)PBlock459);
    Array PThreadedCode457 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_send0, (Optr)PSend458, (Optr)&t_push_closure, (Optr)PBlock459, (Optr)&t_send1, (Optr)PSend464, (Optr)&t_block_return);
    Block PBlock456 = new_Block_with(empty_Array, empty_Array, PThreadedCode457, 1, PSend464);
    // or:. 
    Send PSend465 = new_Send((Optr)PSend455, SMB_or_, 1, (Optr)PBlock456);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper469 = new_Super(SMB_browserIcon_selector_, 2, (Optr)VAR_aClassDescription_0_0, (Optr)VAR_aSelector_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend470 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper469);
    Array PThreadedCode468 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_1, (Optr)&t_super2, (Optr)PSuper469, (Optr)&t_send1, (Optr)PSend470, (Optr)&t_block_return);
    Block PBlock467 = new_Block_with(empty_Array, empty_Array, PThreadedCode468, 1, PSend470);
    // ifTrue:. 
    Send PSend466 = new_Send((Optr)PSend465, SMB_ifTrue_, 1, (Optr)PBlock467);
    Symbol SMB_methodRaisedError_ = new_Symbol(L"methodRaisedError:");
    // methodRaisedError:. 
    Send PSend471 = new_Send((Optr)VAR_aClassDescription_0_0, SMB_methodRaisedError_, 1, (Optr)VAR_aSelector_0_1);
    Symbol  SMB_testRed = new_Symbol(L"testRed");
    Constant SMB_testRed_Const = new_Constant((Optr)SMB_testRed);
    // escape:. 
    Send PSend475 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testRed_Const);
    Array PThreadedCode474 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testRed, (Optr)&t_send1, (Optr)PSend475, (Optr)&t_block_return);
    Block PBlock473 = new_Block_with(empty_Array, empty_Array, PThreadedCode474, 1, PSend475);
    // ifTrue:. 
    Send PSend472 = new_Send((Optr)PSend471, SMB_ifTrue_, 1, (Optr)PBlock473);
    Symbol SMB_methodFailed_ = new_Symbol(L"methodFailed:");
    // methodFailed:. 
    Send PSend476 = new_Send((Optr)VAR_aClassDescription_0_0, SMB_methodFailed_, 1, (Optr)VAR_aSelector_0_1);
    Symbol  SMB_testOrange = new_Symbol(L"testOrange");
    Constant SMB_testOrange_Const = new_Constant((Optr)SMB_testOrange);
    // escape:. 
    Send PSend480 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testOrange_Const);
    Array PThreadedCode479 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testOrange, (Optr)&t_send1, (Optr)PSend480, (Optr)&t_block_return);
    Block PBlock478 = new_Block_with(empty_Array, empty_Array, PThreadedCode479, 1, PSend480);
    // ifTrue:. 
    Send PSend477 = new_Send((Optr)PSend476, SMB_ifTrue_, 1, (Optr)PBlock478);
    Symbol SMB_methodPassed_ = new_Symbol(L"methodPassed:");
    // methodPassed:. 
    Send PSend481 = new_Send((Optr)VAR_aClassDescription_0_0, SMB_methodPassed_, 1, (Optr)VAR_aSelector_0_1);
    Symbol  SMB_testGreen = new_Symbol(L"testGreen");
    Constant SMB_testGreen_Const = new_Constant((Optr)SMB_testGreen);
    // escape:. 
    Send PSend485 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testGreen_Const);
    Array PThreadedCode484 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testGreen, (Optr)&t_send1, (Optr)PSend485, (Optr)&t_block_return);
    Block PBlock483 = new_Block_with(empty_Array, empty_Array, PThreadedCode484, 1, PSend485);
    // ifTrue:. 
    Send PSend482 = new_Send((Optr)PSend481, SMB_ifTrue_, 1, (Optr)PBlock483);
    Symbol  SMB_testGray = new_Symbol(L"testGray");
    Array PThreadedCode454 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_send0, (Optr)PSend455, (Optr)&t_push_closure, (Optr)PBlock456, (Optr)&t_send1, (Optr)PSend465, (Optr)&t_send_ifTrue_, (Optr)PSend466, (Optr)PBlock467, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_1, (Optr)&t_send1, (Optr)PSend471, (Optr)&t_send_ifTrue_, (Optr)PSend472, (Optr)PBlock473, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_1, (Optr)&t_send1, (Optr)PSend476, (Optr)&t_send_ifTrue_, (Optr)PSend477, (Optr)PBlock478, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_1, (Optr)&t_send1, (Optr)PSend481, (Optr)&t_send_ifTrue_, (Optr)PSend482, (Optr)PBlock483, (Optr)&t_zap, (Optr)&t_push1, (Optr)SMB_testGray, (Optr)&t_method_return);
    Constant SMB_testGray_Const = new_Constant((Optr)SMB_testGray);
    Block PBlock452 = new_Block_with(PArray453, empty_Array, PThreadedCode454, 5, PSend466, PSend472, PSend477, PSend482, SMB_testGray_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend486 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock452);
    Array PThreadedCode451 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock452, (Optr)&t_send1, (Optr)PSend486, (Optr)&t_method_return);
    Method PMethod449 = new_Method_with(PArray450, empty_Array, empty_Array, PThreadedCode451, 1, PSend486);
    
    MethodClosure MC_SMB_browserIcon_selector_ = new_MethodClosure((Method)PMethod449, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_browserIcon_selector_, MC_SMB_browserIcon_selector_);
}


static void init_class_SMB_sunitVersion() {
    Symbol SMB_sunitVersion = new_Symbol(L"sunitVersion");
    String string_489 = new_String(L"3.1");
    Array PThreadedCode488 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_489, (Optr)&t_method_return);
    Constant string_489_Const = new_Constant((Optr)string_489);
    Method PMethod487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode488, 1, string_489_Const);
    
    MethodClosure MC_SMB_sunitVersion = new_MethodClosure((Method)PMethod487, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_sunitVersion, MC_SMB_sunitVersion);
}


static void init_class_SMB_methodRaisedError_() {
    Symbol SMB_methodRaisedError_ = new_Symbol(L"methodRaisedError:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray491 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend493 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:. 
    Send PSend494 = new_Send((Optr)PSend493, SMB_at_, 1, (Optr)SMB_errors_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend495 = new_Send((Optr)PSend494, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode492 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend493, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send1, (Optr)PSend494, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend495, (Optr)&t_method_return);
    Method PMethod490 = new_Method_with(PArray491, empty_Array, empty_Array, PThreadedCode492, 1, PSend495);
    
    MethodClosure MC_SMB_methodRaisedError_ = new_MethodClosure((Method)PMethod490, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodRaisedError_, MC_SMB_methodRaisedError_);
}


static void init_class_SMB_buildSuiteFromAllSelectors() {
    Symbol SMB_buildSuiteFromAllSelectors = new_Symbol(L"buildSuiteFromAllSelectors");
    Symbol SMB_allTestSelectors = new_Symbol(L"allTestSelectors");
    // allTestSelectors. 
    Send PSend498 = new_Send((Optr)self, SMB_allTestSelectors, 0);
    Symbol SMB_buildSuiteFromMethods_ = new_Symbol(L"buildSuiteFromMethods:");
    // buildSuiteFromMethods:. 
    Send PSend499 = new_Send((Optr)self, SMB_buildSuiteFromMethods_, 1, (Optr)PSend498);
    Array PThreadedCode497 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend498, (Optr)&t_send1, (Optr)PSend499, (Optr)&t_method_return);
    Method PMethod496 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode497, 1, PSend499);
    
    MethodClosure MC_SMB_buildSuiteFromAllSelectors = new_MethodClosure((Method)PMethod496, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_buildSuiteFromAllSelectors, MC_SMB_buildSuiteFromAllSelectors);
}


static void init_class_SMB_lastRunMethodNamed_() {
    Symbol SMB_lastRunMethodNamed_ = new_Symbol(L"lastRunMethodNamed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray501 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Variable VAR_str_1_0 = new_Variable_named(L"str", 1);
    Array PArray504 = new_Array_with(1, (Optr)VAR_str_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray507 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend509 = new_Send((Optr)VAR_aSelector_0_0, SMB_asString, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend510 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend509);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend511 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode508 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send0, (Optr)PSend509, (Optr)&t_send1, (Optr)PSend510, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend511, (Optr)&t_method_return);
    Block PBlock506 = new_Block_with(PArray507, empty_Array, PThreadedCode508, 2, PSend510, PSend511);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend512 = new_Send((Optr)PBlock506, SMB_value_, 1, (Optr)VAR_str_1_0);
    Array PArray514 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend516 = new_Send((Optr)VAR__receiver__2_0, SMB_tab, 0);
    String string_517 = new_String(L"^ ");
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend518 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol SMB_storeString = new_Symbol(L"storeString");
    // storeString. 
    Send PSend519 = new_Send((Optr)PSend518, SMB_storeString, 0);
    Constant string_517_Const = new_Constant((Optr)string_517);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend520 = new_Send((Optr)string_517_Const, SMB__append_, 1, (Optr)PSend519);
    // nextPutAll:. 
    Send PSend521 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend520);
    Array PThreadedCode515 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend516, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_517, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend518, (Optr)&t_send0, (Optr)PSend519, (Optr)&t_send1, (Optr)PSend520, (Optr)&t_send1, (Optr)PSend521, (Optr)&t_method_return);
    Block PBlock513 = new_Block_with(PArray514, empty_Array, PThreadedCode515, 2, PSend516, PSend521);
    // value:. 
    Send PSend522 = new_Send((Optr)PBlock513, SMB_value_, 1, (Optr)VAR_str_1_0);
    Array PThreadedCode505 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock506, (Optr)&t_push_variable, (Optr)VAR_str_1_0, (Optr)&t_send1, (Optr)PSend512, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock513, (Optr)&t_push_variable, (Optr)VAR_str_1_0, (Optr)&t_send1, (Optr)PSend522, (Optr)&t_method_return);
    Block PBlock503 = new_Block_with(PArray504, empty_Array, PThreadedCode505, 2, PSend512, PSend522);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend523 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock503);
    Array PThreadedCode502 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock503, (Optr)&t_send1, (Optr)PSend523, (Optr)&t_method_return);
    Method PMethod500 = new_Method_with(PArray501, empty_Array, empty_Array, PThreadedCode502, 1, PSend523);
    
    MethodClosure MC_SMB_lastRunMethodNamed_ = new_MethodClosure((Method)PMethod500, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_lastRunMethodNamed_, MC_SMB_lastRunMethodNamed_);
}


static void init_class_SMB_buildSuiteFromMethods_() {
    Symbol SMB_buildSuiteFromMethods_ = new_Symbol(L"buildSuiteFromMethods:");
    Variable VAR_testMethods_0_0 = new_Variable_named(L"testMethods", 0);
    Array PArray525 = new_Array_with(1, (Optr)VAR_testMethods_0_0);
    Variable VAR_suite_0_1 = new_Variable_named(L"suite", 0);
    Array PArray526 = new_Array_with(1, (Optr)VAR_suite_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray531 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend533 = new_Send((Optr)self, SMB_name, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend534 = new_Send((Optr)PSend533, SMB_asString, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend535 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend534);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend536 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode532 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend533, (Optr)&t_send0, (Optr)PSend534, (Optr)&t_send1, (Optr)PSend535, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend536, (Optr)&t_method_return);
    Block PBlock530 = new_Block_with(PArray531, empty_Array, PThreadedCode532, 2, PSend535, PSend536);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend537 = new_Send((Optr)TestSuite_classReference, SMB_new, 0);
    // value:. 
    Send PSend529 = new_Send((Optr)PBlock530, SMB_value_, 1, (Optr)PSend537);
    Assign PAssign528 = new_Assign((Optr)VAR_suite_0_1, (Optr)PSend529);
    Symbol SMB_addToSuite_fromMethods_ = new_Symbol(L"addToSuite:fromMethods:");
    // addToSuite:fromMethods:. 
    Send PSend538 = new_Send((Optr)self, SMB_addToSuite_fromMethods_, 2, (Optr)VAR_suite_0_1, (Optr)VAR_testMethods_0_0);
    Array PThreadedCode527 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign528, (Optr)&t_push_closure, (Optr)PBlock530, (Optr)&t_push_class_reference, (Optr)TestSuite_classReference, (Optr)&t_send0, (Optr)PSend537, (Optr)&t_send1, (Optr)PSend529, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_suite_0_1, (Optr)&t_push_variable, (Optr)VAR_testMethods_0_0, (Optr)&t_send2, (Optr)PSend538, (Optr)&t_method_return);
    Method PMethod524 = new_Method_with(PArray525, PArray526, empty_Array, PThreadedCode527, 2, PAssign528, PSend538);
    
    MethodClosure MC_SMB_buildSuiteFromMethods_ = new_MethodClosure((Method)PMethod524, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_buildSuiteFromMethods_, MC_SMB_buildSuiteFromMethods_);
}


static void init_class_SMB_generateLastStoredRunMethod() {
    Symbol SMB_generateLastStoredRunMethod = new_Symbol(L"generateLastStoredRunMethod");
    Symbol SMB_shouldGenerateLastStoredRunMethod = new_Symbol(L"shouldGenerateLastStoredRunMethod");
    // shouldGenerateLastStoredRunMethod. 
    Send PSend541 = new_Send((Optr)self, SMB_shouldGenerateLastStoredRunMethod, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend545 = new_Send((Optr)self, SMB_class, 0);
    Symbol  SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    Symbol SMB_lastRunMethodNamed_ = new_Symbol(L"lastRunMethodNamed:");
    Constant SMB_lastStoredRun_Const = new_Constant((Optr)SMB_lastStoredRun);
    // lastRunMethodNamed:. 
    Send PSend546 = new_Send((Optr)self, SMB_lastRunMethodNamed_, 1, (Optr)SMB_lastStoredRun_Const);
    String string_547 = new_String(L"history");
    Symbol SMB_compile_classified_ = new_Symbol(L"compile:classified:");
    Constant string_547_Const = new_Constant((Optr)string_547);
    // compile:classified:. 
    Send PSend548 = new_Send((Optr)PSend545, SMB_compile_classified_, 2, (Optr)PSend546, (Optr)string_547_Const);
    Array PThreadedCode544 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend545, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_lastStoredRun, (Optr)&t_send1, (Optr)PSend546, (Optr)&t_push1, (Optr)string_547, (Optr)&t_send2, (Optr)PSend548, (Optr)&t_block_return);
    Block PBlock543 = new_Block_with(empty_Array, empty_Array, PThreadedCode544, 1, PSend548);
    // ifTrue:. 
    Send PSend542 = new_Send((Optr)PSend541, SMB_ifTrue_, 1, (Optr)PBlock543);
    Array PThreadedCode540 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend541, (Optr)&t_send_ifTrue_, (Optr)PSend542, (Optr)PBlock543, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode540, 2, PSend542, self);
    
    MethodClosure MC_SMB_generateLastStoredRunMethod = new_MethodClosure((Method)PMethod539, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_generateLastStoredRunMethod, MC_SMB_generateLastStoredRunMethod);
}


static void init_class_SMB_isUnitTest() {
    Symbol SMB_isUnitTest = new_Symbol(L"isUnitTest");
    Array PThreadedCode550 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod549 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode550, 1, true_Const);
    
    MethodClosure MC_SMB_isUnitTest = new_MethodClosure((Method)PMethod549, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_isUnitTest, MC_SMB_isUnitTest);
}


static void init_class_SMB_packageNamesUnderTest() {
    Symbol SMB_packageNamesUnderTest = new_Symbol(L"packageNamesUnderTest");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend553 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode552 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend553, (Optr)&t_method_return);
    Method PMethod551 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode552, 1, PSend553);
    
    MethodClosure MC_SMB_packageNamesUnderTest = new_MethodClosure((Method)PMethod551, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_packageNamesUnderTest, MC_SMB_packageNamesUnderTest);
}


static void init_class_SMB_storedMethodRaisedError_() {
    Symbol SMB_storedMethodRaisedError_ = new_Symbol(L"storedMethodRaisedError:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray555 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    // lastStoredRun. 
    Send PSend557 = new_Send((Optr)self, SMB_lastStoredRun, 0);
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:. 
    Send PSend558 = new_Send((Optr)PSend557, SMB_at_, 1, (Optr)SMB_errors_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend559 = new_Send((Optr)PSend558, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode556 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend557, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send1, (Optr)PSend558, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend559, (Optr)&t_method_return);
    Method PMethod554 = new_Method_with(PArray555, empty_Array, empty_Array, PThreadedCode556, 1, PSend559);
    
    MethodClosure MC_SMB_storedMethodRaisedError_ = new_MethodClosure((Method)PMethod554, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_storedMethodRaisedError_, MC_SMB_storedMethodRaisedError_);
}


static void init_class_SMB_allTestSelectors() {
    Symbol SMB_allTestSelectors = new_Symbol(L"allTestSelectors");
    Variable VAR_selectors_0_0 = new_Variable_named(L"selectors", 0);
    Array PArray561 = new_Array_with(1, (Optr)VAR_selectors_0_0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    // allSelectors. 
    Send PSend565 = new_Send((Optr)self, SMB_allSelectors, 0);
    // newFrom:. 
    Send PSend564 = new_Send((Optr)OrderedCollection_classReference, SMB_newFrom_, 1, (Optr)PSend565);
    Assign PAssign563 = new_Assign((Optr)VAR_selectors_0_0, (Optr)PSend564);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray567 = new_Array_with(1, (Optr)VAR_each_1_0);
    String string_569 = new_String(L"test");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_569_Const = new_Constant((Optr)string_569);
    // beginsWith:. 
    Send PSend570 = new_Send((Optr)VAR_each_1_0, SMB_beginsWith_, 1, (Optr)string_569_Const);
    Character char_444 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_444_Const = new_Constant((Optr)char_444);
    // includes:. 
    Send PSend573 = new_Send((Optr)VAR_each_1_0, SMB_includes_, 1, (Optr)char_444_Const);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend574 = new_Send((Optr)PSend573, SMB_not, 0);
    Array PThreadedCode572 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push1, (Optr)char_444, (Optr)&t_send1, (Optr)PSend573, (Optr)&t_send0, (Optr)PSend574, (Optr)&t_block_return);
    Block PBlock571 = new_Block_with(empty_Array, empty_Array, PThreadedCode572, 1, PSend574);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend575 = new_Send((Optr)PSend570, SMB_and_, 1, (Optr)PBlock571);
    Array PThreadedCode568 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push1, (Optr)string_569, (Optr)&t_send1, (Optr)PSend570, (Optr)&t_push_closure, (Optr)PBlock571, (Optr)&t_send1, (Optr)PSend575, (Optr)&t_method_return);
    Block PBlock566 = new_Block_with(PArray567, empty_Array, PThreadedCode568, 1, PSend575);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend576 = new_Send((Optr)VAR_selectors_0_0, SMB_select_, 1, (Optr)PBlock566);
    Array PThreadedCode562 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign563, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend565, (Optr)&t_send1, (Optr)PSend564, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_push_closure, (Optr)PBlock566, (Optr)&t_send1, (Optr)PSend576, (Optr)&t_method_return);
    Method PMethod560 = new_Method_with(empty_Array, PArray561, empty_Array, PThreadedCode562, 2, PAssign563, PSend576);
    
    MethodClosure MC_SMB_allTestSelectors = new_MethodClosure((Method)PMethod560, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_allTestSelectors, MC_SMB_allTestSelectors);
}


static void init_class_SMB_buildSuiteFromLocalSelectors() {
    Symbol SMB_buildSuiteFromLocalSelectors = new_Symbol(L"buildSuiteFromLocalSelectors");
    Symbol SMB_testSelectors = new_Symbol(L"testSelectors");
    // testSelectors. 
    Send PSend579 = new_Send((Optr)self, SMB_testSelectors, 0);
    Symbol SMB_buildSuiteFromMethods_ = new_Symbol(L"buildSuiteFromMethods:");
    // buildSuiteFromMethods:. 
    Send PSend580 = new_Send((Optr)self, SMB_buildSuiteFromMethods_, 1, (Optr)PSend579);
    Array PThreadedCode578 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend579, (Optr)&t_send1, (Optr)PSend580, (Optr)&t_method_return);
    Method PMethod577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode578, 1, PSend580);
    
    MethodClosure MC_SMB_buildSuiteFromLocalSelectors = new_MethodClosure((Method)PMethod577, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_buildSuiteFromLocalSelectors, MC_SMB_buildSuiteFromLocalSelectors);
}


static void init_class_SMB_hasMethodBeenRun_() {
    Symbol SMB_hasMethodBeenRun_ = new_Symbol(L"hasMethodBeenRun:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray582 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend584 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:. 
    Send PSend585 = new_Send((Optr)PSend584, SMB_at_, 1, (Optr)SMB_errors_Const);
    // lastRun. 
    Send PSend586 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_failures = new_Symbol(L"failures");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:. 
    Send PSend587 = new_Send((Optr)PSend586, SMB_at_, 1, (Optr)SMB_failures_Const);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend588 = new_Send((Optr)PSend585, SMB__append_, 1, (Optr)PSend587);
    // lastRun. 
    Send PSend589 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:. 
    Send PSend590 = new_Send((Optr)PSend589, SMB_at_, 1, (Optr)SMB_passed_Const);
    // ,. 
    Send PSend591 = new_Send((Optr)PSend588, SMB__append_, 1, (Optr)PSend590);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend592 = new_Send((Optr)PSend591, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode583 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend584, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send1, (Optr)PSend585, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend586, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_send1, (Optr)PSend587, (Optr)&t_send1, (Optr)PSend588, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend589, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_send1, (Optr)PSend590, (Optr)&t_send1, (Optr)PSend591, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend592, (Optr)&t_method_return);
    Method PMethod581 = new_Method_with(PArray582, empty_Array, empty_Array, PThreadedCode583, 1, PSend592);
    
    MethodClosure MC_SMB_hasMethodBeenRun_ = new_MethodClosure((Method)PMethod581, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_hasMethodBeenRun_, MC_SMB_hasMethodBeenRun_);
}


static void init_class_SMB_lastRun() {
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend595 = new_Send((Optr)TestResult_classReference, SMB_historyFor_, 1, (Optr)self);
    Array PThreadedCode594 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend595, (Optr)&t_method_return);
    Method PMethod593 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode594, 1, PSend595);
    
    MethodClosure MC_SMB_lastRun = new_MethodClosure((Method)PMethod593, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_lastRun, MC_SMB_lastRun);
}


static void init_class_SMB_shouldInheritSelectors() {
    Symbol SMB_shouldInheritSelectors = new_Symbol(L"shouldInheritSelectors");
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend598 = new_Send((Optr)self, SMB_superclass, 0);
    Symbol SMB_isAbstract = new_Symbol(L"isAbstract");
    // isAbstract. 
    Send PSend599 = new_Send((Optr)PSend598, SMB_isAbstract, 0);
    Symbol SMB_testSelectors = new_Symbol(L"testSelectors");
    // testSelectors. 
    Send PSend602 = new_Send((Optr)self, SMB_testSelectors, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend603 = new_Send((Optr)PSend602, SMB_isEmpty, 0);
    Array PThreadedCode601 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend602, (Optr)&t_send0, (Optr)PSend603, (Optr)&t_block_return);
    Block PBlock600 = new_Block_with(empty_Array, empty_Array, PThreadedCode601, 1, PSend603);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend604 = new_Send((Optr)PSend599, SMB_or_, 1, (Optr)PBlock600);
    Array PThreadedCode597 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend598, (Optr)&t_send0, (Optr)PSend599, (Optr)&t_push_closure, (Optr)PBlock600, (Optr)&t_send1, (Optr)PSend604, (Optr)&t_method_return);
    Method PMethod596 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode597, 1, PSend604);
    
    MethodClosure MC_SMB_shouldInheritSelectors = new_MethodClosure((Method)PMethod596, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_shouldInheritSelectors, MC_SMB_shouldInheritSelectors);
}


static void init_class_SMB_methodFailed_() {
    Symbol SMB_methodFailed_ = new_Symbol(L"methodFailed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray606 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend608 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:. 
    Send PSend609 = new_Send((Optr)PSend608, SMB_at_, 1, (Optr)SMB_failures_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend610 = new_Send((Optr)PSend609, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode607 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend608, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_send1, (Optr)PSend609, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend610, (Optr)&t_method_return);
    Method PMethod605 = new_Method_with(PArray606, empty_Array, empty_Array, PThreadedCode607, 1, PSend610);
    
    MethodClosure MC_SMB_methodFailed_ = new_MethodClosure((Method)PMethod605, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodFailed_, MC_SMB_methodFailed_);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray612 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend614 = new_Send((Optr)self, SMB_selector_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend615 = new_Send((Optr)PSend614, SMB_run, 0);
    Array PThreadedCode613 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend614, (Optr)&t_send0, (Optr)PSend615, (Optr)&t_method_return);
    Method PMethod611 = new_Method_with(PArray612, empty_Array, empty_Array, PThreadedCode613, 1, PSend615);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod611, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_run_, MC_SMB_run_);
}


static void init_class_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend621 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Assign PAssign620 = new_Assign((Optr)slot_SUnit_Kernel_TestCase_Class_class_history, (Optr)PSend621);
    Array PThreadedCode619 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign620, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend621, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock618 = new_Block_with(empty_Array, empty_Array, PThreadedCode619, 1, PAssign620);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend622 = new_Send((Optr)slot_SUnit_Kernel_TestCase_Class_class_history, SMB_ifNil_, 1, (Optr)PBlock618);
    Array PThreadedCode617 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_SUnit_Kernel_TestCase_Class_class_history, (Optr)&t_push_closure, (Optr)PBlock618, (Optr)&t_send1, (Optr)PSend622, (Optr)&t_method_return);
    Method PMethod616 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode617, 1, PSend622);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod616, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_history, MC_SMB_history);
}


static void init_class_SMB_storedMethodPassed_() {
    Symbol SMB_storedMethodPassed_ = new_Symbol(L"storedMethodPassed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray624 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    // lastStoredRun. 
    Send PSend626 = new_Send((Optr)self, SMB_lastStoredRun, 0);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:. 
    Send PSend627 = new_Send((Optr)PSend626, SMB_at_, 1, (Optr)SMB_passed_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend628 = new_Send((Optr)PSend627, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode625 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend626, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_send1, (Optr)PSend627, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend628, (Optr)&t_method_return);
    Method PMethod623 = new_Method_with(PArray624, empty_Array, empty_Array, PThreadedCode625, 1, PSend628);
    
    MethodClosure MC_SMB_storedMethodPassed_ = new_MethodClosure((Method)PMethod623, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_storedMethodPassed_, MC_SMB_storedMethodPassed_);
}


static void init_class_SMB_browserIcon() {
    Symbol SMB_browserIcon = new_Symbol(L"browserIcon");
    Variable VAR_classHistory_0_0 = new_Variable_named(L"classHistory", 0);
    Array PArray630 = new_Array_with(1, (Optr)VAR_classHistory_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray633 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isAbstract = new_Symbol(L"isAbstract");
    // isAbstract. 
    Send PSend635 = new_Send((Optr)self, SMB_isAbstract, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper639 = new_Super(SMB_browserIcon, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend640 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper639);
    Array PThreadedCode638 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper639, (Optr)&t_send1, (Optr)PSend640, (Optr)&t_block_return);
    Block PBlock637 = new_Block_with(empty_Array, empty_Array, PThreadedCode638, 1, PSend640);
    // ifTrue:. 
    Send PSend636 = new_Send((Optr)PSend635, SMB_ifTrue_, 1, (Optr)PBlock637);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend642 = new_Send((Optr)TestResult_classReference, SMB_historyFor_, 1, (Optr)self);
    Assign PAssign641 = new_Assign((Optr)VAR_classHistory_0_0, (Optr)PSend642);
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:. 
    Send PSend643 = new_Send((Optr)VAR_classHistory_0_0, SMB_at_, 1, (Optr)SMB_errors_Const);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend644 = new_Send((Optr)PSend643, SMB_isEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol  SMB_testRed = new_Symbol(L"testRed");
    Constant SMB_testRed_Const = new_Constant((Optr)SMB_testRed);
    // escape:. 
    Send PSend648 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testRed_Const);
    Array PThreadedCode647 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testRed, (Optr)&t_send1, (Optr)PSend648, (Optr)&t_block_return);
    Block PBlock646 = new_Block_with(empty_Array, empty_Array, PThreadedCode647, 1, PSend648);
    // ifFalse:. 
    Send PSend645 = new_Send((Optr)PSend644, SMB_ifFalse_, 1, (Optr)PBlock646);
    Symbol  SMB_failures = new_Symbol(L"failures");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:. 
    Send PSend649 = new_Send((Optr)VAR_classHistory_0_0, SMB_at_, 1, (Optr)SMB_failures_Const);
    // isEmpty. 
    Send PSend650 = new_Send((Optr)PSend649, SMB_isEmpty, 0);
    Symbol  SMB_testOrange = new_Symbol(L"testOrange");
    Constant SMB_testOrange_Const = new_Constant((Optr)SMB_testOrange);
    // escape:. 
    Send PSend654 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testOrange_Const);
    Array PThreadedCode653 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testOrange, (Optr)&t_send1, (Optr)PSend654, (Optr)&t_block_return);
    Block PBlock652 = new_Block_with(empty_Array, empty_Array, PThreadedCode653, 1, PSend654);
    // ifFalse:. 
    Send PSend651 = new_Send((Optr)PSend650, SMB_ifFalse_, 1, (Optr)PBlock652);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:. 
    Send PSend655 = new_Send((Optr)VAR_classHistory_0_0, SMB_at_, 1, (Optr)SMB_passed_Const);
    // isEmpty. 
    Send PSend656 = new_Send((Optr)PSend655, SMB_isEmpty, 0);
    Symbol  SMB_testGreen = new_Symbol(L"testGreen");
    Constant SMB_testGreen_Const = new_Constant((Optr)SMB_testGreen);
    // escape:. 
    Send PSend660 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testGreen_Const);
    Array PThreadedCode659 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testGreen, (Optr)&t_send1, (Optr)PSend660, (Optr)&t_block_return);
    Block PBlock658 = new_Block_with(empty_Array, empty_Array, PThreadedCode659, 1, PSend660);
    // ifFalse:. 
    Send PSend657 = new_Send((Optr)PSend656, SMB_ifFalse_, 1, (Optr)PBlock658);
    Symbol  SMB_testGray = new_Symbol(L"testGray");
    Array PThreadedCode634 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend635, (Optr)&t_send_ifTrue_, (Optr)PSend636, (Optr)PBlock637, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign641, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend642, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_classHistory_0_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send1, (Optr)PSend643, (Optr)&t_send0, (Optr)PSend644, (Optr)&t_send_ifFalse_, (Optr)PSend645, (Optr)PBlock646, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_classHistory_0_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_send1, (Optr)PSend649, (Optr)&t_send0, (Optr)PSend650, (Optr)&t_send_ifFalse_, (Optr)PSend651, (Optr)PBlock652, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_classHistory_0_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_send1, (Optr)PSend655, (Optr)&t_send0, (Optr)PSend656, (Optr)&t_send_ifFalse_, (Optr)PSend657, (Optr)PBlock658, (Optr)&t_zap, (Optr)&t_push1, (Optr)SMB_testGray, (Optr)&t_method_return);
    Constant SMB_testGray_Const = new_Constant((Optr)SMB_testGray);
    Block PBlock632 = new_Block_with(PArray633, empty_Array, PThreadedCode634, 6, PSend636, PAssign641, PSend645, PSend651, PSend657, SMB_testGray_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend661 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock632);
    Array PThreadedCode631 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock632, (Optr)&t_send1, (Optr)PSend661, (Optr)&t_method_return);
    Method PMethod629 = new_Method_with(empty_Array, PArray630, empty_Array, PThreadedCode631, 1, PSend661);
    
    MethodClosure MC_SMB_browserIcon = new_MethodClosure((Method)PMethod629, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_browserIcon, MC_SMB_browserIcon);
}


static void init_class_SMB_buildSuite() {
    Symbol SMB_buildSuite = new_Symbol(L"buildSuite");
    Variable VAR_suite_0_0 = new_Variable_named(L"suite", 0);
    Array PArray663 = new_Array_with(1, (Optr)VAR_suite_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend666 = new_Send((Optr)TestSuite_classReference, SMB_new, 0);
    Assign PAssign665 = new_Assign((Optr)VAR_suite_0_0, (Optr)PSend666);
    Symbol SMB_isAbstract = new_Symbol(L"isAbstract");
    // isAbstract. 
    Send PSend667 = new_Send((Optr)self, SMB_isAbstract, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend671 = new_Send((Optr)self, SMB_name, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend672 = new_Send((Optr)PSend671, SMB_asString, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend673 = new_Send((Optr)VAR_suite_0_0, SMB_name_, 1, (Optr)PSend672);
    Symbol SMB_allSubclasses = new_Symbol(L"allSubclasses");
    // allSubclasses. 
    Send PSend674 = new_Send((Optr)self, SMB_allSubclasses, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray676 = new_Array_with(1, (Optr)VAR_each_1_0);
    // isAbstract. 
    Send PSend678 = new_Send((Optr)VAR_each_1_0, SMB_isAbstract, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_addToSuiteFromSelectors_ = new_Symbol(L"addToSuiteFromSelectors:");
    // addToSuiteFromSelectors:. 
    Send PSend682 = new_Send((Optr)VAR_each_1_0, SMB_addToSuiteFromSelectors_, 1, (Optr)VAR_suite_0_0);
    Array PThreadedCode681 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_send1, (Optr)PSend682, (Optr)&t_block_return);
    Block PBlock680 = new_Block_with(empty_Array, empty_Array, PThreadedCode681, 1, PSend682);
    // ifFalse:. 
    Send PSend679 = new_Send((Optr)PSend678, SMB_ifFalse_, 1, (Optr)PBlock680);
    Array PThreadedCode677 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend678, (Optr)&t_send_ifFalse_, (Optr)PSend679, (Optr)PBlock680, (Optr)&t_method_return);
    Block PBlock675 = new_Block_with(PArray676, empty_Array, PThreadedCode677, 1, PSend679);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend683 = new_Send((Optr)PSend674, SMB_do_, 1, (Optr)PBlock675);
    Array PThreadedCode670 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend671, (Optr)&t_send0, (Optr)PSend672, (Optr)&t_send1, (Optr)PSend673, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend674, (Optr)&t_push_closure, (Optr)PBlock675, (Optr)&t_send1, (Optr)PSend683, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_block_return);
    Block PBlock669 = new_Block_with(empty_Array, empty_Array, PThreadedCode670, 3, PSend673, PSend683, VAR_suite_0_0);
    // addToSuiteFromSelectors:. 
    Send PSend686 = new_Send((Optr)self, SMB_addToSuiteFromSelectors_, 1, (Optr)VAR_suite_0_0);
    Array PThreadedCode685 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_send1, (Optr)PSend686, (Optr)&t_block_return);
    Block PBlock684 = new_Block_with(empty_Array, empty_Array, PThreadedCode685, 1, PSend686);
    // ifTrue:ifFalse:. 
    Send PSend668 = new_Send((Optr)PSend667, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock669, (Optr)PBlock684);
    Array PThreadedCode664 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign665, (Optr)&t_push_class_reference, (Optr)TestSuite_classReference, (Optr)&t_send0, (Optr)PSend666, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend667, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend668, (Optr)PBlock669, (Optr)PBlock684, (Optr)&t_method_return);
    Method PMethod662 = new_Method_with(empty_Array, PArray663, empty_Array, PThreadedCode664, 2, PAssign665, PSend668);
    
    MethodClosure MC_SMB_buildSuite = new_MethodClosure((Method)PMethod662, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_buildSuite, MC_SMB_buildSuite);
}


static void init_class_SMB_debug_() {
    Symbol SMB_debug_ = new_Symbol(L"debug:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray688 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend690 = new_Send((Optr)self, SMB_selector_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_debug = new_Symbol(L"debug");
    // debug. 
    Send PSend691 = new_Send((Optr)PSend690, SMB_debug, 0);
    Array PThreadedCode689 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend690, (Optr)&t_send0, (Optr)PSend691, (Optr)&t_method_return);
    Method PMethod687 = new_Method_with(PArray688, empty_Array, empty_Array, PThreadedCode689, 1, PSend691);
    
    MethodClosure MC_SMB_debug_ = new_MethodClosure((Method)PMethod687, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_debug_, MC_SMB_debug_);
}


static void init_class_SMB_methodPassed_() {
    Symbol SMB_methodPassed_ = new_Symbol(L"methodPassed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray693 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend695 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:. 
    Send PSend696 = new_Send((Optr)PSend695, SMB_at_, 1, (Optr)SMB_passed_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend697 = new_Send((Optr)PSend696, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode694 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend695, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_send1, (Optr)PSend696, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend697, (Optr)&t_method_return);
    Method PMethod692 = new_Method_with(PArray693, empty_Array, empty_Array, PThreadedCode694, 1, PSend697);
    
    MethodClosure MC_SMB_methodPassed_ = new_MethodClosure((Method)PMethod692, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodPassed_, MC_SMB_methodPassed_);
}


static void init_class_SMB_resources() {
    Symbol SMB_resources = new_Symbol(L"resources");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend700 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode699 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend700, (Optr)&t_method_return);
    Method PMethod698 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode699, 1, PSend700);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod698, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_resources, MC_SMB_resources);
}


static void init_class_SMB_lastStoredRun() {
    Symbol SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Array PArray702 = new_Array_with(1, (Optr)VAR_results_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend705 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign704 = new_Assign((Optr)VAR_results_0_0, (Optr)PSend705);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend706 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend707 = new_Send((Optr)VAR_results_0_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend706);
    Symbol  SMB_passed = new_Symbol(L"passed");
    // new. 
    Send PSend708 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend709 = new_Send((Optr)VAR_results_0_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend708);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend710 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend711 = new_Send((Optr)VAR_results_0_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend710);
    Array PThreadedCode703 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign704, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend705, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_results_0_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend706, (Optr)&t_send2, (Optr)PSend707, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_results_0_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend708, (Optr)&t_send2, (Optr)PSend709, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_results_0_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend710, (Optr)&t_send2, (Optr)PSend711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_results_0_0, (Optr)&t_method_return);
    Method PMethod701 = new_Method_with(empty_Array, PArray702, empty_Array, PThreadedCode703, 5, PAssign704, PSend707, PSend709, PSend711, VAR_results_0_0);
    
    MethodClosure MC_SMB_lastStoredRun = new_MethodClosure((Method)PMethod701, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_lastStoredRun, MC_SMB_lastStoredRun);
}


static void init_class_SMB_isAbstract() {
    Symbol SMB_isAbstract = new_Symbol(L"isAbstract");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend714 = new_Send((Optr)self, SMB_name, 0);
    Symbol  SMB_TestCase = new_Symbol(L"TestCase");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_TestCase_Const = new_Constant((Optr)SMB_TestCase);
    // =. 
    Send PSend715 = new_Send((Optr)PSend714, SMB__equals_, 1, (Optr)SMB_TestCase_Const);
    Array PThreadedCode713 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend714, (Optr)&t_push1, (Optr)SMB_TestCase, (Optr)&t_send1, (Optr)PSend715, (Optr)&t_method_return);
    Method PMethod712 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode713, 1, PSend715);
    
    MethodClosure MC_SMB_isAbstract = new_MethodClosure((Method)PMethod712, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_isAbstract, MC_SMB_isAbstract);
}


static void init_class_SMB_suite() {
    Symbol SMB_suite = new_Symbol(L"suite");
    Symbol SMB_buildSuite = new_Symbol(L"buildSuite");
    // buildSuite. 
    Send PSend718 = new_Send((Optr)self, SMB_buildSuite, 0);
    Array PThreadedCode717 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend718, (Optr)&t_method_return);
    Method PMethod716 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode717, 1, PSend718);
    
    MethodClosure MC_SMB_suite = new_MethodClosure((Method)PMethod716, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_suite, MC_SMB_suite);
}


static void init_class_SMB_shouldGenerateLastStoredRunMethod() {
    Symbol SMB_shouldGenerateLastStoredRunMethod = new_Symbol(L"shouldGenerateLastStoredRunMethod");
    Variable VAR_sameRun_0_0 = new_Variable_named(L"sameRun", 0);
    Array PArray720 = new_Array_with(1, (Optr)VAR_sameRun_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray723 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend725 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methodDictionary = new_Symbol(L"methodDictionary");
    // methodDictionary. 
    Send PSend726 = new_Send((Optr)PSend725, SMB_methodDictionary, 0);
    Symbol  SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Constant SMB_lastStoredRun_Const = new_Constant((Optr)SMB_lastStoredRun);
    // includesKey:. 
    Send PSend727 = new_Send((Optr)PSend726, SMB_includesKey_, 1, (Optr)SMB_lastStoredRun_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend731 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode730 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend731, (Optr)&t_block_return);
    Block PBlock729 = new_Block_with(empty_Array, empty_Array, PThreadedCode730, 1, PSend731);
    // ifFalse:. 
    Send PSend728 = new_Send((Optr)PSend727, SMB_ifFalse_, 1, (Optr)PBlock729);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Symbol  SMB_passed = new_Symbol(L"passed");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Symbol  SMB_failures = new_Symbol(L"failures");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Symbol  SMB_errors = new_Symbol(L"errors");
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend734 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_ok_2_0 = new_Variable_named(L"ok", 2);
    Variable VAR_set_2_1 = new_Variable_named(L"set", 2);
    Array PArray736 = new_Array_with(2, (Optr)VAR_ok_2_0, (Optr)VAR_set_2_1);
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend740 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend741 = new_Send((Optr)PSend740, SMB_at_, 1, (Optr)VAR_set_2_1);
    // lastStoredRun. 
    Send PSend742 = new_Send((Optr)self, SMB_lastStoredRun, 0);
    // at:. 
    Send PSend743 = new_Send((Optr)PSend742, SMB_at_, 1, (Optr)VAR_set_2_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend744 = new_Send((Optr)PSend741, SMB__equals_, 1, (Optr)PSend743);
    Array PThreadedCode739 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend740, (Optr)&t_push_variable, (Optr)VAR_set_2_1, (Optr)&t_send1, (Optr)PSend741, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend742, (Optr)&t_push_variable, (Optr)VAR_set_2_1, (Optr)&t_send1, (Optr)PSend743, (Optr)&t_send1, (Optr)PSend744, (Optr)&t_block_return);
    Block PBlock738 = new_Block_with(empty_Array, empty_Array, PThreadedCode739, 1, PSend744);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend745 = new_Send((Optr)VAR_ok_2_0, SMB_and_, 1, (Optr)PBlock738);
    Array PThreadedCode737 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_ok_2_0, (Optr)&t_push_closure, (Optr)PBlock738, (Optr)&t_send1, (Optr)PSend745, (Optr)&t_method_return);
    Block PBlock735 = new_Block_with(PArray736, empty_Array, PThreadedCode737, 1, PSend745);
    // inject:into:. 
    Send PSend733 = new_Send((Optr)PSend734, SMB_inject_into_, 2, (Optr)true_Const, (Optr)PBlock735);
    Assign PAssign732 = new_Assign((Optr)VAR_sameRun_0_0, (Optr)PSend733);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend746 = new_Send((Optr)VAR_sameRun_0_0, SMB_not, 0);
    Array PThreadedCode724 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend725, (Optr)&t_send0, (Optr)PSend726, (Optr)&t_push1, (Optr)SMB_lastStoredRun, (Optr)&t_send1, (Optr)PSend727, (Optr)&t_send_ifFalse_, (Optr)PSend728, (Optr)PBlock729, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign732, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend734, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock735, (Optr)&t_send2, (Optr)PSend733, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sameRun_0_0, (Optr)&t_send0, (Optr)PSend746, (Optr)&t_method_return);
    Block PBlock722 = new_Block_with(PArray723, empty_Array, PThreadedCode724, 3, PSend728, PAssign732, PSend746);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend747 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock722);
    Array PThreadedCode721 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock722, (Optr)&t_send1, (Optr)PSend747, (Optr)&t_method_return);
    Method PMethod719 = new_Method_with(empty_Array, PArray720, empty_Array, PThreadedCode721, 1, PSend747);
    
    MethodClosure MC_SMB_shouldGenerateLastStoredRunMethod = new_MethodClosure((Method)PMethod719, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_shouldGenerateLastStoredRunMethod, MC_SMB_shouldGenerateLastStoredRunMethod);
}


static void init_class_SMB_methodRegressed_() {
    Symbol SMB_methodRegressed_ = new_Symbol(L"methodRegressed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray749 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_storedMethodPassed_ = new_Symbol(L"storedMethodPassed:");
    // storedMethodPassed:. 
    Send PSend751 = new_Send((Optr)self, SMB_storedMethodPassed_, 1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_methodFailed_ = new_Symbol(L"methodFailed:");
    // methodFailed:. 
    Send PSend754 = new_Send((Optr)self, SMB_methodFailed_, 1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_methodRaisedError_ = new_Symbol(L"methodRaisedError:");
    // methodRaisedError:. 
    Send PSend757 = new_Send((Optr)self, SMB_methodRaisedError_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode756 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend757, (Optr)&t_block_return);
    Block PBlock755 = new_Block_with(empty_Array, empty_Array, PThreadedCode756, 1, PSend757);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend758 = new_Send((Optr)PSend754, SMB_or_, 1, (Optr)PBlock755);
    Array PThreadedCode753 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend754, (Optr)&t_push_closure, (Optr)PBlock755, (Optr)&t_send1, (Optr)PSend758, (Optr)&t_block_return);
    Block PBlock752 = new_Block_with(empty_Array, empty_Array, PThreadedCode753, 1, PSend758);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend759 = new_Send((Optr)PSend751, SMB_and_, 1, (Optr)PBlock752);
    Array PThreadedCode750 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend751, (Optr)&t_push_closure, (Optr)PBlock752, (Optr)&t_send1, (Optr)PSend759, (Optr)&t_method_return);
    Method PMethod748 = new_Method_with(PArray749, empty_Array, empty_Array, PThreadedCode750, 1, PSend759);
    
    MethodClosure MC_SMB_methodRegressed_ = new_MethodClosure((Method)PMethod748, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodRegressed_, MC_SMB_methodRegressed_);
}


static void init_class_SMB_suiteClass() {
    Symbol SMB_suiteClass = new_Symbol(L"suiteClass");
    Array PThreadedCode761 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestSuite_classReference, (Optr)&t_method_return);
    Method PMethod760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode761, 1, TestSuite_classReference);
    
    MethodClosure MC_SMB_suiteClass = new_MethodClosure((Method)PMethod760, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_suiteClass, MC_SMB_suiteClass);
}


static void init_class_SMB_addToSuite_fromMethods_() {
    Symbol SMB_addToSuite_fromMethods_ = new_Symbol(L"addToSuite:fromMethods:");
    Variable VAR_suite_0_0 = new_Variable_named(L"suite", 0);
    Variable VAR_testMethods_0_1 = new_Variable_named(L"testMethods", 0);
    Array PArray763 = new_Array_with(2, (Optr)VAR_suite_0_0, (Optr)VAR_testMethods_0_1);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray766 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend768 = new_Send((Optr)self, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend769 = new_Send((Optr)VAR_suite_0_0, SMB_addTest_, 1, (Optr)PSend768);
    Array PThreadedCode767 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend768, (Optr)&t_send1, (Optr)PSend769, (Optr)&t_method_return);
    Block PBlock765 = new_Block_with(PArray766, empty_Array, PThreadedCode767, 1, PSend769);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend770 = new_Send((Optr)VAR_testMethods_0_1, SMB_do_, 1, (Optr)PBlock765);
    Array PThreadedCode764 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_testMethods_0_1, (Optr)&t_push_closure, (Optr)PBlock765, (Optr)&t_send1, (Optr)PSend770, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_method_return);
    Method PMethod762 = new_Method_with(PArray763, empty_Array, empty_Array, PThreadedCode764, 2, PSend770, VAR_suite_0_0);
    
    MethodClosure MC_SMB_addToSuite_fromMethods_ = new_MethodClosure((Method)PMethod762, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_addToSuite_fromMethods_, MC_SMB_addToSuite_fromMethods_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray774 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend776 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend777 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend778 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend777);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend779 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend780 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend779);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend781 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend782 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend781);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend783 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode775 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend776, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend777, (Optr)&t_send2, (Optr)PSend778, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend779, (Optr)&t_send2, (Optr)PSend780, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend781, (Optr)&t_send2, (Optr)PSend782, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend783, (Optr)&t_method_return);
    Block PBlock773 = new_Block_with(PArray774, empty_Array, PThreadedCode775, 5, PSend776, PSend778, PSend780, PSend782, PSend783);
    // new. 
    Send PSend784 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend785 = new_Send((Optr)PBlock773, SMB_value_, 1, (Optr)PSend784);
    Array PThreadedCode772 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock773, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend784, (Optr)&t_send1, (Optr)PSend785, (Optr)&t_method_return);
    Method PMethod771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode772, 1, PSend785);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod771, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_suite = new_Symbol(L"suite");
    // suite. 
    Send PSend788 = new_Send((Optr)self, SMB_suite, 0);
    // run. 
    Send PSend789 = new_Send((Optr)PSend788, SMB_run, 0);
    Array PThreadedCode787 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend788, (Optr)&t_send0, (Optr)PSend789, (Optr)&t_method_return);
    Method PMethod786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode787, 1, PSend789);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod786, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray791 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend793 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_setTestSelector_ = new_Symbol(L"setTestSelector:");
    // setTestSelector:. 
    Send PSend794 = new_Send((Optr)PSend793, SMB_setTestSelector_, 1, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode792 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend793, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend794, (Optr)&t_method_return);
    Method PMethod790 = new_Method_with(PArray791, empty_Array, empty_Array, PThreadedCode792, 1, PSend794);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod790, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_selector_, MC_SMB_selector_);
}


static void init_class_SMB_resetHistory() {
    Symbol SMB_resetHistory = new_Symbol(L"resetHistory");
    Assign PAssign797 = new_Assign((Optr)slot_SUnit_Kernel_TestCase_Class_class_history, (Optr)nil_Const);
    Array PThreadedCode796 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign797, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode796, 2, PAssign797, self);
    
    MethodClosure MC_SMB_resetHistory = new_MethodClosure((Method)PMethod795, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_resetHistory, MC_SMB_resetHistory);
}


static void init_class_SMB_history_() {
    Symbol SMB_history_ = new_Symbol(L"history:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray799 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign801 = new_Assign((Optr)slot_SUnit_Kernel_TestCase_Class_class_history, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode800 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign801, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod798 = new_Method_with(PArray799, empty_Array, empty_Array, PThreadedCode800, 2, PAssign801, self);
    
    MethodClosure MC_SMB_history_ = new_MethodClosure((Method)PMethod798, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_history_, MC_SMB_history_);
}


static void init_class_SMB_addToSuiteFromSelectors_() {
    Symbol SMB_addToSuiteFromSelectors_ = new_Symbol(L"addToSuiteFromSelectors:");
    Variable VAR_suite_0_0 = new_Variable_named(L"suite", 0);
    Array PArray803 = new_Array_with(1, (Optr)VAR_suite_0_0);
    Symbol SMB_shouldInheritSelectors = new_Symbol(L"shouldInheritSelectors");
    // shouldInheritSelectors. 
    Send PSend805 = new_Send((Optr)self, SMB_shouldInheritSelectors, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_allTestSelectors = new_Symbol(L"allTestSelectors");
    // allTestSelectors. 
    Send PSend809 = new_Send((Optr)self, SMB_allTestSelectors, 0);
    Array PThreadedCode808 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend809, (Optr)&t_block_return);
    Block PBlock807 = new_Block_with(empty_Array, empty_Array, PThreadedCode808, 1, PSend809);
    Symbol SMB_testSelectors = new_Symbol(L"testSelectors");
    // testSelectors. 
    Send PSend812 = new_Send((Optr)self, SMB_testSelectors, 0);
    Array PThreadedCode811 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend812, (Optr)&t_block_return);
    Block PBlock810 = new_Block_with(empty_Array, empty_Array, PThreadedCode811, 1, PSend812);
    // ifTrue:ifFalse:. 
    Send PSend806 = new_Send((Optr)PSend805, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock807, (Optr)PBlock810);
    Symbol SMB_addToSuite_fromMethods_ = new_Symbol(L"addToSuite:fromMethods:");
    // addToSuite:fromMethods:. 
    Send PSend813 = new_Send((Optr)self, SMB_addToSuite_fromMethods_, 2, (Optr)VAR_suite_0_0, (Optr)PSend806);
    Array PThreadedCode804 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend805, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend806, (Optr)PBlock807, (Optr)PBlock810, (Optr)&t_send2, (Optr)PSend813, (Optr)&t_method_return);
    Method PMethod802 = new_Method_with(PArray803, empty_Array, empty_Array, PThreadedCode804, 1, PSend813);
    
    MethodClosure MC_SMB_addToSuiteFromSelectors_ = new_MethodClosure((Method)PMethod802, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_addToSuiteFromSelectors_, MC_SMB_addToSuiteFromSelectors_);
}


static void init_class_SMB_storedMethodFailed_() {
    Symbol SMB_storedMethodFailed_ = new_Symbol(L"storedMethodFailed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray815 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    // lastStoredRun. 
    Send PSend817 = new_Send((Optr)self, SMB_lastStoredRun, 0);
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:. 
    Send PSend818 = new_Send((Optr)PSend817, SMB_at_, 1, (Optr)SMB_failures_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend819 = new_Send((Optr)PSend818, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode816 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend817, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_send1, (Optr)PSend818, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend819, (Optr)&t_method_return);
    Method PMethod814 = new_Method_with(PArray815, empty_Array, empty_Array, PThreadedCode816, 1, PSend819);
    
    MethodClosure MC_SMB_storedMethodFailed_ = new_MethodClosure((Method)PMethod814, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_storedMethodFailed_, MC_SMB_storedMethodFailed_);
}


static void init_class_SMB_methodChanged_() {
    Symbol SMB_methodChanged_ = new_Symbol(L"methodChanged:");
    Variable VAR_anEvent_0_0 = new_Variable_named(L"anEvent", 0);
    Array PArray821 = new_Array_with(1, (Optr)VAR_anEvent_0_0);
    Variable VAR_cls_0_1 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_2 = new_Variable_named(L"sel", 0);
    Array PArray822 = new_Array_with(2, (Optr)VAR_cls_0_1, (Optr)VAR_sel_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray825 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_item = new_Symbol(L"item");
    // item. 
    Send PSend827 = new_Send((Optr)VAR_anEvent_0_0, SMB_item, 0);
    Symbol SMB_isCompiledMethod = new_Symbol(L"isCompiledMethod");
    // isCompiledMethod. 
    Send PSend828 = new_Send((Optr)PSend827, SMB_isCompiledMethod, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend832 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode831 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend832, (Optr)&t_block_return);
    Block PBlock830 = new_Block_with(empty_Array, empty_Array, PThreadedCode831, 1, PSend832);
    // ifFalse:. 
    Send PSend829 = new_Send((Optr)PSend828, SMB_ifFalse_, 1, (Optr)PBlock830);
    // item. 
    Send PSend835 = new_Send((Optr)VAR_anEvent_0_0, SMB_item, 0);
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    // methodClass. 
    Send PSend834 = new_Send((Optr)PSend835, SMB_methodClass, 0);
    Assign PAssign833 = new_Assign((Optr)VAR_cls_0_1, (Optr)PSend834);
    Symbol SMB_inheritsFrom_ = new_Symbol(L"inheritsFrom:");
    // inheritsFrom:. 
    Send PSend836 = new_Send((Optr)VAR_cls_0_1, SMB_inheritsFrom_, 1, (Optr)TestCase_classReference);
    // escape:. 
    Send PSend840 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode839 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend840, (Optr)&t_block_return);
    Block PBlock838 = new_Block_with(empty_Array, empty_Array, PThreadedCode839, 1, PSend840);
    // ifFalse:. 
    Send PSend837 = new_Send((Optr)PSend836, SMB_ifFalse_, 1, (Optr)PBlock838);
    // item. 
    Send PSend843 = new_Send((Optr)VAR_anEvent_0_0, SMB_item, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend842 = new_Send((Optr)PSend843, SMB_selector, 0);
    Assign PAssign841 = new_Assign((Optr)VAR_sel_0_2, (Optr)PSend842);
    String string_844 = new_String(L"test");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_844_Const = new_Constant((Optr)string_844);
    // beginsWith:. 
    Send PSend845 = new_Send((Optr)VAR_sel_0_2, SMB_beginsWith_, 1, (Optr)string_844_Const);
    // escape:. 
    Send PSend849 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode848 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend849, (Optr)&t_block_return);
    Block PBlock847 = new_Block_with(empty_Array, empty_Array, PThreadedCode848, 1, PSend849);
    // ifFalse:. 
    Send PSend846 = new_Send((Optr)PSend845, SMB_ifFalse_, 1, (Optr)PBlock847);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend850 = new_Send((Optr)TestResult_classReference, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_2, (Optr)VAR_cls_0_1);
    Array PThreadedCode826 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push_variable, (Optr)VAR_anEvent_0_0, (Optr)&t_send0, (Optr)PSend827, (Optr)&t_send0, (Optr)PSend828, (Optr)&t_send_ifFalse_, (Optr)PSend829, (Optr)PBlock830, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign833, (Optr)&t_push_variable, (Optr)VAR_anEvent_0_0, (Optr)&t_send0, (Optr)PSend835, (Optr)&t_send0, (Optr)PSend834, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cls_0_1, (Optr)&t_push_class_reference, (Optr)TestCase_classReference, (Optr)&t_send1, (Optr)PSend836, (Optr)&t_send_ifFalse_, (Optr)PSend837, (Optr)PBlock838, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign841, (Optr)&t_push_variable, (Optr)VAR_anEvent_0_0, (Optr)&t_send0, (Optr)PSend843, (Optr)&t_send0, (Optr)PSend842, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sel_0_2, (Optr)&t_push1, (Optr)string_844, (Optr)&t_send1, (Optr)PSend845, (Optr)&t_send_ifFalse_, (Optr)PSend846, (Optr)PBlock847, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_push_variable, (Optr)VAR_sel_0_2, (Optr)&t_push_variable, (Optr)VAR_cls_0_1, (Optr)&t_send2, (Optr)PSend850, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock824 = new_Block_with(PArray825, empty_Array, PThreadedCode826, 7, PSend829, PAssign833, PSend837, PAssign841, PSend846, PSend850, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend851 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock824);
    Array PThreadedCode823 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock824, (Optr)&t_send1, (Optr)PSend851, (Optr)&t_method_return);
    Method PMethod820 = new_Method_with(PArray821, PArray822, empty_Array, PThreadedCode823, 1, PSend851);
    
    MethodClosure MC_SMB_methodChanged_ = new_MethodClosure((Method)PMethod820, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodChanged_, MC_SMB_methodChanged_);
}


static void init_class_SMB_buildSuiteFromSelectors() {
    Symbol SMB_buildSuiteFromSelectors = new_Symbol(L"buildSuiteFromSelectors");
    Symbol SMB_shouldInheritSelectors = new_Symbol(L"shouldInheritSelectors");
    // shouldInheritSelectors. 
    Send PSend854 = new_Send((Optr)self, SMB_shouldInheritSelectors, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_buildSuiteFromAllSelectors = new_Symbol(L"buildSuiteFromAllSelectors");
    // buildSuiteFromAllSelectors. 
    Send PSend858 = new_Send((Optr)self, SMB_buildSuiteFromAllSelectors, 0);
    Array PThreadedCode857 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend858, (Optr)&t_block_return);
    Block PBlock856 = new_Block_with(empty_Array, empty_Array, PThreadedCode857, 1, PSend858);
    Symbol SMB_buildSuiteFromLocalSelectors = new_Symbol(L"buildSuiteFromLocalSelectors");
    // buildSuiteFromLocalSelectors. 
    Send PSend861 = new_Send((Optr)self, SMB_buildSuiteFromLocalSelectors, 0);
    Array PThreadedCode860 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend861, (Optr)&t_block_return);
    Block PBlock859 = new_Block_with(empty_Array, empty_Array, PThreadedCode860, 1, PSend861);
    // ifTrue:ifFalse:. 
    Send PSend855 = new_Send((Optr)PSend854, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock856, (Optr)PBlock859);
    Array PThreadedCode853 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend854, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend855, (Optr)PBlock856, (Optr)PBlock859, (Optr)&t_method_return);
    Method PMethod852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode853, 1, PSend855);
    
    MethodClosure MC_SMB_buildSuiteFromSelectors = new_MethodClosure((Method)PMethod852, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_buildSuiteFromSelectors, MC_SMB_buildSuiteFromSelectors);
}


static void init_class_SMB_methodProgressed_() {
    Symbol SMB_methodProgressed_ = new_Symbol(L"methodProgressed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray863 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_storedMethodRaisedError_ = new_Symbol(L"storedMethodRaisedError:");
    // storedMethodRaisedError:. 
    Send PSend865 = new_Send((Optr)self, SMB_storedMethodRaisedError_, 1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_storedMethodFailed_ = new_Symbol(L"storedMethodFailed:");
    // storedMethodFailed:. 
    Send PSend868 = new_Send((Optr)self, SMB_storedMethodFailed_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode867 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend868, (Optr)&t_block_return);
    Block PBlock866 = new_Block_with(empty_Array, empty_Array, PThreadedCode867, 1, PSend868);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend869 = new_Send((Optr)PSend865, SMB_or_, 1, (Optr)PBlock866);
    Symbol SMB_methodPassed_ = new_Symbol(L"methodPassed:");
    // methodPassed:. 
    Send PSend872 = new_Send((Optr)self, SMB_methodPassed_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode871 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend872, (Optr)&t_block_return);
    Block PBlock870 = new_Block_with(empty_Array, empty_Array, PThreadedCode871, 1, PSend872);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend873 = new_Send((Optr)PSend869, SMB_and_, 1, (Optr)PBlock870);
    Array PThreadedCode864 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend865, (Optr)&t_push_closure, (Optr)PBlock866, (Optr)&t_send1, (Optr)PSend869, (Optr)&t_push_closure, (Optr)PBlock870, (Optr)&t_send1, (Optr)PSend873, (Optr)&t_method_return);
    Method PMethod862 = new_Method_with(PArray863, empty_Array, empty_Array, PThreadedCode864, 1, PSend873);
    
    MethodClosure MC_SMB_methodProgressed_ = new_MethodClosure((Method)PMethod862, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodProgressed_, MC_SMB_methodProgressed_);
}

void init_SUnit_Kernel_TestCase_layout() {
    slot_SUnit_Kernel_TestCase_Class_class_history = (Optr)new_Slot(5, L"history");
    layout_SUnit_Kernel_TestCase_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_SUnit_Kernel_TestCase_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_SUnit_Kernel_TestCase_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_SUnit_Kernel_TestCase_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_SUnit_Kernel_TestCase_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_SUnit_Kernel_TestCase_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_SUnit_Kernel_TestCase_Class_class)->values[5] = slot_SUnit_Kernel_TestCase_Class_class_history; // history 
    
    Symbol  SMB_TestCase = new_Symbol(L"TestCase");
    slot_SUnit_Kernel_TestCase_testSelector = (Optr)new_Slot(0, L"testSelector");
    layout_SUnit_Kernel_TestCase = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_SUnit_Kernel_TestCase)->values[0] = slot_SUnit_Kernel_TestCase_testSelector; // testSelector 
    SUnit_Kernel_TestCase_Class = (Class)new_Class(Object_Class, layout_SUnit_Kernel_TestCase_Class_class);
    SUnit_Kernel_TestCase_Class->layout = layout_SUnit_Kernel_TestCase;
    SUnit_Kernel_TestCase_Class->name = SMB_TestCase;
    
}

void init_SUnit_Kernel_TestCase_methods() {
    init_SMB_setUp();
    init_SMB_setTestSelector_();
    init_SMB_resources();
    init_SMB_run_();
    init_SMB_runCase();
    init_SMB_performTest();
    init_SMB_tearDown();
    init_SMB_cleanUpInstanceVariables();
    init_class_SMB_testSelectors();
    init_class_SMB_browserIcon_selector_();
    init_class_SMB_sunitVersion();
    init_class_SMB_methodRaisedError_();
    init_class_SMB_buildSuiteFromAllSelectors();
    init_class_SMB_lastRunMethodNamed_();
    init_class_SMB_buildSuiteFromMethods_();
    init_class_SMB_generateLastStoredRunMethod();
    init_class_SMB_isUnitTest();
    init_class_SMB_packageNamesUnderTest();
    init_class_SMB_storedMethodRaisedError_();
    init_class_SMB_allTestSelectors();
    init_class_SMB_buildSuiteFromLocalSelectors();
    init_class_SMB_hasMethodBeenRun_();
    init_class_SMB_lastRun();
    init_class_SMB_shouldInheritSelectors();
    init_class_SMB_methodFailed_();
    init_class_SMB_run_();
    init_class_SMB_history();
    init_class_SMB_storedMethodPassed_();
    init_class_SMB_browserIcon();
    init_class_SMB_buildSuite();
    init_class_SMB_debug_();
    init_class_SMB_methodPassed_();
    init_class_SMB_resources();
    init_class_SMB_lastStoredRun();
    init_class_SMB_isAbstract();
    init_class_SMB_suite();
    init_class_SMB_shouldGenerateLastStoredRunMethod();
    init_class_SMB_methodRegressed_();
    init_class_SMB_suiteClass();
    init_class_SMB_addToSuite_fromMethods_();
    init_class_SMB_newTestDictionary();
    init_class_SMB_run();
    init_class_SMB_selector_();
    init_class_SMB_resetHistory();
    init_class_SMB_history_();
    init_class_SMB_addToSuiteFromSelectors_();
    init_class_SMB_storedMethodFailed_();
    init_class_SMB_methodChanged_();
    init_class_SMB_buildSuiteFromSelectors();
    init_class_SMB_methodProgressed_();
    
}