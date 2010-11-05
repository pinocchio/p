#include <lib/class/Smalltalk/Parser/SmalltalkGrammar.h>


Optr slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance;
Optr layout_Smalltalk_Parser_SmalltalkGrammar_Class_class;
Optr layout_Smalltalk_Parser_SmalltalkGrammar;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    String string_13400 = new_String(L"UNARY-MESSAGE-EXPRESSION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13401 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13400_Const = new_Constant((Optr)string_13400);
    // named:parsing:. 
    Send PSend13402 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13400_Const, (Optr)PSend13401);
    Array PThreadedCode13399 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13400, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13401, (Optr)&t_send2, (Optr)PSend13402, (Optr)&t_method_return);
    Method PMethod13398 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13399, 1, PSend13402);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod13398, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    String string_13405 = new_String(L"UNARY-SELECTOR");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13406 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13407 = new_String(L":");
    Constant string_13407_Const = new_Constant((Optr)string_13407);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13408 = new_Send((Optr)string_13407_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13409 = new_Send((Optr)PSend13408, SMB_not, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13410 = new_Send((Optr)PSend13406, SMB__logicAnd_, 1, (Optr)PSend13409);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13405_Const = new_Constant((Optr)string_13405);
    // named:parsing:. 
    Send PSend13411 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13405_Const, (Optr)PSend13410);
    Array PThreadedCode13404 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13405, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13406, (Optr)&t_push1, (Optr)string_13407, (Optr)&t_send0, (Optr)PSend13408, (Optr)&t_send0, (Optr)PSend13409, (Optr)&t_send1, (Optr)PSend13410, (Optr)&t_send2, (Optr)PSend13411, (Optr)&t_method_return);
    Method PMethod13403 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13404, 1, PSend13411);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod13403, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    String string_13414 = new_String(L"NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13415 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13414_Const = new_Constant((Optr)string_13414);
    // named:parsing:. 
    Send PSend13416 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13414_Const, (Optr)PSend13415);
    Array PThreadedCode13413 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13414, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13415, (Optr)&t_send2, (Optr)PSend13416, (Optr)&t_method_return);
    Method PMethod13412 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13413, 1, PSend13416);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod13412, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    String string_13419 = new_String(L"UNARY-OBJECT-DESCRIPTION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13420 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13421 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13422 = new_Send((Optr)PSend13421, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13423 = new_Send((Optr)PSend13420, SMB__and_, 1, (Optr)PSend13422);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13419_Const = new_Constant((Optr)string_13419);
    // named:parsing:. 
    Send PSend13424 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13419_Const, (Optr)PSend13423);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13425 = new_Send((Optr)PSend13424, SMB_memo, 0);
    Array PThreadedCode13418 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13419, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13420, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13421, (Optr)&t_send0, (Optr)PSend13422, (Optr)&t_send1, (Optr)PSend13423, (Optr)&t_send2, (Optr)PSend13424, (Optr)&t_send0, (Optr)PSend13425, (Optr)&t_method_return);
    Method PMethod13417 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13418, 1, PSend13425);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod13417, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    String string_13428 = new_String(L"VARIABLE-NAME");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13429 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13428_Const = new_Constant((Optr)string_13428);
    // named:parsing:. 
    Send PSend13430 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13428_Const, (Optr)PSend13429);
    Array PThreadedCode13427 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13428, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13429, (Optr)&t_send2, (Optr)PSend13430, (Optr)&t_method_return);
    Method PMethod13426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13427, 1, PSend13430);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod13426, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_assignmentOp() {
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    String string_13433 = new_String(L":=");
    Constant string_13433_Const = new_Constant((Optr)string_13433);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13434 = new_Send((Optr)string_13433_Const, SMB_asParser, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13435 = new_Send((Optr)PSend13434, SMB_omit, 0);
    Array PThreadedCode13432 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)string_13433, (Optr)&t_send0, (Optr)PSend13434, (Optr)&t_send0, (Optr)PSend13435, (Optr)&t_method_return);
    Method PMethod13431 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13432, 1, PSend13435);
    
    MethodClosure MC_SMB_assignmentOp = new_MethodClosure((Method)PMethod13431, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_assignmentOp, MC_SMB_assignmentOp);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    String string_13438 = new_String(L"CAPITAL-IDENTIFIER");
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13439 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13440 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13441 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13442 = new_Send((Optr)PSend13440, SMB__or_, 1, (Optr)PSend13441);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13443 = new_Send((Optr)PSend13442, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13444 = new_Send((Optr)PSend13439, SMB__logicAnd_, 1, (Optr)PSend13443);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13438_Const = new_Constant((Optr)string_13438);
    // named:parsing:. 
    Send PSend13445 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13438_Const, (Optr)PSend13444);
    Array PThreadedCode13437 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13438, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13439, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13440, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13441, (Optr)&t_send1, (Optr)PSend13442, (Optr)&t_send0, (Optr)PSend13443, (Optr)&t_send1, (Optr)PSend13444, (Optr)&t_send2, (Optr)PSend13445, (Optr)&t_method_return);
    Method PMethod13436 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13437, 1, PSend13445);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod13436, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    String string_13448 = new_String(L"BINARY-SELECTOR");
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13449 = new_Send((Optr)self, SMB_specialCharacter, 0);
    String string_13450 = new_String(L"-");
    Constant string_13450_Const = new_Constant((Optr)string_13450);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13451 = new_Send((Optr)string_13450_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13452 = new_Send((Optr)PSend13451, SMB_consume, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13453 = new_Send((Optr)PSend13449, SMB__or_, 1, (Optr)PSend13452);
    // specialCharacter. 
    Send PSend13454 = new_Send((Optr)self, SMB_specialCharacter, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13455 = new_Send((Optr)PSend13454, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13456 = new_Send((Optr)PSend13453, SMB__logicAnd_, 1, (Optr)PSend13455);
    String string_13457 = new_String(L"|");
    Constant string_13457_Const = new_Constant((Optr)string_13457);
    // asParser. 
    Send PSend13458 = new_Send((Optr)string_13457_Const, SMB_asParser, 0);
    // consume. 
    Send PSend13459 = new_Send((Optr)PSend13458, SMB_consume, 0);
    // |. 
    Send PSend13460 = new_Send((Optr)PSend13456, SMB__or_, 1, (Optr)PSend13459);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13448_Const = new_Constant((Optr)string_13448);
    // named:parsing:. 
    Send PSend13461 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13448_Const, (Optr)PSend13460);
    Array PThreadedCode13447 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13448, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13449, (Optr)&t_push1, (Optr)string_13450, (Optr)&t_send0, (Optr)PSend13451, (Optr)&t_send0, (Optr)PSend13452, (Optr)&t_send1, (Optr)PSend13453, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13454, (Optr)&t_send0, (Optr)PSend13455, (Optr)&t_send1, (Optr)PSend13456, (Optr)&t_push1, (Optr)string_13457, (Optr)&t_send0, (Optr)PSend13458, (Optr)&t_send0, (Optr)PSend13459, (Optr)&t_send1, (Optr)PSend13460, (Optr)&t_send2, (Optr)PSend13461, (Optr)&t_method_return);
    Method PMethod13446 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13447, 1, PSend13461);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod13446, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    String string_13464 = new_String(L"STRING-CONSTANT");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13465 = new_Send((Optr)self, SMB_string, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13464_Const = new_Constant((Optr)string_13464);
    // named:parsing:. 
    Send PSend13466 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13464_Const, (Optr)PSend13465);
    Array PThreadedCode13463 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13464, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13465, (Optr)&t_send2, (Optr)PSend13466, (Optr)&t_method_return);
    Method PMethod13462 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13463, 1, PSend13466);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod13462, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeParameterName() {
    Symbol SMB_initializeParameterName = new_Symbol(L"initializeParameterName");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13469 = new_Send((Optr)self, SMB_identifier, 0);
    Array PThreadedCode13468 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13469, (Optr)&t_method_return);
    Method PMethod13467 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13468, 1, PSend13469);
    
    MethodClosure MC_SMB_initializeParameterName = new_MethodClosure((Method)PMethod13467, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeParameterName, MC_SMB_initializeParameterName);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    String string_13472 = new_String(L"KEYWORD-EXPRESSION");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13473 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13474 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    // bracketIndexExpression. 
    Send PSend13475 = new_Send((Optr)self, SMB_bracketIndexExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13476 = new_Send((Optr)PSend13474, SMB__or_, 1, (Optr)PSend13475);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13477 = new_Send((Optr)PSend13473, SMB__and_, 1, (Optr)PSend13476);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13472_Const = new_Constant((Optr)string_13472);
    // named:parsing:. 
    Send PSend13478 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13472_Const, (Optr)PSend13477);
    Array PThreadedCode13471 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13472, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13473, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13474, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13475, (Optr)&t_send1, (Optr)PSend13476, (Optr)&t_send1, (Optr)PSend13477, (Optr)&t_send2, (Optr)PSend13478, (Optr)&t_method_return);
    Method PMethod13470 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13471, 1, PSend13478);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod13470, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    String string_13481 = new_String(L"BRACKET-INDEX-EXPRESSION");
    String string_13482 = new_String(L"[");
    Constant string_13482_Const = new_Constant((Optr)string_13482);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13483 = new_Send((Optr)string_13482_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13484 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13485 = new_Send((Optr)PSend13483, SMB__and_, 1, (Optr)PSend13484);
    String string_13486 = new_String(L"]");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13486_Const = new_Constant((Optr)string_13486);
    // <&. 
    Send PSend13487 = new_Send((Optr)PSend13485, SMB__lt__and_, 1, (Optr)string_13486_Const);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend13488 = new_Send((Optr)self, SMB_assignmentOp, 0);
    // expression. 
    Send PSend13489 = new_Send((Optr)self, SMB_expression, 0);
    // &. 
    Send PSend13490 = new_Send((Optr)PSend13488, SMB__and_, 1, (Optr)PSend13489);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13491 = new_Send((Optr)PSend13490, SMB_optional, 0);
    // <&. 
    Send PSend13492 = new_Send((Optr)PSend13487, SMB__lt__and_, 1, (Optr)PSend13491);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13481_Const = new_Constant((Optr)string_13481);
    // named:parsing:. 
    Send PSend13493 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13481_Const, (Optr)PSend13492);
    Array PThreadedCode13480 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13481, (Optr)&t_push1, (Optr)string_13482, (Optr)&t_send0, (Optr)PSend13483, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13484, (Optr)&t_send1, (Optr)PSend13485, (Optr)&t_push1, (Optr)string_13486, (Optr)&t_send1, (Optr)PSend13487, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13488, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13489, (Optr)&t_send1, (Optr)PSend13490, (Optr)&t_send0, (Optr)PSend13491, (Optr)&t_send1, (Optr)PSend13492, (Optr)&t_send2, (Optr)PSend13493, (Optr)&t_method_return);
    Method PMethod13479 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13480, 1, PSend13493);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod13479, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    // preStoreBinaryObjectDescription. 
    Send PSend13496 = new_Send((Optr)self, SMB_preStoreBinaryObjectDescription, 0);
    Symbol  SMB_binaryExpression = new_Symbol(L"binaryExpression");
    String string_13497 = new_String(L"BINARY-EXPRESSION");
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13498 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13499 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13500 = new_Send((Optr)PSend13498, SMB__and_, 1, (Optr)PSend13499);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13501 = new_Send((Optr)PSend13500, SMB_plus, 0);
    // unaryObjectDescription. 
    Send PSend13502 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    // &. 
    Send PSend13503 = new_Send((Optr)PSend13501, SMB__and_, 1, (Optr)PSend13502);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13497_Const = new_Constant((Optr)string_13497);
    // named:parsing:. 
    Send PSend13504 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13497_Const, (Optr)PSend13503);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryExpression_Const = new_Constant((Optr)SMB_binaryExpression);
    // at:ifAbsentPut:. 
    Send PSend13505 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryExpression_Const, (Optr)PSend13504);
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    // injectBinaryObjectDescription. 
    Send PSend13506 = new_Send((Optr)self, SMB_injectBinaryObjectDescription, 0);
    // binaryExpression. 
    Send PSend13507 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Array PThreadedCode13495 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13496, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryExpression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13497, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13498, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13499, (Optr)&t_send1, (Optr)PSend13500, (Optr)&t_send0, (Optr)PSend13501, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13502, (Optr)&t_send1, (Optr)PSend13503, (Optr)&t_send2, (Optr)PSend13504, (Optr)&t_send2, (Optr)PSend13505, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13506, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13507, (Optr)&t_method_return);
    Method PMethod13494 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13495, 4, PSend13496, PSend13505, PSend13506, PSend13507);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod13494, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    String string_13510 = new_String(L"SCOPED-EXPRESSION");
    String string_13511 = new_String(L"(");
    Constant string_13511_Const = new_Constant((Optr)string_13511);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13512 = new_Send((Optr)string_13511_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13513 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13514 = new_Send((Optr)PSend13512, SMB__and_, 1, (Optr)PSend13513);
    String string_13515 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13515_Const = new_Constant((Optr)string_13515);
    // <&. 
    Send PSend13516 = new_Send((Optr)PSend13514, SMB__lt__and_, 1, (Optr)string_13515_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13510_Const = new_Constant((Optr)string_13510);
    // named:parsing:. 
    Send PSend13517 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13510_Const, (Optr)PSend13516);
    Array PThreadedCode13509 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13510, (Optr)&t_push1, (Optr)string_13511, (Optr)&t_send0, (Optr)PSend13512, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13513, (Optr)&t_send1, (Optr)PSend13514, (Optr)&t_push1, (Optr)string_13515, (Optr)&t_send1, (Optr)PSend13516, (Optr)&t_send2, (Optr)PSend13517, (Optr)&t_method_return);
    Method PMethod13508 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13509, 1, PSend13517);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod13508, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    String string_13520 = new_String(L"CHARACTER-CONSTANT");
    String string_13521 = new_String(L"$");
    Constant string_13521_Const = new_Constant((Optr)string_13521);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13522 = new_Send((Optr)string_13521_Const, SMB_asParser, 0);
    Symbol SMB_character = new_Symbol(L"character");
    // character. 
    Send PSend13523 = new_Send((Optr)self, SMB_character, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13524 = new_Send((Optr)PSend13522, SMB__logicAnd_, 1, (Optr)PSend13523);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13520_Const = new_Constant((Optr)string_13520);
    // named:parsing:. 
    Send PSend13525 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13520_Const, (Optr)PSend13524);
    Array PThreadedCode13519 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13520, (Optr)&t_push1, (Optr)string_13521, (Optr)&t_send0, (Optr)PSend13522, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13523, (Optr)&t_send1, (Optr)PSend13524, (Optr)&t_send2, (Optr)PSend13525, (Optr)&t_method_return);
    Method PMethod13518 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13519, 1, PSend13525);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod13518, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    String string_13528 = new_String(L"NUMBER-FORMAT");
    String string_13529 = new_String(L"-");
    Constant string_13529_Const = new_Constant((Optr)string_13529);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13530 = new_Send((Optr)string_13529_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13531 = new_Send((Optr)PSend13530, SMB_consume, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13532 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13533 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13534 = new_Send((Optr)PSend13532, SMB__or_, 1, (Optr)PSend13533);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13535 = new_Send((Optr)PSend13534, SMB_strongPlus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13536 = new_Send((Optr)PSend13531, SMB__and_, 1, (Optr)PSend13535);
    // decimalDigit. 
    Send PSend13537 = new_Send((Optr)self, SMB_decimalDigit, 0);
    // uppercase. 
    Send PSend13538 = new_Send((Optr)self, SMB_uppercase, 0);
    // |. 
    Send PSend13539 = new_Send((Optr)PSend13537, SMB__or_, 1, (Optr)PSend13538);
    // strongPlus. 
    Send PSend13540 = new_Send((Optr)PSend13539, SMB_strongPlus, 0);
    // |. 
    Send PSend13541 = new_Send((Optr)PSend13536, SMB__or_, 1, (Optr)PSend13540);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13528_Const = new_Constant((Optr)string_13528);
    // named:parsing:. 
    Send PSend13542 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13528_Const, (Optr)PSend13541);
    Array PThreadedCode13527 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13528, (Optr)&t_push1, (Optr)string_13529, (Optr)&t_send0, (Optr)PSend13530, (Optr)&t_send0, (Optr)PSend13531, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13532, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13533, (Optr)&t_send1, (Optr)PSend13534, (Optr)&t_send0, (Optr)PSend13535, (Optr)&t_send1, (Optr)PSend13536, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13537, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13538, (Optr)&t_send1, (Optr)PSend13539, (Optr)&t_send0, (Optr)PSend13540, (Optr)&t_send1, (Optr)PSend13541, (Optr)&t_send2, (Optr)PSend13542, (Optr)&t_method_return);
    Method PMethod13526 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13527, 1, PSend13542);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod13526, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    String string_13545 = new_String(L"METHOD");
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend13546 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_messagePattern = new_Symbol(L"messagePattern");
    // messagePattern. 
    Send PSend13547 = new_Send((Optr)self, SMB_messagePattern, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13548 = new_Send((Optr)PSend13546, SMB__and_, 1, (Optr)PSend13547);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13549 = new_Send((Optr)self, SMB_annotations, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13550 = new_Send((Optr)PSend13548, SMB__lt__and_, 1, (Optr)PSend13549);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13551 = new_Send((Optr)self, SMB_temporaries, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13552 = new_Send((Optr)PSend13551, SMB_optional, 0);
    // <&. 
    Send PSend13553 = new_Send((Optr)PSend13550, SMB__lt__and_, 1, (Optr)PSend13552);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13554 = new_Send((Optr)self, SMB_statements, 0);
    // <&. 
    Send PSend13555 = new_Send((Optr)PSend13553, SMB__lt__and_, 1, (Optr)PSend13554);
    // separator. 
    Send PSend13556 = new_Send((Optr)self, SMB_separator, 0);
    // <&. 
    Send PSend13557 = new_Send((Optr)PSend13555, SMB__lt__and_, 1, (Optr)PSend13556);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13558 = new_Send((Optr)PSend13557, SMB_end, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13545_Const = new_Constant((Optr)string_13545);
    // named:parsing:. 
    Send PSend13559 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13545_Const, (Optr)PSend13558);
    // separator. 
    Send PSend13560 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_separator_ = new_Symbol(L"separator:");
    // separator:. 
    Send PSend13561 = new_Send((Optr)PSend13559, SMB_separator_, 1, (Optr)PSend13560);
    Array PThreadedCode13544 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13545, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13546, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13547, (Optr)&t_send1, (Optr)PSend13548, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13549, (Optr)&t_send1, (Optr)PSend13550, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13551, (Optr)&t_send0, (Optr)PSend13552, (Optr)&t_send1, (Optr)PSend13553, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13554, (Optr)&t_send1, (Optr)PSend13555, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13556, (Optr)&t_send1, (Optr)PSend13557, (Optr)&t_send0, (Optr)PSend13558, (Optr)&t_send2, (Optr)PSend13559, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13560, (Optr)&t_send1, (Optr)PSend13561, (Optr)&t_method_return);
    Method PMethod13543 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13544, 1, PSend13561);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod13543, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    String string_13564 = new_String(L"UNARY-MESSAGE-DEFINITION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13565 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13564_Const = new_Constant((Optr)string_13564);
    // named:parsing:. 
    Send PSend13566 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13564_Const, (Optr)PSend13565);
    Array PThreadedCode13563 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13564, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13565, (Optr)&t_send2, (Optr)PSend13566, (Optr)&t_method_return);
    Method PMethod13562 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13563, 1, PSend13566);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod13562, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_preStorePrimary() {
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    Symbol  SMB_primary = new_Symbol(L"primary");
    String string_13571 = new_String(L"PRIMARY");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13571_Const = new_Constant((Optr)string_13571);
    // named:. 
    Send PSend13572 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13571_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13573 = new_Send((Optr)PSend13572, SMB_memo, 0);
    Array PThreadedCode13570 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13571, (Optr)&t_send1, (Optr)PSend13572, (Optr)&t_send0, (Optr)PSend13573, (Optr)&t_block_return);
    Block PBlock13569 = new_Block_with(empty_Array, empty_Array, PThreadedCode13570, 1, PSend13573);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_primary_Const = new_Constant((Optr)SMB_primary);
    // at:ifAbsentPut:. 
    Send PSend13574 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_primary_Const, (Optr)PBlock13569);
    Array PThreadedCode13568 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_primary, (Optr)&t_push_closure, (Optr)PBlock13569, (Optr)&t_send2, (Optr)PSend13574, (Optr)&t_method_return);
    Method PMethod13567 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13568, 1, PSend13574);
    
    MethodClosure MC_SMB_preStorePrimary = new_MethodClosure((Method)PMethod13567, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStorePrimary, MC_SMB_preStorePrimary);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    String string_13577 = new_String(L"KEYWORD");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13578 = new_Send((Optr)self, SMB_identifierBody, 0);
    String string_13579 = new_String(L":");
    Constant string_13579_Const = new_Constant((Optr)string_13579);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13580 = new_Send((Optr)string_13579_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13581 = new_Send((Optr)PSend13580, SMB_consume, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13582 = new_Send((Optr)PSend13578, SMB__logicAnd_, 1, (Optr)PSend13581);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13577_Const = new_Constant((Optr)string_13577);
    // named:parsing:. 
    Send PSend13583 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13577_Const, (Optr)PSend13582);
    Array PThreadedCode13576 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13577, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13578, (Optr)&t_push1, (Optr)string_13579, (Optr)&t_send0, (Optr)PSend13580, (Optr)&t_send0, (Optr)PSend13581, (Optr)&t_send1, (Optr)PSend13582, (Optr)&t_send2, (Optr)PSend13583, (Optr)&t_method_return);
    Method PMethod13575 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13576, 1, PSend13583);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod13575, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeUppercase() {
    Symbol SMB_initializeUppercase = new_Symbol(L"initializeUppercase");
    String string_13586 = new_String(L"A-Z");
    Constant string_13586_Const = new_Constant((Optr)string_13586);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13587 = new_Send((Optr)string_13586_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13585 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13586, (Optr)&t_send0, (Optr)PSend13587, (Optr)&t_method_return);
    Method PMethod13584 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13585, 1, PSend13587);
    
    MethodClosure MC_SMB_initializeUppercase = new_MethodClosure((Method)PMethod13584, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUppercase, MC_SMB_initializeUppercase);
}


static void init_SMB_preStoreMessageExpression() {
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    Symbol  SMB_messageExpression = new_Symbol(L"messageExpression");
    String string_13592 = new_String(L"MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13592_Const = new_Constant((Optr)string_13592);
    // named:. 
    Send PSend13593 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13592_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13594 = new_Send((Optr)PSend13593, SMB_memo, 0);
    Array PThreadedCode13591 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13592, (Optr)&t_send1, (Optr)PSend13593, (Optr)&t_send0, (Optr)PSend13594, (Optr)&t_block_return);
    Block PBlock13590 = new_Block_with(empty_Array, empty_Array, PThreadedCode13591, 1, PSend13594);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_messageExpression_Const = new_Constant((Optr)SMB_messageExpression);
    // at:ifAbsentPut:. 
    Send PSend13595 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_messageExpression_Const, (Optr)PBlock13590);
    Array PThreadedCode13589 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_messageExpression, (Optr)&t_push_closure, (Optr)PBlock13590, (Optr)&t_send2, (Optr)PSend13595, (Optr)&t_method_return);
    Method PMethod13588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13589, 1, PSend13595);
    
    MethodClosure MC_SMB_preStoreMessageExpression = new_MethodClosure((Method)PMethod13588, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreMessageExpression, MC_SMB_preStoreMessageExpression);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    String string_13598 = new_String(L"UNARY-EXPRESSION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13599 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13600 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13601 = new_Send((Optr)PSend13600, SMB_plus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13602 = new_Send((Optr)PSend13599, SMB__and_, 1, (Optr)PSend13601);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13598_Const = new_Constant((Optr)string_13598);
    // named:parsing:. 
    Send PSend13603 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13598_Const, (Optr)PSend13602);
    Array PThreadedCode13597 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13598, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13599, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13600, (Optr)&t_send0, (Optr)PSend13601, (Optr)&t_send1, (Optr)PSend13602, (Optr)&t_send2, (Optr)PSend13603, (Optr)&t_method_return);
    Method PMethod13596 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13597, 1, PSend13603);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod13596, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeSymbol() {
    Symbol SMB_initializeSymbol = new_Symbol(L"initializeSymbol");
    String string_13606 = new_String(L"SYMBOL");
    Symbol SMB_symbolKeywords = new_Symbol(L"symbolKeywords");
    // symbolKeywords. 
    Send PSend13607 = new_Send((Optr)self, SMB_symbolKeywords, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13608 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13609 = new_Send((Optr)PSend13607, SMB__or_, 1, (Optr)PSend13608);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13610 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13611 = new_Send((Optr)PSend13609, SMB__lt__equals_, 1, (Optr)PSend13610);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13612 = new_Send((Optr)self, SMB_string, 0);
    // <=. 
    Send PSend13613 = new_Send((Optr)PSend13611, SMB__lt__equals_, 1, (Optr)PSend13612);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13606_Const = new_Constant((Optr)string_13606);
    // named:parsing:. 
    Send PSend13614 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13606_Const, (Optr)PSend13613);
    Array PThreadedCode13605 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13606, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13607, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13608, (Optr)&t_send1, (Optr)PSend13609, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13610, (Optr)&t_send1, (Optr)PSend13611, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13612, (Optr)&t_send1, (Optr)PSend13613, (Optr)&t_send2, (Optr)PSend13614, (Optr)&t_method_return);
    Method PMethod13604 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13605, 1, PSend13614);
    
    MethodClosure MC_SMB_initializeSymbol = new_MethodClosure((Method)PMethod13604, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbol, MC_SMB_initializeSymbol);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    String string_13617 = new_String(L"PRIMARY-VARIABLE");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13618 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13619 = new_String(L".");
    Constant string_13619_Const = new_Constant((Optr)string_13619);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13620 = new_Send((Optr)string_13619_Const, SMB_asParser, 0);
    // identifier. 
    Send PSend13621 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13622 = new_Send((Optr)PSend13620, SMB__logicAnd_, 1, (Optr)PSend13621);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13623 = new_Send((Optr)PSend13622, SMB_strongTimes, 0);
    // &&. 
    Send PSend13624 = new_Send((Optr)PSend13618, SMB__logicAnd_, 1, (Optr)PSend13623);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13617_Const = new_Constant((Optr)string_13617);
    // named:parsing:. 
    Send PSend13625 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13617_Const, (Optr)PSend13624);
    Array PThreadedCode13616 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13617, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13618, (Optr)&t_push1, (Optr)string_13619, (Optr)&t_send0, (Optr)PSend13620, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13621, (Optr)&t_send1, (Optr)PSend13622, (Optr)&t_send0, (Optr)PSend13623, (Optr)&t_send1, (Optr)PSend13624, (Optr)&t_send2, (Optr)PSend13625, (Optr)&t_method_return);
    Method PMethod13615 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13616, 1, PSend13625);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod13615, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    String string_13628 = new_String(L"KEYWORDS-ARGUMENTS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13629 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13630 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13631 = new_Send((Optr)PSend13629, SMB__and_, 1, (Optr)PSend13630);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13632 = new_Send((Optr)PSend13631, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13628_Const = new_Constant((Optr)string_13628);
    // named:parsing:. 
    Send PSend13633 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13628_Const, (Optr)PSend13632);
    Array PThreadedCode13627 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13628, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13629, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13630, (Optr)&t_send1, (Optr)PSend13631, (Optr)&t_send0, (Optr)PSend13632, (Optr)&t_send2, (Optr)PSend13633, (Optr)&t_method_return);
    Method PMethod13626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13627, 1, PSend13633);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod13626, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_preStoreBracketIndexExpression() {
    Symbol SMB_preStoreBracketIndexExpression = new_Symbol(L"preStoreBracketIndexExpression");
    Symbol  SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    String string_13638 = new_String(L"BRACKET-INDEX-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13638_Const = new_Constant((Optr)string_13638);
    // named:. 
    Send PSend13639 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13638_Const);
    Array PThreadedCode13637 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13638, (Optr)&t_send1, (Optr)PSend13639, (Optr)&t_block_return);
    Block PBlock13636 = new_Block_with(empty_Array, empty_Array, PThreadedCode13637, 1, PSend13639);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_bracketIndexExpression_Const = new_Constant((Optr)SMB_bracketIndexExpression);
    // at:ifAbsentPut:. 
    Send PSend13640 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_bracketIndexExpression_Const, (Optr)PBlock13636);
    Array PThreadedCode13635 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_bracketIndexExpression, (Optr)&t_push_closure, (Optr)PBlock13636, (Optr)&t_send2, (Optr)PSend13640, (Optr)&t_method_return);
    Method PMethod13634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13635, 1, PSend13640);
    
    MethodClosure MC_SMB_preStoreBracketIndexExpression = new_MethodClosure((Method)PMethod13634, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBracketIndexExpression, MC_SMB_preStoreBracketIndexExpression);
}


static void init_SMB_initializePrimary() {
    Symbol SMB_initializePrimary = new_Symbol(L"initializePrimary");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13643 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13644 = new_Send((Optr)self, SMB_primary, 0);
    Array PThreadedCode13642 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13643, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13644, (Optr)&t_method_return);
    Method PMethod13641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13642, 2, PSend13643, PSend13644);
    
    MethodClosure MC_SMB_initializePrimary = new_MethodClosure((Method)PMethod13641, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimary, MC_SMB_initializePrimary);
}


static void init_SMB_parseMethod_() {
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray13646 = new_Array_with(1, (Optr)VAR_method_0_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend13648 = new_Send((Optr)self, SMB_method, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13649 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_method_0_0, (Optr)PSend13648);
    Array PThreadedCode13647 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13648, (Optr)&t_send2, (Optr)PSend13649, (Optr)&t_method_return);
    Method PMethod13645 = new_Method_with(PArray13646, empty_Array, empty_Array, PThreadedCode13647, 1, PSend13649);
    
    MethodClosure MC_SMB_parseMethod_ = new_MethodClosure((Method)PMethod13645, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseMethod_, MC_SMB_parseMethod_);
}


static void init_SMB_initializeDecimalDigit() {
    Symbol SMB_initializeDecimalDigit = new_Symbol(L"initializeDecimalDigit");
    String string_13652 = new_String(L"0-9");
    Constant string_13652_Const = new_Constant((Optr)string_13652);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13653 = new_Send((Optr)string_13652_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13651 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13652, (Optr)&t_send0, (Optr)PSend13653, (Optr)&t_method_return);
    Method PMethod13650 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13651, 1, PSend13653);
    
    MethodClosure MC_SMB_initializeDecimalDigit = new_MethodClosure((Method)PMethod13650, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeDecimalDigit, MC_SMB_initializeDecimalDigit);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    String string_13656 = new_String(L"TEMPORARIES");
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13657 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend13658 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13659 = new_Send((Optr)PSend13658, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13660 = new_Send((Optr)PSend13657, SMB__and_, 1, (Optr)PSend13659);
    // bar. 
    Send PSend13661 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13662 = new_Send((Optr)PSend13660, SMB__lt__and_, 1, (Optr)PSend13661);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13656_Const = new_Constant((Optr)string_13656);
    // named:parsing:. 
    Send PSend13663 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13656_Const, (Optr)PSend13662);
    Array PThreadedCode13655 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13656, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13657, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13658, (Optr)&t_send0, (Optr)PSend13659, (Optr)&t_send1, (Optr)PSend13660, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13661, (Optr)&t_send1, (Optr)PSend13662, (Optr)&t_send2, (Optr)PSend13663, (Optr)&t_method_return);
    Method PMethod13654 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13655, 1, PSend13663);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod13654, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    String string_13666 = new_String(L"KEYWORD-MESSAGE-EXPRESSION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13667 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13668 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13669 = new_Send((Optr)PSend13667, SMB__and_, 1, (Optr)PSend13668);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13670 = new_Send((Optr)PSend13669, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13666_Const = new_Constant((Optr)string_13666);
    // named:parsing:. 
    Send PSend13671 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13666_Const, (Optr)PSend13670);
    Array PThreadedCode13665 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13666, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13667, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13668, (Optr)&t_send1, (Optr)PSend13669, (Optr)&t_send0, (Optr)PSend13670, (Optr)&t_send2, (Optr)PSend13671, (Optr)&t_method_return);
    Method PMethod13664 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13665, 1, PSend13671);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod13664, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    String string_13674 = new_String(L"SYMBOL-KEYWORDS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13675 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13676 = new_Send((Optr)PSend13675, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13674_Const = new_Constant((Optr)string_13674);
    // named:parsing:. 
    Send PSend13677 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13674_Const, (Optr)PSend13676);
    Array PThreadedCode13673 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13674, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13675, (Optr)&t_send0, (Optr)PSend13676, (Optr)&t_send2, (Optr)PSend13677, (Optr)&t_method_return);
    Method PMethod13672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13673, 1, PSend13677);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod13672, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeSpecialCharacter() {
    Symbol SMB_initializeSpecialCharacter = new_Symbol(L"initializeSpecialCharacter");
    String string_13680 = new_String(L"+*/\\~<>=@%?!&`,");
    Constant string_13680_Const = new_Constant((Optr)string_13680);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13681 = new_Send((Optr)string_13680_Const, SMB_asPEGChoice, 0);
    Array PThreadedCode13679 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13680, (Optr)&t_send0, (Optr)PSend13681, (Optr)&t_method_return);
    Method PMethod13678 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13679, 1, PSend13681);
    
    MethodClosure MC_SMB_initializeSpecialCharacter = new_MethodClosure((Method)PMethod13678, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSpecialCharacter, MC_SMB_initializeSpecialCharacter);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Symbol  SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    String string_13686 = new_String(L"CASCADED-MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13686_Const = new_Constant((Optr)string_13686);
    // named:. 
    Send PSend13687 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13686_Const);
    Array PThreadedCode13685 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13686, (Optr)&t_send1, (Optr)PSend13687, (Optr)&t_block_return);
    Block PBlock13684 = new_Block_with(empty_Array, empty_Array, PThreadedCode13685, 1, PSend13687);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_cascadedMessageExpression_Const = new_Constant((Optr)SMB_cascadedMessageExpression);
    // at:ifAbsentPut:. 
    Send PSend13688 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_cascadedMessageExpression_Const, (Optr)PBlock13684);
    Array PThreadedCode13683 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_cascadedMessageExpression, (Optr)&t_push_closure, (Optr)PBlock13684, (Optr)&t_send2, (Optr)PSend13688, (Optr)&t_method_return);
    Method PMethod13682 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13683, 1, PSend13688);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod13682, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_parseStatements_() {
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    Variable VAR_statements_0_0 = new_Variable_named(L"statements", 0);
    Array PArray13690 = new_Array_with(1, (Optr)VAR_statements_0_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13692 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13693 = new_Send((Optr)PSend13692, SMB_end, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13694 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_statements_0_0, (Optr)PSend13693);
    Array PThreadedCode13691 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13692, (Optr)&t_send0, (Optr)PSend13693, (Optr)&t_send2, (Optr)PSend13694, (Optr)&t_method_return);
    Method PMethod13689 = new_Method_with(PArray13690, empty_Array, empty_Array, PThreadedCode13691, 1, PSend13694);
    
    MethodClosure MC_SMB_parseStatements_ = new_MethodClosure((Method)PMethod13689, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseStatements_, MC_SMB_parseStatements_);
}


static void init_SMB_preStoreBinaryObjectDescription() {
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    Symbol  SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    String string_13699 = new_String(L"BINARY-OBJECT-DESCRIPTION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13699_Const = new_Constant((Optr)string_13699);
    // named:. 
    Send PSend13700 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13699_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13701 = new_Send((Optr)PSend13700, SMB_memo, 0);
    Array PThreadedCode13698 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13699, (Optr)&t_send1, (Optr)PSend13700, (Optr)&t_send0, (Optr)PSend13701, (Optr)&t_block_return);
    Block PBlock13697 = new_Block_with(empty_Array, empty_Array, PThreadedCode13698, 1, PSend13701);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryObjectDescription_Const = new_Constant((Optr)SMB_binaryObjectDescription);
    // at:ifAbsentPut:. 
    Send PSend13702 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryObjectDescription_Const, (Optr)PBlock13697);
    Array PThreadedCode13696 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryObjectDescription, (Optr)&t_push_closure, (Optr)PBlock13697, (Optr)&t_send2, (Optr)PSend13702, (Optr)&t_method_return);
    Method PMethod13695 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13696, 1, PSend13702);
    
    MethodClosure MC_SMB_preStoreBinaryObjectDescription = new_MethodClosure((Method)PMethod13695, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBinaryObjectDescription, MC_SMB_preStoreBinaryObjectDescription);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    String string_13705 = new_String(L"BLOCK");
    String string_13706 = new_String(L"[");
    Constant string_13706_Const = new_Constant((Optr)string_13706);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13707 = new_Send((Optr)string_13706_Const, SMB_asParser, 0);
    Symbol SMB_blockArguments = new_Symbol(L"blockArguments");
    // blockArguments. 
    Send PSend13708 = new_Send((Optr)self, SMB_blockArguments, 0);
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13709 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13710 = new_Send((Optr)PSend13708, SMB__and_, 1, (Optr)PSend13709);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13711 = new_Send((Optr)PSend13710, SMB_optional, 0);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13712 = new_Send((Optr)self, SMB_temporaries, 0);
    // optional. 
    Send PSend13713 = new_Send((Optr)PSend13712, SMB_optional, 0);
    // &. 
    Send PSend13714 = new_Send((Optr)PSend13711, SMB__and_, 1, (Optr)PSend13713);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13715 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13716 = new_Send((Optr)PSend13714, SMB__lt__and_, 1, (Optr)PSend13715);
    String string_13717 = new_String(L"]");
    Constant string_13717_Const = new_Constant((Optr)string_13717);
    // <&. 
    Send PSend13718 = new_Send((Optr)PSend13716, SMB__lt__and_, 1, (Optr)string_13717_Const);
    // blockArguments. 
    Send PSend13719 = new_Send((Optr)self, SMB_blockArguments, 0);
    // optional. 
    Send PSend13720 = new_Send((Optr)PSend13719, SMB_optional, 0);
    String string_13721 = new_String(L"]");
    Constant string_13721_Const = new_Constant((Optr)string_13721);
    // &. 
    Send PSend13722 = new_Send((Optr)PSend13720, SMB__and_, 1, (Optr)string_13721_Const);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13723 = new_Send((Optr)PSend13718, SMB__or_, 1, (Optr)PSend13722);
    // &. 
    Send PSend13724 = new_Send((Optr)PSend13707, SMB__and_, 1, (Optr)PSend13723);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13705_Const = new_Constant((Optr)string_13705);
    // named:parsing:. 
    Send PSend13725 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13705_Const, (Optr)PSend13724);
    Array PThreadedCode13704 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13705, (Optr)&t_push1, (Optr)string_13706, (Optr)&t_send0, (Optr)PSend13707, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13708, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13709, (Optr)&t_send1, (Optr)PSend13710, (Optr)&t_send0, (Optr)PSend13711, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13712, (Optr)&t_send0, (Optr)PSend13713, (Optr)&t_send1, (Optr)PSend13714, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13715, (Optr)&t_send1, (Optr)PSend13716, (Optr)&t_push1, (Optr)string_13717, (Optr)&t_send1, (Optr)PSend13718, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13719, (Optr)&t_send0, (Optr)PSend13720, (Optr)&t_push1, (Optr)string_13721, (Optr)&t_send1, (Optr)PSend13722, (Optr)&t_send1, (Optr)PSend13723, (Optr)&t_send1, (Optr)PSend13724, (Optr)&t_send2, (Optr)PSend13725, (Optr)&t_method_return);
    Method PMethod13703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13704, 1, PSend13725);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod13703, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    String string_13728 = new_String(L"IDENTIFIER");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13729 = new_Send((Optr)self, SMB_identifierBody, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13728_Const = new_Constant((Optr)string_13728);
    // named:parsing:. 
    Send PSend13730 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13728_Const, (Optr)PSend13729);
    Array PThreadedCode13727 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13728, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13729, (Optr)&t_send2, (Optr)PSend13730, (Optr)&t_method_return);
    Method PMethod13726 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13727, 1, PSend13730);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod13726, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_injectCascadedMessageExpression() {
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13733 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13734 = new_Send((Optr)self, SMB_messageExpression, 0);
    String string_13735 = new_String(L";");
    Constant string_13735_Const = new_Constant((Optr)string_13735);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13736 = new_Send((Optr)string_13735_Const, SMB_asParser, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13737 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_binaryMessageExpression = new_Symbol(L"binaryMessageExpression");
    // binaryMessageExpression. 
    Send PSend13738 = new_Send((Optr)self, SMB_binaryMessageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13739 = new_Send((Optr)PSend13737, SMB__or_, 1, (Optr)PSend13738);
    Symbol SMB_unaryMessageExpression = new_Symbol(L"unaryMessageExpression");
    // unaryMessageExpression. 
    Send PSend13740 = new_Send((Optr)self, SMB_unaryMessageExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13741 = new_Send((Optr)PSend13739, SMB__lt__equals_, 1, (Optr)PSend13740);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13742 = new_Send((Optr)PSend13736, SMB__and_, 1, (Optr)PSend13741);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13743 = new_Send((Optr)PSend13742, SMB_plus, 0);
    // &. 
    Send PSend13744 = new_Send((Optr)PSend13734, SMB__and_, 1, (Optr)PSend13743);
    // <=. 
    Send PSend13745 = new_Send((Optr)PSend13733, SMB__lt__equals_, 1, (Optr)PSend13744);
    Array PThreadedCode13732 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13733, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13734, (Optr)&t_push1, (Optr)string_13735, (Optr)&t_send0, (Optr)PSend13736, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13737, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13738, (Optr)&t_send1, (Optr)PSend13739, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13740, (Optr)&t_send1, (Optr)PSend13741, (Optr)&t_send1, (Optr)PSend13742, (Optr)&t_send0, (Optr)PSend13743, (Optr)&t_send1, (Optr)PSend13744, (Optr)&t_send1, (Optr)PSend13745, (Optr)&t_method_return);
    Method PMethod13731 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13732, 1, PSend13745);
    
    MethodClosure MC_SMB_injectCascadedMessageExpression = new_MethodClosure((Method)PMethod13731, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectCascadedMessageExpression, MC_SMB_injectCascadedMessageExpression);
}


static void init_SMB_initializeCascadedMessageExpression() {
    Symbol SMB_initializeCascadedMessageExpression = new_Symbol(L"initializeCascadedMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13748 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13749 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Array PThreadedCode13747 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13748, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13749, (Optr)&t_method_return);
    Method PMethod13746 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13747, 2, PSend13748, PSend13749);
    
    MethodClosure MC_SMB_initializeCascadedMessageExpression = new_MethodClosure((Method)PMethod13746, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCascadedMessageExpression, MC_SMB_initializeCascadedMessageExpression);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    String string_13752 = new_String(L"RADIX-NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13753 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13754 = new_String(L"r");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13754_Const = new_Constant((Optr)string_13754);
    // &. 
    Send PSend13755 = new_Send((Optr)PSend13753, SMB__and_, 1, (Optr)string_13754_Const);
    // numberFormat. 
    Send PSend13756 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13757 = new_Send((Optr)PSend13755, SMB__lt__and_, 1, (Optr)PSend13756);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13752_Const = new_Constant((Optr)string_13752);
    // named:parsing:. 
    Send PSend13758 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13752_Const, (Optr)PSend13757);
    Array PThreadedCode13751 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13752, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13753, (Optr)&t_push1, (Optr)string_13754, (Optr)&t_send1, (Optr)PSend13755, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13756, (Optr)&t_send1, (Optr)PSend13757, (Optr)&t_send2, (Optr)PSend13758, (Optr)&t_method_return);
    Method PMethod13750 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13751, 1, PSend13758);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod13750, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    String string_13761 = new_String(L"SYMBOL-IN-ARRAY");
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13762 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13761_Const = new_Constant((Optr)string_13761);
    // named:parsing:. 
    Send PSend13763 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13761_Const, (Optr)PSend13762);
    Array PThreadedCode13760 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13761, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13762, (Optr)&t_send2, (Optr)PSend13763, (Optr)&t_method_return);
    Method PMethod13759 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13760, 1, PSend13763);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod13759, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    String string_13766 = new_String(L"STATEMENTS");
    Symbol SMB_subExpression = new_Symbol(L"subExpression");
    // subExpression. 
    Send PSend13767 = new_Send((Optr)self, SMB_subExpression, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13768 = new_Send((Optr)PSend13767, SMB_times, 0);
    Symbol SMB_return = new_Symbol(L"return");
    // return. 
    Send PSend13769 = new_Send((Optr)self, SMB_return, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13770 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13771 = new_Send((Optr)PSend13769, SMB__or_, 1, (Optr)PSend13770);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13772 = new_Send((Optr)PSend13771, SMB_optional, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13773 = new_Send((Optr)PSend13768, SMB__and_, 1, (Optr)PSend13772);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13766_Const = new_Constant((Optr)string_13766);
    // named:parsing:. 
    Send PSend13774 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13766_Const, (Optr)PSend13773);
    Array PThreadedCode13765 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13766, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13767, (Optr)&t_send0, (Optr)PSend13768, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13769, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13770, (Optr)&t_send1, (Optr)PSend13771, (Optr)&t_send0, (Optr)PSend13772, (Optr)&t_send1, (Optr)PSend13773, (Optr)&t_send2, (Optr)PSend13774, (Optr)&t_method_return);
    Method PMethod13764 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13765, 1, PSend13774);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod13764, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    String string_13777 = new_String(L"SYMBOL-CONSTANT");
    String string_13778 = new_String(L"#");
    Constant string_13778_Const = new_Constant((Optr)string_13778);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13779 = new_Send((Optr)string_13778_Const, SMB_asParser, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13780 = new_Send((Optr)PSend13779, SMB_plus, 0);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13781 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13782 = new_Send((Optr)PSend13780, SMB__logicAnd_, 1, (Optr)PSend13781);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13777_Const = new_Constant((Optr)string_13777);
    // named:parsing:. 
    Send PSend13783 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13777_Const, (Optr)PSend13782);
    Array PThreadedCode13776 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13777, (Optr)&t_push1, (Optr)string_13778, (Optr)&t_send0, (Optr)PSend13779, (Optr)&t_send0, (Optr)PSend13780, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13781, (Optr)&t_send1, (Optr)PSend13782, (Optr)&t_send2, (Optr)PSend13783, (Optr)&t_method_return);
    Method PMethod13775 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13776, 1, PSend13783);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod13775, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Variable VAR_array_0_0 = new_Variable_named(L"array", 0);
    Array PArray13785 = new_Array_with(1, (Optr)VAR_array_0_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    String string_13789 = new_String(L"ARRAY");
    Constant string_13789_Const = new_Constant((Optr)string_13789);
    // named:. 
    Send PSend13788 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13789_Const);
    Assign PAssign13787 = new_Assign((Optr)VAR_array_0_0, (Optr)PSend13788);
    String string_13790 = new_String(L"(");
    Constant string_13790_Const = new_Constant((Optr)string_13790);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13791 = new_Send((Optr)string_13790_Const, SMB_asParser, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13792 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13793 = new_Send((Optr)self, SMB_stringConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13794 = new_Send((Optr)PSend13792, SMB__or_, 1, (Optr)PSend13793);
    Symbol SMB_symbolInArray = new_Symbol(L"symbolInArray");
    // symbolInArray. 
    Send PSend13795 = new_Send((Optr)self, SMB_symbolInArray, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13796 = new_Send((Optr)PSend13794, SMB__lt__equals_, 1, (Optr)PSend13795);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13797 = new_Send((Optr)self, SMB_symbolConstant, 0);
    // <=. 
    Send PSend13798 = new_Send((Optr)PSend13796, SMB__lt__equals_, 1, (Optr)PSend13797);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13799 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend13800 = new_Send((Optr)PSend13798, SMB__lt__equals_, 1, (Optr)PSend13799);
    // <=. 
    Send PSend13801 = new_Send((Optr)PSend13800, SMB__lt__equals_, 1, (Optr)VAR_array_0_0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13802 = new_Send((Optr)PSend13801, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13803 = new_Send((Optr)PSend13791, SMB__and_, 1, (Optr)PSend13802);
    String string_13804 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13804_Const = new_Constant((Optr)string_13804);
    // <&. 
    Send PSend13805 = new_Send((Optr)PSend13803, SMB__lt__and_, 1, (Optr)string_13804_Const);
    // <=. 
    Send PSend13806 = new_Send((Optr)VAR_array_0_0, SMB__lt__equals_, 1, (Optr)PSend13805);
    Array PThreadedCode13786 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push1, (Optr)PAssign13787, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13789, (Optr)&t_send1, (Optr)PSend13788, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_push1, (Optr)string_13790, (Optr)&t_send0, (Optr)PSend13791, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13792, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13793, (Optr)&t_send1, (Optr)PSend13794, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13795, (Optr)&t_send1, (Optr)PSend13796, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13797, (Optr)&t_send1, (Optr)PSend13798, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13799, (Optr)&t_send1, (Optr)PSend13800, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_send1, (Optr)PSend13801, (Optr)&t_send0, (Optr)PSend13802, (Optr)&t_send1, (Optr)PSend13803, (Optr)&t_push1, (Optr)string_13804, (Optr)&t_send1, (Optr)PSend13805, (Optr)&t_send1, (Optr)PSend13806, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_method_return);
    Method PMethod13784 = new_Method_with(empty_Array, PArray13785, empty_Array, PThreadedCode13786, 3, PAssign13787, PSend13806, VAR_array_0_0);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod13784, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    String string_13809 = new_String(L"KEYWORD-ANNOTATION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13810 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13811 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13812 = new_Send((Optr)PSend13810, SMB__and_, 1, (Optr)PSend13811);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13813 = new_Send((Optr)PSend13812, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13809_Const = new_Constant((Optr)string_13809);
    // named:parsing:. 
    Send PSend13814 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13809_Const, (Optr)PSend13813);
    Array PThreadedCode13808 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13809, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13810, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13811, (Optr)&t_send1, (Optr)PSend13812, (Optr)&t_send0, (Optr)PSend13813, (Optr)&t_send2, (Optr)PSend13814, (Optr)&t_method_return);
    Method PMethod13807 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13808, 1, PSend13814);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod13807, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    // preStorePrimary. 
    Send PSend13817 = new_Send((Optr)self, SMB_preStorePrimary, 0);
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    // preStoreMessageExpression. 
    Send PSend13818 = new_Send((Optr)self, SMB_preStoreMessageExpression, 0);
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    // preStoreCascadedMessageExpression. 
    Send PSend13819 = new_Send((Optr)self, SMB_preStoreCascadedMessageExpression, 0);
    Symbol  SMB_expression = new_Symbol(L"expression");
    String string_13820 = new_String(L"EXPRESSION");
    Symbol SMB_assignmentExpressions = new_Symbol(L"assignmentExpressions");
    // assignmentExpressions. 
    Send PSend13821 = new_Send((Optr)self, SMB_assignmentExpressions, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13822 = new_Send((Optr)PSend13821, SMB_optional, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13823 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13824 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13825 = new_Send((Optr)PSend13823, SMB__or_, 1, (Optr)PSend13824);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13826 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13827 = new_Send((Optr)PSend13825, SMB__lt__equals_, 1, (Optr)PSend13826);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13828 = new_Send((Optr)PSend13822, SMB__and_, 1, (Optr)PSend13827);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13820_Const = new_Constant((Optr)string_13820);
    // named:parsing:. 
    Send PSend13829 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13820_Const, (Optr)PSend13828);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // at:put:. 
    Send PSend13830 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_put_, 2, (Optr)SMB_expression_Const, (Optr)PSend13829);
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    // injectPrimary. 
    Send PSend13831 = new_Send((Optr)self, SMB_injectPrimary, 0);
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    // injectMessageExpression. 
    Send PSend13832 = new_Send((Optr)self, SMB_injectMessageExpression, 0);
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    // injectCascadedMessageExpression. 
    Send PSend13833 = new_Send((Optr)self, SMB_injectCascadedMessageExpression, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend13834 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode13816 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13817, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13818, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13819, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13820, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13821, (Optr)&t_send0, (Optr)PSend13822, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13823, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13824, (Optr)&t_send1, (Optr)PSend13825, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13826, (Optr)&t_send1, (Optr)PSend13827, (Optr)&t_send1, (Optr)PSend13828, (Optr)&t_send2, (Optr)PSend13829, (Optr)&t_send2, (Optr)PSend13830, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13831, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13832, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13833, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend13834, (Optr)&t_method_return);
    Method PMethod13815 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13816, 8, PSend13817, PSend13818, PSend13819, PSend13830, PSend13831, PSend13832, PSend13833, PSend13834);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod13815, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    String string_13837 = new_String(L"FLOAT");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13838 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13839 = new_String(L".");
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Constant string_13839_Const = new_Constant((Optr)string_13839);
    // &&. 
    Send PSend13840 = new_Send((Optr)PSend13838, SMB__logicAnd_, 1, (Optr)string_13839_Const);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13841 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13842 = new_Send((Optr)PSend13841, SMB_strongPlus, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13843 = new_Send((Optr)PSend13840, SMB__lt__and_, 1, (Optr)PSend13842);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13837_Const = new_Constant((Optr)string_13837);
    // named:parsing:. 
    Send PSend13844 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13837_Const, (Optr)PSend13843);
    Array PThreadedCode13836 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13837, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13838, (Optr)&t_push1, (Optr)string_13839, (Optr)&t_send1, (Optr)PSend13840, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13841, (Optr)&t_send0, (Optr)PSend13842, (Optr)&t_send1, (Optr)PSend13843, (Optr)&t_send2, (Optr)PSend13844, (Optr)&t_method_return);
    Method PMethod13835 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13836, 1, PSend13844);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod13835, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    String string_13847 = new_String(L"BLOCK-ARGUMENTS");
    String string_13848 = new_String(L":");
    Constant string_13848_Const = new_Constant((Optr)string_13848);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13849 = new_Send((Optr)string_13848_Const, SMB_asParser, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13850 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13851 = new_Send((Optr)PSend13849, SMB__and_, 1, (Optr)PSend13850);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13852 = new_Send((Optr)PSend13851, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13847_Const = new_Constant((Optr)string_13847);
    // named:parsing:. 
    Send PSend13853 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13847_Const, (Optr)PSend13852);
    Array PThreadedCode13846 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13847, (Optr)&t_push1, (Optr)string_13848, (Optr)&t_send0, (Optr)PSend13849, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13850, (Optr)&t_send1, (Optr)PSend13851, (Optr)&t_send0, (Optr)PSend13852, (Optr)&t_send2, (Optr)PSend13853, (Optr)&t_method_return);
    Method PMethod13845 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13846, 1, PSend13853);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod13845, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeCommentFormat() {
    Symbol SMB_initializeCommentFormat = new_Symbol(L"initializeCommentFormat");
    Variable VAR_commentBorder_0_0 = new_Variable_named(L"commentBorder", 0);
    Array PArray13855 = new_Array_with(1, (Optr)VAR_commentBorder_0_0);
    String string_13859 = new_String(L"\"");
    Constant string_13859_Const = new_Constant((Optr)string_13859);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13858 = new_Send((Optr)string_13859_Const, SMB_asParser, 0);
    Assign PAssign13857 = new_Assign((Optr)VAR_commentBorder_0_0, (Optr)PSend13858);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13860 = new_Send((Optr)VAR_commentBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13861 = new_Send((Optr)PSend13860, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13862 = new_Send((Optr)PSend13861, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13863 = new_Send((Optr)VAR_commentBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend13862);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13864 = new_Send((Optr)PSend13863, SMB__lt__and_, 1, (Optr)VAR_commentBorder_0_0);
    Array PThreadedCode13856 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign13857, (Optr)&t_push1, (Optr)string_13859, (Optr)&t_send0, (Optr)PSend13858, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send0, (Optr)PSend13860, (Optr)&t_send0, (Optr)PSend13861, (Optr)&t_send0, (Optr)PSend13862, (Optr)&t_send1, (Optr)PSend13863, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send1, (Optr)PSend13864, (Optr)&t_method_return);
    Method PMethod13854 = new_Method_with(empty_Array, PArray13855, empty_Array, PThreadedCode13856, 2, PAssign13857, PSend13864);
    
    MethodClosure MC_SMB_initializeCommentFormat = new_MethodClosure((Method)PMethod13854, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCommentFormat, MC_SMB_initializeCommentFormat);
}


static void init_SMB_initializeSeparator() {
    Symbol SMB_initializeSeparator = new_Symbol(L"initializeSeparator");
    Super PSuper13867 = new_Super(SMB_initializeSeparator, 0);
    Symbol SMB_commentFormat = new_Symbol(L"commentFormat");
    // commentFormat. 
    Send PSend13868 = new_Send((Optr)self, SMB_commentFormat, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13869 = new_Send((Optr)PSuper13867, SMB__or_, 1, (Optr)PSend13868);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13870 = new_Send((Optr)PSend13869, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13871 = new_Send((Optr)PSend13870, SMB_omit, 0);
    Array PThreadedCode13866 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13867, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13868, (Optr)&t_send1, (Optr)PSend13869, (Optr)&t_send0, (Optr)PSend13870, (Optr)&t_send0, (Optr)PSend13871, (Optr)&t_method_return);
    Method PMethod13865 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13866, 1, PSend13871);
    
    MethodClosure MC_SMB_initializeSeparator = new_MethodClosure((Method)PMethod13865, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSeparator, MC_SMB_initializeSeparator);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    String string_13874 = new_String(L"BRACE-EXPRESSION");
    String string_13875 = new_String(L"{");
    Constant string_13875_Const = new_Constant((Optr)string_13875);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13876 = new_Send((Optr)string_13875_Const, SMB_asParser, 0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13877 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13878 = new_Send((Optr)PSend13876, SMB__and_, 1, (Optr)PSend13877);
    String string_13879 = new_String(L"}");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13879_Const = new_Constant((Optr)string_13879);
    // <&. 
    Send PSend13880 = new_Send((Optr)PSend13878, SMB__lt__and_, 1, (Optr)string_13879_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13874_Const = new_Constant((Optr)string_13874);
    // named:parsing:. 
    Send PSend13881 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13874_Const, (Optr)PSend13880);
    Array PThreadedCode13873 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13874, (Optr)&t_push1, (Optr)string_13875, (Optr)&t_send0, (Optr)PSend13876, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13877, (Optr)&t_send1, (Optr)PSend13878, (Optr)&t_push1, (Optr)string_13879, (Optr)&t_send1, (Optr)PSend13880, (Optr)&t_send2, (Optr)PSend13881, (Optr)&t_method_return);
    Method PMethod13872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13873, 1, PSend13881);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod13872, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_injectBinaryObjectDescription() {
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13884 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13885 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13886 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13887 = new_Send((Optr)PSend13885, SMB__or_, 1, (Optr)PSend13886);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13888 = new_Send((Optr)PSend13884, SMB__lt__equals_, 1, (Optr)PSend13887);
    Array PThreadedCode13883 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13884, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13885, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13886, (Optr)&t_send1, (Optr)PSend13887, (Optr)&t_send1, (Optr)PSend13888, (Optr)&t_method_return);
    Method PMethod13882 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13883, 1, PSend13888);
    
    MethodClosure MC_SMB_injectBinaryObjectDescription = new_MethodClosure((Method)PMethod13882, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectBinaryObjectDescription, MC_SMB_injectBinaryObjectDescription);
}


static void init_SMB_initializeLowercase() {
    Symbol SMB_initializeLowercase = new_Symbol(L"initializeLowercase");
    String string_13891 = new_String(L"a-z");
    Constant string_13891_Const = new_Constant((Optr)string_13891);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13892 = new_Send((Optr)string_13891_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13890 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13891, (Optr)&t_send0, (Optr)PSend13892, (Optr)&t_method_return);
    Method PMethod13889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13890, 1, PSend13892);
    
    MethodClosure MC_SMB_initializeLowercase = new_MethodClosure((Method)PMethod13889, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLowercase, MC_SMB_initializeLowercase);
}


static void init_SMB_injectMessageExpression() {
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13895 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB_keywordExpression = new_Symbol(L"keywordExpression");
    // keywordExpression. 
    Send PSend13896 = new_Send((Optr)self, SMB_keywordExpression, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13897 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13898 = new_Send((Optr)PSend13896, SMB__or_, 1, (Optr)PSend13897);
    Symbol SMB_unaryExpression = new_Symbol(L"unaryExpression");
    // unaryExpression. 
    Send PSend13899 = new_Send((Optr)self, SMB_unaryExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13900 = new_Send((Optr)PSend13898, SMB__lt__equals_, 1, (Optr)PSend13899);
    // <=. 
    Send PSend13901 = new_Send((Optr)PSend13895, SMB__lt__equals_, 1, (Optr)PSend13900);
    Array PThreadedCode13894 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13895, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13896, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13897, (Optr)&t_send1, (Optr)PSend13898, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13899, (Optr)&t_send1, (Optr)PSend13900, (Optr)&t_send1, (Optr)PSend13901, (Optr)&t_method_return);
    Method PMethod13893 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13894, 1, PSend13901);
    
    MethodClosure MC_SMB_injectMessageExpression = new_MethodClosure((Method)PMethod13893, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectMessageExpression, MC_SMB_injectMessageExpression);
}


static void init_SMB_initializeIdentifierBody() {
    Symbol SMB_initializeIdentifierBody = new_Symbol(L"initializeIdentifierBody");
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13904 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend13905 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13906 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13907 = new_Send((Optr)PSend13905, SMB__or_, 1, (Optr)PSend13906);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13908 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13909 = new_Send((Optr)PSend13907, SMB__lt__equals_, 1, (Optr)PSend13908);
    String string_13910 = new_String(L"!?");
    Constant string_13910_Const = new_Constant((Optr)string_13910);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13911 = new_Send((Optr)string_13910_Const, SMB_asPEGChoice, 0);
    // <=. 
    Send PSend13912 = new_Send((Optr)PSend13909, SMB__lt__equals_, 1, (Optr)PSend13911);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13913 = new_Send((Optr)PSend13912, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13914 = new_Send((Optr)PSend13904, SMB__logicAnd_, 1, (Optr)PSend13913);
    Array PThreadedCode13903 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13904, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13905, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13906, (Optr)&t_send1, (Optr)PSend13907, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13908, (Optr)&t_send1, (Optr)PSend13909, (Optr)&t_push1, (Optr)string_13910, (Optr)&t_send0, (Optr)PSend13911, (Optr)&t_send1, (Optr)PSend13912, (Optr)&t_send0, (Optr)PSend13913, (Optr)&t_send1, (Optr)PSend13914, (Optr)&t_method_return);
    Method PMethod13902 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13903, 1, PSend13914);
    
    MethodClosure MC_SMB_initializeIdentifierBody = new_MethodClosure((Method)PMethod13902, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifierBody, MC_SMB_initializeIdentifierBody);
}


static void init_SMB_initializeLiteral() {
    Symbol SMB_initializeLiteral = new_Symbol(L"initializeLiteral");
    Symbol SMB_float = new_Symbol(L"float");
    // float. 
    Send PSend13917 = new_Send((Optr)self, SMB_float, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13918 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13919 = new_Send((Optr)PSend13917, SMB__or_, 1, (Optr)PSend13918);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13920 = new_Send((Optr)self, SMB_symbolConstant, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13921 = new_Send((Optr)PSend13919, SMB__lt__equals_, 1, (Optr)PSend13920);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13922 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend13923 = new_Send((Optr)PSend13921, SMB__lt__equals_, 1, (Optr)PSend13922);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13924 = new_Send((Optr)self, SMB_stringConstant, 0);
    // <=. 
    Send PSend13925 = new_Send((Optr)PSend13923, SMB__lt__equals_, 1, (Optr)PSend13924);
    Symbol SMB_arrayConstant = new_Symbol(L"arrayConstant");
    // arrayConstant. 
    Send PSend13926 = new_Send((Optr)self, SMB_arrayConstant, 0);
    // <=. 
    Send PSend13927 = new_Send((Optr)PSend13925, SMB__lt__equals_, 1, (Optr)PSend13926);
    Array PThreadedCode13916 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13917, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13918, (Optr)&t_send1, (Optr)PSend13919, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13920, (Optr)&t_send1, (Optr)PSend13921, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13922, (Optr)&t_send1, (Optr)PSend13923, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13924, (Optr)&t_send1, (Optr)PSend13925, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13926, (Optr)&t_send1, (Optr)PSend13927, (Optr)&t_method_return);
    Method PMethod13915 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13916, 1, PSend13927);
    
    MethodClosure MC_SMB_initializeLiteral = new_MethodClosure((Method)PMethod13915, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLiteral, MC_SMB_initializeLiteral);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    String string_13930 = new_String(L"BINARY-MESSAGE-EXPRESSION");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13931 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13932 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13933 = new_Send((Optr)PSend13931, SMB__and_, 1, (Optr)PSend13932);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13930_Const = new_Constant((Optr)string_13930);
    // named:parsing:. 
    Send PSend13934 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13930_Const, (Optr)PSend13933);
    Array PThreadedCode13929 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13930, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13931, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13932, (Optr)&t_send1, (Optr)PSend13933, (Optr)&t_send2, (Optr)PSend13934, (Optr)&t_method_return);
    Method PMethod13928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13929, 1, PSend13934);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod13928, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    String string_13937 = new_String(L"STRING");
    Symbol SMB_stringSegment = new_Symbol(L"stringSegment");
    // stringSegment. 
    Send PSend13938 = new_Send((Optr)self, SMB_stringSegment, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13939 = new_Send((Optr)PSend13938, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13937_Const = new_Constant((Optr)string_13937);
    // named:parsing:. 
    Send PSend13940 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13937_Const, (Optr)PSend13939);
    Array PThreadedCode13936 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13937, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13938, (Optr)&t_send0, (Optr)PSend13939, (Optr)&t_send2, (Optr)PSend13940, (Optr)&t_method_return);
    Method PMethod13935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13936, 1, PSend13940);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod13935, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    Array PThreadedCode13942 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod13941 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13942, 1, self);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod13941, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_test, MC_SMB_test);
}


static void init_SMB_initializeSubExpression() {
    Symbol SMB_initializeSubExpression = new_Symbol(L"initializeSubExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13945 = new_Send((Optr)self, SMB_expression, 0);
    String string_13946 = new_String(L".");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13946_Const = new_Constant((Optr)string_13946);
    // &. 
    Send PSend13947 = new_Send((Optr)PSend13945, SMB__and_, 1, (Optr)string_13946_Const);
    String string_13948 = new_String(L".");
    Symbol SMB__or_ = new_Symbol(L"|");
    Constant string_13948_Const = new_Constant((Optr)string_13948);
    // |. 
    Send PSend13949 = new_Send((Optr)PSend13947, SMB__or_, 1, (Optr)string_13948_Const);
    Array PThreadedCode13944 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13945, (Optr)&t_push1, (Optr)string_13946, (Optr)&t_send1, (Optr)PSend13947, (Optr)&t_push1, (Optr)string_13948, (Optr)&t_send1, (Optr)PSend13949, (Optr)&t_method_return);
    Method PMethod13943 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13944, 1, PSend13949);
    
    MethodClosure MC_SMB_initializeSubExpression = new_MethodClosure((Method)PMethod13943, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSubExpression, MC_SMB_initializeSubExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    String string_13952 = new_String(L"ANNOTATIONS");
    String string_13953 = new_String(L"<");
    Constant string_13953_Const = new_Constant((Optr)string_13953);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13954 = new_Send((Optr)string_13953_Const, SMB_asParser, 0);
    Symbol SMB_keywordAnnotation = new_Symbol(L"keywordAnnotation");
    // keywordAnnotation. 
    Send PSend13955 = new_Send((Optr)self, SMB_keywordAnnotation, 0);
    Symbol SMB_unaryAnnotation = new_Symbol(L"unaryAnnotation");
    // unaryAnnotation. 
    Send PSend13956 = new_Send((Optr)self, SMB_unaryAnnotation, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13957 = new_Send((Optr)PSend13955, SMB__or_, 1, (Optr)PSend13956);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13958 = new_Send((Optr)PSend13954, SMB__and_, 1, (Optr)PSend13957);
    String string_13959 = new_String(L">");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13959_Const = new_Constant((Optr)string_13959);
    // <&. 
    Send PSend13960 = new_Send((Optr)PSend13958, SMB__lt__and_, 1, (Optr)string_13959_Const);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13961 = new_Send((Optr)PSend13960, SMB_times, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13952_Const = new_Constant((Optr)string_13952);
    // named:parsing:. 
    Send PSend13962 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13952_Const, (Optr)PSend13961);
    Array PThreadedCode13951 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13952, (Optr)&t_push1, (Optr)string_13953, (Optr)&t_send0, (Optr)PSend13954, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13955, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13956, (Optr)&t_send1, (Optr)PSend13957, (Optr)&t_send1, (Optr)PSend13958, (Optr)&t_push1, (Optr)string_13959, (Optr)&t_send1, (Optr)PSend13960, (Optr)&t_send0, (Optr)PSend13961, (Optr)&t_send2, (Optr)PSend13962, (Optr)&t_method_return);
    Method PMethod13950 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13951, 1, PSend13962);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod13950, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializeArrayConstant() {
    Symbol SMB_initializeArrayConstant = new_Symbol(L"initializeArrayConstant");
    String string_13965 = new_String(L"#");
    Constant string_13965_Const = new_Constant((Optr)string_13965);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13966 = new_Send((Optr)string_13965_Const, SMB_asParser, 0);
    Symbol SMB_array = new_Symbol(L"array");
    // array. 
    Send PSend13967 = new_Send((Optr)self, SMB_array, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13968 = new_Send((Optr)PSend13966, SMB__and_, 1, (Optr)PSend13967);
    Array PThreadedCode13964 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)string_13965, (Optr)&t_send0, (Optr)PSend13966, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13967, (Optr)&t_send1, (Optr)PSend13968, (Optr)&t_method_return);
    Method PMethod13963 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13964, 1, PSend13968);
    
    MethodClosure MC_SMB_initializeArrayConstant = new_MethodClosure((Method)PMethod13963, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArrayConstant, MC_SMB_initializeArrayConstant);
}


static void init_SMB_initializeBinaryObjectDescription() {
    Symbol SMB_initializeBinaryObjectDescription = new_Symbol(L"initializeBinaryObjectDescription");
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13971 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13972 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Array PThreadedCode13970 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13971, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13972, (Optr)&t_method_return);
    Method PMethod13969 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13970, 2, PSend13971, PSend13972);
    
    MethodClosure MC_SMB_initializeBinaryObjectDescription = new_MethodClosure((Method)PMethod13969, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryObjectDescription, MC_SMB_initializeBinaryObjectDescription);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Variable VAR_stringBorder_0_0 = new_Variable_named(L"stringBorder", 0);
    Array PArray13974 = new_Array_with(1, (Optr)VAR_stringBorder_0_0);
    String string_13978 = new_String(L"'");
    Constant string_13978_Const = new_Constant((Optr)string_13978);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13977 = new_Send((Optr)string_13978_Const, SMB_asParser, 0);
    Assign PAssign13976 = new_Assign((Optr)VAR_stringBorder_0_0, (Optr)PSend13977);
    String string_13979 = new_String(L"STRING-SEGMENT");
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13980 = new_Send((Optr)VAR_stringBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13981 = new_Send((Optr)PSend13980, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13982 = new_Send((Optr)PSend13981, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13983 = new_Send((Optr)VAR_stringBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend13982);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13984 = new_Send((Optr)PSend13983, SMB__lt__and_, 1, (Optr)VAR_stringBorder_0_0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13979_Const = new_Constant((Optr)string_13979);
    // named:parsing:. 
    Send PSend13985 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13979_Const, (Optr)PSend13984);
    Array PThreadedCode13975 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign13976, (Optr)&t_push1, (Optr)string_13978, (Optr)&t_send0, (Optr)PSend13977, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13979, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send0, (Optr)PSend13980, (Optr)&t_send0, (Optr)PSend13981, (Optr)&t_send0, (Optr)PSend13982, (Optr)&t_send1, (Optr)PSend13983, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send1, (Optr)PSend13984, (Optr)&t_send2, (Optr)PSend13985, (Optr)&t_method_return);
    Method PMethod13973 = new_Method_with(empty_Array, PArray13974, empty_Array, PThreadedCode13975, 2, PAssign13976, PSend13985);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod13973, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeBar() {
    Symbol SMB_initializeBar = new_Symbol(L"initializeBar");
    String string_13988 = new_String(L"|");
    Constant string_13988_Const = new_Constant((Optr)string_13988);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13989 = new_Send((Optr)string_13988_Const, SMB_asParser, 0);
    Array PThreadedCode13987 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13988, (Optr)&t_send0, (Optr)PSend13989, (Optr)&t_method_return);
    Method PMethod13986 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13987, 1, PSend13989);
    
    MethodClosure MC_SMB_initializeBar = new_MethodClosure((Method)PMethod13986, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBar, MC_SMB_initializeBar);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    String string_13992 = new_String(L"BINARY-ARGUMENT");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13993 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13994 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13995 = new_Send((Optr)PSend13993, SMB__and_, 1, (Optr)PSend13994);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13992_Const = new_Constant((Optr)string_13992);
    // named:parsing:. 
    Send PSend13996 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13992_Const, (Optr)PSend13995);
    Array PThreadedCode13991 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13992, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13993, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13994, (Optr)&t_send1, (Optr)PSend13995, (Optr)&t_send2, (Optr)PSend13996, (Optr)&t_method_return);
    Method PMethod13990 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13991, 1, PSend13996);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod13990, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    String string_13999 = new_String(L"RETURN");
    String string_14000 = new_String(L"^");
    Constant string_14000_Const = new_Constant((Optr)string_14000);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14001 = new_Send((Optr)string_14000_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14002 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14003 = new_Send((Optr)PSend14001, SMB__and_, 1, (Optr)PSend14002);
    String string_14004 = new_String(L".");
    Constant string_14004_Const = new_Constant((Optr)string_14004);
    // asParser. 
    Send PSend14005 = new_Send((Optr)string_14004_Const, SMB_asParser, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend14006 = new_Send((Optr)PSend14005, SMB_optional, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend14007 = new_Send((Optr)PSend14006, SMB_omit, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14008 = new_Send((Optr)PSend14003, SMB__lt__and_, 1, (Optr)PSend14007);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13999_Const = new_Constant((Optr)string_13999);
    // named:parsing:. 
    Send PSend14009 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13999_Const, (Optr)PSend14008);
    Array PThreadedCode13998 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13999, (Optr)&t_push1, (Optr)string_14000, (Optr)&t_send0, (Optr)PSend14001, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14002, (Optr)&t_send1, (Optr)PSend14003, (Optr)&t_push1, (Optr)string_14004, (Optr)&t_send0, (Optr)PSend14005, (Optr)&t_send0, (Optr)PSend14006, (Optr)&t_send0, (Optr)PSend14007, (Optr)&t_send1, (Optr)PSend14008, (Optr)&t_send2, (Optr)PSend14009, (Optr)&t_method_return);
    Method PMethod13997 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13998, 1, PSend14009);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod13997, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeNumberConstant() {
    Symbol SMB_initializeNumberConstant = new_Symbol(L"initializeNumberConstant");
    Symbol SMB_radix = new_Symbol(L"radix");
    // radix. 
    Send PSend14012 = new_Send((Optr)self, SMB_radix, 0);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend14013 = new_Send((Optr)self, SMB_number, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14014 = new_Send((Optr)PSend14012, SMB__or_, 1, (Optr)PSend14013);
    Array PThreadedCode14011 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14012, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14013, (Optr)&t_send1, (Optr)PSend14014, (Optr)&t_method_return);
    Method PMethod14010 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14011, 1, PSend14014);
    
    MethodClosure MC_SMB_initializeNumberConstant = new_MethodClosure((Method)PMethod14010, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberConstant, MC_SMB_initializeNumberConstant);
}


static void init_SMB_initializeCharacter() {
    Symbol SMB_initializeCharacter = new_Symbol(L"initializeCharacter");
    String string_14017 = new_String(L"[]{}()_^;$#:-|.'\"");
    Constant string_14017_Const = new_Constant((Optr)string_14017);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend14018 = new_Send((Optr)string_14017_Const, SMB_asPEGChoice, 0);
    Symbol SMB_separators = new_Symbol(L"separators");
    // separators. 
    Send PSend14019 = new_Send((Optr)PEGParser_classReference, SMB_separators, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14020 = new_Send((Optr)PSend14018, SMB__or_, 1, (Optr)PSend14019);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14021 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14022 = new_Send((Optr)PSend14020, SMB__lt__equals_, 1, (Optr)PSend14021);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend14023 = new_Send((Optr)self, SMB_letter, 0);
    // <=. 
    Send PSend14024 = new_Send((Optr)PSend14022, SMB__lt__equals_, 1, (Optr)PSend14023);
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend14025 = new_Send((Optr)self, SMB_specialCharacter, 0);
    // <=. 
    Send PSend14026 = new_Send((Optr)PSend14024, SMB__lt__equals_, 1, (Optr)PSend14025);
    Array PThreadedCode14016 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)string_14017, (Optr)&t_send0, (Optr)PSend14018, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend14019, (Optr)&t_send1, (Optr)PSend14020, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14021, (Optr)&t_send1, (Optr)PSend14022, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14023, (Optr)&t_send1, (Optr)PSend14024, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14025, (Optr)&t_send1, (Optr)PSend14026, (Optr)&t_method_return);
    Method PMethod14015 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14016, 1, PSend14026);
    
    MethodClosure MC_SMB_initializeCharacter = new_MethodClosure((Method)PMethod14015, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacter, MC_SMB_initializeCharacter);
}


static void init_SMB_injectPrimary() {
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14029 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_primaryVariable = new_Symbol(L"primaryVariable");
    // primaryVariable. 
    Send PSend14030 = new_Send((Optr)self, SMB_primaryVariable, 0);
    Symbol SMB_literal = new_Symbol(L"literal");
    // literal. 
    Send PSend14031 = new_Send((Optr)self, SMB_literal, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14032 = new_Send((Optr)PSend14030, SMB__or_, 1, (Optr)PSend14031);
    Symbol SMB_block = new_Symbol(L"block");
    // block. 
    Send PSend14033 = new_Send((Optr)self, SMB_block, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14034 = new_Send((Optr)PSend14032, SMB__lt__equals_, 1, (Optr)PSend14033);
    Symbol SMB_scopedExpression = new_Symbol(L"scopedExpression");
    // scopedExpression. 
    Send PSend14035 = new_Send((Optr)self, SMB_scopedExpression, 0);
    // <=. 
    Send PSend14036 = new_Send((Optr)PSend14034, SMB__lt__equals_, 1, (Optr)PSend14035);
    Symbol SMB_braceExpression = new_Symbol(L"braceExpression");
    // braceExpression. 
    Send PSend14037 = new_Send((Optr)self, SMB_braceExpression, 0);
    // <=. 
    Send PSend14038 = new_Send((Optr)PSend14036, SMB__lt__equals_, 1, (Optr)PSend14037);
    // <=. 
    Send PSend14039 = new_Send((Optr)PSend14029, SMB__lt__equals_, 1, (Optr)PSend14038);
    Array PThreadedCode14028 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14029, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14030, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14031, (Optr)&t_send1, (Optr)PSend14032, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14033, (Optr)&t_send1, (Optr)PSend14034, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14035, (Optr)&t_send1, (Optr)PSend14036, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14037, (Optr)&t_send1, (Optr)PSend14038, (Optr)&t_send1, (Optr)PSend14039, (Optr)&t_method_return);
    Method PMethod14027 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14028, 1, PSend14039);
    
    MethodClosure MC_SMB_injectPrimary = new_MethodClosure((Method)PMethod14027, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectPrimary, MC_SMB_injectPrimary);
}


static void init_SMB_initializeLetter() {
    Symbol SMB_initializeLetter = new_Symbol(L"initializeLetter");
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend14042 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend14043 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14044 = new_Send((Optr)PSend14042, SMB__or_, 1, (Optr)PSend14043);
    Array PThreadedCode14041 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14042, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14043, (Optr)&t_send1, (Optr)PSend14044, (Optr)&t_method_return);
    Method PMethod14040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14041, 1, PSend14044);
    
    MethodClosure MC_SMB_initializeLetter = new_MethodClosure((Method)PMethod14040, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLetter, MC_SMB_initializeLetter);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    String string_14047 = new_String(L"ASSIGNMENT-EXPRESSIONS");
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend14048 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend14049 = new_Send((Optr)self, SMB_assignmentOp, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14050 = new_Send((Optr)PSend14048, SMB__and_, 1, (Optr)PSend14049);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14051 = new_Send((Optr)PSend14050, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14047_Const = new_Constant((Optr)string_14047);
    // named:parsing:. 
    Send PSend14052 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14047_Const, (Optr)PSend14051);
    Array PThreadedCode14046 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14047, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14048, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14049, (Optr)&t_send1, (Optr)PSend14050, (Optr)&t_send0, (Optr)PSend14051, (Optr)&t_send2, (Optr)PSend14052, (Optr)&t_method_return);
    Method PMethod14045 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14046, 1, PSend14052);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14045, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_initializeFinalExpression() {
    Symbol SMB_initializeFinalExpression = new_Symbol(L"initializeFinalExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14055 = new_Send((Optr)self, SMB_expression, 0);
    Array PThreadedCode14054 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14055, (Optr)&t_method_return);
    Method PMethod14053 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14054, 1, PSend14055);
    
    MethodClosure MC_SMB_initializeFinalExpression = new_MethodClosure((Method)PMethod14053, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFinalExpression, MC_SMB_initializeFinalExpression);
}


static void init_SMB_initializeMessageExpression() {
    Symbol SMB_initializeMessageExpression = new_Symbol(L"initializeMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14058 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14059 = new_Send((Optr)self, SMB_messageExpression, 0);
    Array PThreadedCode14057 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14058, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14059, (Optr)&t_method_return);
    Method PMethod14056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14057, 2, PSend14058, PSend14059);
    
    MethodClosure MC_SMB_initializeMessageExpression = new_MethodClosure((Method)PMethod14056, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessageExpression, MC_SMB_initializeMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    String string_14062 = new_String(L"UNARY-ANNOTATION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend14063 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14062_Const = new_Constant((Optr)string_14062);
    // named:parsing:. 
    Send PSend14064 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14062_Const, (Optr)PSend14063);
    Array PThreadedCode14061 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14062, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14063, (Optr)&t_send2, (Optr)PSend14064, (Optr)&t_method_return);
    Method PMethod14060 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14061, 1, PSend14064);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14060, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeMessagePattern() {
    Symbol SMB_initializeMessagePattern = new_Symbol(L"initializeMessagePattern");
    String string_14067 = new_String(L"MESSAGE-PATTERN");
    Symbol SMB_keywordsArguments = new_Symbol(L"keywordsArguments");
    // keywordsArguments. 
    Send PSend14068 = new_Send((Optr)self, SMB_keywordsArguments, 0);
    Symbol SMB_binaryMessageDefinition = new_Symbol(L"binaryMessageDefinition");
    // binaryMessageDefinition. 
    Send PSend14069 = new_Send((Optr)self, SMB_binaryMessageDefinition, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14070 = new_Send((Optr)PSend14068, SMB__or_, 1, (Optr)PSend14069);
    Symbol SMB_unaryMessageDefinition = new_Symbol(L"unaryMessageDefinition");
    // unaryMessageDefinition. 
    Send PSend14071 = new_Send((Optr)self, SMB_unaryMessageDefinition, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14072 = new_Send((Optr)PSend14070, SMB__lt__equals_, 1, (Optr)PSend14071);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14067_Const = new_Constant((Optr)string_14067);
    // named:parsing:. 
    Send PSend14073 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14067_Const, (Optr)PSend14072);
    Array PThreadedCode14066 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14067, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14068, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14069, (Optr)&t_send1, (Optr)PSend14070, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14071, (Optr)&t_send1, (Optr)PSend14072, (Optr)&t_send2, (Optr)PSend14073, (Optr)&t_method_return);
    Method PMethod14065 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14066, 1, PSend14073);
    
    MethodClosure MC_SMB_initializeMessagePattern = new_MethodClosure((Method)PMethod14065, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessagePattern, MC_SMB_initializeMessagePattern);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign14076 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode14075 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign14076, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14074 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14075, 2, PAssign14076, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod14074, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
    store_method(HEADER(Smalltalk_Parser_SmalltalkGrammar_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper14082 = new_Super(SMB_new, 0);
    Assign PAssign14081 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)PSuper14082);
    Array PThreadedCode14080 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14081, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14082, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock14079 = new_Block_with(empty_Array, empty_Array, PThreadedCode14080, 1, PAssign14081);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend14083 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock14079);
    Array PThreadedCode14078 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock14079, (Optr)&t_send1, (Optr)PSend14083, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_method_return);
    Method PMethod14077 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14078, 2, PSend14083, slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod14077, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
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