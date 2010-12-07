#include <lib/class/Smalltalk/Parser/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParser_stream;
Optr layout_Smalltalk_Parser_SmalltalkParser;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
<<<<<<< HEAD
    Super PSuper14446 = new_Super(SMB_initializeUnaryMessageExpression, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14448 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14450 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14451 = new_Send((Optr)PSend14450, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14449 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14450, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14451, (Optr)&t_method_return);
    Block PBlock14447 = new_Block_with(PArray14448, empty_Array, PThreadedCode14449, 1, PSend14451);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14452 = new_Send((Optr)PSuper14446, SMB_semantics_, 1, (Optr)PBlock14447);
    Array PThreadedCode14445 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14446, (Optr)&t_push_closure, (Optr)PBlock14447, (Optr)&t_send1, (Optr)PSend14452, (Optr)&t_method_return);
    Method PMethod14444 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14445, 1, PSend14452);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod14444, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14412 = new_Super(SMB_initializeUnaryMessageExpression, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14414 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14416 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14417 = new_Send((Optr)PSend14416, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14415 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14416, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14417, (Optr)&t_method_return);
    Block PBlock14413 = new_Block_with(PArray14414, empty_Array, PThreadedCode14415, 1, PSend14417);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14418 = new_Send((Optr)PSuper14412, SMB_semantics_, 1, (Optr)PBlock14413);
    Array PThreadedCode14411 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14412, (Optr)&t_push_closure, (Optr)PBlock14413, (Optr)&t_send1, (Optr)PSend14418, (Optr)&t_method_return);
    Method PMethod14410 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14411, 1, PSend14418);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod14410, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
<<<<<<< HEAD
    Super PSuper14455 = new_Super(SMB_initializeUnarySelector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14457 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14458 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_method_return);
    Block PBlock14456 = new_Block_with(PArray14457, empty_Array, PThreadedCode14458, 1, VAR_selector_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14459 = new_Send((Optr)PSuper14455, SMB_semantics_, 1, (Optr)PBlock14456);
    Array PThreadedCode14454 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14455, (Optr)&t_push_closure, (Optr)PBlock14456, (Optr)&t_send1, (Optr)PSend14459, (Optr)&t_method_return);
    Method PMethod14453 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14454, 1, PSend14459);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod14453, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14421 = new_Super(SMB_initializeUnarySelector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14423 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14424 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_method_return);
    Block PBlock14422 = new_Block_with(PArray14423, empty_Array, PThreadedCode14424, 1, VAR_selector_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14425 = new_Send((Optr)PSuper14421, SMB_semantics_, 1, (Optr)PBlock14422);
    Array PThreadedCode14420 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14421, (Optr)&t_push_closure, (Optr)PBlock14422, (Optr)&t_send1, (Optr)PSend14425, (Optr)&t_method_return);
    Method PMethod14419 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14420, 1, PSend14425);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod14419, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
<<<<<<< HEAD
    Super PSuper14462 = new_Super(SMB_initializeNumber, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14464 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14467 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14469 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)VAR_result_1_0);
    String string_14470 = new_String(L"10");
    Symbol SMB_base_ = new_Symbol(L"base:");
    Constant string_14470_Const = new_Constant((Optr)string_14470);
    // base:. 
    Send PSend14471 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)string_14470_Const);
    Array PThreadedCode14468 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_14470, (Optr)&t_send1, (Optr)PSend14471, (Optr)&t_method_return);
    Block PBlock14466 = new_Block_with(PArray14467, empty_Array, PThreadedCode14468, 2, PSend14469, PSend14471);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14472 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14473 = new_Send((Optr)PBlock14466, SMB_value_, 1, (Optr)PSend14472);
    Array PThreadedCode14465 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14466, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14472, (Optr)&t_send1, (Optr)PSend14473, (Optr)&t_method_return);
    Block PBlock14463 = new_Block_with(PArray14464, empty_Array, PThreadedCode14465, 1, PSend14473);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14474 = new_Send((Optr)PSuper14462, SMB_semantics_, 1, (Optr)PBlock14463);
    Array PThreadedCode14461 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14462, (Optr)&t_push_closure, (Optr)PBlock14463, (Optr)&t_send1, (Optr)PSend14474, (Optr)&t_method_return);
    Method PMethod14460 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14461, 1, PSend14474);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod14460, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14428 = new_Super(SMB_initializeNumber, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14430 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14433 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14435 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)VAR_result_1_0);
    String string_14436 = new_String(L"10");
    Symbol SMB_base_ = new_Symbol(L"base:");
    Constant string_14436_Const = new_Constant((Optr)string_14436);
    // base:. 
    Send PSend14437 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)string_14436_Const);
    Array PThreadedCode14434 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14435, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_14436, (Optr)&t_send1, (Optr)PSend14437, (Optr)&t_method_return);
    Block PBlock14432 = new_Block_with(PArray14433, empty_Array, PThreadedCode14434, 2, PSend14435, PSend14437);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14438 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14439 = new_Send((Optr)PBlock14432, SMB_value_, 1, (Optr)PSend14438);
    Array PThreadedCode14431 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14432, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14438, (Optr)&t_send1, (Optr)PSend14439, (Optr)&t_method_return);
    Block PBlock14429 = new_Block_with(PArray14430, empty_Array, PThreadedCode14431, 1, PSend14439);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14440 = new_Send((Optr)PSuper14428, SMB_semantics_, 1, (Optr)PBlock14429);
    Array PThreadedCode14427 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14428, (Optr)&t_push_closure, (Optr)PBlock14429, (Optr)&t_send1, (Optr)PSend14440, (Optr)&t_method_return);
    Method PMethod14426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14427, 1, PSend14440);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod14426, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
<<<<<<< HEAD
    Super PSuper14477 = new_Super(SMB_initializeIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14479 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14481 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14480 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14481, (Optr)&t_method_return);
    Block PBlock14478 = new_Block_with(PArray14479, empty_Array, PThreadedCode14480, 1, PSend14481);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14482 = new_Send((Optr)PSuper14477, SMB_semantics_, 1, (Optr)PBlock14478);
    Array PThreadedCode14476 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14477, (Optr)&t_push_closure, (Optr)PBlock14478, (Optr)&t_send1, (Optr)PSend14482, (Optr)&t_method_return);
    Method PMethod14475 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14476, 1, PSend14482);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod14475, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14443 = new_Super(SMB_initializeIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14445 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14447 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14446 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14447, (Optr)&t_method_return);
    Block PBlock14444 = new_Block_with(PArray14445, empty_Array, PThreadedCode14446, 1, PSend14447);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14448 = new_Send((Optr)PSuper14443, SMB_semantics_, 1, (Optr)PBlock14444);
    Array PThreadedCode14442 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14443, (Optr)&t_push_closure, (Optr)PBlock14444, (Optr)&t_send1, (Optr)PSend14448, (Optr)&t_method_return);
    Method PMethod14441 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14442, 1, PSend14448);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod14441, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
<<<<<<< HEAD
    Super PSuper14485 = new_Super(SMB_initializeRadix, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14487 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14490 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14492 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend14493 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)PSend14492);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14494 = new_Send((Optr)VAR_result_1_0, SMB_second, 0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14495 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)PSend14494);
    Array PThreadedCode14491 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14492, (Optr)&t_send1, (Optr)PSend14493, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14494, (Optr)&t_send1, (Optr)PSend14495, (Optr)&t_method_return);
    Block PBlock14489 = new_Block_with(PArray14490, empty_Array, PThreadedCode14491, 2, PSend14493, PSend14495);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14496 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14497 = new_Send((Optr)PBlock14489, SMB_value_, 1, (Optr)PSend14496);
    Array PThreadedCode14488 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14489, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14496, (Optr)&t_send1, (Optr)PSend14497, (Optr)&t_method_return);
    Block PBlock14486 = new_Block_with(PArray14487, empty_Array, PThreadedCode14488, 1, PSend14497);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14498 = new_Send((Optr)PSuper14485, SMB_semantics_, 1, (Optr)PBlock14486);
    Array PThreadedCode14484 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14485, (Optr)&t_push_closure, (Optr)PBlock14486, (Optr)&t_send1, (Optr)PSend14498, (Optr)&t_method_return);
    Method PMethod14483 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14484, 1, PSend14498);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14483, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14451 = new_Super(SMB_initializeRadix, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14453 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14456 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14458 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend14459 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)PSend14458);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14460 = new_Send((Optr)VAR_result_1_0, SMB_second, 0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14461 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)PSend14460);
    Array PThreadedCode14457 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14458, (Optr)&t_send1, (Optr)PSend14459, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14460, (Optr)&t_send1, (Optr)PSend14461, (Optr)&t_method_return);
    Block PBlock14455 = new_Block_with(PArray14456, empty_Array, PThreadedCode14457, 2, PSend14459, PSend14461);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14462 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14463 = new_Send((Optr)PBlock14455, SMB_value_, 1, (Optr)PSend14462);
    Array PThreadedCode14454 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14455, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14462, (Optr)&t_send1, (Optr)PSend14463, (Optr)&t_method_return);
    Block PBlock14452 = new_Block_with(PArray14453, empty_Array, PThreadedCode14454, 1, PSend14463);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14464 = new_Send((Optr)PSuper14451, SMB_semantics_, 1, (Optr)PBlock14452);
    Array PThreadedCode14450 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14451, (Optr)&t_push_closure, (Optr)PBlock14452, (Optr)&t_send1, (Optr)PSend14464, (Optr)&t_method_return);
    Method PMethod14449 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14450, 1, PSend14464);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14449, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
<<<<<<< HEAD
    Super PSuper14501 = new_Super(SMB_initializeUnaryObjectDescription, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14503 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14504 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14507 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14506 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14507);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14508 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14510 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14515 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14517 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14518 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14519 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14518);
    Array PThreadedCode14516 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14517, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14518, (Optr)&t_send1, (Optr)PSend14519, (Optr)&t_method_return);
    Block PBlock14514 = new_Block_with(PArray14515, empty_Array, PThreadedCode14516, 2, PSend14517, PSend14519);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14520 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14513 = new_Send((Optr)PBlock14514, SMB_value_, 1, (Optr)PSend14520);
    Assign PAssign14512 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14513);
    Array PThreadedCode14511 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14512, (Optr)&t_push_closure, (Optr)PBlock14514, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14520, (Optr)&t_send1, (Optr)PSend14513, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14509 = new_Block_with(PArray14510, empty_Array, PThreadedCode14511, 1, PAssign14512);
=======
    Super PSuper14467 = new_Super(SMB_initializeUnaryObjectDescription, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14469 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14470 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14473 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14472 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14473);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14474 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14476 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14481 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14483 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14484 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14485 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14484);
    Array PThreadedCode14482 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14484, (Optr)&t_send1, (Optr)PSend14485, (Optr)&t_method_return);
    Block PBlock14480 = new_Block_with(PArray14481, empty_Array, PThreadedCode14482, 2, PSend14483, PSend14485);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14486 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14479 = new_Send((Optr)PBlock14480, SMB_value_, 1, (Optr)PSend14486);
    Assign PAssign14478 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14479);
    Array PThreadedCode14477 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14478, (Optr)&t_push_closure, (Optr)PBlock14480, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14486, (Optr)&t_send1, (Optr)PSend14479, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14475 = new_Block_with(PArray14476, empty_Array, PThreadedCode14477, 1, PAssign14478);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend14521 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14508, (Optr)PBlock14509);
    Array PThreadedCode14505 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14506, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14507, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14508, (Optr)&t_push_closure, (Optr)PBlock14509, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14521, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14502 = new_Block_with(PArray14503, PArray14504, PThreadedCode14505, 3, PAssign14506, PSend14521, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14522 = new_Send((Optr)PSuper14501, SMB_semantics_, 1, (Optr)PBlock14502);
    Array PThreadedCode14500 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14501, (Optr)&t_push_closure, (Optr)PBlock14502, (Optr)&t_send1, (Optr)PSend14522, (Optr)&t_method_return);
    Method PMethod14499 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14500, 1, PSend14522);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14499, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14487 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14474, (Optr)PBlock14475);
    Array PThreadedCode14471 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14472, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14473, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14474, (Optr)&t_push_closure, (Optr)PBlock14475, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14487, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14468 = new_Block_with(PArray14469, PArray14470, PThreadedCode14471, 3, PAssign14472, PSend14487, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14488 = new_Send((Optr)PSuper14467, SMB_semantics_, 1, (Optr)PBlock14468);
    Array PThreadedCode14466 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14467, (Optr)&t_push_closure, (Optr)PBlock14468, (Optr)&t_send1, (Optr)PSend14488, (Optr)&t_method_return);
    Method PMethod14465 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14466, 1, PSend14488);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14465, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
<<<<<<< HEAD
    Super PSuper14525 = new_Super(SMB_initializeVariableName, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14527 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14529 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14528 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14529, (Optr)&t_method_return);
    Block PBlock14526 = new_Block_with(PArray14527, empty_Array, PThreadedCode14528, 1, PSend14529);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14530 = new_Send((Optr)PSuper14525, SMB_semantics_, 1, (Optr)PBlock14526);
    Array PThreadedCode14524 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14525, (Optr)&t_push_closure, (Optr)PBlock14526, (Optr)&t_send1, (Optr)PSend14530, (Optr)&t_method_return);
    Method PMethod14523 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14524, 1, PSend14530);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod14523, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14491 = new_Super(SMB_initializeVariableName, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14493 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14495 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14494 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14495, (Optr)&t_method_return);
    Block PBlock14492 = new_Block_with(PArray14493, empty_Array, PThreadedCode14494, 1, PSend14495);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14496 = new_Send((Optr)PSuper14491, SMB_semantics_, 1, (Optr)PBlock14492);
    Array PThreadedCode14490 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14491, (Optr)&t_push_closure, (Optr)PBlock14492, (Optr)&t_send1, (Optr)PSend14496, (Optr)&t_method_return);
    Method PMethod14489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14490, 1, PSend14496);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod14489, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
<<<<<<< HEAD
    Super PSuper14533 = new_Super(SMB_initializeSymbolInArray, 0);
    Variable VAR_symbol_1_0 = new_Variable_named(L"symbol", 1);
    Array PArray14535 = new_Array_with(1, (Optr)VAR_symbol_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14537 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_symbol_1_0);
    Array PThreadedCode14536 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_symbol_1_0, (Optr)&t_send1, (Optr)PSend14537, (Optr)&t_method_return);
    Block PBlock14534 = new_Block_with(PArray14535, empty_Array, PThreadedCode14536, 1, PSend14537);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14538 = new_Send((Optr)PSuper14533, SMB_semantics_, 1, (Optr)PBlock14534);
    Array PThreadedCode14532 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14533, (Optr)&t_push_closure, (Optr)PBlock14534, (Optr)&t_send1, (Optr)PSend14538, (Optr)&t_method_return);
    Method PMethod14531 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14532, 1, PSend14538);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14531, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14499 = new_Super(SMB_initializeSymbolInArray, 0);
    Variable VAR_symbol_1_0 = new_Variable_named(L"symbol", 1);
    Array PArray14501 = new_Array_with(1, (Optr)VAR_symbol_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14503 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_symbol_1_0);
    Array PThreadedCode14502 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_symbol_1_0, (Optr)&t_send1, (Optr)PSend14503, (Optr)&t_method_return);
    Block PBlock14500 = new_Block_with(PArray14501, empty_Array, PThreadedCode14502, 1, PSend14503);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14504 = new_Send((Optr)PSuper14499, SMB_semantics_, 1, (Optr)PBlock14500);
    Array PThreadedCode14498 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14499, (Optr)&t_push_closure, (Optr)PBlock14500, (Optr)&t_send1, (Optr)PSend14504, (Optr)&t_method_return);
    Method PMethod14497 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14498, 1, PSend14504);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14497, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
<<<<<<< HEAD
    Super PSuper14541 = new_Super(SMB_initializeStatements, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14543 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend14545 = new_Send((Optr)VAR_result_1_0, SMB_removeLast, 0);
    Variable VAR_exp_2_0 = new_Variable_named(L"exp", 2);
    Array PArray14547 = new_Array_with(1, (Optr)VAR_exp_2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14549 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)VAR_exp_2_0);
    Array PThreadedCode14548 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_variable, (Optr)VAR_exp_2_0, (Optr)&t_send1, (Optr)PSend14549, (Optr)&t_method_return);
    Block PBlock14546 = new_Block_with(PArray14547, empty_Array, PThreadedCode14548, 1, PSend14549);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14550 = new_Send((Optr)PSend14545, SMB_ifMatched_, 1, (Optr)PBlock14546);
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend14551 = new_Send((Optr)VAR_result_1_0, SMB_asOrderedCollection, 0);
    Array PThreadedCode14544 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14545, (Optr)&t_push_closure, (Optr)PBlock14546, (Optr)&t_send1, (Optr)PSend14550, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14551, (Optr)&t_method_return);
    Block PBlock14542 = new_Block_with(PArray14543, empty_Array, PThreadedCode14544, 2, PSend14550, PSend14551);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14552 = new_Send((Optr)PSuper14541, SMB_semantics_, 1, (Optr)PBlock14542);
    Array PThreadedCode14540 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14541, (Optr)&t_push_closure, (Optr)PBlock14542, (Optr)&t_send1, (Optr)PSend14552, (Optr)&t_method_return);
    Method PMethod14539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14540, 1, PSend14552);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14539, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14507 = new_Super(SMB_initializeStatements, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14509 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend14511 = new_Send((Optr)VAR_result_1_0, SMB_removeLast, 0);
    Variable VAR_exp_2_0 = new_Variable_named(L"exp", 2);
    Array PArray14513 = new_Array_with(1, (Optr)VAR_exp_2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14515 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)VAR_exp_2_0);
    Array PThreadedCode14514 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_variable, (Optr)VAR_exp_2_0, (Optr)&t_send1, (Optr)PSend14515, (Optr)&t_method_return);
    Block PBlock14512 = new_Block_with(PArray14513, empty_Array, PThreadedCode14514, 1, PSend14515);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14516 = new_Send((Optr)PSend14511, SMB_ifMatched_, 1, (Optr)PBlock14512);
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend14517 = new_Send((Optr)VAR_result_1_0, SMB_asOrderedCollection, 0);
    Array PThreadedCode14510 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14511, (Optr)&t_push_closure, (Optr)PBlock14512, (Optr)&t_send1, (Optr)PSend14516, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14517, (Optr)&t_method_return);
    Block PBlock14508 = new_Block_with(PArray14509, empty_Array, PThreadedCode14510, 2, PSend14516, PSend14517);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14518 = new_Send((Optr)PSuper14507, SMB_semantics_, 1, (Optr)PBlock14508);
    Array PThreadedCode14506 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14507, (Optr)&t_push_closure, (Optr)PBlock14508, (Optr)&t_send1, (Optr)PSend14518, (Optr)&t_method_return);
    Method PMethod14505 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14506, 1, PSend14518);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14505, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
<<<<<<< HEAD
    Super PSuper14555 = new_Super(SMB_initializeCapitalIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14557 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14559 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14558 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14559, (Optr)&t_method_return);
    Block PBlock14556 = new_Block_with(PArray14557, empty_Array, PThreadedCode14558, 1, PSend14559);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14560 = new_Send((Optr)PSuper14555, SMB_semantics_, 1, (Optr)PBlock14556);
    Array PThreadedCode14554 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14555, (Optr)&t_push_closure, (Optr)PBlock14556, (Optr)&t_send1, (Optr)PSend14560, (Optr)&t_method_return);
    Method PMethod14553 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14554, 1, PSend14560);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod14553, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14521 = new_Super(SMB_initializeCapitalIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14523 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14525 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14524 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14525, (Optr)&t_method_return);
    Block PBlock14522 = new_Block_with(PArray14523, empty_Array, PThreadedCode14524, 1, PSend14525);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14526 = new_Send((Optr)PSuper14521, SMB_semantics_, 1, (Optr)PBlock14522);
    Array PThreadedCode14520 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14521, (Optr)&t_push_closure, (Optr)PBlock14522, (Optr)&t_send1, (Optr)PSend14526, (Optr)&t_method_return);
    Method PMethod14519 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14520, 1, PSend14526);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod14519, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
<<<<<<< HEAD
    Super PSuper14563 = new_Super(SMB_initializeSymbolConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14565 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14567 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14566 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14567, (Optr)&t_method_return);
    Block PBlock14564 = new_Block_with(PArray14565, empty_Array, PThreadedCode14566, 1, PSend14567);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14568 = new_Send((Optr)PSuper14563, SMB_semantics_, 1, (Optr)PBlock14564);
    Array PThreadedCode14562 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14563, (Optr)&t_push_closure, (Optr)PBlock14564, (Optr)&t_send1, (Optr)PSend14568, (Optr)&t_method_return);
    Method PMethod14561 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14562, 1, PSend14568);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14561, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14529 = new_Super(SMB_initializeSymbolConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14531 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14533 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14532 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14533, (Optr)&t_method_return);
    Block PBlock14530 = new_Block_with(PArray14531, empty_Array, PThreadedCode14532, 1, PSend14533);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14534 = new_Send((Optr)PSuper14529, SMB_semantics_, 1, (Optr)PBlock14530);
    Array PThreadedCode14528 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14529, (Optr)&t_push_closure, (Optr)PBlock14530, (Optr)&t_send1, (Optr)PSend14534, (Optr)&t_method_return);
    Method PMethod14527 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14528, 1, PSend14534);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14527, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
<<<<<<< HEAD
    Super PSuper14571 = new_Super(SMB_initializeArray, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14573 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14575 = new_Send((Optr)ASTArray_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14576 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    // literals:. 
    Send PSend14577 = new_Send((Optr)PSend14575, SMB_literals_, 1, (Optr)PSend14576);
    Array PThreadedCode14574 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)ASTArray_classReference, (Optr)&t_send0, (Optr)PSend14575, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14576, (Optr)&t_send1, (Optr)PSend14577, (Optr)&t_method_return);
    Block PBlock14572 = new_Block_with(PArray14573, empty_Array, PThreadedCode14574, 1, PSend14577);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14578 = new_Send((Optr)PSuper14571, SMB_semantics_, 1, (Optr)PBlock14572);
    Array PThreadedCode14570 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14571, (Optr)&t_push_closure, (Optr)PBlock14572, (Optr)&t_send1, (Optr)PSend14578, (Optr)&t_method_return);
    Method PMethod14569 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14570, 1, PSend14578);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14569, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14537 = new_Super(SMB_initializeArray, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14539 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14541 = new_Send((Optr)ASTArray_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14542 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    // literals:. 
    Send PSend14543 = new_Send((Optr)PSend14541, SMB_literals_, 1, (Optr)PSend14542);
    Array PThreadedCode14540 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)ASTArray_classReference, (Optr)&t_send0, (Optr)PSend14541, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14542, (Optr)&t_send1, (Optr)PSend14543, (Optr)&t_method_return);
    Block PBlock14538 = new_Block_with(PArray14539, empty_Array, PThreadedCode14540, 1, PSend14543);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14544 = new_Send((Optr)PSuper14537, SMB_semantics_, 1, (Optr)PBlock14538);
    Array PThreadedCode14536 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14537, (Optr)&t_push_closure, (Optr)PBlock14538, (Optr)&t_send1, (Optr)PSend14544, (Optr)&t_method_return);
    Method PMethod14535 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14536, 1, PSend14544);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14535, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
<<<<<<< HEAD
    Super PSuper14581 = new_Super(SMB_initializeBinarySelector, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14583 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14585 = new_Send((Optr)VAR_result_1_0, SMB_asSymbol, 0);
    Array PThreadedCode14584 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14585, (Optr)&t_method_return);
    Block PBlock14582 = new_Block_with(PArray14583, empty_Array, PThreadedCode14584, 1, PSend14585);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14586 = new_Send((Optr)PSuper14581, SMB_semantics_, 1, (Optr)PBlock14582);
    Array PThreadedCode14580 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14581, (Optr)&t_push_closure, (Optr)PBlock14582, (Optr)&t_send1, (Optr)PSend14586, (Optr)&t_method_return);
    Method PMethod14579 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14580, 1, PSend14586);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod14579, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14547 = new_Super(SMB_initializeBinarySelector, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14549 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14551 = new_Send((Optr)VAR_result_1_0, SMB_asSymbol, 0);
    Array PThreadedCode14550 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14551, (Optr)&t_method_return);
    Block PBlock14548 = new_Block_with(PArray14549, empty_Array, PThreadedCode14550, 1, PSend14551);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14552 = new_Send((Optr)PSuper14547, SMB_semantics_, 1, (Optr)PBlock14548);
    Array PThreadedCode14546 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14547, (Optr)&t_push_closure, (Optr)PBlock14548, (Optr)&t_send1, (Optr)PSend14552, (Optr)&t_method_return);
    Method PMethod14545 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14546, 1, PSend14552);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod14545, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_createReference_() {
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    Variable VAR_path_0_0 = new_Variable_named(L"path", 0);
<<<<<<< HEAD
    Array PArray14588 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14589 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14592 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14594 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
=======
    Array PArray14554 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14555 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14558 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14560 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
<<<<<<< HEAD
    Send PSend14595 = new_Send((Optr)PSend14594, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14600 = new_Send((Optr)VAR_path_0_0, SMB_first, 0);
    Assign PAssign14599 = new_Assign((Optr)VAR_name_0_1, (Optr)PSend14600);
    Symbol  SMB_self = new_Symbol(L"self");
    Constant SMB_self_Const = new_Constant((Optr)SMB_self);
    // =. 
    Send PSend14601 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_self_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14605 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14606 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14605);
    Array PThreadedCode14604 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend14605, (Optr)&t_send1, (Optr)PSend14606, (Optr)&t_block_return);
    Block PBlock14603 = new_Block_with(empty_Array, empty_Array, PThreadedCode14604, 1, PSend14606);
    // ifTrue:. 
    Send PSend14602 = new_Send((Optr)PSend14601, SMB_ifTrue_, 1, (Optr)PBlock14603);
    Symbol  SMB_super = new_Symbol(L"super");
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    // =. 
    Send PSend14607 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_super_Const);
    // new. 
    Send PSend14611 = new_Send((Optr)ASTSuper_classReference, SMB_new, 0);
    // escape:. 
    Send PSend14612 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14611);
    Array PThreadedCode14610 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send0, (Optr)PSend14611, (Optr)&t_send1, (Optr)PSend14612, (Optr)&t_block_return);
    Block PBlock14609 = new_Block_with(empty_Array, empty_Array, PThreadedCode14610, 1, PSend14612);
    // ifTrue:. 
    Send PSend14608 = new_Send((Optr)PSend14607, SMB_ifTrue_, 1, (Optr)PBlock14609);
    // new. 
    Send PSend14613 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14614 = new_Send((Optr)PSend14613, SMB_name_, 1, (Optr)VAR_name_0_1);
    // escape:. 
    Send PSend14615 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14614);
    Array PThreadedCode14598 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push1, (Optr)PAssign14599, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14600, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_self, (Optr)&t_send1, (Optr)PSend14601, (Optr)&t_send_ifTrue_, (Optr)PSend14602, (Optr)PBlock14603, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_send1, (Optr)PSend14607, (Optr)&t_send_ifTrue_, (Optr)PSend14608, (Optr)PBlock14609, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14613, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_send1, (Optr)PSend14614, (Optr)&t_send1, (Optr)PSend14615, (Optr)&t_block_return);
    Block PBlock14597 = new_Block_with(empty_Array, empty_Array, PThreadedCode14598, 4, PAssign14599, PSend14602, PSend14608, PSend14615);
    // ifTrue:. 
    Send PSend14596 = new_Send((Optr)PSend14595, SMB_ifTrue_, 1, (Optr)PBlock14597);
    // new. 
    Send PSend14616 = new_Send((Optr)ASTPath_classReference, SMB_new, 0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend14617 = new_Send((Optr)PSend14616, SMB_path_, 1, (Optr)VAR_path_0_0);
    Array PThreadedCode14593 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14594, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14595, (Optr)&t_send_ifTrue_, (Optr)PSend14596, (Optr)PBlock14597, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)ASTPath_classReference, (Optr)&t_send0, (Optr)PSend14616, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send1, (Optr)PSend14617, (Optr)&t_method_return);
    Block PBlock14591 = new_Block_with(PArray14592, empty_Array, PThreadedCode14593, 2, PSend14596, PSend14617);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14618 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14591);
    Array PThreadedCode14590 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14591, (Optr)&t_send1, (Optr)PSend14618, (Optr)&t_method_return);
    Method PMethod14587 = new_Method_with(PArray14588, PArray14589, empty_Array, PThreadedCode14590, 1, PSend14618);
    
    MethodClosure MC_SMB_createReference_ = new_MethodClosure((Method)PMethod14587, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14561 = new_Send((Optr)PSend14560, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14566 = new_Send((Optr)VAR_path_0_0, SMB_first, 0);
    Assign PAssign14565 = new_Assign((Optr)VAR_name_0_1, (Optr)PSend14566);
    Symbol  SMB_self = new_Symbol(L"self");
    Constant SMB_self_Const = new_Constant((Optr)SMB_self);
    // =. 
    Send PSend14567 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_self_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14571 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14572 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14571);
    Array PThreadedCode14570 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend14571, (Optr)&t_send1, (Optr)PSend14572, (Optr)&t_block_return);
    Block PBlock14569 = new_Block_with(empty_Array, empty_Array, PThreadedCode14570, 1, PSend14572);
    // ifTrue:. 
    Send PSend14568 = new_Send((Optr)PSend14567, SMB_ifTrue_, 1, (Optr)PBlock14569);
    Symbol  SMB_super = new_Symbol(L"super");
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    // =. 
    Send PSend14573 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_super_Const);
    // new. 
    Send PSend14577 = new_Send((Optr)ASTSuper_classReference, SMB_new, 0);
    // escape:. 
    Send PSend14578 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14577);
    Array PThreadedCode14576 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send0, (Optr)PSend14577, (Optr)&t_send1, (Optr)PSend14578, (Optr)&t_block_return);
    Block PBlock14575 = new_Block_with(empty_Array, empty_Array, PThreadedCode14576, 1, PSend14578);
    // ifTrue:. 
    Send PSend14574 = new_Send((Optr)PSend14573, SMB_ifTrue_, 1, (Optr)PBlock14575);
    // new. 
    Send PSend14579 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14580 = new_Send((Optr)PSend14579, SMB_name_, 1, (Optr)VAR_name_0_1);
    // escape:. 
    Send PSend14581 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14580);
    Array PThreadedCode14564 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push1, (Optr)PAssign14565, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14566, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_self, (Optr)&t_send1, (Optr)PSend14567, (Optr)&t_send_ifTrue_, (Optr)PSend14568, (Optr)PBlock14569, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_send1, (Optr)PSend14573, (Optr)&t_send_ifTrue_, (Optr)PSend14574, (Optr)PBlock14575, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14579, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_send1, (Optr)PSend14580, (Optr)&t_send1, (Optr)PSend14581, (Optr)&t_block_return);
    Block PBlock14563 = new_Block_with(empty_Array, empty_Array, PThreadedCode14564, 4, PAssign14565, PSend14568, PSend14574, PSend14581);
    // ifTrue:. 
    Send PSend14562 = new_Send((Optr)PSend14561, SMB_ifTrue_, 1, (Optr)PBlock14563);
    // new. 
    Send PSend14582 = new_Send((Optr)ASTPath_classReference, SMB_new, 0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend14583 = new_Send((Optr)PSend14582, SMB_path_, 1, (Optr)VAR_path_0_0);
    Array PThreadedCode14559 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14560, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14561, (Optr)&t_send_ifTrue_, (Optr)PSend14562, (Optr)PBlock14563, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)ASTPath_classReference, (Optr)&t_send0, (Optr)PSend14582, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send1, (Optr)PSend14583, (Optr)&t_method_return);
    Block PBlock14557 = new_Block_with(PArray14558, empty_Array, PThreadedCode14559, 2, PSend14562, PSend14583);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14584 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14557);
    Array PThreadedCode14556 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14557, (Optr)&t_send1, (Optr)PSend14584, (Optr)&t_method_return);
    Method PMethod14553 = new_Method_with(PArray14554, PArray14555, empty_Array, PThreadedCode14556, 1, PSend14584);
    
    MethodClosure MC_SMB_createReference_ = new_MethodClosure((Method)PMethod14553, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createReference_, MC_SMB_createReference_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
<<<<<<< HEAD
    Super PSuper14621 = new_Super(SMB_initialize, 0);
=======
    Super PSuper14587 = new_Super(SMB_initialize, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
<<<<<<< HEAD
    Send PSend14624 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14623 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14624);
    Assign PAssign14622 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14623);
    Array PThreadedCode14620 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14621, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14622, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14624, (Optr)&t_send1, (Optr)PSend14623, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14619 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14620, 3, PSuper14621, PAssign14622, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14619, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14590 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14589 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14590);
    Assign PAssign14588 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14589);
    Array PThreadedCode14586 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14587, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14588, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14590, (Optr)&t_send1, (Optr)PSend14589, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14585 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14586, 3, PSuper14587, PAssign14588, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14585, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
<<<<<<< HEAD
    Super PSuper14627 = new_Super(SMB_initializeStringConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14629 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14631 = new_Send((Optr)ASTString_classReference, SMB_new, 0);
    Symbol SMB_string_ = new_Symbol(L"string:");
    // string:. 
    Send PSend14632 = new_Send((Optr)PSend14631, SMB_string_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14630 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTString_classReference, (Optr)&t_send0, (Optr)PSend14631, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14632, (Optr)&t_method_return);
    Block PBlock14628 = new_Block_with(PArray14629, empty_Array, PThreadedCode14630, 1, PSend14632);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14633 = new_Send((Optr)PSuper14627, SMB_semantics_, 1, (Optr)PBlock14628);
    Array PThreadedCode14626 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14627, (Optr)&t_push_closure, (Optr)PBlock14628, (Optr)&t_send1, (Optr)PSend14633, (Optr)&t_method_return);
    Method PMethod14625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14626, 1, PSend14633);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod14625, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14593 = new_Super(SMB_initializeStringConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14595 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14597 = new_Send((Optr)ASTString_classReference, SMB_new, 0);
    Symbol SMB_string_ = new_Symbol(L"string:");
    // string:. 
    Send PSend14598 = new_Send((Optr)PSend14597, SMB_string_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14596 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTString_classReference, (Optr)&t_send0, (Optr)PSend14597, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14598, (Optr)&t_method_return);
    Block PBlock14594 = new_Block_with(PArray14595, empty_Array, PThreadedCode14596, 1, PSend14598);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14599 = new_Send((Optr)PSuper14593, SMB_semantics_, 1, (Optr)PBlock14594);
    Array PThreadedCode14592 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14593, (Optr)&t_push_closure, (Optr)PBlock14594, (Optr)&t_send1, (Optr)PSend14599, (Optr)&t_method_return);
    Method PMethod14591 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14592, 1, PSend14599);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod14591, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
<<<<<<< HEAD
    Super PSuper14636 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14638 = new_Array_with(1, (Optr)VAR_parts_1_0);
=======
    Super PSuper14602 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14604 = new_Array_with(1, (Optr)VAR_parts_1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
<<<<<<< HEAD
    Send PSend14640 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14641 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14642 = new_Send((Optr)PSend14640, SMB_receiver_, 1, (Optr)PSend14641);
    Array PThreadedCode14639 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14640, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14641, (Optr)&t_send1, (Optr)PSend14642, (Optr)&t_method_return);
    Block PBlock14637 = new_Block_with(PArray14638, empty_Array, PThreadedCode14639, 1, PSend14642);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14643 = new_Send((Optr)PSuper14636, SMB_semantics_, 1, (Optr)PBlock14637);
    Array PThreadedCode14635 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14636, (Optr)&t_push_closure, (Optr)PBlock14637, (Optr)&t_send1, (Optr)PSend14643, (Optr)&t_method_return);
    Method PMethod14634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14635, 1, PSend14643);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod14634, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14606 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14607 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14608 = new_Send((Optr)PSend14606, SMB_receiver_, 1, (Optr)PSend14607);
    Array PThreadedCode14605 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14606, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14607, (Optr)&t_send1, (Optr)PSend14608, (Optr)&t_method_return);
    Block PBlock14603 = new_Block_with(PArray14604, empty_Array, PThreadedCode14605, 1, PSend14608);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14609 = new_Send((Optr)PSuper14602, SMB_semantics_, 1, (Optr)PBlock14603);
    Array PThreadedCode14601 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14602, (Optr)&t_push_closure, (Optr)PBlock14603, (Optr)&t_send1, (Optr)PSend14609, (Optr)&t_method_return);
    Method PMethod14600 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14601, 1, PSend14609);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod14600, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    Variable VAR_optionalAssignment_0_0 = new_Variable_named(L"optionalAssignment", 0);
    Variable VAR_isAssignment_0_1 = new_Variable_named(L"isAssignment", 0);
    Variable VAR_keywords_0_2 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_3 = new_Variable_named(L"arguments", 0);
<<<<<<< HEAD
    Array PArray14645 = new_Array_with(4, (Optr)VAR_optionalAssignment_0_0, (Optr)VAR_isAssignment_0_1, (Optr)VAR_keywords_0_2, (Optr)VAR_arguments_0_3);
    Super PSuper14647 = new_Super(SMB_initializeBracketIndexExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14649 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14652 = new_Send((Optr)VAR_parts_1_0, SMB_second, 0);
    Assign PAssign14651 = new_Assign((Optr)VAR_optionalAssignment_0_0, (Optr)PSend14652);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend14655 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend14654 = new_Send((Optr)PSend14655, SMB__pequals_, 1, (Optr)PEGSucceededOptionalResult_classReference);
    Assign PAssign14653 = new_Assign((Optr)VAR_isAssignment_0_1, (Optr)PSend14654);
=======
    Array PArray14611 = new_Array_with(4, (Optr)VAR_optionalAssignment_0_0, (Optr)VAR_isAssignment_0_1, (Optr)VAR_keywords_0_2, (Optr)VAR_arguments_0_3);
    Super PSuper14613 = new_Super(SMB_initializeBracketIndexExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14615 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14618 = new_Send((Optr)VAR_parts_1_0, SMB_second, 0);
    Assign PAssign14617 = new_Assign((Optr)VAR_optionalAssignment_0_0, (Optr)PSend14618);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend14621 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend14620 = new_Send((Optr)PSend14621, SMB__pequals_, 1, (Optr)PEGSucceededOptionalResult_classReference);
    Assign PAssign14619 = new_Assign((Optr)VAR_isAssignment_0_1, (Optr)PSend14620);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol  SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_at__Const = new_Constant((Optr)SMB_at_);
    // with:. 
<<<<<<< HEAD
    Send PSend14660 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14659 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14660, (Optr)&t_block_return);
    Block PBlock14658 = new_Block_with(empty_Array, empty_Array, PThreadedCode14659, 1, PSend14660);
=======
    Send PSend14626 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14625 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14626, (Optr)&t_block_return);
    Block PBlock14624 = new_Block_with(empty_Array, empty_Array, PThreadedCode14625, 1, PSend14626);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol  SMB_put_ = new_Symbol(L"put:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_put__Const = new_Constant((Optr)SMB_put_);
    // with:with:. 
<<<<<<< HEAD
    Send PSend14663 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_at__Const, (Optr)SMB_put__Const);
    Array PThreadedCode14662 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_push1, (Optr)SMB_put_, (Optr)&t_send2, (Optr)PSend14663, (Optr)&t_block_return);
    Block PBlock14661 = new_Block_with(empty_Array, empty_Array, PThreadedCode14662, 1, PSend14663);
    // ifFalse:ifTrue:. 
    Send PSend14657 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14658, (Optr)PBlock14661);
    Assign PAssign14656 = new_Assign((Optr)VAR_keywords_0_2, (Optr)PSend14657);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14668 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    // with:. 
    Send PSend14669 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend14668);
    Array PThreadedCode14667 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14668, (Optr)&t_send1, (Optr)PSend14669, (Optr)&t_block_return);
    Block PBlock14666 = new_Block_with(empty_Array, empty_Array, PThreadedCode14667, 1, PSend14669);
    // first. 
    Send PSend14672 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_result = new_Symbol(L"result");
    // result. 
    Send PSend14673 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_result, 0);
    // with:with:. 
    Send PSend14674 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend14672, (Optr)PSend14673);
    Array PThreadedCode14671 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14672, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14673, (Optr)&t_send2, (Optr)PSend14674, (Optr)&t_block_return);
    Block PBlock14670 = new_Block_with(empty_Array, empty_Array, PThreadedCode14671, 1, PSend14674);
    // ifFalse:ifTrue:. 
    Send PSend14665 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14666, (Optr)PBlock14670);
    Assign PAssign14664 = new_Assign((Optr)VAR_arguments_0_3, (Optr)PSend14665);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14676 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14678 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_2);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14679 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_3);
    Array PThreadedCode14677 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_2, (Optr)&t_send1, (Optr)PSend14678, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_3, (Optr)&t_send1, (Optr)PSend14679, (Optr)&t_method_return);
    Block PBlock14675 = new_Block_with(PArray14676, empty_Array, PThreadedCode14677, 2, PSend14678, PSend14679);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14680 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14681 = new_Send((Optr)PBlock14675, SMB_value_, 1, (Optr)PSend14680);
    Array PThreadedCode14650 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14651, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14652, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14653, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14655, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14654, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14656, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14657, (Optr)PBlock14658, (Optr)PBlock14661, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14664, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14665, (Optr)PBlock14666, (Optr)PBlock14670, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14675, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14680, (Optr)&t_send1, (Optr)PSend14681, (Optr)&t_method_return);
    Block PBlock14648 = new_Block_with(PArray14649, empty_Array, PThreadedCode14650, 5, PAssign14651, PAssign14653, PAssign14656, PAssign14664, PSend14681);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14682 = new_Send((Optr)PSuper14647, SMB_semantics_, 1, (Optr)PBlock14648);
    Array PThreadedCode14646 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14647, (Optr)&t_push_closure, (Optr)PBlock14648, (Optr)&t_send1, (Optr)PSend14682, (Optr)&t_method_return);
    Method PMethod14644 = new_Method_with(empty_Array, PArray14645, empty_Array, PThreadedCode14646, 1, PSend14682);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod14644, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14629 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_at__Const, (Optr)SMB_put__Const);
    Array PThreadedCode14628 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_push1, (Optr)SMB_put_, (Optr)&t_send2, (Optr)PSend14629, (Optr)&t_block_return);
    Block PBlock14627 = new_Block_with(empty_Array, empty_Array, PThreadedCode14628, 1, PSend14629);
    // ifFalse:ifTrue:. 
    Send PSend14623 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14624, (Optr)PBlock14627);
    Assign PAssign14622 = new_Assign((Optr)VAR_keywords_0_2, (Optr)PSend14623);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14634 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    // with:. 
    Send PSend14635 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend14634);
    Array PThreadedCode14633 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14634, (Optr)&t_send1, (Optr)PSend14635, (Optr)&t_block_return);
    Block PBlock14632 = new_Block_with(empty_Array, empty_Array, PThreadedCode14633, 1, PSend14635);
    // first. 
    Send PSend14638 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_result = new_Symbol(L"result");
    // result. 
    Send PSend14639 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_result, 0);
    // with:with:. 
    Send PSend14640 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend14638, (Optr)PSend14639);
    Array PThreadedCode14637 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14638, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14639, (Optr)&t_send2, (Optr)PSend14640, (Optr)&t_block_return);
    Block PBlock14636 = new_Block_with(empty_Array, empty_Array, PThreadedCode14637, 1, PSend14640);
    // ifFalse:ifTrue:. 
    Send PSend14631 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14632, (Optr)PBlock14636);
    Assign PAssign14630 = new_Assign((Optr)VAR_arguments_0_3, (Optr)PSend14631);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14642 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14644 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_2);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14645 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_3);
    Array PThreadedCode14643 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_2, (Optr)&t_send1, (Optr)PSend14644, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_3, (Optr)&t_send1, (Optr)PSend14645, (Optr)&t_method_return);
    Block PBlock14641 = new_Block_with(PArray14642, empty_Array, PThreadedCode14643, 2, PSend14644, PSend14645);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14646 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14647 = new_Send((Optr)PBlock14641, SMB_value_, 1, (Optr)PSend14646);
    Array PThreadedCode14616 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14617, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14618, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14619, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14621, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14620, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14622, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14623, (Optr)PBlock14624, (Optr)PBlock14627, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14630, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14631, (Optr)PBlock14632, (Optr)PBlock14636, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14641, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14646, (Optr)&t_send1, (Optr)PSend14647, (Optr)&t_method_return);
    Block PBlock14614 = new_Block_with(PArray14615, empty_Array, PThreadedCode14616, 5, PAssign14617, PAssign14619, PAssign14622, PAssign14630, PSend14647);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14648 = new_Send((Optr)PSuper14613, SMB_semantics_, 1, (Optr)PBlock14614);
    Array PThreadedCode14612 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14613, (Optr)&t_push_closure, (Optr)PBlock14614, (Optr)&t_send1, (Optr)PSend14648, (Optr)&t_method_return);
    Method PMethod14610 = new_Method_with(empty_Array, PArray14611, empty_Array, PThreadedCode14612, 1, PSend14648);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod14610, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
<<<<<<< HEAD
    Super PSuper14685 = new_Super(SMB_initializeBinaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14687 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14688 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14691 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14690 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14691);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14692 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14694 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14699 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14701 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14702 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14703 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14702);
=======
    Super PSuper14651 = new_Super(SMB_initializeBinaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14653 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14654 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14657 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14656 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14657);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14658 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14660 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14665 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14667 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14668 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14669 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14668);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend14704 = new_Send((Optr)VAR_i_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend14705 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14704);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14706 = new_Send((Optr)VAR__receiver__3_0, SMB_argument_, 1, (Optr)PSend14705);
    Array PThreadedCode14700 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14701, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14702, (Optr)&t_send1, (Optr)PSend14703, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14704, (Optr)&t_send1, (Optr)PSend14705, (Optr)&t_send1, (Optr)PSend14706, (Optr)&t_method_return);
    Block PBlock14698 = new_Block_with(PArray14699, empty_Array, PThreadedCode14700, 3, PSend14701, PSend14703, PSend14706);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14707 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14697 = new_Send((Optr)PBlock14698, SMB_value_, 1, (Optr)PSend14707);
    Assign PAssign14696 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14697);
    Array PThreadedCode14695 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14696, (Optr)&t_push_closure, (Optr)PBlock14698, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14707, (Optr)&t_send1, (Optr)PSend14697, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14693 = new_Block_with(PArray14694, empty_Array, PThreadedCode14695, 1, PAssign14696);
=======
    Send PSend14670 = new_Send((Optr)VAR_i_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend14671 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14670);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14672 = new_Send((Optr)VAR__receiver__3_0, SMB_argument_, 1, (Optr)PSend14671);
    Array PThreadedCode14666 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14667, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14668, (Optr)&t_send1, (Optr)PSend14669, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14670, (Optr)&t_send1, (Optr)PSend14671, (Optr)&t_send1, (Optr)PSend14672, (Optr)&t_method_return);
    Block PBlock14664 = new_Block_with(PArray14665, empty_Array, PThreadedCode14666, 3, PSend14667, PSend14669, PSend14672);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14673 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14663 = new_Send((Optr)PBlock14664, SMB_value_, 1, (Optr)PSend14673);
    Assign PAssign14662 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14663);
    Array PThreadedCode14661 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14662, (Optr)&t_push_closure, (Optr)PBlock14664, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14673, (Optr)&t_send1, (Optr)PSend14663, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14659 = new_Block_with(PArray14660, empty_Array, PThreadedCode14661, 1, PAssign14662);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
<<<<<<< HEAD
    Send PSend14708 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14692, (Optr)int_2_Const, (Optr)PBlock14693);
    Array PThreadedCode14689 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14690, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14691, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14692, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14693, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14686 = new_Block_with(PArray14687, PArray14688, PThreadedCode14689, 3, PAssign14690, PSend14708, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14709 = new_Send((Optr)PSuper14685, SMB_semantics_, 1, (Optr)PBlock14686);
    Array PThreadedCode14684 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14685, (Optr)&t_push_closure, (Optr)PBlock14686, (Optr)&t_send1, (Optr)PSend14709, (Optr)&t_method_return);
    Method PMethod14683 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14684, 1, PSend14709);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14683, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14674 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14658, (Optr)int_2_Const, (Optr)PBlock14659);
    Array PThreadedCode14655 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14656, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14657, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14658, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14659, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14674, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14652 = new_Block_with(PArray14653, PArray14654, PThreadedCode14655, 3, PAssign14656, PSend14674, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14675 = new_Send((Optr)PSuper14651, SMB_semantics_, 1, (Optr)PBlock14652);
    Array PThreadedCode14650 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14651, (Optr)&t_push_closure, (Optr)PBlock14652, (Optr)&t_send1, (Optr)PSend14675, (Optr)&t_method_return);
    Method PMethod14649 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14650, 1, PSend14675);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14649, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
<<<<<<< HEAD
    Super PSuper14712 = new_Super(SMB_initializeScopedExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14714 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_scoped = new_Symbol(L"scoped");
    // scoped. 
    Send PSend14716 = new_Send((Optr)VAR_result_1_0, SMB_scoped, 0);
    Array PThreadedCode14715 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14716, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_method_return);
    Block PBlock14713 = new_Block_with(PArray14714, empty_Array, PThreadedCode14715, 2, PSend14716, VAR_result_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14717 = new_Send((Optr)PSuper14712, SMB_semantics_, 1, (Optr)PBlock14713);
    Array PThreadedCode14711 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14712, (Optr)&t_push_closure, (Optr)PBlock14713, (Optr)&t_send1, (Optr)PSend14717, (Optr)&t_method_return);
    Method PMethod14710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14711, 1, PSend14717);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod14710, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14678 = new_Super(SMB_initializeScopedExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14680 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_scoped = new_Symbol(L"scoped");
    // scoped. 
    Send PSend14682 = new_Send((Optr)VAR_result_1_0, SMB_scoped, 0);
    Array PThreadedCode14681 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14682, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_method_return);
    Block PBlock14679 = new_Block_with(PArray14680, empty_Array, PThreadedCode14681, 2, PSend14682, VAR_result_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14683 = new_Send((Optr)PSuper14678, SMB_semantics_, 1, (Optr)PBlock14679);
    Array PThreadedCode14677 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14678, (Optr)&t_push_closure, (Optr)PBlock14679, (Optr)&t_send1, (Optr)PSend14683, (Optr)&t_method_return);
    Method PMethod14676 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14677, 1, PSend14683);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod14676, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
<<<<<<< HEAD
    Super PSuper14720 = new_Super(SMB_initializeCharacterConstant, 0);
    Variable VAR_char_1_0 = new_Variable_named(L"char", 1);
    Array PArray14722 = new_Array_with(1, (Optr)VAR_char_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14724 = new_Send((Optr)ASTCharacter_classReference, SMB_new, 0);
    Symbol SMB_char_ = new_Symbol(L"char:");
    // char:. 
    Send PSend14725 = new_Send((Optr)PSend14724, SMB_char_, 1, (Optr)VAR_char_1_0);
    Array PThreadedCode14723 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTCharacter_classReference, (Optr)&t_send0, (Optr)PSend14724, (Optr)&t_push_variable, (Optr)VAR_char_1_0, (Optr)&t_send1, (Optr)PSend14725, (Optr)&t_method_return);
    Block PBlock14721 = new_Block_with(PArray14722, empty_Array, PThreadedCode14723, 1, PSend14725);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14726 = new_Send((Optr)PSuper14720, SMB_semantics_, 1, (Optr)PBlock14721);
    Array PThreadedCode14719 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14720, (Optr)&t_push_closure, (Optr)PBlock14721, (Optr)&t_send1, (Optr)PSend14726, (Optr)&t_method_return);
    Method PMethod14718 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14719, 1, PSend14726);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod14718, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14686 = new_Super(SMB_initializeCharacterConstant, 0);
    Variable VAR_char_1_0 = new_Variable_named(L"char", 1);
    Array PArray14688 = new_Array_with(1, (Optr)VAR_char_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14690 = new_Send((Optr)ASTCharacter_classReference, SMB_new, 0);
    Symbol SMB_char_ = new_Symbol(L"char:");
    // char:. 
    Send PSend14691 = new_Send((Optr)PSend14690, SMB_char_, 1, (Optr)VAR_char_1_0);
    Array PThreadedCode14689 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTCharacter_classReference, (Optr)&t_send0, (Optr)PSend14690, (Optr)&t_push_variable, (Optr)VAR_char_1_0, (Optr)&t_send1, (Optr)PSend14691, (Optr)&t_method_return);
    Block PBlock14687 = new_Block_with(PArray14688, empty_Array, PThreadedCode14689, 1, PSend14691);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14692 = new_Send((Optr)PSuper14686, SMB_semantics_, 1, (Optr)PBlock14687);
    Array PThreadedCode14685 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14686, (Optr)&t_push_closure, (Optr)PBlock14687, (Optr)&t_send1, (Optr)PSend14692, (Optr)&t_method_return);
    Method PMethod14684 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14685, 1, PSend14692);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod14684, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
<<<<<<< HEAD
    Super PSuper14729 = new_Super(SMB_initializeNumberFormat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14731 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14733 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14732 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14733, (Optr)&t_method_return);
    Block PBlock14730 = new_Block_with(PArray14731, empty_Array, PThreadedCode14732, 1, PSend14733);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14734 = new_Send((Optr)PSuper14729, SMB_semantics_, 1, (Optr)PBlock14730);
    Array PThreadedCode14728 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14729, (Optr)&t_push_closure, (Optr)PBlock14730, (Optr)&t_send1, (Optr)PSend14734, (Optr)&t_method_return);
    Method PMethod14727 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14728, 1, PSend14734);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod14727, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14695 = new_Super(SMB_initializeNumberFormat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14697 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14699 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14698 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14699, (Optr)&t_method_return);
    Block PBlock14696 = new_Block_with(PArray14697, empty_Array, PThreadedCode14698, 1, PSend14699);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14700 = new_Send((Optr)PSuper14695, SMB_semantics_, 1, (Optr)PBlock14696);
    Array PThreadedCode14694 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14695, (Optr)&t_push_closure, (Optr)PBlock14696, (Optr)&t_send1, (Optr)PSend14700, (Optr)&t_method_return);
    Method PMethod14693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14694, 1, PSend14700);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod14693, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
<<<<<<< HEAD
    Super PSuper14737 = new_Super(SMB_initializeMethod, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14739 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14742 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14744 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend14745 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)PSend14744);
=======
    Super PSuper14703 = new_Super(SMB_initializeMethod, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14705 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14708 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14710 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend14711 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)PSend14710);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
<<<<<<< HEAD
    Send PSend14746 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend14747 = new_Send((Optr)VAR__receiver__2_0, SMB_annotations_, 1, (Optr)PSend14746);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14748 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14751 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14750 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14751, (Optr)&t_block_return);
    Block PBlock14749 = new_Block_with(empty_Array, empty_Array, PThreadedCode14750, 1, PSend14751);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14752 = new_Send((Optr)PSend14748, SMB_resultIfFailed_, 1, (Optr)PBlock14749);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14753 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14752);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend14754 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14755 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14754);
    Array PThreadedCode14743 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14744, (Optr)&t_send1, (Optr)PSend14745, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14746, (Optr)&t_send1, (Optr)PSend14747, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14748, (Optr)&t_push_closure, (Optr)PBlock14749, (Optr)&t_send1, (Optr)PSend14752, (Optr)&t_send1, (Optr)PSend14753, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend14754, (Optr)&t_send1, (Optr)PSend14755, (Optr)&t_method_return);
    Block PBlock14741 = new_Block_with(PArray14742, empty_Array, PThreadedCode14743, 4, PSend14745, PSend14747, PSend14753, PSend14755);
    // new. 
    Send PSend14756 = new_Send((Optr)ASTMethod_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14757 = new_Send((Optr)PBlock14741, SMB_value_, 1, (Optr)PSend14756);
    Array PThreadedCode14740 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14741, (Optr)&t_push_class_reference, (Optr)ASTMethod_classReference, (Optr)&t_send0, (Optr)PSend14756, (Optr)&t_send1, (Optr)PSend14757, (Optr)&t_method_return);
    Block PBlock14738 = new_Block_with(PArray14739, empty_Array, PThreadedCode14740, 1, PSend14757);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14758 = new_Send((Optr)PSuper14737, SMB_semantics_, 1, (Optr)PBlock14738);
    Array PThreadedCode14736 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14737, (Optr)&t_push_closure, (Optr)PBlock14738, (Optr)&t_send1, (Optr)PSend14758, (Optr)&t_method_return);
    Method PMethod14735 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14736, 1, PSend14758);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod14735, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14712 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend14713 = new_Send((Optr)VAR__receiver__2_0, SMB_annotations_, 1, (Optr)PSend14712);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14714 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14717 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14716 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14717, (Optr)&t_block_return);
    Block PBlock14715 = new_Block_with(empty_Array, empty_Array, PThreadedCode14716, 1, PSend14717);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14718 = new_Send((Optr)PSend14714, SMB_resultIfFailed_, 1, (Optr)PBlock14715);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14719 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14718);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend14720 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14721 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14720);
    Array PThreadedCode14709 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14710, (Optr)&t_send1, (Optr)PSend14711, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14712, (Optr)&t_send1, (Optr)PSend14713, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14714, (Optr)&t_push_closure, (Optr)PBlock14715, (Optr)&t_send1, (Optr)PSend14718, (Optr)&t_send1, (Optr)PSend14719, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend14720, (Optr)&t_send1, (Optr)PSend14721, (Optr)&t_method_return);
    Block PBlock14707 = new_Block_with(PArray14708, empty_Array, PThreadedCode14709, 4, PSend14711, PSend14713, PSend14719, PSend14721);
    // new. 
    Send PSend14722 = new_Send((Optr)ASTMethod_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14723 = new_Send((Optr)PBlock14707, SMB_value_, 1, (Optr)PSend14722);
    Array PThreadedCode14706 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14707, (Optr)&t_push_class_reference, (Optr)ASTMethod_classReference, (Optr)&t_send0, (Optr)PSend14722, (Optr)&t_send1, (Optr)PSend14723, (Optr)&t_method_return);
    Block PBlock14704 = new_Block_with(PArray14705, empty_Array, PThreadedCode14706, 1, PSend14723);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14724 = new_Send((Optr)PSuper14703, SMB_semantics_, 1, (Optr)PBlock14704);
    Array PThreadedCode14702 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14703, (Optr)&t_push_closure, (Optr)PBlock14704, (Optr)&t_send1, (Optr)PSend14724, (Optr)&t_method_return);
    Method PMethod14701 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14702, 1, PSend14724);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod14701, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
<<<<<<< HEAD
    Super PSuper14761 = new_Super(SMB_initializeUnaryMessageDefinition, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14763 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14765 = new_Send((Optr)ASTUnaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14766 = new_Send((Optr)PSend14765, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14764 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14765, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14766, (Optr)&t_method_return);
    Block PBlock14762 = new_Block_with(PArray14763, empty_Array, PThreadedCode14764, 1, PSend14766);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14767 = new_Send((Optr)PSuper14761, SMB_semantics_, 1, (Optr)PBlock14762);
    Array PThreadedCode14760 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14761, (Optr)&t_push_closure, (Optr)PBlock14762, (Optr)&t_send1, (Optr)PSend14767, (Optr)&t_method_return);
    Method PMethod14759 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14760, 1, PSend14767);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod14759, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14727 = new_Super(SMB_initializeUnaryMessageDefinition, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14729 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14731 = new_Send((Optr)ASTUnaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14732 = new_Send((Optr)PSend14731, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14730 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14731, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14732, (Optr)&t_method_return);
    Block PBlock14728 = new_Block_with(PArray14729, empty_Array, PThreadedCode14730, 1, PSend14732);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14733 = new_Send((Optr)PSuper14727, SMB_semantics_, 1, (Optr)PBlock14728);
    Array PThreadedCode14726 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14727, (Optr)&t_push_closure, (Optr)PBlock14728, (Optr)&t_send1, (Optr)PSend14733, (Optr)&t_method_return);
    Method PMethod14725 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14726, 1, PSend14733);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod14725, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
<<<<<<< HEAD
    Array PArray14769 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14771 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14773 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14777 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
=======
    Array PArray14735 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14737 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14739 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14743 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
<<<<<<< HEAD
    Send PSend14776 = new_Send((Optr)PSend14777, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14775 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14776);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14779 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14778 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14779);
    // new:. 
    Send PSend14781 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14780 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14781);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14783 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14785 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
=======
    Send PSend14742 = new_Send((Optr)PSend14743, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14741 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14742);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14745 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14744 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14745);
    // new:. 
    Send PSend14747 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14746 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14747);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14749 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14751 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend14786 = new_Send((Optr)PSend14785, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14787 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14786);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14788 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14787);
    // *. 
    Send PSend14789 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14790 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14789);
    // at:put:. 
    Send PSend14791 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14790);
    Array PThreadedCode14784 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14785, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14786, (Optr)&t_send1, (Optr)PSend14787, (Optr)&t_send2, (Optr)PSend14788, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14789, (Optr)&t_send1, (Optr)PSend14790, (Optr)&t_send2, (Optr)PSend14791, (Optr)&t_method_return);
    Block PBlock14782 = new_Block_with(PArray14783, empty_Array, PThreadedCode14784, 2, PSend14788, PSend14791);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14792 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14782);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14794 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14796 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14797 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14795 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14796, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14797, (Optr)&t_method_return);
    Block PBlock14793 = new_Block_with(PArray14794, empty_Array, PThreadedCode14795, 2, PSend14796, PSend14797);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14798 = new_Send((Optr)ASTKeywordAnnotation_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14799 = new_Send((Optr)PBlock14793, SMB_value_, 1, (Optr)PSend14798);
    Array PThreadedCode14774 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14775, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14777, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14776, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14778, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14779, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14780, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14781, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14782, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14792, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14793, (Optr)&t_push_class_reference, (Optr)ASTKeywordAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14798, (Optr)&t_send1, (Optr)PSend14799, (Optr)&t_method_return);
    Block PBlock14772 = new_Block_with(PArray14773, empty_Array, PThreadedCode14774, 5, PAssign14775, PAssign14778, PAssign14780, PSend14792, PSend14799);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14800 = new_Send((Optr)PSuper14771, SMB_semantics_, 1, (Optr)PBlock14772);
    Array PThreadedCode14770 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14771, (Optr)&t_push_closure, (Optr)PBlock14772, (Optr)&t_send1, (Optr)PSend14800, (Optr)&t_method_return);
    Method PMethod14768 = new_Method_with(empty_Array, PArray14769, empty_Array, PThreadedCode14770, 1, PSend14800);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14768, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14752 = new_Send((Optr)PSend14751, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14753 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14752);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14754 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14753);
    // *. 
    Send PSend14755 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14756 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14755);
    // at:put:. 
    Send PSend14757 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14756);
    Array PThreadedCode14750 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14751, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14752, (Optr)&t_send1, (Optr)PSend14753, (Optr)&t_send2, (Optr)PSend14754, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14755, (Optr)&t_send1, (Optr)PSend14756, (Optr)&t_send2, (Optr)PSend14757, (Optr)&t_method_return);
    Block PBlock14748 = new_Block_with(PArray14749, empty_Array, PThreadedCode14750, 2, PSend14754, PSend14757);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14758 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14748);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14760 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14762 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14763 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14761 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14762, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14763, (Optr)&t_method_return);
    Block PBlock14759 = new_Block_with(PArray14760, empty_Array, PThreadedCode14761, 2, PSend14762, PSend14763);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14764 = new_Send((Optr)ASTKeywordAnnotation_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14765 = new_Send((Optr)PBlock14759, SMB_value_, 1, (Optr)PSend14764);
    Array PThreadedCode14740 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14741, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14743, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14742, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14744, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14745, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14746, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14747, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14748, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14758, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14759, (Optr)&t_push_class_reference, (Optr)ASTKeywordAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14764, (Optr)&t_send1, (Optr)PSend14765, (Optr)&t_method_return);
    Block PBlock14738 = new_Block_with(PArray14739, empty_Array, PThreadedCode14740, 5, PAssign14741, PAssign14744, PAssign14746, PSend14758, PSend14765);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14766 = new_Send((Optr)PSuper14737, SMB_semantics_, 1, (Optr)PBlock14738);
    Array PThreadedCode14736 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14737, (Optr)&t_push_closure, (Optr)PBlock14738, (Optr)&t_send1, (Optr)PSend14766, (Optr)&t_method_return);
    Method PMethod14734 = new_Method_with(empty_Array, PArray14735, empty_Array, PThreadedCode14736, 1, PSend14766);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14734, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
<<<<<<< HEAD
    Super PSuper14803 = new_Super(SMB_initializeKeyword, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14805 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14807 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14806 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14807, (Optr)&t_method_return);
    Block PBlock14804 = new_Block_with(PArray14805, empty_Array, PThreadedCode14806, 1, PSend14807);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14808 = new_Send((Optr)PSuper14803, SMB_semantics_, 1, (Optr)PBlock14804);
    Array PThreadedCode14802 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14803, (Optr)&t_push_closure, (Optr)PBlock14804, (Optr)&t_send1, (Optr)PSend14808, (Optr)&t_method_return);
    Method PMethod14801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14802, 1, PSend14808);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod14801, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14769 = new_Super(SMB_initializeKeyword, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14771 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14773 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14772 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14773, (Optr)&t_method_return);
    Block PBlock14770 = new_Block_with(PArray14771, empty_Array, PThreadedCode14772, 1, PSend14773);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14774 = new_Send((Optr)PSuper14769, SMB_semantics_, 1, (Optr)PBlock14770);
    Array PThreadedCode14768 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14769, (Optr)&t_push_closure, (Optr)PBlock14770, (Optr)&t_send1, (Optr)PSend14774, (Optr)&t_method_return);
    Method PMethod14767 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14768, 1, PSend14774);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod14767, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Variable VAR_vars_0_0 = new_Variable_named(L"vars", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
<<<<<<< HEAD
    Array PArray14810 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14812 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14814 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14817 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14816 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14817);
=======
    Array PArray14776 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14778 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14780 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14783 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14782 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14783);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
<<<<<<< HEAD
    Send PSend14819 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign14818 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14819);
    Variable VAR_variables_2_0 = new_Variable_named(L"variables", 2);
    Array PArray14821 = new_Array_with(1, (Optr)VAR_variables_2_0);
    Variable VAR_variable_3_0 = new_Variable_named(L"variable", 3);
    Array PArray14824 = new_Array_with(1, (Optr)VAR_variable_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray14829 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14831 = new_Send((Optr)VAR__receiver__4_0, SMB_expression_, 1, (Optr)VAR_expression_0_1);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend14832 = new_Send((Optr)VAR__receiver__4_0, SMB_variable_, 1, (Optr)VAR_variable_3_0);
    Array PThreadedCode14830 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend14831, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_variable_3_0, (Optr)&t_send1, (Optr)PSend14832, (Optr)&t_method_return);
    Block PBlock14828 = new_Block_with(PArray14829, empty_Array, PThreadedCode14830, 2, PSend14831, PSend14832);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14833 = new_Send((Optr)ASTAssignmentExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14827 = new_Send((Optr)PBlock14828, SMB_value_, 1, (Optr)PSend14833);
    Assign PAssign14826 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14827);
    Array PThreadedCode14825 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14826, (Optr)&t_push_closure, (Optr)PBlock14828, (Optr)&t_push_class_reference, (Optr)ASTAssignmentExpression_classReference, (Optr)&t_send0, (Optr)PSend14833, (Optr)&t_send1, (Optr)PSend14827, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14823 = new_Block_with(PArray14824, empty_Array, PThreadedCode14825, 1, PAssign14826);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend14834 = new_Send((Optr)VAR_variables_2_0, SMB_reverseDo_, 1, (Optr)PBlock14823);
    Array PThreadedCode14822 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_variables_2_0, (Optr)&t_push_closure, (Optr)PBlock14823, (Optr)&t_send1, (Optr)PSend14834, (Optr)&t_method_return);
    Block PBlock14820 = new_Block_with(PArray14821, empty_Array, PThreadedCode14822, 1, PSend14834);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14835 = new_Send((Optr)VAR_vars_0_0, SMB_ifMatched_, 1, (Optr)PBlock14820);
    Array PThreadedCode14815 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign14816, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14817, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14818, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14819, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_vars_0_0, (Optr)&t_push_closure, (Optr)PBlock14820, (Optr)&t_send1, (Optr)PSend14835, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_method_return);
    Block PBlock14813 = new_Block_with(PArray14814, empty_Array, PThreadedCode14815, 4, PAssign14816, PAssign14818, PSend14835, VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14836 = new_Send((Optr)PSuper14812, SMB_semantics_, 1, (Optr)PBlock14813);
    Array PThreadedCode14811 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14812, (Optr)&t_push_closure, (Optr)PBlock14813, (Optr)&t_send1, (Optr)PSend14836, (Optr)&t_method_return);
    Method PMethod14809 = new_Method_with(empty_Array, PArray14810, empty_Array, PThreadedCode14811, 1, PSend14836);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14809, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14785 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign14784 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14785);
    Variable VAR_variables_2_0 = new_Variable_named(L"variables", 2);
    Array PArray14787 = new_Array_with(1, (Optr)VAR_variables_2_0);
    Variable VAR_variable_3_0 = new_Variable_named(L"variable", 3);
    Array PArray14790 = new_Array_with(1, (Optr)VAR_variable_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray14795 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14797 = new_Send((Optr)VAR__receiver__4_0, SMB_expression_, 1, (Optr)VAR_expression_0_1);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend14798 = new_Send((Optr)VAR__receiver__4_0, SMB_variable_, 1, (Optr)VAR_variable_3_0);
    Array PThreadedCode14796 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend14797, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_variable_3_0, (Optr)&t_send1, (Optr)PSend14798, (Optr)&t_method_return);
    Block PBlock14794 = new_Block_with(PArray14795, empty_Array, PThreadedCode14796, 2, PSend14797, PSend14798);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14799 = new_Send((Optr)ASTAssignmentExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14793 = new_Send((Optr)PBlock14794, SMB_value_, 1, (Optr)PSend14799);
    Assign PAssign14792 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14793);
    Array PThreadedCode14791 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14792, (Optr)&t_push_closure, (Optr)PBlock14794, (Optr)&t_push_class_reference, (Optr)ASTAssignmentExpression_classReference, (Optr)&t_send0, (Optr)PSend14799, (Optr)&t_send1, (Optr)PSend14793, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14789 = new_Block_with(PArray14790, empty_Array, PThreadedCode14791, 1, PAssign14792);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend14800 = new_Send((Optr)VAR_variables_2_0, SMB_reverseDo_, 1, (Optr)PBlock14789);
    Array PThreadedCode14788 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_variables_2_0, (Optr)&t_push_closure, (Optr)PBlock14789, (Optr)&t_send1, (Optr)PSend14800, (Optr)&t_method_return);
    Block PBlock14786 = new_Block_with(PArray14787, empty_Array, PThreadedCode14788, 1, PSend14800);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14801 = new_Send((Optr)VAR_vars_0_0, SMB_ifMatched_, 1, (Optr)PBlock14786);
    Array PThreadedCode14781 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign14782, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14783, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14784, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14785, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_vars_0_0, (Optr)&t_push_closure, (Optr)PBlock14786, (Optr)&t_send1, (Optr)PSend14801, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_method_return);
    Block PBlock14779 = new_Block_with(PArray14780, empty_Array, PThreadedCode14781, 4, PAssign14782, PAssign14784, PSend14801, VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14802 = new_Send((Optr)PSuper14778, SMB_semantics_, 1, (Optr)PBlock14779);
    Array PThreadedCode14777 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14778, (Optr)&t_push_closure, (Optr)PBlock14779, (Optr)&t_send1, (Optr)PSend14802, (Optr)&t_method_return);
    Method PMethod14775 = new_Method_with(empty_Array, PArray14776, empty_Array, PThreadedCode14777, 1, PSend14802);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14775, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
<<<<<<< HEAD
    Super PSuper14839 = new_Super(SMB_initializeFloat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14841 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14844 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14846 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_high_ = new_Symbol(L"high:");
    // high:. 
    Send PSend14847 = new_Send((Optr)VAR__receiver__2_0, SMB_high_, 1, (Optr)PSend14846);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14848 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Symbol SMB_low_ = new_Symbol(L"low:");
    // low:. 
    Send PSend14849 = new_Send((Optr)VAR__receiver__2_0, SMB_low_, 1, (Optr)PSend14848);
    Array PThreadedCode14845 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14846, (Optr)&t_send1, (Optr)PSend14847, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14848, (Optr)&t_send1, (Optr)PSend14849, (Optr)&t_method_return);
    Block PBlock14843 = new_Block_with(PArray14844, empty_Array, PThreadedCode14845, 2, PSend14847, PSend14849);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14850 = new_Send((Optr)ASTFloat_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14851 = new_Send((Optr)PBlock14843, SMB_value_, 1, (Optr)PSend14850);
    Array PThreadedCode14842 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14843, (Optr)&t_push_class_reference, (Optr)ASTFloat_classReference, (Optr)&t_send0, (Optr)PSend14850, (Optr)&t_send1, (Optr)PSend14851, (Optr)&t_method_return);
    Block PBlock14840 = new_Block_with(PArray14841, empty_Array, PThreadedCode14842, 1, PSend14851);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14852 = new_Send((Optr)PSuper14839, SMB_semantics_, 1, (Optr)PBlock14840);
    Array PThreadedCode14838 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14839, (Optr)&t_push_closure, (Optr)PBlock14840, (Optr)&t_send1, (Optr)PSend14852, (Optr)&t_method_return);
    Method PMethod14837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14838, 1, PSend14852);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14837, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14805 = new_Super(SMB_initializeFloat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14807 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14810 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14812 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_high_ = new_Symbol(L"high:");
    // high:. 
    Send PSend14813 = new_Send((Optr)VAR__receiver__2_0, SMB_high_, 1, (Optr)PSend14812);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14814 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Symbol SMB_low_ = new_Symbol(L"low:");
    // low:. 
    Send PSend14815 = new_Send((Optr)VAR__receiver__2_0, SMB_low_, 1, (Optr)PSend14814);
    Array PThreadedCode14811 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14812, (Optr)&t_send1, (Optr)PSend14813, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14814, (Optr)&t_send1, (Optr)PSend14815, (Optr)&t_method_return);
    Block PBlock14809 = new_Block_with(PArray14810, empty_Array, PThreadedCode14811, 2, PSend14813, PSend14815);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14816 = new_Send((Optr)ASTFloat_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14817 = new_Send((Optr)PBlock14809, SMB_value_, 1, (Optr)PSend14816);
    Array PThreadedCode14808 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14809, (Optr)&t_push_class_reference, (Optr)ASTFloat_classReference, (Optr)&t_send0, (Optr)PSend14816, (Optr)&t_send1, (Optr)PSend14817, (Optr)&t_method_return);
    Block PBlock14806 = new_Block_with(PArray14807, empty_Array, PThreadedCode14808, 1, PSend14817);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14818 = new_Send((Optr)PSuper14805, SMB_semantics_, 1, (Optr)PBlock14806);
    Array PThreadedCode14804 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14805, (Optr)&t_push_closure, (Optr)PBlock14806, (Optr)&t_send1, (Optr)PSend14818, (Optr)&t_method_return);
    Method PMethod14803 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14804, 1, PSend14818);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14803, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
<<<<<<< HEAD
    Super PSuper14855 = new_Super(SMB_initializeBlockArguments, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14857 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR_variable_2_0 = new_Variable_named(L"variable", 2);
    Array PArray14860 = new_Array_with(1, (Optr)VAR_variable_2_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14862 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_variable_2_0);
    Array PThreadedCode14861 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_variable_2_0, (Optr)&t_send1, (Optr)PSend14862, (Optr)&t_method_return);
    Block PBlock14859 = new_Block_with(PArray14860, empty_Array, PThreadedCode14861, 1, PSend14862);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend14863 = new_Send((Optr)VAR_result_1_0, SMB_collect_, 1, (Optr)PBlock14859);
    Array PThreadedCode14858 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_closure, (Optr)PBlock14859, (Optr)&t_send1, (Optr)PSend14863, (Optr)&t_method_return);
    Block PBlock14856 = new_Block_with(PArray14857, empty_Array, PThreadedCode14858, 1, PSend14863);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14864 = new_Send((Optr)PSuper14855, SMB_semantics_, 1, (Optr)PBlock14856);
    Array PThreadedCode14854 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14855, (Optr)&t_push_closure, (Optr)PBlock14856, (Optr)&t_send1, (Optr)PSend14864, (Optr)&t_method_return);
    Method PMethod14853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14854, 1, PSend14864);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14853, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14821 = new_Super(SMB_initializeBlockArguments, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14823 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR_variable_2_0 = new_Variable_named(L"variable", 2);
    Array PArray14826 = new_Array_with(1, (Optr)VAR_variable_2_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14828 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_variable_2_0);
    Array PThreadedCode14827 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_variable_2_0, (Optr)&t_send1, (Optr)PSend14828, (Optr)&t_method_return);
    Block PBlock14825 = new_Block_with(PArray14826, empty_Array, PThreadedCode14827, 1, PSend14828);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend14829 = new_Send((Optr)VAR_result_1_0, SMB_collect_, 1, (Optr)PBlock14825);
    Array PThreadedCode14824 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_closure, (Optr)PBlock14825, (Optr)&t_send1, (Optr)PSend14829, (Optr)&t_method_return);
    Block PBlock14822 = new_Block_with(PArray14823, empty_Array, PThreadedCode14824, 1, PSend14829);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14830 = new_Send((Optr)PSuper14821, SMB_semantics_, 1, (Optr)PBlock14822);
    Array PThreadedCode14820 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14821, (Optr)&t_push_closure, (Optr)PBlock14822, (Optr)&t_send1, (Optr)PSend14830, (Optr)&t_method_return);
    Method PMethod14819 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14820, 1, PSend14830);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14819, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
<<<<<<< HEAD
    Super PSuper14867 = new_Super(SMB_initializeBraceExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14869 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14871 = new_Send((Optr)ASTBraceExpression_classReference, SMB_new, 0);
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    // expressions:. 
    Send PSend14872 = new_Send((Optr)PSend14871, SMB_expressions_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14870 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTBraceExpression_classReference, (Optr)&t_send0, (Optr)PSend14871, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14872, (Optr)&t_method_return);
    Block PBlock14868 = new_Block_with(PArray14869, empty_Array, PThreadedCode14870, 1, PSend14872);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14873 = new_Send((Optr)PSuper14867, SMB_semantics_, 1, (Optr)PBlock14868);
    Array PThreadedCode14866 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14867, (Optr)&t_push_closure, (Optr)PBlock14868, (Optr)&t_send1, (Optr)PSend14873, (Optr)&t_method_return);
    Method PMethod14865 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14866, 1, PSend14873);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14865, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14833 = new_Super(SMB_initializeBraceExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14835 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14837 = new_Send((Optr)ASTBraceExpression_classReference, SMB_new, 0);
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    // expressions:. 
    Send PSend14838 = new_Send((Optr)PSend14837, SMB_expressions_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14836 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTBraceExpression_classReference, (Optr)&t_send0, (Optr)PSend14837, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14838, (Optr)&t_method_return);
    Block PBlock14834 = new_Block_with(PArray14835, empty_Array, PThreadedCode14836, 1, PSend14838);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14839 = new_Send((Optr)PSuper14833, SMB_semantics_, 1, (Optr)PBlock14834);
    Array PThreadedCode14832 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14833, (Optr)&t_push_closure, (Optr)PBlock14834, (Optr)&t_send1, (Optr)PSend14839, (Optr)&t_method_return);
    Method PMethod14831 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14832, 1, PSend14839);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14831, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
<<<<<<< HEAD
    Super PSuper14876 = new_Super(SMB_initializeBinaryMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14878 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14881 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14883 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14884 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14883);
=======
    Super PSuper14842 = new_Super(SMB_initializeBinaryMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14844 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14847 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14849 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14850 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14849);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
<<<<<<< HEAD
    Send PSend14885 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14886 = new_Send((Optr)VAR__receiver__2_0, SMB_argument_, 1, (Optr)PSend14885);
    Array PThreadedCode14882 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14883, (Optr)&t_send1, (Optr)PSend14884, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14885, (Optr)&t_send1, (Optr)PSend14886, (Optr)&t_method_return);
    Block PBlock14880 = new_Block_with(PArray14881, empty_Array, PThreadedCode14882, 2, PSend14884, PSend14886);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14887 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14888 = new_Send((Optr)PBlock14880, SMB_value_, 1, (Optr)PSend14887);
    Array PThreadedCode14879 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14880, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14887, (Optr)&t_send1, (Optr)PSend14888, (Optr)&t_method_return);
    Block PBlock14877 = new_Block_with(PArray14878, empty_Array, PThreadedCode14879, 1, PSend14888);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14889 = new_Send((Optr)PSuper14876, SMB_semantics_, 1, (Optr)PBlock14877);
    Array PThreadedCode14875 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14876, (Optr)&t_push_closure, (Optr)PBlock14877, (Optr)&t_send1, (Optr)PSend14889, (Optr)&t_method_return);
    Method PMethod14874 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14875, 1, PSend14889);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14874, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14851 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14852 = new_Send((Optr)VAR__receiver__2_0, SMB_argument_, 1, (Optr)PSend14851);
    Array PThreadedCode14848 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14849, (Optr)&t_send1, (Optr)PSend14850, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14851, (Optr)&t_send1, (Optr)PSend14852, (Optr)&t_method_return);
    Block PBlock14846 = new_Block_with(PArray14847, empty_Array, PThreadedCode14848, 2, PSend14850, PSend14852);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14853 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14854 = new_Send((Optr)PBlock14846, SMB_value_, 1, (Optr)PSend14853);
    Array PThreadedCode14845 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14846, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14853, (Optr)&t_send1, (Optr)PSend14854, (Optr)&t_method_return);
    Block PBlock14843 = new_Block_with(PArray14844, empty_Array, PThreadedCode14845, 1, PSend14854);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14855 = new_Send((Optr)PSuper14842, SMB_semantics_, 1, (Optr)PBlock14843);
    Array PThreadedCode14841 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14842, (Optr)&t_push_closure, (Optr)PBlock14843, (Optr)&t_send1, (Optr)PSend14855, (Optr)&t_method_return);
    Method PMethod14840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14841, 1, PSend14855);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14840, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
<<<<<<< HEAD
    Super PSuper14892 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14894 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14896 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
=======
    Super PSuper14858 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14860 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14862 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
<<<<<<< HEAD
    Send PSend14897 = new_Send((Optr)PSend14896, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_14901 = new_String(L"");
    Array PThreadedCode14900 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_14901, (Optr)&t_block_return);
    Constant string_14901_Const = new_Constant((Optr)string_14901);
    Block PBlock14899 = new_Block_with(empty_Array, empty_Array, PThreadedCode14900, 1, string_14901_Const);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14904 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend14905 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_with_, 1, (Optr)PSend14904);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Variable VAR_i_2_1 = new_Variable_named(L"i", 2);
    Array PArray14907 = new_Array_with(2, (Optr)VAR_s_2_0, (Optr)VAR_i_2_1);
    String string_14909 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_14909_Const = new_Constant((Optr)string_14909);
    // <<. 
    Send PSend14910 = new_Send((Optr)VAR_s_2_0, SMB__shiftLeft_, 1, (Optr)string_14909_Const);
    // <<. 
    Send PSend14911 = new_Send((Optr)PSend14910, SMB__shiftLeft_, 1, (Optr)VAR_i_2_1);
    Array PThreadedCode14908 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)string_14909, (Optr)&t_send1, (Optr)PSend14910, (Optr)&t_push_variable, (Optr)VAR_i_2_1, (Optr)&t_send1, (Optr)PSend14911, (Optr)&t_method_return);
    Block PBlock14906 = new_Block_with(PArray14907, empty_Array, PThreadedCode14908, 1, PSend14911);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14912 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14905, (Optr)PBlock14906);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14913 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14903 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14904, (Optr)&t_send1, (Optr)PSend14905, (Optr)&t_push_closure, (Optr)PBlock14906, (Optr)&t_send2, (Optr)PSend14912, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14913, (Optr)&t_block_return);
    Block PBlock14902 = new_Block_with(empty_Array, empty_Array, PThreadedCode14903, 2, PSend14912, PSend14913);
    // ifTrue:ifFalse:. 
    Send PSend14898 = new_Send((Optr)PSend14897, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock14899, (Optr)PBlock14902);
    Array PThreadedCode14895 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14896, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend14897, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend14898, (Optr)PBlock14899, (Optr)PBlock14902, (Optr)&t_method_return);
    Block PBlock14893 = new_Block_with(PArray14894, empty_Array, PThreadedCode14895, 1, PSend14898);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14914 = new_Send((Optr)PSuper14892, SMB_semantics_, 1, (Optr)PBlock14893);
    Array PThreadedCode14891 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14892, (Optr)&t_push_closure, (Optr)PBlock14893, (Optr)&t_send1, (Optr)PSend14914, (Optr)&t_method_return);
    Method PMethod14890 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14891, 1, PSend14914);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14890, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14863 = new_Send((Optr)PSend14862, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_14867 = new_String(L"");
    Array PThreadedCode14866 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_14867, (Optr)&t_block_return);
    Constant string_14867_Const = new_Constant((Optr)string_14867);
    Block PBlock14865 = new_Block_with(empty_Array, empty_Array, PThreadedCode14866, 1, string_14867_Const);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14870 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend14871 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_with_, 1, (Optr)PSend14870);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Variable VAR_i_2_1 = new_Variable_named(L"i", 2);
    Array PArray14873 = new_Array_with(2, (Optr)VAR_s_2_0, (Optr)VAR_i_2_1);
    String string_14875 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_14875_Const = new_Constant((Optr)string_14875);
    // <<. 
    Send PSend14876 = new_Send((Optr)VAR_s_2_0, SMB__shiftLeft_, 1, (Optr)string_14875_Const);
    // <<. 
    Send PSend14877 = new_Send((Optr)PSend14876, SMB__shiftLeft_, 1, (Optr)VAR_i_2_1);
    Array PThreadedCode14874 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)string_14875, (Optr)&t_send1, (Optr)PSend14876, (Optr)&t_push_variable, (Optr)VAR_i_2_1, (Optr)&t_send1, (Optr)PSend14877, (Optr)&t_method_return);
    Block PBlock14872 = new_Block_with(PArray14873, empty_Array, PThreadedCode14874, 1, PSend14877);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14878 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14871, (Optr)PBlock14872);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14879 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14869 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14870, (Optr)&t_send1, (Optr)PSend14871, (Optr)&t_push_closure, (Optr)PBlock14872, (Optr)&t_send2, (Optr)PSend14878, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14879, (Optr)&t_block_return);
    Block PBlock14868 = new_Block_with(empty_Array, empty_Array, PThreadedCode14869, 2, PSend14878, PSend14879);
    // ifTrue:ifFalse:. 
    Send PSend14864 = new_Send((Optr)PSend14863, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock14865, (Optr)PBlock14868);
    Array PThreadedCode14861 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14862, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend14863, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend14864, (Optr)PBlock14865, (Optr)PBlock14868, (Optr)&t_method_return);
    Block PBlock14859 = new_Block_with(PArray14860, empty_Array, PThreadedCode14861, 1, PSend14864);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14880 = new_Send((Optr)PSuper14858, SMB_semantics_, 1, (Optr)PBlock14859);
    Array PThreadedCode14857 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14858, (Optr)&t_push_closure, (Optr)PBlock14859, (Optr)&t_send1, (Optr)PSend14880, (Optr)&t_method_return);
    Method PMethod14856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14857, 1, PSend14880);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14856, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_createVariable_() {
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
<<<<<<< HEAD
    Array PArray14916 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14918 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14919 = new_Send((Optr)PSend14918, SMB_name_, 1, (Optr)VAR_variable_0_0);
    Array PThreadedCode14917 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14918, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send1, (Optr)PSend14919, (Optr)&t_method_return);
    Method PMethod14915 = new_Method_with(PArray14916, empty_Array, empty_Array, PThreadedCode14917, 1, PSend14919);
    
    MethodClosure MC_SMB_createVariable_ = new_MethodClosure((Method)PMethod14915, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Array PArray14882 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14884 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14885 = new_Send((Optr)PSend14884, SMB_name_, 1, (Optr)VAR_variable_0_0);
    Array PThreadedCode14883 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14884, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send1, (Optr)PSend14885, (Optr)&t_method_return);
    Method PMethod14881 = new_Method_with(PArray14882, empty_Array, empty_Array, PThreadedCode14883, 1, PSend14885);
    
    MethodClosure MC_SMB_createVariable_ = new_MethodClosure((Method)PMethod14881, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createVariable_, MC_SMB_createVariable_);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
<<<<<<< HEAD
    Super PSuper14922 = new_Super(SMB_initializeUnaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14924 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14925 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14928 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14927 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14928);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14929 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14931 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14936 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14938 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14939 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14940 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14939);
    Array PThreadedCode14937 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14938, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14939, (Optr)&t_send1, (Optr)PSend14940, (Optr)&t_method_return);
    Block PBlock14935 = new_Block_with(PArray14936, empty_Array, PThreadedCode14937, 2, PSend14938, PSend14940);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14941 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14934 = new_Send((Optr)PBlock14935, SMB_value_, 1, (Optr)PSend14941);
    Assign PAssign14933 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14934);
    Array PThreadedCode14932 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14933, (Optr)&t_push_closure, (Optr)PBlock14935, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14941, (Optr)&t_send1, (Optr)PSend14934, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14930 = new_Block_with(PArray14931, empty_Array, PThreadedCode14932, 1, PAssign14933);
=======
    Super PSuper14888 = new_Super(SMB_initializeUnaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14890 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14891 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14894 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14893 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14894);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14895 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14897 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14902 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14904 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14905 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14906 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14905);
    Array PThreadedCode14903 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14904, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14905, (Optr)&t_send1, (Optr)PSend14906, (Optr)&t_method_return);
    Block PBlock14901 = new_Block_with(PArray14902, empty_Array, PThreadedCode14903, 2, PSend14904, PSend14906);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14907 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14900 = new_Send((Optr)PBlock14901, SMB_value_, 1, (Optr)PSend14907);
    Assign PAssign14899 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14900);
    Array PThreadedCode14898 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14899, (Optr)&t_push_closure, (Optr)PBlock14901, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14907, (Optr)&t_send1, (Optr)PSend14900, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14896 = new_Block_with(PArray14897, empty_Array, PThreadedCode14898, 1, PAssign14899);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend14942 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14929, (Optr)PBlock14930);
    Array PThreadedCode14926 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14927, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14928, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14929, (Optr)&t_push_closure, (Optr)PBlock14930, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14942, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14923 = new_Block_with(PArray14924, PArray14925, PThreadedCode14926, 3, PAssign14927, PSend14942, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14943 = new_Send((Optr)PSuper14922, SMB_semantics_, 1, (Optr)PBlock14923);
    Array PThreadedCode14921 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14922, (Optr)&t_push_closure, (Optr)PBlock14923, (Optr)&t_send1, (Optr)PSend14943, (Optr)&t_method_return);
    Method PMethod14920 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14921, 1, PSend14943);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14920, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14908 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14895, (Optr)PBlock14896);
    Array PThreadedCode14892 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14893, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14894, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14895, (Optr)&t_push_closure, (Optr)PBlock14896, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14908, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14889 = new_Block_with(PArray14890, PArray14891, PThreadedCode14892, 3, PAssign14893, PSend14908, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14909 = new_Send((Optr)PSuper14888, SMB_semantics_, 1, (Optr)PBlock14889);
    Array PThreadedCode14887 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14888, (Optr)&t_push_closure, (Optr)PBlock14889, (Optr)&t_send1, (Optr)PSend14909, (Optr)&t_method_return);
    Method PMethod14886 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14887, 1, PSend14909);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14886, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
<<<<<<< HEAD
    Super PSuper14946 = new_Super(SMB_initializeAnnotations, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14948 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14950 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14949 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14950, (Optr)&t_method_return);
    Block PBlock14947 = new_Block_with(PArray14948, empty_Array, PThreadedCode14949, 1, PSend14950);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14951 = new_Send((Optr)PSuper14946, SMB_semantics_, 1, (Optr)PBlock14947);
    Array PThreadedCode14945 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14946, (Optr)&t_push_closure, (Optr)PBlock14947, (Optr)&t_send1, (Optr)PSend14951, (Optr)&t_method_return);
    Method PMethod14944 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14945, 1, PSend14951);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14944, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14912 = new_Super(SMB_initializeAnnotations, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14914 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14916 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14915 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14916, (Optr)&t_method_return);
    Block PBlock14913 = new_Block_with(PArray14914, empty_Array, PThreadedCode14915, 1, PSend14916);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14917 = new_Send((Optr)PSuper14912, SMB_semantics_, 1, (Optr)PBlock14913);
    Array PThreadedCode14911 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14912, (Optr)&t_push_closure, (Optr)PBlock14913, (Optr)&t_send1, (Optr)PSend14917, (Optr)&t_method_return);
    Method PMethod14910 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14911, 1, PSend14917);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14910, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
<<<<<<< HEAD
    Super PSuper14954 = new_Super(SMB_initializePrimaryVariable, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14956 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14958 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    // createReference:. 
    Send PSend14959 = new_Send((Optr)self, SMB_createReference_, 1, (Optr)PSend14958);
    Array PThreadedCode14957 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14958, (Optr)&t_send1, (Optr)PSend14959, (Optr)&t_method_return);
    Block PBlock14955 = new_Block_with(PArray14956, empty_Array, PThreadedCode14957, 1, PSend14959);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14960 = new_Send((Optr)PSuper14954, SMB_semantics_, 1, (Optr)PBlock14955);
    Array PThreadedCode14953 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14954, (Optr)&t_push_closure, (Optr)PBlock14955, (Optr)&t_send1, (Optr)PSend14960, (Optr)&t_method_return);
    Method PMethod14952 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14953, 1, PSend14960);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod14952, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14920 = new_Super(SMB_initializePrimaryVariable, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14922 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14924 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    // createReference:. 
    Send PSend14925 = new_Send((Optr)self, SMB_createReference_, 1, (Optr)PSend14924);
    Array PThreadedCode14923 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14924, (Optr)&t_send1, (Optr)PSend14925, (Optr)&t_method_return);
    Block PBlock14921 = new_Block_with(PArray14922, empty_Array, PThreadedCode14923, 1, PSend14925);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14926 = new_Send((Optr)PSuper14920, SMB_semantics_, 1, (Optr)PBlock14921);
    Array PThreadedCode14919 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14920, (Optr)&t_push_closure, (Optr)PBlock14921, (Optr)&t_send1, (Optr)PSend14926, (Optr)&t_method_return);
    Method PMethod14918 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14919, 1, PSend14926);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod14918, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
<<<<<<< HEAD
    Super PSuper14963 = new_Super(SMB_initializeStringSegment, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14965 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14967 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14966 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14967, (Optr)&t_method_return);
    Block PBlock14964 = new_Block_with(PArray14965, empty_Array, PThreadedCode14966, 1, PSend14967);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14968 = new_Send((Optr)PSuper14963, SMB_semantics_, 1, (Optr)PBlock14964);
    Array PThreadedCode14962 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14963, (Optr)&t_push_closure, (Optr)PBlock14964, (Optr)&t_send1, (Optr)PSend14968, (Optr)&t_method_return);
    Method PMethod14961 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14962, 1, PSend14968);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14961, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14929 = new_Super(SMB_initializeStringSegment, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14931 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14933 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14932 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14933, (Optr)&t_method_return);
    Block PBlock14930 = new_Block_with(PArray14931, empty_Array, PThreadedCode14932, 1, PSend14933);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14934 = new_Send((Optr)PSuper14929, SMB_semantics_, 1, (Optr)PBlock14930);
    Array PThreadedCode14928 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14929, (Optr)&t_push_closure, (Optr)PBlock14930, (Optr)&t_send1, (Optr)PSend14934, (Optr)&t_method_return);
    Method PMethod14927 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14928, 1, PSend14934);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14927, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_parameters_0_2 = new_Variable_named(L"parameters", 0);
<<<<<<< HEAD
    Array PArray14970 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14972 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14974 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14978 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
=======
    Array PArray14936 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14938 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14940 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14944 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
<<<<<<< HEAD
    Send PSend14977 = new_Send((Optr)PSend14978, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14976 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14977);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14980 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14979 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14980);
    // new:. 
    Send PSend14982 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14981 = new_Assign((Optr)VAR_parameters_0_2, (Optr)PSend14982);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14984 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14986 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
=======
    Send PSend14943 = new_Send((Optr)PSend14944, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14942 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14943);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14946 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14945 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14946);
    // new:. 
    Send PSend14948 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14947 = new_Assign((Optr)VAR_parameters_0_2, (Optr)PSend14948);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14950 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14952 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend14987 = new_Send((Optr)PSend14986, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14988 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14987);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14989 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14988);
    // *. 
    Send PSend14990 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14991 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14990);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14992 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14991);
    // at:put:. 
    Send PSend14993 = new_Send((Optr)VAR_parameters_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14992);
    Array PThreadedCode14985 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14986, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14987, (Optr)&t_send1, (Optr)PSend14988, (Optr)&t_send2, (Optr)PSend14989, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14990, (Optr)&t_send1, (Optr)PSend14991, (Optr)&t_send1, (Optr)PSend14992, (Optr)&t_send2, (Optr)PSend14993, (Optr)&t_method_return);
    Block PBlock14983 = new_Block_with(PArray14984, empty_Array, PThreadedCode14985, 2, PSend14989, PSend14993);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14994 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14983);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14996 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14998 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14999 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)VAR_parameters_0_2);
    Array PThreadedCode14997 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14998, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_send1, (Optr)PSend14999, (Optr)&t_method_return);
    Block PBlock14995 = new_Block_with(PArray14996, empty_Array, PThreadedCode14997, 2, PSend14998, PSend14999);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15000 = new_Send((Optr)ASTKeywordMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15001 = new_Send((Optr)PBlock14995, SMB_value_, 1, (Optr)PSend15000);
    Array PThreadedCode14975 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14976, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14978, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14977, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14979, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14980, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14981, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14982, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14983, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14994, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14995, (Optr)&t_push_class_reference, (Optr)ASTKeywordMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend15000, (Optr)&t_send1, (Optr)PSend15001, (Optr)&t_method_return);
    Block PBlock14973 = new_Block_with(PArray14974, empty_Array, PThreadedCode14975, 5, PAssign14976, PAssign14979, PAssign14981, PSend14994, PSend15001);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15002 = new_Send((Optr)PSuper14972, SMB_semantics_, 1, (Optr)PBlock14973);
    Array PThreadedCode14971 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14972, (Optr)&t_push_closure, (Optr)PBlock14973, (Optr)&t_send1, (Optr)PSend15002, (Optr)&t_method_return);
    Method PMethod14969 = new_Method_with(empty_Array, PArray14970, empty_Array, PThreadedCode14971, 1, PSend15002);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod14969, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14953 = new_Send((Optr)PSend14952, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14954 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14953);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14955 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14954);
    // *. 
    Send PSend14956 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14957 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14956);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14958 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14957);
    // at:put:. 
    Send PSend14959 = new_Send((Optr)VAR_parameters_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14958);
    Array PThreadedCode14951 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14952, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14953, (Optr)&t_send1, (Optr)PSend14954, (Optr)&t_send2, (Optr)PSend14955, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14956, (Optr)&t_send1, (Optr)PSend14957, (Optr)&t_send1, (Optr)PSend14958, (Optr)&t_send2, (Optr)PSend14959, (Optr)&t_method_return);
    Block PBlock14949 = new_Block_with(PArray14950, empty_Array, PThreadedCode14951, 2, PSend14955, PSend14959);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14960 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14949);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14962 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14964 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14965 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)VAR_parameters_0_2);
    Array PThreadedCode14963 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14964, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_send1, (Optr)PSend14965, (Optr)&t_method_return);
    Block PBlock14961 = new_Block_with(PArray14962, empty_Array, PThreadedCode14963, 2, PSend14964, PSend14965);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14966 = new_Send((Optr)ASTKeywordMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14967 = new_Send((Optr)PBlock14961, SMB_value_, 1, (Optr)PSend14966);
    Array PThreadedCode14941 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14942, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14944, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14943, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14945, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14946, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14947, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14948, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14949, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14960, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14961, (Optr)&t_push_class_reference, (Optr)ASTKeywordMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14966, (Optr)&t_send1, (Optr)PSend14967, (Optr)&t_method_return);
    Block PBlock14939 = new_Block_with(PArray14940, empty_Array, PThreadedCode14941, 5, PAssign14942, PAssign14945, PAssign14947, PSend14960, PSend14967);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14968 = new_Send((Optr)PSuper14938, SMB_semantics_, 1, (Optr)PBlock14939);
    Array PThreadedCode14937 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14938, (Optr)&t_push_closure, (Optr)PBlock14939, (Optr)&t_send1, (Optr)PSend14968, (Optr)&t_method_return);
    Method PMethod14935 = new_Method_with(empty_Array, PArray14936, empty_Array, PThreadedCode14937, 1, PSend14968);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod14935, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
<<<<<<< HEAD
    Super PSuper15005 = new_Super(SMB_initializeBinaryMessageDefinition, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15007 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15010 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend15012 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend15013 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend15012);
=======
    Super PSuper14971 = new_Super(SMB_initializeBinaryMessageDefinition, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14973 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14976 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14978 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14979 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14978);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
<<<<<<< HEAD
    Send PSend15014 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend15015 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend15014);
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    // parameter:. 
    Send PSend15016 = new_Send((Optr)VAR__receiver__2_0, SMB_parameter_, 1, (Optr)PSend15015);
    Array PThreadedCode15011 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15012, (Optr)&t_send1, (Optr)PSend15013, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15014, (Optr)&t_send1, (Optr)PSend15015, (Optr)&t_send1, (Optr)PSend15016, (Optr)&t_method_return);
    Block PBlock15009 = new_Block_with(PArray15010, empty_Array, PThreadedCode15011, 2, PSend15013, PSend15016);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15017 = new_Send((Optr)ASTBinaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15018 = new_Send((Optr)PBlock15009, SMB_value_, 1, (Optr)PSend15017);
    Array PThreadedCode15008 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock15009, (Optr)&t_push_class_reference, (Optr)ASTBinaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend15017, (Optr)&t_send1, (Optr)PSend15018, (Optr)&t_method_return);
    Block PBlock15006 = new_Block_with(PArray15007, empty_Array, PThreadedCode15008, 1, PSend15018);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15019 = new_Send((Optr)PSuper15005, SMB_semantics_, 1, (Optr)PBlock15006);
    Array PThreadedCode15004 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15005, (Optr)&t_push_closure, (Optr)PBlock15006, (Optr)&t_send1, (Optr)PSend15019, (Optr)&t_method_return);
    Method PMethod15003 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15004, 1, PSend15019);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod15003, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend14980 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14981 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14980);
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    // parameter:. 
    Send PSend14982 = new_Send((Optr)VAR__receiver__2_0, SMB_parameter_, 1, (Optr)PSend14981);
    Array PThreadedCode14977 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14978, (Optr)&t_send1, (Optr)PSend14979, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14980, (Optr)&t_send1, (Optr)PSend14981, (Optr)&t_send1, (Optr)PSend14982, (Optr)&t_method_return);
    Block PBlock14975 = new_Block_with(PArray14976, empty_Array, PThreadedCode14977, 2, PSend14979, PSend14982);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14983 = new_Send((Optr)ASTBinaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14984 = new_Send((Optr)PBlock14975, SMB_value_, 1, (Optr)PSend14983);
    Array PThreadedCode14974 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14975, (Optr)&t_push_class_reference, (Optr)ASTBinaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14983, (Optr)&t_send1, (Optr)PSend14984, (Optr)&t_method_return);
    Block PBlock14972 = new_Block_with(PArray14973, empty_Array, PThreadedCode14974, 1, PSend14984);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14985 = new_Send((Optr)PSuper14971, SMB_semantics_, 1, (Optr)PBlock14972);
    Array PThreadedCode14970 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14971, (Optr)&t_push_closure, (Optr)PBlock14972, (Optr)&t_send1, (Optr)PSend14985, (Optr)&t_method_return);
    Method PMethod14969 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14970, 1, PSend14985);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14969, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
<<<<<<< HEAD
    Super PSuper15022 = new_Super(SMB_initializeReturn, 0);
    Variable VAR_expression_1_0 = new_Variable_named(L"expression", 1);
    Array PArray15024 = new_Array_with(1, (Optr)VAR_expression_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15026 = new_Send((Optr)ASTReturnExpression_classReference, SMB_new, 0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend15027 = new_Send((Optr)PSend15026, SMB_expression_, 1, (Optr)VAR_expression_1_0);
    Array PThreadedCode15025 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTReturnExpression_classReference, (Optr)&t_send0, (Optr)PSend15026, (Optr)&t_push_variable, (Optr)VAR_expression_1_0, (Optr)&t_send1, (Optr)PSend15027, (Optr)&t_method_return);
    Block PBlock15023 = new_Block_with(PArray15024, empty_Array, PThreadedCode15025, 1, PSend15027);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15028 = new_Send((Optr)PSuper15022, SMB_semantics_, 1, (Optr)PBlock15023);
    Array PThreadedCode15021 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15022, (Optr)&t_push_closure, (Optr)PBlock15023, (Optr)&t_send1, (Optr)PSend15028, (Optr)&t_method_return);
    Method PMethod15020 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15021, 1, PSend15028);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod15020, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14988 = new_Super(SMB_initializeReturn, 0);
    Variable VAR_expression_1_0 = new_Variable_named(L"expression", 1);
    Array PArray14990 = new_Array_with(1, (Optr)VAR_expression_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14992 = new_Send((Optr)ASTReturnExpression_classReference, SMB_new, 0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14993 = new_Send((Optr)PSend14992, SMB_expression_, 1, (Optr)VAR_expression_1_0);
    Array PThreadedCode14991 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTReturnExpression_classReference, (Optr)&t_send0, (Optr)PSend14992, (Optr)&t_push_variable, (Optr)VAR_expression_1_0, (Optr)&t_send1, (Optr)PSend14993, (Optr)&t_method_return);
    Block PBlock14989 = new_Block_with(PArray14990, empty_Array, PThreadedCode14991, 1, PSend14993);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14994 = new_Send((Optr)PSuper14988, SMB_semantics_, 1, (Optr)PBlock14989);
    Array PThreadedCode14987 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14988, (Optr)&t_push_closure, (Optr)PBlock14989, (Optr)&t_send1, (Optr)PSend14994, (Optr)&t_method_return);
    Method PMethod14986 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14987, 1, PSend14994);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14986, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
<<<<<<< HEAD
    Super PSuper15031 = new_Super(SMB_initializeTemporaries, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15033 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15035 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode15034 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15035, (Optr)&t_method_return);
    Block PBlock15032 = new_Block_with(PArray15033, empty_Array, PThreadedCode15034, 1, PSend15035);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15036 = new_Send((Optr)PSuper15031, SMB_semantics_, 1, (Optr)PBlock15032);
    Array PThreadedCode15030 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15031, (Optr)&t_push_closure, (Optr)PBlock15032, (Optr)&t_send1, (Optr)PSend15036, (Optr)&t_method_return);
    Method PMethod15029 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15030, 1, PSend15036);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod15029, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper14997 = new_Super(SMB_initializeTemporaries, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14999 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15001 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode15000 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15001, (Optr)&t_method_return);
    Block PBlock14998 = new_Block_with(PArray14999, empty_Array, PThreadedCode15000, 1, PSend15001);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15002 = new_Send((Optr)PSuper14997, SMB_semantics_, 1, (Optr)PBlock14998);
    Array PThreadedCode14996 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14997, (Optr)&t_push_closure, (Optr)PBlock14998, (Optr)&t_send1, (Optr)PSend15002, (Optr)&t_method_return);
    Method PMethod14995 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14996, 1, PSend15002);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod14995, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
<<<<<<< HEAD
    Array PArray15038 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper15040 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray15042 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15046 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
=======
    Array PArray15004 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper15006 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray15008 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15012 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
<<<<<<< HEAD
    Send PSend15045 = new_Send((Optr)PSend15046, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign15044 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend15045);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend15048 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign15047 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend15048);
    // new:. 
    Send PSend15050 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign15049 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend15050);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray15052 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend15054 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
=======
    Send PSend15011 = new_Send((Optr)PSend15012, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign15010 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend15011);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend15014 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign15013 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend15014);
    // new:. 
    Send PSend15016 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign15015 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend15016);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray15018 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend15020 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend15055 = new_Send((Optr)PSend15054, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15056 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend15055);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend15057 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend15056);
    // *. 
    Send PSend15058 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend15059 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend15058);
    // at:put:. 
    Send PSend15060 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend15059);
    Array PThreadedCode15053 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15054, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15055, (Optr)&t_send1, (Optr)PSend15056, (Optr)&t_send2, (Optr)PSend15057, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15058, (Optr)&t_send1, (Optr)PSend15059, (Optr)&t_send2, (Optr)PSend15060, (Optr)&t_method_return);
    Block PBlock15051 = new_Block_with(PArray15052, empty_Array, PThreadedCode15053, 2, PSend15057, PSend15060);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend15061 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock15051);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15063 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend15065 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend15066 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode15064 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend15065, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend15066, (Optr)&t_method_return);
    Block PBlock15062 = new_Block_with(PArray15063, empty_Array, PThreadedCode15064, 2, PSend15065, PSend15066);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15067 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15068 = new_Send((Optr)PBlock15062, SMB_value_, 1, (Optr)PSend15067);
    Array PThreadedCode15043 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign15044, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15046, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15045, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15047, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend15048, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15049, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend15050, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock15051, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend15061, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15062, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend15067, (Optr)&t_send1, (Optr)PSend15068, (Optr)&t_method_return);
    Block PBlock15041 = new_Block_with(PArray15042, empty_Array, PThreadedCode15043, 5, PAssign15044, PAssign15047, PAssign15049, PSend15061, PSend15068);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15069 = new_Send((Optr)PSuper15040, SMB_semantics_, 1, (Optr)PBlock15041);
    Array PThreadedCode15039 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15040, (Optr)&t_push_closure, (Optr)PBlock15041, (Optr)&t_send1, (Optr)PSend15069, (Optr)&t_method_return);
    Method PMethod15037 = new_Method_with(empty_Array, PArray15038, empty_Array, PThreadedCode15039, 1, PSend15069);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod15037, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend15021 = new_Send((Optr)PSend15020, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15022 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend15021);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend15023 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend15022);
    // *. 
    Send PSend15024 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend15025 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend15024);
    // at:put:. 
    Send PSend15026 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend15025);
    Array PThreadedCode15019 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15020, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15021, (Optr)&t_send1, (Optr)PSend15022, (Optr)&t_send2, (Optr)PSend15023, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15024, (Optr)&t_send1, (Optr)PSend15025, (Optr)&t_send2, (Optr)PSend15026, (Optr)&t_method_return);
    Block PBlock15017 = new_Block_with(PArray15018, empty_Array, PThreadedCode15019, 2, PSend15023, PSend15026);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend15027 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock15017);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15029 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend15031 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend15032 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode15030 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend15031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend15032, (Optr)&t_method_return);
    Block PBlock15028 = new_Block_with(PArray15029, empty_Array, PThreadedCode15030, 2, PSend15031, PSend15032);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15033 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15034 = new_Send((Optr)PBlock15028, SMB_value_, 1, (Optr)PSend15033);
    Array PThreadedCode15009 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign15010, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15012, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15011, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15013, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend15014, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15015, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend15016, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock15017, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend15027, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15028, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend15033, (Optr)&t_send1, (Optr)PSend15034, (Optr)&t_method_return);
    Block PBlock15007 = new_Block_with(PArray15008, empty_Array, PThreadedCode15009, 5, PAssign15010, PAssign15013, PAssign15015, PSend15027, PSend15034);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15035 = new_Send((Optr)PSuper15006, SMB_semantics_, 1, (Optr)PBlock15007);
    Array PThreadedCode15005 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15006, (Optr)&t_push_closure, (Optr)PBlock15007, (Optr)&t_send1, (Optr)PSend15035, (Optr)&t_method_return);
    Method PMethod15003 = new_Method_with(empty_Array, PArray15004, empty_Array, PThreadedCode15005, 1, PSend15035);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod15003, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
<<<<<<< HEAD
    Super PSuper15072 = new_Super(SMB_initializeSymbolKeywords, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15074 = new_Array_with(1, (Optr)VAR_result_1_0);
    String string_15076 = new_String(L"");
    Symbol SMB_on_ = new_Symbol(L"on:");
    Constant string_15076_Const = new_Constant((Optr)string_15076);
    // on:. 
    Send PSend15077 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_on_, 1, (Optr)string_15076_Const);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Variable VAR_e_2_1 = new_Variable_named(L"e", 2);
    Array PArray15079 = new_Array_with(2, (Optr)VAR_c_2_0, (Optr)VAR_e_2_1);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15081 = new_Send((Optr)VAR_c_2_0, SMB__shiftLeft_, 1, (Optr)VAR_e_2_1);
    Array PThreadedCode15080 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_push_variable, (Optr)VAR_e_2_1, (Optr)&t_send1, (Optr)PSend15081, (Optr)&t_method_return);
    Block PBlock15078 = new_Block_with(PArray15079, empty_Array, PThreadedCode15080, 1, PSend15081);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend15082 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend15077, (Optr)PBlock15078);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend15083 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode15075 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push1, (Optr)string_15076, (Optr)&t_send1, (Optr)PSend15077, (Optr)&t_push_closure, (Optr)PBlock15078, (Optr)&t_send2, (Optr)PSend15082, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend15083, (Optr)&t_method_return);
    Block PBlock15073 = new_Block_with(PArray15074, empty_Array, PThreadedCode15075, 2, PSend15082, PSend15083);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15084 = new_Send((Optr)PSuper15072, SMB_semantics_, 1, (Optr)PBlock15073);
    Array PThreadedCode15071 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15072, (Optr)&t_push_closure, (Optr)PBlock15073, (Optr)&t_send1, (Optr)PSend15084, (Optr)&t_method_return);
    Method PMethod15070 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15071, 1, PSend15084);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod15070, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper15038 = new_Super(SMB_initializeSymbolKeywords, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15040 = new_Array_with(1, (Optr)VAR_result_1_0);
    String string_15042 = new_String(L"");
    Symbol SMB_on_ = new_Symbol(L"on:");
    Constant string_15042_Const = new_Constant((Optr)string_15042);
    // on:. 
    Send PSend15043 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_on_, 1, (Optr)string_15042_Const);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Variable VAR_e_2_1 = new_Variable_named(L"e", 2);
    Array PArray15045 = new_Array_with(2, (Optr)VAR_c_2_0, (Optr)VAR_e_2_1);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15047 = new_Send((Optr)VAR_c_2_0, SMB__shiftLeft_, 1, (Optr)VAR_e_2_1);
    Array PThreadedCode15046 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_push_variable, (Optr)VAR_e_2_1, (Optr)&t_send1, (Optr)PSend15047, (Optr)&t_method_return);
    Block PBlock15044 = new_Block_with(PArray15045, empty_Array, PThreadedCode15046, 1, PSend15047);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend15048 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend15043, (Optr)PBlock15044);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend15049 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode15041 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push1, (Optr)string_15042, (Optr)&t_send1, (Optr)PSend15043, (Optr)&t_push_closure, (Optr)PBlock15044, (Optr)&t_send2, (Optr)PSend15048, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend15049, (Optr)&t_method_return);
    Block PBlock15039 = new_Block_with(PArray15040, empty_Array, PThreadedCode15041, 2, PSend15048, PSend15049);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15050 = new_Send((Optr)PSuper15038, SMB_semantics_, 1, (Optr)PBlock15039);
    Array PThreadedCode15037 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15038, (Optr)&t_push_closure, (Optr)PBlock15039, (Optr)&t_send1, (Optr)PSend15050, (Optr)&t_method_return);
    Method PMethod15036 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15037, 1, PSend15050);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod15036, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
<<<<<<< HEAD
    Super PSuper15087 = new_Super(SMB_initializeAssignmentExpressions, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15089 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15091 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode15090 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15091, (Optr)&t_method_return);
    Block PBlock15088 = new_Block_with(PArray15089, empty_Array, PThreadedCode15090, 1, PSend15091);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15092 = new_Send((Optr)PSuper15087, SMB_semantics_, 1, (Optr)PBlock15088);
    Array PThreadedCode15086 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15087, (Optr)&t_push_closure, (Optr)PBlock15088, (Optr)&t_send1, (Optr)PSend15092, (Optr)&t_method_return);
    Method PMethod15085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15086, 1, PSend15092);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod15085, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper15053 = new_Super(SMB_initializeAssignmentExpressions, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15055 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15057 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode15056 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15057, (Optr)&t_method_return);
    Block PBlock15054 = new_Block_with(PArray15055, empty_Array, PThreadedCode15056, 1, PSend15057);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15058 = new_Send((Optr)PSuper15053, SMB_semantics_, 1, (Optr)PBlock15054);
    Array PThreadedCode15052 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15053, (Optr)&t_push_closure, (Optr)PBlock15054, (Optr)&t_send1, (Optr)PSend15058, (Optr)&t_method_return);
    Method PMethod15051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15052, 1, PSend15058);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod15051, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
<<<<<<< HEAD
    Super PSuper15095 = new_Super(SMB_preStoreCascadedMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray15097 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15100 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend15102 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15103 = new_Send((Optr)PSend15102, SMB_receiver, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend15104 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend15103);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15105 = new_Send((Optr)VAR_parts_1_0, SMB_asArray, 0);
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    // cascades:. 
    Send PSend15106 = new_Send((Optr)VAR__receiver__2_0, SMB_cascades_, 1, (Optr)PSend15105);
    Array PThreadedCode15101 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15102, (Optr)&t_send0, (Optr)PSend15103, (Optr)&t_send1, (Optr)PSend15104, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15105, (Optr)&t_send1, (Optr)PSend15106, (Optr)&t_method_return);
    Block PBlock15099 = new_Block_with(PArray15100, empty_Array, PThreadedCode15101, 2, PSend15104, PSend15106);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15107 = new_Send((Optr)ASTMessageCascadeExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15108 = new_Send((Optr)PBlock15099, SMB_value_, 1, (Optr)PSend15107);
    Array PThreadedCode15098 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock15099, (Optr)&t_push_class_reference, (Optr)ASTMessageCascadeExpression_classReference, (Optr)&t_send0, (Optr)PSend15107, (Optr)&t_send1, (Optr)PSend15108, (Optr)&t_method_return);
    Block PBlock15096 = new_Block_with(PArray15097, empty_Array, PThreadedCode15098, 1, PSend15108);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15109 = new_Send((Optr)PSuper15095, SMB_semantics_, 1, (Optr)PBlock15096);
    Array PThreadedCode15094 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15095, (Optr)&t_push_closure, (Optr)PBlock15096, (Optr)&t_send1, (Optr)PSend15109, (Optr)&t_method_return);
    Method PMethod15093 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15094, 1, PSend15109);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod15093, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper15061 = new_Super(SMB_preStoreCascadedMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray15063 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15066 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend15068 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15069 = new_Send((Optr)PSend15068, SMB_receiver, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend15070 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend15069);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15071 = new_Send((Optr)VAR_parts_1_0, SMB_asArray, 0);
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    // cascades:. 
    Send PSend15072 = new_Send((Optr)VAR__receiver__2_0, SMB_cascades_, 1, (Optr)PSend15071);
    Array PThreadedCode15067 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15068, (Optr)&t_send0, (Optr)PSend15069, (Optr)&t_send1, (Optr)PSend15070, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15071, (Optr)&t_send1, (Optr)PSend15072, (Optr)&t_method_return);
    Block PBlock15065 = new_Block_with(PArray15066, empty_Array, PThreadedCode15067, 2, PSend15070, PSend15072);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15073 = new_Send((Optr)ASTMessageCascadeExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15074 = new_Send((Optr)PBlock15065, SMB_value_, 1, (Optr)PSend15073);
    Array PThreadedCode15064 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock15065, (Optr)&t_push_class_reference, (Optr)ASTMessageCascadeExpression_classReference, (Optr)&t_send0, (Optr)PSend15073, (Optr)&t_send1, (Optr)PSend15074, (Optr)&t_method_return);
    Block PBlock15062 = new_Block_with(PArray15063, empty_Array, PThreadedCode15064, 1, PSend15074);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15075 = new_Send((Optr)PSuper15061, SMB_semantics_, 1, (Optr)PBlock15062);
    Array PThreadedCode15060 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15061, (Optr)&t_push_closure, (Optr)PBlock15062, (Optr)&t_send1, (Optr)PSend15075, (Optr)&t_method_return);
    Method PMethod15059 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15060, 1, PSend15075);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod15059, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
<<<<<<< HEAD
    Super PSuper15112 = new_Super(SMB_initializeUnaryAnnotation, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray15114 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15116 = new_Send((Optr)ASTUnaryAnnotation_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend15117 = new_Send((Optr)PSend15116, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode15115 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryAnnotation_classReference, (Optr)&t_send0, (Optr)PSend15116, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend15117, (Optr)&t_method_return);
    Block PBlock15113 = new_Block_with(PArray15114, empty_Array, PThreadedCode15115, 1, PSend15117);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15118 = new_Send((Optr)PSuper15112, SMB_semantics_, 1, (Optr)PBlock15113);
    Array PThreadedCode15111 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15112, (Optr)&t_push_closure, (Optr)PBlock15113, (Optr)&t_send1, (Optr)PSend15118, (Optr)&t_method_return);
    Method PMethod15110 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15111, 1, PSend15118);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod15110, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Super PSuper15078 = new_Super(SMB_initializeUnaryAnnotation, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray15080 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15082 = new_Send((Optr)ASTUnaryAnnotation_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend15083 = new_Send((Optr)PSend15082, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode15081 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryAnnotation_classReference, (Optr)&t_send0, (Optr)PSend15082, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend15083, (Optr)&t_method_return);
    Block PBlock15079 = new_Block_with(PArray15080, empty_Array, PThreadedCode15081, 1, PSend15083);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15084 = new_Send((Optr)PSuper15078, SMB_semantics_, 1, (Optr)PBlock15079);
    Array PThreadedCode15077 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15078, (Optr)&t_push_closure, (Optr)PBlock15079, (Optr)&t_send1, (Optr)PSend15084, (Optr)&t_method_return);
    Method PMethod15076 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15077, 1, PSend15084);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod15076, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
<<<<<<< HEAD
    Super PSuper15121 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15123 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15125 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
=======
    Super PSuper15087 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15089 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15091 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
<<<<<<< HEAD
    Send PSend15126 = new_Send((Optr)PSend15125, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend15130 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15131 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // add:. 
    Send PSend15132 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PSend15131);
    Array PThreadedCode15129 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend15130, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15131, (Optr)&t_send1, (Optr)PSend15132, (Optr)&t_block_return);
    Block PBlock15128 = new_Block_with(empty_Array, empty_Array, PThreadedCode15129, 2, PSend15130, PSend15132);
    // ifTrue:. 
    Send PSend15127 = new_Send((Optr)PSend15126, SMB_ifTrue_, 1, (Optr)PBlock15128);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15134 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend15136 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    // new. 
    Send PSend15139 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode15138 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend15139, (Optr)&t_block_return);
    Block PBlock15137 = new_Block_with(empty_Array, empty_Array, PThreadedCode15138, 1, PSend15139);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend15140 = new_Send((Optr)PSend15136, SMB_resultIfFailed_, 1, (Optr)PBlock15137);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend15141 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)PSend15140);
=======
    Send PSend15092 = new_Send((Optr)PSend15091, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend15096 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15097 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // add:. 
    Send PSend15098 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PSend15097);
    Array PThreadedCode15095 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend15096, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15097, (Optr)&t_send1, (Optr)PSend15098, (Optr)&t_block_return);
    Block PBlock15094 = new_Block_with(empty_Array, empty_Array, PThreadedCode15095, 2, PSend15096, PSend15098);
    // ifTrue:. 
    Send PSend15093 = new_Send((Optr)PSend15092, SMB_ifTrue_, 1, (Optr)PBlock15094);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15100 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend15102 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    // new. 
    Send PSend15105 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode15104 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend15105, (Optr)&t_block_return);
    Block PBlock15103 = new_Block_with(empty_Array, empty_Array, PThreadedCode15104, 1, PSend15105);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend15106 = new_Send((Optr)PSend15102, SMB_resultIfFailed_, 1, (Optr)PBlock15103);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend15107 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)PSend15106);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
<<<<<<< HEAD
    Send PSend15142 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    // new. 
    Send PSend15145 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode15144 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend15145, (Optr)&t_block_return);
    Block PBlock15143 = new_Block_with(empty_Array, empty_Array, PThreadedCode15144, 1, PSend15145);
    // resultIfFailed:. 
    Send PSend15146 = new_Send((Optr)PSend15142, SMB_resultIfFailed_, 1, (Optr)PBlock15143);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend15147 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend15146);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend15148 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend15149 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend15148);
    Array PThreadedCode15135 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15136, (Optr)&t_push_closure, (Optr)PBlock15137, (Optr)&t_send1, (Optr)PSend15140, (Optr)&t_send1, (Optr)PSend15141, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15142, (Optr)&t_push_closure, (Optr)PBlock15143, (Optr)&t_send1, (Optr)PSend15146, (Optr)&t_send1, (Optr)PSend15147, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend15148, (Optr)&t_send1, (Optr)PSend15149, (Optr)&t_method_return);
    Block PBlock15133 = new_Block_with(PArray15134, empty_Array, PThreadedCode15135, 3, PSend15141, PSend15147, PSend15149);
    // new. 
    Send PSend15150 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15151 = new_Send((Optr)PBlock15133, SMB_value_, 1, (Optr)PSend15150);
    Array PThreadedCode15124 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15125, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15126, (Optr)&t_send_ifTrue_, (Optr)PSend15127, (Optr)PBlock15128, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15133, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend15150, (Optr)&t_send1, (Optr)PSend15151, (Optr)&t_method_return);
    Block PBlock15122 = new_Block_with(PArray15123, empty_Array, PThreadedCode15124, 2, PSend15127, PSend15151);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15152 = new_Send((Optr)PSuper15121, SMB_semantics_, 1, (Optr)PBlock15122);
    Array PThreadedCode15120 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15121, (Optr)&t_push_closure, (Optr)PBlock15122, (Optr)&t_send1, (Optr)PSend15152, (Optr)&t_method_return);
    Method PMethod15119 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15120, 1, PSend15152);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod15119, Smalltalk_Parser_SmalltalkParser_Class);
=======
    Send PSend15108 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    // new. 
    Send PSend15111 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode15110 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend15111, (Optr)&t_block_return);
    Block PBlock15109 = new_Block_with(empty_Array, empty_Array, PThreadedCode15110, 1, PSend15111);
    // resultIfFailed:. 
    Send PSend15112 = new_Send((Optr)PSend15108, SMB_resultIfFailed_, 1, (Optr)PBlock15109);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend15113 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend15112);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend15114 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend15115 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend15114);
    Array PThreadedCode15101 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15102, (Optr)&t_push_closure, (Optr)PBlock15103, (Optr)&t_send1, (Optr)PSend15106, (Optr)&t_send1, (Optr)PSend15107, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15108, (Optr)&t_push_closure, (Optr)PBlock15109, (Optr)&t_send1, (Optr)PSend15112, (Optr)&t_send1, (Optr)PSend15113, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend15114, (Optr)&t_send1, (Optr)PSend15115, (Optr)&t_method_return);
    Block PBlock15099 = new_Block_with(PArray15100, empty_Array, PThreadedCode15101, 3, PSend15107, PSend15113, PSend15115);
    // new. 
    Send PSend15116 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15117 = new_Send((Optr)PBlock15099, SMB_value_, 1, (Optr)PSend15116);
    Array PThreadedCode15090 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15091, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15092, (Optr)&t_send_ifTrue_, (Optr)PSend15093, (Optr)PBlock15094, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15099, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend15116, (Optr)&t_send1, (Optr)PSend15117, (Optr)&t_method_return);
    Block PBlock15088 = new_Block_with(PArray15089, empty_Array, PThreadedCode15090, 2, PSend15093, PSend15117);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15118 = new_Send((Optr)PSuper15087, SMB_semantics_, 1, (Optr)PBlock15088);
    Array PThreadedCode15086 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15087, (Optr)&t_push_closure, (Optr)PBlock15088, (Optr)&t_send1, (Optr)PSend15118, (Optr)&t_method_return);
    Method PMethod15085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15086, 1, PSend15118);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod15085, Smalltalk_Parser_SmalltalkParser_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_class_SMB_match_in_() {
    Symbol SMB_match_in_ = new_Symbol(L"match:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
<<<<<<< HEAD
    Array PArray15154 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend15156 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend15157 = new_Send((Optr)PSend15156, SMB_method, 0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend15158 = new_Send((Optr)VAR_class_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15159 = new_Send((Optr)PSend15158, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend15160 = new_Send((Optr)PSend15159, SMB_asString, 0);
    // asString. 
    Send PSend15161 = new_Send((Optr)PSend15160, SMB_asString, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend15162 = new_Send((Optr)PSend15157, SMB_parse_, 1, (Optr)PSend15161);
    Array PThreadedCode15155 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15156, (Optr)&t_send0, (Optr)PSend15157, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send0, (Optr)PSend15158, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15159, (Optr)&t_send0, (Optr)PSend15160, (Optr)&t_send0, (Optr)PSend15161, (Optr)&t_send1, (Optr)PSend15162, (Optr)&t_method_return);
    Method PMethod15153 = new_Method_with(PArray15154, empty_Array, empty_Array, PThreadedCode15155, 1, PSend15162);
    
    MethodClosure MC_SMB_match_in_ = new_MethodClosure((Method)PMethod15153, HEADER(Smalltalk_Parser_SmalltalkParser_Class));
=======
    Array PArray15120 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend15122 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend15123 = new_Send((Optr)PSend15122, SMB_method, 0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend15124 = new_Send((Optr)VAR_class_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15125 = new_Send((Optr)PSend15124, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend15126 = new_Send((Optr)PSend15125, SMB_asString, 0);
    // asString. 
    Send PSend15127 = new_Send((Optr)PSend15126, SMB_asString, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend15128 = new_Send((Optr)PSend15123, SMB_parse_, 1, (Optr)PSend15127);
    Array PThreadedCode15121 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15122, (Optr)&t_send0, (Optr)PSend15123, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send0, (Optr)PSend15124, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15125, (Optr)&t_send0, (Optr)PSend15126, (Optr)&t_send0, (Optr)PSend15127, (Optr)&t_send1, (Optr)PSend15128, (Optr)&t_method_return);
    Method PMethod15119 = new_Method_with(PArray15120, empty_Array, empty_Array, PThreadedCode15121, 1, PSend15128);
    
    MethodClosure MC_SMB_match_in_ = new_MethodClosure((Method)PMethod15119, HEADER(Smalltalk_Parser_SmalltalkParser_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Smalltalk_Parser_SmalltalkParser_Class), SMB_match_in_, MC_SMB_match_in_);
}

void init_Smalltalk_Parser_PSmalltalkParser_layout() {
    layout_Smalltalk_Parser_SmalltalkParser_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[5] = slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance; // instance 
    
    Symbol  SMB_SmalltalkParser = new_Symbol(L"SmalltalkParser");
    slot_Smalltalk_Parser_SmalltalkParser_stream = (Optr)new_Slot(1, L"stream");
    layout_Smalltalk_Parser_SmalltalkParser = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_Parser_SmalltalkParser)->values[0] = slot_Smalltalk_Parser_AbstractGrammar_parsers; // parsers 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser)->values[1] = slot_Smalltalk_Parser_SmalltalkParser_stream; // stream 
    Smalltalk_Parser_SmalltalkParser_Class = (Class)new_Class(Smalltalk_Parser_SmalltalkGrammar_Class, layout_Smalltalk_Parser_SmalltalkParser_Class_class);
    Smalltalk_Parser_SmalltalkParser_Class->layout = layout_Smalltalk_Parser_SmalltalkParser;
    Smalltalk_Parser_SmalltalkParser_Class->name = SMB_SmalltalkParser;
    
}

void init_Smalltalk_Parser_PSmalltalkParser_methods() {
    init_SMB_initializeUnaryMessageExpression();
    init_SMB_initializeUnarySelector();
    init_SMB_initializeNumber();
    init_SMB_initializeIdentifier();
    init_SMB_initializeRadix();
    init_SMB_initializeUnaryObjectDescription();
    init_SMB_initializeVariableName();
    init_SMB_initializeSymbolInArray();
    init_SMB_initializeStatements();
    init_SMB_initializeCapitalIdentifier();
    init_SMB_initializeSymbolConstant();
    init_SMB_initializeArray();
    init_SMB_initializeBinarySelector();
    init_SMB_createReference_();
    init_SMB_initialize();
    init_SMB_initializeStringConstant();
    init_SMB_initializeKeywordExpression();
    init_SMB_initializeBracketIndexExpression();
    init_SMB_initializeBinaryExpression();
    init_SMB_initializeScopedExpression();
    init_SMB_initializeCharacterConstant();
    init_SMB_initializeNumberFormat();
    init_SMB_initializeMethod();
    init_SMB_initializeUnaryMessageDefinition();
    init_SMB_initializeKeywordAnnotation();
    init_SMB_initializeKeyword();
    init_SMB_initializeExpression();
    init_SMB_initializeFloat();
    init_SMB_initializeBlockArguments();
    init_SMB_initializeBraceExpression();
    init_SMB_initializeBinaryMessageExpression();
    init_SMB_initializeString();
    init_SMB_createVariable_();
    init_SMB_initializeUnaryExpression();
    init_SMB_initializeAnnotations();
    init_SMB_initializePrimaryVariable();
    init_SMB_initializeStringSegment();
    init_SMB_initializeKeywordsArguments();
    init_SMB_initializeBinaryMessageDefinition();
    init_SMB_initializeReturn();
    init_SMB_initializeTemporaries();
    init_SMB_initializeKeywordMessageExpression();
    init_SMB_initializeSymbolKeywords();
    init_SMB_initializeAssignmentExpressions();
    init_SMB_preStoreCascadedMessageExpression();
    init_SMB_initializeUnaryAnnotation();
    init_SMB_initializeBlock();
    init_class_SMB_match_in_();
    
}