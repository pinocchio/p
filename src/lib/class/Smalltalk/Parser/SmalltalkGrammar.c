#include <lib/class/Smalltalk/Parser/SmalltalkGrammar.h>


Optr slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance;
Optr layout_Smalltalk_Parser_SmalltalkGrammar_Class_class;
Optr layout_Smalltalk_Parser_SmalltalkGrammar;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    String string_13411 = new_String(L"UNARY-MESSAGE-EXPRESSION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13412 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13411_Const = new_Constant((Optr)string_13411);
    // named:parsing:. 
    Send PSend13413 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13411_Const, (Optr)PSend13412);
    Array PThreadedCode13410 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13411, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13412, (Optr)&t_send2, (Optr)PSend13413, (Optr)&t_method_return);
    Method PMethod13409 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13410, 1, PSend13413);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod13409, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    String string_13416 = new_String(L"UNARY-SELECTOR");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13417 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13418 = new_String(L":");
    Constant string_13418_Const = new_Constant((Optr)string_13418);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13419 = new_Send((Optr)string_13418_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13420 = new_Send((Optr)PSend13419, SMB_not, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13421 = new_Send((Optr)PSend13417, SMB__logicAnd_, 1, (Optr)PSend13420);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13416_Const = new_Constant((Optr)string_13416);
    // named:parsing:. 
    Send PSend13422 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13416_Const, (Optr)PSend13421);
    Array PThreadedCode13415 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13416, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13417, (Optr)&t_push1, (Optr)string_13418, (Optr)&t_send0, (Optr)PSend13419, (Optr)&t_send0, (Optr)PSend13420, (Optr)&t_send1, (Optr)PSend13421, (Optr)&t_send2, (Optr)PSend13422, (Optr)&t_method_return);
    Method PMethod13414 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13415, 1, PSend13422);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod13414, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    String string_13425 = new_String(L"NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13426 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13425_Const = new_Constant((Optr)string_13425);
    // named:parsing:. 
    Send PSend13427 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13425_Const, (Optr)PSend13426);
    Array PThreadedCode13424 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13425, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13426, (Optr)&t_send2, (Optr)PSend13427, (Optr)&t_method_return);
    Method PMethod13423 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13424, 1, PSend13427);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod13423, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    String string_13430 = new_String(L"UNARY-OBJECT-DESCRIPTION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13431 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13432 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13433 = new_Send((Optr)PSend13432, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13434 = new_Send((Optr)PSend13431, SMB__and_, 1, (Optr)PSend13433);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13430_Const = new_Constant((Optr)string_13430);
    // named:parsing:. 
    Send PSend13435 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13430_Const, (Optr)PSend13434);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13436 = new_Send((Optr)PSend13435, SMB_memo, 0);
    Array PThreadedCode13429 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13430, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13431, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13432, (Optr)&t_send0, (Optr)PSend13433, (Optr)&t_send1, (Optr)PSend13434, (Optr)&t_send2, (Optr)PSend13435, (Optr)&t_send0, (Optr)PSend13436, (Optr)&t_method_return);
    Method PMethod13428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13429, 1, PSend13436);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod13428, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    String string_13439 = new_String(L"VARIABLE-NAME");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13440 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13439_Const = new_Constant((Optr)string_13439);
    // named:parsing:. 
    Send PSend13441 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13439_Const, (Optr)PSend13440);
    Array PThreadedCode13438 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13439, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13440, (Optr)&t_send2, (Optr)PSend13441, (Optr)&t_method_return);
    Method PMethod13437 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13438, 1, PSend13441);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod13437, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_assignmentOp() {
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    String string_13444 = new_String(L":=");
    Constant string_13444_Const = new_Constant((Optr)string_13444);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13445 = new_Send((Optr)string_13444_Const, SMB_asParser, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13446 = new_Send((Optr)PSend13445, SMB_omit, 0);
    Array PThreadedCode13443 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)string_13444, (Optr)&t_send0, (Optr)PSend13445, (Optr)&t_send0, (Optr)PSend13446, (Optr)&t_method_return);
    Method PMethod13442 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13443, 1, PSend13446);
    
    MethodClosure MC_SMB_assignmentOp = new_MethodClosure((Method)PMethod13442, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_assignmentOp, MC_SMB_assignmentOp);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    String string_13449 = new_String(L"CAPITAL-IDENTIFIER");
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13450 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13451 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13452 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13453 = new_Send((Optr)PSend13451, SMB__or_, 1, (Optr)PSend13452);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13454 = new_Send((Optr)PSend13453, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13455 = new_Send((Optr)PSend13450, SMB__logicAnd_, 1, (Optr)PSend13454);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13449_Const = new_Constant((Optr)string_13449);
    // named:parsing:. 
    Send PSend13456 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13449_Const, (Optr)PSend13455);
    Array PThreadedCode13448 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13449, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13450, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13451, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13452, (Optr)&t_send1, (Optr)PSend13453, (Optr)&t_send0, (Optr)PSend13454, (Optr)&t_send1, (Optr)PSend13455, (Optr)&t_send2, (Optr)PSend13456, (Optr)&t_method_return);
    Method PMethod13447 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13448, 1, PSend13456);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod13447, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    String string_13459 = new_String(L"BINARY-SELECTOR");
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13460 = new_Send((Optr)self, SMB_specialCharacter, 0);
    String string_13461 = new_String(L"-");
    Constant string_13461_Const = new_Constant((Optr)string_13461);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13462 = new_Send((Optr)string_13461_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13463 = new_Send((Optr)PSend13462, SMB_consume, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13464 = new_Send((Optr)PSend13460, SMB__or_, 1, (Optr)PSend13463);
    // specialCharacter. 
    Send PSend13465 = new_Send((Optr)self, SMB_specialCharacter, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13466 = new_Send((Optr)PSend13465, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13467 = new_Send((Optr)PSend13464, SMB__logicAnd_, 1, (Optr)PSend13466);
    String string_13468 = new_String(L"|");
    Constant string_13468_Const = new_Constant((Optr)string_13468);
    // asParser. 
    Send PSend13469 = new_Send((Optr)string_13468_Const, SMB_asParser, 0);
    // consume. 
    Send PSend13470 = new_Send((Optr)PSend13469, SMB_consume, 0);
    // |. 
    Send PSend13471 = new_Send((Optr)PSend13467, SMB__or_, 1, (Optr)PSend13470);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13459_Const = new_Constant((Optr)string_13459);
    // named:parsing:. 
    Send PSend13472 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13459_Const, (Optr)PSend13471);
    Array PThreadedCode13458 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13459, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13460, (Optr)&t_push1, (Optr)string_13461, (Optr)&t_send0, (Optr)PSend13462, (Optr)&t_send0, (Optr)PSend13463, (Optr)&t_send1, (Optr)PSend13464, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13465, (Optr)&t_send0, (Optr)PSend13466, (Optr)&t_send1, (Optr)PSend13467, (Optr)&t_push1, (Optr)string_13468, (Optr)&t_send0, (Optr)PSend13469, (Optr)&t_send0, (Optr)PSend13470, (Optr)&t_send1, (Optr)PSend13471, (Optr)&t_send2, (Optr)PSend13472, (Optr)&t_method_return);
    Method PMethod13457 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13458, 1, PSend13472);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod13457, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    String string_13475 = new_String(L"STRING-CONSTANT");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13476 = new_Send((Optr)self, SMB_string, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13475_Const = new_Constant((Optr)string_13475);
    // named:parsing:. 
    Send PSend13477 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13475_Const, (Optr)PSend13476);
    Array PThreadedCode13474 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13475, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13476, (Optr)&t_send2, (Optr)PSend13477, (Optr)&t_method_return);
    Method PMethod13473 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13474, 1, PSend13477);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod13473, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeParameterName() {
    Symbol SMB_initializeParameterName = new_Symbol(L"initializeParameterName");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13480 = new_Send((Optr)self, SMB_identifier, 0);
    Array PThreadedCode13479 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13480, (Optr)&t_method_return);
    Method PMethod13478 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13479, 1, PSend13480);
    
    MethodClosure MC_SMB_initializeParameterName = new_MethodClosure((Method)PMethod13478, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeParameterName, MC_SMB_initializeParameterName);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    String string_13483 = new_String(L"KEYWORD-EXPRESSION");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13484 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13485 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    // bracketIndexExpression. 
    Send PSend13486 = new_Send((Optr)self, SMB_bracketIndexExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13487 = new_Send((Optr)PSend13485, SMB__or_, 1, (Optr)PSend13486);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13488 = new_Send((Optr)PSend13484, SMB__and_, 1, (Optr)PSend13487);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13483_Const = new_Constant((Optr)string_13483);
    // named:parsing:. 
    Send PSend13489 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13483_Const, (Optr)PSend13488);
    Array PThreadedCode13482 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13483, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13484, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13485, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13486, (Optr)&t_send1, (Optr)PSend13487, (Optr)&t_send1, (Optr)PSend13488, (Optr)&t_send2, (Optr)PSend13489, (Optr)&t_method_return);
    Method PMethod13481 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13482, 1, PSend13489);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod13481, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    String string_13492 = new_String(L"BRACKET-INDEX-EXPRESSION");
    String string_13493 = new_String(L"[");
    Constant string_13493_Const = new_Constant((Optr)string_13493);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13494 = new_Send((Optr)string_13493_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13495 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13496 = new_Send((Optr)PSend13494, SMB__and_, 1, (Optr)PSend13495);
    String string_13497 = new_String(L"]");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13497_Const = new_Constant((Optr)string_13497);
    // <&. 
    Send PSend13498 = new_Send((Optr)PSend13496, SMB__lt__and_, 1, (Optr)string_13497_Const);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend13499 = new_Send((Optr)self, SMB_assignmentOp, 0);
    // expression. 
    Send PSend13500 = new_Send((Optr)self, SMB_expression, 0);
    // &. 
    Send PSend13501 = new_Send((Optr)PSend13499, SMB__and_, 1, (Optr)PSend13500);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13502 = new_Send((Optr)PSend13501, SMB_optional, 0);
    // <&. 
    Send PSend13503 = new_Send((Optr)PSend13498, SMB__lt__and_, 1, (Optr)PSend13502);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13492_Const = new_Constant((Optr)string_13492);
    // named:parsing:. 
    Send PSend13504 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13492_Const, (Optr)PSend13503);
    Array PThreadedCode13491 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13492, (Optr)&t_push1, (Optr)string_13493, (Optr)&t_send0, (Optr)PSend13494, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13495, (Optr)&t_send1, (Optr)PSend13496, (Optr)&t_push1, (Optr)string_13497, (Optr)&t_send1, (Optr)PSend13498, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13499, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13500, (Optr)&t_send1, (Optr)PSend13501, (Optr)&t_send0, (Optr)PSend13502, (Optr)&t_send1, (Optr)PSend13503, (Optr)&t_send2, (Optr)PSend13504, (Optr)&t_method_return);
    Method PMethod13490 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13491, 1, PSend13504);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod13490, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    // preStoreBinaryObjectDescription. 
    Send PSend13507 = new_Send((Optr)self, SMB_preStoreBinaryObjectDescription, 0);
    Symbol  SMB_binaryExpression = new_Symbol(L"binaryExpression");
    String string_13508 = new_String(L"BINARY-EXPRESSION");
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13509 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13510 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13511 = new_Send((Optr)PSend13509, SMB__and_, 1, (Optr)PSend13510);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13512 = new_Send((Optr)PSend13511, SMB_plus, 0);
    // unaryObjectDescription. 
    Send PSend13513 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    // &. 
    Send PSend13514 = new_Send((Optr)PSend13512, SMB__and_, 1, (Optr)PSend13513);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13508_Const = new_Constant((Optr)string_13508);
    // named:parsing:. 
    Send PSend13515 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13508_Const, (Optr)PSend13514);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryExpression_Const = new_Constant((Optr)SMB_binaryExpression);
    // at:ifAbsentPut:. 
    Send PSend13516 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryExpression_Const, (Optr)PSend13515);
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    // injectBinaryObjectDescription. 
    Send PSend13517 = new_Send((Optr)self, SMB_injectBinaryObjectDescription, 0);
    // binaryExpression. 
    Send PSend13518 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Array PThreadedCode13506 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13507, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryExpression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13508, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13509, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13510, (Optr)&t_send1, (Optr)PSend13511, (Optr)&t_send0, (Optr)PSend13512, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13513, (Optr)&t_send1, (Optr)PSend13514, (Optr)&t_send2, (Optr)PSend13515, (Optr)&t_send2, (Optr)PSend13516, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13517, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13518, (Optr)&t_method_return);
    Method PMethod13505 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13506, 4, PSend13507, PSend13516, PSend13517, PSend13518);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod13505, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    String string_13521 = new_String(L"SCOPED-EXPRESSION");
    String string_13522 = new_String(L"(");
    Constant string_13522_Const = new_Constant((Optr)string_13522);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13523 = new_Send((Optr)string_13522_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13524 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13525 = new_Send((Optr)PSend13523, SMB__and_, 1, (Optr)PSend13524);
    String string_13526 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13526_Const = new_Constant((Optr)string_13526);
    // <&. 
    Send PSend13527 = new_Send((Optr)PSend13525, SMB__lt__and_, 1, (Optr)string_13526_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13521_Const = new_Constant((Optr)string_13521);
    // named:parsing:. 
    Send PSend13528 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13521_Const, (Optr)PSend13527);
    Array PThreadedCode13520 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13521, (Optr)&t_push1, (Optr)string_13522, (Optr)&t_send0, (Optr)PSend13523, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13524, (Optr)&t_send1, (Optr)PSend13525, (Optr)&t_push1, (Optr)string_13526, (Optr)&t_send1, (Optr)PSend13527, (Optr)&t_send2, (Optr)PSend13528, (Optr)&t_method_return);
    Method PMethod13519 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13520, 1, PSend13528);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod13519, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    String string_13531 = new_String(L"CHARACTER-CONSTANT");
    String string_13532 = new_String(L"$");
    Constant string_13532_Const = new_Constant((Optr)string_13532);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13533 = new_Send((Optr)string_13532_Const, SMB_asParser, 0);
    Symbol SMB_character = new_Symbol(L"character");
    // character. 
    Send PSend13534 = new_Send((Optr)self, SMB_character, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13535 = new_Send((Optr)PSend13533, SMB__logicAnd_, 1, (Optr)PSend13534);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13531_Const = new_Constant((Optr)string_13531);
    // named:parsing:. 
    Send PSend13536 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13531_Const, (Optr)PSend13535);
    Array PThreadedCode13530 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13531, (Optr)&t_push1, (Optr)string_13532, (Optr)&t_send0, (Optr)PSend13533, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13534, (Optr)&t_send1, (Optr)PSend13535, (Optr)&t_send2, (Optr)PSend13536, (Optr)&t_method_return);
    Method PMethod13529 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13530, 1, PSend13536);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod13529, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    String string_13539 = new_String(L"NUMBER-FORMAT");
    String string_13540 = new_String(L"-");
    Constant string_13540_Const = new_Constant((Optr)string_13540);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13541 = new_Send((Optr)string_13540_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13542 = new_Send((Optr)PSend13541, SMB_consume, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13543 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13544 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13545 = new_Send((Optr)PSend13543, SMB__or_, 1, (Optr)PSend13544);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13546 = new_Send((Optr)PSend13545, SMB_strongPlus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13547 = new_Send((Optr)PSend13542, SMB__and_, 1, (Optr)PSend13546);
    // decimalDigit. 
    Send PSend13548 = new_Send((Optr)self, SMB_decimalDigit, 0);
    // uppercase. 
    Send PSend13549 = new_Send((Optr)self, SMB_uppercase, 0);
    // |. 
    Send PSend13550 = new_Send((Optr)PSend13548, SMB__or_, 1, (Optr)PSend13549);
    // strongPlus. 
    Send PSend13551 = new_Send((Optr)PSend13550, SMB_strongPlus, 0);
    // |. 
    Send PSend13552 = new_Send((Optr)PSend13547, SMB__or_, 1, (Optr)PSend13551);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13539_Const = new_Constant((Optr)string_13539);
    // named:parsing:. 
    Send PSend13553 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13539_Const, (Optr)PSend13552);
    Array PThreadedCode13538 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13539, (Optr)&t_push1, (Optr)string_13540, (Optr)&t_send0, (Optr)PSend13541, (Optr)&t_send0, (Optr)PSend13542, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13543, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13544, (Optr)&t_send1, (Optr)PSend13545, (Optr)&t_send0, (Optr)PSend13546, (Optr)&t_send1, (Optr)PSend13547, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13548, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13549, (Optr)&t_send1, (Optr)PSend13550, (Optr)&t_send0, (Optr)PSend13551, (Optr)&t_send1, (Optr)PSend13552, (Optr)&t_send2, (Optr)PSend13553, (Optr)&t_method_return);
    Method PMethod13537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13538, 1, PSend13553);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod13537, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    String string_13556 = new_String(L"METHOD");
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend13557 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_messagePattern = new_Symbol(L"messagePattern");
    // messagePattern. 
    Send PSend13558 = new_Send((Optr)self, SMB_messagePattern, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13559 = new_Send((Optr)PSend13557, SMB__and_, 1, (Optr)PSend13558);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13560 = new_Send((Optr)self, SMB_annotations, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13561 = new_Send((Optr)PSend13559, SMB__lt__and_, 1, (Optr)PSend13560);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13562 = new_Send((Optr)self, SMB_temporaries, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13563 = new_Send((Optr)PSend13562, SMB_optional, 0);
    // <&. 
    Send PSend13564 = new_Send((Optr)PSend13561, SMB__lt__and_, 1, (Optr)PSend13563);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13565 = new_Send((Optr)self, SMB_statements, 0);
    // <&. 
    Send PSend13566 = new_Send((Optr)PSend13564, SMB__lt__and_, 1, (Optr)PSend13565);
    // separator. 
    Send PSend13567 = new_Send((Optr)self, SMB_separator, 0);
    // <&. 
    Send PSend13568 = new_Send((Optr)PSend13566, SMB__lt__and_, 1, (Optr)PSend13567);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13569 = new_Send((Optr)PSend13568, SMB_end, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13556_Const = new_Constant((Optr)string_13556);
    // named:parsing:. 
    Send PSend13570 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13556_Const, (Optr)PSend13569);
    // separator. 
    Send PSend13571 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_separator_ = new_Symbol(L"separator:");
    // separator:. 
    Send PSend13572 = new_Send((Optr)PSend13570, SMB_separator_, 1, (Optr)PSend13571);
    Array PThreadedCode13555 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13556, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13557, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13558, (Optr)&t_send1, (Optr)PSend13559, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13560, (Optr)&t_send1, (Optr)PSend13561, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13562, (Optr)&t_send0, (Optr)PSend13563, (Optr)&t_send1, (Optr)PSend13564, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13565, (Optr)&t_send1, (Optr)PSend13566, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13567, (Optr)&t_send1, (Optr)PSend13568, (Optr)&t_send0, (Optr)PSend13569, (Optr)&t_send2, (Optr)PSend13570, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13571, (Optr)&t_send1, (Optr)PSend13572, (Optr)&t_method_return);
    Method PMethod13554 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13555, 1, PSend13572);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod13554, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    String string_13575 = new_String(L"UNARY-MESSAGE-DEFINITION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13576 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13575_Const = new_Constant((Optr)string_13575);
    // named:parsing:. 
    Send PSend13577 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13575_Const, (Optr)PSend13576);
    Array PThreadedCode13574 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13575, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13576, (Optr)&t_send2, (Optr)PSend13577, (Optr)&t_method_return);
    Method PMethod13573 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13574, 1, PSend13577);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod13573, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_preStorePrimary() {
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    Symbol  SMB_primary = new_Symbol(L"primary");
    String string_13582 = new_String(L"PRIMARY");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13582_Const = new_Constant((Optr)string_13582);
    // named:. 
    Send PSend13583 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13582_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13584 = new_Send((Optr)PSend13583, SMB_memo, 0);
    Array PThreadedCode13581 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13582, (Optr)&t_send1, (Optr)PSend13583, (Optr)&t_send0, (Optr)PSend13584, (Optr)&t_block_return);
    Block PBlock13580 = new_Block_with(empty_Array, empty_Array, PThreadedCode13581, 1, PSend13584);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_primary_Const = new_Constant((Optr)SMB_primary);
    // at:ifAbsentPut:. 
    Send PSend13585 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_primary_Const, (Optr)PBlock13580);
    Array PThreadedCode13579 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_primary, (Optr)&t_push_closure, (Optr)PBlock13580, (Optr)&t_send2, (Optr)PSend13585, (Optr)&t_method_return);
    Method PMethod13578 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13579, 1, PSend13585);
    
    MethodClosure MC_SMB_preStorePrimary = new_MethodClosure((Method)PMethod13578, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStorePrimary, MC_SMB_preStorePrimary);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    String string_13588 = new_String(L"KEYWORD");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13589 = new_Send((Optr)self, SMB_identifierBody, 0);
    String string_13590 = new_String(L":");
    Constant string_13590_Const = new_Constant((Optr)string_13590);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13591 = new_Send((Optr)string_13590_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13592 = new_Send((Optr)PSend13591, SMB_consume, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13593 = new_Send((Optr)PSend13589, SMB__logicAnd_, 1, (Optr)PSend13592);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13588_Const = new_Constant((Optr)string_13588);
    // named:parsing:. 
    Send PSend13594 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13588_Const, (Optr)PSend13593);
    Array PThreadedCode13587 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13588, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13589, (Optr)&t_push1, (Optr)string_13590, (Optr)&t_send0, (Optr)PSend13591, (Optr)&t_send0, (Optr)PSend13592, (Optr)&t_send1, (Optr)PSend13593, (Optr)&t_send2, (Optr)PSend13594, (Optr)&t_method_return);
    Method PMethod13586 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13587, 1, PSend13594);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod13586, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeUppercase() {
    Symbol SMB_initializeUppercase = new_Symbol(L"initializeUppercase");
    String string_13597 = new_String(L"A-Z");
    Constant string_13597_Const = new_Constant((Optr)string_13597);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13598 = new_Send((Optr)string_13597_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13596 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13597, (Optr)&t_send0, (Optr)PSend13598, (Optr)&t_method_return);
    Method PMethod13595 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13596, 1, PSend13598);
    
    MethodClosure MC_SMB_initializeUppercase = new_MethodClosure((Method)PMethod13595, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUppercase, MC_SMB_initializeUppercase);
}


static void init_SMB_preStoreMessageExpression() {
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    Symbol  SMB_messageExpression = new_Symbol(L"messageExpression");
    String string_13603 = new_String(L"MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13603_Const = new_Constant((Optr)string_13603);
    // named:. 
    Send PSend13604 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13603_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13605 = new_Send((Optr)PSend13604, SMB_memo, 0);
    Array PThreadedCode13602 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13603, (Optr)&t_send1, (Optr)PSend13604, (Optr)&t_send0, (Optr)PSend13605, (Optr)&t_block_return);
    Block PBlock13601 = new_Block_with(empty_Array, empty_Array, PThreadedCode13602, 1, PSend13605);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_messageExpression_Const = new_Constant((Optr)SMB_messageExpression);
    // at:ifAbsentPut:. 
    Send PSend13606 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_messageExpression_Const, (Optr)PBlock13601);
    Array PThreadedCode13600 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_messageExpression, (Optr)&t_push_closure, (Optr)PBlock13601, (Optr)&t_send2, (Optr)PSend13606, (Optr)&t_method_return);
    Method PMethod13599 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13600, 1, PSend13606);
    
    MethodClosure MC_SMB_preStoreMessageExpression = new_MethodClosure((Method)PMethod13599, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreMessageExpression, MC_SMB_preStoreMessageExpression);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    String string_13609 = new_String(L"UNARY-EXPRESSION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13610 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13611 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13612 = new_Send((Optr)PSend13611, SMB_plus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13613 = new_Send((Optr)PSend13610, SMB__and_, 1, (Optr)PSend13612);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13609_Const = new_Constant((Optr)string_13609);
    // named:parsing:. 
    Send PSend13614 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13609_Const, (Optr)PSend13613);
    Array PThreadedCode13608 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13609, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13610, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13611, (Optr)&t_send0, (Optr)PSend13612, (Optr)&t_send1, (Optr)PSend13613, (Optr)&t_send2, (Optr)PSend13614, (Optr)&t_method_return);
    Method PMethod13607 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13608, 1, PSend13614);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod13607, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeSymbol() {
    Symbol SMB_initializeSymbol = new_Symbol(L"initializeSymbol");
    String string_13617 = new_String(L"SYMBOL");
    Symbol SMB_symbolKeywords = new_Symbol(L"symbolKeywords");
    // symbolKeywords. 
    Send PSend13618 = new_Send((Optr)self, SMB_symbolKeywords, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13619 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13620 = new_Send((Optr)PSend13618, SMB__or_, 1, (Optr)PSend13619);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13621 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13622 = new_Send((Optr)PSend13620, SMB__lt__equals_, 1, (Optr)PSend13621);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13623 = new_Send((Optr)self, SMB_string, 0);
    // <=. 
    Send PSend13624 = new_Send((Optr)PSend13622, SMB__lt__equals_, 1, (Optr)PSend13623);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13617_Const = new_Constant((Optr)string_13617);
    // named:parsing:. 
    Send PSend13625 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13617_Const, (Optr)PSend13624);
    Array PThreadedCode13616 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13617, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13618, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13619, (Optr)&t_send1, (Optr)PSend13620, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13621, (Optr)&t_send1, (Optr)PSend13622, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13623, (Optr)&t_send1, (Optr)PSend13624, (Optr)&t_send2, (Optr)PSend13625, (Optr)&t_method_return);
    Method PMethod13615 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13616, 1, PSend13625);
    
    MethodClosure MC_SMB_initializeSymbol = new_MethodClosure((Method)PMethod13615, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbol, MC_SMB_initializeSymbol);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    String string_13628 = new_String(L"PRIMARY-VARIABLE");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13629 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13630 = new_String(L".");
    Constant string_13630_Const = new_Constant((Optr)string_13630);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13631 = new_Send((Optr)string_13630_Const, SMB_asParser, 0);
    // identifier. 
    Send PSend13632 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13633 = new_Send((Optr)PSend13631, SMB__logicAnd_, 1, (Optr)PSend13632);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13634 = new_Send((Optr)PSend13633, SMB_strongTimes, 0);
    // &&. 
    Send PSend13635 = new_Send((Optr)PSend13629, SMB__logicAnd_, 1, (Optr)PSend13634);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13628_Const = new_Constant((Optr)string_13628);
    // named:parsing:. 
    Send PSend13636 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13628_Const, (Optr)PSend13635);
    Array PThreadedCode13627 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13628, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13629, (Optr)&t_push1, (Optr)string_13630, (Optr)&t_send0, (Optr)PSend13631, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13632, (Optr)&t_send1, (Optr)PSend13633, (Optr)&t_send0, (Optr)PSend13634, (Optr)&t_send1, (Optr)PSend13635, (Optr)&t_send2, (Optr)PSend13636, (Optr)&t_method_return);
    Method PMethod13626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13627, 1, PSend13636);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod13626, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    String string_13639 = new_String(L"KEYWORDS-ARGUMENTS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13640 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13641 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13642 = new_Send((Optr)PSend13640, SMB__and_, 1, (Optr)PSend13641);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13643 = new_Send((Optr)PSend13642, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13639_Const = new_Constant((Optr)string_13639);
    // named:parsing:. 
    Send PSend13644 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13639_Const, (Optr)PSend13643);
    Array PThreadedCode13638 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13639, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13640, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13641, (Optr)&t_send1, (Optr)PSend13642, (Optr)&t_send0, (Optr)PSend13643, (Optr)&t_send2, (Optr)PSend13644, (Optr)&t_method_return);
    Method PMethod13637 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13638, 1, PSend13644);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod13637, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_preStoreBracketIndexExpression() {
    Symbol SMB_preStoreBracketIndexExpression = new_Symbol(L"preStoreBracketIndexExpression");
    Symbol  SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    String string_13649 = new_String(L"BRACKET-INDEX-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13649_Const = new_Constant((Optr)string_13649);
    // named:. 
    Send PSend13650 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13649_Const);
    Array PThreadedCode13648 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13649, (Optr)&t_send1, (Optr)PSend13650, (Optr)&t_block_return);
    Block PBlock13647 = new_Block_with(empty_Array, empty_Array, PThreadedCode13648, 1, PSend13650);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_bracketIndexExpression_Const = new_Constant((Optr)SMB_bracketIndexExpression);
    // at:ifAbsentPut:. 
    Send PSend13651 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_bracketIndexExpression_Const, (Optr)PBlock13647);
    Array PThreadedCode13646 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_bracketIndexExpression, (Optr)&t_push_closure, (Optr)PBlock13647, (Optr)&t_send2, (Optr)PSend13651, (Optr)&t_method_return);
    Method PMethod13645 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13646, 1, PSend13651);
    
    MethodClosure MC_SMB_preStoreBracketIndexExpression = new_MethodClosure((Method)PMethod13645, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBracketIndexExpression, MC_SMB_preStoreBracketIndexExpression);
}


static void init_SMB_initializePrimary() {
    Symbol SMB_initializePrimary = new_Symbol(L"initializePrimary");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13654 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13655 = new_Send((Optr)self, SMB_primary, 0);
    Array PThreadedCode13653 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13654, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13655, (Optr)&t_method_return);
    Method PMethod13652 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13653, 2, PSend13654, PSend13655);
    
    MethodClosure MC_SMB_initializePrimary = new_MethodClosure((Method)PMethod13652, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimary, MC_SMB_initializePrimary);
}


static void init_SMB_parseMethod_() {
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray13657 = new_Array_with(1, (Optr)VAR_method_0_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend13659 = new_Send((Optr)self, SMB_method, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13660 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_method_0_0, (Optr)PSend13659);
    Array PThreadedCode13658 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13659, (Optr)&t_send2, (Optr)PSend13660, (Optr)&t_method_return);
    Method PMethod13656 = new_Method_with(PArray13657, empty_Array, empty_Array, PThreadedCode13658, 1, PSend13660);
    
    MethodClosure MC_SMB_parseMethod_ = new_MethodClosure((Method)PMethod13656, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseMethod_, MC_SMB_parseMethod_);
}


static void init_SMB_initializeDecimalDigit() {
    Symbol SMB_initializeDecimalDigit = new_Symbol(L"initializeDecimalDigit");
    String string_13663 = new_String(L"0-9");
    Constant string_13663_Const = new_Constant((Optr)string_13663);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13664 = new_Send((Optr)string_13663_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13662 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13663, (Optr)&t_send0, (Optr)PSend13664, (Optr)&t_method_return);
    Method PMethod13661 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13662, 1, PSend13664);
    
    MethodClosure MC_SMB_initializeDecimalDigit = new_MethodClosure((Method)PMethod13661, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeDecimalDigit, MC_SMB_initializeDecimalDigit);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    String string_13667 = new_String(L"TEMPORARIES");
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13668 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend13669 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13670 = new_Send((Optr)PSend13669, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13671 = new_Send((Optr)PSend13668, SMB__and_, 1, (Optr)PSend13670);
    // bar. 
    Send PSend13672 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13673 = new_Send((Optr)PSend13671, SMB__lt__and_, 1, (Optr)PSend13672);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13667_Const = new_Constant((Optr)string_13667);
    // named:parsing:. 
    Send PSend13674 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13667_Const, (Optr)PSend13673);
    Array PThreadedCode13666 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13667, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13668, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13669, (Optr)&t_send0, (Optr)PSend13670, (Optr)&t_send1, (Optr)PSend13671, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13672, (Optr)&t_send1, (Optr)PSend13673, (Optr)&t_send2, (Optr)PSend13674, (Optr)&t_method_return);
    Method PMethod13665 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13666, 1, PSend13674);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod13665, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    String string_13677 = new_String(L"KEYWORD-MESSAGE-EXPRESSION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13678 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13679 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13680 = new_Send((Optr)PSend13678, SMB__and_, 1, (Optr)PSend13679);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13681 = new_Send((Optr)PSend13680, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13677_Const = new_Constant((Optr)string_13677);
    // named:parsing:. 
    Send PSend13682 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13677_Const, (Optr)PSend13681);
    Array PThreadedCode13676 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13677, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13678, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13679, (Optr)&t_send1, (Optr)PSend13680, (Optr)&t_send0, (Optr)PSend13681, (Optr)&t_send2, (Optr)PSend13682, (Optr)&t_method_return);
    Method PMethod13675 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13676, 1, PSend13682);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod13675, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    String string_13685 = new_String(L"SYMBOL-KEYWORDS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13686 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13687 = new_Send((Optr)PSend13686, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13685_Const = new_Constant((Optr)string_13685);
    // named:parsing:. 
    Send PSend13688 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13685_Const, (Optr)PSend13687);
    Array PThreadedCode13684 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13685, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13686, (Optr)&t_send0, (Optr)PSend13687, (Optr)&t_send2, (Optr)PSend13688, (Optr)&t_method_return);
    Method PMethod13683 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13684, 1, PSend13688);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod13683, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeSpecialCharacter() {
    Symbol SMB_initializeSpecialCharacter = new_Symbol(L"initializeSpecialCharacter");
    String string_13691 = new_String(L"+*/\\~<>=@%?!&`,");
    Constant string_13691_Const = new_Constant((Optr)string_13691);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13692 = new_Send((Optr)string_13691_Const, SMB_asPEGChoice, 0);
    Array PThreadedCode13690 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13691, (Optr)&t_send0, (Optr)PSend13692, (Optr)&t_method_return);
    Method PMethod13689 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13690, 1, PSend13692);
    
    MethodClosure MC_SMB_initializeSpecialCharacter = new_MethodClosure((Method)PMethod13689, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSpecialCharacter, MC_SMB_initializeSpecialCharacter);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Symbol  SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    String string_13697 = new_String(L"CASCADED-MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13697_Const = new_Constant((Optr)string_13697);
    // named:. 
    Send PSend13698 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13697_Const);
    Array PThreadedCode13696 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13697, (Optr)&t_send1, (Optr)PSend13698, (Optr)&t_block_return);
    Block PBlock13695 = new_Block_with(empty_Array, empty_Array, PThreadedCode13696, 1, PSend13698);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_cascadedMessageExpression_Const = new_Constant((Optr)SMB_cascadedMessageExpression);
    // at:ifAbsentPut:. 
    Send PSend13699 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_cascadedMessageExpression_Const, (Optr)PBlock13695);
    Array PThreadedCode13694 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_cascadedMessageExpression, (Optr)&t_push_closure, (Optr)PBlock13695, (Optr)&t_send2, (Optr)PSend13699, (Optr)&t_method_return);
    Method PMethod13693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13694, 1, PSend13699);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod13693, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_parseStatements_() {
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    Variable VAR_statements_0_0 = new_Variable_named(L"statements", 0);
    Array PArray13701 = new_Array_with(1, (Optr)VAR_statements_0_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13703 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13704 = new_Send((Optr)PSend13703, SMB_end, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13705 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_statements_0_0, (Optr)PSend13704);
    Array PThreadedCode13702 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13703, (Optr)&t_send0, (Optr)PSend13704, (Optr)&t_send2, (Optr)PSend13705, (Optr)&t_method_return);
    Method PMethod13700 = new_Method_with(PArray13701, empty_Array, empty_Array, PThreadedCode13702, 1, PSend13705);
    
    MethodClosure MC_SMB_parseStatements_ = new_MethodClosure((Method)PMethod13700, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseStatements_, MC_SMB_parseStatements_);
}


static void init_SMB_preStoreBinaryObjectDescription() {
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    Symbol  SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    String string_13710 = new_String(L"BINARY-OBJECT-DESCRIPTION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13710_Const = new_Constant((Optr)string_13710);
    // named:. 
    Send PSend13711 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13710_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13712 = new_Send((Optr)PSend13711, SMB_memo, 0);
    Array PThreadedCode13709 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13710, (Optr)&t_send1, (Optr)PSend13711, (Optr)&t_send0, (Optr)PSend13712, (Optr)&t_block_return);
    Block PBlock13708 = new_Block_with(empty_Array, empty_Array, PThreadedCode13709, 1, PSend13712);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryObjectDescription_Const = new_Constant((Optr)SMB_binaryObjectDescription);
    // at:ifAbsentPut:. 
    Send PSend13713 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryObjectDescription_Const, (Optr)PBlock13708);
    Array PThreadedCode13707 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryObjectDescription, (Optr)&t_push_closure, (Optr)PBlock13708, (Optr)&t_send2, (Optr)PSend13713, (Optr)&t_method_return);
    Method PMethod13706 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13707, 1, PSend13713);
    
    MethodClosure MC_SMB_preStoreBinaryObjectDescription = new_MethodClosure((Method)PMethod13706, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBinaryObjectDescription, MC_SMB_preStoreBinaryObjectDescription);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    String string_13716 = new_String(L"BLOCK");
    String string_13717 = new_String(L"[");
    Constant string_13717_Const = new_Constant((Optr)string_13717);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13718 = new_Send((Optr)string_13717_Const, SMB_asParser, 0);
    Symbol SMB_blockArguments = new_Symbol(L"blockArguments");
    // blockArguments. 
    Send PSend13719 = new_Send((Optr)self, SMB_blockArguments, 0);
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13720 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13721 = new_Send((Optr)PSend13719, SMB__and_, 1, (Optr)PSend13720);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13722 = new_Send((Optr)PSend13721, SMB_optional, 0);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13723 = new_Send((Optr)self, SMB_temporaries, 0);
    // optional. 
    Send PSend13724 = new_Send((Optr)PSend13723, SMB_optional, 0);
    // &. 
    Send PSend13725 = new_Send((Optr)PSend13722, SMB__and_, 1, (Optr)PSend13724);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13726 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13727 = new_Send((Optr)PSend13725, SMB__lt__and_, 1, (Optr)PSend13726);
    String string_13728 = new_String(L"]");
    Constant string_13728_Const = new_Constant((Optr)string_13728);
    // <&. 
    Send PSend13729 = new_Send((Optr)PSend13727, SMB__lt__and_, 1, (Optr)string_13728_Const);
    // blockArguments. 
    Send PSend13730 = new_Send((Optr)self, SMB_blockArguments, 0);
    // optional. 
    Send PSend13731 = new_Send((Optr)PSend13730, SMB_optional, 0);
    String string_13732 = new_String(L"]");
    Constant string_13732_Const = new_Constant((Optr)string_13732);
    // &. 
    Send PSend13733 = new_Send((Optr)PSend13731, SMB__and_, 1, (Optr)string_13732_Const);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13734 = new_Send((Optr)PSend13729, SMB__or_, 1, (Optr)PSend13733);
    // &. 
    Send PSend13735 = new_Send((Optr)PSend13718, SMB__and_, 1, (Optr)PSend13734);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13716_Const = new_Constant((Optr)string_13716);
    // named:parsing:. 
    Send PSend13736 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13716_Const, (Optr)PSend13735);
    Array PThreadedCode13715 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13716, (Optr)&t_push1, (Optr)string_13717, (Optr)&t_send0, (Optr)PSend13718, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13719, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13720, (Optr)&t_send1, (Optr)PSend13721, (Optr)&t_send0, (Optr)PSend13722, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13723, (Optr)&t_send0, (Optr)PSend13724, (Optr)&t_send1, (Optr)PSend13725, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13726, (Optr)&t_send1, (Optr)PSend13727, (Optr)&t_push1, (Optr)string_13728, (Optr)&t_send1, (Optr)PSend13729, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13730, (Optr)&t_send0, (Optr)PSend13731, (Optr)&t_push1, (Optr)string_13732, (Optr)&t_send1, (Optr)PSend13733, (Optr)&t_send1, (Optr)PSend13734, (Optr)&t_send1, (Optr)PSend13735, (Optr)&t_send2, (Optr)PSend13736, (Optr)&t_method_return);
    Method PMethod13714 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13715, 1, PSend13736);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod13714, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    String string_13739 = new_String(L"IDENTIFIER");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13740 = new_Send((Optr)self, SMB_identifierBody, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13739_Const = new_Constant((Optr)string_13739);
    // named:parsing:. 
    Send PSend13741 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13739_Const, (Optr)PSend13740);
    Array PThreadedCode13738 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13739, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13740, (Optr)&t_send2, (Optr)PSend13741, (Optr)&t_method_return);
    Method PMethod13737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13738, 1, PSend13741);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod13737, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_injectCascadedMessageExpression() {
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13744 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13745 = new_Send((Optr)self, SMB_messageExpression, 0);
    String string_13746 = new_String(L";");
    Constant string_13746_Const = new_Constant((Optr)string_13746);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13747 = new_Send((Optr)string_13746_Const, SMB_asParser, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13748 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_binaryMessageExpression = new_Symbol(L"binaryMessageExpression");
    // binaryMessageExpression. 
    Send PSend13749 = new_Send((Optr)self, SMB_binaryMessageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13750 = new_Send((Optr)PSend13748, SMB__or_, 1, (Optr)PSend13749);
    Symbol SMB_unaryMessageExpression = new_Symbol(L"unaryMessageExpression");
    // unaryMessageExpression. 
    Send PSend13751 = new_Send((Optr)self, SMB_unaryMessageExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13752 = new_Send((Optr)PSend13750, SMB__lt__equals_, 1, (Optr)PSend13751);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13753 = new_Send((Optr)PSend13747, SMB__and_, 1, (Optr)PSend13752);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13754 = new_Send((Optr)PSend13753, SMB_plus, 0);
    // &. 
    Send PSend13755 = new_Send((Optr)PSend13745, SMB__and_, 1, (Optr)PSend13754);
    // <=. 
    Send PSend13756 = new_Send((Optr)PSend13744, SMB__lt__equals_, 1, (Optr)PSend13755);
    Array PThreadedCode13743 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13744, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13745, (Optr)&t_push1, (Optr)string_13746, (Optr)&t_send0, (Optr)PSend13747, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13748, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13749, (Optr)&t_send1, (Optr)PSend13750, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13751, (Optr)&t_send1, (Optr)PSend13752, (Optr)&t_send1, (Optr)PSend13753, (Optr)&t_send0, (Optr)PSend13754, (Optr)&t_send1, (Optr)PSend13755, (Optr)&t_send1, (Optr)PSend13756, (Optr)&t_method_return);
    Method PMethod13742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13743, 1, PSend13756);
    
    MethodClosure MC_SMB_injectCascadedMessageExpression = new_MethodClosure((Method)PMethod13742, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectCascadedMessageExpression, MC_SMB_injectCascadedMessageExpression);
}


static void init_SMB_initializeCascadedMessageExpression() {
    Symbol SMB_initializeCascadedMessageExpression = new_Symbol(L"initializeCascadedMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13759 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13760 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Array PThreadedCode13758 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13759, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13760, (Optr)&t_method_return);
    Method PMethod13757 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13758, 2, PSend13759, PSend13760);
    
    MethodClosure MC_SMB_initializeCascadedMessageExpression = new_MethodClosure((Method)PMethod13757, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCascadedMessageExpression, MC_SMB_initializeCascadedMessageExpression);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    String string_13763 = new_String(L"RADIX-NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13764 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13765 = new_String(L"r");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13765_Const = new_Constant((Optr)string_13765);
    // &. 
    Send PSend13766 = new_Send((Optr)PSend13764, SMB__and_, 1, (Optr)string_13765_Const);
    // numberFormat. 
    Send PSend13767 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13768 = new_Send((Optr)PSend13766, SMB__lt__and_, 1, (Optr)PSend13767);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13763_Const = new_Constant((Optr)string_13763);
    // named:parsing:. 
    Send PSend13769 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13763_Const, (Optr)PSend13768);
    Array PThreadedCode13762 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13763, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13764, (Optr)&t_push1, (Optr)string_13765, (Optr)&t_send1, (Optr)PSend13766, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13767, (Optr)&t_send1, (Optr)PSend13768, (Optr)&t_send2, (Optr)PSend13769, (Optr)&t_method_return);
    Method PMethod13761 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13762, 1, PSend13769);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod13761, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    String string_13772 = new_String(L"SYMBOL-IN-ARRAY");
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13773 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13772_Const = new_Constant((Optr)string_13772);
    // named:parsing:. 
    Send PSend13774 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13772_Const, (Optr)PSend13773);
    Array PThreadedCode13771 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13772, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13773, (Optr)&t_send2, (Optr)PSend13774, (Optr)&t_method_return);
    Method PMethod13770 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13771, 1, PSend13774);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod13770, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    String string_13777 = new_String(L"STATEMENTS");
    Symbol SMB_subExpression = new_Symbol(L"subExpression");
    // subExpression. 
    Send PSend13778 = new_Send((Optr)self, SMB_subExpression, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13779 = new_Send((Optr)PSend13778, SMB_times, 0);
    Symbol SMB_return = new_Symbol(L"return");
    // return. 
    Send PSend13780 = new_Send((Optr)self, SMB_return, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13781 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13782 = new_Send((Optr)PSend13780, SMB__or_, 1, (Optr)PSend13781);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13783 = new_Send((Optr)PSend13782, SMB_optional, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13784 = new_Send((Optr)PSend13779, SMB__and_, 1, (Optr)PSend13783);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13777_Const = new_Constant((Optr)string_13777);
    // named:parsing:. 
    Send PSend13785 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13777_Const, (Optr)PSend13784);
    Array PThreadedCode13776 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13777, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13778, (Optr)&t_send0, (Optr)PSend13779, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13780, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13781, (Optr)&t_send1, (Optr)PSend13782, (Optr)&t_send0, (Optr)PSend13783, (Optr)&t_send1, (Optr)PSend13784, (Optr)&t_send2, (Optr)PSend13785, (Optr)&t_method_return);
    Method PMethod13775 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13776, 1, PSend13785);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod13775, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    String string_13788 = new_String(L"SYMBOL-CONSTANT");
    String string_13789 = new_String(L"#");
    Constant string_13789_Const = new_Constant((Optr)string_13789);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13790 = new_Send((Optr)string_13789_Const, SMB_asParser, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13791 = new_Send((Optr)PSend13790, SMB_plus, 0);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13792 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13793 = new_Send((Optr)PSend13791, SMB__logicAnd_, 1, (Optr)PSend13792);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13788_Const = new_Constant((Optr)string_13788);
    // named:parsing:. 
    Send PSend13794 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13788_Const, (Optr)PSend13793);
    Array PThreadedCode13787 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13788, (Optr)&t_push1, (Optr)string_13789, (Optr)&t_send0, (Optr)PSend13790, (Optr)&t_send0, (Optr)PSend13791, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13792, (Optr)&t_send1, (Optr)PSend13793, (Optr)&t_send2, (Optr)PSend13794, (Optr)&t_method_return);
    Method PMethod13786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13787, 1, PSend13794);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod13786, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Variable VAR_array_0_0 = new_Variable_named(L"array", 0);
    Array PArray13796 = new_Array_with(1, (Optr)VAR_array_0_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    String string_13800 = new_String(L"ARRAY");
    Constant string_13800_Const = new_Constant((Optr)string_13800);
    // named:. 
    Send PSend13799 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13800_Const);
    Assign PAssign13798 = new_Assign((Optr)VAR_array_0_0, (Optr)PSend13799);
    String string_13801 = new_String(L"(");
    Constant string_13801_Const = new_Constant((Optr)string_13801);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13802 = new_Send((Optr)string_13801_Const, SMB_asParser, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13803 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13804 = new_Send((Optr)self, SMB_stringConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13805 = new_Send((Optr)PSend13803, SMB__or_, 1, (Optr)PSend13804);
    Symbol SMB_symbolInArray = new_Symbol(L"symbolInArray");
    // symbolInArray. 
    Send PSend13806 = new_Send((Optr)self, SMB_symbolInArray, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13807 = new_Send((Optr)PSend13805, SMB__lt__equals_, 1, (Optr)PSend13806);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13808 = new_Send((Optr)self, SMB_symbolConstant, 0);
    // <=. 
    Send PSend13809 = new_Send((Optr)PSend13807, SMB__lt__equals_, 1, (Optr)PSend13808);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13810 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend13811 = new_Send((Optr)PSend13809, SMB__lt__equals_, 1, (Optr)PSend13810);
    // <=. 
    Send PSend13812 = new_Send((Optr)PSend13811, SMB__lt__equals_, 1, (Optr)VAR_array_0_0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13813 = new_Send((Optr)PSend13812, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13814 = new_Send((Optr)PSend13802, SMB__and_, 1, (Optr)PSend13813);
    String string_13815 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13815_Const = new_Constant((Optr)string_13815);
    // <&. 
    Send PSend13816 = new_Send((Optr)PSend13814, SMB__lt__and_, 1, (Optr)string_13815_Const);
    // <=. 
    Send PSend13817 = new_Send((Optr)VAR_array_0_0, SMB__lt__equals_, 1, (Optr)PSend13816);
    Array PThreadedCode13797 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push1, (Optr)PAssign13798, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13800, (Optr)&t_send1, (Optr)PSend13799, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_push1, (Optr)string_13801, (Optr)&t_send0, (Optr)PSend13802, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13803, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13804, (Optr)&t_send1, (Optr)PSend13805, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13806, (Optr)&t_send1, (Optr)PSend13807, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13808, (Optr)&t_send1, (Optr)PSend13809, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13810, (Optr)&t_send1, (Optr)PSend13811, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_send1, (Optr)PSend13812, (Optr)&t_send0, (Optr)PSend13813, (Optr)&t_send1, (Optr)PSend13814, (Optr)&t_push1, (Optr)string_13815, (Optr)&t_send1, (Optr)PSend13816, (Optr)&t_send1, (Optr)PSend13817, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_method_return);
    Method PMethod13795 = new_Method_with(empty_Array, PArray13796, empty_Array, PThreadedCode13797, 3, PAssign13798, PSend13817, VAR_array_0_0);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod13795, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    String string_13820 = new_String(L"KEYWORD-ANNOTATION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13821 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13822 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13823 = new_Send((Optr)PSend13821, SMB__and_, 1, (Optr)PSend13822);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13824 = new_Send((Optr)PSend13823, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13820_Const = new_Constant((Optr)string_13820);
    // named:parsing:. 
    Send PSend13825 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13820_Const, (Optr)PSend13824);
    Array PThreadedCode13819 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13820, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13821, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13822, (Optr)&t_send1, (Optr)PSend13823, (Optr)&t_send0, (Optr)PSend13824, (Optr)&t_send2, (Optr)PSend13825, (Optr)&t_method_return);
    Method PMethod13818 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13819, 1, PSend13825);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod13818, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    // preStorePrimary. 
    Send PSend13828 = new_Send((Optr)self, SMB_preStorePrimary, 0);
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    // preStoreMessageExpression. 
    Send PSend13829 = new_Send((Optr)self, SMB_preStoreMessageExpression, 0);
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    // preStoreCascadedMessageExpression. 
    Send PSend13830 = new_Send((Optr)self, SMB_preStoreCascadedMessageExpression, 0);
    Symbol  SMB_expression = new_Symbol(L"expression");
    String string_13831 = new_String(L"EXPRESSION");
    Symbol SMB_assignmentExpressions = new_Symbol(L"assignmentExpressions");
    // assignmentExpressions. 
    Send PSend13832 = new_Send((Optr)self, SMB_assignmentExpressions, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13833 = new_Send((Optr)PSend13832, SMB_optional, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13834 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13835 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13836 = new_Send((Optr)PSend13834, SMB__or_, 1, (Optr)PSend13835);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13837 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13838 = new_Send((Optr)PSend13836, SMB__lt__equals_, 1, (Optr)PSend13837);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13839 = new_Send((Optr)PSend13833, SMB__and_, 1, (Optr)PSend13838);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13831_Const = new_Constant((Optr)string_13831);
    // named:parsing:. 
    Send PSend13840 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13831_Const, (Optr)PSend13839);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // at:put:. 
    Send PSend13841 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_put_, 2, (Optr)SMB_expression_Const, (Optr)PSend13840);
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    // injectPrimary. 
    Send PSend13842 = new_Send((Optr)self, SMB_injectPrimary, 0);
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    // injectMessageExpression. 
    Send PSend13843 = new_Send((Optr)self, SMB_injectMessageExpression, 0);
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    // injectCascadedMessageExpression. 
    Send PSend13844 = new_Send((Optr)self, SMB_injectCascadedMessageExpression, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend13845 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode13827 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13828, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13829, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13830, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13831, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13832, (Optr)&t_send0, (Optr)PSend13833, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13834, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13835, (Optr)&t_send1, (Optr)PSend13836, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13837, (Optr)&t_send1, (Optr)PSend13838, (Optr)&t_send1, (Optr)PSend13839, (Optr)&t_send2, (Optr)PSend13840, (Optr)&t_send2, (Optr)PSend13841, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13842, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13843, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13844, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend13845, (Optr)&t_method_return);
    Method PMethod13826 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13827, 8, PSend13828, PSend13829, PSend13830, PSend13841, PSend13842, PSend13843, PSend13844, PSend13845);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod13826, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    String string_13848 = new_String(L"FLOAT");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13849 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13850 = new_String(L".");
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Constant string_13850_Const = new_Constant((Optr)string_13850);
    // &&. 
    Send PSend13851 = new_Send((Optr)PSend13849, SMB__logicAnd_, 1, (Optr)string_13850_Const);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13852 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13853 = new_Send((Optr)PSend13852, SMB_strongPlus, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13854 = new_Send((Optr)PSend13851, SMB__lt__and_, 1, (Optr)PSend13853);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13848_Const = new_Constant((Optr)string_13848);
    // named:parsing:. 
    Send PSend13855 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13848_Const, (Optr)PSend13854);
    Array PThreadedCode13847 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13848, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13849, (Optr)&t_push1, (Optr)string_13850, (Optr)&t_send1, (Optr)PSend13851, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13852, (Optr)&t_send0, (Optr)PSend13853, (Optr)&t_send1, (Optr)PSend13854, (Optr)&t_send2, (Optr)PSend13855, (Optr)&t_method_return);
    Method PMethod13846 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13847, 1, PSend13855);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod13846, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    String string_13858 = new_String(L"BLOCK-ARGUMENTS");
    String string_13859 = new_String(L":");
    Constant string_13859_Const = new_Constant((Optr)string_13859);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13860 = new_Send((Optr)string_13859_Const, SMB_asParser, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13861 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13862 = new_Send((Optr)PSend13860, SMB__and_, 1, (Optr)PSend13861);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13863 = new_Send((Optr)PSend13862, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13858_Const = new_Constant((Optr)string_13858);
    // named:parsing:. 
    Send PSend13864 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13858_Const, (Optr)PSend13863);
    Array PThreadedCode13857 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13858, (Optr)&t_push1, (Optr)string_13859, (Optr)&t_send0, (Optr)PSend13860, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13861, (Optr)&t_send1, (Optr)PSend13862, (Optr)&t_send0, (Optr)PSend13863, (Optr)&t_send2, (Optr)PSend13864, (Optr)&t_method_return);
    Method PMethod13856 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13857, 1, PSend13864);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod13856, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeCommentFormat() {
    Symbol SMB_initializeCommentFormat = new_Symbol(L"initializeCommentFormat");
    Variable VAR_commentBorder_0_0 = new_Variable_named(L"commentBorder", 0);
    Array PArray13866 = new_Array_with(1, (Optr)VAR_commentBorder_0_0);
    String string_13870 = new_String(L"\"");
    Constant string_13870_Const = new_Constant((Optr)string_13870);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13869 = new_Send((Optr)string_13870_Const, SMB_asParser, 0);
    Assign PAssign13868 = new_Assign((Optr)VAR_commentBorder_0_0, (Optr)PSend13869);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13871 = new_Send((Optr)VAR_commentBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13872 = new_Send((Optr)PSend13871, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13873 = new_Send((Optr)PSend13872, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13874 = new_Send((Optr)VAR_commentBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend13873);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13875 = new_Send((Optr)PSend13874, SMB__lt__and_, 1, (Optr)VAR_commentBorder_0_0);
    Array PThreadedCode13867 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign13868, (Optr)&t_push1, (Optr)string_13870, (Optr)&t_send0, (Optr)PSend13869, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send0, (Optr)PSend13871, (Optr)&t_send0, (Optr)PSend13872, (Optr)&t_send0, (Optr)PSend13873, (Optr)&t_send1, (Optr)PSend13874, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send1, (Optr)PSend13875, (Optr)&t_method_return);
    Method PMethod13865 = new_Method_with(empty_Array, PArray13866, empty_Array, PThreadedCode13867, 2, PAssign13868, PSend13875);
    
    MethodClosure MC_SMB_initializeCommentFormat = new_MethodClosure((Method)PMethod13865, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCommentFormat, MC_SMB_initializeCommentFormat);
}


static void init_SMB_initializeSeparator() {
    Symbol SMB_initializeSeparator = new_Symbol(L"initializeSeparator");
    Super PSuper13878 = new_Super(SMB_initializeSeparator, 0);
    Symbol SMB_commentFormat = new_Symbol(L"commentFormat");
    // commentFormat. 
    Send PSend13879 = new_Send((Optr)self, SMB_commentFormat, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13880 = new_Send((Optr)PSuper13878, SMB__or_, 1, (Optr)PSend13879);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13881 = new_Send((Optr)PSend13880, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13882 = new_Send((Optr)PSend13881, SMB_omit, 0);
    Array PThreadedCode13877 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13878, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13879, (Optr)&t_send1, (Optr)PSend13880, (Optr)&t_send0, (Optr)PSend13881, (Optr)&t_send0, (Optr)PSend13882, (Optr)&t_method_return);
    Method PMethod13876 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13877, 1, PSend13882);
    
    MethodClosure MC_SMB_initializeSeparator = new_MethodClosure((Method)PMethod13876, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSeparator, MC_SMB_initializeSeparator);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    String string_13885 = new_String(L"BRACE-EXPRESSION");
    String string_13886 = new_String(L"{");
    Constant string_13886_Const = new_Constant((Optr)string_13886);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13887 = new_Send((Optr)string_13886_Const, SMB_asParser, 0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13888 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13889 = new_Send((Optr)PSend13887, SMB__and_, 1, (Optr)PSend13888);
    String string_13890 = new_String(L"}");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13890_Const = new_Constant((Optr)string_13890);
    // <&. 
    Send PSend13891 = new_Send((Optr)PSend13889, SMB__lt__and_, 1, (Optr)string_13890_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13885_Const = new_Constant((Optr)string_13885);
    // named:parsing:. 
    Send PSend13892 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13885_Const, (Optr)PSend13891);
    Array PThreadedCode13884 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13885, (Optr)&t_push1, (Optr)string_13886, (Optr)&t_send0, (Optr)PSend13887, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13888, (Optr)&t_send1, (Optr)PSend13889, (Optr)&t_push1, (Optr)string_13890, (Optr)&t_send1, (Optr)PSend13891, (Optr)&t_send2, (Optr)PSend13892, (Optr)&t_method_return);
    Method PMethod13883 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13884, 1, PSend13892);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod13883, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_injectBinaryObjectDescription() {
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13895 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13896 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13897 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13898 = new_Send((Optr)PSend13896, SMB__or_, 1, (Optr)PSend13897);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13899 = new_Send((Optr)PSend13895, SMB__lt__equals_, 1, (Optr)PSend13898);
    Array PThreadedCode13894 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13895, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13896, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13897, (Optr)&t_send1, (Optr)PSend13898, (Optr)&t_send1, (Optr)PSend13899, (Optr)&t_method_return);
    Method PMethod13893 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13894, 1, PSend13899);
    
    MethodClosure MC_SMB_injectBinaryObjectDescription = new_MethodClosure((Method)PMethod13893, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectBinaryObjectDescription, MC_SMB_injectBinaryObjectDescription);
}


static void init_SMB_initializeLowercase() {
    Symbol SMB_initializeLowercase = new_Symbol(L"initializeLowercase");
    String string_13902 = new_String(L"a-z");
    Constant string_13902_Const = new_Constant((Optr)string_13902);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13903 = new_Send((Optr)string_13902_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13901 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13902, (Optr)&t_send0, (Optr)PSend13903, (Optr)&t_method_return);
    Method PMethod13900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13901, 1, PSend13903);
    
    MethodClosure MC_SMB_initializeLowercase = new_MethodClosure((Method)PMethod13900, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLowercase, MC_SMB_initializeLowercase);
}


static void init_SMB_injectMessageExpression() {
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13906 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB_keywordExpression = new_Symbol(L"keywordExpression");
    // keywordExpression. 
    Send PSend13907 = new_Send((Optr)self, SMB_keywordExpression, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13908 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13909 = new_Send((Optr)PSend13907, SMB__or_, 1, (Optr)PSend13908);
    Symbol SMB_unaryExpression = new_Symbol(L"unaryExpression");
    // unaryExpression. 
    Send PSend13910 = new_Send((Optr)self, SMB_unaryExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13911 = new_Send((Optr)PSend13909, SMB__lt__equals_, 1, (Optr)PSend13910);
    // <=. 
    Send PSend13912 = new_Send((Optr)PSend13906, SMB__lt__equals_, 1, (Optr)PSend13911);
    Array PThreadedCode13905 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13906, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13907, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13908, (Optr)&t_send1, (Optr)PSend13909, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13910, (Optr)&t_send1, (Optr)PSend13911, (Optr)&t_send1, (Optr)PSend13912, (Optr)&t_method_return);
    Method PMethod13904 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13905, 1, PSend13912);
    
    MethodClosure MC_SMB_injectMessageExpression = new_MethodClosure((Method)PMethod13904, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectMessageExpression, MC_SMB_injectMessageExpression);
}


static void init_SMB_initializeIdentifierBody() {
    Symbol SMB_initializeIdentifierBody = new_Symbol(L"initializeIdentifierBody");
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13915 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend13916 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13917 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13918 = new_Send((Optr)PSend13916, SMB__or_, 1, (Optr)PSend13917);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13919 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13920 = new_Send((Optr)PSend13918, SMB__lt__equals_, 1, (Optr)PSend13919);
    String string_13921 = new_String(L"!?");
    Constant string_13921_Const = new_Constant((Optr)string_13921);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13922 = new_Send((Optr)string_13921_Const, SMB_asPEGChoice, 0);
    // <=. 
    Send PSend13923 = new_Send((Optr)PSend13920, SMB__lt__equals_, 1, (Optr)PSend13922);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13924 = new_Send((Optr)PSend13923, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13925 = new_Send((Optr)PSend13915, SMB__logicAnd_, 1, (Optr)PSend13924);
    Array PThreadedCode13914 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13915, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13916, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13917, (Optr)&t_send1, (Optr)PSend13918, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13919, (Optr)&t_send1, (Optr)PSend13920, (Optr)&t_push1, (Optr)string_13921, (Optr)&t_send0, (Optr)PSend13922, (Optr)&t_send1, (Optr)PSend13923, (Optr)&t_send0, (Optr)PSend13924, (Optr)&t_send1, (Optr)PSend13925, (Optr)&t_method_return);
    Method PMethod13913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13914, 1, PSend13925);
    
    MethodClosure MC_SMB_initializeIdentifierBody = new_MethodClosure((Method)PMethod13913, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifierBody, MC_SMB_initializeIdentifierBody);
}


static void init_SMB_initializeLiteral() {
    Symbol SMB_initializeLiteral = new_Symbol(L"initializeLiteral");
    Symbol SMB_float = new_Symbol(L"float");
    // float. 
    Send PSend13928 = new_Send((Optr)self, SMB_float, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13929 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13930 = new_Send((Optr)PSend13928, SMB__or_, 1, (Optr)PSend13929);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13931 = new_Send((Optr)self, SMB_symbolConstant, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13932 = new_Send((Optr)PSend13930, SMB__lt__equals_, 1, (Optr)PSend13931);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13933 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend13934 = new_Send((Optr)PSend13932, SMB__lt__equals_, 1, (Optr)PSend13933);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13935 = new_Send((Optr)self, SMB_stringConstant, 0);
    // <=. 
    Send PSend13936 = new_Send((Optr)PSend13934, SMB__lt__equals_, 1, (Optr)PSend13935);
    Symbol SMB_arrayConstant = new_Symbol(L"arrayConstant");
    // arrayConstant. 
    Send PSend13937 = new_Send((Optr)self, SMB_arrayConstant, 0);
    // <=. 
    Send PSend13938 = new_Send((Optr)PSend13936, SMB__lt__equals_, 1, (Optr)PSend13937);
    Array PThreadedCode13927 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13928, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13929, (Optr)&t_send1, (Optr)PSend13930, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13931, (Optr)&t_send1, (Optr)PSend13932, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13933, (Optr)&t_send1, (Optr)PSend13934, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13935, (Optr)&t_send1, (Optr)PSend13936, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13937, (Optr)&t_send1, (Optr)PSend13938, (Optr)&t_method_return);
    Method PMethod13926 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13927, 1, PSend13938);
    
    MethodClosure MC_SMB_initializeLiteral = new_MethodClosure((Method)PMethod13926, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLiteral, MC_SMB_initializeLiteral);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    String string_13941 = new_String(L"BINARY-MESSAGE-EXPRESSION");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13942 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13943 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13944 = new_Send((Optr)PSend13942, SMB__and_, 1, (Optr)PSend13943);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13941_Const = new_Constant((Optr)string_13941);
    // named:parsing:. 
    Send PSend13945 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13941_Const, (Optr)PSend13944);
    Array PThreadedCode13940 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13941, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13942, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13943, (Optr)&t_send1, (Optr)PSend13944, (Optr)&t_send2, (Optr)PSend13945, (Optr)&t_method_return);
    Method PMethod13939 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13940, 1, PSend13945);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod13939, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    String string_13948 = new_String(L"STRING");
    Symbol SMB_stringSegment = new_Symbol(L"stringSegment");
    // stringSegment. 
    Send PSend13949 = new_Send((Optr)self, SMB_stringSegment, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13950 = new_Send((Optr)PSend13949, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13948_Const = new_Constant((Optr)string_13948);
    // named:parsing:. 
    Send PSend13951 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13948_Const, (Optr)PSend13950);
    Array PThreadedCode13947 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13948, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13949, (Optr)&t_send0, (Optr)PSend13950, (Optr)&t_send2, (Optr)PSend13951, (Optr)&t_method_return);
    Method PMethod13946 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13947, 1, PSend13951);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod13946, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    Array PThreadedCode13953 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod13952 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13953, 1, self);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod13952, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_test, MC_SMB_test);
}


static void init_SMB_initializeSubExpression() {
    Symbol SMB_initializeSubExpression = new_Symbol(L"initializeSubExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13956 = new_Send((Optr)self, SMB_expression, 0);
    String string_13957 = new_String(L".");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13957_Const = new_Constant((Optr)string_13957);
    // &. 
    Send PSend13958 = new_Send((Optr)PSend13956, SMB__and_, 1, (Optr)string_13957_Const);
    String string_13959 = new_String(L".");
    Symbol SMB__or_ = new_Symbol(L"|");
    Constant string_13959_Const = new_Constant((Optr)string_13959);
    // |. 
    Send PSend13960 = new_Send((Optr)PSend13958, SMB__or_, 1, (Optr)string_13959_Const);
    Array PThreadedCode13955 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13956, (Optr)&t_push1, (Optr)string_13957, (Optr)&t_send1, (Optr)PSend13958, (Optr)&t_push1, (Optr)string_13959, (Optr)&t_send1, (Optr)PSend13960, (Optr)&t_method_return);
    Method PMethod13954 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13955, 1, PSend13960);
    
    MethodClosure MC_SMB_initializeSubExpression = new_MethodClosure((Method)PMethod13954, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSubExpression, MC_SMB_initializeSubExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    String string_13963 = new_String(L"ANNOTATIONS");
    String string_13964 = new_String(L"<");
    Constant string_13964_Const = new_Constant((Optr)string_13964);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13965 = new_Send((Optr)string_13964_Const, SMB_asParser, 0);
    Symbol SMB_keywordAnnotation = new_Symbol(L"keywordAnnotation");
    // keywordAnnotation. 
    Send PSend13966 = new_Send((Optr)self, SMB_keywordAnnotation, 0);
    Symbol SMB_unaryAnnotation = new_Symbol(L"unaryAnnotation");
    // unaryAnnotation. 
    Send PSend13967 = new_Send((Optr)self, SMB_unaryAnnotation, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13968 = new_Send((Optr)PSend13966, SMB__or_, 1, (Optr)PSend13967);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13969 = new_Send((Optr)PSend13965, SMB__and_, 1, (Optr)PSend13968);
    String string_13970 = new_String(L">");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13970_Const = new_Constant((Optr)string_13970);
    // <&. 
    Send PSend13971 = new_Send((Optr)PSend13969, SMB__lt__and_, 1, (Optr)string_13970_Const);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13972 = new_Send((Optr)PSend13971, SMB_times, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13963_Const = new_Constant((Optr)string_13963);
    // named:parsing:. 
    Send PSend13973 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13963_Const, (Optr)PSend13972);
    Array PThreadedCode13962 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13963, (Optr)&t_push1, (Optr)string_13964, (Optr)&t_send0, (Optr)PSend13965, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13966, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13967, (Optr)&t_send1, (Optr)PSend13968, (Optr)&t_send1, (Optr)PSend13969, (Optr)&t_push1, (Optr)string_13970, (Optr)&t_send1, (Optr)PSend13971, (Optr)&t_send0, (Optr)PSend13972, (Optr)&t_send2, (Optr)PSend13973, (Optr)&t_method_return);
    Method PMethod13961 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13962, 1, PSend13973);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod13961, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializeArrayConstant() {
    Symbol SMB_initializeArrayConstant = new_Symbol(L"initializeArrayConstant");
    String string_13976 = new_String(L"#");
    Constant string_13976_Const = new_Constant((Optr)string_13976);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13977 = new_Send((Optr)string_13976_Const, SMB_asParser, 0);
    Symbol SMB_array = new_Symbol(L"array");
    // array. 
    Send PSend13978 = new_Send((Optr)self, SMB_array, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13979 = new_Send((Optr)PSend13977, SMB__and_, 1, (Optr)PSend13978);
    Array PThreadedCode13975 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)string_13976, (Optr)&t_send0, (Optr)PSend13977, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13978, (Optr)&t_send1, (Optr)PSend13979, (Optr)&t_method_return);
    Method PMethod13974 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13975, 1, PSend13979);
    
    MethodClosure MC_SMB_initializeArrayConstant = new_MethodClosure((Method)PMethod13974, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArrayConstant, MC_SMB_initializeArrayConstant);
}


static void init_SMB_initializeBinaryObjectDescription() {
    Symbol SMB_initializeBinaryObjectDescription = new_Symbol(L"initializeBinaryObjectDescription");
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13982 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13983 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Array PThreadedCode13981 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13982, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13983, (Optr)&t_method_return);
    Method PMethod13980 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13981, 2, PSend13982, PSend13983);
    
    MethodClosure MC_SMB_initializeBinaryObjectDescription = new_MethodClosure((Method)PMethod13980, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryObjectDescription, MC_SMB_initializeBinaryObjectDescription);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Variable VAR_stringBorder_0_0 = new_Variable_named(L"stringBorder", 0);
    Array PArray13985 = new_Array_with(1, (Optr)VAR_stringBorder_0_0);
    String string_13989 = new_String(L"'");
    Constant string_13989_Const = new_Constant((Optr)string_13989);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13988 = new_Send((Optr)string_13989_Const, SMB_asParser, 0);
    Assign PAssign13987 = new_Assign((Optr)VAR_stringBorder_0_0, (Optr)PSend13988);
    String string_13990 = new_String(L"STRING-SEGMENT");
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13991 = new_Send((Optr)VAR_stringBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13992 = new_Send((Optr)PSend13991, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13993 = new_Send((Optr)PSend13992, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13994 = new_Send((Optr)VAR_stringBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend13993);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13995 = new_Send((Optr)PSend13994, SMB__lt__and_, 1, (Optr)VAR_stringBorder_0_0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13990_Const = new_Constant((Optr)string_13990);
    // named:parsing:. 
    Send PSend13996 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13990_Const, (Optr)PSend13995);
    Array PThreadedCode13986 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign13987, (Optr)&t_push1, (Optr)string_13989, (Optr)&t_send0, (Optr)PSend13988, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13990, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send0, (Optr)PSend13991, (Optr)&t_send0, (Optr)PSend13992, (Optr)&t_send0, (Optr)PSend13993, (Optr)&t_send1, (Optr)PSend13994, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send1, (Optr)PSend13995, (Optr)&t_send2, (Optr)PSend13996, (Optr)&t_method_return);
    Method PMethod13984 = new_Method_with(empty_Array, PArray13985, empty_Array, PThreadedCode13986, 2, PAssign13987, PSend13996);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod13984, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeBar() {
    Symbol SMB_initializeBar = new_Symbol(L"initializeBar");
    String string_13999 = new_String(L"|");
    Constant string_13999_Const = new_Constant((Optr)string_13999);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14000 = new_Send((Optr)string_13999_Const, SMB_asParser, 0);
    Array PThreadedCode13998 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13999, (Optr)&t_send0, (Optr)PSend14000, (Optr)&t_method_return);
    Method PMethod13997 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13998, 1, PSend14000);
    
    MethodClosure MC_SMB_initializeBar = new_MethodClosure((Method)PMethod13997, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBar, MC_SMB_initializeBar);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    String string_14003 = new_String(L"BINARY-ARGUMENT");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend14004 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend14005 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14006 = new_Send((Optr)PSend14004, SMB__and_, 1, (Optr)PSend14005);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14003_Const = new_Constant((Optr)string_14003);
    // named:parsing:. 
    Send PSend14007 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14003_Const, (Optr)PSend14006);
    Array PThreadedCode14002 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14003, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14004, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14005, (Optr)&t_send1, (Optr)PSend14006, (Optr)&t_send2, (Optr)PSend14007, (Optr)&t_method_return);
    Method PMethod14001 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14002, 1, PSend14007);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14001, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    String string_14010 = new_String(L"RETURN");
    String string_14011 = new_String(L"^");
    Constant string_14011_Const = new_Constant((Optr)string_14011);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14012 = new_Send((Optr)string_14011_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14013 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14014 = new_Send((Optr)PSend14012, SMB__and_, 1, (Optr)PSend14013);
    String string_14015 = new_String(L".");
    Constant string_14015_Const = new_Constant((Optr)string_14015);
    // asParser. 
    Send PSend14016 = new_Send((Optr)string_14015_Const, SMB_asParser, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend14017 = new_Send((Optr)PSend14016, SMB_optional, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend14018 = new_Send((Optr)PSend14017, SMB_omit, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14019 = new_Send((Optr)PSend14014, SMB__lt__and_, 1, (Optr)PSend14018);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14010_Const = new_Constant((Optr)string_14010);
    // named:parsing:. 
    Send PSend14020 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14010_Const, (Optr)PSend14019);
    Array PThreadedCode14009 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14010, (Optr)&t_push1, (Optr)string_14011, (Optr)&t_send0, (Optr)PSend14012, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14013, (Optr)&t_send1, (Optr)PSend14014, (Optr)&t_push1, (Optr)string_14015, (Optr)&t_send0, (Optr)PSend14016, (Optr)&t_send0, (Optr)PSend14017, (Optr)&t_send0, (Optr)PSend14018, (Optr)&t_send1, (Optr)PSend14019, (Optr)&t_send2, (Optr)PSend14020, (Optr)&t_method_return);
    Method PMethod14008 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14009, 1, PSend14020);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14008, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeNumberConstant() {
    Symbol SMB_initializeNumberConstant = new_Symbol(L"initializeNumberConstant");
    Symbol SMB_radix = new_Symbol(L"radix");
    // radix. 
    Send PSend14023 = new_Send((Optr)self, SMB_radix, 0);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend14024 = new_Send((Optr)self, SMB_number, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14025 = new_Send((Optr)PSend14023, SMB__or_, 1, (Optr)PSend14024);
    Array PThreadedCode14022 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14023, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14024, (Optr)&t_send1, (Optr)PSend14025, (Optr)&t_method_return);
    Method PMethod14021 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14022, 1, PSend14025);
    
    MethodClosure MC_SMB_initializeNumberConstant = new_MethodClosure((Method)PMethod14021, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberConstant, MC_SMB_initializeNumberConstant);
}


static void init_SMB_initializeCharacter() {
    Symbol SMB_initializeCharacter = new_Symbol(L"initializeCharacter");
    String string_14028 = new_String(L"[]{}()_^;$#:-|.'\"");
    Constant string_14028_Const = new_Constant((Optr)string_14028);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend14029 = new_Send((Optr)string_14028_Const, SMB_asPEGChoice, 0);
    Symbol SMB_separators = new_Symbol(L"separators");
    // separators. 
    Send PSend14030 = new_Send((Optr)PEGParser_classReference, SMB_separators, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14031 = new_Send((Optr)PSend14029, SMB__or_, 1, (Optr)PSend14030);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14032 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14033 = new_Send((Optr)PSend14031, SMB__lt__equals_, 1, (Optr)PSend14032);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend14034 = new_Send((Optr)self, SMB_letter, 0);
    // <=. 
    Send PSend14035 = new_Send((Optr)PSend14033, SMB__lt__equals_, 1, (Optr)PSend14034);
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend14036 = new_Send((Optr)self, SMB_specialCharacter, 0);
    // <=. 
    Send PSend14037 = new_Send((Optr)PSend14035, SMB__lt__equals_, 1, (Optr)PSend14036);
    Array PThreadedCode14027 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)string_14028, (Optr)&t_send0, (Optr)PSend14029, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend14030, (Optr)&t_send1, (Optr)PSend14031, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14032, (Optr)&t_send1, (Optr)PSend14033, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14034, (Optr)&t_send1, (Optr)PSend14035, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14036, (Optr)&t_send1, (Optr)PSend14037, (Optr)&t_method_return);
    Method PMethod14026 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14027, 1, PSend14037);
    
    MethodClosure MC_SMB_initializeCharacter = new_MethodClosure((Method)PMethod14026, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacter, MC_SMB_initializeCharacter);
}


static void init_SMB_injectPrimary() {
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14040 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_primaryVariable = new_Symbol(L"primaryVariable");
    // primaryVariable. 
    Send PSend14041 = new_Send((Optr)self, SMB_primaryVariable, 0);
    Symbol SMB_literal = new_Symbol(L"literal");
    // literal. 
    Send PSend14042 = new_Send((Optr)self, SMB_literal, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14043 = new_Send((Optr)PSend14041, SMB__or_, 1, (Optr)PSend14042);
    Symbol SMB_block = new_Symbol(L"block");
    // block. 
    Send PSend14044 = new_Send((Optr)self, SMB_block, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14045 = new_Send((Optr)PSend14043, SMB__lt__equals_, 1, (Optr)PSend14044);
    Symbol SMB_scopedExpression = new_Symbol(L"scopedExpression");
    // scopedExpression. 
    Send PSend14046 = new_Send((Optr)self, SMB_scopedExpression, 0);
    // <=. 
    Send PSend14047 = new_Send((Optr)PSend14045, SMB__lt__equals_, 1, (Optr)PSend14046);
    Symbol SMB_braceExpression = new_Symbol(L"braceExpression");
    // braceExpression. 
    Send PSend14048 = new_Send((Optr)self, SMB_braceExpression, 0);
    // <=. 
    Send PSend14049 = new_Send((Optr)PSend14047, SMB__lt__equals_, 1, (Optr)PSend14048);
    // <=. 
    Send PSend14050 = new_Send((Optr)PSend14040, SMB__lt__equals_, 1, (Optr)PSend14049);
    Array PThreadedCode14039 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14040, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14041, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14042, (Optr)&t_send1, (Optr)PSend14043, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14044, (Optr)&t_send1, (Optr)PSend14045, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14046, (Optr)&t_send1, (Optr)PSend14047, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14048, (Optr)&t_send1, (Optr)PSend14049, (Optr)&t_send1, (Optr)PSend14050, (Optr)&t_method_return);
    Method PMethod14038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14039, 1, PSend14050);
    
    MethodClosure MC_SMB_injectPrimary = new_MethodClosure((Method)PMethod14038, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectPrimary, MC_SMB_injectPrimary);
}


static void init_SMB_initializeLetter() {
    Symbol SMB_initializeLetter = new_Symbol(L"initializeLetter");
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend14053 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend14054 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14055 = new_Send((Optr)PSend14053, SMB__or_, 1, (Optr)PSend14054);
    Array PThreadedCode14052 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14053, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14054, (Optr)&t_send1, (Optr)PSend14055, (Optr)&t_method_return);
    Method PMethod14051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14052, 1, PSend14055);
    
    MethodClosure MC_SMB_initializeLetter = new_MethodClosure((Method)PMethod14051, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLetter, MC_SMB_initializeLetter);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    String string_14058 = new_String(L"ASSIGNMENT-EXPRESSIONS");
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend14059 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend14060 = new_Send((Optr)self, SMB_assignmentOp, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14061 = new_Send((Optr)PSend14059, SMB__and_, 1, (Optr)PSend14060);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14062 = new_Send((Optr)PSend14061, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14058_Const = new_Constant((Optr)string_14058);
    // named:parsing:. 
    Send PSend14063 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14058_Const, (Optr)PSend14062);
    Array PThreadedCode14057 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14058, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14059, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14060, (Optr)&t_send1, (Optr)PSend14061, (Optr)&t_send0, (Optr)PSend14062, (Optr)&t_send2, (Optr)PSend14063, (Optr)&t_method_return);
    Method PMethod14056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14057, 1, PSend14063);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14056, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_initializeFinalExpression() {
    Symbol SMB_initializeFinalExpression = new_Symbol(L"initializeFinalExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14066 = new_Send((Optr)self, SMB_expression, 0);
    Array PThreadedCode14065 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14066, (Optr)&t_method_return);
    Method PMethod14064 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14065, 1, PSend14066);
    
    MethodClosure MC_SMB_initializeFinalExpression = new_MethodClosure((Method)PMethod14064, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFinalExpression, MC_SMB_initializeFinalExpression);
}


static void init_SMB_initializeMessageExpression() {
    Symbol SMB_initializeMessageExpression = new_Symbol(L"initializeMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14069 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14070 = new_Send((Optr)self, SMB_messageExpression, 0);
    Array PThreadedCode14068 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14069, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14070, (Optr)&t_method_return);
    Method PMethod14067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14068, 2, PSend14069, PSend14070);
    
    MethodClosure MC_SMB_initializeMessageExpression = new_MethodClosure((Method)PMethod14067, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessageExpression, MC_SMB_initializeMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    String string_14073 = new_String(L"UNARY-ANNOTATION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend14074 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14073_Const = new_Constant((Optr)string_14073);
    // named:parsing:. 
    Send PSend14075 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14073_Const, (Optr)PSend14074);
    Array PThreadedCode14072 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14073, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14074, (Optr)&t_send2, (Optr)PSend14075, (Optr)&t_method_return);
    Method PMethod14071 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14072, 1, PSend14075);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14071, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeMessagePattern() {
    Symbol SMB_initializeMessagePattern = new_Symbol(L"initializeMessagePattern");
    String string_14078 = new_String(L"MESSAGE-PATTERN");
    Symbol SMB_keywordsArguments = new_Symbol(L"keywordsArguments");
    // keywordsArguments. 
    Send PSend14079 = new_Send((Optr)self, SMB_keywordsArguments, 0);
    Symbol SMB_binaryMessageDefinition = new_Symbol(L"binaryMessageDefinition");
    // binaryMessageDefinition. 
    Send PSend14080 = new_Send((Optr)self, SMB_binaryMessageDefinition, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14081 = new_Send((Optr)PSend14079, SMB__or_, 1, (Optr)PSend14080);
    Symbol SMB_unaryMessageDefinition = new_Symbol(L"unaryMessageDefinition");
    // unaryMessageDefinition. 
    Send PSend14082 = new_Send((Optr)self, SMB_unaryMessageDefinition, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14083 = new_Send((Optr)PSend14081, SMB__lt__equals_, 1, (Optr)PSend14082);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14078_Const = new_Constant((Optr)string_14078);
    // named:parsing:. 
    Send PSend14084 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14078_Const, (Optr)PSend14083);
    Array PThreadedCode14077 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14078, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14079, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14080, (Optr)&t_send1, (Optr)PSend14081, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14082, (Optr)&t_send1, (Optr)PSend14083, (Optr)&t_send2, (Optr)PSend14084, (Optr)&t_method_return);
    Method PMethod14076 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14077, 1, PSend14084);
    
    MethodClosure MC_SMB_initializeMessagePattern = new_MethodClosure((Method)PMethod14076, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessagePattern, MC_SMB_initializeMessagePattern);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign14087 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode14086 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign14087, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14085 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14086, 2, PAssign14087, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod14085, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
    store_method(HEADER(Smalltalk_Parser_SmalltalkGrammar_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper14093 = new_Super(SMB_new, 0);
    Assign PAssign14092 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)PSuper14093);
    Array PThreadedCode14091 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14092, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14093, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock14090 = new_Block_with(empty_Array, empty_Array, PThreadedCode14091, 1, PAssign14092);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend14094 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock14090);
    Array PThreadedCode14089 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock14090, (Optr)&t_send1, (Optr)PSend14094, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_method_return);
    Method PMethod14088 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14089, 2, PSend14094, slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod14088, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
    store_method(HEADER(Smalltalk_Parser_SmalltalkGrammar_Class), SMB_instance, MC_SMB_instance);
}

void init_Smalltalk_Parser_PSmalltalkGrammar_layout() {
    slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance = (Optr)new_Slot(5, L"instance");
    layout_Smalltalk_Parser_SmalltalkGrammar_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Smalltalk_Parser_SmalltalkGrammar_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Parser_SmalltalkGrammar_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Parser_SmalltalkGrammar_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Parser_SmalltalkGrammar_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Parser_SmalltalkGrammar_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Smalltalk_Parser_SmalltalkGrammar_Class_class)->values[5] = slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance; // instance 
    
    Symbol  SMB_SmalltalkGrammar = new_Symbol(L"SmalltalkGrammar");
    layout_Smalltalk_Parser_SmalltalkGrammar = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Smalltalk_Parser_SmalltalkGrammar)->values[0] = slot_Smalltalk_Parser_AbstractGrammar_parsers; // parsers 
    Smalltalk_Parser_SmalltalkGrammar_Class = (Class)new_Class(Smalltalk_Parser_AbstractGrammar_Class, layout_Smalltalk_Parser_SmalltalkGrammar_Class_class);
    Smalltalk_Parser_SmalltalkGrammar_Class->layout = layout_Smalltalk_Parser_SmalltalkGrammar;
    Smalltalk_Parser_SmalltalkGrammar_Class->name = SMB_SmalltalkGrammar;
    
}

void init_Smalltalk_Parser_PSmalltalkGrammar_methods() {
    init_SMB_initializeUnaryMessageExpression();
    init_SMB_initializeUnarySelector();
    init_SMB_initializeNumber();
    init_SMB_initializeUnaryObjectDescription();
    init_SMB_initializeVariableName();
    init_SMB_assignmentOp();
    init_SMB_initializeCapitalIdentifier();
    init_SMB_initializeBinarySelector();
    init_SMB_initializeStringConstant();
    init_SMB_initializeParameterName();
    init_SMB_initializeKeywordExpression();
    init_SMB_initializeBracketIndexExpression();
    init_SMB_initializeBinaryExpression();
    init_SMB_initializeScopedExpression();
    init_SMB_initializeCharacterConstant();
    init_SMB_initializeNumberFormat();
    init_SMB_initializeMethod();
    init_SMB_initializeUnaryMessageDefinition();
    init_SMB_preStorePrimary();
    init_SMB_initializeKeyword();
    init_SMB_initializeUppercase();
    init_SMB_preStoreMessageExpression();
    init_SMB_initializeUnaryExpression();
    init_SMB_initializeSymbol();
    init_SMB_initializePrimaryVariable();
    init_SMB_initializeKeywordsArguments();
    init_SMB_preStoreBracketIndexExpression();
    init_SMB_initializePrimary();
    init_SMB_parseMethod_();
    init_SMB_initializeDecimalDigit();
    init_SMB_initializeTemporaries();
    init_SMB_initializeKeywordMessageExpression();
    init_SMB_initializeSymbolKeywords();
    init_SMB_initializeSpecialCharacter();
    init_SMB_preStoreCascadedMessageExpression();
    init_SMB_parseStatements_();
    init_SMB_preStoreBinaryObjectDescription();
    init_SMB_initializeBlock();
    init_SMB_initializeIdentifier();
    init_SMB_injectCascadedMessageExpression();
    init_SMB_initializeCascadedMessageExpression();
    init_SMB_initializeRadix();
    init_SMB_initializeSymbolInArray();
    init_SMB_initializeStatements();
    init_SMB_initializeSymbolConstant();
    init_SMB_initializeArray();
    init_SMB_initializeKeywordAnnotation();
    init_SMB_initializeExpression();
    init_SMB_initializeFloat();
    init_SMB_initializeBlockArguments();
    init_SMB_initializeCommentFormat();
    init_SMB_initializeSeparator();
    init_SMB_initializeBraceExpression();
    init_SMB_injectBinaryObjectDescription();
    init_SMB_initializeLowercase();
    init_SMB_injectMessageExpression();
    init_SMB_initializeIdentifierBody();
    init_SMB_initializeLiteral();
    init_SMB_initializeBinaryMessageExpression();
    init_SMB_initializeString();
    init_SMB_test();
    init_SMB_initializeSubExpression();
    init_SMB_initializeAnnotations();
    init_SMB_initializeArrayConstant();
    init_SMB_initializeBinaryObjectDescription();
    init_SMB_initializeStringSegment();
    init_SMB_initializeBar();
    init_SMB_initializeBinaryMessageDefinition();
    init_SMB_initializeReturn();
    init_SMB_initializeNumberConstant();
    init_SMB_initializeCharacter();
    init_SMB_injectPrimary();
    init_SMB_initializeLetter();
    init_SMB_initializeAssignmentExpressions();
    init_SMB_initializeFinalExpression();
    init_SMB_initializeMessageExpression();
    init_SMB_initializeUnaryAnnotation();
    init_SMB_initializeMessagePattern();
    init_class_SMB_reset();
    init_class_SMB_instance();
    
}