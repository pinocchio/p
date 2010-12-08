#include <lib/class/Smalltalk/Parser/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParser_stream;
Optr layout_Smalltalk_Parser_SmalltalkParser;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    Super PSuper14473 = new_Super(SMB_initializeUnaryMessageExpression, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14475 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14477 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14478 = new_Send((Optr)PSend14477, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14476 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14477, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14478, (Optr)&t_method_return);
    Block PBlock14474 = new_Block_with(PArray14475, empty_Array, PThreadedCode14476, 1, PSend14478);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14479 = new_Send((Optr)PSuper14473, SMB_semantics_, 1, (Optr)PBlock14474);
    Array PThreadedCode14472 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14473, (Optr)&t_push_closure, (Optr)PBlock14474, (Optr)&t_send1, (Optr)PSend14479, (Optr)&t_method_return);
    Method PMethod14471 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14472, 1, PSend14479);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod14471, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    Super PSuper14482 = new_Super(SMB_initializeUnarySelector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14484 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14485 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_method_return);
    Block PBlock14483 = new_Block_with(PArray14484, empty_Array, PThreadedCode14485, 1, VAR_selector_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14486 = new_Send((Optr)PSuper14482, SMB_semantics_, 1, (Optr)PBlock14483);
    Array PThreadedCode14481 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14482, (Optr)&t_push_closure, (Optr)PBlock14483, (Optr)&t_send1, (Optr)PSend14486, (Optr)&t_method_return);
    Method PMethod14480 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14481, 1, PSend14486);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod14480, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    Super PSuper14489 = new_Super(SMB_initializeNumber, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14491 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14494 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14496 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)VAR_result_1_0);
    String string_14497 = new_String(L"10");
    Symbol SMB_base_ = new_Symbol(L"base:");
    Constant string_14497_Const = new_Constant((Optr)string_14497);
    // base:. 
    Send PSend14498 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)string_14497_Const);
    Array PThreadedCode14495 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14496, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_14497, (Optr)&t_send1, (Optr)PSend14498, (Optr)&t_method_return);
    Block PBlock14493 = new_Block_with(PArray14494, empty_Array, PThreadedCode14495, 2, PSend14496, PSend14498);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14499 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14500 = new_Send((Optr)PBlock14493, SMB_value_, 1, (Optr)PSend14499);
    Array PThreadedCode14492 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14493, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14499, (Optr)&t_send1, (Optr)PSend14500, (Optr)&t_method_return);
    Block PBlock14490 = new_Block_with(PArray14491, empty_Array, PThreadedCode14492, 1, PSend14500);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14501 = new_Send((Optr)PSuper14489, SMB_semantics_, 1, (Optr)PBlock14490);
    Array PThreadedCode14488 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14489, (Optr)&t_push_closure, (Optr)PBlock14490, (Optr)&t_send1, (Optr)PSend14501, (Optr)&t_method_return);
    Method PMethod14487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14488, 1, PSend14501);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod14487, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    Super PSuper14504 = new_Super(SMB_initializeIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14506 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14508 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14507 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14508, (Optr)&t_method_return);
    Block PBlock14505 = new_Block_with(PArray14506, empty_Array, PThreadedCode14507, 1, PSend14508);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14509 = new_Send((Optr)PSuper14504, SMB_semantics_, 1, (Optr)PBlock14505);
    Array PThreadedCode14503 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14504, (Optr)&t_push_closure, (Optr)PBlock14505, (Optr)&t_send1, (Optr)PSend14509, (Optr)&t_method_return);
    Method PMethod14502 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14503, 1, PSend14509);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod14502, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    Super PSuper14512 = new_Super(SMB_initializeRadix, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14514 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14517 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14519 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend14520 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)PSend14519);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14521 = new_Send((Optr)VAR_result_1_0, SMB_second, 0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14522 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)PSend14521);
    Array PThreadedCode14518 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14519, (Optr)&t_send1, (Optr)PSend14520, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14521, (Optr)&t_send1, (Optr)PSend14522, (Optr)&t_method_return);
    Block PBlock14516 = new_Block_with(PArray14517, empty_Array, PThreadedCode14518, 2, PSend14520, PSend14522);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14523 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14524 = new_Send((Optr)PBlock14516, SMB_value_, 1, (Optr)PSend14523);
    Array PThreadedCode14515 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14516, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14523, (Optr)&t_send1, (Optr)PSend14524, (Optr)&t_method_return);
    Block PBlock14513 = new_Block_with(PArray14514, empty_Array, PThreadedCode14515, 1, PSend14524);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14525 = new_Send((Optr)PSuper14512, SMB_semantics_, 1, (Optr)PBlock14513);
    Array PThreadedCode14511 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14512, (Optr)&t_push_closure, (Optr)PBlock14513, (Optr)&t_send1, (Optr)PSend14525, (Optr)&t_method_return);
    Method PMethod14510 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14511, 1, PSend14525);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14510, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    Super PSuper14528 = new_Super(SMB_initializeUnaryObjectDescription, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14530 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14531 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14534 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14533 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14534);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14535 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14537 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14542 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14544 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14545 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14546 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14545);
    Array PThreadedCode14543 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14544, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14545, (Optr)&t_send1, (Optr)PSend14546, (Optr)&t_method_return);
    Block PBlock14541 = new_Block_with(PArray14542, empty_Array, PThreadedCode14543, 2, PSend14544, PSend14546);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14547 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14540 = new_Send((Optr)PBlock14541, SMB_value_, 1, (Optr)PSend14547);
    Assign PAssign14539 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14540);
    Array PThreadedCode14538 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14539, (Optr)&t_push_closure, (Optr)PBlock14541, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14547, (Optr)&t_send1, (Optr)PSend14540, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14536 = new_Block_with(PArray14537, empty_Array, PThreadedCode14538, 1, PAssign14539);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14548 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14535, (Optr)PBlock14536);
    Array PThreadedCode14532 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14533, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14534, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14535, (Optr)&t_push_closure, (Optr)PBlock14536, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14548, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14529 = new_Block_with(PArray14530, PArray14531, PThreadedCode14532, 3, PAssign14533, PSend14548, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14549 = new_Send((Optr)PSuper14528, SMB_semantics_, 1, (Optr)PBlock14529);
    Array PThreadedCode14527 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14528, (Optr)&t_push_closure, (Optr)PBlock14529, (Optr)&t_send1, (Optr)PSend14549, (Optr)&t_method_return);
    Method PMethod14526 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14527, 1, PSend14549);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14526, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    Super PSuper14552 = new_Super(SMB_initializeVariableName, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14554 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14556 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14555 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14556, (Optr)&t_method_return);
    Block PBlock14553 = new_Block_with(PArray14554, empty_Array, PThreadedCode14555, 1, PSend14556);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14557 = new_Send((Optr)PSuper14552, SMB_semantics_, 1, (Optr)PBlock14553);
    Array PThreadedCode14551 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14552, (Optr)&t_push_closure, (Optr)PBlock14553, (Optr)&t_send1, (Optr)PSend14557, (Optr)&t_method_return);
    Method PMethod14550 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14551, 1, PSend14557);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod14550, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    Super PSuper14560 = new_Super(SMB_initializeSymbolInArray, 0);
    Variable VAR_symbol_1_0 = new_Variable_named(L"symbol", 1);
    Array PArray14562 = new_Array_with(1, (Optr)VAR_symbol_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14564 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_symbol_1_0);
    Array PThreadedCode14563 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_symbol_1_0, (Optr)&t_send1, (Optr)PSend14564, (Optr)&t_method_return);
    Block PBlock14561 = new_Block_with(PArray14562, empty_Array, PThreadedCode14563, 1, PSend14564);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14565 = new_Send((Optr)PSuper14560, SMB_semantics_, 1, (Optr)PBlock14561);
    Array PThreadedCode14559 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14560, (Optr)&t_push_closure, (Optr)PBlock14561, (Optr)&t_send1, (Optr)PSend14565, (Optr)&t_method_return);
    Method PMethod14558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14559, 1, PSend14565);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14558, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    Super PSuper14568 = new_Super(SMB_initializeStatements, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14570 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend14572 = new_Send((Optr)VAR_result_1_0, SMB_removeLast, 0);
    Variable VAR_exp_2_0 = new_Variable_named(L"exp", 2);
    Array PArray14574 = new_Array_with(1, (Optr)VAR_exp_2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14576 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)VAR_exp_2_0);
    Array PThreadedCode14575 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_variable, (Optr)VAR_exp_2_0, (Optr)&t_send1, (Optr)PSend14576, (Optr)&t_method_return);
    Block PBlock14573 = new_Block_with(PArray14574, empty_Array, PThreadedCode14575, 1, PSend14576);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14577 = new_Send((Optr)PSend14572, SMB_ifMatched_, 1, (Optr)PBlock14573);
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend14578 = new_Send((Optr)VAR_result_1_0, SMB_asOrderedCollection, 0);
    Array PThreadedCode14571 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14572, (Optr)&t_push_closure, (Optr)PBlock14573, (Optr)&t_send1, (Optr)PSend14577, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14578, (Optr)&t_method_return);
    Block PBlock14569 = new_Block_with(PArray14570, empty_Array, PThreadedCode14571, 2, PSend14577, PSend14578);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14579 = new_Send((Optr)PSuper14568, SMB_semantics_, 1, (Optr)PBlock14569);
    Array PThreadedCode14567 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14568, (Optr)&t_push_closure, (Optr)PBlock14569, (Optr)&t_send1, (Optr)PSend14579, (Optr)&t_method_return);
    Method PMethod14566 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14567, 1, PSend14579);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14566, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    Super PSuper14582 = new_Super(SMB_initializeCapitalIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14584 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14586 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14585 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14586, (Optr)&t_method_return);
    Block PBlock14583 = new_Block_with(PArray14584, empty_Array, PThreadedCode14585, 1, PSend14586);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14587 = new_Send((Optr)PSuper14582, SMB_semantics_, 1, (Optr)PBlock14583);
    Array PThreadedCode14581 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14582, (Optr)&t_push_closure, (Optr)PBlock14583, (Optr)&t_send1, (Optr)PSend14587, (Optr)&t_method_return);
    Method PMethod14580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14581, 1, PSend14587);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod14580, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    Super PSuper14590 = new_Super(SMB_initializeSymbolConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14592 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14594 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14593 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14594, (Optr)&t_method_return);
    Block PBlock14591 = new_Block_with(PArray14592, empty_Array, PThreadedCode14593, 1, PSend14594);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14595 = new_Send((Optr)PSuper14590, SMB_semantics_, 1, (Optr)PBlock14591);
    Array PThreadedCode14589 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14590, (Optr)&t_push_closure, (Optr)PBlock14591, (Optr)&t_send1, (Optr)PSend14595, (Optr)&t_method_return);
    Method PMethod14588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14589, 1, PSend14595);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14588, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Super PSuper14598 = new_Super(SMB_initializeArray, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14600 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14602 = new_Send((Optr)ASTArray_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14603 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    // literals:. 
    Send PSend14604 = new_Send((Optr)PSend14602, SMB_literals_, 1, (Optr)PSend14603);
    Array PThreadedCode14601 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)ASTArray_classReference, (Optr)&t_send0, (Optr)PSend14602, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14603, (Optr)&t_send1, (Optr)PSend14604, (Optr)&t_method_return);
    Block PBlock14599 = new_Block_with(PArray14600, empty_Array, PThreadedCode14601, 1, PSend14604);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14605 = new_Send((Optr)PSuper14598, SMB_semantics_, 1, (Optr)PBlock14599);
    Array PThreadedCode14597 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14598, (Optr)&t_push_closure, (Optr)PBlock14599, (Optr)&t_send1, (Optr)PSend14605, (Optr)&t_method_return);
    Method PMethod14596 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14597, 1, PSend14605);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14596, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    Super PSuper14608 = new_Super(SMB_initializeBinarySelector, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14610 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14612 = new_Send((Optr)VAR_result_1_0, SMB_asSymbol, 0);
    Array PThreadedCode14611 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14612, (Optr)&t_method_return);
    Block PBlock14609 = new_Block_with(PArray14610, empty_Array, PThreadedCode14611, 1, PSend14612);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14613 = new_Send((Optr)PSuper14608, SMB_semantics_, 1, (Optr)PBlock14609);
    Array PThreadedCode14607 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14608, (Optr)&t_push_closure, (Optr)PBlock14609, (Optr)&t_send1, (Optr)PSend14613, (Optr)&t_method_return);
    Method PMethod14606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14607, 1, PSend14613);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod14606, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_createReference_() {
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    Variable VAR_path_0_0 = new_Variable_named(L"path", 0);
    Array PArray14615 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14616 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14619 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14621 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14622 = new_Send((Optr)PSend14621, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14627 = new_Send((Optr)VAR_path_0_0, SMB_first, 0);
    Assign PAssign14626 = new_Assign((Optr)VAR_name_0_1, (Optr)PSend14627);
    Symbol  SMB_self = new_Symbol(L"self");
    Constant SMB_self_Const = new_Constant((Optr)SMB_self);
    // =. 
    Send PSend14628 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_self_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14632 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14633 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14632);
    Array PThreadedCode14631 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend14632, (Optr)&t_send1, (Optr)PSend14633, (Optr)&t_block_return);
    Block PBlock14630 = new_Block_with(empty_Array, empty_Array, PThreadedCode14631, 1, PSend14633);
    // ifTrue:. 
    Send PSend14629 = new_Send((Optr)PSend14628, SMB_ifTrue_, 1, (Optr)PBlock14630);
    Symbol  SMB_super = new_Symbol(L"super");
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    // =. 
    Send PSend14634 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_super_Const);
    // new. 
    Send PSend14638 = new_Send((Optr)ASTSuper_classReference, SMB_new, 0);
    // escape:. 
    Send PSend14639 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14638);
    Array PThreadedCode14637 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send0, (Optr)PSend14638, (Optr)&t_send1, (Optr)PSend14639, (Optr)&t_block_return);
    Block PBlock14636 = new_Block_with(empty_Array, empty_Array, PThreadedCode14637, 1, PSend14639);
    // ifTrue:. 
    Send PSend14635 = new_Send((Optr)PSend14634, SMB_ifTrue_, 1, (Optr)PBlock14636);
    // new. 
    Send PSend14640 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14641 = new_Send((Optr)PSend14640, SMB_name_, 1, (Optr)VAR_name_0_1);
    // escape:. 
    Send PSend14642 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14641);
    Array PThreadedCode14625 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push1, (Optr)PAssign14626, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14627, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_self, (Optr)&t_send1, (Optr)PSend14628, (Optr)&t_send_ifTrue_, (Optr)PSend14629, (Optr)PBlock14630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_send1, (Optr)PSend14634, (Optr)&t_send_ifTrue_, (Optr)PSend14635, (Optr)PBlock14636, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14640, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_send1, (Optr)PSend14641, (Optr)&t_send1, (Optr)PSend14642, (Optr)&t_block_return);
    Block PBlock14624 = new_Block_with(empty_Array, empty_Array, PThreadedCode14625, 4, PAssign14626, PSend14629, PSend14635, PSend14642);
    // ifTrue:. 
    Send PSend14623 = new_Send((Optr)PSend14622, SMB_ifTrue_, 1, (Optr)PBlock14624);
    // new. 
    Send PSend14643 = new_Send((Optr)ASTPath_classReference, SMB_new, 0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend14644 = new_Send((Optr)PSend14643, SMB_path_, 1, (Optr)VAR_path_0_0);
    Array PThreadedCode14620 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14621, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14622, (Optr)&t_send_ifTrue_, (Optr)PSend14623, (Optr)PBlock14624, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)ASTPath_classReference, (Optr)&t_send0, (Optr)PSend14643, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send1, (Optr)PSend14644, (Optr)&t_method_return);
    Block PBlock14618 = new_Block_with(PArray14619, empty_Array, PThreadedCode14620, 2, PSend14623, PSend14644);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14645 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14618);
    Array PThreadedCode14617 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14618, (Optr)&t_send1, (Optr)PSend14645, (Optr)&t_method_return);
    Method PMethod14614 = new_Method_with(PArray14615, PArray14616, empty_Array, PThreadedCode14617, 1, PSend14645);
    
    MethodClosure MC_SMB_createReference_ = new_MethodClosure((Method)PMethod14614, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createReference_, MC_SMB_createReference_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14648 = new_Super(SMB_initialize, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend14651 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14650 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14651);
    Assign PAssign14649 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14650);
    Array PThreadedCode14647 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14648, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14649, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14651, (Optr)&t_send1, (Optr)PSend14650, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14646 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14647, 3, PSuper14648, PAssign14649, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14646, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    Super PSuper14654 = new_Super(SMB_initializeStringConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14656 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14658 = new_Send((Optr)ASTString_classReference, SMB_new, 0);
    Symbol SMB_string_ = new_Symbol(L"string:");
    // string:. 
    Send PSend14659 = new_Send((Optr)PSend14658, SMB_string_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14657 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTString_classReference, (Optr)&t_send0, (Optr)PSend14658, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14659, (Optr)&t_method_return);
    Block PBlock14655 = new_Block_with(PArray14656, empty_Array, PThreadedCode14657, 1, PSend14659);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14660 = new_Send((Optr)PSuper14654, SMB_semantics_, 1, (Optr)PBlock14655);
    Array PThreadedCode14653 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14654, (Optr)&t_push_closure, (Optr)PBlock14655, (Optr)&t_send1, (Optr)PSend14660, (Optr)&t_method_return);
    Method PMethod14652 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14653, 1, PSend14660);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod14652, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    Super PSuper14663 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14665 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14667 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14668 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14669 = new_Send((Optr)PSend14667, SMB_receiver_, 1, (Optr)PSend14668);
    Array PThreadedCode14666 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14667, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14668, (Optr)&t_send1, (Optr)PSend14669, (Optr)&t_method_return);
    Block PBlock14664 = new_Block_with(PArray14665, empty_Array, PThreadedCode14666, 1, PSend14669);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14670 = new_Send((Optr)PSuper14663, SMB_semantics_, 1, (Optr)PBlock14664);
    Array PThreadedCode14662 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14663, (Optr)&t_push_closure, (Optr)PBlock14664, (Optr)&t_send1, (Optr)PSend14670, (Optr)&t_method_return);
    Method PMethod14661 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14662, 1, PSend14670);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod14661, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    Variable VAR_optionalAssignment_0_0 = new_Variable_named(L"optionalAssignment", 0);
    Variable VAR_isAssignment_0_1 = new_Variable_named(L"isAssignment", 0);
    Variable VAR_keywords_0_2 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_3 = new_Variable_named(L"arguments", 0);
    Array PArray14672 = new_Array_with(4, (Optr)VAR_optionalAssignment_0_0, (Optr)VAR_isAssignment_0_1, (Optr)VAR_keywords_0_2, (Optr)VAR_arguments_0_3);
    Super PSuper14674 = new_Super(SMB_initializeBracketIndexExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14676 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14679 = new_Send((Optr)VAR_parts_1_0, SMB_second, 0);
    Assign PAssign14678 = new_Assign((Optr)VAR_optionalAssignment_0_0, (Optr)PSend14679);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend14682 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend14681 = new_Send((Optr)PSend14682, SMB__pequals_, 1, (Optr)PEGSucceededOptionalResult_classReference);
    Assign PAssign14680 = new_Assign((Optr)VAR_isAssignment_0_1, (Optr)PSend14681);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol  SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_at__Const = new_Constant((Optr)SMB_at_);
    // with:. 
    Send PSend14687 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14686 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14687, (Optr)&t_block_return);
    Block PBlock14685 = new_Block_with(empty_Array, empty_Array, PThreadedCode14686, 1, PSend14687);
    Symbol  SMB_put_ = new_Symbol(L"put:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_put__Const = new_Constant((Optr)SMB_put_);
    // with:with:. 
    Send PSend14690 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_at__Const, (Optr)SMB_put__Const);
    Array PThreadedCode14689 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_push1, (Optr)SMB_put_, (Optr)&t_send2, (Optr)PSend14690, (Optr)&t_block_return);
    Block PBlock14688 = new_Block_with(empty_Array, empty_Array, PThreadedCode14689, 1, PSend14690);
    // ifFalse:ifTrue:. 
    Send PSend14684 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14685, (Optr)PBlock14688);
    Assign PAssign14683 = new_Assign((Optr)VAR_keywords_0_2, (Optr)PSend14684);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14695 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    // with:. 
    Send PSend14696 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend14695);
    Array PThreadedCode14694 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14695, (Optr)&t_send1, (Optr)PSend14696, (Optr)&t_block_return);
    Block PBlock14693 = new_Block_with(empty_Array, empty_Array, PThreadedCode14694, 1, PSend14696);
    // first. 
    Send PSend14699 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_result = new_Symbol(L"result");
    // result. 
    Send PSend14700 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_result, 0);
    // with:with:. 
    Send PSend14701 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend14699, (Optr)PSend14700);
    Array PThreadedCode14698 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14699, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14700, (Optr)&t_send2, (Optr)PSend14701, (Optr)&t_block_return);
    Block PBlock14697 = new_Block_with(empty_Array, empty_Array, PThreadedCode14698, 1, PSend14701);
    // ifFalse:ifTrue:. 
    Send PSend14692 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14693, (Optr)PBlock14697);
    Assign PAssign14691 = new_Assign((Optr)VAR_arguments_0_3, (Optr)PSend14692);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14703 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14705 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_2);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14706 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_3);
    Array PThreadedCode14704 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_2, (Optr)&t_send1, (Optr)PSend14705, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_3, (Optr)&t_send1, (Optr)PSend14706, (Optr)&t_method_return);
    Block PBlock14702 = new_Block_with(PArray14703, empty_Array, PThreadedCode14704, 2, PSend14705, PSend14706);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14707 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14708 = new_Send((Optr)PBlock14702, SMB_value_, 1, (Optr)PSend14707);
    Array PThreadedCode14677 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14678, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14679, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14680, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14682, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14681, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14683, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14684, (Optr)PBlock14685, (Optr)PBlock14688, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14691, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14692, (Optr)PBlock14693, (Optr)PBlock14697, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14702, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14707, (Optr)&t_send1, (Optr)PSend14708, (Optr)&t_method_return);
    Block PBlock14675 = new_Block_with(PArray14676, empty_Array, PThreadedCode14677, 5, PAssign14678, PAssign14680, PAssign14683, PAssign14691, PSend14708);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14709 = new_Send((Optr)PSuper14674, SMB_semantics_, 1, (Optr)PBlock14675);
    Array PThreadedCode14673 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14674, (Optr)&t_push_closure, (Optr)PBlock14675, (Optr)&t_send1, (Optr)PSend14709, (Optr)&t_method_return);
    Method PMethod14671 = new_Method_with(empty_Array, PArray14672, empty_Array, PThreadedCode14673, 1, PSend14709);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod14671, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Super PSuper14712 = new_Super(SMB_initializeBinaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14714 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14715 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14718 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14717 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14718);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14719 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14721 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14726 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14728 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14729 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14730 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14729);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend14731 = new_Send((Optr)VAR_i_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend14732 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14731);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14733 = new_Send((Optr)VAR__receiver__3_0, SMB_argument_, 1, (Optr)PSend14732);
    Array PThreadedCode14727 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14728, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14729, (Optr)&t_send1, (Optr)PSend14730, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14731, (Optr)&t_send1, (Optr)PSend14732, (Optr)&t_send1, (Optr)PSend14733, (Optr)&t_method_return);
    Block PBlock14725 = new_Block_with(PArray14726, empty_Array, PThreadedCode14727, 3, PSend14728, PSend14730, PSend14733);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14734 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14724 = new_Send((Optr)PBlock14725, SMB_value_, 1, (Optr)PSend14734);
    Assign PAssign14723 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14724);
    Array PThreadedCode14722 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14723, (Optr)&t_push_closure, (Optr)PBlock14725, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14734, (Optr)&t_send1, (Optr)PSend14724, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14720 = new_Block_with(PArray14721, empty_Array, PThreadedCode14722, 1, PAssign14723);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend14735 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14719, (Optr)int_2_Const, (Optr)PBlock14720);
    Array PThreadedCode14716 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14717, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14718, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14719, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14720, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14735, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14713 = new_Block_with(PArray14714, PArray14715, PThreadedCode14716, 3, PAssign14717, PSend14735, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14736 = new_Send((Optr)PSuper14712, SMB_semantics_, 1, (Optr)PBlock14713);
    Array PThreadedCode14711 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14712, (Optr)&t_push_closure, (Optr)PBlock14713, (Optr)&t_send1, (Optr)PSend14736, (Optr)&t_method_return);
    Method PMethod14710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14711, 1, PSend14736);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14710, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    Super PSuper14739 = new_Super(SMB_initializeScopedExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14741 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_scoped = new_Symbol(L"scoped");
    // scoped. 
    Send PSend14743 = new_Send((Optr)VAR_result_1_0, SMB_scoped, 0);
    Array PThreadedCode14742 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14743, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_method_return);
    Block PBlock14740 = new_Block_with(PArray14741, empty_Array, PThreadedCode14742, 2, PSend14743, VAR_result_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14744 = new_Send((Optr)PSuper14739, SMB_semantics_, 1, (Optr)PBlock14740);
    Array PThreadedCode14738 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14739, (Optr)&t_push_closure, (Optr)PBlock14740, (Optr)&t_send1, (Optr)PSend14744, (Optr)&t_method_return);
    Method PMethod14737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14738, 1, PSend14744);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod14737, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    Super PSuper14747 = new_Super(SMB_initializeCharacterConstant, 0);
    Variable VAR_char_1_0 = new_Variable_named(L"char", 1);
    Array PArray14749 = new_Array_with(1, (Optr)VAR_char_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14751 = new_Send((Optr)ASTCharacter_classReference, SMB_new, 0);
    Symbol SMB_char_ = new_Symbol(L"char:");
    // char:. 
    Send PSend14752 = new_Send((Optr)PSend14751, SMB_char_, 1, (Optr)VAR_char_1_0);
    Array PThreadedCode14750 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTCharacter_classReference, (Optr)&t_send0, (Optr)PSend14751, (Optr)&t_push_variable, (Optr)VAR_char_1_0, (Optr)&t_send1, (Optr)PSend14752, (Optr)&t_method_return);
    Block PBlock14748 = new_Block_with(PArray14749, empty_Array, PThreadedCode14750, 1, PSend14752);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14753 = new_Send((Optr)PSuper14747, SMB_semantics_, 1, (Optr)PBlock14748);
    Array PThreadedCode14746 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14747, (Optr)&t_push_closure, (Optr)PBlock14748, (Optr)&t_send1, (Optr)PSend14753, (Optr)&t_method_return);
    Method PMethod14745 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14746, 1, PSend14753);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod14745, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    Super PSuper14756 = new_Super(SMB_initializeNumberFormat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14758 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14760 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14759 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14760, (Optr)&t_method_return);
    Block PBlock14757 = new_Block_with(PArray14758, empty_Array, PThreadedCode14759, 1, PSend14760);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14761 = new_Send((Optr)PSuper14756, SMB_semantics_, 1, (Optr)PBlock14757);
    Array PThreadedCode14755 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14756, (Optr)&t_push_closure, (Optr)PBlock14757, (Optr)&t_send1, (Optr)PSend14761, (Optr)&t_method_return);
    Method PMethod14754 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14755, 1, PSend14761);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod14754, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    Super PSuper14764 = new_Super(SMB_initializeMethod, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14766 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14769 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14771 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend14772 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)PSend14771);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14773 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend14774 = new_Send((Optr)VAR__receiver__2_0, SMB_annotations_, 1, (Optr)PSend14773);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14775 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14778 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14777 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14778, (Optr)&t_block_return);
    Block PBlock14776 = new_Block_with(empty_Array, empty_Array, PThreadedCode14777, 1, PSend14778);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14779 = new_Send((Optr)PSend14775, SMB_resultIfFailed_, 1, (Optr)PBlock14776);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14780 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14779);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend14781 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14782 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14781);
    Array PThreadedCode14770 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14771, (Optr)&t_send1, (Optr)PSend14772, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14773, (Optr)&t_send1, (Optr)PSend14774, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14775, (Optr)&t_push_closure, (Optr)PBlock14776, (Optr)&t_send1, (Optr)PSend14779, (Optr)&t_send1, (Optr)PSend14780, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend14781, (Optr)&t_send1, (Optr)PSend14782, (Optr)&t_method_return);
    Block PBlock14768 = new_Block_with(PArray14769, empty_Array, PThreadedCode14770, 4, PSend14772, PSend14774, PSend14780, PSend14782);
    // new. 
    Send PSend14783 = new_Send((Optr)ASTMethod_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14784 = new_Send((Optr)PBlock14768, SMB_value_, 1, (Optr)PSend14783);
    Array PThreadedCode14767 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14768, (Optr)&t_push_class_reference, (Optr)ASTMethod_classReference, (Optr)&t_send0, (Optr)PSend14783, (Optr)&t_send1, (Optr)PSend14784, (Optr)&t_method_return);
    Block PBlock14765 = new_Block_with(PArray14766, empty_Array, PThreadedCode14767, 1, PSend14784);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14785 = new_Send((Optr)PSuper14764, SMB_semantics_, 1, (Optr)PBlock14765);
    Array PThreadedCode14763 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14764, (Optr)&t_push_closure, (Optr)PBlock14765, (Optr)&t_send1, (Optr)PSend14785, (Optr)&t_method_return);
    Method PMethod14762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14763, 1, PSend14785);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod14762, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    Super PSuper14788 = new_Super(SMB_initializeUnaryMessageDefinition, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14790 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14792 = new_Send((Optr)ASTUnaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14793 = new_Send((Optr)PSend14792, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14791 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14792, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14793, (Optr)&t_method_return);
    Block PBlock14789 = new_Block_with(PArray14790, empty_Array, PThreadedCode14791, 1, PSend14793);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14794 = new_Send((Optr)PSuper14788, SMB_semantics_, 1, (Optr)PBlock14789);
    Array PThreadedCode14787 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14788, (Optr)&t_push_closure, (Optr)PBlock14789, (Optr)&t_send1, (Optr)PSend14794, (Optr)&t_method_return);
    Method PMethod14786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14787, 1, PSend14794);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod14786, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14796 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14798 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14800 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14804 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14803 = new_Send((Optr)PSend14804, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14802 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14803);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14806 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14805 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14806);
    // new:. 
    Send PSend14808 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14807 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14808);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14810 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14812 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14813 = new_Send((Optr)PSend14812, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14814 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14813);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14815 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14814);
    // *. 
    Send PSend14816 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14817 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14816);
    // at:put:. 
    Send PSend14818 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14817);
    Array PThreadedCode14811 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14812, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14813, (Optr)&t_send1, (Optr)PSend14814, (Optr)&t_send2, (Optr)PSend14815, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14816, (Optr)&t_send1, (Optr)PSend14817, (Optr)&t_send2, (Optr)PSend14818, (Optr)&t_method_return);
    Block PBlock14809 = new_Block_with(PArray14810, empty_Array, PThreadedCode14811, 2, PSend14815, PSend14818);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14819 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14809);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14821 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14823 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14824 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14822 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14823, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14824, (Optr)&t_method_return);
    Block PBlock14820 = new_Block_with(PArray14821, empty_Array, PThreadedCode14822, 2, PSend14823, PSend14824);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14825 = new_Send((Optr)ASTKeywordAnnotation_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14826 = new_Send((Optr)PBlock14820, SMB_value_, 1, (Optr)PSend14825);
    Array PThreadedCode14801 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14802, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14804, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14803, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14805, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14806, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14807, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14808, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14809, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14819, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14820, (Optr)&t_push_class_reference, (Optr)ASTKeywordAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14825, (Optr)&t_send1, (Optr)PSend14826, (Optr)&t_method_return);
    Block PBlock14799 = new_Block_with(PArray14800, empty_Array, PThreadedCode14801, 5, PAssign14802, PAssign14805, PAssign14807, PSend14819, PSend14826);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14827 = new_Send((Optr)PSuper14798, SMB_semantics_, 1, (Optr)PBlock14799);
    Array PThreadedCode14797 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14798, (Optr)&t_push_closure, (Optr)PBlock14799, (Optr)&t_send1, (Optr)PSend14827, (Optr)&t_method_return);
    Method PMethod14795 = new_Method_with(empty_Array, PArray14796, empty_Array, PThreadedCode14797, 1, PSend14827);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14795, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    Super PSuper14830 = new_Super(SMB_initializeKeyword, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14832 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14834 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14833 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14834, (Optr)&t_method_return);
    Block PBlock14831 = new_Block_with(PArray14832, empty_Array, PThreadedCode14833, 1, PSend14834);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14835 = new_Send((Optr)PSuper14830, SMB_semantics_, 1, (Optr)PBlock14831);
    Array PThreadedCode14829 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14830, (Optr)&t_push_closure, (Optr)PBlock14831, (Optr)&t_send1, (Optr)PSend14835, (Optr)&t_method_return);
    Method PMethod14828 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14829, 1, PSend14835);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod14828, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Variable VAR_vars_0_0 = new_Variable_named(L"vars", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray14837 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14839 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14841 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14844 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14843 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14844);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14846 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign14845 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14846);
    Variable VAR_variables_2_0 = new_Variable_named(L"variables", 2);
    Array PArray14848 = new_Array_with(1, (Optr)VAR_variables_2_0);
    Variable VAR_variable_3_0 = new_Variable_named(L"variable", 3);
    Array PArray14851 = new_Array_with(1, (Optr)VAR_variable_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray14856 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14858 = new_Send((Optr)VAR__receiver__4_0, SMB_expression_, 1, (Optr)VAR_expression_0_1);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend14859 = new_Send((Optr)VAR__receiver__4_0, SMB_variable_, 1, (Optr)VAR_variable_3_0);
    Array PThreadedCode14857 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend14858, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_variable_3_0, (Optr)&t_send1, (Optr)PSend14859, (Optr)&t_method_return);
    Block PBlock14855 = new_Block_with(PArray14856, empty_Array, PThreadedCode14857, 2, PSend14858, PSend14859);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14860 = new_Send((Optr)ASTAssignmentExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14854 = new_Send((Optr)PBlock14855, SMB_value_, 1, (Optr)PSend14860);
    Assign PAssign14853 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14854);
    Array PThreadedCode14852 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14853, (Optr)&t_push_closure, (Optr)PBlock14855, (Optr)&t_push_class_reference, (Optr)ASTAssignmentExpression_classReference, (Optr)&t_send0, (Optr)PSend14860, (Optr)&t_send1, (Optr)PSend14854, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14850 = new_Block_with(PArray14851, empty_Array, PThreadedCode14852, 1, PAssign14853);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend14861 = new_Send((Optr)VAR_variables_2_0, SMB_reverseDo_, 1, (Optr)PBlock14850);
    Array PThreadedCode14849 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_variables_2_0, (Optr)&t_push_closure, (Optr)PBlock14850, (Optr)&t_send1, (Optr)PSend14861, (Optr)&t_method_return);
    Block PBlock14847 = new_Block_with(PArray14848, empty_Array, PThreadedCode14849, 1, PSend14861);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14862 = new_Send((Optr)VAR_vars_0_0, SMB_ifMatched_, 1, (Optr)PBlock14847);
    Array PThreadedCode14842 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign14843, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14844, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14845, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14846, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_vars_0_0, (Optr)&t_push_closure, (Optr)PBlock14847, (Optr)&t_send1, (Optr)PSend14862, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_method_return);
    Block PBlock14840 = new_Block_with(PArray14841, empty_Array, PThreadedCode14842, 4, PAssign14843, PAssign14845, PSend14862, VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14863 = new_Send((Optr)PSuper14839, SMB_semantics_, 1, (Optr)PBlock14840);
    Array PThreadedCode14838 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14839, (Optr)&t_push_closure, (Optr)PBlock14840, (Optr)&t_send1, (Optr)PSend14863, (Optr)&t_method_return);
    Method PMethod14836 = new_Method_with(empty_Array, PArray14837, empty_Array, PThreadedCode14838, 1, PSend14863);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14836, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    Super PSuper14866 = new_Super(SMB_initializeFloat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14868 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14871 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14873 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_high_ = new_Symbol(L"high:");
    // high:. 
    Send PSend14874 = new_Send((Optr)VAR__receiver__2_0, SMB_high_, 1, (Optr)PSend14873);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14875 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Symbol SMB_low_ = new_Symbol(L"low:");
    // low:. 
    Send PSend14876 = new_Send((Optr)VAR__receiver__2_0, SMB_low_, 1, (Optr)PSend14875);
    Array PThreadedCode14872 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14873, (Optr)&t_send1, (Optr)PSend14874, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14875, (Optr)&t_send1, (Optr)PSend14876, (Optr)&t_method_return);
    Block PBlock14870 = new_Block_with(PArray14871, empty_Array, PThreadedCode14872, 2, PSend14874, PSend14876);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14877 = new_Send((Optr)ASTFloat_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14878 = new_Send((Optr)PBlock14870, SMB_value_, 1, (Optr)PSend14877);
    Array PThreadedCode14869 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14870, (Optr)&t_push_class_reference, (Optr)ASTFloat_classReference, (Optr)&t_send0, (Optr)PSend14877, (Optr)&t_send1, (Optr)PSend14878, (Optr)&t_method_return);
    Block PBlock14867 = new_Block_with(PArray14868, empty_Array, PThreadedCode14869, 1, PSend14878);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14879 = new_Send((Optr)PSuper14866, SMB_semantics_, 1, (Optr)PBlock14867);
    Array PThreadedCode14865 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14866, (Optr)&t_push_closure, (Optr)PBlock14867, (Optr)&t_send1, (Optr)PSend14879, (Optr)&t_method_return);
    Method PMethod14864 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14865, 1, PSend14879);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14864, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    Super PSuper14882 = new_Super(SMB_initializeBlockArguments, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14884 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR_variable_2_0 = new_Variable_named(L"variable", 2);
    Array PArray14887 = new_Array_with(1, (Optr)VAR_variable_2_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14889 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_variable_2_0);
    Array PThreadedCode14888 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_variable_2_0, (Optr)&t_send1, (Optr)PSend14889, (Optr)&t_method_return);
    Block PBlock14886 = new_Block_with(PArray14887, empty_Array, PThreadedCode14888, 1, PSend14889);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend14890 = new_Send((Optr)VAR_result_1_0, SMB_collect_, 1, (Optr)PBlock14886);
    Array PThreadedCode14885 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_closure, (Optr)PBlock14886, (Optr)&t_send1, (Optr)PSend14890, (Optr)&t_method_return);
    Block PBlock14883 = new_Block_with(PArray14884, empty_Array, PThreadedCode14885, 1, PSend14890);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14891 = new_Send((Optr)PSuper14882, SMB_semantics_, 1, (Optr)PBlock14883);
    Array PThreadedCode14881 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14882, (Optr)&t_push_closure, (Optr)PBlock14883, (Optr)&t_send1, (Optr)PSend14891, (Optr)&t_method_return);
    Method PMethod14880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14881, 1, PSend14891);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14880, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    Super PSuper14894 = new_Super(SMB_initializeBraceExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14896 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14898 = new_Send((Optr)ASTBraceExpression_classReference, SMB_new, 0);
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    // expressions:. 
    Send PSend14899 = new_Send((Optr)PSend14898, SMB_expressions_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14897 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTBraceExpression_classReference, (Optr)&t_send0, (Optr)PSend14898, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14899, (Optr)&t_method_return);
    Block PBlock14895 = new_Block_with(PArray14896, empty_Array, PThreadedCode14897, 1, PSend14899);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14900 = new_Send((Optr)PSuper14894, SMB_semantics_, 1, (Optr)PBlock14895);
    Array PThreadedCode14893 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14894, (Optr)&t_push_closure, (Optr)PBlock14895, (Optr)&t_send1, (Optr)PSend14900, (Optr)&t_method_return);
    Method PMethod14892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14893, 1, PSend14900);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14892, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    Super PSuper14903 = new_Super(SMB_initializeBinaryMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14905 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14908 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14910 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14911 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14910);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14912 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14913 = new_Send((Optr)VAR__receiver__2_0, SMB_argument_, 1, (Optr)PSend14912);
    Array PThreadedCode14909 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14910, (Optr)&t_send1, (Optr)PSend14911, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14912, (Optr)&t_send1, (Optr)PSend14913, (Optr)&t_method_return);
    Block PBlock14907 = new_Block_with(PArray14908, empty_Array, PThreadedCode14909, 2, PSend14911, PSend14913);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14914 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14915 = new_Send((Optr)PBlock14907, SMB_value_, 1, (Optr)PSend14914);
    Array PThreadedCode14906 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14907, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14914, (Optr)&t_send1, (Optr)PSend14915, (Optr)&t_method_return);
    Block PBlock14904 = new_Block_with(PArray14905, empty_Array, PThreadedCode14906, 1, PSend14915);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14916 = new_Send((Optr)PSuper14903, SMB_semantics_, 1, (Optr)PBlock14904);
    Array PThreadedCode14902 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14903, (Optr)&t_push_closure, (Optr)PBlock14904, (Optr)&t_send1, (Optr)PSend14916, (Optr)&t_method_return);
    Method PMethod14901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14902, 1, PSend14916);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14901, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    Super PSuper14919 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14921 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14923 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend14924 = new_Send((Optr)PSend14923, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_14928 = new_String(L"");
    Array PThreadedCode14927 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_14928, (Optr)&t_block_return);
    Constant string_14928_Const = new_Constant((Optr)string_14928);
    Block PBlock14926 = new_Block_with(empty_Array, empty_Array, PThreadedCode14927, 1, string_14928_Const);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14931 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend14932 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_with_, 1, (Optr)PSend14931);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Variable VAR_i_2_1 = new_Variable_named(L"i", 2);
    Array PArray14934 = new_Array_with(2, (Optr)VAR_s_2_0, (Optr)VAR_i_2_1);
    String string_14936 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_14936_Const = new_Constant((Optr)string_14936);
    // <<. 
    Send PSend14937 = new_Send((Optr)VAR_s_2_0, SMB__shiftLeft_, 1, (Optr)string_14936_Const);
    // <<. 
    Send PSend14938 = new_Send((Optr)PSend14937, SMB__shiftLeft_, 1, (Optr)VAR_i_2_1);
    Array PThreadedCode14935 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)string_14936, (Optr)&t_send1, (Optr)PSend14937, (Optr)&t_push_variable, (Optr)VAR_i_2_1, (Optr)&t_send1, (Optr)PSend14938, (Optr)&t_method_return);
    Block PBlock14933 = new_Block_with(PArray14934, empty_Array, PThreadedCode14935, 1, PSend14938);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14939 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14932, (Optr)PBlock14933);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14940 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14930 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14931, (Optr)&t_send1, (Optr)PSend14932, (Optr)&t_push_closure, (Optr)PBlock14933, (Optr)&t_send2, (Optr)PSend14939, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14940, (Optr)&t_block_return);
    Block PBlock14929 = new_Block_with(empty_Array, empty_Array, PThreadedCode14930, 2, PSend14939, PSend14940);
    // ifTrue:ifFalse:. 
    Send PSend14925 = new_Send((Optr)PSend14924, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock14926, (Optr)PBlock14929);
    Array PThreadedCode14922 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14923, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend14924, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend14925, (Optr)PBlock14926, (Optr)PBlock14929, (Optr)&t_method_return);
    Block PBlock14920 = new_Block_with(PArray14921, empty_Array, PThreadedCode14922, 1, PSend14925);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14941 = new_Send((Optr)PSuper14919, SMB_semantics_, 1, (Optr)PBlock14920);
    Array PThreadedCode14918 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14919, (Optr)&t_push_closure, (Optr)PBlock14920, (Optr)&t_send1, (Optr)PSend14941, (Optr)&t_method_return);
    Method PMethod14917 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14918, 1, PSend14941);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14917, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_createVariable_() {
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
    Array PArray14943 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14945 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14946 = new_Send((Optr)PSend14945, SMB_name_, 1, (Optr)VAR_variable_0_0);
    Array PThreadedCode14944 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14945, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send1, (Optr)PSend14946, (Optr)&t_method_return);
    Method PMethod14942 = new_Method_with(PArray14943, empty_Array, empty_Array, PThreadedCode14944, 1, PSend14946);
    
    MethodClosure MC_SMB_createVariable_ = new_MethodClosure((Method)PMethod14942, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createVariable_, MC_SMB_createVariable_);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    Super PSuper14949 = new_Super(SMB_initializeUnaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14951 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14952 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14955 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14954 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14955);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14956 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14958 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14963 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14965 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14966 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14967 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14966);
    Array PThreadedCode14964 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14965, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14966, (Optr)&t_send1, (Optr)PSend14967, (Optr)&t_method_return);
    Block PBlock14962 = new_Block_with(PArray14963, empty_Array, PThreadedCode14964, 2, PSend14965, PSend14967);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14968 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14961 = new_Send((Optr)PBlock14962, SMB_value_, 1, (Optr)PSend14968);
    Assign PAssign14960 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14961);
    Array PThreadedCode14959 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14960, (Optr)&t_push_closure, (Optr)PBlock14962, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14968, (Optr)&t_send1, (Optr)PSend14961, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14957 = new_Block_with(PArray14958, empty_Array, PThreadedCode14959, 1, PAssign14960);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14969 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14956, (Optr)PBlock14957);
    Array PThreadedCode14953 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14954, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14955, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14956, (Optr)&t_push_closure, (Optr)PBlock14957, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14969, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14950 = new_Block_with(PArray14951, PArray14952, PThreadedCode14953, 3, PAssign14954, PSend14969, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14970 = new_Send((Optr)PSuper14949, SMB_semantics_, 1, (Optr)PBlock14950);
    Array PThreadedCode14948 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14949, (Optr)&t_push_closure, (Optr)PBlock14950, (Optr)&t_send1, (Optr)PSend14970, (Optr)&t_method_return);
    Method PMethod14947 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14948, 1, PSend14970);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14947, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    Super PSuper14973 = new_Super(SMB_initializeAnnotations, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14975 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14977 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14976 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14977, (Optr)&t_method_return);
    Block PBlock14974 = new_Block_with(PArray14975, empty_Array, PThreadedCode14976, 1, PSend14977);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14978 = new_Send((Optr)PSuper14973, SMB_semantics_, 1, (Optr)PBlock14974);
    Array PThreadedCode14972 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14973, (Optr)&t_push_closure, (Optr)PBlock14974, (Optr)&t_send1, (Optr)PSend14978, (Optr)&t_method_return);
    Method PMethod14971 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14972, 1, PSend14978);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14971, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    Super PSuper14981 = new_Super(SMB_initializePrimaryVariable, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14983 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14985 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    // createReference:. 
    Send PSend14986 = new_Send((Optr)self, SMB_createReference_, 1, (Optr)PSend14985);
    Array PThreadedCode14984 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14985, (Optr)&t_send1, (Optr)PSend14986, (Optr)&t_method_return);
    Block PBlock14982 = new_Block_with(PArray14983, empty_Array, PThreadedCode14984, 1, PSend14986);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14987 = new_Send((Optr)PSuper14981, SMB_semantics_, 1, (Optr)PBlock14982);
    Array PThreadedCode14980 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14981, (Optr)&t_push_closure, (Optr)PBlock14982, (Optr)&t_send1, (Optr)PSend14987, (Optr)&t_method_return);
    Method PMethod14979 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14980, 1, PSend14987);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod14979, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Super PSuper14990 = new_Super(SMB_initializeStringSegment, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14992 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14994 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14993 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14994, (Optr)&t_method_return);
    Block PBlock14991 = new_Block_with(PArray14992, empty_Array, PThreadedCode14993, 1, PSend14994);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14995 = new_Send((Optr)PSuper14990, SMB_semantics_, 1, (Optr)PBlock14991);
    Array PThreadedCode14989 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14990, (Optr)&t_push_closure, (Optr)PBlock14991, (Optr)&t_send1, (Optr)PSend14995, (Optr)&t_method_return);
    Method PMethod14988 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14989, 1, PSend14995);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14988, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_parameters_0_2 = new_Variable_named(L"parameters", 0);
    Array PArray14997 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14999 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray15001 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15005 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend15004 = new_Send((Optr)PSend15005, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign15003 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend15004);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend15007 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign15006 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend15007);
    // new:. 
    Send PSend15009 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign15008 = new_Assign((Optr)VAR_parameters_0_2, (Optr)PSend15009);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray15011 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend15013 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend15014 = new_Send((Optr)PSend15013, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15015 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend15014);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend15016 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend15015);
    // *. 
    Send PSend15017 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend15018 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend15017);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend15019 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend15018);
    // at:put:. 
    Send PSend15020 = new_Send((Optr)VAR_parameters_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend15019);
    Array PThreadedCode15012 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15013, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15014, (Optr)&t_send1, (Optr)PSend15015, (Optr)&t_send2, (Optr)PSend15016, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15017, (Optr)&t_send1, (Optr)PSend15018, (Optr)&t_send1, (Optr)PSend15019, (Optr)&t_send2, (Optr)PSend15020, (Optr)&t_method_return);
    Block PBlock15010 = new_Block_with(PArray15011, empty_Array, PThreadedCode15012, 2, PSend15016, PSend15020);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend15021 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock15010);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15023 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend15025 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend15026 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)VAR_parameters_0_2);
    Array PThreadedCode15024 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend15025, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_send1, (Optr)PSend15026, (Optr)&t_method_return);
    Block PBlock15022 = new_Block_with(PArray15023, empty_Array, PThreadedCode15024, 2, PSend15025, PSend15026);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15027 = new_Send((Optr)ASTKeywordMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15028 = new_Send((Optr)PBlock15022, SMB_value_, 1, (Optr)PSend15027);
    Array PThreadedCode15002 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign15003, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15005, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15004, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15006, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend15007, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15008, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend15009, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock15010, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend15021, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15022, (Optr)&t_push_class_reference, (Optr)ASTKeywordMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend15027, (Optr)&t_send1, (Optr)PSend15028, (Optr)&t_method_return);
    Block PBlock15000 = new_Block_with(PArray15001, empty_Array, PThreadedCode15002, 5, PAssign15003, PAssign15006, PAssign15008, PSend15021, PSend15028);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15029 = new_Send((Optr)PSuper14999, SMB_semantics_, 1, (Optr)PBlock15000);
    Array PThreadedCode14998 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14999, (Optr)&t_push_closure, (Optr)PBlock15000, (Optr)&t_send1, (Optr)PSend15029, (Optr)&t_method_return);
    Method PMethod14996 = new_Method_with(empty_Array, PArray14997, empty_Array, PThreadedCode14998, 1, PSend15029);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod14996, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    Super PSuper15032 = new_Super(SMB_initializeBinaryMessageDefinition, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15034 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15037 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend15039 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend15040 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend15039);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend15041 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend15042 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend15041);
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    // parameter:. 
    Send PSend15043 = new_Send((Optr)VAR__receiver__2_0, SMB_parameter_, 1, (Optr)PSend15042);
    Array PThreadedCode15038 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15039, (Optr)&t_send1, (Optr)PSend15040, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15041, (Optr)&t_send1, (Optr)PSend15042, (Optr)&t_send1, (Optr)PSend15043, (Optr)&t_method_return);
    Block PBlock15036 = new_Block_with(PArray15037, empty_Array, PThreadedCode15038, 2, PSend15040, PSend15043);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15044 = new_Send((Optr)ASTBinaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15045 = new_Send((Optr)PBlock15036, SMB_value_, 1, (Optr)PSend15044);
    Array PThreadedCode15035 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock15036, (Optr)&t_push_class_reference, (Optr)ASTBinaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend15044, (Optr)&t_send1, (Optr)PSend15045, (Optr)&t_method_return);
    Block PBlock15033 = new_Block_with(PArray15034, empty_Array, PThreadedCode15035, 1, PSend15045);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15046 = new_Send((Optr)PSuper15032, SMB_semantics_, 1, (Optr)PBlock15033);
    Array PThreadedCode15031 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15032, (Optr)&t_push_closure, (Optr)PBlock15033, (Optr)&t_send1, (Optr)PSend15046, (Optr)&t_method_return);
    Method PMethod15030 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15031, 1, PSend15046);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod15030, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    Super PSuper15049 = new_Super(SMB_initializeReturn, 0);
    Variable VAR_expression_1_0 = new_Variable_named(L"expression", 1);
    Array PArray15051 = new_Array_with(1, (Optr)VAR_expression_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15053 = new_Send((Optr)ASTReturnExpression_classReference, SMB_new, 0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend15054 = new_Send((Optr)PSend15053, SMB_expression_, 1, (Optr)VAR_expression_1_0);
    Array PThreadedCode15052 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTReturnExpression_classReference, (Optr)&t_send0, (Optr)PSend15053, (Optr)&t_push_variable, (Optr)VAR_expression_1_0, (Optr)&t_send1, (Optr)PSend15054, (Optr)&t_method_return);
    Block PBlock15050 = new_Block_with(PArray15051, empty_Array, PThreadedCode15052, 1, PSend15054);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15055 = new_Send((Optr)PSuper15049, SMB_semantics_, 1, (Optr)PBlock15050);
    Array PThreadedCode15048 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15049, (Optr)&t_push_closure, (Optr)PBlock15050, (Optr)&t_send1, (Optr)PSend15055, (Optr)&t_method_return);
    Method PMethod15047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15048, 1, PSend15055);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod15047, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    Super PSuper15058 = new_Super(SMB_initializeTemporaries, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15060 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15062 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode15061 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15062, (Optr)&t_method_return);
    Block PBlock15059 = new_Block_with(PArray15060, empty_Array, PThreadedCode15061, 1, PSend15062);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15063 = new_Send((Optr)PSuper15058, SMB_semantics_, 1, (Optr)PBlock15059);
    Array PThreadedCode15057 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15058, (Optr)&t_push_closure, (Optr)PBlock15059, (Optr)&t_send1, (Optr)PSend15063, (Optr)&t_method_return);
    Method PMethod15056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15057, 1, PSend15063);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod15056, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray15065 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper15067 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray15069 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15073 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend15072 = new_Send((Optr)PSend15073, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign15071 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend15072);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend15075 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign15074 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend15075);
    // new:. 
    Send PSend15077 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign15076 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend15077);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray15079 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend15081 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend15082 = new_Send((Optr)PSend15081, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15083 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend15082);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend15084 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend15083);
    // *. 
    Send PSend15085 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend15086 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend15085);
    // at:put:. 
    Send PSend15087 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend15086);
    Array PThreadedCode15080 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15081, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15082, (Optr)&t_send1, (Optr)PSend15083, (Optr)&t_send2, (Optr)PSend15084, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15085, (Optr)&t_send1, (Optr)PSend15086, (Optr)&t_send2, (Optr)PSend15087, (Optr)&t_method_return);
    Block PBlock15078 = new_Block_with(PArray15079, empty_Array, PThreadedCode15080, 2, PSend15084, PSend15087);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend15088 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock15078);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15090 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend15092 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend15093 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode15091 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend15092, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend15093, (Optr)&t_method_return);
    Block PBlock15089 = new_Block_with(PArray15090, empty_Array, PThreadedCode15091, 2, PSend15092, PSend15093);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15094 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15095 = new_Send((Optr)PBlock15089, SMB_value_, 1, (Optr)PSend15094);
    Array PThreadedCode15070 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign15071, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15073, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15072, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15074, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend15075, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15076, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend15077, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock15078, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend15088, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15089, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend15094, (Optr)&t_send1, (Optr)PSend15095, (Optr)&t_method_return);
    Block PBlock15068 = new_Block_with(PArray15069, empty_Array, PThreadedCode15070, 5, PAssign15071, PAssign15074, PAssign15076, PSend15088, PSend15095);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15096 = new_Send((Optr)PSuper15067, SMB_semantics_, 1, (Optr)PBlock15068);
    Array PThreadedCode15066 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15067, (Optr)&t_push_closure, (Optr)PBlock15068, (Optr)&t_send1, (Optr)PSend15096, (Optr)&t_method_return);
    Method PMethod15064 = new_Method_with(empty_Array, PArray15065, empty_Array, PThreadedCode15066, 1, PSend15096);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod15064, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    Super PSuper15099 = new_Super(SMB_initializeSymbolKeywords, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15101 = new_Array_with(1, (Optr)VAR_result_1_0);
    String string_15103 = new_String(L"");
    Symbol SMB_on_ = new_Symbol(L"on:");
    Constant string_15103_Const = new_Constant((Optr)string_15103);
    // on:. 
    Send PSend15104 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_on_, 1, (Optr)string_15103_Const);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Variable VAR_e_2_1 = new_Variable_named(L"e", 2);
    Array PArray15106 = new_Array_with(2, (Optr)VAR_c_2_0, (Optr)VAR_e_2_1);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend15108 = new_Send((Optr)VAR_c_2_0, SMB__shiftLeft_, 1, (Optr)VAR_e_2_1);
    Array PThreadedCode15107 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_push_variable, (Optr)VAR_e_2_1, (Optr)&t_send1, (Optr)PSend15108, (Optr)&t_method_return);
    Block PBlock15105 = new_Block_with(PArray15106, empty_Array, PThreadedCode15107, 1, PSend15108);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend15109 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend15104, (Optr)PBlock15105);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend15110 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode15102 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push1, (Optr)string_15103, (Optr)&t_send1, (Optr)PSend15104, (Optr)&t_push_closure, (Optr)PBlock15105, (Optr)&t_send2, (Optr)PSend15109, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend15110, (Optr)&t_method_return);
    Block PBlock15100 = new_Block_with(PArray15101, empty_Array, PThreadedCode15102, 2, PSend15109, PSend15110);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15111 = new_Send((Optr)PSuper15099, SMB_semantics_, 1, (Optr)PBlock15100);
    Array PThreadedCode15098 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15099, (Optr)&t_push_closure, (Optr)PBlock15100, (Optr)&t_send1, (Optr)PSend15111, (Optr)&t_method_return);
    Method PMethod15097 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15098, 1, PSend15111);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod15097, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    Super PSuper15114 = new_Super(SMB_initializeAssignmentExpressions, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15116 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15118 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode15117 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15118, (Optr)&t_method_return);
    Block PBlock15115 = new_Block_with(PArray15116, empty_Array, PThreadedCode15117, 1, PSend15118);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15119 = new_Send((Optr)PSuper15114, SMB_semantics_, 1, (Optr)PBlock15115);
    Array PThreadedCode15113 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15114, (Optr)&t_push_closure, (Optr)PBlock15115, (Optr)&t_send1, (Optr)PSend15119, (Optr)&t_method_return);
    Method PMethod15112 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15113, 1, PSend15119);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod15112, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Super PSuper15122 = new_Super(SMB_preStoreCascadedMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray15124 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15127 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend15129 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15130 = new_Send((Optr)PSend15129, SMB_receiver, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend15131 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend15130);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend15132 = new_Send((Optr)VAR_parts_1_0, SMB_asArray, 0);
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    // cascades:. 
    Send PSend15133 = new_Send((Optr)VAR__receiver__2_0, SMB_cascades_, 1, (Optr)PSend15132);
    Array PThreadedCode15128 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15129, (Optr)&t_send0, (Optr)PSend15130, (Optr)&t_send1, (Optr)PSend15131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend15132, (Optr)&t_send1, (Optr)PSend15133, (Optr)&t_method_return);
    Block PBlock15126 = new_Block_with(PArray15127, empty_Array, PThreadedCode15128, 2, PSend15131, PSend15133);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15134 = new_Send((Optr)ASTMessageCascadeExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15135 = new_Send((Optr)PBlock15126, SMB_value_, 1, (Optr)PSend15134);
    Array PThreadedCode15125 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock15126, (Optr)&t_push_class_reference, (Optr)ASTMessageCascadeExpression_classReference, (Optr)&t_send0, (Optr)PSend15134, (Optr)&t_send1, (Optr)PSend15135, (Optr)&t_method_return);
    Block PBlock15123 = new_Block_with(PArray15124, empty_Array, PThreadedCode15125, 1, PSend15135);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15136 = new_Send((Optr)PSuper15122, SMB_semantics_, 1, (Optr)PBlock15123);
    Array PThreadedCode15121 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15122, (Optr)&t_push_closure, (Optr)PBlock15123, (Optr)&t_send1, (Optr)PSend15136, (Optr)&t_method_return);
    Method PMethod15120 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15121, 1, PSend15136);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod15120, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    Super PSuper15139 = new_Super(SMB_initializeUnaryAnnotation, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray15141 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15143 = new_Send((Optr)ASTUnaryAnnotation_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend15144 = new_Send((Optr)PSend15143, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode15142 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryAnnotation_classReference, (Optr)&t_send0, (Optr)PSend15143, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend15144, (Optr)&t_method_return);
    Block PBlock15140 = new_Block_with(PArray15141, empty_Array, PThreadedCode15142, 1, PSend15144);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15145 = new_Send((Optr)PSuper15139, SMB_semantics_, 1, (Optr)PBlock15140);
    Array PThreadedCode15138 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15139, (Optr)&t_push_closure, (Optr)PBlock15140, (Optr)&t_send1, (Optr)PSend15145, (Optr)&t_method_return);
    Method PMethod15137 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15138, 1, PSend15145);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod15137, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    Super PSuper15148 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray15150 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15152 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend15153 = new_Send((Optr)PSend15152, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend15157 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15158 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // add:. 
    Send PSend15159 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PSend15158);
    Array PThreadedCode15156 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend15157, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend15158, (Optr)&t_send1, (Optr)PSend15159, (Optr)&t_block_return);
    Block PBlock15155 = new_Block_with(empty_Array, empty_Array, PThreadedCode15156, 2, PSend15157, PSend15159);
    // ifTrue:. 
    Send PSend15154 = new_Send((Optr)PSend15153, SMB_ifTrue_, 1, (Optr)PBlock15155);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray15161 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend15163 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    // new. 
    Send PSend15166 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode15165 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend15166, (Optr)&t_block_return);
    Block PBlock15164 = new_Block_with(empty_Array, empty_Array, PThreadedCode15165, 1, PSend15166);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend15167 = new_Send((Optr)PSend15163, SMB_resultIfFailed_, 1, (Optr)PBlock15164);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend15168 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)PSend15167);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend15169 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    // new. 
    Send PSend15172 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode15171 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend15172, (Optr)&t_block_return);
    Block PBlock15170 = new_Block_with(empty_Array, empty_Array, PThreadedCode15171, 1, PSend15172);
    // resultIfFailed:. 
    Send PSend15173 = new_Send((Optr)PSend15169, SMB_resultIfFailed_, 1, (Optr)PBlock15170);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend15174 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend15173);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend15175 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend15176 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend15175);
    Array PThreadedCode15162 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15163, (Optr)&t_push_closure, (Optr)PBlock15164, (Optr)&t_send1, (Optr)PSend15167, (Optr)&t_send1, (Optr)PSend15168, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend15169, (Optr)&t_push_closure, (Optr)PBlock15170, (Optr)&t_send1, (Optr)PSend15173, (Optr)&t_send1, (Optr)PSend15174, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend15175, (Optr)&t_send1, (Optr)PSend15176, (Optr)&t_method_return);
    Block PBlock15160 = new_Block_with(PArray15161, empty_Array, PThreadedCode15162, 3, PSend15168, PSend15174, PSend15176);
    // new. 
    Send PSend15177 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15178 = new_Send((Optr)PBlock15160, SMB_value_, 1, (Optr)PSend15177);
    Array PThreadedCode15151 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend15152, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15153, (Optr)&t_send_ifTrue_, (Optr)PSend15154, (Optr)PBlock15155, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15160, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend15177, (Optr)&t_send1, (Optr)PSend15178, (Optr)&t_method_return);
    Block PBlock15149 = new_Block_with(PArray15150, empty_Array, PThreadedCode15151, 2, PSend15154, PSend15178);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend15179 = new_Send((Optr)PSuper15148, SMB_semantics_, 1, (Optr)PBlock15149);
    Array PThreadedCode15147 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper15148, (Optr)&t_push_closure, (Optr)PBlock15149, (Optr)&t_send1, (Optr)PSend15179, (Optr)&t_method_return);
    Method PMethod15146 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15147, 1, PSend15179);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod15146, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_class_SMB_match_in_() {
    Symbol SMB_match_in_ = new_Symbol(L"match:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray15181 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend15183 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend15184 = new_Send((Optr)PSend15183, SMB_method, 0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend15185 = new_Send((Optr)VAR_class_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15186 = new_Send((Optr)PSend15185, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend15187 = new_Send((Optr)PSend15186, SMB_asString, 0);
    // asString. 
    Send PSend15188 = new_Send((Optr)PSend15187, SMB_asString, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend15189 = new_Send((Optr)PSend15184, SMB_parse_, 1, (Optr)PSend15188);
    Array PThreadedCode15182 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15183, (Optr)&t_send0, (Optr)PSend15184, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send0, (Optr)PSend15185, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend15186, (Optr)&t_send0, (Optr)PSend15187, (Optr)&t_send0, (Optr)PSend15188, (Optr)&t_send1, (Optr)PSend15189, (Optr)&t_method_return);
    Method PMethod15180 = new_Method_with(PArray15181, empty_Array, empty_Array, PThreadedCode15182, 1, PSend15189);
    
    MethodClosure MC_SMB_match_in_ = new_MethodClosure((Method)PMethod15180, HEADER(Smalltalk_Parser_SmalltalkParser_Class));
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