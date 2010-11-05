#include <lib/class/Smalltalk/Parser/SmalltalkGrammar.h>


Optr slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance;
Optr layout_Smalltalk_Parser_SmalltalkGrammar_Class_class;
Optr layout_Smalltalk_Parser_SmalltalkGrammar;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    String string_13362 = new_String(L"UNARY-MESSAGE-EXPRESSION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13363 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13362_Const = new_Constant((Optr)string_13362);
    // named:parsing:. 
    Send PSend13364 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13362_Const, (Optr)PSend13363);
    Array PThreadedCode13361 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13362, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13363, (Optr)&t_send2, (Optr)PSend13364, (Optr)&t_method_return);
    Method PMethod13360 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13361, 1, PSend13364);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod13360, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    String string_13367 = new_String(L"UNARY-SELECTOR");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13368 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13369 = new_String(L":");
    Constant string_13369_Const = new_Constant((Optr)string_13369);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13370 = new_Send((Optr)string_13369_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13371 = new_Send((Optr)PSend13370, SMB_not, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13372 = new_Send((Optr)PSend13368, SMB__logicAnd_, 1, (Optr)PSend13371);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13367_Const = new_Constant((Optr)string_13367);
    // named:parsing:. 
    Send PSend13373 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13367_Const, (Optr)PSend13372);
    Array PThreadedCode13366 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13367, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13368, (Optr)&t_push1, (Optr)string_13369, (Optr)&t_send0, (Optr)PSend13370, (Optr)&t_send0, (Optr)PSend13371, (Optr)&t_send1, (Optr)PSend13372, (Optr)&t_send2, (Optr)PSend13373, (Optr)&t_method_return);
    Method PMethod13365 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13366, 1, PSend13373);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod13365, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    String string_13376 = new_String(L"NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13377 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13376_Const = new_Constant((Optr)string_13376);
    // named:parsing:. 
    Send PSend13378 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13376_Const, (Optr)PSend13377);
    Array PThreadedCode13375 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13376, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13377, (Optr)&t_send2, (Optr)PSend13378, (Optr)&t_method_return);
    Method PMethod13374 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13375, 1, PSend13378);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod13374, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    String string_13381 = new_String(L"UNARY-OBJECT-DESCRIPTION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13382 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13383 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13384 = new_Send((Optr)PSend13383, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13385 = new_Send((Optr)PSend13382, SMB__and_, 1, (Optr)PSend13384);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13381_Const = new_Constant((Optr)string_13381);
    // named:parsing:. 
    Send PSend13386 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13381_Const, (Optr)PSend13385);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13387 = new_Send((Optr)PSend13386, SMB_memo, 0);
    Array PThreadedCode13380 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13381, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13382, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13383, (Optr)&t_send0, (Optr)PSend13384, (Optr)&t_send1, (Optr)PSend13385, (Optr)&t_send2, (Optr)PSend13386, (Optr)&t_send0, (Optr)PSend13387, (Optr)&t_method_return);
    Method PMethod13379 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13380, 1, PSend13387);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod13379, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    String string_13390 = new_String(L"VARIABLE-NAME");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13391 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13390_Const = new_Constant((Optr)string_13390);
    // named:parsing:. 
    Send PSend13392 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13390_Const, (Optr)PSend13391);
    Array PThreadedCode13389 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13390, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13391, (Optr)&t_send2, (Optr)PSend13392, (Optr)&t_method_return);
    Method PMethod13388 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13389, 1, PSend13392);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod13388, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_assignmentOp() {
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    String string_13395 = new_String(L":=");
    Constant string_13395_Const = new_Constant((Optr)string_13395);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13396 = new_Send((Optr)string_13395_Const, SMB_asParser, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13397 = new_Send((Optr)PSend13396, SMB_omit, 0);
    Array PThreadedCode13394 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)string_13395, (Optr)&t_send0, (Optr)PSend13396, (Optr)&t_send0, (Optr)PSend13397, (Optr)&t_method_return);
    Method PMethod13393 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13394, 1, PSend13397);
    
    MethodClosure MC_SMB_assignmentOp = new_MethodClosure((Method)PMethod13393, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_assignmentOp, MC_SMB_assignmentOp);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    String string_13400 = new_String(L"CAPITAL-IDENTIFIER");
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13401 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13402 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13403 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13404 = new_Send((Optr)PSend13402, SMB__or_, 1, (Optr)PSend13403);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13405 = new_Send((Optr)PSend13404, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13406 = new_Send((Optr)PSend13401, SMB__logicAnd_, 1, (Optr)PSend13405);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13400_Const = new_Constant((Optr)string_13400);
    // named:parsing:. 
    Send PSend13407 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13400_Const, (Optr)PSend13406);
    Array PThreadedCode13399 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13400, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13401, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13402, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13403, (Optr)&t_send1, (Optr)PSend13404, (Optr)&t_send0, (Optr)PSend13405, (Optr)&t_send1, (Optr)PSend13406, (Optr)&t_send2, (Optr)PSend13407, (Optr)&t_method_return);
    Method PMethod13398 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13399, 1, PSend13407);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod13398, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    String string_13410 = new_String(L"BINARY-SELECTOR");
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13411 = new_Send((Optr)self, SMB_specialCharacter, 0);
    String string_13412 = new_String(L"-");
    Constant string_13412_Const = new_Constant((Optr)string_13412);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13413 = new_Send((Optr)string_13412_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13414 = new_Send((Optr)PSend13413, SMB_consume, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13415 = new_Send((Optr)PSend13411, SMB__or_, 1, (Optr)PSend13414);
    // specialCharacter. 
    Send PSend13416 = new_Send((Optr)self, SMB_specialCharacter, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13417 = new_Send((Optr)PSend13416, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13418 = new_Send((Optr)PSend13415, SMB__logicAnd_, 1, (Optr)PSend13417);
    String string_13419 = new_String(L"|");
    Constant string_13419_Const = new_Constant((Optr)string_13419);
    // asParser. 
    Send PSend13420 = new_Send((Optr)string_13419_Const, SMB_asParser, 0);
    // consume. 
    Send PSend13421 = new_Send((Optr)PSend13420, SMB_consume, 0);
    // |. 
    Send PSend13422 = new_Send((Optr)PSend13418, SMB__or_, 1, (Optr)PSend13421);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13410_Const = new_Constant((Optr)string_13410);
    // named:parsing:. 
    Send PSend13423 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13410_Const, (Optr)PSend13422);
    Array PThreadedCode13409 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13410, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13411, (Optr)&t_push1, (Optr)string_13412, (Optr)&t_send0, (Optr)PSend13413, (Optr)&t_send0, (Optr)PSend13414, (Optr)&t_send1, (Optr)PSend13415, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13416, (Optr)&t_send0, (Optr)PSend13417, (Optr)&t_send1, (Optr)PSend13418, (Optr)&t_push1, (Optr)string_13419, (Optr)&t_send0, (Optr)PSend13420, (Optr)&t_send0, (Optr)PSend13421, (Optr)&t_send1, (Optr)PSend13422, (Optr)&t_send2, (Optr)PSend13423, (Optr)&t_method_return);
    Method PMethod13408 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13409, 1, PSend13423);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod13408, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    String string_13426 = new_String(L"STRING-CONSTANT");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13427 = new_Send((Optr)self, SMB_string, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13426_Const = new_Constant((Optr)string_13426);
    // named:parsing:. 
    Send PSend13428 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13426_Const, (Optr)PSend13427);
    Array PThreadedCode13425 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13426, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13427, (Optr)&t_send2, (Optr)PSend13428, (Optr)&t_method_return);
    Method PMethod13424 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13425, 1, PSend13428);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod13424, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeParameterName() {
    Symbol SMB_initializeParameterName = new_Symbol(L"initializeParameterName");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13431 = new_Send((Optr)self, SMB_identifier, 0);
    Array PThreadedCode13430 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13431, (Optr)&t_method_return);
    Method PMethod13429 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13430, 1, PSend13431);
    
    MethodClosure MC_SMB_initializeParameterName = new_MethodClosure((Method)PMethod13429, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeParameterName, MC_SMB_initializeParameterName);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    String string_13434 = new_String(L"KEYWORD-EXPRESSION");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13435 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13436 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    // bracketIndexExpression. 
    Send PSend13437 = new_Send((Optr)self, SMB_bracketIndexExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13438 = new_Send((Optr)PSend13436, SMB__or_, 1, (Optr)PSend13437);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13439 = new_Send((Optr)PSend13435, SMB__and_, 1, (Optr)PSend13438);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13434_Const = new_Constant((Optr)string_13434);
    // named:parsing:. 
    Send PSend13440 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13434_Const, (Optr)PSend13439);
    Array PThreadedCode13433 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13434, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13435, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13436, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13437, (Optr)&t_send1, (Optr)PSend13438, (Optr)&t_send1, (Optr)PSend13439, (Optr)&t_send2, (Optr)PSend13440, (Optr)&t_method_return);
    Method PMethod13432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13433, 1, PSend13440);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod13432, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    String string_13443 = new_String(L"BRACKET-INDEX-EXPRESSION");
    String string_13444 = new_String(L"[");
    Constant string_13444_Const = new_Constant((Optr)string_13444);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13445 = new_Send((Optr)string_13444_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13446 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13447 = new_Send((Optr)PSend13445, SMB__and_, 1, (Optr)PSend13446);
    String string_13448 = new_String(L"]");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13448_Const = new_Constant((Optr)string_13448);
    // <&. 
    Send PSend13449 = new_Send((Optr)PSend13447, SMB__lt__and_, 1, (Optr)string_13448_Const);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend13450 = new_Send((Optr)self, SMB_assignmentOp, 0);
    // expression. 
    Send PSend13451 = new_Send((Optr)self, SMB_expression, 0);
    // &. 
    Send PSend13452 = new_Send((Optr)PSend13450, SMB__and_, 1, (Optr)PSend13451);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13453 = new_Send((Optr)PSend13452, SMB_optional, 0);
    // <&. 
    Send PSend13454 = new_Send((Optr)PSend13449, SMB__lt__and_, 1, (Optr)PSend13453);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13443_Const = new_Constant((Optr)string_13443);
    // named:parsing:. 
    Send PSend13455 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13443_Const, (Optr)PSend13454);
    Array PThreadedCode13442 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13443, (Optr)&t_push1, (Optr)string_13444, (Optr)&t_send0, (Optr)PSend13445, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13446, (Optr)&t_send1, (Optr)PSend13447, (Optr)&t_push1, (Optr)string_13448, (Optr)&t_send1, (Optr)PSend13449, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13450, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13451, (Optr)&t_send1, (Optr)PSend13452, (Optr)&t_send0, (Optr)PSend13453, (Optr)&t_send1, (Optr)PSend13454, (Optr)&t_send2, (Optr)PSend13455, (Optr)&t_method_return);
    Method PMethod13441 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13442, 1, PSend13455);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod13441, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    // preStoreBinaryObjectDescription. 
    Send PSend13458 = new_Send((Optr)self, SMB_preStoreBinaryObjectDescription, 0);
    Symbol  SMB_binaryExpression = new_Symbol(L"binaryExpression");
    String string_13459 = new_String(L"BINARY-EXPRESSION");
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13460 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13461 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13462 = new_Send((Optr)PSend13460, SMB__and_, 1, (Optr)PSend13461);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13463 = new_Send((Optr)PSend13462, SMB_plus, 0);
    // unaryObjectDescription. 
    Send PSend13464 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    // &. 
    Send PSend13465 = new_Send((Optr)PSend13463, SMB__and_, 1, (Optr)PSend13464);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13459_Const = new_Constant((Optr)string_13459);
    // named:parsing:. 
    Send PSend13466 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13459_Const, (Optr)PSend13465);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryExpression_Const = new_Constant((Optr)SMB_binaryExpression);
    // at:ifAbsentPut:. 
    Send PSend13467 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryExpression_Const, (Optr)PSend13466);
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    // injectBinaryObjectDescription. 
    Send PSend13468 = new_Send((Optr)self, SMB_injectBinaryObjectDescription, 0);
    // binaryExpression. 
    Send PSend13469 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Array PThreadedCode13457 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13458, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryExpression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13459, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13460, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13461, (Optr)&t_send1, (Optr)PSend13462, (Optr)&t_send0, (Optr)PSend13463, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13464, (Optr)&t_send1, (Optr)PSend13465, (Optr)&t_send2, (Optr)PSend13466, (Optr)&t_send2, (Optr)PSend13467, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13468, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13469, (Optr)&t_method_return);
    Method PMethod13456 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13457, 4, PSend13458, PSend13467, PSend13468, PSend13469);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod13456, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    String string_13472 = new_String(L"SCOPED-EXPRESSION");
    String string_13473 = new_String(L"(");
    Constant string_13473_Const = new_Constant((Optr)string_13473);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13474 = new_Send((Optr)string_13473_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13475 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13476 = new_Send((Optr)PSend13474, SMB__and_, 1, (Optr)PSend13475);
    String string_13477 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13477_Const = new_Constant((Optr)string_13477);
    // <&. 
    Send PSend13478 = new_Send((Optr)PSend13476, SMB__lt__and_, 1, (Optr)string_13477_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13472_Const = new_Constant((Optr)string_13472);
    // named:parsing:. 
    Send PSend13479 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13472_Const, (Optr)PSend13478);
    Array PThreadedCode13471 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13472, (Optr)&t_push1, (Optr)string_13473, (Optr)&t_send0, (Optr)PSend13474, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13475, (Optr)&t_send1, (Optr)PSend13476, (Optr)&t_push1, (Optr)string_13477, (Optr)&t_send1, (Optr)PSend13478, (Optr)&t_send2, (Optr)PSend13479, (Optr)&t_method_return);
    Method PMethod13470 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13471, 1, PSend13479);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod13470, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    String string_13482 = new_String(L"CHARACTER-CONSTANT");
    String string_13483 = new_String(L"$");
    Constant string_13483_Const = new_Constant((Optr)string_13483);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13484 = new_Send((Optr)string_13483_Const, SMB_asParser, 0);
    Symbol SMB_character = new_Symbol(L"character");
    // character. 
    Send PSend13485 = new_Send((Optr)self, SMB_character, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13486 = new_Send((Optr)PSend13484, SMB__logicAnd_, 1, (Optr)PSend13485);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13482_Const = new_Constant((Optr)string_13482);
    // named:parsing:. 
    Send PSend13487 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13482_Const, (Optr)PSend13486);
    Array PThreadedCode13481 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13482, (Optr)&t_push1, (Optr)string_13483, (Optr)&t_send0, (Optr)PSend13484, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13485, (Optr)&t_send1, (Optr)PSend13486, (Optr)&t_send2, (Optr)PSend13487, (Optr)&t_method_return);
    Method PMethod13480 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13481, 1, PSend13487);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod13480, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    String string_13490 = new_String(L"NUMBER-FORMAT");
    String string_13491 = new_String(L"-");
    Constant string_13491_Const = new_Constant((Optr)string_13491);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13492 = new_Send((Optr)string_13491_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13493 = new_Send((Optr)PSend13492, SMB_consume, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13494 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13495 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13496 = new_Send((Optr)PSend13494, SMB__or_, 1, (Optr)PSend13495);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13497 = new_Send((Optr)PSend13496, SMB_strongPlus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13498 = new_Send((Optr)PSend13493, SMB__and_, 1, (Optr)PSend13497);
    // decimalDigit. 
    Send PSend13499 = new_Send((Optr)self, SMB_decimalDigit, 0);
    // uppercase. 
    Send PSend13500 = new_Send((Optr)self, SMB_uppercase, 0);
    // |. 
    Send PSend13501 = new_Send((Optr)PSend13499, SMB__or_, 1, (Optr)PSend13500);
    // strongPlus. 
    Send PSend13502 = new_Send((Optr)PSend13501, SMB_strongPlus, 0);
    // |. 
    Send PSend13503 = new_Send((Optr)PSend13498, SMB__or_, 1, (Optr)PSend13502);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13490_Const = new_Constant((Optr)string_13490);
    // named:parsing:. 
    Send PSend13504 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13490_Const, (Optr)PSend13503);
    Array PThreadedCode13489 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13490, (Optr)&t_push1, (Optr)string_13491, (Optr)&t_send0, (Optr)PSend13492, (Optr)&t_send0, (Optr)PSend13493, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13494, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13495, (Optr)&t_send1, (Optr)PSend13496, (Optr)&t_send0, (Optr)PSend13497, (Optr)&t_send1, (Optr)PSend13498, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13499, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13500, (Optr)&t_send1, (Optr)PSend13501, (Optr)&t_send0, (Optr)PSend13502, (Optr)&t_send1, (Optr)PSend13503, (Optr)&t_send2, (Optr)PSend13504, (Optr)&t_method_return);
    Method PMethod13488 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13489, 1, PSend13504);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod13488, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    String string_13507 = new_String(L"METHOD");
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend13508 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_messagePattern = new_Symbol(L"messagePattern");
    // messagePattern. 
    Send PSend13509 = new_Send((Optr)self, SMB_messagePattern, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13510 = new_Send((Optr)PSend13508, SMB__and_, 1, (Optr)PSend13509);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13511 = new_Send((Optr)self, SMB_annotations, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13512 = new_Send((Optr)PSend13510, SMB__lt__and_, 1, (Optr)PSend13511);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13513 = new_Send((Optr)self, SMB_temporaries, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13514 = new_Send((Optr)PSend13513, SMB_optional, 0);
    // <&. 
    Send PSend13515 = new_Send((Optr)PSend13512, SMB__lt__and_, 1, (Optr)PSend13514);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13516 = new_Send((Optr)self, SMB_statements, 0);
    // <&. 
    Send PSend13517 = new_Send((Optr)PSend13515, SMB__lt__and_, 1, (Optr)PSend13516);
    // separator. 
    Send PSend13518 = new_Send((Optr)self, SMB_separator, 0);
    // <&. 
    Send PSend13519 = new_Send((Optr)PSend13517, SMB__lt__and_, 1, (Optr)PSend13518);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13520 = new_Send((Optr)PSend13519, SMB_end, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13507_Const = new_Constant((Optr)string_13507);
    // named:parsing:. 
    Send PSend13521 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13507_Const, (Optr)PSend13520);
    // separator. 
    Send PSend13522 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_separator_ = new_Symbol(L"separator:");
    // separator:. 
    Send PSend13523 = new_Send((Optr)PSend13521, SMB_separator_, 1, (Optr)PSend13522);
    Array PThreadedCode13506 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13507, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13508, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13509, (Optr)&t_send1, (Optr)PSend13510, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13511, (Optr)&t_send1, (Optr)PSend13512, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13513, (Optr)&t_send0, (Optr)PSend13514, (Optr)&t_send1, (Optr)PSend13515, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13516, (Optr)&t_send1, (Optr)PSend13517, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13518, (Optr)&t_send1, (Optr)PSend13519, (Optr)&t_send0, (Optr)PSend13520, (Optr)&t_send2, (Optr)PSend13521, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13522, (Optr)&t_send1, (Optr)PSend13523, (Optr)&t_method_return);
    Method PMethod13505 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13506, 1, PSend13523);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod13505, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    String string_13526 = new_String(L"UNARY-MESSAGE-DEFINITION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13527 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13526_Const = new_Constant((Optr)string_13526);
    // named:parsing:. 
    Send PSend13528 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13526_Const, (Optr)PSend13527);
    Array PThreadedCode13525 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13526, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13527, (Optr)&t_send2, (Optr)PSend13528, (Optr)&t_method_return);
    Method PMethod13524 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13525, 1, PSend13528);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod13524, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_preStorePrimary() {
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    Symbol  SMB_primary = new_Symbol(L"primary");
    String string_13533 = new_String(L"PRIMARY");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13533_Const = new_Constant((Optr)string_13533);
    // named:. 
    Send PSend13534 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13533_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13535 = new_Send((Optr)PSend13534, SMB_memo, 0);
    Array PThreadedCode13532 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13533, (Optr)&t_send1, (Optr)PSend13534, (Optr)&t_send0, (Optr)PSend13535, (Optr)&t_block_return);
    Block PBlock13531 = new_Block_with(empty_Array, empty_Array, PThreadedCode13532, 1, PSend13535);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_primary_Const = new_Constant((Optr)SMB_primary);
    // at:ifAbsentPut:. 
    Send PSend13536 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_primary_Const, (Optr)PBlock13531);
    Array PThreadedCode13530 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_primary, (Optr)&t_push_closure, (Optr)PBlock13531, (Optr)&t_send2, (Optr)PSend13536, (Optr)&t_method_return);
    Method PMethod13529 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13530, 1, PSend13536);
    
    MethodClosure MC_SMB_preStorePrimary = new_MethodClosure((Method)PMethod13529, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStorePrimary, MC_SMB_preStorePrimary);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    String string_13539 = new_String(L"KEYWORD");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13540 = new_Send((Optr)self, SMB_identifierBody, 0);
    String string_13541 = new_String(L":");
    Constant string_13541_Const = new_Constant((Optr)string_13541);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13542 = new_Send((Optr)string_13541_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13543 = new_Send((Optr)PSend13542, SMB_consume, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13544 = new_Send((Optr)PSend13540, SMB__logicAnd_, 1, (Optr)PSend13543);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13539_Const = new_Constant((Optr)string_13539);
    // named:parsing:. 
    Send PSend13545 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13539_Const, (Optr)PSend13544);
    Array PThreadedCode13538 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13539, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13540, (Optr)&t_push1, (Optr)string_13541, (Optr)&t_send0, (Optr)PSend13542, (Optr)&t_send0, (Optr)PSend13543, (Optr)&t_send1, (Optr)PSend13544, (Optr)&t_send2, (Optr)PSend13545, (Optr)&t_method_return);
    Method PMethod13537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13538, 1, PSend13545);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod13537, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeUppercase() {
    Symbol SMB_initializeUppercase = new_Symbol(L"initializeUppercase");
    String string_13548 = new_String(L"A-Z");
    Constant string_13548_Const = new_Constant((Optr)string_13548);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13549 = new_Send((Optr)string_13548_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13547 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13548, (Optr)&t_send0, (Optr)PSend13549, (Optr)&t_method_return);
    Method PMethod13546 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13547, 1, PSend13549);
    
    MethodClosure MC_SMB_initializeUppercase = new_MethodClosure((Method)PMethod13546, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUppercase, MC_SMB_initializeUppercase);
}


static void init_SMB_preStoreMessageExpression() {
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    Symbol  SMB_messageExpression = new_Symbol(L"messageExpression");
    String string_13554 = new_String(L"MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13554_Const = new_Constant((Optr)string_13554);
    // named:. 
    Send PSend13555 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13554_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13556 = new_Send((Optr)PSend13555, SMB_memo, 0);
    Array PThreadedCode13553 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13554, (Optr)&t_send1, (Optr)PSend13555, (Optr)&t_send0, (Optr)PSend13556, (Optr)&t_block_return);
    Block PBlock13552 = new_Block_with(empty_Array, empty_Array, PThreadedCode13553, 1, PSend13556);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_messageExpression_Const = new_Constant((Optr)SMB_messageExpression);
    // at:ifAbsentPut:. 
    Send PSend13557 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_messageExpression_Const, (Optr)PBlock13552);
    Array PThreadedCode13551 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_messageExpression, (Optr)&t_push_closure, (Optr)PBlock13552, (Optr)&t_send2, (Optr)PSend13557, (Optr)&t_method_return);
    Method PMethod13550 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13551, 1, PSend13557);
    
    MethodClosure MC_SMB_preStoreMessageExpression = new_MethodClosure((Method)PMethod13550, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreMessageExpression, MC_SMB_preStoreMessageExpression);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    String string_13560 = new_String(L"UNARY-EXPRESSION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13561 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13562 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13563 = new_Send((Optr)PSend13562, SMB_plus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13564 = new_Send((Optr)PSend13561, SMB__and_, 1, (Optr)PSend13563);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13560_Const = new_Constant((Optr)string_13560);
    // named:parsing:. 
    Send PSend13565 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13560_Const, (Optr)PSend13564);
    Array PThreadedCode13559 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13560, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13561, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13562, (Optr)&t_send0, (Optr)PSend13563, (Optr)&t_send1, (Optr)PSend13564, (Optr)&t_send2, (Optr)PSend13565, (Optr)&t_method_return);
    Method PMethod13558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13559, 1, PSend13565);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod13558, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeSymbol() {
    Symbol SMB_initializeSymbol = new_Symbol(L"initializeSymbol");
    String string_13568 = new_String(L"SYMBOL");
    Symbol SMB_symbolKeywords = new_Symbol(L"symbolKeywords");
    // symbolKeywords. 
    Send PSend13569 = new_Send((Optr)self, SMB_symbolKeywords, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13570 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13571 = new_Send((Optr)PSend13569, SMB__or_, 1, (Optr)PSend13570);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13572 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13573 = new_Send((Optr)PSend13571, SMB__lt__equals_, 1, (Optr)PSend13572);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13574 = new_Send((Optr)self, SMB_string, 0);
    // <=. 
    Send PSend13575 = new_Send((Optr)PSend13573, SMB__lt__equals_, 1, (Optr)PSend13574);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13568_Const = new_Constant((Optr)string_13568);
    // named:parsing:. 
    Send PSend13576 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13568_Const, (Optr)PSend13575);
    Array PThreadedCode13567 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13568, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13569, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13570, (Optr)&t_send1, (Optr)PSend13571, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13572, (Optr)&t_send1, (Optr)PSend13573, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13574, (Optr)&t_send1, (Optr)PSend13575, (Optr)&t_send2, (Optr)PSend13576, (Optr)&t_method_return);
    Method PMethod13566 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13567, 1, PSend13576);
    
    MethodClosure MC_SMB_initializeSymbol = new_MethodClosure((Method)PMethod13566, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbol, MC_SMB_initializeSymbol);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    String string_13579 = new_String(L"PRIMARY-VARIABLE");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13580 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13581 = new_String(L".");
    Constant string_13581_Const = new_Constant((Optr)string_13581);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13582 = new_Send((Optr)string_13581_Const, SMB_asParser, 0);
    // identifier. 
    Send PSend13583 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13584 = new_Send((Optr)PSend13582, SMB__logicAnd_, 1, (Optr)PSend13583);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13585 = new_Send((Optr)PSend13584, SMB_strongTimes, 0);
    // &&. 
    Send PSend13586 = new_Send((Optr)PSend13580, SMB__logicAnd_, 1, (Optr)PSend13585);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13579_Const = new_Constant((Optr)string_13579);
    // named:parsing:. 
    Send PSend13587 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13579_Const, (Optr)PSend13586);
    Array PThreadedCode13578 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13579, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13580, (Optr)&t_push1, (Optr)string_13581, (Optr)&t_send0, (Optr)PSend13582, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13583, (Optr)&t_send1, (Optr)PSend13584, (Optr)&t_send0, (Optr)PSend13585, (Optr)&t_send1, (Optr)PSend13586, (Optr)&t_send2, (Optr)PSend13587, (Optr)&t_method_return);
    Method PMethod13577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13578, 1, PSend13587);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod13577, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    String string_13590 = new_String(L"KEYWORDS-ARGUMENTS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13591 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13592 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13593 = new_Send((Optr)PSend13591, SMB__and_, 1, (Optr)PSend13592);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13594 = new_Send((Optr)PSend13593, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13590_Const = new_Constant((Optr)string_13590);
    // named:parsing:. 
    Send PSend13595 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13590_Const, (Optr)PSend13594);
    Array PThreadedCode13589 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13590, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13591, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13592, (Optr)&t_send1, (Optr)PSend13593, (Optr)&t_send0, (Optr)PSend13594, (Optr)&t_send2, (Optr)PSend13595, (Optr)&t_method_return);
    Method PMethod13588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13589, 1, PSend13595);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod13588, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_preStoreBracketIndexExpression() {
    Symbol SMB_preStoreBracketIndexExpression = new_Symbol(L"preStoreBracketIndexExpression");
    Symbol  SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    String string_13600 = new_String(L"BRACKET-INDEX-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13600_Const = new_Constant((Optr)string_13600);
    // named:. 
    Send PSend13601 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13600_Const);
    Array PThreadedCode13599 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13600, (Optr)&t_send1, (Optr)PSend13601, (Optr)&t_block_return);
    Block PBlock13598 = new_Block_with(empty_Array, empty_Array, PThreadedCode13599, 1, PSend13601);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_bracketIndexExpression_Const = new_Constant((Optr)SMB_bracketIndexExpression);
    // at:ifAbsentPut:. 
    Send PSend13602 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_bracketIndexExpression_Const, (Optr)PBlock13598);
    Array PThreadedCode13597 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_bracketIndexExpression, (Optr)&t_push_closure, (Optr)PBlock13598, (Optr)&t_send2, (Optr)PSend13602, (Optr)&t_method_return);
    Method PMethod13596 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13597, 1, PSend13602);
    
    MethodClosure MC_SMB_preStoreBracketIndexExpression = new_MethodClosure((Method)PMethod13596, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBracketIndexExpression, MC_SMB_preStoreBracketIndexExpression);
}


static void init_SMB_initializePrimary() {
    Symbol SMB_initializePrimary = new_Symbol(L"initializePrimary");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13605 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13606 = new_Send((Optr)self, SMB_primary, 0);
    Array PThreadedCode13604 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13605, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13606, (Optr)&t_method_return);
    Method PMethod13603 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13604, 2, PSend13605, PSend13606);
    
    MethodClosure MC_SMB_initializePrimary = new_MethodClosure((Method)PMethod13603, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimary, MC_SMB_initializePrimary);
}


static void init_SMB_parseMethod_() {
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray13608 = new_Array_with(1, (Optr)VAR_method_0_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend13610 = new_Send((Optr)self, SMB_method, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13611 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_method_0_0, (Optr)PSend13610);
    Array PThreadedCode13609 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13610, (Optr)&t_send2, (Optr)PSend13611, (Optr)&t_method_return);
    Method PMethod13607 = new_Method_with(PArray13608, empty_Array, empty_Array, PThreadedCode13609, 1, PSend13611);
    
    MethodClosure MC_SMB_parseMethod_ = new_MethodClosure((Method)PMethod13607, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseMethod_, MC_SMB_parseMethod_);
}


static void init_SMB_initializeDecimalDigit() {
    Symbol SMB_initializeDecimalDigit = new_Symbol(L"initializeDecimalDigit");
    String string_13614 = new_String(L"0-9");
    Constant string_13614_Const = new_Constant((Optr)string_13614);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13615 = new_Send((Optr)string_13614_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13613 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13614, (Optr)&t_send0, (Optr)PSend13615, (Optr)&t_method_return);
    Method PMethod13612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13613, 1, PSend13615);
    
    MethodClosure MC_SMB_initializeDecimalDigit = new_MethodClosure((Method)PMethod13612, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeDecimalDigit, MC_SMB_initializeDecimalDigit);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    String string_13618 = new_String(L"TEMPORARIES");
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13619 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend13620 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13621 = new_Send((Optr)PSend13620, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13622 = new_Send((Optr)PSend13619, SMB__and_, 1, (Optr)PSend13621);
    // bar. 
    Send PSend13623 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13624 = new_Send((Optr)PSend13622, SMB__lt__and_, 1, (Optr)PSend13623);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13618_Const = new_Constant((Optr)string_13618);
    // named:parsing:. 
    Send PSend13625 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13618_Const, (Optr)PSend13624);
    Array PThreadedCode13617 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13618, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13619, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13620, (Optr)&t_send0, (Optr)PSend13621, (Optr)&t_send1, (Optr)PSend13622, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13623, (Optr)&t_send1, (Optr)PSend13624, (Optr)&t_send2, (Optr)PSend13625, (Optr)&t_method_return);
    Method PMethod13616 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13617, 1, PSend13625);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod13616, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    String string_13628 = new_String(L"KEYWORD-MESSAGE-EXPRESSION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13629 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13630 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
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
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod13626, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    String string_13636 = new_String(L"SYMBOL-KEYWORDS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13637 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13638 = new_Send((Optr)PSend13637, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13636_Const = new_Constant((Optr)string_13636);
    // named:parsing:. 
    Send PSend13639 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13636_Const, (Optr)PSend13638);
    Array PThreadedCode13635 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13636, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13637, (Optr)&t_send0, (Optr)PSend13638, (Optr)&t_send2, (Optr)PSend13639, (Optr)&t_method_return);
    Method PMethod13634 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13635, 1, PSend13639);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod13634, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeSpecialCharacter() {
    Symbol SMB_initializeSpecialCharacter = new_Symbol(L"initializeSpecialCharacter");
    String string_13642 = new_String(L"+*/\\~<>=@%?!&`,");
    Constant string_13642_Const = new_Constant((Optr)string_13642);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13643 = new_Send((Optr)string_13642_Const, SMB_asPEGChoice, 0);
    Array PThreadedCode13641 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13642, (Optr)&t_send0, (Optr)PSend13643, (Optr)&t_method_return);
    Method PMethod13640 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13641, 1, PSend13643);
    
    MethodClosure MC_SMB_initializeSpecialCharacter = new_MethodClosure((Method)PMethod13640, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSpecialCharacter, MC_SMB_initializeSpecialCharacter);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Symbol  SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    String string_13648 = new_String(L"CASCADED-MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13648_Const = new_Constant((Optr)string_13648);
    // named:. 
    Send PSend13649 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13648_Const);
    Array PThreadedCode13647 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13648, (Optr)&t_send1, (Optr)PSend13649, (Optr)&t_block_return);
    Block PBlock13646 = new_Block_with(empty_Array, empty_Array, PThreadedCode13647, 1, PSend13649);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_cascadedMessageExpression_Const = new_Constant((Optr)SMB_cascadedMessageExpression);
    // at:ifAbsentPut:. 
    Send PSend13650 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_cascadedMessageExpression_Const, (Optr)PBlock13646);
    Array PThreadedCode13645 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_cascadedMessageExpression, (Optr)&t_push_closure, (Optr)PBlock13646, (Optr)&t_send2, (Optr)PSend13650, (Optr)&t_method_return);
    Method PMethod13644 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13645, 1, PSend13650);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod13644, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_parseStatements_() {
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    Variable VAR_statements_0_0 = new_Variable_named(L"statements", 0);
    Array PArray13652 = new_Array_with(1, (Optr)VAR_statements_0_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13654 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13655 = new_Send((Optr)PSend13654, SMB_end, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13656 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_statements_0_0, (Optr)PSend13655);
    Array PThreadedCode13653 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13654, (Optr)&t_send0, (Optr)PSend13655, (Optr)&t_send2, (Optr)PSend13656, (Optr)&t_method_return);
    Method PMethod13651 = new_Method_with(PArray13652, empty_Array, empty_Array, PThreadedCode13653, 1, PSend13656);
    
    MethodClosure MC_SMB_parseStatements_ = new_MethodClosure((Method)PMethod13651, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseStatements_, MC_SMB_parseStatements_);
}


static void init_SMB_preStoreBinaryObjectDescription() {
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    Symbol  SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    String string_13661 = new_String(L"BINARY-OBJECT-DESCRIPTION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13661_Const = new_Constant((Optr)string_13661);
    // named:. 
    Send PSend13662 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13661_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13663 = new_Send((Optr)PSend13662, SMB_memo, 0);
    Array PThreadedCode13660 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13661, (Optr)&t_send1, (Optr)PSend13662, (Optr)&t_send0, (Optr)PSend13663, (Optr)&t_block_return);
    Block PBlock13659 = new_Block_with(empty_Array, empty_Array, PThreadedCode13660, 1, PSend13663);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryObjectDescription_Const = new_Constant((Optr)SMB_binaryObjectDescription);
    // at:ifAbsentPut:. 
    Send PSend13664 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryObjectDescription_Const, (Optr)PBlock13659);
    Array PThreadedCode13658 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryObjectDescription, (Optr)&t_push_closure, (Optr)PBlock13659, (Optr)&t_send2, (Optr)PSend13664, (Optr)&t_method_return);
    Method PMethod13657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13658, 1, PSend13664);
    
    MethodClosure MC_SMB_preStoreBinaryObjectDescription = new_MethodClosure((Method)PMethod13657, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBinaryObjectDescription, MC_SMB_preStoreBinaryObjectDescription);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    String string_13667 = new_String(L"BLOCK");
    String string_13668 = new_String(L"[");
    Constant string_13668_Const = new_Constant((Optr)string_13668);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13669 = new_Send((Optr)string_13668_Const, SMB_asParser, 0);
    Symbol SMB_blockArguments = new_Symbol(L"blockArguments");
    // blockArguments. 
    Send PSend13670 = new_Send((Optr)self, SMB_blockArguments, 0);
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13671 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13672 = new_Send((Optr)PSend13670, SMB__and_, 1, (Optr)PSend13671);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13673 = new_Send((Optr)PSend13672, SMB_optional, 0);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13674 = new_Send((Optr)self, SMB_temporaries, 0);
    // optional. 
    Send PSend13675 = new_Send((Optr)PSend13674, SMB_optional, 0);
    // &. 
    Send PSend13676 = new_Send((Optr)PSend13673, SMB__and_, 1, (Optr)PSend13675);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13677 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13678 = new_Send((Optr)PSend13676, SMB__lt__and_, 1, (Optr)PSend13677);
    String string_13679 = new_String(L"]");
    Constant string_13679_Const = new_Constant((Optr)string_13679);
    // <&. 
    Send PSend13680 = new_Send((Optr)PSend13678, SMB__lt__and_, 1, (Optr)string_13679_Const);
    // blockArguments. 
    Send PSend13681 = new_Send((Optr)self, SMB_blockArguments, 0);
    // optional. 
    Send PSend13682 = new_Send((Optr)PSend13681, SMB_optional, 0);
    String string_13683 = new_String(L"]");
    Constant string_13683_Const = new_Constant((Optr)string_13683);
    // &. 
    Send PSend13684 = new_Send((Optr)PSend13682, SMB__and_, 1, (Optr)string_13683_Const);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13685 = new_Send((Optr)PSend13680, SMB__or_, 1, (Optr)PSend13684);
    // &. 
    Send PSend13686 = new_Send((Optr)PSend13669, SMB__and_, 1, (Optr)PSend13685);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13667_Const = new_Constant((Optr)string_13667);
    // named:parsing:. 
    Send PSend13687 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13667_Const, (Optr)PSend13686);
    Array PThreadedCode13666 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13667, (Optr)&t_push1, (Optr)string_13668, (Optr)&t_send0, (Optr)PSend13669, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13670, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13671, (Optr)&t_send1, (Optr)PSend13672, (Optr)&t_send0, (Optr)PSend13673, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13674, (Optr)&t_send0, (Optr)PSend13675, (Optr)&t_send1, (Optr)PSend13676, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13677, (Optr)&t_send1, (Optr)PSend13678, (Optr)&t_push1, (Optr)string_13679, (Optr)&t_send1, (Optr)PSend13680, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13681, (Optr)&t_send0, (Optr)PSend13682, (Optr)&t_push1, (Optr)string_13683, (Optr)&t_send1, (Optr)PSend13684, (Optr)&t_send1, (Optr)PSend13685, (Optr)&t_send1, (Optr)PSend13686, (Optr)&t_send2, (Optr)PSend13687, (Optr)&t_method_return);
    Method PMethod13665 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13666, 1, PSend13687);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod13665, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    String string_13690 = new_String(L"IDENTIFIER");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13691 = new_Send((Optr)self, SMB_identifierBody, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13690_Const = new_Constant((Optr)string_13690);
    // named:parsing:. 
    Send PSend13692 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13690_Const, (Optr)PSend13691);
    Array PThreadedCode13689 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13690, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13691, (Optr)&t_send2, (Optr)PSend13692, (Optr)&t_method_return);
    Method PMethod13688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13689, 1, PSend13692);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod13688, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_injectCascadedMessageExpression() {
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13695 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13696 = new_Send((Optr)self, SMB_messageExpression, 0);
    String string_13697 = new_String(L";");
    Constant string_13697_Const = new_Constant((Optr)string_13697);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13698 = new_Send((Optr)string_13697_Const, SMB_asParser, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13699 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_binaryMessageExpression = new_Symbol(L"binaryMessageExpression");
    // binaryMessageExpression. 
    Send PSend13700 = new_Send((Optr)self, SMB_binaryMessageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13701 = new_Send((Optr)PSend13699, SMB__or_, 1, (Optr)PSend13700);
    Symbol SMB_unaryMessageExpression = new_Symbol(L"unaryMessageExpression");
    // unaryMessageExpression. 
    Send PSend13702 = new_Send((Optr)self, SMB_unaryMessageExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13703 = new_Send((Optr)PSend13701, SMB__lt__equals_, 1, (Optr)PSend13702);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13704 = new_Send((Optr)PSend13698, SMB__and_, 1, (Optr)PSend13703);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13705 = new_Send((Optr)PSend13704, SMB_plus, 0);
    // &. 
    Send PSend13706 = new_Send((Optr)PSend13696, SMB__and_, 1, (Optr)PSend13705);
    // <=. 
    Send PSend13707 = new_Send((Optr)PSend13695, SMB__lt__equals_, 1, (Optr)PSend13706);
    Array PThreadedCode13694 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13695, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13696, (Optr)&t_push1, (Optr)string_13697, (Optr)&t_send0, (Optr)PSend13698, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13699, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13700, (Optr)&t_send1, (Optr)PSend13701, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13702, (Optr)&t_send1, (Optr)PSend13703, (Optr)&t_send1, (Optr)PSend13704, (Optr)&t_send0, (Optr)PSend13705, (Optr)&t_send1, (Optr)PSend13706, (Optr)&t_send1, (Optr)PSend13707, (Optr)&t_method_return);
    Method PMethod13693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13694, 1, PSend13707);
    
    MethodClosure MC_SMB_injectCascadedMessageExpression = new_MethodClosure((Method)PMethod13693, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectCascadedMessageExpression, MC_SMB_injectCascadedMessageExpression);
}


static void init_SMB_initializeCascadedMessageExpression() {
    Symbol SMB_initializeCascadedMessageExpression = new_Symbol(L"initializeCascadedMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13710 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13711 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Array PThreadedCode13709 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13710, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13711, (Optr)&t_method_return);
    Method PMethod13708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13709, 2, PSend13710, PSend13711);
    
    MethodClosure MC_SMB_initializeCascadedMessageExpression = new_MethodClosure((Method)PMethod13708, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCascadedMessageExpression, MC_SMB_initializeCascadedMessageExpression);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    String string_13714 = new_String(L"RADIX-NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13715 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13716 = new_String(L"r");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13716_Const = new_Constant((Optr)string_13716);
    // &. 
    Send PSend13717 = new_Send((Optr)PSend13715, SMB__and_, 1, (Optr)string_13716_Const);
    // numberFormat. 
    Send PSend13718 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13719 = new_Send((Optr)PSend13717, SMB__lt__and_, 1, (Optr)PSend13718);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13714_Const = new_Constant((Optr)string_13714);
    // named:parsing:. 
    Send PSend13720 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13714_Const, (Optr)PSend13719);
    Array PThreadedCode13713 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13714, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13715, (Optr)&t_push1, (Optr)string_13716, (Optr)&t_send1, (Optr)PSend13717, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13718, (Optr)&t_send1, (Optr)PSend13719, (Optr)&t_send2, (Optr)PSend13720, (Optr)&t_method_return);
    Method PMethod13712 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13713, 1, PSend13720);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod13712, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    String string_13723 = new_String(L"SYMBOL-IN-ARRAY");
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13724 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13723_Const = new_Constant((Optr)string_13723);
    // named:parsing:. 
    Send PSend13725 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13723_Const, (Optr)PSend13724);
    Array PThreadedCode13722 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13723, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13724, (Optr)&t_send2, (Optr)PSend13725, (Optr)&t_method_return);
    Method PMethod13721 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13722, 1, PSend13725);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod13721, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    String string_13728 = new_String(L"STATEMENTS");
    Symbol SMB_subExpression = new_Symbol(L"subExpression");
    // subExpression. 
    Send PSend13729 = new_Send((Optr)self, SMB_subExpression, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13730 = new_Send((Optr)PSend13729, SMB_times, 0);
    Symbol SMB_return = new_Symbol(L"return");
    // return. 
    Send PSend13731 = new_Send((Optr)self, SMB_return, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13732 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13733 = new_Send((Optr)PSend13731, SMB__or_, 1, (Optr)PSend13732);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13734 = new_Send((Optr)PSend13733, SMB_optional, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13735 = new_Send((Optr)PSend13730, SMB__and_, 1, (Optr)PSend13734);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13728_Const = new_Constant((Optr)string_13728);
    // named:parsing:. 
    Send PSend13736 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13728_Const, (Optr)PSend13735);
    Array PThreadedCode13727 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13728, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13729, (Optr)&t_send0, (Optr)PSend13730, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13731, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13732, (Optr)&t_send1, (Optr)PSend13733, (Optr)&t_send0, (Optr)PSend13734, (Optr)&t_send1, (Optr)PSend13735, (Optr)&t_send2, (Optr)PSend13736, (Optr)&t_method_return);
    Method PMethod13726 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13727, 1, PSend13736);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod13726, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    String string_13739 = new_String(L"SYMBOL-CONSTANT");
    String string_13740 = new_String(L"#");
    Constant string_13740_Const = new_Constant((Optr)string_13740);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13741 = new_Send((Optr)string_13740_Const, SMB_asParser, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13742 = new_Send((Optr)PSend13741, SMB_plus, 0);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13743 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13744 = new_Send((Optr)PSend13742, SMB__logicAnd_, 1, (Optr)PSend13743);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13739_Const = new_Constant((Optr)string_13739);
    // named:parsing:. 
    Send PSend13745 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13739_Const, (Optr)PSend13744);
    Array PThreadedCode13738 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13739, (Optr)&t_push1, (Optr)string_13740, (Optr)&t_send0, (Optr)PSend13741, (Optr)&t_send0, (Optr)PSend13742, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13743, (Optr)&t_send1, (Optr)PSend13744, (Optr)&t_send2, (Optr)PSend13745, (Optr)&t_method_return);
    Method PMethod13737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13738, 1, PSend13745);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod13737, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Variable VAR_array_0_0 = new_Variable_named(L"array", 0);
    Array PArray13747 = new_Array_with(1, (Optr)VAR_array_0_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    String string_13751 = new_String(L"ARRAY");
    Constant string_13751_Const = new_Constant((Optr)string_13751);
    // named:. 
    Send PSend13750 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13751_Const);
    Assign PAssign13749 = new_Assign((Optr)VAR_array_0_0, (Optr)PSend13750);
    String string_13752 = new_String(L"(");
    Constant string_13752_Const = new_Constant((Optr)string_13752);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13753 = new_Send((Optr)string_13752_Const, SMB_asParser, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13754 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13755 = new_Send((Optr)self, SMB_stringConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13756 = new_Send((Optr)PSend13754, SMB__or_, 1, (Optr)PSend13755);
    Symbol SMB_symbolInArray = new_Symbol(L"symbolInArray");
    // symbolInArray. 
    Send PSend13757 = new_Send((Optr)self, SMB_symbolInArray, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13758 = new_Send((Optr)PSend13756, SMB__lt__equals_, 1, (Optr)PSend13757);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13759 = new_Send((Optr)self, SMB_symbolConstant, 0);
    // <=. 
    Send PSend13760 = new_Send((Optr)PSend13758, SMB__lt__equals_, 1, (Optr)PSend13759);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13761 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend13762 = new_Send((Optr)PSend13760, SMB__lt__equals_, 1, (Optr)PSend13761);
    // <=. 
    Send PSend13763 = new_Send((Optr)PSend13762, SMB__lt__equals_, 1, (Optr)VAR_array_0_0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13764 = new_Send((Optr)PSend13763, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13765 = new_Send((Optr)PSend13753, SMB__and_, 1, (Optr)PSend13764);
    String string_13766 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13766_Const = new_Constant((Optr)string_13766);
    // <&. 
    Send PSend13767 = new_Send((Optr)PSend13765, SMB__lt__and_, 1, (Optr)string_13766_Const);
    // <=. 
    Send PSend13768 = new_Send((Optr)VAR_array_0_0, SMB__lt__equals_, 1, (Optr)PSend13767);
    Array PThreadedCode13748 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push1, (Optr)PAssign13749, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13751, (Optr)&t_send1, (Optr)PSend13750, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_push1, (Optr)string_13752, (Optr)&t_send0, (Optr)PSend13753, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13754, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13755, (Optr)&t_send1, (Optr)PSend13756, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13757, (Optr)&t_send1, (Optr)PSend13758, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13759, (Optr)&t_send1, (Optr)PSend13760, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13761, (Optr)&t_send1, (Optr)PSend13762, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_send1, (Optr)PSend13763, (Optr)&t_send0, (Optr)PSend13764, (Optr)&t_send1, (Optr)PSend13765, (Optr)&t_push1, (Optr)string_13766, (Optr)&t_send1, (Optr)PSend13767, (Optr)&t_send1, (Optr)PSend13768, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_method_return);
    Method PMethod13746 = new_Method_with(empty_Array, PArray13747, empty_Array, PThreadedCode13748, 3, PAssign13749, PSend13768, VAR_array_0_0);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod13746, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    String string_13771 = new_String(L"KEYWORD-ANNOTATION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13772 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13773 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13774 = new_Send((Optr)PSend13772, SMB__and_, 1, (Optr)PSend13773);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13775 = new_Send((Optr)PSend13774, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13771_Const = new_Constant((Optr)string_13771);
    // named:parsing:. 
    Send PSend13776 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13771_Const, (Optr)PSend13775);
    Array PThreadedCode13770 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13771, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13772, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13773, (Optr)&t_send1, (Optr)PSend13774, (Optr)&t_send0, (Optr)PSend13775, (Optr)&t_send2, (Optr)PSend13776, (Optr)&t_method_return);
    Method PMethod13769 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13770, 1, PSend13776);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod13769, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    // preStorePrimary. 
    Send PSend13779 = new_Send((Optr)self, SMB_preStorePrimary, 0);
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    // preStoreMessageExpression. 
    Send PSend13780 = new_Send((Optr)self, SMB_preStoreMessageExpression, 0);
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    // preStoreCascadedMessageExpression. 
    Send PSend13781 = new_Send((Optr)self, SMB_preStoreCascadedMessageExpression, 0);
    Symbol  SMB_expression = new_Symbol(L"expression");
    String string_13782 = new_String(L"EXPRESSION");
    Symbol SMB_assignmentExpressions = new_Symbol(L"assignmentExpressions");
    // assignmentExpressions. 
    Send PSend13783 = new_Send((Optr)self, SMB_assignmentExpressions, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13784 = new_Send((Optr)PSend13783, SMB_optional, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13785 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13786 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13787 = new_Send((Optr)PSend13785, SMB__or_, 1, (Optr)PSend13786);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13788 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13789 = new_Send((Optr)PSend13787, SMB__lt__equals_, 1, (Optr)PSend13788);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13790 = new_Send((Optr)PSend13784, SMB__and_, 1, (Optr)PSend13789);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13782_Const = new_Constant((Optr)string_13782);
    // named:parsing:. 
    Send PSend13791 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13782_Const, (Optr)PSend13790);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // at:put:. 
    Send PSend13792 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_put_, 2, (Optr)SMB_expression_Const, (Optr)PSend13791);
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    // injectPrimary. 
    Send PSend13793 = new_Send((Optr)self, SMB_injectPrimary, 0);
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    // injectMessageExpression. 
    Send PSend13794 = new_Send((Optr)self, SMB_injectMessageExpression, 0);
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    // injectCascadedMessageExpression. 
    Send PSend13795 = new_Send((Optr)self, SMB_injectCascadedMessageExpression, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend13796 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode13778 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13779, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13780, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13781, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13782, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13783, (Optr)&t_send0, (Optr)PSend13784, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13785, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13786, (Optr)&t_send1, (Optr)PSend13787, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13788, (Optr)&t_send1, (Optr)PSend13789, (Optr)&t_send1, (Optr)PSend13790, (Optr)&t_send2, (Optr)PSend13791, (Optr)&t_send2, (Optr)PSend13792, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13793, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13794, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13795, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend13796, (Optr)&t_method_return);
    Method PMethod13777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13778, 8, PSend13779, PSend13780, PSend13781, PSend13792, PSend13793, PSend13794, PSend13795, PSend13796);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod13777, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    String string_13799 = new_String(L"FLOAT");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13800 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13801 = new_String(L".");
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Constant string_13801_Const = new_Constant((Optr)string_13801);
    // &&. 
    Send PSend13802 = new_Send((Optr)PSend13800, SMB__logicAnd_, 1, (Optr)string_13801_Const);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13803 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13804 = new_Send((Optr)PSend13803, SMB_strongPlus, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13805 = new_Send((Optr)PSend13802, SMB__lt__and_, 1, (Optr)PSend13804);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13799_Const = new_Constant((Optr)string_13799);
    // named:parsing:. 
    Send PSend13806 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13799_Const, (Optr)PSend13805);
    Array PThreadedCode13798 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13799, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13800, (Optr)&t_push1, (Optr)string_13801, (Optr)&t_send1, (Optr)PSend13802, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13803, (Optr)&t_send0, (Optr)PSend13804, (Optr)&t_send1, (Optr)PSend13805, (Optr)&t_send2, (Optr)PSend13806, (Optr)&t_method_return);
    Method PMethod13797 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13798, 1, PSend13806);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod13797, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    String string_13809 = new_String(L"BLOCK-ARGUMENTS");
    String string_13810 = new_String(L":");
    Constant string_13810_Const = new_Constant((Optr)string_13810);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13811 = new_Send((Optr)string_13810_Const, SMB_asParser, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13812 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13813 = new_Send((Optr)PSend13811, SMB__and_, 1, (Optr)PSend13812);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13814 = new_Send((Optr)PSend13813, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13809_Const = new_Constant((Optr)string_13809);
    // named:parsing:. 
    Send PSend13815 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13809_Const, (Optr)PSend13814);
    Array PThreadedCode13808 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13809, (Optr)&t_push1, (Optr)string_13810, (Optr)&t_send0, (Optr)PSend13811, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13812, (Optr)&t_send1, (Optr)PSend13813, (Optr)&t_send0, (Optr)PSend13814, (Optr)&t_send2, (Optr)PSend13815, (Optr)&t_method_return);
    Method PMethod13807 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13808, 1, PSend13815);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod13807, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeCommentFormat() {
    Symbol SMB_initializeCommentFormat = new_Symbol(L"initializeCommentFormat");
    Variable VAR_commentBorder_0_0 = new_Variable_named(L"commentBorder", 0);
    Array PArray13817 = new_Array_with(1, (Optr)VAR_commentBorder_0_0);
    String string_13821 = new_String(L"\"");
    Constant string_13821_Const = new_Constant((Optr)string_13821);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13820 = new_Send((Optr)string_13821_Const, SMB_asParser, 0);
    Assign PAssign13819 = new_Assign((Optr)VAR_commentBorder_0_0, (Optr)PSend13820);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13822 = new_Send((Optr)VAR_commentBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13823 = new_Send((Optr)PSend13822, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13824 = new_Send((Optr)PSend13823, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13825 = new_Send((Optr)VAR_commentBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend13824);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13826 = new_Send((Optr)PSend13825, SMB__lt__and_, 1, (Optr)VAR_commentBorder_0_0);
    Array PThreadedCode13818 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign13819, (Optr)&t_push1, (Optr)string_13821, (Optr)&t_send0, (Optr)PSend13820, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send0, (Optr)PSend13822, (Optr)&t_send0, (Optr)PSend13823, (Optr)&t_send0, (Optr)PSend13824, (Optr)&t_send1, (Optr)PSend13825, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send1, (Optr)PSend13826, (Optr)&t_method_return);
    Method PMethod13816 = new_Method_with(empty_Array, PArray13817, empty_Array, PThreadedCode13818, 2, PAssign13819, PSend13826);
    
    MethodClosure MC_SMB_initializeCommentFormat = new_MethodClosure((Method)PMethod13816, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCommentFormat, MC_SMB_initializeCommentFormat);
}


static void init_SMB_initializeSeparator() {
    Symbol SMB_initializeSeparator = new_Symbol(L"initializeSeparator");
    Super PSuper13829 = new_Super(SMB_initializeSeparator, 0);
    Symbol SMB_commentFormat = new_Symbol(L"commentFormat");
    // commentFormat. 
    Send PSend13830 = new_Send((Optr)self, SMB_commentFormat, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13831 = new_Send((Optr)PSuper13829, SMB__or_, 1, (Optr)PSend13830);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13832 = new_Send((Optr)PSend13831, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13833 = new_Send((Optr)PSend13832, SMB_omit, 0);
    Array PThreadedCode13828 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13829, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13830, (Optr)&t_send1, (Optr)PSend13831, (Optr)&t_send0, (Optr)PSend13832, (Optr)&t_send0, (Optr)PSend13833, (Optr)&t_method_return);
    Method PMethod13827 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13828, 1, PSend13833);
    
    MethodClosure MC_SMB_initializeSeparator = new_MethodClosure((Method)PMethod13827, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSeparator, MC_SMB_initializeSeparator);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    String string_13836 = new_String(L"BRACE-EXPRESSION");
    String string_13837 = new_String(L"{");
    Constant string_13837_Const = new_Constant((Optr)string_13837);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13838 = new_Send((Optr)string_13837_Const, SMB_asParser, 0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13839 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13840 = new_Send((Optr)PSend13838, SMB__and_, 1, (Optr)PSend13839);
    String string_13841 = new_String(L"}");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13841_Const = new_Constant((Optr)string_13841);
    // <&. 
    Send PSend13842 = new_Send((Optr)PSend13840, SMB__lt__and_, 1, (Optr)string_13841_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13836_Const = new_Constant((Optr)string_13836);
    // named:parsing:. 
    Send PSend13843 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13836_Const, (Optr)PSend13842);
    Array PThreadedCode13835 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13836, (Optr)&t_push1, (Optr)string_13837, (Optr)&t_send0, (Optr)PSend13838, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13839, (Optr)&t_send1, (Optr)PSend13840, (Optr)&t_push1, (Optr)string_13841, (Optr)&t_send1, (Optr)PSend13842, (Optr)&t_send2, (Optr)PSend13843, (Optr)&t_method_return);
    Method PMethod13834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13835, 1, PSend13843);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod13834, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_injectBinaryObjectDescription() {
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13846 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13847 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13848 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13849 = new_Send((Optr)PSend13847, SMB__or_, 1, (Optr)PSend13848);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13850 = new_Send((Optr)PSend13846, SMB__lt__equals_, 1, (Optr)PSend13849);
    Array PThreadedCode13845 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13846, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13847, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13848, (Optr)&t_send1, (Optr)PSend13849, (Optr)&t_send1, (Optr)PSend13850, (Optr)&t_method_return);
    Method PMethod13844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13845, 1, PSend13850);
    
    MethodClosure MC_SMB_injectBinaryObjectDescription = new_MethodClosure((Method)PMethod13844, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectBinaryObjectDescription, MC_SMB_injectBinaryObjectDescription);
}


static void init_SMB_initializeLowercase() {
    Symbol SMB_initializeLowercase = new_Symbol(L"initializeLowercase");
    String string_13853 = new_String(L"a-z");
    Constant string_13853_Const = new_Constant((Optr)string_13853);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13854 = new_Send((Optr)string_13853_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13852 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13853, (Optr)&t_send0, (Optr)PSend13854, (Optr)&t_method_return);
    Method PMethod13851 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13852, 1, PSend13854);
    
    MethodClosure MC_SMB_initializeLowercase = new_MethodClosure((Method)PMethod13851, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLowercase, MC_SMB_initializeLowercase);
}


static void init_SMB_injectMessageExpression() {
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13857 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB_keywordExpression = new_Symbol(L"keywordExpression");
    // keywordExpression. 
    Send PSend13858 = new_Send((Optr)self, SMB_keywordExpression, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13859 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13860 = new_Send((Optr)PSend13858, SMB__or_, 1, (Optr)PSend13859);
    Symbol SMB_unaryExpression = new_Symbol(L"unaryExpression");
    // unaryExpression. 
    Send PSend13861 = new_Send((Optr)self, SMB_unaryExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13862 = new_Send((Optr)PSend13860, SMB__lt__equals_, 1, (Optr)PSend13861);
    // <=. 
    Send PSend13863 = new_Send((Optr)PSend13857, SMB__lt__equals_, 1, (Optr)PSend13862);
    Array PThreadedCode13856 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13857, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13858, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13859, (Optr)&t_send1, (Optr)PSend13860, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13861, (Optr)&t_send1, (Optr)PSend13862, (Optr)&t_send1, (Optr)PSend13863, (Optr)&t_method_return);
    Method PMethod13855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13856, 1, PSend13863);
    
    MethodClosure MC_SMB_injectMessageExpression = new_MethodClosure((Method)PMethod13855, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectMessageExpression, MC_SMB_injectMessageExpression);
}


static void init_SMB_initializeIdentifierBody() {
    Symbol SMB_initializeIdentifierBody = new_Symbol(L"initializeIdentifierBody");
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13866 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend13867 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13868 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13869 = new_Send((Optr)PSend13867, SMB__or_, 1, (Optr)PSend13868);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13870 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13871 = new_Send((Optr)PSend13869, SMB__lt__equals_, 1, (Optr)PSend13870);
    String string_13872 = new_String(L"!?");
    Constant string_13872_Const = new_Constant((Optr)string_13872);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13873 = new_Send((Optr)string_13872_Const, SMB_asPEGChoice, 0);
    // <=. 
    Send PSend13874 = new_Send((Optr)PSend13871, SMB__lt__equals_, 1, (Optr)PSend13873);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13875 = new_Send((Optr)PSend13874, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13876 = new_Send((Optr)PSend13866, SMB__logicAnd_, 1, (Optr)PSend13875);
    Array PThreadedCode13865 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13866, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13867, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13868, (Optr)&t_send1, (Optr)PSend13869, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13870, (Optr)&t_send1, (Optr)PSend13871, (Optr)&t_push1, (Optr)string_13872, (Optr)&t_send0, (Optr)PSend13873, (Optr)&t_send1, (Optr)PSend13874, (Optr)&t_send0, (Optr)PSend13875, (Optr)&t_send1, (Optr)PSend13876, (Optr)&t_method_return);
    Method PMethod13864 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13865, 1, PSend13876);
    
    MethodClosure MC_SMB_initializeIdentifierBody = new_MethodClosure((Method)PMethod13864, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifierBody, MC_SMB_initializeIdentifierBody);
}


static void init_SMB_initializeLiteral() {
    Symbol SMB_initializeLiteral = new_Symbol(L"initializeLiteral");
    Symbol SMB_float = new_Symbol(L"float");
    // float. 
    Send PSend13879 = new_Send((Optr)self, SMB_float, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13880 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13881 = new_Send((Optr)PSend13879, SMB__or_, 1, (Optr)PSend13880);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13882 = new_Send((Optr)self, SMB_symbolConstant, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13883 = new_Send((Optr)PSend13881, SMB__lt__equals_, 1, (Optr)PSend13882);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13884 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend13885 = new_Send((Optr)PSend13883, SMB__lt__equals_, 1, (Optr)PSend13884);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13886 = new_Send((Optr)self, SMB_stringConstant, 0);
    // <=. 
    Send PSend13887 = new_Send((Optr)PSend13885, SMB__lt__equals_, 1, (Optr)PSend13886);
    Symbol SMB_arrayConstant = new_Symbol(L"arrayConstant");
    // arrayConstant. 
    Send PSend13888 = new_Send((Optr)self, SMB_arrayConstant, 0);
    // <=. 
    Send PSend13889 = new_Send((Optr)PSend13887, SMB__lt__equals_, 1, (Optr)PSend13888);
    Array PThreadedCode13878 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13879, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13880, (Optr)&t_send1, (Optr)PSend13881, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13882, (Optr)&t_send1, (Optr)PSend13883, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13884, (Optr)&t_send1, (Optr)PSend13885, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13886, (Optr)&t_send1, (Optr)PSend13887, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13888, (Optr)&t_send1, (Optr)PSend13889, (Optr)&t_method_return);
    Method PMethod13877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13878, 1, PSend13889);
    
    MethodClosure MC_SMB_initializeLiteral = new_MethodClosure((Method)PMethod13877, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLiteral, MC_SMB_initializeLiteral);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    String string_13892 = new_String(L"BINARY-MESSAGE-EXPRESSION");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13893 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13894 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13895 = new_Send((Optr)PSend13893, SMB__and_, 1, (Optr)PSend13894);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13892_Const = new_Constant((Optr)string_13892);
    // named:parsing:. 
    Send PSend13896 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13892_Const, (Optr)PSend13895);
    Array PThreadedCode13891 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13892, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13893, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13894, (Optr)&t_send1, (Optr)PSend13895, (Optr)&t_send2, (Optr)PSend13896, (Optr)&t_method_return);
    Method PMethod13890 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13891, 1, PSend13896);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod13890, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    String string_13899 = new_String(L"STRING");
    Symbol SMB_stringSegment = new_Symbol(L"stringSegment");
    // stringSegment. 
    Send PSend13900 = new_Send((Optr)self, SMB_stringSegment, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13901 = new_Send((Optr)PSend13900, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13899_Const = new_Constant((Optr)string_13899);
    // named:parsing:. 
    Send PSend13902 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13899_Const, (Optr)PSend13901);
    Array PThreadedCode13898 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13899, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13900, (Optr)&t_send0, (Optr)PSend13901, (Optr)&t_send2, (Optr)PSend13902, (Optr)&t_method_return);
    Method PMethod13897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13898, 1, PSend13902);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod13897, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    Array PThreadedCode13904 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod13903 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13904, 1, self);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod13903, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_test, MC_SMB_test);
}


static void init_SMB_initializeSubExpression() {
    Symbol SMB_initializeSubExpression = new_Symbol(L"initializeSubExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13907 = new_Send((Optr)self, SMB_expression, 0);
    String string_13908 = new_String(L".");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13908_Const = new_Constant((Optr)string_13908);
    // &. 
    Send PSend13909 = new_Send((Optr)PSend13907, SMB__and_, 1, (Optr)string_13908_Const);
    String string_13910 = new_String(L".");
    Symbol SMB__or_ = new_Symbol(L"|");
    Constant string_13910_Const = new_Constant((Optr)string_13910);
    // |. 
    Send PSend13911 = new_Send((Optr)PSend13909, SMB__or_, 1, (Optr)string_13910_Const);
    Array PThreadedCode13906 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13907, (Optr)&t_push1, (Optr)string_13908, (Optr)&t_send1, (Optr)PSend13909, (Optr)&t_push1, (Optr)string_13910, (Optr)&t_send1, (Optr)PSend13911, (Optr)&t_method_return);
    Method PMethod13905 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13906, 1, PSend13911);
    
    MethodClosure MC_SMB_initializeSubExpression = new_MethodClosure((Method)PMethod13905, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSubExpression, MC_SMB_initializeSubExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    String string_13914 = new_String(L"ANNOTATIONS");
    String string_13915 = new_String(L"<");
    Constant string_13915_Const = new_Constant((Optr)string_13915);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13916 = new_Send((Optr)string_13915_Const, SMB_asParser, 0);
    Symbol SMB_keywordAnnotation = new_Symbol(L"keywordAnnotation");
    // keywordAnnotation. 
    Send PSend13917 = new_Send((Optr)self, SMB_keywordAnnotation, 0);
    Symbol SMB_unaryAnnotation = new_Symbol(L"unaryAnnotation");
    // unaryAnnotation. 
    Send PSend13918 = new_Send((Optr)self, SMB_unaryAnnotation, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13919 = new_Send((Optr)PSend13917, SMB__or_, 1, (Optr)PSend13918);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13920 = new_Send((Optr)PSend13916, SMB__and_, 1, (Optr)PSend13919);
    String string_13921 = new_String(L">");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13921_Const = new_Constant((Optr)string_13921);
    // <&. 
    Send PSend13922 = new_Send((Optr)PSend13920, SMB__lt__and_, 1, (Optr)string_13921_Const);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13923 = new_Send((Optr)PSend13922, SMB_times, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13914_Const = new_Constant((Optr)string_13914);
    // named:parsing:. 
    Send PSend13924 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13914_Const, (Optr)PSend13923);
    Array PThreadedCode13913 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13914, (Optr)&t_push1, (Optr)string_13915, (Optr)&t_send0, (Optr)PSend13916, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13917, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13918, (Optr)&t_send1, (Optr)PSend13919, (Optr)&t_send1, (Optr)PSend13920, (Optr)&t_push1, (Optr)string_13921, (Optr)&t_send1, (Optr)PSend13922, (Optr)&t_send0, (Optr)PSend13923, (Optr)&t_send2, (Optr)PSend13924, (Optr)&t_method_return);
    Method PMethod13912 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13913, 1, PSend13924);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod13912, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializeArrayConstant() {
    Symbol SMB_initializeArrayConstant = new_Symbol(L"initializeArrayConstant");
    String string_13927 = new_String(L"#");
    Constant string_13927_Const = new_Constant((Optr)string_13927);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13928 = new_Send((Optr)string_13927_Const, SMB_asParser, 0);
    Symbol SMB_array = new_Symbol(L"array");
    // array. 
    Send PSend13929 = new_Send((Optr)self, SMB_array, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13930 = new_Send((Optr)PSend13928, SMB__and_, 1, (Optr)PSend13929);
    Array PThreadedCode13926 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)string_13927, (Optr)&t_send0, (Optr)PSend13928, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13929, (Optr)&t_send1, (Optr)PSend13930, (Optr)&t_method_return);
    Method PMethod13925 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13926, 1, PSend13930);
    
    MethodClosure MC_SMB_initializeArrayConstant = new_MethodClosure((Method)PMethod13925, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArrayConstant, MC_SMB_initializeArrayConstant);
}


static void init_SMB_initializeBinaryObjectDescription() {
    Symbol SMB_initializeBinaryObjectDescription = new_Symbol(L"initializeBinaryObjectDescription");
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13933 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13934 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Array PThreadedCode13932 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13933, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13934, (Optr)&t_method_return);
    Method PMethod13931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13932, 2, PSend13933, PSend13934);
    
    MethodClosure MC_SMB_initializeBinaryObjectDescription = new_MethodClosure((Method)PMethod13931, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryObjectDescription, MC_SMB_initializeBinaryObjectDescription);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Variable VAR_stringBorder_0_0 = new_Variable_named(L"stringBorder", 0);
    Array PArray13936 = new_Array_with(1, (Optr)VAR_stringBorder_0_0);
    String string_13940 = new_String(L"'");
    Constant string_13940_Const = new_Constant((Optr)string_13940);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13939 = new_Send((Optr)string_13940_Const, SMB_asParser, 0);
    Assign PAssign13938 = new_Assign((Optr)VAR_stringBorder_0_0, (Optr)PSend13939);
    String string_13941 = new_String(L"STRING-SEGMENT");
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13942 = new_Send((Optr)VAR_stringBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13943 = new_Send((Optr)PSend13942, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13944 = new_Send((Optr)PSend13943, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13945 = new_Send((Optr)VAR_stringBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend13944);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13946 = new_Send((Optr)PSend13945, SMB__lt__and_, 1, (Optr)VAR_stringBorder_0_0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13941_Const = new_Constant((Optr)string_13941);
    // named:parsing:. 
    Send PSend13947 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13941_Const, (Optr)PSend13946);
    Array PThreadedCode13937 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign13938, (Optr)&t_push1, (Optr)string_13940, (Optr)&t_send0, (Optr)PSend13939, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13941, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send0, (Optr)PSend13942, (Optr)&t_send0, (Optr)PSend13943, (Optr)&t_send0, (Optr)PSend13944, (Optr)&t_send1, (Optr)PSend13945, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send1, (Optr)PSend13946, (Optr)&t_send2, (Optr)PSend13947, (Optr)&t_method_return);
    Method PMethod13935 = new_Method_with(empty_Array, PArray13936, empty_Array, PThreadedCode13937, 2, PAssign13938, PSend13947);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod13935, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeBar() {
    Symbol SMB_initializeBar = new_Symbol(L"initializeBar");
    String string_13950 = new_String(L"|");
    Constant string_13950_Const = new_Constant((Optr)string_13950);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13951 = new_Send((Optr)string_13950_Const, SMB_asParser, 0);
    Array PThreadedCode13949 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13950, (Optr)&t_send0, (Optr)PSend13951, (Optr)&t_method_return);
    Method PMethod13948 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13949, 1, PSend13951);
    
    MethodClosure MC_SMB_initializeBar = new_MethodClosure((Method)PMethod13948, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBar, MC_SMB_initializeBar);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    String string_13954 = new_String(L"BINARY-ARGUMENT");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13955 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13956 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13957 = new_Send((Optr)PSend13955, SMB__and_, 1, (Optr)PSend13956);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13954_Const = new_Constant((Optr)string_13954);
    // named:parsing:. 
    Send PSend13958 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13954_Const, (Optr)PSend13957);
    Array PThreadedCode13953 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13954, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13955, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13956, (Optr)&t_send1, (Optr)PSend13957, (Optr)&t_send2, (Optr)PSend13958, (Optr)&t_method_return);
    Method PMethod13952 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13953, 1, PSend13958);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod13952, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    String string_13961 = new_String(L"RETURN");
    String string_13962 = new_String(L"^");
    Constant string_13962_Const = new_Constant((Optr)string_13962);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13963 = new_Send((Optr)string_13962_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13964 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13965 = new_Send((Optr)PSend13963, SMB__and_, 1, (Optr)PSend13964);
    String string_13966 = new_String(L".");
    Constant string_13966_Const = new_Constant((Optr)string_13966);
    // asParser. 
    Send PSend13967 = new_Send((Optr)string_13966_Const, SMB_asParser, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13968 = new_Send((Optr)PSend13967, SMB_optional, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13969 = new_Send((Optr)PSend13968, SMB_omit, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13970 = new_Send((Optr)PSend13965, SMB__lt__and_, 1, (Optr)PSend13969);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13961_Const = new_Constant((Optr)string_13961);
    // named:parsing:. 
    Send PSend13971 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13961_Const, (Optr)PSend13970);
    Array PThreadedCode13960 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13961, (Optr)&t_push1, (Optr)string_13962, (Optr)&t_send0, (Optr)PSend13963, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13964, (Optr)&t_send1, (Optr)PSend13965, (Optr)&t_push1, (Optr)string_13966, (Optr)&t_send0, (Optr)PSend13967, (Optr)&t_send0, (Optr)PSend13968, (Optr)&t_send0, (Optr)PSend13969, (Optr)&t_send1, (Optr)PSend13970, (Optr)&t_send2, (Optr)PSend13971, (Optr)&t_method_return);
    Method PMethod13959 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13960, 1, PSend13971);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod13959, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeNumberConstant() {
    Symbol SMB_initializeNumberConstant = new_Symbol(L"initializeNumberConstant");
    Symbol SMB_radix = new_Symbol(L"radix");
    // radix. 
    Send PSend13974 = new_Send((Optr)self, SMB_radix, 0);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend13975 = new_Send((Optr)self, SMB_number, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13976 = new_Send((Optr)PSend13974, SMB__or_, 1, (Optr)PSend13975);
    Array PThreadedCode13973 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13974, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13975, (Optr)&t_send1, (Optr)PSend13976, (Optr)&t_method_return);
    Method PMethod13972 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13973, 1, PSend13976);
    
    MethodClosure MC_SMB_initializeNumberConstant = new_MethodClosure((Method)PMethod13972, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberConstant, MC_SMB_initializeNumberConstant);
}


static void init_SMB_initializeCharacter() {
    Symbol SMB_initializeCharacter = new_Symbol(L"initializeCharacter");
    String string_13979 = new_String(L"[]{}()_^;$#:-|.'\"");
    Constant string_13979_Const = new_Constant((Optr)string_13979);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13980 = new_Send((Optr)string_13979_Const, SMB_asPEGChoice, 0);
    Symbol SMB_separators = new_Symbol(L"separators");
    // separators. 
    Send PSend13981 = new_Send((Optr)PEGParser_classReference, SMB_separators, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13982 = new_Send((Optr)PSend13980, SMB__or_, 1, (Optr)PSend13981);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13983 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13984 = new_Send((Optr)PSend13982, SMB__lt__equals_, 1, (Optr)PSend13983);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13985 = new_Send((Optr)self, SMB_letter, 0);
    // <=. 
    Send PSend13986 = new_Send((Optr)PSend13984, SMB__lt__equals_, 1, (Optr)PSend13985);
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13987 = new_Send((Optr)self, SMB_specialCharacter, 0);
    // <=. 
    Send PSend13988 = new_Send((Optr)PSend13986, SMB__lt__equals_, 1, (Optr)PSend13987);
    Array PThreadedCode13978 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)string_13979, (Optr)&t_send0, (Optr)PSend13980, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend13981, (Optr)&t_send1, (Optr)PSend13982, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13983, (Optr)&t_send1, (Optr)PSend13984, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13985, (Optr)&t_send1, (Optr)PSend13986, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13987, (Optr)&t_send1, (Optr)PSend13988, (Optr)&t_method_return);
    Method PMethod13977 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13978, 1, PSend13988);
    
    MethodClosure MC_SMB_initializeCharacter = new_MethodClosure((Method)PMethod13977, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacter, MC_SMB_initializeCharacter);
}


static void init_SMB_injectPrimary() {
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13991 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_primaryVariable = new_Symbol(L"primaryVariable");
    // primaryVariable. 
    Send PSend13992 = new_Send((Optr)self, SMB_primaryVariable, 0);
    Symbol SMB_literal = new_Symbol(L"literal");
    // literal. 
    Send PSend13993 = new_Send((Optr)self, SMB_literal, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13994 = new_Send((Optr)PSend13992, SMB__or_, 1, (Optr)PSend13993);
    Symbol SMB_block = new_Symbol(L"block");
    // block. 
    Send PSend13995 = new_Send((Optr)self, SMB_block, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13996 = new_Send((Optr)PSend13994, SMB__lt__equals_, 1, (Optr)PSend13995);
    Symbol SMB_scopedExpression = new_Symbol(L"scopedExpression");
    // scopedExpression. 
    Send PSend13997 = new_Send((Optr)self, SMB_scopedExpression, 0);
    // <=. 
    Send PSend13998 = new_Send((Optr)PSend13996, SMB__lt__equals_, 1, (Optr)PSend13997);
    Symbol SMB_braceExpression = new_Symbol(L"braceExpression");
    // braceExpression. 
    Send PSend13999 = new_Send((Optr)self, SMB_braceExpression, 0);
    // <=. 
    Send PSend14000 = new_Send((Optr)PSend13998, SMB__lt__equals_, 1, (Optr)PSend13999);
    // <=. 
    Send PSend14001 = new_Send((Optr)PSend13991, SMB__lt__equals_, 1, (Optr)PSend14000);
    Array PThreadedCode13990 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13991, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13992, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13993, (Optr)&t_send1, (Optr)PSend13994, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13995, (Optr)&t_send1, (Optr)PSend13996, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13997, (Optr)&t_send1, (Optr)PSend13998, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13999, (Optr)&t_send1, (Optr)PSend14000, (Optr)&t_send1, (Optr)PSend14001, (Optr)&t_method_return);
    Method PMethod13989 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13990, 1, PSend14001);
    
    MethodClosure MC_SMB_injectPrimary = new_MethodClosure((Method)PMethod13989, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectPrimary, MC_SMB_injectPrimary);
}


static void init_SMB_initializeLetter() {
    Symbol SMB_initializeLetter = new_Symbol(L"initializeLetter");
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend14004 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend14005 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14006 = new_Send((Optr)PSend14004, SMB__or_, 1, (Optr)PSend14005);
    Array PThreadedCode14003 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14004, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14005, (Optr)&t_send1, (Optr)PSend14006, (Optr)&t_method_return);
    Method PMethod14002 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14003, 1, PSend14006);
    
    MethodClosure MC_SMB_initializeLetter = new_MethodClosure((Method)PMethod14002, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLetter, MC_SMB_initializeLetter);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    String string_14009 = new_String(L"ASSIGNMENT-EXPRESSIONS");
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend14010 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend14011 = new_Send((Optr)self, SMB_assignmentOp, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14012 = new_Send((Optr)PSend14010, SMB__and_, 1, (Optr)PSend14011);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14013 = new_Send((Optr)PSend14012, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14009_Const = new_Constant((Optr)string_14009);
    // named:parsing:. 
    Send PSend14014 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14009_Const, (Optr)PSend14013);
    Array PThreadedCode14008 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14009, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14010, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14011, (Optr)&t_send1, (Optr)PSend14012, (Optr)&t_send0, (Optr)PSend14013, (Optr)&t_send2, (Optr)PSend14014, (Optr)&t_method_return);
    Method PMethod14007 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14008, 1, PSend14014);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14007, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_initializeFinalExpression() {
    Symbol SMB_initializeFinalExpression = new_Symbol(L"initializeFinalExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14017 = new_Send((Optr)self, SMB_expression, 0);
    Array PThreadedCode14016 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14017, (Optr)&t_method_return);
    Method PMethod14015 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14016, 1, PSend14017);
    
    MethodClosure MC_SMB_initializeFinalExpression = new_MethodClosure((Method)PMethod14015, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFinalExpression, MC_SMB_initializeFinalExpression);
}


static void init_SMB_initializeMessageExpression() {
    Symbol SMB_initializeMessageExpression = new_Symbol(L"initializeMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14020 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14021 = new_Send((Optr)self, SMB_messageExpression, 0);
    Array PThreadedCode14019 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14020, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14021, (Optr)&t_method_return);
    Method PMethod14018 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14019, 2, PSend14020, PSend14021);
    
    MethodClosure MC_SMB_initializeMessageExpression = new_MethodClosure((Method)PMethod14018, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessageExpression, MC_SMB_initializeMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    String string_14024 = new_String(L"UNARY-ANNOTATION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend14025 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14024_Const = new_Constant((Optr)string_14024);
    // named:parsing:. 
    Send PSend14026 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14024_Const, (Optr)PSend14025);
    Array PThreadedCode14023 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14024, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14025, (Optr)&t_send2, (Optr)PSend14026, (Optr)&t_method_return);
    Method PMethod14022 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14023, 1, PSend14026);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14022, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeMessagePattern() {
    Symbol SMB_initializeMessagePattern = new_Symbol(L"initializeMessagePattern");
    String string_14029 = new_String(L"MESSAGE-PATTERN");
    Symbol SMB_keywordsArguments = new_Symbol(L"keywordsArguments");
    // keywordsArguments. 
    Send PSend14030 = new_Send((Optr)self, SMB_keywordsArguments, 0);
    Symbol SMB_binaryMessageDefinition = new_Symbol(L"binaryMessageDefinition");
    // binaryMessageDefinition. 
    Send PSend14031 = new_Send((Optr)self, SMB_binaryMessageDefinition, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14032 = new_Send((Optr)PSend14030, SMB__or_, 1, (Optr)PSend14031);
    Symbol SMB_unaryMessageDefinition = new_Symbol(L"unaryMessageDefinition");
    // unaryMessageDefinition. 
    Send PSend14033 = new_Send((Optr)self, SMB_unaryMessageDefinition, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14034 = new_Send((Optr)PSend14032, SMB__lt__equals_, 1, (Optr)PSend14033);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14029_Const = new_Constant((Optr)string_14029);
    // named:parsing:. 
    Send PSend14035 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14029_Const, (Optr)PSend14034);
    Array PThreadedCode14028 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14029, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14030, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14031, (Optr)&t_send1, (Optr)PSend14032, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14033, (Optr)&t_send1, (Optr)PSend14034, (Optr)&t_send2, (Optr)PSend14035, (Optr)&t_method_return);
    Method PMethod14027 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14028, 1, PSend14035);
    
    MethodClosure MC_SMB_initializeMessagePattern = new_MethodClosure((Method)PMethod14027, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessagePattern, MC_SMB_initializeMessagePattern);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign14038 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode14037 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign14038, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14036 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14037, 2, PAssign14038, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod14036, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
    store_method(HEADER(Smalltalk_Parser_SmalltalkGrammar_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper14044 = new_Super(SMB_new, 0);
    Assign PAssign14043 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)PSuper14044);
    Array PThreadedCode14042 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14043, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14044, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock14041 = new_Block_with(empty_Array, empty_Array, PThreadedCode14042, 1, PAssign14043);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend14045 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock14041);
    Array PThreadedCode14040 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock14041, (Optr)&t_send1, (Optr)PSend14045, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_method_return);
    Method PMethod14039 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14040, 2, PSend14045, slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod14039, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
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