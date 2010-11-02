#include <lib/class/SUnit/Kernel/TestCase.h>


Optr slot_SUnit_Kernel_TestCase_Class_class_history;
Optr layout_SUnit_Kernel_TestCase_Class_class;
Optr slot_SUnit_Kernel_TestCase_testSelector;
Optr layout_SUnit_Kernel_TestCase;


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Array PThreadedCode374 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod373 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode374, 1, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod373, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_setTestSelector_() {
    Symbol SMB_setTestSelector_ = new_Symbol(L"setTestSelector:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray376 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Assign PAssign378 = new_Assign((Optr)slot_SUnit_Kernel_TestCase_testSelector, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode377 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign378, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod375 = new_Method_with(PArray376, empty_Array, empty_Array, PThreadedCode377, 2, PAssign378, self);
    
    MethodClosure MC_SMB_setTestSelector_ = new_MethodClosure((Method)PMethod375, SUnit_Kernel_TestCase_Class);
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
    Array PArray380 = new_Array_with(2, (Optr)VAR_allResources_0_0, (Optr)VAR_resourceQueue_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend383 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Assign PAssign382 = new_Assign((Optr)VAR_allResources_0_0, (Optr)PSend383);
    // new. 
    Send PSend385 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    Assign PAssign384 = new_Assign((Optr)VAR_resourceQueue_0_1, (Optr)PSend385);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend386 = new_Send((Optr)self, SMB_class, 0);
    // resources. 
    Send PSend387 = new_Send((Optr)PSend386, SMB_resources, 0);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend388 = new_Send((Optr)VAR_resourceQueue_0_1, SMB_addAll_, 1, (Optr)PSend387);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend391 = new_Send((Optr)VAR_resourceQueue_0_1, SMB_isEmpty, 0);
    Array PThreadedCode390 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_resourceQueue_0_1, (Optr)&t_send0, (Optr)PSend391, (Optr)&t_block_return);
    Block PBlock389 = new_Block_with(empty_Array, empty_Array, PThreadedCode390, 1, PSend391);
    Variable VAR_next_1_0 = new_Variable_named(L"next", 1);
    Array PArray393 = new_Array_with(1, (Optr)VAR_next_1_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend396 = new_Send((Optr)VAR_resourceQueue_0_1, SMB_removeFirst, 0);
    Assign PAssign395 = new_Assign((Optr)VAR_next_1_0, (Optr)PSend396);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend397 = new_Send((Optr)VAR_allResources_0_0, SMB_add_, 1, (Optr)VAR_next_1_0);
    // resources. 
    Send PSend398 = new_Send((Optr)VAR_next_1_0, SMB_resources, 0);
    // addAll:. 
    Send PSend399 = new_Send((Optr)VAR_resourceQueue_0_1, SMB_addAll_, 1, (Optr)PSend398);
    Array PThreadedCode394 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign395, (Optr)&t_push_variable, (Optr)VAR_resourceQueue_0_1, (Optr)&t_send0, (Optr)PSend396, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_allResources_0_0, (Optr)&t_push_variable, (Optr)VAR_next_1_0, (Optr)&t_send1, (Optr)PSend397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resourceQueue_0_1, (Optr)&t_push_variable, (Optr)VAR_next_1_0, (Optr)&t_send0, (Optr)PSend398, (Optr)&t_send1, (Optr)PSend399, (Optr)&t_method_return);
    Block PBlock392 = new_Block_with(empty_Array, PArray393, PThreadedCode394, 3, PAssign395, PSend397, PSend399);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend400 = new_Send((Optr)PBlock389, SMB_whileFalse_, 1, (Optr)PBlock392);
    Array PThreadedCode381 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign382, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend383, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign384, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend385, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_resourceQueue_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend386, (Optr)&t_send0, (Optr)PSend387, (Optr)&t_send1, (Optr)PSend388, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock389, (Optr)&t_push_closure, (Optr)PBlock392, (Optr)&t_send1, (Optr)PSend400, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_allResources_0_0, (Optr)&t_method_return);
    Method PMethod379 = new_Method_with(empty_Array, PArray380, empty_Array, PThreadedCode381, 5, PAssign382, PAssign384, PSend388, PSend400, VAR_allResources_0_0);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod379, SUnit_Kernel_TestCase_Class);
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
    Array PArray402 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_runCase_ = new_Symbol(L"runCase:");
    // runCase:. 
    Send PSend404 = new_Send((Optr)VAR_aResult_0_0, SMB_runCase_, 1, (Optr)self);
    Array PThreadedCode403 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend404, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod401 = new_Method_with(PArray402, empty_Array, empty_Array, PThreadedCode403, 2, PSend404, self);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod401, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_run_, MC_SMB_run_);
}


static void init_SMB_runCase() {
    Symbol SMB_runCase = new_Symbol(L"runCase");
    Symbol SMB_setUp = new_Symbol(L"setUp");
    // setUp. 
    Send PSend409 = new_Send((Optr)self, SMB_setUp, 0);
    Symbol SMB_performTest = new_Symbol(L"performTest");
    // performTest. 
    Send PSend410 = new_Send((Optr)self, SMB_performTest, 0);
    Array PThreadedCode408 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend409, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend410, (Optr)&t_block_return);
    Block PBlock407 = new_Block_with(empty_Array, empty_Array, PThreadedCode408, 2, PSend409, PSend410);
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    // tearDown. 
    Send PSend413 = new_Send((Optr)self, SMB_tearDown, 0);
    Symbol SMB_cleanUpInstanceVariables = new_Symbol(L"cleanUpInstanceVariables");
    // cleanUpInstanceVariables. 
    Send PSend414 = new_Send((Optr)self, SMB_cleanUpInstanceVariables, 0);
    Array PThreadedCode412 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend413, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend414, (Optr)&t_block_return);
    Block PBlock411 = new_Block_with(empty_Array, empty_Array, PThreadedCode412, 2, PSend413, PSend414);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend415 = new_Send((Optr)PBlock407, SMB_ensure_, 1, (Optr)PBlock411);
    Array PThreadedCode406 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock407, (Optr)&t_push_closure, (Optr)PBlock411, (Optr)&t_send1, (Optr)PSend415, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod405 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode406, 2, PSend415, self);
    
    MethodClosure MC_SMB_runCase = new_MethodClosure((Method)PMethod405, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_runCase, MC_SMB_runCase);
}


static void init_SMB_performTest() {
    Symbol SMB_performTest = new_Symbol(L"performTest");
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend418 = new_Send((Optr)slot_SUnit_Kernel_TestCase_testSelector, SMB_asSymbol, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend419 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend418);
    Array PThreadedCode417 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_SUnit_Kernel_TestCase_testSelector, (Optr)&t_send0, (Optr)PSend418, (Optr)&t_send1, (Optr)PSend419, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod416 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode417, 2, PSend419, self);
    
    MethodClosure MC_SMB_performTest = new_MethodClosure((Method)PMethod416, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_performTest, MC_SMB_performTest);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Array PThreadedCode421 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode421, 1, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod420, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_cleanUpInstanceVariables() {
    Symbol SMB_cleanUpInstanceVariables = new_Symbol(L"cleanUpInstanceVariables");
    Array PThreadedCode423 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod422 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode423, 1, self);
    
    MethodClosure MC_SMB_cleanUpInstanceVariables = new_MethodClosure((Method)PMethod422, SUnit_Kernel_TestCase_Class);
    store_method(SUnit_Kernel_TestCase_Class, SMB_cleanUpInstanceVariables, MC_SMB_cleanUpInstanceVariables);
}


static void init_class_SMB_testSelectors() {
    Symbol SMB_testSelectors = new_Symbol(L"testSelectors");
    Symbol SMB_selectors = new_Symbol(L"selectors");
    // selectors. 
    Send PSend426 = new_Send((Optr)self, SMB_selectors, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend427 = new_Send((Optr)PSend426, SMB_asArray, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray429 = new_Array_with(1, (Optr)VAR_each_1_0);
    String string_431 = new_String(L"test");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_431_Const = new_Constant((Optr)string_431);
    // beginsWith:. 
    Send PSend432 = new_Send((Optr)VAR_each_1_0, SMB_beginsWith_, 1, (Optr)string_431_Const);
    Character char_435 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_435_Const = new_Constant((Optr)char_435);
    // includes:. 
    Send PSend436 = new_Send((Optr)VAR_each_1_0, SMB_includes_, 1, (Optr)char_435_Const);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend437 = new_Send((Optr)PSend436, SMB_not, 0);
    Array PThreadedCode434 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend436, (Optr)&t_send0, (Optr)PSend437, (Optr)&t_block_return);
    Block PBlock433 = new_Block_with(empty_Array, empty_Array, PThreadedCode434, 1, PSend437);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend438 = new_Send((Optr)PSend432, SMB_and_, 1, (Optr)PBlock433);
    Array PThreadedCode430 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push1, (Optr)string_431, (Optr)&t_send1, (Optr)PSend432, (Optr)&t_push_closure, (Optr)PBlock433, (Optr)&t_send1, (Optr)PSend438, (Optr)&t_method_return);
    Block PBlock428 = new_Block_with(PArray429, empty_Array, PThreadedCode430, 1, PSend438);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend439 = new_Send((Optr)PSend427, SMB_select_, 1, (Optr)PBlock428);
    Array PThreadedCode425 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend426, (Optr)&t_send0, (Optr)PSend427, (Optr)&t_push_closure, (Optr)PBlock428, (Optr)&t_send1, (Optr)PSend439, (Optr)&t_method_return);
    Method PMethod424 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode425, 1, PSend439);
    
    MethodClosure MC_SMB_testSelectors = new_MethodClosure((Method)PMethod424, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_testSelectors, MC_SMB_testSelectors);
}


static void init_class_SMB_browserIcon_selector_() {
    Symbol SMB_browserIcon_selector_ = new_Symbol(L"browserIcon:selector:");
    Variable VAR_aClassDescription_0_0 = new_Variable_named(L"aClassDescription", 0);
    Variable VAR_aSelector_0_1 = new_Variable_named(L"aSelector", 0);
    Array PArray441 = new_Array_with(2, (Optr)VAR_aClassDescription_0_0, (Optr)VAR_aSelector_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray444 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isMeta = new_Symbol(L"isMeta");
    // isMeta. 
    Send PSend446 = new_Send((Optr)VAR_aClassDescription_0_0, SMB_isMeta, 0);
    Symbol SMB_isAbstract = new_Symbol(L"isAbstract");
    // isAbstract. 
    Send PSend449 = new_Send((Optr)VAR_aClassDescription_0_0, SMB_isAbstract, 0);
    String string_452 = new_String(L"test");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_452_Const = new_Constant((Optr)string_452);
    // beginsWith:. 
    Send PSend453 = new_Send((Optr)VAR_aSelector_0_1, SMB_beginsWith_, 1, (Optr)string_452_Const);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend454 = new_Send((Optr)PSend453, SMB_not, 0);
    Array PThreadedCode451 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_1, (Optr)&t_push1, (Optr)string_452, (Optr)&t_send1, (Optr)PSend453, (Optr)&t_send0, (Optr)PSend454, (Optr)&t_block_return);
    Block PBlock450 = new_Block_with(empty_Array, empty_Array, PThreadedCode451, 1, PSend454);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend455 = new_Send((Optr)PSend449, SMB_or_, 1, (Optr)PBlock450);
    Array PThreadedCode448 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_send0, (Optr)PSend449, (Optr)&t_push_closure, (Optr)PBlock450, (Optr)&t_send1, (Optr)PSend455, (Optr)&t_block_return);
    Block PBlock447 = new_Block_with(empty_Array, empty_Array, PThreadedCode448, 1, PSend455);
    // or:. 
    Send PSend456 = new_Send((Optr)PSend446, SMB_or_, 1, (Optr)PBlock447);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper460 = new_Super(SMB_browserIcon_selector_, 2, (Optr)VAR_aClassDescription_0_0, (Optr)VAR_aSelector_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend461 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper460);
    Array PThreadedCode459 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_1, (Optr)&t_super2, (Optr)PSuper460, (Optr)&t_send1, (Optr)PSend461, (Optr)&t_block_return);
    Block PBlock458 = new_Block_with(empty_Array, empty_Array, PThreadedCode459, 1, PSend461);
    // ifTrue:. 
    Send PSend457 = new_Send((Optr)PSend456, SMB_ifTrue_, 1, (Optr)PBlock458);
    Symbol SMB_methodRaisedError_ = new_Symbol(L"methodRaisedError:");
    // methodRaisedError:. 
    Send PSend462 = new_Send((Optr)VAR_aClassDescription_0_0, SMB_methodRaisedError_, 1, (Optr)VAR_aSelector_0_1);
    Symbol  SMB_testRed = new_Symbol(L"testRed");
    Constant SMB_testRed_Const = new_Constant((Optr)SMB_testRed);
    // escape:. 
    Send PSend466 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testRed_Const);
    Array PThreadedCode465 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testRed, (Optr)&t_send1, (Optr)PSend466, (Optr)&t_block_return);
    Block PBlock464 = new_Block_with(empty_Array, empty_Array, PThreadedCode465, 1, PSend466);
    // ifTrue:. 
    Send PSend463 = new_Send((Optr)PSend462, SMB_ifTrue_, 1, (Optr)PBlock464);
    Symbol SMB_methodFailed_ = new_Symbol(L"methodFailed:");
    // methodFailed:. 
    Send PSend467 = new_Send((Optr)VAR_aClassDescription_0_0, SMB_methodFailed_, 1, (Optr)VAR_aSelector_0_1);
    Symbol  SMB_testOrange = new_Symbol(L"testOrange");
    Constant SMB_testOrange_Const = new_Constant((Optr)SMB_testOrange);
    // escape:. 
    Send PSend471 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testOrange_Const);
    Array PThreadedCode470 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testOrange, (Optr)&t_send1, (Optr)PSend471, (Optr)&t_block_return);
    Block PBlock469 = new_Block_with(empty_Array, empty_Array, PThreadedCode470, 1, PSend471);
    // ifTrue:. 
    Send PSend468 = new_Send((Optr)PSend467, SMB_ifTrue_, 1, (Optr)PBlock469);
    Symbol SMB_methodPassed_ = new_Symbol(L"methodPassed:");
    // methodPassed:. 
    Send PSend472 = new_Send((Optr)VAR_aClassDescription_0_0, SMB_methodPassed_, 1, (Optr)VAR_aSelector_0_1);
    Symbol  SMB_testGreen = new_Symbol(L"testGreen");
    Constant SMB_testGreen_Const = new_Constant((Optr)SMB_testGreen);
    // escape:. 
    Send PSend476 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testGreen_Const);
    Array PThreadedCode475 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testGreen, (Optr)&t_send1, (Optr)PSend476, (Optr)&t_block_return);
    Block PBlock474 = new_Block_with(empty_Array, empty_Array, PThreadedCode475, 1, PSend476);
    // ifTrue:. 
    Send PSend473 = new_Send((Optr)PSend472, SMB_ifTrue_, 1, (Optr)PBlock474);
    Symbol  SMB_testGray = new_Symbol(L"testGray");
    Array PThreadedCode445 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_send0, (Optr)PSend446, (Optr)&t_push_closure, (Optr)PBlock447, (Optr)&t_send1, (Optr)PSend456, (Optr)&t_send_ifTrue_, (Optr)PSend457, (Optr)PBlock458, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_1, (Optr)&t_send1, (Optr)PSend462, (Optr)&t_send_ifTrue_, (Optr)PSend463, (Optr)PBlock464, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_1, (Optr)&t_send1, (Optr)PSend467, (Optr)&t_send_ifTrue_, (Optr)PSend468, (Optr)PBlock469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClassDescription_0_0, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_1, (Optr)&t_send1, (Optr)PSend472, (Optr)&t_send_ifTrue_, (Optr)PSend473, (Optr)PBlock474, (Optr)&t_zap, (Optr)&t_push1, (Optr)SMB_testGray, (Optr)&t_method_return);
    Constant SMB_testGray_Const = new_Constant((Optr)SMB_testGray);
    Block PBlock443 = new_Block_with(PArray444, empty_Array, PThreadedCode445, 5, PSend457, PSend463, PSend468, PSend473, SMB_testGray_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend477 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock443);
    Array PThreadedCode442 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock443, (Optr)&t_send1, (Optr)PSend477, (Optr)&t_method_return);
    Method PMethod440 = new_Method_with(PArray441, empty_Array, empty_Array, PThreadedCode442, 1, PSend477);
    
    MethodClosure MC_SMB_browserIcon_selector_ = new_MethodClosure((Method)PMethod440, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_browserIcon_selector_, MC_SMB_browserIcon_selector_);
}


static void init_class_SMB_sunitVersion() {
    Symbol SMB_sunitVersion = new_Symbol(L"sunitVersion");
    String string_480 = new_String(L"3.1");
    Array PThreadedCode479 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_480, (Optr)&t_method_return);
    Constant string_480_Const = new_Constant((Optr)string_480);
    Method PMethod478 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode479, 1, string_480_Const);
    
    MethodClosure MC_SMB_sunitVersion = new_MethodClosure((Method)PMethod478, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_sunitVersion, MC_SMB_sunitVersion);
}


static void init_class_SMB_methodRaisedError_() {
    Symbol SMB_methodRaisedError_ = new_Symbol(L"methodRaisedError:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray482 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend484 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:. 
    Send PSend485 = new_Send((Optr)PSend484, SMB_at_, 1, (Optr)SMB_errors_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend486 = new_Send((Optr)PSend485, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode483 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend484, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send1, (Optr)PSend485, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend486, (Optr)&t_method_return);
    Method PMethod481 = new_Method_with(PArray482, empty_Array, empty_Array, PThreadedCode483, 1, PSend486);
    
    MethodClosure MC_SMB_methodRaisedError_ = new_MethodClosure((Method)PMethod481, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodRaisedError_, MC_SMB_methodRaisedError_);
}


static void init_class_SMB_buildSuiteFromAllSelectors() {
    Symbol SMB_buildSuiteFromAllSelectors = new_Symbol(L"buildSuiteFromAllSelectors");
    Symbol SMB_allTestSelectors = new_Symbol(L"allTestSelectors");
    // allTestSelectors. 
    Send PSend489 = new_Send((Optr)self, SMB_allTestSelectors, 0);
    Symbol SMB_buildSuiteFromMethods_ = new_Symbol(L"buildSuiteFromMethods:");
    // buildSuiteFromMethods:. 
    Send PSend490 = new_Send((Optr)self, SMB_buildSuiteFromMethods_, 1, (Optr)PSend489);
    Array PThreadedCode488 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend489, (Optr)&t_send1, (Optr)PSend490, (Optr)&t_method_return);
    Method PMethod487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode488, 1, PSend490);
    
    MethodClosure MC_SMB_buildSuiteFromAllSelectors = new_MethodClosure((Method)PMethod487, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_buildSuiteFromAllSelectors, MC_SMB_buildSuiteFromAllSelectors);
}


static void init_class_SMB_lastRunMethodNamed_() {
    Symbol SMB_lastRunMethodNamed_ = new_Symbol(L"lastRunMethodNamed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray492 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Variable VAR_str_1_0 = new_Variable_named(L"str", 1);
    Array PArray495 = new_Array_with(1, (Optr)VAR_str_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray498 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend500 = new_Send((Optr)VAR_aSelector_0_0, SMB_asString, 0);
    Symbol SMB_nextPutAll_ = new_Symbol(L"nextPutAll:");
    // nextPutAll:. 
    Send PSend501 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend500);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend502 = new_Send((Optr)VAR__receiver__2_0, SMB_cr, 0);
    Array PThreadedCode499 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send0, (Optr)PSend500, (Optr)&t_send1, (Optr)PSend501, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend502, (Optr)&t_method_return);
    Block PBlock497 = new_Block_with(PArray498, empty_Array, PThreadedCode499, 2, PSend501, PSend502);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend503 = new_Send((Optr)PBlock497, SMB_value_, 1, (Optr)VAR_str_1_0);
    Array PArray505 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend507 = new_Send((Optr)VAR__receiver__2_0, SMB_tab, 0);
    String string_508 = new_String(L"^ ");
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend509 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol SMB_storeString = new_Symbol(L"storeString");
    // storeString. 
    Send PSend510 = new_Send((Optr)PSend509, SMB_storeString, 0);
    Constant string_508_Const = new_Constant((Optr)string_508);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend511 = new_Send((Optr)string_508_Const, SMB__append_, 1, (Optr)PSend510);
    // nextPutAll:. 
    Send PSend512 = new_Send((Optr)VAR__receiver__2_0, SMB_nextPutAll_, 1, (Optr)PSend511);
    Array PThreadedCode506 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_send0, (Optr)PSend507, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_508, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend509, (Optr)&t_send0, (Optr)PSend510, (Optr)&t_send1, (Optr)PSend511, (Optr)&t_send1, (Optr)PSend512, (Optr)&t_method_return);
    Block PBlock504 = new_Block_with(PArray505, empty_Array, PThreadedCode506, 2, PSend507, PSend512);
    // value:. 
    Send PSend513 = new_Send((Optr)PBlock504, SMB_value_, 1, (Optr)VAR_str_1_0);
    Array PThreadedCode496 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_closure, (Optr)PBlock497, (Optr)&t_push_variable, (Optr)VAR_str_1_0, (Optr)&t_send1, (Optr)PSend503, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock504, (Optr)&t_push_variable, (Optr)VAR_str_1_0, (Optr)&t_send1, (Optr)PSend513, (Optr)&t_method_return);
    Block PBlock494 = new_Block_with(PArray495, empty_Array, PThreadedCode496, 2, PSend503, PSend513);
    Symbol SMB_streamContents_ = new_Symbol(L"streamContents:");
    // streamContents:. 
    Send PSend514 = new_Send((Optr)String_classReference, SMB_streamContents_, 1, (Optr)PBlock494);
    Array PThreadedCode493 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push_closure, (Optr)PBlock494, (Optr)&t_send1, (Optr)PSend514, (Optr)&t_method_return);
    Method PMethod491 = new_Method_with(PArray492, empty_Array, empty_Array, PThreadedCode493, 1, PSend514);
    
    MethodClosure MC_SMB_lastRunMethodNamed_ = new_MethodClosure((Method)PMethod491, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_lastRunMethodNamed_, MC_SMB_lastRunMethodNamed_);
}


static void init_class_SMB_buildSuiteFromMethods_() {
    Symbol SMB_buildSuiteFromMethods_ = new_Symbol(L"buildSuiteFromMethods:");
    Variable VAR_testMethods_0_0 = new_Variable_named(L"testMethods", 0);
    Array PArray516 = new_Array_with(1, (Optr)VAR_testMethods_0_0);
    Variable VAR_suite_0_1 = new_Variable_named(L"suite", 0);
    Array PArray517 = new_Array_with(1, (Optr)VAR_suite_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray522 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend524 = new_Send((Optr)self, SMB_name, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend525 = new_Send((Optr)PSend524, SMB_asString, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend526 = new_Send((Optr)VAR__receiver__1_0, SMB_name_, 1, (Optr)PSend525);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend527 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode523 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend524, (Optr)&t_send0, (Optr)PSend525, (Optr)&t_send1, (Optr)PSend526, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend527, (Optr)&t_method_return);
    Block PBlock521 = new_Block_with(PArray522, empty_Array, PThreadedCode523, 2, PSend526, PSend527);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend528 = new_Send((Optr)TestSuite_classReference, SMB_new, 0);
    // value:. 
    Send PSend520 = new_Send((Optr)PBlock521, SMB_value_, 1, (Optr)PSend528);
    Assign PAssign519 = new_Assign((Optr)VAR_suite_0_1, (Optr)PSend520);
    Symbol SMB_addToSuite_fromMethods_ = new_Symbol(L"addToSuite:fromMethods:");
    // addToSuite:fromMethods:. 
    Send PSend529 = new_Send((Optr)self, SMB_addToSuite_fromMethods_, 2, (Optr)VAR_suite_0_1, (Optr)VAR_testMethods_0_0);
    Array PThreadedCode518 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign519, (Optr)&t_push_closure, (Optr)PBlock521, (Optr)&t_push_class_reference, (Optr)TestSuite_classReference, (Optr)&t_send0, (Optr)PSend528, (Optr)&t_send1, (Optr)PSend520, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_suite_0_1, (Optr)&t_push_variable, (Optr)VAR_testMethods_0_0, (Optr)&t_send2, (Optr)PSend529, (Optr)&t_method_return);
    Method PMethod515 = new_Method_with(PArray516, PArray517, empty_Array, PThreadedCode518, 2, PAssign519, PSend529);
    
    MethodClosure MC_SMB_buildSuiteFromMethods_ = new_MethodClosure((Method)PMethod515, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_buildSuiteFromMethods_, MC_SMB_buildSuiteFromMethods_);
}


static void init_class_SMB_generateLastStoredRunMethod() {
    Symbol SMB_generateLastStoredRunMethod = new_Symbol(L"generateLastStoredRunMethod");
    Symbol SMB_shouldGenerateLastStoredRunMethod = new_Symbol(L"shouldGenerateLastStoredRunMethod");
    // shouldGenerateLastStoredRunMethod. 
    Send PSend532 = new_Send((Optr)self, SMB_shouldGenerateLastStoredRunMethod, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend536 = new_Send((Optr)self, SMB_class, 0);
    Symbol  SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    Symbol SMB_lastRunMethodNamed_ = new_Symbol(L"lastRunMethodNamed:");
    Constant SMB_lastStoredRun_Const = new_Constant((Optr)SMB_lastStoredRun);
    // lastRunMethodNamed:. 
    Send PSend537 = new_Send((Optr)self, SMB_lastRunMethodNamed_, 1, (Optr)SMB_lastStoredRun_Const);
    String string_538 = new_String(L"history");
    Symbol SMB_compile_classified_ = new_Symbol(L"compile:classified:");
    Constant string_538_Const = new_Constant((Optr)string_538);
    // compile:classified:. 
    Send PSend539 = new_Send((Optr)PSend536, SMB_compile_classified_, 2, (Optr)PSend537, (Optr)string_538_Const);
    Array PThreadedCode535 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend536, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_lastStoredRun, (Optr)&t_send1, (Optr)PSend537, (Optr)&t_push1, (Optr)string_538, (Optr)&t_send2, (Optr)PSend539, (Optr)&t_block_return);
    Block PBlock534 = new_Block_with(empty_Array, empty_Array, PThreadedCode535, 1, PSend539);
    // ifTrue:. 
    Send PSend533 = new_Send((Optr)PSend532, SMB_ifTrue_, 1, (Optr)PBlock534);
    Array PThreadedCode531 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend532, (Optr)&t_send_ifTrue_, (Optr)PSend533, (Optr)PBlock534, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod530 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode531, 2, PSend533, self);
    
    MethodClosure MC_SMB_generateLastStoredRunMethod = new_MethodClosure((Method)PMethod530, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_generateLastStoredRunMethod, MC_SMB_generateLastStoredRunMethod);
}


static void init_class_SMB_isUnitTest() {
    Symbol SMB_isUnitTest = new_Symbol(L"isUnitTest");
    Array PThreadedCode541 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod540 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode541, 1, true_Const);
    
    MethodClosure MC_SMB_isUnitTest = new_MethodClosure((Method)PMethod540, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_isUnitTest, MC_SMB_isUnitTest);
}


static void init_class_SMB_packageNamesUnderTest() {
    Symbol SMB_packageNamesUnderTest = new_Symbol(L"packageNamesUnderTest");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend544 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode543 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend544, (Optr)&t_method_return);
    Method PMethod542 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode543, 1, PSend544);
    
    MethodClosure MC_SMB_packageNamesUnderTest = new_MethodClosure((Method)PMethod542, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_packageNamesUnderTest, MC_SMB_packageNamesUnderTest);
}


static void init_class_SMB_storedMethodRaisedError_() {
    Symbol SMB_storedMethodRaisedError_ = new_Symbol(L"storedMethodRaisedError:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray546 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    // lastStoredRun. 
    Send PSend548 = new_Send((Optr)self, SMB_lastStoredRun, 0);
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:. 
    Send PSend549 = new_Send((Optr)PSend548, SMB_at_, 1, (Optr)SMB_errors_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend550 = new_Send((Optr)PSend549, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode547 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend548, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send1, (Optr)PSend549, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend550, (Optr)&t_method_return);
    Method PMethod545 = new_Method_with(PArray546, empty_Array, empty_Array, PThreadedCode547, 1, PSend550);
    
    MethodClosure MC_SMB_storedMethodRaisedError_ = new_MethodClosure((Method)PMethod545, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_storedMethodRaisedError_, MC_SMB_storedMethodRaisedError_);
}


static void init_class_SMB_allTestSelectors() {
    Symbol SMB_allTestSelectors = new_Symbol(L"allTestSelectors");
    Variable VAR_selectors_0_0 = new_Variable_named(L"selectors", 0);
    Array PArray552 = new_Array_with(1, (Optr)VAR_selectors_0_0);
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Symbol SMB_allSelectors = new_Symbol(L"allSelectors");
    // allSelectors. 
    Send PSend556 = new_Send((Optr)self, SMB_allSelectors, 0);
    // newFrom:. 
    Send PSend555 = new_Send((Optr)OrderedCollection_classReference, SMB_newFrom_, 1, (Optr)PSend556);
    Assign PAssign554 = new_Assign((Optr)VAR_selectors_0_0, (Optr)PSend555);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray558 = new_Array_with(1, (Optr)VAR_each_1_0);
    String string_560 = new_String(L"test");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_560_Const = new_Constant((Optr)string_560);
    // beginsWith:. 
    Send PSend561 = new_Send((Optr)VAR_each_1_0, SMB_beginsWith_, 1, (Optr)string_560_Const);
    Character char_435 = new_Character(L':');
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    Constant char_435_Const = new_Constant((Optr)char_435);
    // includes:. 
    Send PSend564 = new_Send((Optr)VAR_each_1_0, SMB_includes_, 1, (Optr)char_435_Const);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend565 = new_Send((Optr)PSend564, SMB_not, 0);
    Array PThreadedCode563 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push1, (Optr)char_435, (Optr)&t_send1, (Optr)PSend564, (Optr)&t_send0, (Optr)PSend565, (Optr)&t_block_return);
    Block PBlock562 = new_Block_with(empty_Array, empty_Array, PThreadedCode563, 1, PSend565);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend566 = new_Send((Optr)PSend561, SMB_and_, 1, (Optr)PBlock562);
    Array PThreadedCode559 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push1, (Optr)string_560, (Optr)&t_send1, (Optr)PSend561, (Optr)&t_push_closure, (Optr)PBlock562, (Optr)&t_send1, (Optr)PSend566, (Optr)&t_method_return);
    Block PBlock557 = new_Block_with(PArray558, empty_Array, PThreadedCode559, 1, PSend566);
    Symbol SMB_select_ = new_Symbol(L"select:");
    // select:. 
    Send PSend567 = new_Send((Optr)VAR_selectors_0_0, SMB_select_, 1, (Optr)PBlock557);
    Array PThreadedCode553 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign554, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend556, (Optr)&t_send1, (Optr)PSend555, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_selectors_0_0, (Optr)&t_push_closure, (Optr)PBlock557, (Optr)&t_send1, (Optr)PSend567, (Optr)&t_method_return);
    Method PMethod551 = new_Method_with(empty_Array, PArray552, empty_Array, PThreadedCode553, 2, PAssign554, PSend567);
    
    MethodClosure MC_SMB_allTestSelectors = new_MethodClosure((Method)PMethod551, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_allTestSelectors, MC_SMB_allTestSelectors);
}


static void init_class_SMB_buildSuiteFromLocalSelectors() {
    Symbol SMB_buildSuiteFromLocalSelectors = new_Symbol(L"buildSuiteFromLocalSelectors");
    Symbol SMB_testSelectors = new_Symbol(L"testSelectors");
    // testSelectors. 
    Send PSend570 = new_Send((Optr)self, SMB_testSelectors, 0);
    Symbol SMB_buildSuiteFromMethods_ = new_Symbol(L"buildSuiteFromMethods:");
    // buildSuiteFromMethods:. 
    Send PSend571 = new_Send((Optr)self, SMB_buildSuiteFromMethods_, 1, (Optr)PSend570);
    Array PThreadedCode569 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend570, (Optr)&t_send1, (Optr)PSend571, (Optr)&t_method_return);
    Method PMethod568 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode569, 1, PSend571);
    
    MethodClosure MC_SMB_buildSuiteFromLocalSelectors = new_MethodClosure((Method)PMethod568, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_buildSuiteFromLocalSelectors, MC_SMB_buildSuiteFromLocalSelectors);
}


static void init_class_SMB_hasMethodBeenRun_() {
    Symbol SMB_hasMethodBeenRun_ = new_Symbol(L"hasMethodBeenRun:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray573 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend575 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:. 
    Send PSend576 = new_Send((Optr)PSend575, SMB_at_, 1, (Optr)SMB_errors_Const);
    // lastRun. 
    Send PSend577 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_failures = new_Symbol(L"failures");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:. 
    Send PSend578 = new_Send((Optr)PSend577, SMB_at_, 1, (Optr)SMB_failures_Const);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend579 = new_Send((Optr)PSend576, SMB__append_, 1, (Optr)PSend578);
    // lastRun. 
    Send PSend580 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:. 
    Send PSend581 = new_Send((Optr)PSend580, SMB_at_, 1, (Optr)SMB_passed_Const);
    // ,. 
    Send PSend582 = new_Send((Optr)PSend579, SMB__append_, 1, (Optr)PSend581);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend583 = new_Send((Optr)PSend582, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode574 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend575, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send1, (Optr)PSend576, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend577, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_send1, (Optr)PSend578, (Optr)&t_send1, (Optr)PSend579, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend580, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_send1, (Optr)PSend581, (Optr)&t_send1, (Optr)PSend582, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend583, (Optr)&t_method_return);
    Method PMethod572 = new_Method_with(PArray573, empty_Array, empty_Array, PThreadedCode574, 1, PSend583);
    
    MethodClosure MC_SMB_hasMethodBeenRun_ = new_MethodClosure((Method)PMethod572, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_hasMethodBeenRun_, MC_SMB_hasMethodBeenRun_);
}


static void init_class_SMB_lastRun() {
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend586 = new_Send((Optr)TestResult_classReference, SMB_historyFor_, 1, (Optr)self);
    Array PThreadedCode585 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend586, (Optr)&t_method_return);
    Method PMethod584 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode585, 1, PSend586);
    
    MethodClosure MC_SMB_lastRun = new_MethodClosure((Method)PMethod584, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_lastRun, MC_SMB_lastRun);
}


static void init_class_SMB_shouldInheritSelectors() {
    Symbol SMB_shouldInheritSelectors = new_Symbol(L"shouldInheritSelectors");
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend589 = new_Send((Optr)self, SMB_superclass, 0);
    Symbol SMB_isAbstract = new_Symbol(L"isAbstract");
    // isAbstract. 
    Send PSend590 = new_Send((Optr)PSend589, SMB_isAbstract, 0);
    Symbol SMB_testSelectors = new_Symbol(L"testSelectors");
    // testSelectors. 
    Send PSend593 = new_Send((Optr)self, SMB_testSelectors, 0);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend594 = new_Send((Optr)PSend593, SMB_isEmpty, 0);
    Array PThreadedCode592 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend593, (Optr)&t_send0, (Optr)PSend594, (Optr)&t_block_return);
    Block PBlock591 = new_Block_with(empty_Array, empty_Array, PThreadedCode592, 1, PSend594);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend595 = new_Send((Optr)PSend590, SMB_or_, 1, (Optr)PBlock591);
    Array PThreadedCode588 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend589, (Optr)&t_send0, (Optr)PSend590, (Optr)&t_push_closure, (Optr)PBlock591, (Optr)&t_send1, (Optr)PSend595, (Optr)&t_method_return);
    Method PMethod587 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode588, 1, PSend595);
    
    MethodClosure MC_SMB_shouldInheritSelectors = new_MethodClosure((Method)PMethod587, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_shouldInheritSelectors, MC_SMB_shouldInheritSelectors);
}


static void init_class_SMB_methodFailed_() {
    Symbol SMB_methodFailed_ = new_Symbol(L"methodFailed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray597 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend599 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:. 
    Send PSend600 = new_Send((Optr)PSend599, SMB_at_, 1, (Optr)SMB_failures_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend601 = new_Send((Optr)PSend600, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode598 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend599, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_send1, (Optr)PSend600, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend601, (Optr)&t_method_return);
    Method PMethod596 = new_Method_with(PArray597, empty_Array, empty_Array, PThreadedCode598, 1, PSend601);
    
    MethodClosure MC_SMB_methodFailed_ = new_MethodClosure((Method)PMethod596, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodFailed_, MC_SMB_methodFailed_);
}


static void init_class_SMB_run_() {
    Symbol SMB_run_ = new_Symbol(L"run:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray603 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend605 = new_Send((Optr)self, SMB_selector_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_run = new_Symbol(L"run");
    // run. 
    Send PSend606 = new_Send((Optr)PSend605, SMB_run, 0);
    Array PThreadedCode604 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend605, (Optr)&t_send0, (Optr)PSend606, (Optr)&t_method_return);
    Method PMethod602 = new_Method_with(PArray603, empty_Array, empty_Array, PThreadedCode604, 1, PSend606);
    
    MethodClosure MC_SMB_run_ = new_MethodClosure((Method)PMethod602, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_run_, MC_SMB_run_);
}


static void init_class_SMB_history() {
    Symbol SMB_history = new_Symbol(L"history");
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    // newTestDictionary. 
    Send PSend612 = new_Send((Optr)self, SMB_newTestDictionary, 0);
    Assign PAssign611 = new_Assign((Optr)slot_SUnit_Kernel_TestCase_Class_class_history, (Optr)PSend612);
    Array PThreadedCode610 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign611, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend612, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock609 = new_Block_with(empty_Array, empty_Array, PThreadedCode610, 1, PAssign611);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend613 = new_Send((Optr)slot_SUnit_Kernel_TestCase_Class_class_history, SMB_ifNil_, 1, (Optr)PBlock609);
    Array PThreadedCode608 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_SUnit_Kernel_TestCase_Class_class_history, (Optr)&t_push_closure, (Optr)PBlock609, (Optr)&t_send1, (Optr)PSend613, (Optr)&t_method_return);
    Method PMethod607 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode608, 1, PSend613);
    
    MethodClosure MC_SMB_history = new_MethodClosure((Method)PMethod607, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_history, MC_SMB_history);
}


static void init_class_SMB_storedMethodPassed_() {
    Symbol SMB_storedMethodPassed_ = new_Symbol(L"storedMethodPassed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray615 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    // lastStoredRun. 
    Send PSend617 = new_Send((Optr)self, SMB_lastStoredRun, 0);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:. 
    Send PSend618 = new_Send((Optr)PSend617, SMB_at_, 1, (Optr)SMB_passed_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend619 = new_Send((Optr)PSend618, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode616 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend617, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_send1, (Optr)PSend618, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend619, (Optr)&t_method_return);
    Method PMethod614 = new_Method_with(PArray615, empty_Array, empty_Array, PThreadedCode616, 1, PSend619);
    
    MethodClosure MC_SMB_storedMethodPassed_ = new_MethodClosure((Method)PMethod614, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_storedMethodPassed_, MC_SMB_storedMethodPassed_);
}


static void init_class_SMB_browserIcon() {
    Symbol SMB_browserIcon = new_Symbol(L"browserIcon");
    Variable VAR_classHistory_0_0 = new_Variable_named(L"classHistory", 0);
    Array PArray621 = new_Array_with(1, (Optr)VAR_classHistory_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray624 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isAbstract = new_Symbol(L"isAbstract");
    // isAbstract. 
    Send PSend626 = new_Send((Optr)self, SMB_isAbstract, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper630 = new_Super(SMB_browserIcon, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend631 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper630);
    Array PThreadedCode629 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper630, (Optr)&t_send1, (Optr)PSend631, (Optr)&t_block_return);
    Block PBlock628 = new_Block_with(empty_Array, empty_Array, PThreadedCode629, 1, PSend631);
    // ifTrue:. 
    Send PSend627 = new_Send((Optr)PSend626, SMB_ifTrue_, 1, (Optr)PBlock628);
    Symbol SMB_historyFor_ = new_Symbol(L"historyFor:");
    // historyFor:. 
    Send PSend633 = new_Send((Optr)TestResult_classReference, SMB_historyFor_, 1, (Optr)self);
    Assign PAssign632 = new_Assign((Optr)VAR_classHistory_0_0, (Optr)PSend633);
    Symbol  SMB_errors = new_Symbol(L"errors");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:. 
    Send PSend634 = new_Send((Optr)VAR_classHistory_0_0, SMB_at_, 1, (Optr)SMB_errors_Const);
    Symbol SMB_isEmpty = new_Symbol(L"isEmpty");
    // isEmpty. 
    Send PSend635 = new_Send((Optr)PSend634, SMB_isEmpty, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol  SMB_testRed = new_Symbol(L"testRed");
    Constant SMB_testRed_Const = new_Constant((Optr)SMB_testRed);
    // escape:. 
    Send PSend639 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testRed_Const);
    Array PThreadedCode638 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testRed, (Optr)&t_send1, (Optr)PSend639, (Optr)&t_block_return);
    Block PBlock637 = new_Block_with(empty_Array, empty_Array, PThreadedCode638, 1, PSend639);
    // ifFalse:. 
    Send PSend636 = new_Send((Optr)PSend635, SMB_ifFalse_, 1, (Optr)PBlock637);
    Symbol  SMB_failures = new_Symbol(L"failures");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:. 
    Send PSend640 = new_Send((Optr)VAR_classHistory_0_0, SMB_at_, 1, (Optr)SMB_failures_Const);
    // isEmpty. 
    Send PSend641 = new_Send((Optr)PSend640, SMB_isEmpty, 0);
    Symbol  SMB_testOrange = new_Symbol(L"testOrange");
    Constant SMB_testOrange_Const = new_Constant((Optr)SMB_testOrange);
    // escape:. 
    Send PSend645 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testOrange_Const);
    Array PThreadedCode644 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testOrange, (Optr)&t_send1, (Optr)PSend645, (Optr)&t_block_return);
    Block PBlock643 = new_Block_with(empty_Array, empty_Array, PThreadedCode644, 1, PSend645);
    // ifFalse:. 
    Send PSend642 = new_Send((Optr)PSend641, SMB_ifFalse_, 1, (Optr)PBlock643);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:. 
    Send PSend646 = new_Send((Optr)VAR_classHistory_0_0, SMB_at_, 1, (Optr)SMB_passed_Const);
    // isEmpty. 
    Send PSend647 = new_Send((Optr)PSend646, SMB_isEmpty, 0);
    Symbol  SMB_testGreen = new_Symbol(L"testGreen");
    Constant SMB_testGreen_Const = new_Constant((Optr)SMB_testGreen);
    // escape:. 
    Send PSend651 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)SMB_testGreen_Const);
    Array PThreadedCode650 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push1, (Optr)SMB_testGreen, (Optr)&t_send1, (Optr)PSend651, (Optr)&t_block_return);
    Block PBlock649 = new_Block_with(empty_Array, empty_Array, PThreadedCode650, 1, PSend651);
    // ifFalse:. 
    Send PSend648 = new_Send((Optr)PSend647, SMB_ifFalse_, 1, (Optr)PBlock649);
    Symbol  SMB_testGray = new_Symbol(L"testGray");
    Array PThreadedCode625 = instantiate_Array_with(ThreadedCode_Class, 0, 55, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend626, (Optr)&t_send_ifTrue_, (Optr)PSend627, (Optr)PBlock628, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign632, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend633, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_classHistory_0_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send1, (Optr)PSend634, (Optr)&t_send0, (Optr)PSend635, (Optr)&t_send_ifFalse_, (Optr)PSend636, (Optr)PBlock637, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_classHistory_0_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_send1, (Optr)PSend640, (Optr)&t_send0, (Optr)PSend641, (Optr)&t_send_ifFalse_, (Optr)PSend642, (Optr)PBlock643, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_classHistory_0_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_send1, (Optr)PSend646, (Optr)&t_send0, (Optr)PSend647, (Optr)&t_send_ifFalse_, (Optr)PSend648, (Optr)PBlock649, (Optr)&t_zap, (Optr)&t_push1, (Optr)SMB_testGray, (Optr)&t_method_return);
    Constant SMB_testGray_Const = new_Constant((Optr)SMB_testGray);
    Block PBlock623 = new_Block_with(PArray624, empty_Array, PThreadedCode625, 6, PSend627, PAssign632, PSend636, PSend642, PSend648, SMB_testGray_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend652 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock623);
    Array PThreadedCode622 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock623, (Optr)&t_send1, (Optr)PSend652, (Optr)&t_method_return);
    Method PMethod620 = new_Method_with(empty_Array, PArray621, empty_Array, PThreadedCode622, 1, PSend652);
    
    MethodClosure MC_SMB_browserIcon = new_MethodClosure((Method)PMethod620, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_browserIcon, MC_SMB_browserIcon);
}


static void init_class_SMB_buildSuite() {
    Symbol SMB_buildSuite = new_Symbol(L"buildSuite");
    Variable VAR_suite_0_0 = new_Variable_named(L"suite", 0);
    Array PArray654 = new_Array_with(1, (Optr)VAR_suite_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend657 = new_Send((Optr)TestSuite_classReference, SMB_new, 0);
    Assign PAssign656 = new_Assign((Optr)VAR_suite_0_0, (Optr)PSend657);
    Symbol SMB_isAbstract = new_Symbol(L"isAbstract");
    // isAbstract. 
    Send PSend658 = new_Send((Optr)self, SMB_isAbstract, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend662 = new_Send((Optr)self, SMB_name, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend663 = new_Send((Optr)PSend662, SMB_asString, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend664 = new_Send((Optr)VAR_suite_0_0, SMB_name_, 1, (Optr)PSend663);
    Symbol SMB_allSubclasses = new_Symbol(L"allSubclasses");
    // allSubclasses. 
    Send PSend665 = new_Send((Optr)self, SMB_allSubclasses, 0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray667 = new_Array_with(1, (Optr)VAR_each_1_0);
    // isAbstract. 
    Send PSend669 = new_Send((Optr)VAR_each_1_0, SMB_isAbstract, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_addToSuiteFromSelectors_ = new_Symbol(L"addToSuiteFromSelectors:");
    // addToSuiteFromSelectors:. 
    Send PSend673 = new_Send((Optr)VAR_each_1_0, SMB_addToSuiteFromSelectors_, 1, (Optr)VAR_suite_0_0);
    Array PThreadedCode672 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_send1, (Optr)PSend673, (Optr)&t_block_return);
    Block PBlock671 = new_Block_with(empty_Array, empty_Array, PThreadedCode672, 1, PSend673);
    // ifFalse:. 
    Send PSend670 = new_Send((Optr)PSend669, SMB_ifFalse_, 1, (Optr)PBlock671);
    Array PThreadedCode668 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send0, (Optr)PSend669, (Optr)&t_send_ifFalse_, (Optr)PSend670, (Optr)PBlock671, (Optr)&t_method_return);
    Block PBlock666 = new_Block_with(PArray667, empty_Array, PThreadedCode668, 1, PSend670);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend674 = new_Send((Optr)PSend665, SMB_do_, 1, (Optr)PBlock666);
    Array PThreadedCode661 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend662, (Optr)&t_send0, (Optr)PSend663, (Optr)&t_send1, (Optr)PSend664, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend665, (Optr)&t_push_closure, (Optr)PBlock666, (Optr)&t_send1, (Optr)PSend674, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_block_return);
    Block PBlock660 = new_Block_with(empty_Array, empty_Array, PThreadedCode661, 3, PSend664, PSend674, VAR_suite_0_0);
    // addToSuiteFromSelectors:. 
    Send PSend677 = new_Send((Optr)self, SMB_addToSuiteFromSelectors_, 1, (Optr)VAR_suite_0_0);
    Array PThreadedCode676 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_send1, (Optr)PSend677, (Optr)&t_block_return);
    Block PBlock675 = new_Block_with(empty_Array, empty_Array, PThreadedCode676, 1, PSend677);
    // ifTrue:ifFalse:. 
    Send PSend659 = new_Send((Optr)PSend658, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock660, (Optr)PBlock675);
    Array PThreadedCode655 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign656, (Optr)&t_push_class_reference, (Optr)TestSuite_classReference, (Optr)&t_send0, (Optr)PSend657, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend658, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend659, (Optr)PBlock660, (Optr)PBlock675, (Optr)&t_method_return);
    Method PMethod653 = new_Method_with(empty_Array, PArray654, empty_Array, PThreadedCode655, 2, PAssign656, PSend659);
    
    MethodClosure MC_SMB_buildSuite = new_MethodClosure((Method)PMethod653, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_buildSuite, MC_SMB_buildSuite);
}


static void init_class_SMB_debug_() {
    Symbol SMB_debug_ = new_Symbol(L"debug:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray679 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend681 = new_Send((Optr)self, SMB_selector_, 1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_debug = new_Symbol(L"debug");
    // debug. 
    Send PSend682 = new_Send((Optr)PSend681, SMB_debug, 0);
    Array PThreadedCode680 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend681, (Optr)&t_send0, (Optr)PSend682, (Optr)&t_method_return);
    Method PMethod678 = new_Method_with(PArray679, empty_Array, empty_Array, PThreadedCode680, 1, PSend682);
    
    MethodClosure MC_SMB_debug_ = new_MethodClosure((Method)PMethod678, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_debug_, MC_SMB_debug_);
}


static void init_class_SMB_methodPassed_() {
    Symbol SMB_methodPassed_ = new_Symbol(L"methodPassed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray684 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend686 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:. 
    Send PSend687 = new_Send((Optr)PSend686, SMB_at_, 1, (Optr)SMB_passed_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend688 = new_Send((Optr)PSend687, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode685 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend686, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_send1, (Optr)PSend687, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend688, (Optr)&t_method_return);
    Method PMethod683 = new_Method_with(PArray684, empty_Array, empty_Array, PThreadedCode685, 1, PSend688);
    
    MethodClosure MC_SMB_methodPassed_ = new_MethodClosure((Method)PMethod683, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodPassed_, MC_SMB_methodPassed_);
}


static void init_class_SMB_resources() {
    Symbol SMB_resources = new_Symbol(L"resources");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend691 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode690 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend691, (Optr)&t_method_return);
    Method PMethod689 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode690, 1, PSend691);
    
    MethodClosure MC_SMB_resources = new_MethodClosure((Method)PMethod689, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_resources, MC_SMB_resources);
}


static void init_class_SMB_lastStoredRun() {
    Symbol SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    Variable VAR_results_0_0 = new_Variable_named(L"results", 0);
    Array PArray693 = new_Array_with(1, (Optr)VAR_results_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend696 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign695 = new_Assign((Optr)VAR_results_0_0, (Optr)PSend696);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend697 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend698 = new_Send((Optr)VAR_results_0_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend697);
    Symbol  SMB_passed = new_Symbol(L"passed");
    // new. 
    Send PSend699 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend700 = new_Send((Optr)VAR_results_0_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend699);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend701 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend702 = new_Send((Optr)VAR_results_0_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend701);
    Array PThreadedCode694 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign695, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend696, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_results_0_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend697, (Optr)&t_send2, (Optr)PSend698, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_results_0_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend699, (Optr)&t_send2, (Optr)PSend700, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_results_0_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend701, (Optr)&t_send2, (Optr)PSend702, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_results_0_0, (Optr)&t_method_return);
    Method PMethod692 = new_Method_with(empty_Array, PArray693, empty_Array, PThreadedCode694, 5, PAssign695, PSend698, PSend700, PSend702, VAR_results_0_0);
    
    MethodClosure MC_SMB_lastStoredRun = new_MethodClosure((Method)PMethod692, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_lastStoredRun, MC_SMB_lastStoredRun);
}


static void init_class_SMB_isAbstract() {
    Symbol SMB_isAbstract = new_Symbol(L"isAbstract");
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend705 = new_Send((Optr)self, SMB_name, 0);
    Symbol  SMB_TestCase = new_Symbol(L"TestCase");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_TestCase_Const = new_Constant((Optr)SMB_TestCase);
    // =. 
    Send PSend706 = new_Send((Optr)PSend705, SMB__equals_, 1, (Optr)SMB_TestCase_Const);
    Array PThreadedCode704 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend705, (Optr)&t_push1, (Optr)SMB_TestCase, (Optr)&t_send1, (Optr)PSend706, (Optr)&t_method_return);
    Method PMethod703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode704, 1, PSend706);
    
    MethodClosure MC_SMB_isAbstract = new_MethodClosure((Method)PMethod703, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_isAbstract, MC_SMB_isAbstract);
}


static void init_class_SMB_suite() {
    Symbol SMB_suite = new_Symbol(L"suite");
    Symbol SMB_buildSuite = new_Symbol(L"buildSuite");
    // buildSuite. 
    Send PSend709 = new_Send((Optr)self, SMB_buildSuite, 0);
    Array PThreadedCode708 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend709, (Optr)&t_method_return);
    Method PMethod707 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode708, 1, PSend709);
    
    MethodClosure MC_SMB_suite = new_MethodClosure((Method)PMethod707, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_suite, MC_SMB_suite);
}


static void init_class_SMB_shouldGenerateLastStoredRunMethod() {
    Symbol SMB_shouldGenerateLastStoredRunMethod = new_Symbol(L"shouldGenerateLastStoredRunMethod");
    Variable VAR_sameRun_0_0 = new_Variable_named(L"sameRun", 0);
    Array PArray711 = new_Array_with(1, (Optr)VAR_sameRun_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray714 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend716 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methodDictionary = new_Symbol(L"methodDictionary");
    // methodDictionary. 
    Send PSend717 = new_Send((Optr)PSend716, SMB_methodDictionary, 0);
    Symbol  SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    Symbol SMB_includesKey_ = new_Symbol(L"includesKey:");
    Constant SMB_lastStoredRun_Const = new_Constant((Optr)SMB_lastStoredRun);
    // includesKey:. 
    Send PSend718 = new_Send((Optr)PSend717, SMB_includesKey_, 1, (Optr)SMB_lastStoredRun_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend722 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode721 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend722, (Optr)&t_block_return);
    Block PBlock720 = new_Block_with(empty_Array, empty_Array, PThreadedCode721, 1, PSend722);
    // ifFalse:. 
    Send PSend719 = new_Send((Optr)PSend718, SMB_ifFalse_, 1, (Optr)PBlock720);
    Symbol SMB_with_with_with_ = new_Symbol(L"with:with:with:");
    Symbol  SMB_passed = new_Symbol(L"passed");
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    Symbol  SMB_failures = new_Symbol(L"failures");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    Symbol  SMB_errors = new_Symbol(L"errors");
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // with:with:with:. 
    Send PSend725 = new_Send((Optr)Array_classReference, SMB_with_with_with_, 3, (Optr)SMB_passed_Const, (Optr)SMB_failures_Const, (Optr)SMB_errors_Const);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    Variable VAR_ok_2_0 = new_Variable_named(L"ok", 2);
    Variable VAR_set_2_1 = new_Variable_named(L"set", 2);
    Array PArray727 = new_Array_with(2, (Optr)VAR_ok_2_0, (Optr)VAR_set_2_1);
    Symbol SMB_lastRun = new_Symbol(L"lastRun");
    // lastRun. 
    Send PSend731 = new_Send((Optr)self, SMB_lastRun, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend732 = new_Send((Optr)PSend731, SMB_at_, 1, (Optr)VAR_set_2_1);
    // lastStoredRun. 
    Send PSend733 = new_Send((Optr)self, SMB_lastStoredRun, 0);
    // at:. 
    Send PSend734 = new_Send((Optr)PSend733, SMB_at_, 1, (Optr)VAR_set_2_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend735 = new_Send((Optr)PSend732, SMB__equals_, 1, (Optr)PSend734);
    Array PThreadedCode730 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend731, (Optr)&t_push_variable, (Optr)VAR_set_2_1, (Optr)&t_send1, (Optr)PSend732, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend733, (Optr)&t_push_variable, (Optr)VAR_set_2_1, (Optr)&t_send1, (Optr)PSend734, (Optr)&t_send1, (Optr)PSend735, (Optr)&t_block_return);
    Block PBlock729 = new_Block_with(empty_Array, empty_Array, PThreadedCode730, 1, PSend735);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend736 = new_Send((Optr)VAR_ok_2_0, SMB_and_, 1, (Optr)PBlock729);
    Array PThreadedCode728 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_ok_2_0, (Optr)&t_push_closure, (Optr)PBlock729, (Optr)&t_send1, (Optr)PSend736, (Optr)&t_method_return);
    Block PBlock726 = new_Block_with(PArray727, empty_Array, PThreadedCode728, 1, PSend736);
    // inject:into:. 
    Send PSend724 = new_Send((Optr)PSend725, SMB_inject_into_, 2, (Optr)true_Const, (Optr)PBlock726);
    Assign PAssign723 = new_Assign((Optr)VAR_sameRun_0_0, (Optr)PSend724);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend737 = new_Send((Optr)VAR_sameRun_0_0, SMB_not, 0);
    Array PThreadedCode715 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend716, (Optr)&t_send0, (Optr)PSend717, (Optr)&t_push1, (Optr)SMB_lastStoredRun, (Optr)&t_send1, (Optr)PSend718, (Optr)&t_send_ifFalse_, (Optr)PSend719, (Optr)PBlock720, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign723, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_send3, (Optr)PSend725, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock726, (Optr)&t_send2, (Optr)PSend724, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sameRun_0_0, (Optr)&t_send0, (Optr)PSend737, (Optr)&t_method_return);
    Block PBlock713 = new_Block_with(PArray714, empty_Array, PThreadedCode715, 3, PSend719, PAssign723, PSend737);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend738 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock713);
    Array PThreadedCode712 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock713, (Optr)&t_send1, (Optr)PSend738, (Optr)&t_method_return);
    Method PMethod710 = new_Method_with(empty_Array, PArray711, empty_Array, PThreadedCode712, 1, PSend738);
    
    MethodClosure MC_SMB_shouldGenerateLastStoredRunMethod = new_MethodClosure((Method)PMethod710, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_shouldGenerateLastStoredRunMethod, MC_SMB_shouldGenerateLastStoredRunMethod);
}


static void init_class_SMB_methodRegressed_() {
    Symbol SMB_methodRegressed_ = new_Symbol(L"methodRegressed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray740 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_storedMethodPassed_ = new_Symbol(L"storedMethodPassed:");
    // storedMethodPassed:. 
    Send PSend742 = new_Send((Optr)self, SMB_storedMethodPassed_, 1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_methodFailed_ = new_Symbol(L"methodFailed:");
    // methodFailed:. 
    Send PSend745 = new_Send((Optr)self, SMB_methodFailed_, 1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_methodRaisedError_ = new_Symbol(L"methodRaisedError:");
    // methodRaisedError:. 
    Send PSend748 = new_Send((Optr)self, SMB_methodRaisedError_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode747 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend748, (Optr)&t_block_return);
    Block PBlock746 = new_Block_with(empty_Array, empty_Array, PThreadedCode747, 1, PSend748);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend749 = new_Send((Optr)PSend745, SMB_or_, 1, (Optr)PBlock746);
    Array PThreadedCode744 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend745, (Optr)&t_push_closure, (Optr)PBlock746, (Optr)&t_send1, (Optr)PSend749, (Optr)&t_block_return);
    Block PBlock743 = new_Block_with(empty_Array, empty_Array, PThreadedCode744, 1, PSend749);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend750 = new_Send((Optr)PSend742, SMB_and_, 1, (Optr)PBlock743);
    Array PThreadedCode741 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend742, (Optr)&t_push_closure, (Optr)PBlock743, (Optr)&t_send1, (Optr)PSend750, (Optr)&t_method_return);
    Method PMethod739 = new_Method_with(PArray740, empty_Array, empty_Array, PThreadedCode741, 1, PSend750);
    
    MethodClosure MC_SMB_methodRegressed_ = new_MethodClosure((Method)PMethod739, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodRegressed_, MC_SMB_methodRegressed_);
}


static void init_class_SMB_suiteClass() {
    Symbol SMB_suiteClass = new_Symbol(L"suiteClass");
    Array PThreadedCode752 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_class_reference, (Optr)TestSuite_classReference, (Optr)&t_method_return);
    Method PMethod751 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode752, 1, TestSuite_classReference);
    
    MethodClosure MC_SMB_suiteClass = new_MethodClosure((Method)PMethod751, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_suiteClass, MC_SMB_suiteClass);
}


static void init_class_SMB_addToSuite_fromMethods_() {
    Symbol SMB_addToSuite_fromMethods_ = new_Symbol(L"addToSuite:fromMethods:");
    Variable VAR_suite_0_0 = new_Variable_named(L"suite", 0);
    Variable VAR_testMethods_0_1 = new_Variable_named(L"testMethods", 0);
    Array PArray754 = new_Array_with(2, (Optr)VAR_suite_0_0, (Optr)VAR_testMethods_0_1);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray757 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend759 = new_Send((Optr)self, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Symbol SMB_addTest_ = new_Symbol(L"addTest:");
    // addTest:. 
    Send PSend760 = new_Send((Optr)VAR_suite_0_0, SMB_addTest_, 1, (Optr)PSend759);
    Array PThreadedCode758 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend759, (Optr)&t_send1, (Optr)PSend760, (Optr)&t_method_return);
    Block PBlock756 = new_Block_with(PArray757, empty_Array, PThreadedCode758, 1, PSend760);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend761 = new_Send((Optr)VAR_testMethods_0_1, SMB_do_, 1, (Optr)PBlock756);
    Array PThreadedCode755 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_testMethods_0_1, (Optr)&t_push_closure, (Optr)PBlock756, (Optr)&t_send1, (Optr)PSend761, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_method_return);
    Method PMethod753 = new_Method_with(PArray754, empty_Array, empty_Array, PThreadedCode755, 2, PSend761, VAR_suite_0_0);
    
    MethodClosure MC_SMB_addToSuite_fromMethods_ = new_MethodClosure((Method)PMethod753, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_addToSuite_fromMethods_, MC_SMB_addToSuite_fromMethods_);
}


static void init_class_SMB_newTestDictionary() {
    Symbol SMB_newTestDictionary = new_Symbol(L"newTestDictionary");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray765 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol  SMB_timeStamp = new_Symbol(L"timeStamp");
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_timeStamp_Const = new_Constant((Optr)SMB_timeStamp);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // at:put:. 
    Send PSend767 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_timeStamp_Const, (Optr)int_0_Const);
    Symbol  SMB_passed = new_Symbol(L"passed");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend768 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_passed_Const = new_Constant((Optr)SMB_passed);
    // at:put:. 
    Send PSend769 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_passed_Const, (Optr)PSend768);
    Symbol  SMB_failures = new_Symbol(L"failures");
    // new. 
    Send PSend770 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:put:. 
    Send PSend771 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_failures_Const, (Optr)PSend770);
    Symbol  SMB_errors = new_Symbol(L"errors");
    // new. 
    Send PSend772 = new_Send((Optr)Set_classReference, SMB_new, 0);
    Constant SMB_errors_Const = new_Constant((Optr)SMB_errors);
    // at:put:. 
    Send PSend773 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)SMB_errors_Const, (Optr)PSend772);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend774 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode766 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_timeStamp, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend767, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_passed, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend768, (Optr)&t_send2, (Optr)PSend769, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend770, (Optr)&t_send2, (Optr)PSend771, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)SMB_errors, (Optr)&t_push_class_reference, (Optr)Set_classReference, (Optr)&t_send0, (Optr)PSend772, (Optr)&t_send2, (Optr)PSend773, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend774, (Optr)&t_method_return);
    Block PBlock764 = new_Block_with(PArray765, empty_Array, PThreadedCode766, 5, PSend767, PSend769, PSend771, PSend773, PSend774);
    // new. 
    Send PSend775 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend776 = new_Send((Optr)PBlock764, SMB_value_, 1, (Optr)PSend775);
    Array PThreadedCode763 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock764, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend775, (Optr)&t_send1, (Optr)PSend776, (Optr)&t_method_return);
    Method PMethod762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode763, 1, PSend776);
    
    MethodClosure MC_SMB_newTestDictionary = new_MethodClosure((Method)PMethod762, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_newTestDictionary, MC_SMB_newTestDictionary);
}


static void init_class_SMB_run() {
    Symbol SMB_run = new_Symbol(L"run");
    Symbol SMB_suite = new_Symbol(L"suite");
    // suite. 
    Send PSend779 = new_Send((Optr)self, SMB_suite, 0);
    // run. 
    Send PSend780 = new_Send((Optr)PSend779, SMB_run, 0);
    Array PThreadedCode778 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend779, (Optr)&t_send0, (Optr)PSend780, (Optr)&t_method_return);
    Method PMethod777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode778, 1, PSend780);
    
    MethodClosure MC_SMB_run = new_MethodClosure((Method)PMethod777, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_run, MC_SMB_run);
}


static void init_class_SMB_selector_() {
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray782 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend784 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_setTestSelector_ = new_Symbol(L"setTestSelector:");
    // setTestSelector:. 
    Send PSend785 = new_Send((Optr)PSend784, SMB_setTestSelector_, 1, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode783 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend784, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend785, (Optr)&t_method_return);
    Method PMethod781 = new_Method_with(PArray782, empty_Array, empty_Array, PThreadedCode783, 1, PSend785);
    
    MethodClosure MC_SMB_selector_ = new_MethodClosure((Method)PMethod781, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_selector_, MC_SMB_selector_);
}


static void init_class_SMB_resetHistory() {
    Symbol SMB_resetHistory = new_Symbol(L"resetHistory");
    Assign PAssign788 = new_Assign((Optr)slot_SUnit_Kernel_TestCase_Class_class_history, (Optr)nil_Const);
    Array PThreadedCode787 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign788, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode787, 2, PAssign788, self);
    
    MethodClosure MC_SMB_resetHistory = new_MethodClosure((Method)PMethod786, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_resetHistory, MC_SMB_resetHistory);
}


static void init_class_SMB_history_() {
    Symbol SMB_history_ = new_Symbol(L"history:");
    Variable VAR_aDictionary_0_0 = new_Variable_named(L"aDictionary", 0);
    Array PArray790 = new_Array_with(1, (Optr)VAR_aDictionary_0_0);
    Assign PAssign792 = new_Assign((Optr)slot_SUnit_Kernel_TestCase_Class_class_history, (Optr)VAR_aDictionary_0_0);
    Array PThreadedCode791 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign792, (Optr)&t_push_variable, (Optr)VAR_aDictionary_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod789 = new_Method_with(PArray790, empty_Array, empty_Array, PThreadedCode791, 2, PAssign792, self);
    
    MethodClosure MC_SMB_history_ = new_MethodClosure((Method)PMethod789, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_history_, MC_SMB_history_);
}


static void init_class_SMB_addToSuiteFromSelectors_() {
    Symbol SMB_addToSuiteFromSelectors_ = new_Symbol(L"addToSuiteFromSelectors:");
    Variable VAR_suite_0_0 = new_Variable_named(L"suite", 0);
    Array PArray794 = new_Array_with(1, (Optr)VAR_suite_0_0);
    Symbol SMB_shouldInheritSelectors = new_Symbol(L"shouldInheritSelectors");
    // shouldInheritSelectors. 
    Send PSend796 = new_Send((Optr)self, SMB_shouldInheritSelectors, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_allTestSelectors = new_Symbol(L"allTestSelectors");
    // allTestSelectors. 
    Send PSend800 = new_Send((Optr)self, SMB_allTestSelectors, 0);
    Array PThreadedCode799 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend800, (Optr)&t_block_return);
    Block PBlock798 = new_Block_with(empty_Array, empty_Array, PThreadedCode799, 1, PSend800);
    Symbol SMB_testSelectors = new_Symbol(L"testSelectors");
    // testSelectors. 
    Send PSend803 = new_Send((Optr)self, SMB_testSelectors, 0);
    Array PThreadedCode802 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend803, (Optr)&t_block_return);
    Block PBlock801 = new_Block_with(empty_Array, empty_Array, PThreadedCode802, 1, PSend803);
    // ifTrue:ifFalse:. 
    Send PSend797 = new_Send((Optr)PSend796, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock798, (Optr)PBlock801);
    Symbol SMB_addToSuite_fromMethods_ = new_Symbol(L"addToSuite:fromMethods:");
    // addToSuite:fromMethods:. 
    Send PSend804 = new_Send((Optr)self, SMB_addToSuite_fromMethods_, 2, (Optr)VAR_suite_0_0, (Optr)PSend797);
    Array PThreadedCode795 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_suite_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend796, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend797, (Optr)PBlock798, (Optr)PBlock801, (Optr)&t_send2, (Optr)PSend804, (Optr)&t_method_return);
    Method PMethod793 = new_Method_with(PArray794, empty_Array, empty_Array, PThreadedCode795, 1, PSend804);
    
    MethodClosure MC_SMB_addToSuiteFromSelectors_ = new_MethodClosure((Method)PMethod793, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_addToSuiteFromSelectors_, MC_SMB_addToSuiteFromSelectors_);
}


static void init_class_SMB_storedMethodFailed_() {
    Symbol SMB_storedMethodFailed_ = new_Symbol(L"storedMethodFailed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray806 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_lastStoredRun = new_Symbol(L"lastStoredRun");
    // lastStoredRun. 
    Send PSend808 = new_Send((Optr)self, SMB_lastStoredRun, 0);
    Symbol  SMB_failures = new_Symbol(L"failures");
    Symbol SMB_at_ = new_Symbol(L"at:");
    Constant SMB_failures_Const = new_Constant((Optr)SMB_failures);
    // at:. 
    Send PSend809 = new_Send((Optr)PSend808, SMB_at_, 1, (Optr)SMB_failures_Const);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend810 = new_Send((Optr)PSend809, SMB_includes_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode807 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend808, (Optr)&t_push1, (Optr)SMB_failures, (Optr)&t_send1, (Optr)PSend809, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend810, (Optr)&t_method_return);
    Method PMethod805 = new_Method_with(PArray806, empty_Array, empty_Array, PThreadedCode807, 1, PSend810);
    
    MethodClosure MC_SMB_storedMethodFailed_ = new_MethodClosure((Method)PMethod805, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_storedMethodFailed_, MC_SMB_storedMethodFailed_);
}


static void init_class_SMB_methodChanged_() {
    Symbol SMB_methodChanged_ = new_Symbol(L"methodChanged:");
    Variable VAR_anEvent_0_0 = new_Variable_named(L"anEvent", 0);
    Array PArray812 = new_Array_with(1, (Optr)VAR_anEvent_0_0);
    Variable VAR_cls_0_1 = new_Variable_named(L"cls", 0);
    Variable VAR_sel_0_2 = new_Variable_named(L"sel", 0);
    Array PArray813 = new_Array_with(2, (Optr)VAR_cls_0_1, (Optr)VAR_sel_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray816 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_item = new_Symbol(L"item");
    // item. 
    Send PSend818 = new_Send((Optr)VAR_anEvent_0_0, SMB_item, 0);
    Symbol SMB_isCompiledMethod = new_Symbol(L"isCompiledMethod");
    // isCompiledMethod. 
    Send PSend819 = new_Send((Optr)PSend818, SMB_isCompiledMethod, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend823 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode822 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend823, (Optr)&t_block_return);
    Block PBlock821 = new_Block_with(empty_Array, empty_Array, PThreadedCode822, 1, PSend823);
    // ifFalse:. 
    Send PSend820 = new_Send((Optr)PSend819, SMB_ifFalse_, 1, (Optr)PBlock821);
    // item. 
    Send PSend826 = new_Send((Optr)VAR_anEvent_0_0, SMB_item, 0);
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    // methodClass. 
    Send PSend825 = new_Send((Optr)PSend826, SMB_methodClass, 0);
    Assign PAssign824 = new_Assign((Optr)VAR_cls_0_1, (Optr)PSend825);
    Symbol SMB_inheritsFrom_ = new_Symbol(L"inheritsFrom:");
    // inheritsFrom:. 
    Send PSend827 = new_Send((Optr)VAR_cls_0_1, SMB_inheritsFrom_, 1, (Optr)TestCase_classReference);
    // escape:. 
    Send PSend831 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode830 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend831, (Optr)&t_block_return);
    Block PBlock829 = new_Block_with(empty_Array, empty_Array, PThreadedCode830, 1, PSend831);
    // ifFalse:. 
    Send PSend828 = new_Send((Optr)PSend827, SMB_ifFalse_, 1, (Optr)PBlock829);
    // item. 
    Send PSend834 = new_Send((Optr)VAR_anEvent_0_0, SMB_item, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend833 = new_Send((Optr)PSend834, SMB_selector, 0);
    Assign PAssign832 = new_Assign((Optr)VAR_sel_0_2, (Optr)PSend833);
    String string_835 = new_String(L"test");
    Symbol SMB_beginsWith_ = new_Symbol(L"beginsWith:");
    Constant string_835_Const = new_Constant((Optr)string_835);
    // beginsWith:. 
    Send PSend836 = new_Send((Optr)VAR_sel_0_2, SMB_beginsWith_, 1, (Optr)string_835_Const);
    // escape:. 
    Send PSend840 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode839 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend840, (Optr)&t_block_return);
    Block PBlock838 = new_Block_with(empty_Array, empty_Array, PThreadedCode839, 1, PSend840);
    // ifFalse:. 
    Send PSend837 = new_Send((Optr)PSend836, SMB_ifFalse_, 1, (Optr)PBlock838);
    Symbol SMB_removeFromTestHistory_in_ = new_Symbol(L"removeFromTestHistory:in:");
    // removeFromTestHistory:in:. 
    Send PSend841 = new_Send((Optr)TestResult_classReference, SMB_removeFromTestHistory_in_, 2, (Optr)VAR_sel_0_2, (Optr)VAR_cls_0_1);
    Array PThreadedCode817 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push_variable, (Optr)VAR_anEvent_0_0, (Optr)&t_send0, (Optr)PSend818, (Optr)&t_send0, (Optr)PSend819, (Optr)&t_send_ifFalse_, (Optr)PSend820, (Optr)PBlock821, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign824, (Optr)&t_push_variable, (Optr)VAR_anEvent_0_0, (Optr)&t_send0, (Optr)PSend826, (Optr)&t_send0, (Optr)PSend825, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_cls_0_1, (Optr)&t_push_class_reference, (Optr)TestCase_classReference, (Optr)&t_send1, (Optr)PSend827, (Optr)&t_send_ifFalse_, (Optr)PSend828, (Optr)PBlock829, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign832, (Optr)&t_push_variable, (Optr)VAR_anEvent_0_0, (Optr)&t_send0, (Optr)PSend834, (Optr)&t_send0, (Optr)PSend833, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_sel_0_2, (Optr)&t_push1, (Optr)string_835, (Optr)&t_send1, (Optr)PSend836, (Optr)&t_send_ifFalse_, (Optr)PSend837, (Optr)PBlock838, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)TestResult_classReference, (Optr)&t_push_variable, (Optr)VAR_sel_0_2, (Optr)&t_push_variable, (Optr)VAR_cls_0_1, (Optr)&t_send2, (Optr)PSend841, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock815 = new_Block_with(PArray816, empty_Array, PThreadedCode817, 7, PSend820, PAssign824, PSend828, PAssign832, PSend837, PSend841, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend842 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock815);
    Array PThreadedCode814 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock815, (Optr)&t_send1, (Optr)PSend842, (Optr)&t_method_return);
    Method PMethod811 = new_Method_with(PArray812, PArray813, empty_Array, PThreadedCode814, 1, PSend842);
    
    MethodClosure MC_SMB_methodChanged_ = new_MethodClosure((Method)PMethod811, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_methodChanged_, MC_SMB_methodChanged_);
}


static void init_class_SMB_buildSuiteFromSelectors() {
    Symbol SMB_buildSuiteFromSelectors = new_Symbol(L"buildSuiteFromSelectors");
    Symbol SMB_shouldInheritSelectors = new_Symbol(L"shouldInheritSelectors");
    // shouldInheritSelectors. 
    Send PSend845 = new_Send((Optr)self, SMB_shouldInheritSelectors, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_buildSuiteFromAllSelectors = new_Symbol(L"buildSuiteFromAllSelectors");
    // buildSuiteFromAllSelectors. 
    Send PSend849 = new_Send((Optr)self, SMB_buildSuiteFromAllSelectors, 0);
    Array PThreadedCode848 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend849, (Optr)&t_block_return);
    Block PBlock847 = new_Block_with(empty_Array, empty_Array, PThreadedCode848, 1, PSend849);
    Symbol SMB_buildSuiteFromLocalSelectors = new_Symbol(L"buildSuiteFromLocalSelectors");
    // buildSuiteFromLocalSelectors. 
    Send PSend852 = new_Send((Optr)self, SMB_buildSuiteFromLocalSelectors, 0);
    Array PThreadedCode851 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend852, (Optr)&t_block_return);
    Block PBlock850 = new_Block_with(empty_Array, empty_Array, PThreadedCode851, 1, PSend852);
    // ifTrue:ifFalse:. 
    Send PSend846 = new_Send((Optr)PSend845, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock847, (Optr)PBlock850);
    Array PThreadedCode844 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend845, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend846, (Optr)PBlock847, (Optr)PBlock850, (Optr)&t_method_return);
    Method PMethod843 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode844, 1, PSend846);
    
    MethodClosure MC_SMB_buildSuiteFromSelectors = new_MethodClosure((Method)PMethod843, HEADER(SUnit_Kernel_TestCase_Class));
    store_method(HEADER(SUnit_Kernel_TestCase_Class), SMB_buildSuiteFromSelectors, MC_SMB_buildSuiteFromSelectors);
}


static void init_class_SMB_methodProgressed_() {
    Symbol SMB_methodProgressed_ = new_Symbol(L"methodProgressed:");
    Variable VAR_aSelector_0_0 = new_Variable_named(L"aSelector", 0);
    Array PArray854 = new_Array_with(1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_storedMethodRaisedError_ = new_Symbol(L"storedMethodRaisedError:");
    // storedMethodRaisedError:. 
    Send PSend856 = new_Send((Optr)self, SMB_storedMethodRaisedError_, 1, (Optr)VAR_aSelector_0_0);
    Symbol SMB_storedMethodFailed_ = new_Symbol(L"storedMethodFailed:");
    // storedMethodFailed:. 
    Send PSend859 = new_Send((Optr)self, SMB_storedMethodFailed_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode858 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend859, (Optr)&t_block_return);
    Block PBlock857 = new_Block_with(empty_Array, empty_Array, PThreadedCode858, 1, PSend859);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend860 = new_Send((Optr)PSend856, SMB_or_, 1, (Optr)PBlock857);
    Symbol SMB_methodPassed_ = new_Symbol(L"methodPassed:");
    // methodPassed:. 
    Send PSend863 = new_Send((Optr)self, SMB_methodPassed_, 1, (Optr)VAR_aSelector_0_0);
    Array PThreadedCode862 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend863, (Optr)&t_block_return);
    Block PBlock861 = new_Block_with(empty_Array, empty_Array, PThreadedCode862, 1, PSend863);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend864 = new_Send((Optr)PSend860, SMB_and_, 1, (Optr)PBlock861);
    Array PThreadedCode855 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSelector_0_0, (Optr)&t_send1, (Optr)PSend856, (Optr)&t_push_closure, (Optr)PBlock857, (Optr)&t_send1, (Optr)PSend860, (Optr)&t_push_closure, (Optr)PBlock861, (Optr)&t_send1, (Optr)PSend864, (Optr)&t_method_return);
    Method PMethod853 = new_Method_with(PArray854, empty_Array, empty_Array, PThreadedCode855, 1, PSend864);
    
    MethodClosure MC_SMB_methodProgressed_ = new_MethodClosure((Method)PMethod853, HEADER(SUnit_Kernel_TestCase_Class));
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