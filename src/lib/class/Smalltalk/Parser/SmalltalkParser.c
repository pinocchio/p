#include <lib/class/Smalltalk/Parser/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParser_stream;
Optr layout_Smalltalk_Parser_SmalltalkParser;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
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
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14487 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14474, (Optr)PBlock14475);
    Array PThreadedCode14471 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14472, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14473, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14474, (Optr)&t_push_closure, (Optr)PBlock14475, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14487, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14468 = new_Block_with(PArray14469, PArray14470, PThreadedCode14471, 3, PAssign14472, PSend14487, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14488 = new_Send((Optr)PSuper14467, SMB_semantics_, 1, (Optr)PBlock14468);
    Array PThreadedCode14466 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14467, (Optr)&t_push_closure, (Optr)PBlock14468, (Optr)&t_send1, (Optr)PSend14488, (Optr)&t_method_return);
    Method PMethod14465 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14466, 1, PSend14488);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14465, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_createReference_() {
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    Variable VAR_path_0_0 = new_Variable_named(L"path", 0);
    Array PArray14554 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14555 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14558 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14560 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createReference_, MC_SMB_createReference_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14587 = new_Super(SMB_initialize, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend14590 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14589 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14590);
    Assign PAssign14588 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14589);
    Array PThreadedCode14586 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14587, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14588, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14590, (Optr)&t_send1, (Optr)PSend14589, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14585 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14586, 3, PSuper14587, PAssign14588, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14585, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    Super PSuper14602 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14604 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    Variable VAR_optionalAssignment_0_0 = new_Variable_named(L"optionalAssignment", 0);
    Variable VAR_isAssignment_0_1 = new_Variable_named(L"isAssignment", 0);
    Variable VAR_keywords_0_2 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_3 = new_Variable_named(L"arguments", 0);
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
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol  SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_at__Const = new_Constant((Optr)SMB_at_);
    // with:. 
    Send PSend14626 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14625 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14626, (Optr)&t_block_return);
    Block PBlock14624 = new_Block_with(empty_Array, empty_Array, PThreadedCode14625, 1, PSend14626);
    Symbol  SMB_put_ = new_Symbol(L"put:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_put__Const = new_Constant((Optr)SMB_put_);
    // with:with:. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
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
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
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
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend14674 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14658, (Optr)int_2_Const, (Optr)PBlock14659);
    Array PThreadedCode14655 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14656, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14657, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14658, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14659, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14674, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14652 = new_Block_with(PArray14653, PArray14654, PThreadedCode14655, 3, PAssign14656, PSend14674, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14675 = new_Send((Optr)PSuper14651, SMB_semantics_, 1, (Optr)PBlock14652);
    Array PThreadedCode14650 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14651, (Optr)&t_push_closure, (Optr)PBlock14652, (Optr)&t_send1, (Optr)PSend14675, (Optr)&t_method_return);
    Method PMethod14649 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14650, 1, PSend14675);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14649, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
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
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14735 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14737 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14739 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14743 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
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
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Variable VAR_vars_0_0 = new_Variable_named(L"vars", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray14776 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14778 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14780 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14783 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14782 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14783);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
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
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    Super PSuper14858 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14860 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14862 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_createVariable_() {
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createVariable_, MC_SMB_createVariable_);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
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
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14908 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14895, (Optr)PBlock14896);
    Array PThreadedCode14892 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14893, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14894, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14895, (Optr)&t_push_closure, (Optr)PBlock14896, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14908, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14889 = new_Block_with(PArray14890, PArray14891, PThreadedCode14892, 3, PAssign14893, PSend14908, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14909 = new_Send((Optr)PSuper14888, SMB_semantics_, 1, (Optr)PBlock14889);
    Array PThreadedCode14887 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14888, (Optr)&t_push_closure, (Optr)PBlock14889, (Optr)&t_send1, (Optr)PSend14909, (Optr)&t_method_return);
    Method PMethod14886 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14887, 1, PSend14909);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14886, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_parameters_0_2 = new_Variable_named(L"parameters", 0);
    Array PArray14936 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14938 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14940 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14944 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
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
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
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
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray15004 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper15006 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray15008 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15012 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
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
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    Super PSuper15087 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15089 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15091 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
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
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
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
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_class_SMB_match_in_() {
    Symbol SMB_match_in_ = new_Symbol(L"match:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
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