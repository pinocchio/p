#include <lib/class/Smalltalk/Parser/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParser_stream;
Optr layout_Smalltalk_Parser_SmalltalkParser;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    Super PSuper14414 = new_Super(SMB_initializeUnaryMessageExpression, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14416 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14418 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14419 = new_Send((Optr)PSend14418, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14417 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14418, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14419, (Optr)&t_method_return);
    Block PBlock14415 = new_Block_with(PArray14416, empty_Array, PThreadedCode14417, 1, PSend14419);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14420 = new_Send((Optr)PSuper14414, SMB_semantics_, 1, (Optr)PBlock14415);
    Array PThreadedCode14413 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14414, (Optr)&t_push_closure, (Optr)PBlock14415, (Optr)&t_send1, (Optr)PSend14420, (Optr)&t_method_return);
    Method PMethod14412 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14413, 1, PSend14420);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod14412, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    Super PSuper14423 = new_Super(SMB_initializeUnarySelector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14425 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14426 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_method_return);
    Block PBlock14424 = new_Block_with(PArray14425, empty_Array, PThreadedCode14426, 1, VAR_selector_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14427 = new_Send((Optr)PSuper14423, SMB_semantics_, 1, (Optr)PBlock14424);
    Array PThreadedCode14422 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14423, (Optr)&t_push_closure, (Optr)PBlock14424, (Optr)&t_send1, (Optr)PSend14427, (Optr)&t_method_return);
    Method PMethod14421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14422, 1, PSend14427);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod14421, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    Super PSuper14430 = new_Super(SMB_initializeNumber, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14432 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14435 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14437 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)VAR_result_1_0);
    String string_14438 = new_String(L"10");
    Symbol SMB_base_ = new_Symbol(L"base:");
    Constant string_14438_Const = new_Constant((Optr)string_14438);
    // base:. 
    Send PSend14439 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)string_14438_Const);
    Array PThreadedCode14436 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14437, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_14438, (Optr)&t_send1, (Optr)PSend14439, (Optr)&t_method_return);
    Block PBlock14434 = new_Block_with(PArray14435, empty_Array, PThreadedCode14436, 2, PSend14437, PSend14439);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14440 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14441 = new_Send((Optr)PBlock14434, SMB_value_, 1, (Optr)PSend14440);
    Array PThreadedCode14433 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14434, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14440, (Optr)&t_send1, (Optr)PSend14441, (Optr)&t_method_return);
    Block PBlock14431 = new_Block_with(PArray14432, empty_Array, PThreadedCode14433, 1, PSend14441);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14442 = new_Send((Optr)PSuper14430, SMB_semantics_, 1, (Optr)PBlock14431);
    Array PThreadedCode14429 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14430, (Optr)&t_push_closure, (Optr)PBlock14431, (Optr)&t_send1, (Optr)PSend14442, (Optr)&t_method_return);
    Method PMethod14428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14429, 1, PSend14442);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod14428, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    Super PSuper14445 = new_Super(SMB_initializeIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14447 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14449 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14448 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14449, (Optr)&t_method_return);
    Block PBlock14446 = new_Block_with(PArray14447, empty_Array, PThreadedCode14448, 1, PSend14449);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14450 = new_Send((Optr)PSuper14445, SMB_semantics_, 1, (Optr)PBlock14446);
    Array PThreadedCode14444 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14445, (Optr)&t_push_closure, (Optr)PBlock14446, (Optr)&t_send1, (Optr)PSend14450, (Optr)&t_method_return);
    Method PMethod14443 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14444, 1, PSend14450);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod14443, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    Super PSuper14453 = new_Super(SMB_initializeRadix, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14455 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14458 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14460 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend14461 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)PSend14460);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14462 = new_Send((Optr)VAR_result_1_0, SMB_second, 0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14463 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)PSend14462);
    Array PThreadedCode14459 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14460, (Optr)&t_send1, (Optr)PSend14461, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14462, (Optr)&t_send1, (Optr)PSend14463, (Optr)&t_method_return);
    Block PBlock14457 = new_Block_with(PArray14458, empty_Array, PThreadedCode14459, 2, PSend14461, PSend14463);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14464 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14465 = new_Send((Optr)PBlock14457, SMB_value_, 1, (Optr)PSend14464);
    Array PThreadedCode14456 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14457, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14464, (Optr)&t_send1, (Optr)PSend14465, (Optr)&t_method_return);
    Block PBlock14454 = new_Block_with(PArray14455, empty_Array, PThreadedCode14456, 1, PSend14465);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14466 = new_Send((Optr)PSuper14453, SMB_semantics_, 1, (Optr)PBlock14454);
    Array PThreadedCode14452 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14453, (Optr)&t_push_closure, (Optr)PBlock14454, (Optr)&t_send1, (Optr)PSend14466, (Optr)&t_method_return);
    Method PMethod14451 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14452, 1, PSend14466);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14451, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    Super PSuper14469 = new_Super(SMB_initializeUnaryObjectDescription, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14471 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14472 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14475 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14474 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14475);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14476 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14478 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14483 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14485 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14486 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14487 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14486);
    Array PThreadedCode14484 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14485, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14486, (Optr)&t_send1, (Optr)PSend14487, (Optr)&t_method_return);
    Block PBlock14482 = new_Block_with(PArray14483, empty_Array, PThreadedCode14484, 2, PSend14485, PSend14487);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14488 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14481 = new_Send((Optr)PBlock14482, SMB_value_, 1, (Optr)PSend14488);
    Assign PAssign14480 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14481);
    Array PThreadedCode14479 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14480, (Optr)&t_push_closure, (Optr)PBlock14482, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14488, (Optr)&t_send1, (Optr)PSend14481, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14477 = new_Block_with(PArray14478, empty_Array, PThreadedCode14479, 1, PAssign14480);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14489 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14476, (Optr)PBlock14477);
    Array PThreadedCode14473 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14474, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14475, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14476, (Optr)&t_push_closure, (Optr)PBlock14477, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14489, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14470 = new_Block_with(PArray14471, PArray14472, PThreadedCode14473, 3, PAssign14474, PSend14489, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14490 = new_Send((Optr)PSuper14469, SMB_semantics_, 1, (Optr)PBlock14470);
    Array PThreadedCode14468 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14469, (Optr)&t_push_closure, (Optr)PBlock14470, (Optr)&t_send1, (Optr)PSend14490, (Optr)&t_method_return);
    Method PMethod14467 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14468, 1, PSend14490);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14467, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    Super PSuper14493 = new_Super(SMB_initializeVariableName, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14495 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14497 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14496 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14497, (Optr)&t_method_return);
    Block PBlock14494 = new_Block_with(PArray14495, empty_Array, PThreadedCode14496, 1, PSend14497);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14498 = new_Send((Optr)PSuper14493, SMB_semantics_, 1, (Optr)PBlock14494);
    Array PThreadedCode14492 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14493, (Optr)&t_push_closure, (Optr)PBlock14494, (Optr)&t_send1, (Optr)PSend14498, (Optr)&t_method_return);
    Method PMethod14491 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14492, 1, PSend14498);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod14491, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    Super PSuper14501 = new_Super(SMB_initializeSymbolInArray, 0);
    Variable VAR_symbol_1_0 = new_Variable_named(L"symbol", 1);
    Array PArray14503 = new_Array_with(1, (Optr)VAR_symbol_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14505 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_symbol_1_0);
    Array PThreadedCode14504 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_symbol_1_0, (Optr)&t_send1, (Optr)PSend14505, (Optr)&t_method_return);
    Block PBlock14502 = new_Block_with(PArray14503, empty_Array, PThreadedCode14504, 1, PSend14505);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14506 = new_Send((Optr)PSuper14501, SMB_semantics_, 1, (Optr)PBlock14502);
    Array PThreadedCode14500 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14501, (Optr)&t_push_closure, (Optr)PBlock14502, (Optr)&t_send1, (Optr)PSend14506, (Optr)&t_method_return);
    Method PMethod14499 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14500, 1, PSend14506);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14499, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    Super PSuper14509 = new_Super(SMB_initializeStatements, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14511 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend14513 = new_Send((Optr)VAR_result_1_0, SMB_removeLast, 0);
    Variable VAR_exp_2_0 = new_Variable_named(L"exp", 2);
    Array PArray14515 = new_Array_with(1, (Optr)VAR_exp_2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14517 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)VAR_exp_2_0);
    Array PThreadedCode14516 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_variable, (Optr)VAR_exp_2_0, (Optr)&t_send1, (Optr)PSend14517, (Optr)&t_method_return);
    Block PBlock14514 = new_Block_with(PArray14515, empty_Array, PThreadedCode14516, 1, PSend14517);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14518 = new_Send((Optr)PSend14513, SMB_ifMatched_, 1, (Optr)PBlock14514);
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend14519 = new_Send((Optr)VAR_result_1_0, SMB_asOrderedCollection, 0);
    Array PThreadedCode14512 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14513, (Optr)&t_push_closure, (Optr)PBlock14514, (Optr)&t_send1, (Optr)PSend14518, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14519, (Optr)&t_method_return);
    Block PBlock14510 = new_Block_with(PArray14511, empty_Array, PThreadedCode14512, 2, PSend14518, PSend14519);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14520 = new_Send((Optr)PSuper14509, SMB_semantics_, 1, (Optr)PBlock14510);
    Array PThreadedCode14508 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14509, (Optr)&t_push_closure, (Optr)PBlock14510, (Optr)&t_send1, (Optr)PSend14520, (Optr)&t_method_return);
    Method PMethod14507 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14508, 1, PSend14520);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14507, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    Super PSuper14523 = new_Super(SMB_initializeCapitalIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14525 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14527 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14526 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14527, (Optr)&t_method_return);
    Block PBlock14524 = new_Block_with(PArray14525, empty_Array, PThreadedCode14526, 1, PSend14527);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14528 = new_Send((Optr)PSuper14523, SMB_semantics_, 1, (Optr)PBlock14524);
    Array PThreadedCode14522 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14523, (Optr)&t_push_closure, (Optr)PBlock14524, (Optr)&t_send1, (Optr)PSend14528, (Optr)&t_method_return);
    Method PMethod14521 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14522, 1, PSend14528);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod14521, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    Super PSuper14531 = new_Super(SMB_initializeSymbolConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14533 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14535 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14534 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14535, (Optr)&t_method_return);
    Block PBlock14532 = new_Block_with(PArray14533, empty_Array, PThreadedCode14534, 1, PSend14535);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14536 = new_Send((Optr)PSuper14531, SMB_semantics_, 1, (Optr)PBlock14532);
    Array PThreadedCode14530 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14531, (Optr)&t_push_closure, (Optr)PBlock14532, (Optr)&t_send1, (Optr)PSend14536, (Optr)&t_method_return);
    Method PMethod14529 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14530, 1, PSend14536);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14529, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Super PSuper14539 = new_Super(SMB_initializeArray, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14541 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14543 = new_Send((Optr)ASTArray_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14544 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    // literals:. 
    Send PSend14545 = new_Send((Optr)PSend14543, SMB_literals_, 1, (Optr)PSend14544);
    Array PThreadedCode14542 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)ASTArray_classReference, (Optr)&t_send0, (Optr)PSend14543, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14544, (Optr)&t_send1, (Optr)PSend14545, (Optr)&t_method_return);
    Block PBlock14540 = new_Block_with(PArray14541, empty_Array, PThreadedCode14542, 1, PSend14545);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14546 = new_Send((Optr)PSuper14539, SMB_semantics_, 1, (Optr)PBlock14540);
    Array PThreadedCode14538 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14539, (Optr)&t_push_closure, (Optr)PBlock14540, (Optr)&t_send1, (Optr)PSend14546, (Optr)&t_method_return);
    Method PMethod14537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14538, 1, PSend14546);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14537, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    Super PSuper14549 = new_Super(SMB_initializeBinarySelector, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14551 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14553 = new_Send((Optr)VAR_result_1_0, SMB_asSymbol, 0);
    Array PThreadedCode14552 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14553, (Optr)&t_method_return);
    Block PBlock14550 = new_Block_with(PArray14551, empty_Array, PThreadedCode14552, 1, PSend14553);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14554 = new_Send((Optr)PSuper14549, SMB_semantics_, 1, (Optr)PBlock14550);
    Array PThreadedCode14548 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14549, (Optr)&t_push_closure, (Optr)PBlock14550, (Optr)&t_send1, (Optr)PSend14554, (Optr)&t_method_return);
    Method PMethod14547 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14548, 1, PSend14554);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod14547, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_createReference_() {
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    Variable VAR_path_0_0 = new_Variable_named(L"path", 0);
    Array PArray14556 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14557 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14560 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14562 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14563 = new_Send((Optr)PSend14562, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14568 = new_Send((Optr)VAR_path_0_0, SMB_first, 0);
    Assign PAssign14567 = new_Assign((Optr)VAR_name_0_1, (Optr)PSend14568);
    Symbol  SMB_self = new_Symbol(L"self");
    Constant SMB_self_Const = new_Constant((Optr)SMB_self);
    // =. 
    Send PSend14569 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_self_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14573 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14574 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14573);
    Array PThreadedCode14572 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend14573, (Optr)&t_send1, (Optr)PSend14574, (Optr)&t_block_return);
    Block PBlock14571 = new_Block_with(empty_Array, empty_Array, PThreadedCode14572, 1, PSend14574);
    // ifTrue:. 
    Send PSend14570 = new_Send((Optr)PSend14569, SMB_ifTrue_, 1, (Optr)PBlock14571);
    Symbol  SMB_super = new_Symbol(L"super");
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    // =. 
    Send PSend14575 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_super_Const);
    // new. 
    Send PSend14579 = new_Send((Optr)ASTSuper_classReference, SMB_new, 0);
    // escape:. 
    Send PSend14580 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14579);
    Array PThreadedCode14578 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send0, (Optr)PSend14579, (Optr)&t_send1, (Optr)PSend14580, (Optr)&t_block_return);
    Block PBlock14577 = new_Block_with(empty_Array, empty_Array, PThreadedCode14578, 1, PSend14580);
    // ifTrue:. 
    Send PSend14576 = new_Send((Optr)PSend14575, SMB_ifTrue_, 1, (Optr)PBlock14577);
    // new. 
    Send PSend14581 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14582 = new_Send((Optr)PSend14581, SMB_name_, 1, (Optr)VAR_name_0_1);
    // escape:. 
    Send PSend14583 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14582);
    Array PThreadedCode14566 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push1, (Optr)PAssign14567, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14568, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_self, (Optr)&t_send1, (Optr)PSend14569, (Optr)&t_send_ifTrue_, (Optr)PSend14570, (Optr)PBlock14571, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_send1, (Optr)PSend14575, (Optr)&t_send_ifTrue_, (Optr)PSend14576, (Optr)PBlock14577, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14581, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_send1, (Optr)PSend14582, (Optr)&t_send1, (Optr)PSend14583, (Optr)&t_block_return);
    Block PBlock14565 = new_Block_with(empty_Array, empty_Array, PThreadedCode14566, 4, PAssign14567, PSend14570, PSend14576, PSend14583);
    // ifTrue:. 
    Send PSend14564 = new_Send((Optr)PSend14563, SMB_ifTrue_, 1, (Optr)PBlock14565);
    // new. 
    Send PSend14584 = new_Send((Optr)ASTPath_classReference, SMB_new, 0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend14585 = new_Send((Optr)PSend14584, SMB_path_, 1, (Optr)VAR_path_0_0);
    Array PThreadedCode14561 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14562, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14563, (Optr)&t_send_ifTrue_, (Optr)PSend14564, (Optr)PBlock14565, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)ASTPath_classReference, (Optr)&t_send0, (Optr)PSend14584, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send1, (Optr)PSend14585, (Optr)&t_method_return);
    Block PBlock14559 = new_Block_with(PArray14560, empty_Array, PThreadedCode14561, 2, PSend14564, PSend14585);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14586 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14559);
    Array PThreadedCode14558 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14559, (Optr)&t_send1, (Optr)PSend14586, (Optr)&t_method_return);
    Method PMethod14555 = new_Method_with(PArray14556, PArray14557, empty_Array, PThreadedCode14558, 1, PSend14586);
    
    MethodClosure MC_SMB_createReference_ = new_MethodClosure((Method)PMethod14555, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createReference_, MC_SMB_createReference_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14589 = new_Super(SMB_initialize, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend14592 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14591 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14592);
    Assign PAssign14590 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14591);
    Array PThreadedCode14588 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14589, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14590, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14592, (Optr)&t_send1, (Optr)PSend14591, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14587 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14588, 3, PSuper14589, PAssign14590, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14587, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    Super PSuper14595 = new_Super(SMB_initializeStringConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14597 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14599 = new_Send((Optr)ASTString_classReference, SMB_new, 0);
    Symbol SMB_string_ = new_Symbol(L"string:");
    // string:. 
    Send PSend14600 = new_Send((Optr)PSend14599, SMB_string_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14598 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTString_classReference, (Optr)&t_send0, (Optr)PSend14599, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14600, (Optr)&t_method_return);
    Block PBlock14596 = new_Block_with(PArray14597, empty_Array, PThreadedCode14598, 1, PSend14600);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14601 = new_Send((Optr)PSuper14595, SMB_semantics_, 1, (Optr)PBlock14596);
    Array PThreadedCode14594 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14595, (Optr)&t_push_closure, (Optr)PBlock14596, (Optr)&t_send1, (Optr)PSend14601, (Optr)&t_method_return);
    Method PMethod14593 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14594, 1, PSend14601);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod14593, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    Super PSuper14604 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14606 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14608 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14609 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14610 = new_Send((Optr)PSend14608, SMB_receiver_, 1, (Optr)PSend14609);
    Array PThreadedCode14607 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14608, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14609, (Optr)&t_send1, (Optr)PSend14610, (Optr)&t_method_return);
    Block PBlock14605 = new_Block_with(PArray14606, empty_Array, PThreadedCode14607, 1, PSend14610);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14611 = new_Send((Optr)PSuper14604, SMB_semantics_, 1, (Optr)PBlock14605);
    Array PThreadedCode14603 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14604, (Optr)&t_push_closure, (Optr)PBlock14605, (Optr)&t_send1, (Optr)PSend14611, (Optr)&t_method_return);
    Method PMethod14602 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14603, 1, PSend14611);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod14602, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    Variable VAR_optionalAssignment_0_0 = new_Variable_named(L"optionalAssignment", 0);
    Variable VAR_isAssignment_0_1 = new_Variable_named(L"isAssignment", 0);
    Variable VAR_keywords_0_2 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_3 = new_Variable_named(L"arguments", 0);
    Array PArray14613 = new_Array_with(4, (Optr)VAR_optionalAssignment_0_0, (Optr)VAR_isAssignment_0_1, (Optr)VAR_keywords_0_2, (Optr)VAR_arguments_0_3);
    Super PSuper14615 = new_Super(SMB_initializeBracketIndexExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14617 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14620 = new_Send((Optr)VAR_parts_1_0, SMB_second, 0);
    Assign PAssign14619 = new_Assign((Optr)VAR_optionalAssignment_0_0, (Optr)PSend14620);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend14623 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend14622 = new_Send((Optr)PSend14623, SMB__pequals_, 1, (Optr)PEGSucceededOptionalResult_classReference);
    Assign PAssign14621 = new_Assign((Optr)VAR_isAssignment_0_1, (Optr)PSend14622);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol  SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_at__Const = new_Constant((Optr)SMB_at_);
    // with:. 
    Send PSend14628 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14627 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14628, (Optr)&t_block_return);
    Block PBlock14626 = new_Block_with(empty_Array, empty_Array, PThreadedCode14627, 1, PSend14628);
    Symbol  SMB_put_ = new_Symbol(L"put:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_put__Const = new_Constant((Optr)SMB_put_);
    // with:with:. 
    Send PSend14631 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_at__Const, (Optr)SMB_put__Const);
    Array PThreadedCode14630 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_push1, (Optr)SMB_put_, (Optr)&t_send2, (Optr)PSend14631, (Optr)&t_block_return);
    Block PBlock14629 = new_Block_with(empty_Array, empty_Array, PThreadedCode14630, 1, PSend14631);
    // ifFalse:ifTrue:. 
    Send PSend14625 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14626, (Optr)PBlock14629);
    Assign PAssign14624 = new_Assign((Optr)VAR_keywords_0_2, (Optr)PSend14625);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14636 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    // with:. 
    Send PSend14637 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend14636);
    Array PThreadedCode14635 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14636, (Optr)&t_send1, (Optr)PSend14637, (Optr)&t_block_return);
    Block PBlock14634 = new_Block_with(empty_Array, empty_Array, PThreadedCode14635, 1, PSend14637);
    // first. 
    Send PSend14640 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_result = new_Symbol(L"result");
    // result. 
    Send PSend14641 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_result, 0);
    // with:with:. 
    Send PSend14642 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend14640, (Optr)PSend14641);
    Array PThreadedCode14639 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14640, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14641, (Optr)&t_send2, (Optr)PSend14642, (Optr)&t_block_return);
    Block PBlock14638 = new_Block_with(empty_Array, empty_Array, PThreadedCode14639, 1, PSend14642);
    // ifFalse:ifTrue:. 
    Send PSend14633 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14634, (Optr)PBlock14638);
    Assign PAssign14632 = new_Assign((Optr)VAR_arguments_0_3, (Optr)PSend14633);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14644 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14646 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_2);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14647 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_3);
    Array PThreadedCode14645 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_2, (Optr)&t_send1, (Optr)PSend14646, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_3, (Optr)&t_send1, (Optr)PSend14647, (Optr)&t_method_return);
    Block PBlock14643 = new_Block_with(PArray14644, empty_Array, PThreadedCode14645, 2, PSend14646, PSend14647);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14648 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14649 = new_Send((Optr)PBlock14643, SMB_value_, 1, (Optr)PSend14648);
    Array PThreadedCode14618 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14619, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14620, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14621, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14623, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14622, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14624, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14625, (Optr)PBlock14626, (Optr)PBlock14629, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14632, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14633, (Optr)PBlock14634, (Optr)PBlock14638, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14643, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14648, (Optr)&t_send1, (Optr)PSend14649, (Optr)&t_method_return);
    Block PBlock14616 = new_Block_with(PArray14617, empty_Array, PThreadedCode14618, 5, PAssign14619, PAssign14621, PAssign14624, PAssign14632, PSend14649);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14650 = new_Send((Optr)PSuper14615, SMB_semantics_, 1, (Optr)PBlock14616);
    Array PThreadedCode14614 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14615, (Optr)&t_push_closure, (Optr)PBlock14616, (Optr)&t_send1, (Optr)PSend14650, (Optr)&t_method_return);
    Method PMethod14612 = new_Method_with(empty_Array, PArray14613, empty_Array, PThreadedCode14614, 1, PSend14650);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod14612, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Super PSuper14653 = new_Super(SMB_initializeBinaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14655 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14656 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14659 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14658 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14659);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14660 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14662 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14667 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14669 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14670 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14671 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14670);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend14672 = new_Send((Optr)VAR_i_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend14673 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14672);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14674 = new_Send((Optr)VAR__receiver__3_0, SMB_argument_, 1, (Optr)PSend14673);
    Array PThreadedCode14668 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14669, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14670, (Optr)&t_send1, (Optr)PSend14671, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14672, (Optr)&t_send1, (Optr)PSend14673, (Optr)&t_send1, (Optr)PSend14674, (Optr)&t_method_return);
    Block PBlock14666 = new_Block_with(PArray14667, empty_Array, PThreadedCode14668, 3, PSend14669, PSend14671, PSend14674);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14675 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14665 = new_Send((Optr)PBlock14666, SMB_value_, 1, (Optr)PSend14675);
    Assign PAssign14664 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14665);
    Array PThreadedCode14663 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14664, (Optr)&t_push_closure, (Optr)PBlock14666, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14675, (Optr)&t_send1, (Optr)PSend14665, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14661 = new_Block_with(PArray14662, empty_Array, PThreadedCode14663, 1, PAssign14664);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend14676 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14660, (Optr)int_2_Const, (Optr)PBlock14661);
    Array PThreadedCode14657 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14658, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14659, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14660, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14661, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14676, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14654 = new_Block_with(PArray14655, PArray14656, PThreadedCode14657, 3, PAssign14658, PSend14676, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14677 = new_Send((Optr)PSuper14653, SMB_semantics_, 1, (Optr)PBlock14654);
    Array PThreadedCode14652 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14653, (Optr)&t_push_closure, (Optr)PBlock14654, (Optr)&t_send1, (Optr)PSend14677, (Optr)&t_method_return);
    Method PMethod14651 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14652, 1, PSend14677);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14651, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    Super PSuper14680 = new_Super(SMB_initializeScopedExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14682 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_scoped = new_Symbol(L"scoped");
    // scoped. 
    Send PSend14684 = new_Send((Optr)VAR_result_1_0, SMB_scoped, 0);
    Array PThreadedCode14683 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14684, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_method_return);
    Block PBlock14681 = new_Block_with(PArray14682, empty_Array, PThreadedCode14683, 2, PSend14684, VAR_result_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14685 = new_Send((Optr)PSuper14680, SMB_semantics_, 1, (Optr)PBlock14681);
    Array PThreadedCode14679 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14680, (Optr)&t_push_closure, (Optr)PBlock14681, (Optr)&t_send1, (Optr)PSend14685, (Optr)&t_method_return);
    Method PMethod14678 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14679, 1, PSend14685);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod14678, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    Super PSuper14688 = new_Super(SMB_initializeCharacterConstant, 0);
    Variable VAR_char_1_0 = new_Variable_named(L"char", 1);
    Array PArray14690 = new_Array_with(1, (Optr)VAR_char_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14692 = new_Send((Optr)ASTCharacter_classReference, SMB_new, 0);
    Symbol SMB_char_ = new_Symbol(L"char:");
    // char:. 
    Send PSend14693 = new_Send((Optr)PSend14692, SMB_char_, 1, (Optr)VAR_char_1_0);
    Array PThreadedCode14691 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTCharacter_classReference, (Optr)&t_send0, (Optr)PSend14692, (Optr)&t_push_variable, (Optr)VAR_char_1_0, (Optr)&t_send1, (Optr)PSend14693, (Optr)&t_method_return);
    Block PBlock14689 = new_Block_with(PArray14690, empty_Array, PThreadedCode14691, 1, PSend14693);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14694 = new_Send((Optr)PSuper14688, SMB_semantics_, 1, (Optr)PBlock14689);
    Array PThreadedCode14687 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14688, (Optr)&t_push_closure, (Optr)PBlock14689, (Optr)&t_send1, (Optr)PSend14694, (Optr)&t_method_return);
    Method PMethod14686 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14687, 1, PSend14694);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod14686, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    Super PSuper14697 = new_Super(SMB_initializeNumberFormat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14699 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14701 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14700 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14701, (Optr)&t_method_return);
    Block PBlock14698 = new_Block_with(PArray14699, empty_Array, PThreadedCode14700, 1, PSend14701);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14702 = new_Send((Optr)PSuper14697, SMB_semantics_, 1, (Optr)PBlock14698);
    Array PThreadedCode14696 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14697, (Optr)&t_push_closure, (Optr)PBlock14698, (Optr)&t_send1, (Optr)PSend14702, (Optr)&t_method_return);
    Method PMethod14695 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14696, 1, PSend14702);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod14695, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    Super PSuper14705 = new_Super(SMB_initializeMethod, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14707 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14710 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14712 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend14713 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)PSend14712);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14714 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend14715 = new_Send((Optr)VAR__receiver__2_0, SMB_annotations_, 1, (Optr)PSend14714);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14716 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14719 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14718 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14719, (Optr)&t_block_return);
    Block PBlock14717 = new_Block_with(empty_Array, empty_Array, PThreadedCode14718, 1, PSend14719);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14720 = new_Send((Optr)PSend14716, SMB_resultIfFailed_, 1, (Optr)PBlock14717);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14721 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14720);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend14722 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14723 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14722);
    Array PThreadedCode14711 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14712, (Optr)&t_send1, (Optr)PSend14713, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14714, (Optr)&t_send1, (Optr)PSend14715, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14716, (Optr)&t_push_closure, (Optr)PBlock14717, (Optr)&t_send1, (Optr)PSend14720, (Optr)&t_send1, (Optr)PSend14721, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend14722, (Optr)&t_send1, (Optr)PSend14723, (Optr)&t_method_return);
    Block PBlock14709 = new_Block_with(PArray14710, empty_Array, PThreadedCode14711, 4, PSend14713, PSend14715, PSend14721, PSend14723);
    // new. 
    Send PSend14724 = new_Send((Optr)ASTMethod_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14725 = new_Send((Optr)PBlock14709, SMB_value_, 1, (Optr)PSend14724);
    Array PThreadedCode14708 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14709, (Optr)&t_push_class_reference, (Optr)ASTMethod_classReference, (Optr)&t_send0, (Optr)PSend14724, (Optr)&t_send1, (Optr)PSend14725, (Optr)&t_method_return);
    Block PBlock14706 = new_Block_with(PArray14707, empty_Array, PThreadedCode14708, 1, PSend14725);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14726 = new_Send((Optr)PSuper14705, SMB_semantics_, 1, (Optr)PBlock14706);
    Array PThreadedCode14704 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14705, (Optr)&t_push_closure, (Optr)PBlock14706, (Optr)&t_send1, (Optr)PSend14726, (Optr)&t_method_return);
    Method PMethod14703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14704, 1, PSend14726);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod14703, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    Super PSuper14729 = new_Super(SMB_initializeUnaryMessageDefinition, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14731 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14733 = new_Send((Optr)ASTUnaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14734 = new_Send((Optr)PSend14733, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14732 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14733, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14734, (Optr)&t_method_return);
    Block PBlock14730 = new_Block_with(PArray14731, empty_Array, PThreadedCode14732, 1, PSend14734);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14735 = new_Send((Optr)PSuper14729, SMB_semantics_, 1, (Optr)PBlock14730);
    Array PThreadedCode14728 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14729, (Optr)&t_push_closure, (Optr)PBlock14730, (Optr)&t_send1, (Optr)PSend14735, (Optr)&t_method_return);
    Method PMethod14727 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14728, 1, PSend14735);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod14727, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14737 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14739 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14741 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14745 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14744 = new_Send((Optr)PSend14745, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14743 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14744);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14747 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14746 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14747);
    // new:. 
    Send PSend14749 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14748 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14749);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14751 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14753 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14754 = new_Send((Optr)PSend14753, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14755 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14754);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14756 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14755);
    // *. 
    Send PSend14757 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14758 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14757);
    // at:put:. 
    Send PSend14759 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14758);
    Array PThreadedCode14752 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14753, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14754, (Optr)&t_send1, (Optr)PSend14755, (Optr)&t_send2, (Optr)PSend14756, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14757, (Optr)&t_send1, (Optr)PSend14758, (Optr)&t_send2, (Optr)PSend14759, (Optr)&t_method_return);
    Block PBlock14750 = new_Block_with(PArray14751, empty_Array, PThreadedCode14752, 2, PSend14756, PSend14759);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14760 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14750);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14762 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14764 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14765 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14763 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14764, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14765, (Optr)&t_method_return);
    Block PBlock14761 = new_Block_with(PArray14762, empty_Array, PThreadedCode14763, 2, PSend14764, PSend14765);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14766 = new_Send((Optr)ASTKeywordAnnotation_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14767 = new_Send((Optr)PBlock14761, SMB_value_, 1, (Optr)PSend14766);
    Array PThreadedCode14742 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14743, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14745, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14744, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14746, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14747, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14748, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14749, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14750, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14760, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14761, (Optr)&t_push_class_reference, (Optr)ASTKeywordAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14766, (Optr)&t_send1, (Optr)PSend14767, (Optr)&t_method_return);
    Block PBlock14740 = new_Block_with(PArray14741, empty_Array, PThreadedCode14742, 5, PAssign14743, PAssign14746, PAssign14748, PSend14760, PSend14767);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14768 = new_Send((Optr)PSuper14739, SMB_semantics_, 1, (Optr)PBlock14740);
    Array PThreadedCode14738 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14739, (Optr)&t_push_closure, (Optr)PBlock14740, (Optr)&t_send1, (Optr)PSend14768, (Optr)&t_method_return);
    Method PMethod14736 = new_Method_with(empty_Array, PArray14737, empty_Array, PThreadedCode14738, 1, PSend14768);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14736, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    Super PSuper14771 = new_Super(SMB_initializeKeyword, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14773 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14775 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14774 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14775, (Optr)&t_method_return);
    Block PBlock14772 = new_Block_with(PArray14773, empty_Array, PThreadedCode14774, 1, PSend14775);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14776 = new_Send((Optr)PSuper14771, SMB_semantics_, 1, (Optr)PBlock14772);
    Array PThreadedCode14770 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14771, (Optr)&t_push_closure, (Optr)PBlock14772, (Optr)&t_send1, (Optr)PSend14776, (Optr)&t_method_return);
    Method PMethod14769 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14770, 1, PSend14776);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod14769, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Variable VAR_vars_0_0 = new_Variable_named(L"vars", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray14778 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14780 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14782 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14785 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14784 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14785);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14787 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign14786 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14787);
    Variable VAR_variables_2_0 = new_Variable_named(L"variables", 2);
    Array PArray14789 = new_Array_with(1, (Optr)VAR_variables_2_0);
    Variable VAR_variable_3_0 = new_Variable_named(L"variable", 3);
    Array PArray14792 = new_Array_with(1, (Optr)VAR_variable_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray14797 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14799 = new_Send((Optr)VAR__receiver__4_0, SMB_expression_, 1, (Optr)VAR_expression_0_1);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend14800 = new_Send((Optr)VAR__receiver__4_0, SMB_variable_, 1, (Optr)VAR_variable_3_0);
    Array PThreadedCode14798 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend14799, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_variable_3_0, (Optr)&t_send1, (Optr)PSend14800, (Optr)&t_method_return);
    Block PBlock14796 = new_Block_with(PArray14797, empty_Array, PThreadedCode14798, 2, PSend14799, PSend14800);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14801 = new_Send((Optr)ASTAssignmentExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14795 = new_Send((Optr)PBlock14796, SMB_value_, 1, (Optr)PSend14801);
    Assign PAssign14794 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14795);
    Array PThreadedCode14793 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14794, (Optr)&t_push_closure, (Optr)PBlock14796, (Optr)&t_push_class_reference, (Optr)ASTAssignmentExpression_classReference, (Optr)&t_send0, (Optr)PSend14801, (Optr)&t_send1, (Optr)PSend14795, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14791 = new_Block_with(PArray14792, empty_Array, PThreadedCode14793, 1, PAssign14794);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend14802 = new_Send((Optr)VAR_variables_2_0, SMB_reverseDo_, 1, (Optr)PBlock14791);
    Array PThreadedCode14790 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_variables_2_0, (Optr)&t_push_closure, (Optr)PBlock14791, (Optr)&t_send1, (Optr)PSend14802, (Optr)&t_method_return);
    Block PBlock14788 = new_Block_with(PArray14789, empty_Array, PThreadedCode14790, 1, PSend14802);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14803 = new_Send((Optr)VAR_vars_0_0, SMB_ifMatched_, 1, (Optr)PBlock14788);
    Array PThreadedCode14783 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign14784, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14785, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14786, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14787, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_vars_0_0, (Optr)&t_push_closure, (Optr)PBlock14788, (Optr)&t_send1, (Optr)PSend14803, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_method_return);
    Block PBlock14781 = new_Block_with(PArray14782, empty_Array, PThreadedCode14783, 4, PAssign14784, PAssign14786, PSend14803, VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14804 = new_Send((Optr)PSuper14780, SMB_semantics_, 1, (Optr)PBlock14781);
    Array PThreadedCode14779 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14780, (Optr)&t_push_closure, (Optr)PBlock14781, (Optr)&t_send1, (Optr)PSend14804, (Optr)&t_method_return);
    Method PMethod14777 = new_Method_with(empty_Array, PArray14778, empty_Array, PThreadedCode14779, 1, PSend14804);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14777, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    Super PSuper14807 = new_Super(SMB_initializeFloat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14809 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14812 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14814 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_high_ = new_Symbol(L"high:");
    // high:. 
    Send PSend14815 = new_Send((Optr)VAR__receiver__2_0, SMB_high_, 1, (Optr)PSend14814);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14816 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Symbol SMB_low_ = new_Symbol(L"low:");
    // low:. 
    Send PSend14817 = new_Send((Optr)VAR__receiver__2_0, SMB_low_, 1, (Optr)PSend14816);
    Array PThreadedCode14813 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14814, (Optr)&t_send1, (Optr)PSend14815, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14816, (Optr)&t_send1, (Optr)PSend14817, (Optr)&t_method_return);
    Block PBlock14811 = new_Block_with(PArray14812, empty_Array, PThreadedCode14813, 2, PSend14815, PSend14817);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14818 = new_Send((Optr)ASTFloat_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14819 = new_Send((Optr)PBlock14811, SMB_value_, 1, (Optr)PSend14818);
    Array PThreadedCode14810 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14811, (Optr)&t_push_class_reference, (Optr)ASTFloat_classReference, (Optr)&t_send0, (Optr)PSend14818, (Optr)&t_send1, (Optr)PSend14819, (Optr)&t_method_return);
    Block PBlock14808 = new_Block_with(PArray14809, empty_Array, PThreadedCode14810, 1, PSend14819);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14820 = new_Send((Optr)PSuper14807, SMB_semantics_, 1, (Optr)PBlock14808);
    Array PThreadedCode14806 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14807, (Optr)&t_push_closure, (Optr)PBlock14808, (Optr)&t_send1, (Optr)PSend14820, (Optr)&t_method_return);
    Method PMethod14805 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14806, 1, PSend14820);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14805, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    Super PSuper14823 = new_Super(SMB_initializeBlockArguments, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14825 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR_variable_2_0 = new_Variable_named(L"variable", 2);
    Array PArray14828 = new_Array_with(1, (Optr)VAR_variable_2_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14830 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_variable_2_0);
    Array PThreadedCode14829 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_variable_2_0, (Optr)&t_send1, (Optr)PSend14830, (Optr)&t_method_return);
    Block PBlock14827 = new_Block_with(PArray14828, empty_Array, PThreadedCode14829, 1, PSend14830);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend14831 = new_Send((Optr)VAR_result_1_0, SMB_collect_, 1, (Optr)PBlock14827);
    Array PThreadedCode14826 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_closure, (Optr)PBlock14827, (Optr)&t_send1, (Optr)PSend14831, (Optr)&t_method_return);
    Block PBlock14824 = new_Block_with(PArray14825, empty_Array, PThreadedCode14826, 1, PSend14831);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14832 = new_Send((Optr)PSuper14823, SMB_semantics_, 1, (Optr)PBlock14824);
    Array PThreadedCode14822 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14823, (Optr)&t_push_closure, (Optr)PBlock14824, (Optr)&t_send1, (Optr)PSend14832, (Optr)&t_method_return);
    Method PMethod14821 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14822, 1, PSend14832);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14821, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    Super PSuper14835 = new_Super(SMB_initializeBraceExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14837 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14839 = new_Send((Optr)ASTBraceExpression_classReference, SMB_new, 0);
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    // expressions:. 
    Send PSend14840 = new_Send((Optr)PSend14839, SMB_expressions_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14838 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTBraceExpression_classReference, (Optr)&t_send0, (Optr)PSend14839, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14840, (Optr)&t_method_return);
    Block PBlock14836 = new_Block_with(PArray14837, empty_Array, PThreadedCode14838, 1, PSend14840);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14841 = new_Send((Optr)PSuper14835, SMB_semantics_, 1, (Optr)PBlock14836);
    Array PThreadedCode14834 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14835, (Optr)&t_push_closure, (Optr)PBlock14836, (Optr)&t_send1, (Optr)PSend14841, (Optr)&t_method_return);
    Method PMethod14833 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14834, 1, PSend14841);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14833, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    Super PSuper14844 = new_Super(SMB_initializeBinaryMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14846 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14849 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14851 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14852 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14851);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14853 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14854 = new_Send((Optr)VAR__receiver__2_0, SMB_argument_, 1, (Optr)PSend14853);
    Array PThreadedCode14850 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14851, (Optr)&t_send1, (Optr)PSend14852, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14853, (Optr)&t_send1, (Optr)PSend14854, (Optr)&t_method_return);
    Block PBlock14848 = new_Block_with(PArray14849, empty_Array, PThreadedCode14850, 2, PSend14852, PSend14854);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14855 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14856 = new_Send((Optr)PBlock14848, SMB_value_, 1, (Optr)PSend14855);
    Array PThreadedCode14847 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14848, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14855, (Optr)&t_send1, (Optr)PSend14856, (Optr)&t_method_return);
    Block PBlock14845 = new_Block_with(PArray14846, empty_Array, PThreadedCode14847, 1, PSend14856);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14857 = new_Send((Optr)PSuper14844, SMB_semantics_, 1, (Optr)PBlock14845);
    Array PThreadedCode14843 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14844, (Optr)&t_push_closure, (Optr)PBlock14845, (Optr)&t_send1, (Optr)PSend14857, (Optr)&t_method_return);
    Method PMethod14842 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14843, 1, PSend14857);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14842, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    Super PSuper14860 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14862 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14864 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend14865 = new_Send((Optr)PSend14864, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_14869 = new_String(L"");
    Array PThreadedCode14868 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_14869, (Optr)&t_block_return);
    Constant string_14869_Const = new_Constant((Optr)string_14869);
    Block PBlock14867 = new_Block_with(empty_Array, empty_Array, PThreadedCode14868, 1, string_14869_Const);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14872 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend14873 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_with_, 1, (Optr)PSend14872);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Variable VAR_i_2_1 = new_Variable_named(L"i", 2);
    Array PArray14875 = new_Array_with(2, (Optr)VAR_s_2_0, (Optr)VAR_i_2_1);
    String string_14877 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_14877_Const = new_Constant((Optr)string_14877);
    // <<. 
    Send PSend14878 = new_Send((Optr)VAR_s_2_0, SMB__shiftLeft_, 1, (Optr)string_14877_Const);
    // <<. 
    Send PSend14879 = new_Send((Optr)PSend14878, SMB__shiftLeft_, 1, (Optr)VAR_i_2_1);
    Array PThreadedCode14876 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)string_14877, (Optr)&t_send1, (Optr)PSend14878, (Optr)&t_push_variable, (Optr)VAR_i_2_1, (Optr)&t_send1, (Optr)PSend14879, (Optr)&t_method_return);
    Block PBlock14874 = new_Block_with(PArray14875, empty_Array, PThreadedCode14876, 1, PSend14879);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14880 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14873, (Optr)PBlock14874);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14881 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14871 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14872, (Optr)&t_send1, (Optr)PSend14873, (Optr)&t_push_closure, (Optr)PBlock14874, (Optr)&t_send2, (Optr)PSend14880, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14881, (Optr)&t_block_return);
    Block PBlock14870 = new_Block_with(empty_Array, empty_Array, PThreadedCode14871, 2, PSend14880, PSend14881);
    // ifTrue:ifFalse:. 
    Send PSend14866 = new_Send((Optr)PSend14865, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock14867, (Optr)PBlock14870);
    Array PThreadedCode14863 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14864, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend14865, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend14866, (Optr)PBlock14867, (Optr)PBlock14870, (Optr)&t_method_return);
    Block PBlock14861 = new_Block_with(PArray14862, empty_Array, PThreadedCode14863, 1, PSend14866);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14882 = new_Send((Optr)PSuper14860, SMB_semantics_, 1, (Optr)PBlock14861);
    Array PThreadedCode14859 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14860, (Optr)&t_push_closure, (Optr)PBlock14861, (Optr)&t_send1, (Optr)PSend14882, (Optr)&t_method_return);
    Method PMethod14858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14859, 1, PSend14882);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14858, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_createVariable_() {
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
    Array PArray14884 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14886 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14887 = new_Send((Optr)PSend14886, SMB_name_, 1, (Optr)VAR_variable_0_0);
    Array PThreadedCode14885 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14886, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send1, (Optr)PSend14887, (Optr)&t_method_return);
    Method PMethod14883 = new_Method_with(PArray14884, empty_Array, empty_Array, PThreadedCode14885, 1, PSend14887);
    
    MethodClosure MC_SMB_createVariable_ = new_MethodClosure((Method)PMethod14883, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createVariable_, MC_SMB_createVariable_);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    Super PSuper14890 = new_Super(SMB_initializeUnaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14892 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14893 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14896 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14895 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14896);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14897 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14899 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14904 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14906 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14907 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14908 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14907);
    Array PThreadedCode14905 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14906, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14907, (Optr)&t_send1, (Optr)PSend14908, (Optr)&t_method_return);
    Block PBlock14903 = new_Block_with(PArray14904, empty_Array, PThreadedCode14905, 2, PSend14906, PSend14908);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14909 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14902 = new_Send((Optr)PBlock14903, SMB_value_, 1, (Optr)PSend14909);
    Assign PAssign14901 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14902);
    Array PThreadedCode14900 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14901, (Optr)&t_push_closure, (Optr)PBlock14903, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14909, (Optr)&t_send1, (Optr)PSend14902, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14898 = new_Block_with(PArray14899, empty_Array, PThreadedCode14900, 1, PAssign14901);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14910 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14897, (Optr)PBlock14898);
    Array PThreadedCode14894 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14895, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14896, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14897, (Optr)&t_push_closure, (Optr)PBlock14898, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14910, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14891 = new_Block_with(PArray14892, PArray14893, PThreadedCode14894, 3, PAssign14895, PSend14910, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14911 = new_Send((Optr)PSuper14890, SMB_semantics_, 1, (Optr)PBlock14891);
    Array PThreadedCode14889 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14890, (Optr)&t_push_closure, (Optr)PBlock14891, (Optr)&t_send1, (Optr)PSend14911, (Optr)&t_method_return);
    Method PMethod14888 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14889, 1, PSend14911);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14888, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    Super PSuper14914 = new_Super(SMB_initializeAnnotations, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14916 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14918 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14917 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14918, (Optr)&t_method_return);
    Block PBlock14915 = new_Block_with(PArray14916, empty_Array, PThreadedCode14917, 1, PSend14918);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14919 = new_Send((Optr)PSuper14914, SMB_semantics_, 1, (Optr)PBlock14915);
    Array PThreadedCode14913 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14914, (Optr)&t_push_closure, (Optr)PBlock14915, (Optr)&t_send1, (Optr)PSend14919, (Optr)&t_method_return);
    Method PMethod14912 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14913, 1, PSend14919);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14912, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    Super PSuper14922 = new_Super(SMB_initializePrimaryVariable, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14924 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14926 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    // createReference:. 
    Send PSend14927 = new_Send((Optr)self, SMB_createReference_, 1, (Optr)PSend14926);
    Array PThreadedCode14925 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14926, (Optr)&t_send1, (Optr)PSend14927, (Optr)&t_method_return);
    Block PBlock14923 = new_Block_with(PArray14924, empty_Array, PThreadedCode14925, 1, PSend14927);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14928 = new_Send((Optr)PSuper14922, SMB_semantics_, 1, (Optr)PBlock14923);
    Array PThreadedCode14921 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14922, (Optr)&t_push_closure, (Optr)PBlock14923, (Optr)&t_send1, (Optr)PSend14928, (Optr)&t_method_return);
    Method PMethod14920 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14921, 1, PSend14928);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod14920, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Super PSuper14931 = new_Super(SMB_initializeStringSegment, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14933 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14935 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14934 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14935, (Optr)&t_method_return);
    Block PBlock14932 = new_Block_with(PArray14933, empty_Array, PThreadedCode14934, 1, PSend14935);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14936 = new_Send((Optr)PSuper14931, SMB_semantics_, 1, (Optr)PBlock14932);
    Array PThreadedCode14930 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14931, (Optr)&t_push_closure, (Optr)PBlock14932, (Optr)&t_send1, (Optr)PSend14936, (Optr)&t_method_return);
    Method PMethod14929 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14930, 1, PSend14936);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14929, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_parameters_0_2 = new_Variable_named(L"parameters", 0);
    Array PArray14938 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14940 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14942 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14946 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14945 = new_Send((Optr)PSend14946, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14944 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14945);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14948 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14947 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14948);
    // new:. 
    Send PSend14950 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14949 = new_Assign((Optr)VAR_parameters_0_2, (Optr)PSend14950);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14952 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14954 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14955 = new_Send((Optr)PSend14954, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14956 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14955);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14957 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14956);
    // *. 
    Send PSend14958 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14959 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14958);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14960 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14959);
    // at:put:. 
    Send PSend14961 = new_Send((Optr)VAR_parameters_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14960);
    Array PThreadedCode14953 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14954, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14955, (Optr)&t_send1, (Optr)PSend14956, (Optr)&t_send2, (Optr)PSend14957, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14958, (Optr)&t_send1, (Optr)PSend14959, (Optr)&t_send1, (Optr)PSend14960, (Optr)&t_send2, (Optr)PSend14961, (Optr)&t_method_return);
    Block PBlock14951 = new_Block_with(PArray14952, empty_Array, PThreadedCode14953, 2, PSend14957, PSend14961);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14962 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14951);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14964 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14966 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14967 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)VAR_parameters_0_2);
    Array PThreadedCode14965 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14966, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_send1, (Optr)PSend14967, (Optr)&t_method_return);
    Block PBlock14963 = new_Block_with(PArray14964, empty_Array, PThreadedCode14965, 2, PSend14966, PSend14967);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14968 = new_Send((Optr)ASTKeywordMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14969 = new_Send((Optr)PBlock14963, SMB_value_, 1, (Optr)PSend14968);
    Array PThreadedCode14943 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14944, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14946, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14945, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14947, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14948, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14949, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14950, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14951, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14962, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14963, (Optr)&t_push_class_reference, (Optr)ASTKeywordMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14968, (Optr)&t_send1, (Optr)PSend14969, (Optr)&t_method_return);
    Block PBlock14941 = new_Block_with(PArray14942, empty_Array, PThreadedCode14943, 5, PAssign14944, PAssign14947, PAssign14949, PSend14962, PSend14969);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14970 = new_Send((Optr)PSuper14940, SMB_semantics_, 1, (Optr)PBlock14941);
    Array PThreadedCode14939 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14940, (Optr)&t_push_closure, (Optr)PBlock14941, (Optr)&t_send1, (Optr)PSend14970, (Optr)&t_method_return);
    Method PMethod14937 = new_Method_with(empty_Array, PArray14938, empty_Array, PThreadedCode14939, 1, PSend14970);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod14937, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    Super PSuper14973 = new_Super(SMB_initializeBinaryMessageDefinition, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14975 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14978 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14980 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14981 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14980);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14982 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14983 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14982);
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    // parameter:. 
    Send PSend14984 = new_Send((Optr)VAR__receiver__2_0, SMB_parameter_, 1, (Optr)PSend14983);
    Array PThreadedCode14979 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14980, (Optr)&t_send1, (Optr)PSend14981, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14982, (Optr)&t_send1, (Optr)PSend14983, (Optr)&t_send1, (Optr)PSend14984, (Optr)&t_method_return);
    Block PBlock14977 = new_Block_with(PArray14978, empty_Array, PThreadedCode14979, 2, PSend14981, PSend14984);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14985 = new_Send((Optr)ASTBinaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14986 = new_Send((Optr)PBlock14977, SMB_value_, 1, (Optr)PSend14985);
    Array PThreadedCode14976 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14977, (Optr)&t_push_class_reference, (Optr)ASTBinaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14985, (Optr)&t_send1, (Optr)PSend14986, (Optr)&t_method_return);
    Block PBlock14974 = new_Block_with(PArray14975, empty_Array, PThreadedCode14976, 1, PSend14986);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14987 = new_Send((Optr)PSuper14973, SMB_semantics_, 1, (Optr)PBlock14974);
    Array PThreadedCode14972 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14973, (Optr)&t_push_closure, (Optr)PBlock14974, (Optr)&t_send1, (Optr)PSend14987, (Optr)&t_method_return);
    Method PMethod14971 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14972, 1, PSend14987);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14971, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    Super PSuper14990 = new_Super(SMB_initializeReturn, 0);
    Variable VAR_expression_1_0 = new_Variable_named(L"expression", 1);
    Array PArray14992 = new_Array_with(1, (Optr)VAR_expression_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14994 = new_Send((Optr)ASTReturnExpression_classReference, SMB_new, 0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14995 = new_Send((Optr)PSend14994, SMB_expression_, 1, (Optr)VAR_expression_1_0);
    Array PThreadedCode14993 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTReturnExpression_classReference, (Optr)&t_send0, (Optr)PSend14994, (Optr)&t_push_variable, (Optr)VAR_expression_1_0, (Optr)&t_send1, (Optr)PSend14995, (Optr)&t_method_return);
    Block PBlock14991 = new_Block_with(PArray14992, empty_Array, PThreadedCode14993, 1, PSend14995);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14996 = new_Send((Optr)PSuper14990, SMB_semantics_, 1, (Optr)PBlock14991);
    Array PThreadedCode14989 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14990, (Optr)&t_push_closure, (Optr)PBlock14991, (Optr)&t_send1, (Optr)PSend14996, (Optr)&t_method_return);
    Method PMethod14988 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14989, 1, PSend14996);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14988, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    Super PSuper14999 = new_Super(SMB_initializeTemporaries, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15001 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15003 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode15002 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15003, (Optr)&t_method_return);
    Block PBlock15000 = new_Block_with(PArray15001, empty_Array, PThreadedCode15002, 1, PSend15003);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15004 = new_Send((Optr)PSuper14999, SMB_semantics_, 1, (Optr)PBlock15000);
    Array PThreadedCode14998 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14999, (Optr)&t_push_closure, (Optr)PBlock15000, (Optr)&t_send1, (Optr)PSend15004, (Optr)&t_method_return);
    Method PMethod14997 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14998, 1, PSend15004);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod14997, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray15006 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper15008 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray15010 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15014 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend15013 = new_Send((Optr)PSend15014, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign15012 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend15013);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend15016 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign15015 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend15016);
    // new:. 
    Send PSend15018 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign15017 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend15018);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray15020 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend15022 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend15023 = new_Send((Optr)PSend15022, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15024 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend15023);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend15025 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend15024);
    // *. 
    Send PSend15026 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend15027 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend15026);
    // at:put:. 
    Send PSend15028 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend15027);
    Array PThreadedCode15021 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15022, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15023, (Optr)&t_send1, (Optr)PSend15024, (Optr)&t_send2, (Optr)PSend15025, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15026, (Optr)&t_send1, (Optr)PSend15027, (Optr)&t_send2, (Optr)PSend15028, (Optr)&t_method_return);
    Block PBlock15019 = new_Block_with(PArray15020, empty_Array, PThreadedCode15021, 2, PSend15025, PSend15028);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend15029 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock15019);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15031 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend15033 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend15034 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode15032 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend15033, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend15034, (Optr)&t_method_return);
    Block PBlock15030 = new_Block_with(PArray15031, empty_Array, PThreadedCode15032, 2, PSend15033, PSend15034);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15035 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15036 = new_Send((Optr)PBlock15030, SMB_value_, 1, (Optr)PSend15035);
    Array PThreadedCode15011 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign15012, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15014, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15013, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15015, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend15016, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15017, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend15018, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock15019, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend15029, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15030, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend15035, (Optr)&t_send1, (Optr)PSend15036, (Optr)&t_method_return);
    Block PBlock15009 = new_Block_with(PArray15010, empty_Array, PThreadedCode15011, 5, PAssign15012, PAssign15015, PAssign15017, PSend15029, PSend15036);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15037 = new_Send((Optr)PSuper15008, SMB_semantics_, 1, (Optr)PBlock15009);
    Array PThreadedCode15007 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15008, (Optr)&t_push_closure, (Optr)PBlock15009, (Optr)&t_send1, (Optr)PSend15037, (Optr)&t_method_return);
    Method PMethod15005 = new_Method_with(empty_Array, PArray15006, empty_Array, PThreadedCode15007, 1, PSend15037);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod15005, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    Super PSuper15040 = new_Super(SMB_initializeSymbolKeywords, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15042 = new_Array_with(1, (Optr)VAR_result_1_0);
    String string_15044 = new_String(L"");
    Symbol SMB_on_ = new_Symbol(L"on:");
    Constant string_15044_Const = new_Constant((Optr)string_15044);
    // on:. 
    Send PSend15045 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_on_, 1, (Optr)string_15044_Const);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Variable VAR_e_2_1 = new_Variable_named(L"e", 2);
    Array PArray15047 = new_Array_with(2, (Optr)VAR_c_2_0, (Optr)VAR_e_2_1);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15049 = new_Send((Optr)VAR_c_2_0, SMB__shiftLeft_, 1, (Optr)VAR_e_2_1);
    Array PThreadedCode15048 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_push_variable, (Optr)VAR_e_2_1, (Optr)&t_send1, (Optr)PSend15049, (Optr)&t_method_return);
    Block PBlock15046 = new_Block_with(PArray15047, empty_Array, PThreadedCode15048, 1, PSend15049);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend15050 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend15045, (Optr)PBlock15046);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend15051 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode15043 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push1, (Optr)string_15044, (Optr)&t_send1, (Optr)PSend15045, (Optr)&t_push_closure, (Optr)PBlock15046, (Optr)&t_send2, (Optr)PSend15050, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend15051, (Optr)&t_method_return);
    Block PBlock15041 = new_Block_with(PArray15042, empty_Array, PThreadedCode15043, 2, PSend15050, PSend15051);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15052 = new_Send((Optr)PSuper15040, SMB_semantics_, 1, (Optr)PBlock15041);
    Array PThreadedCode15039 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15040, (Optr)&t_push_closure, (Optr)PBlock15041, (Optr)&t_send1, (Optr)PSend15052, (Optr)&t_method_return);
    Method PMethod15038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15039, 1, PSend15052);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod15038, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    Super PSuper15055 = new_Super(SMB_initializeAssignmentExpressions, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15057 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15059 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode15058 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15059, (Optr)&t_method_return);
    Block PBlock15056 = new_Block_with(PArray15057, empty_Array, PThreadedCode15058, 1, PSend15059);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15060 = new_Send((Optr)PSuper15055, SMB_semantics_, 1, (Optr)PBlock15056);
    Array PThreadedCode15054 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15055, (Optr)&t_push_closure, (Optr)PBlock15056, (Optr)&t_send1, (Optr)PSend15060, (Optr)&t_method_return);
    Method PMethod15053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15054, 1, PSend15060);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod15053, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Super PSuper15063 = new_Super(SMB_preStoreCascadedMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray15065 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15068 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend15070 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15071 = new_Send((Optr)PSend15070, SMB_receiver, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend15072 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend15071);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15073 = new_Send((Optr)VAR_parts_1_0, SMB_asArray, 0);
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    // cascades:. 
    Send PSend15074 = new_Send((Optr)VAR__receiver__2_0, SMB_cascades_, 1, (Optr)PSend15073);
    Array PThreadedCode15069 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15070, (Optr)&t_send0, (Optr)PSend15071, (Optr)&t_send1, (Optr)PSend15072, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15073, (Optr)&t_send1, (Optr)PSend15074, (Optr)&t_method_return);
    Block PBlock15067 = new_Block_with(PArray15068, empty_Array, PThreadedCode15069, 2, PSend15072, PSend15074);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15075 = new_Send((Optr)ASTMessageCascadeExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15076 = new_Send((Optr)PBlock15067, SMB_value_, 1, (Optr)PSend15075);
    Array PThreadedCode15066 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock15067, (Optr)&t_push_class_reference, (Optr)ASTMessageCascadeExpression_classReference, (Optr)&t_send0, (Optr)PSend15075, (Optr)&t_send1, (Optr)PSend15076, (Optr)&t_method_return);
    Block PBlock15064 = new_Block_with(PArray15065, empty_Array, PThreadedCode15066, 1, PSend15076);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15077 = new_Send((Optr)PSuper15063, SMB_semantics_, 1, (Optr)PBlock15064);
    Array PThreadedCode15062 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15063, (Optr)&t_push_closure, (Optr)PBlock15064, (Optr)&t_send1, (Optr)PSend15077, (Optr)&t_method_return);
    Method PMethod15061 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15062, 1, PSend15077);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod15061, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    Super PSuper15080 = new_Super(SMB_initializeUnaryAnnotation, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray15082 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15084 = new_Send((Optr)ASTUnaryAnnotation_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend15085 = new_Send((Optr)PSend15084, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode15083 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryAnnotation_classReference, (Optr)&t_send0, (Optr)PSend15084, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend15085, (Optr)&t_method_return);
    Block PBlock15081 = new_Block_with(PArray15082, empty_Array, PThreadedCode15083, 1, PSend15085);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15086 = new_Send((Optr)PSuper15080, SMB_semantics_, 1, (Optr)PBlock15081);
    Array PThreadedCode15079 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15080, (Optr)&t_push_closure, (Optr)PBlock15081, (Optr)&t_send1, (Optr)PSend15086, (Optr)&t_method_return);
    Method PMethod15078 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15079, 1, PSend15086);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod15078, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    Super PSuper15089 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15091 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15093 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend15094 = new_Send((Optr)PSend15093, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend15098 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15099 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // add:. 
    Send PSend15100 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PSend15099);
    Array PThreadedCode15097 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend15098, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15099, (Optr)&t_send1, (Optr)PSend15100, (Optr)&t_block_return);
    Block PBlock15096 = new_Block_with(empty_Array, empty_Array, PThreadedCode15097, 2, PSend15098, PSend15100);
    // ifTrue:. 
    Send PSend15095 = new_Send((Optr)PSend15094, SMB_ifTrue_, 1, (Optr)PBlock15096);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15102 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend15104 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    // new. 
    Send PSend15107 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode15106 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend15107, (Optr)&t_block_return);
    Block PBlock15105 = new_Block_with(empty_Array, empty_Array, PThreadedCode15106, 1, PSend15107);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend15108 = new_Send((Optr)PSend15104, SMB_resultIfFailed_, 1, (Optr)PBlock15105);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend15109 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)PSend15108);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend15110 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    // new. 
    Send PSend15113 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode15112 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend15113, (Optr)&t_block_return);
    Block PBlock15111 = new_Block_with(empty_Array, empty_Array, PThreadedCode15112, 1, PSend15113);
    // resultIfFailed:. 
    Send PSend15114 = new_Send((Optr)PSend15110, SMB_resultIfFailed_, 1, (Optr)PBlock15111);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend15115 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend15114);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend15116 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend15117 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend15116);
    Array PThreadedCode15103 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15104, (Optr)&t_push_closure, (Optr)PBlock15105, (Optr)&t_send1, (Optr)PSend15108, (Optr)&t_send1, (Optr)PSend15109, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15110, (Optr)&t_push_closure, (Optr)PBlock15111, (Optr)&t_send1, (Optr)PSend15114, (Optr)&t_send1, (Optr)PSend15115, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend15116, (Optr)&t_send1, (Optr)PSend15117, (Optr)&t_method_return);
    Block PBlock15101 = new_Block_with(PArray15102, empty_Array, PThreadedCode15103, 3, PSend15109, PSend15115, PSend15117);
    // new. 
    Send PSend15118 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15119 = new_Send((Optr)PBlock15101, SMB_value_, 1, (Optr)PSend15118);
    Array PThreadedCode15092 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15093, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15094, (Optr)&t_send_ifTrue_, (Optr)PSend15095, (Optr)PBlock15096, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15101, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend15118, (Optr)&t_send1, (Optr)PSend15119, (Optr)&t_method_return);
    Block PBlock15090 = new_Block_with(PArray15091, empty_Array, PThreadedCode15092, 2, PSend15095, PSend15119);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15120 = new_Send((Optr)PSuper15089, SMB_semantics_, 1, (Optr)PBlock15090);
    Array PThreadedCode15088 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15089, (Optr)&t_push_closure, (Optr)PBlock15090, (Optr)&t_send1, (Optr)PSend15120, (Optr)&t_method_return);
    Method PMethod15087 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15088, 1, PSend15120);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod15087, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_class_SMB_match_in_() {
    Symbol SMB_match_in_ = new_Symbol(L"match:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray15122 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend15124 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend15125 = new_Send((Optr)PSend15124, SMB_method, 0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend15126 = new_Send((Optr)VAR_class_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15127 = new_Send((Optr)PSend15126, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend15128 = new_Send((Optr)PSend15127, SMB_asString, 0);
    // asString. 
    Send PSend15129 = new_Send((Optr)PSend15128, SMB_asString, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend15130 = new_Send((Optr)PSend15125, SMB_parse_, 1, (Optr)PSend15129);
    Array PThreadedCode15123 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15124, (Optr)&t_send0, (Optr)PSend15125, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send0, (Optr)PSend15126, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15127, (Optr)&t_send0, (Optr)PSend15128, (Optr)&t_send0, (Optr)PSend15129, (Optr)&t_send1, (Optr)PSend15130, (Optr)&t_method_return);
    Method PMethod15121 = new_Method_with(PArray15122, empty_Array, empty_Array, PThreadedCode15123, 1, PSend15130);
    
    MethodClosure MC_SMB_match_in_ = new_MethodClosure((Method)PMethod15121, HEADER(Smalltalk_Parser_SmalltalkParser_Class));
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