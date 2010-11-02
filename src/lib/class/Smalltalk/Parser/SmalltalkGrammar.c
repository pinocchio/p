#include <lib/class/Smalltalk/Parser/SmalltalkGrammar.h>


Optr slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance;
Optr layout_Smalltalk_Parser_SmalltalkGrammar_Class_class;
Optr layout_Smalltalk_Parser_SmalltalkGrammar;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    String string_13338 = new_String(L"UNARY-MESSAGE-EXPRESSION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13339 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13338_Const = new_Constant((Optr)string_13338);
    // named:parsing:. 
    Send PSend13340 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13338_Const, (Optr)PSend13339);
    Array PThreadedCode13337 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13338, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13339, (Optr)&t_send2, (Optr)PSend13340, (Optr)&t_method_return);
    Method PMethod13336 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13337, 1, PSend13340);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod13336, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    String string_13343 = new_String(L"UNARY-SELECTOR");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13344 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13345 = new_String(L":");
    Constant string_13345_Const = new_Constant((Optr)string_13345);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13346 = new_Send((Optr)string_13345_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13347 = new_Send((Optr)PSend13346, SMB_not, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13348 = new_Send((Optr)PSend13344, SMB__logicAnd_, 1, (Optr)PSend13347);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13343_Const = new_Constant((Optr)string_13343);
    // named:parsing:. 
    Send PSend13349 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13343_Const, (Optr)PSend13348);
    Array PThreadedCode13342 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13343, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13344, (Optr)&t_push1, (Optr)string_13345, (Optr)&t_send0, (Optr)PSend13346, (Optr)&t_send0, (Optr)PSend13347, (Optr)&t_send1, (Optr)PSend13348, (Optr)&t_send2, (Optr)PSend13349, (Optr)&t_method_return);
    Method PMethod13341 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13342, 1, PSend13349);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod13341, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    String string_13352 = new_String(L"NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13353 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13352_Const = new_Constant((Optr)string_13352);
    // named:parsing:. 
    Send PSend13354 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13352_Const, (Optr)PSend13353);
    Array PThreadedCode13351 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13352, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13353, (Optr)&t_send2, (Optr)PSend13354, (Optr)&t_method_return);
    Method PMethod13350 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13351, 1, PSend13354);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod13350, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    String string_13357 = new_String(L"UNARY-OBJECT-DESCRIPTION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13358 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13359 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13360 = new_Send((Optr)PSend13359, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13361 = new_Send((Optr)PSend13358, SMB__and_, 1, (Optr)PSend13360);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13357_Const = new_Constant((Optr)string_13357);
    // named:parsing:. 
    Send PSend13362 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13357_Const, (Optr)PSend13361);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13363 = new_Send((Optr)PSend13362, SMB_memo, 0);
    Array PThreadedCode13356 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13357, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13358, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13359, (Optr)&t_send0, (Optr)PSend13360, (Optr)&t_send1, (Optr)PSend13361, (Optr)&t_send2, (Optr)PSend13362, (Optr)&t_send0, (Optr)PSend13363, (Optr)&t_method_return);
    Method PMethod13355 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13356, 1, PSend13363);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod13355, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    String string_13366 = new_String(L"VARIABLE-NAME");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13367 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13366_Const = new_Constant((Optr)string_13366);
    // named:parsing:. 
    Send PSend13368 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13366_Const, (Optr)PSend13367);
    Array PThreadedCode13365 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13366, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13367, (Optr)&t_send2, (Optr)PSend13368, (Optr)&t_method_return);
    Method PMethod13364 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13365, 1, PSend13368);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod13364, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_assignmentOp() {
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    String string_13371 = new_String(L":=");
    Constant string_13371_Const = new_Constant((Optr)string_13371);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13372 = new_Send((Optr)string_13371_Const, SMB_asParser, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13373 = new_Send((Optr)PSend13372, SMB_omit, 0);
    Array PThreadedCode13370 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)string_13371, (Optr)&t_send0, (Optr)PSend13372, (Optr)&t_send0, (Optr)PSend13373, (Optr)&t_method_return);
    Method PMethod13369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13370, 1, PSend13373);
    
    MethodClosure MC_SMB_assignmentOp = new_MethodClosure((Method)PMethod13369, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_assignmentOp, MC_SMB_assignmentOp);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    String string_13376 = new_String(L"CAPITAL-IDENTIFIER");
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13377 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13378 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13379 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13380 = new_Send((Optr)PSend13378, SMB__or_, 1, (Optr)PSend13379);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13381 = new_Send((Optr)PSend13380, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13382 = new_Send((Optr)PSend13377, SMB__logicAnd_, 1, (Optr)PSend13381);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13376_Const = new_Constant((Optr)string_13376);
    // named:parsing:. 
    Send PSend13383 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13376_Const, (Optr)PSend13382);
    Array PThreadedCode13375 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13376, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13377, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13378, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13379, (Optr)&t_send1, (Optr)PSend13380, (Optr)&t_send0, (Optr)PSend13381, (Optr)&t_send1, (Optr)PSend13382, (Optr)&t_send2, (Optr)PSend13383, (Optr)&t_method_return);
    Method PMethod13374 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13375, 1, PSend13383);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod13374, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    String string_13386 = new_String(L"BINARY-SELECTOR");
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13387 = new_Send((Optr)self, SMB_specialCharacter, 0);
    String string_13388 = new_String(L"-");
    Constant string_13388_Const = new_Constant((Optr)string_13388);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13389 = new_Send((Optr)string_13388_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13390 = new_Send((Optr)PSend13389, SMB_consume, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13391 = new_Send((Optr)PSend13387, SMB__or_, 1, (Optr)PSend13390);
    // specialCharacter. 
    Send PSend13392 = new_Send((Optr)self, SMB_specialCharacter, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13393 = new_Send((Optr)PSend13392, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13394 = new_Send((Optr)PSend13391, SMB__logicAnd_, 1, (Optr)PSend13393);
    String string_13395 = new_String(L"|");
    Constant string_13395_Const = new_Constant((Optr)string_13395);
    // asParser. 
    Send PSend13396 = new_Send((Optr)string_13395_Const, SMB_asParser, 0);
    // consume. 
    Send PSend13397 = new_Send((Optr)PSend13396, SMB_consume, 0);
    // |. 
    Send PSend13398 = new_Send((Optr)PSend13394, SMB__or_, 1, (Optr)PSend13397);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13386_Const = new_Constant((Optr)string_13386);
    // named:parsing:. 
    Send PSend13399 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13386_Const, (Optr)PSend13398);
    Array PThreadedCode13385 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13386, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13387, (Optr)&t_push1, (Optr)string_13388, (Optr)&t_send0, (Optr)PSend13389, (Optr)&t_send0, (Optr)PSend13390, (Optr)&t_send1, (Optr)PSend13391, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13392, (Optr)&t_send0, (Optr)PSend13393, (Optr)&t_send1, (Optr)PSend13394, (Optr)&t_push1, (Optr)string_13395, (Optr)&t_send0, (Optr)PSend13396, (Optr)&t_send0, (Optr)PSend13397, (Optr)&t_send1, (Optr)PSend13398, (Optr)&t_send2, (Optr)PSend13399, (Optr)&t_method_return);
    Method PMethod13384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13385, 1, PSend13399);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod13384, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    String string_13402 = new_String(L"STRING-CONSTANT");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13403 = new_Send((Optr)self, SMB_string, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13402_Const = new_Constant((Optr)string_13402);
    // named:parsing:. 
    Send PSend13404 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13402_Const, (Optr)PSend13403);
    Array PThreadedCode13401 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13402, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13403, (Optr)&t_send2, (Optr)PSend13404, (Optr)&t_method_return);
    Method PMethod13400 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13401, 1, PSend13404);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod13400, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeParameterName() {
    Symbol SMB_initializeParameterName = new_Symbol(L"initializeParameterName");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13407 = new_Send((Optr)self, SMB_identifier, 0);
    Array PThreadedCode13406 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13407, (Optr)&t_method_return);
    Method PMethod13405 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13406, 1, PSend13407);
    
    MethodClosure MC_SMB_initializeParameterName = new_MethodClosure((Method)PMethod13405, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeParameterName, MC_SMB_initializeParameterName);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    String string_13410 = new_String(L"KEYWORD-EXPRESSION");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13411 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13412 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    // bracketIndexExpression. 
    Send PSend13413 = new_Send((Optr)self, SMB_bracketIndexExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13414 = new_Send((Optr)PSend13412, SMB__or_, 1, (Optr)PSend13413);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13415 = new_Send((Optr)PSend13411, SMB__and_, 1, (Optr)PSend13414);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13410_Const = new_Constant((Optr)string_13410);
    // named:parsing:. 
    Send PSend13416 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13410_Const, (Optr)PSend13415);
    Array PThreadedCode13409 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13410, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13411, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13412, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13413, (Optr)&t_send1, (Optr)PSend13414, (Optr)&t_send1, (Optr)PSend13415, (Optr)&t_send2, (Optr)PSend13416, (Optr)&t_method_return);
    Method PMethod13408 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13409, 1, PSend13416);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod13408, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    String string_13419 = new_String(L"BRACKET-INDEX-EXPRESSION");
    String string_13420 = new_String(L"[");
    Constant string_13420_Const = new_Constant((Optr)string_13420);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13421 = new_Send((Optr)string_13420_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13422 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13423 = new_Send((Optr)PSend13421, SMB__and_, 1, (Optr)PSend13422);
    String string_13424 = new_String(L"]");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13424_Const = new_Constant((Optr)string_13424);
    // <&. 
    Send PSend13425 = new_Send((Optr)PSend13423, SMB__lt__and_, 1, (Optr)string_13424_Const);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend13426 = new_Send((Optr)self, SMB_assignmentOp, 0);
    // expression. 
    Send PSend13427 = new_Send((Optr)self, SMB_expression, 0);
    // &. 
    Send PSend13428 = new_Send((Optr)PSend13426, SMB__and_, 1, (Optr)PSend13427);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13429 = new_Send((Optr)PSend13428, SMB_optional, 0);
    // <&. 
    Send PSend13430 = new_Send((Optr)PSend13425, SMB__lt__and_, 1, (Optr)PSend13429);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13419_Const = new_Constant((Optr)string_13419);
    // named:parsing:. 
    Send PSend13431 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13419_Const, (Optr)PSend13430);
    Array PThreadedCode13418 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13419, (Optr)&t_push1, (Optr)string_13420, (Optr)&t_send0, (Optr)PSend13421, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13422, (Optr)&t_send1, (Optr)PSend13423, (Optr)&t_push1, (Optr)string_13424, (Optr)&t_send1, (Optr)PSend13425, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13426, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13427, (Optr)&t_send1, (Optr)PSend13428, (Optr)&t_send0, (Optr)PSend13429, (Optr)&t_send1, (Optr)PSend13430, (Optr)&t_send2, (Optr)PSend13431, (Optr)&t_method_return);
    Method PMethod13417 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13418, 1, PSend13431);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod13417, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    // preStoreBinaryObjectDescription. 
    Send PSend13434 = new_Send((Optr)self, SMB_preStoreBinaryObjectDescription, 0);
    Symbol  SMB_binaryExpression = new_Symbol(L"binaryExpression");
    String string_13435 = new_String(L"BINARY-EXPRESSION");
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13436 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13437 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13438 = new_Send((Optr)PSend13436, SMB__and_, 1, (Optr)PSend13437);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13439 = new_Send((Optr)PSend13438, SMB_plus, 0);
    // unaryObjectDescription. 
    Send PSend13440 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    // &. 
    Send PSend13441 = new_Send((Optr)PSend13439, SMB__and_, 1, (Optr)PSend13440);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13435_Const = new_Constant((Optr)string_13435);
    // named:parsing:. 
    Send PSend13442 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13435_Const, (Optr)PSend13441);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryExpression_Const = new_Constant((Optr)SMB_binaryExpression);
    // at:ifAbsentPut:. 
    Send PSend13443 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryExpression_Const, (Optr)PSend13442);
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    // injectBinaryObjectDescription. 
    Send PSend13444 = new_Send((Optr)self, SMB_injectBinaryObjectDescription, 0);
    // binaryExpression. 
    Send PSend13445 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Array PThreadedCode13433 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13434, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryExpression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13435, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13436, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13437, (Optr)&t_send1, (Optr)PSend13438, (Optr)&t_send0, (Optr)PSend13439, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13440, (Optr)&t_send1, (Optr)PSend13441, (Optr)&t_send2, (Optr)PSend13442, (Optr)&t_send2, (Optr)PSend13443, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13444, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13445, (Optr)&t_method_return);
    Method PMethod13432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13433, 4, PSend13434, PSend13443, PSend13444, PSend13445);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod13432, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    String string_13448 = new_String(L"SCOPED-EXPRESSION");
    String string_13449 = new_String(L"(");
    Constant string_13449_Const = new_Constant((Optr)string_13449);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13450 = new_Send((Optr)string_13449_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13451 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13452 = new_Send((Optr)PSend13450, SMB__and_, 1, (Optr)PSend13451);
    String string_13453 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13453_Const = new_Constant((Optr)string_13453);
    // <&. 
    Send PSend13454 = new_Send((Optr)PSend13452, SMB__lt__and_, 1, (Optr)string_13453_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13448_Const = new_Constant((Optr)string_13448);
    // named:parsing:. 
    Send PSend13455 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13448_Const, (Optr)PSend13454);
    Array PThreadedCode13447 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13448, (Optr)&t_push1, (Optr)string_13449, (Optr)&t_send0, (Optr)PSend13450, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13451, (Optr)&t_send1, (Optr)PSend13452, (Optr)&t_push1, (Optr)string_13453, (Optr)&t_send1, (Optr)PSend13454, (Optr)&t_send2, (Optr)PSend13455, (Optr)&t_method_return);
    Method PMethod13446 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13447, 1, PSend13455);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod13446, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    String string_13458 = new_String(L"CHARACTER-CONSTANT");
    String string_13459 = new_String(L"$");
    Constant string_13459_Const = new_Constant((Optr)string_13459);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13460 = new_Send((Optr)string_13459_Const, SMB_asParser, 0);
    Symbol SMB_character = new_Symbol(L"character");
    // character. 
    Send PSend13461 = new_Send((Optr)self, SMB_character, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13462 = new_Send((Optr)PSend13460, SMB__logicAnd_, 1, (Optr)PSend13461);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13458_Const = new_Constant((Optr)string_13458);
    // named:parsing:. 
    Send PSend13463 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13458_Const, (Optr)PSend13462);
    Array PThreadedCode13457 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13458, (Optr)&t_push1, (Optr)string_13459, (Optr)&t_send0, (Optr)PSend13460, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13461, (Optr)&t_send1, (Optr)PSend13462, (Optr)&t_send2, (Optr)PSend13463, (Optr)&t_method_return);
    Method PMethod13456 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13457, 1, PSend13463);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod13456, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    String string_13466 = new_String(L"NUMBER-FORMAT");
    String string_13467 = new_String(L"-");
    Constant string_13467_Const = new_Constant((Optr)string_13467);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13468 = new_Send((Optr)string_13467_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13469 = new_Send((Optr)PSend13468, SMB_consume, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13470 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13471 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13472 = new_Send((Optr)PSend13470, SMB__or_, 1, (Optr)PSend13471);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13473 = new_Send((Optr)PSend13472, SMB_strongPlus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13474 = new_Send((Optr)PSend13469, SMB__and_, 1, (Optr)PSend13473);
    // decimalDigit. 
    Send PSend13475 = new_Send((Optr)self, SMB_decimalDigit, 0);
    // uppercase. 
    Send PSend13476 = new_Send((Optr)self, SMB_uppercase, 0);
    // |. 
    Send PSend13477 = new_Send((Optr)PSend13475, SMB__or_, 1, (Optr)PSend13476);
    // strongPlus. 
    Send PSend13478 = new_Send((Optr)PSend13477, SMB_strongPlus, 0);
    // |. 
    Send PSend13479 = new_Send((Optr)PSend13474, SMB__or_, 1, (Optr)PSend13478);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13466_Const = new_Constant((Optr)string_13466);
    // named:parsing:. 
    Send PSend13480 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13466_Const, (Optr)PSend13479);
    Array PThreadedCode13465 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13466, (Optr)&t_push1, (Optr)string_13467, (Optr)&t_send0, (Optr)PSend13468, (Optr)&t_send0, (Optr)PSend13469, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13470, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13471, (Optr)&t_send1, (Optr)PSend13472, (Optr)&t_send0, (Optr)PSend13473, (Optr)&t_send1, (Optr)PSend13474, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13475, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13476, (Optr)&t_send1, (Optr)PSend13477, (Optr)&t_send0, (Optr)PSend13478, (Optr)&t_send1, (Optr)PSend13479, (Optr)&t_send2, (Optr)PSend13480, (Optr)&t_method_return);
    Method PMethod13464 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13465, 1, PSend13480);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod13464, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    String string_13483 = new_String(L"METHOD");
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend13484 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_messagePattern = new_Symbol(L"messagePattern");
    // messagePattern. 
    Send PSend13485 = new_Send((Optr)self, SMB_messagePattern, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13486 = new_Send((Optr)PSend13484, SMB__and_, 1, (Optr)PSend13485);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13487 = new_Send((Optr)self, SMB_annotations, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13488 = new_Send((Optr)PSend13486, SMB__lt__and_, 1, (Optr)PSend13487);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13489 = new_Send((Optr)self, SMB_temporaries, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13490 = new_Send((Optr)PSend13489, SMB_optional, 0);
    // <&. 
    Send PSend13491 = new_Send((Optr)PSend13488, SMB__lt__and_, 1, (Optr)PSend13490);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13492 = new_Send((Optr)self, SMB_statements, 0);
    // <&. 
    Send PSend13493 = new_Send((Optr)PSend13491, SMB__lt__and_, 1, (Optr)PSend13492);
    // separator. 
    Send PSend13494 = new_Send((Optr)self, SMB_separator, 0);
    // <&. 
    Send PSend13495 = new_Send((Optr)PSend13493, SMB__lt__and_, 1, (Optr)PSend13494);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13496 = new_Send((Optr)PSend13495, SMB_end, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13483_Const = new_Constant((Optr)string_13483);
    // named:parsing:. 
    Send PSend13497 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13483_Const, (Optr)PSend13496);
    // separator. 
    Send PSend13498 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_separator_ = new_Symbol(L"separator:");
    // separator:. 
    Send PSend13499 = new_Send((Optr)PSend13497, SMB_separator_, 1, (Optr)PSend13498);
    Array PThreadedCode13482 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13483, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13484, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13485, (Optr)&t_send1, (Optr)PSend13486, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13487, (Optr)&t_send1, (Optr)PSend13488, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13489, (Optr)&t_send0, (Optr)PSend13490, (Optr)&t_send1, (Optr)PSend13491, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13492, (Optr)&t_send1, (Optr)PSend13493, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13494, (Optr)&t_send1, (Optr)PSend13495, (Optr)&t_send0, (Optr)PSend13496, (Optr)&t_send2, (Optr)PSend13497, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13498, (Optr)&t_send1, (Optr)PSend13499, (Optr)&t_method_return);
    Method PMethod13481 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13482, 1, PSend13499);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod13481, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    String string_13502 = new_String(L"UNARY-MESSAGE-DEFINITION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13503 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13502_Const = new_Constant((Optr)string_13502);
    // named:parsing:. 
    Send PSend13504 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13502_Const, (Optr)PSend13503);
    Array PThreadedCode13501 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13502, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13503, (Optr)&t_send2, (Optr)PSend13504, (Optr)&t_method_return);
    Method PMethod13500 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13501, 1, PSend13504);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod13500, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_preStorePrimary() {
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    Symbol  SMB_primary = new_Symbol(L"primary");
    String string_13509 = new_String(L"PRIMARY");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13509_Const = new_Constant((Optr)string_13509);
    // named:. 
    Send PSend13510 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13509_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13511 = new_Send((Optr)PSend13510, SMB_memo, 0);
    Array PThreadedCode13508 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13509, (Optr)&t_send1, (Optr)PSend13510, (Optr)&t_send0, (Optr)PSend13511, (Optr)&t_block_return);
    Block PBlock13507 = new_Block_with(empty_Array, empty_Array, PThreadedCode13508, 1, PSend13511);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_primary_Const = new_Constant((Optr)SMB_primary);
    // at:ifAbsentPut:. 
    Send PSend13512 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_primary_Const, (Optr)PBlock13507);
    Array PThreadedCode13506 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_primary, (Optr)&t_push_closure, (Optr)PBlock13507, (Optr)&t_send2, (Optr)PSend13512, (Optr)&t_method_return);
    Method PMethod13505 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13506, 1, PSend13512);
    
    MethodClosure MC_SMB_preStorePrimary = new_MethodClosure((Method)PMethod13505, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStorePrimary, MC_SMB_preStorePrimary);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    String string_13515 = new_String(L"KEYWORD");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13516 = new_Send((Optr)self, SMB_identifierBody, 0);
    String string_13517 = new_String(L":");
    Constant string_13517_Const = new_Constant((Optr)string_13517);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13518 = new_Send((Optr)string_13517_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13519 = new_Send((Optr)PSend13518, SMB_consume, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13520 = new_Send((Optr)PSend13516, SMB__logicAnd_, 1, (Optr)PSend13519);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13515_Const = new_Constant((Optr)string_13515);
    // named:parsing:. 
    Send PSend13521 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13515_Const, (Optr)PSend13520);
    Array PThreadedCode13514 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13515, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13516, (Optr)&t_push1, (Optr)string_13517, (Optr)&t_send0, (Optr)PSend13518, (Optr)&t_send0, (Optr)PSend13519, (Optr)&t_send1, (Optr)PSend13520, (Optr)&t_send2, (Optr)PSend13521, (Optr)&t_method_return);
    Method PMethod13513 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13514, 1, PSend13521);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod13513, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeUppercase() {
    Symbol SMB_initializeUppercase = new_Symbol(L"initializeUppercase");
    String string_13524 = new_String(L"A-Z");
    Constant string_13524_Const = new_Constant((Optr)string_13524);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13525 = new_Send((Optr)string_13524_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13523 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13524, (Optr)&t_send0, (Optr)PSend13525, (Optr)&t_method_return);
    Method PMethod13522 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13523, 1, PSend13525);
    
    MethodClosure MC_SMB_initializeUppercase = new_MethodClosure((Method)PMethod13522, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUppercase, MC_SMB_initializeUppercase);
}


static void init_SMB_preStoreMessageExpression() {
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    Symbol  SMB_messageExpression = new_Symbol(L"messageExpression");
    String string_13530 = new_String(L"MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13530_Const = new_Constant((Optr)string_13530);
    // named:. 
    Send PSend13531 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13530_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13532 = new_Send((Optr)PSend13531, SMB_memo, 0);
    Array PThreadedCode13529 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13530, (Optr)&t_send1, (Optr)PSend13531, (Optr)&t_send0, (Optr)PSend13532, (Optr)&t_block_return);
    Block PBlock13528 = new_Block_with(empty_Array, empty_Array, PThreadedCode13529, 1, PSend13532);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_messageExpression_Const = new_Constant((Optr)SMB_messageExpression);
    // at:ifAbsentPut:. 
    Send PSend13533 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_messageExpression_Const, (Optr)PBlock13528);
    Array PThreadedCode13527 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_messageExpression, (Optr)&t_push_closure, (Optr)PBlock13528, (Optr)&t_send2, (Optr)PSend13533, (Optr)&t_method_return);
    Method PMethod13526 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13527, 1, PSend13533);
    
    MethodClosure MC_SMB_preStoreMessageExpression = new_MethodClosure((Method)PMethod13526, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreMessageExpression, MC_SMB_preStoreMessageExpression);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    String string_13536 = new_String(L"UNARY-EXPRESSION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13537 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13538 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13539 = new_Send((Optr)PSend13538, SMB_plus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13540 = new_Send((Optr)PSend13537, SMB__and_, 1, (Optr)PSend13539);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13536_Const = new_Constant((Optr)string_13536);
    // named:parsing:. 
    Send PSend13541 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13536_Const, (Optr)PSend13540);
    Array PThreadedCode13535 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13536, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13537, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13538, (Optr)&t_send0, (Optr)PSend13539, (Optr)&t_send1, (Optr)PSend13540, (Optr)&t_send2, (Optr)PSend13541, (Optr)&t_method_return);
    Method PMethod13534 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13535, 1, PSend13541);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod13534, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeSymbol() {
    Symbol SMB_initializeSymbol = new_Symbol(L"initializeSymbol");
    String string_13544 = new_String(L"SYMBOL");
    Symbol SMB_symbolKeywords = new_Symbol(L"symbolKeywords");
    // symbolKeywords. 
    Send PSend13545 = new_Send((Optr)self, SMB_symbolKeywords, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13546 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13547 = new_Send((Optr)PSend13545, SMB__or_, 1, (Optr)PSend13546);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13548 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13549 = new_Send((Optr)PSend13547, SMB__lt__equals_, 1, (Optr)PSend13548);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13550 = new_Send((Optr)self, SMB_string, 0);
    // <=. 
    Send PSend13551 = new_Send((Optr)PSend13549, SMB__lt__equals_, 1, (Optr)PSend13550);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13544_Const = new_Constant((Optr)string_13544);
    // named:parsing:. 
    Send PSend13552 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13544_Const, (Optr)PSend13551);
    Array PThreadedCode13543 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13544, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13545, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13546, (Optr)&t_send1, (Optr)PSend13547, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13548, (Optr)&t_send1, (Optr)PSend13549, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13550, (Optr)&t_send1, (Optr)PSend13551, (Optr)&t_send2, (Optr)PSend13552, (Optr)&t_method_return);
    Method PMethod13542 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13543, 1, PSend13552);
    
    MethodClosure MC_SMB_initializeSymbol = new_MethodClosure((Method)PMethod13542, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbol, MC_SMB_initializeSymbol);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    String string_13555 = new_String(L"PRIMARY-VARIABLE");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13556 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13557 = new_String(L".");
    Constant string_13557_Const = new_Constant((Optr)string_13557);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13558 = new_Send((Optr)string_13557_Const, SMB_asParser, 0);
    // identifier. 
    Send PSend13559 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13560 = new_Send((Optr)PSend13558, SMB__logicAnd_, 1, (Optr)PSend13559);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13561 = new_Send((Optr)PSend13560, SMB_strongTimes, 0);
    // &&. 
    Send PSend13562 = new_Send((Optr)PSend13556, SMB__logicAnd_, 1, (Optr)PSend13561);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13555_Const = new_Constant((Optr)string_13555);
    // named:parsing:. 
    Send PSend13563 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13555_Const, (Optr)PSend13562);
    Array PThreadedCode13554 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13555, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13556, (Optr)&t_push1, (Optr)string_13557, (Optr)&t_send0, (Optr)PSend13558, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13559, (Optr)&t_send1, (Optr)PSend13560, (Optr)&t_send0, (Optr)PSend13561, (Optr)&t_send1, (Optr)PSend13562, (Optr)&t_send2, (Optr)PSend13563, (Optr)&t_method_return);
    Method PMethod13553 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13554, 1, PSend13563);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod13553, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    String string_13566 = new_String(L"KEYWORDS-ARGUMENTS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13567 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13568 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13569 = new_Send((Optr)PSend13567, SMB__and_, 1, (Optr)PSend13568);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13570 = new_Send((Optr)PSend13569, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13566_Const = new_Constant((Optr)string_13566);
    // named:parsing:. 
    Send PSend13571 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13566_Const, (Optr)PSend13570);
    Array PThreadedCode13565 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13566, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13567, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13568, (Optr)&t_send1, (Optr)PSend13569, (Optr)&t_send0, (Optr)PSend13570, (Optr)&t_send2, (Optr)PSend13571, (Optr)&t_method_return);
    Method PMethod13564 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13565, 1, PSend13571);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod13564, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_preStoreBracketIndexExpression() {
    Symbol SMB_preStoreBracketIndexExpression = new_Symbol(L"preStoreBracketIndexExpression");
    Symbol  SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    String string_13576 = new_String(L"BRACKET-INDEX-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13576_Const = new_Constant((Optr)string_13576);
    // named:. 
    Send PSend13577 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13576_Const);
    Array PThreadedCode13575 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13576, (Optr)&t_send1, (Optr)PSend13577, (Optr)&t_block_return);
    Block PBlock13574 = new_Block_with(empty_Array, empty_Array, PThreadedCode13575, 1, PSend13577);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_bracketIndexExpression_Const = new_Constant((Optr)SMB_bracketIndexExpression);
    // at:ifAbsentPut:. 
    Send PSend13578 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_bracketIndexExpression_Const, (Optr)PBlock13574);
    Array PThreadedCode13573 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_bracketIndexExpression, (Optr)&t_push_closure, (Optr)PBlock13574, (Optr)&t_send2, (Optr)PSend13578, (Optr)&t_method_return);
    Method PMethod13572 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13573, 1, PSend13578);
    
    MethodClosure MC_SMB_preStoreBracketIndexExpression = new_MethodClosure((Method)PMethod13572, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBracketIndexExpression, MC_SMB_preStoreBracketIndexExpression);
}


static void init_SMB_initializePrimary() {
    Symbol SMB_initializePrimary = new_Symbol(L"initializePrimary");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13581 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13582 = new_Send((Optr)self, SMB_primary, 0);
    Array PThreadedCode13580 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13581, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13582, (Optr)&t_method_return);
    Method PMethod13579 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13580, 2, PSend13581, PSend13582);
    
    MethodClosure MC_SMB_initializePrimary = new_MethodClosure((Method)PMethod13579, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimary, MC_SMB_initializePrimary);
}


static void init_SMB_parseMethod_() {
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray13584 = new_Array_with(1, (Optr)VAR_method_0_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend13586 = new_Send((Optr)self, SMB_method, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13587 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_method_0_0, (Optr)PSend13586);
    Array PThreadedCode13585 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13586, (Optr)&t_send2, (Optr)PSend13587, (Optr)&t_method_return);
    Method PMethod13583 = new_Method_with(PArray13584, empty_Array, empty_Array, PThreadedCode13585, 1, PSend13587);
    
    MethodClosure MC_SMB_parseMethod_ = new_MethodClosure((Method)PMethod13583, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseMethod_, MC_SMB_parseMethod_);
}


static void init_SMB_initializeDecimalDigit() {
    Symbol SMB_initializeDecimalDigit = new_Symbol(L"initializeDecimalDigit");
    String string_13590 = new_String(L"0-9");
    Constant string_13590_Const = new_Constant((Optr)string_13590);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13591 = new_Send((Optr)string_13590_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13589 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13590, (Optr)&t_send0, (Optr)PSend13591, (Optr)&t_method_return);
    Method PMethod13588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13589, 1, PSend13591);
    
    MethodClosure MC_SMB_initializeDecimalDigit = new_MethodClosure((Method)PMethod13588, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeDecimalDigit, MC_SMB_initializeDecimalDigit);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    String string_13594 = new_String(L"TEMPORARIES");
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13595 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend13596 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13597 = new_Send((Optr)PSend13596, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13598 = new_Send((Optr)PSend13595, SMB__and_, 1, (Optr)PSend13597);
    // bar. 
    Send PSend13599 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13600 = new_Send((Optr)PSend13598, SMB__lt__and_, 1, (Optr)PSend13599);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13594_Const = new_Constant((Optr)string_13594);
    // named:parsing:. 
    Send PSend13601 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13594_Const, (Optr)PSend13600);
    Array PThreadedCode13593 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13594, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13595, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13596, (Optr)&t_send0, (Optr)PSend13597, (Optr)&t_send1, (Optr)PSend13598, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13599, (Optr)&t_send1, (Optr)PSend13600, (Optr)&t_send2, (Optr)PSend13601, (Optr)&t_method_return);
    Method PMethod13592 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13593, 1, PSend13601);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod13592, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    String string_13604 = new_String(L"KEYWORD-MESSAGE-EXPRESSION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13605 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13606 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13607 = new_Send((Optr)PSend13605, SMB__and_, 1, (Optr)PSend13606);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13608 = new_Send((Optr)PSend13607, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13604_Const = new_Constant((Optr)string_13604);
    // named:parsing:. 
    Send PSend13609 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13604_Const, (Optr)PSend13608);
    Array PThreadedCode13603 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13604, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13605, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13606, (Optr)&t_send1, (Optr)PSend13607, (Optr)&t_send0, (Optr)PSend13608, (Optr)&t_send2, (Optr)PSend13609, (Optr)&t_method_return);
    Method PMethod13602 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13603, 1, PSend13609);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod13602, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    String string_13612 = new_String(L"SYMBOL-KEYWORDS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13613 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13614 = new_Send((Optr)PSend13613, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13612_Const = new_Constant((Optr)string_13612);
    // named:parsing:. 
    Send PSend13615 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13612_Const, (Optr)PSend13614);
    Array PThreadedCode13611 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13612, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13613, (Optr)&t_send0, (Optr)PSend13614, (Optr)&t_send2, (Optr)PSend13615, (Optr)&t_method_return);
    Method PMethod13610 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13611, 1, PSend13615);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod13610, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeSpecialCharacter() {
    Symbol SMB_initializeSpecialCharacter = new_Symbol(L"initializeSpecialCharacter");
    String string_13618 = new_String(L"+*/\\~<>=@%?!&`,");
    Constant string_13618_Const = new_Constant((Optr)string_13618);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13619 = new_Send((Optr)string_13618_Const, SMB_asPEGChoice, 0);
    Array PThreadedCode13617 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13618, (Optr)&t_send0, (Optr)PSend13619, (Optr)&t_method_return);
    Method PMethod13616 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13617, 1, PSend13619);
    
    MethodClosure MC_SMB_initializeSpecialCharacter = new_MethodClosure((Method)PMethod13616, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSpecialCharacter, MC_SMB_initializeSpecialCharacter);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Symbol  SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    String string_13624 = new_String(L"CASCADED-MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13624_Const = new_Constant((Optr)string_13624);
    // named:. 
    Send PSend13625 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13624_Const);
    Array PThreadedCode13623 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13624, (Optr)&t_send1, (Optr)PSend13625, (Optr)&t_block_return);
    Block PBlock13622 = new_Block_with(empty_Array, empty_Array, PThreadedCode13623, 1, PSend13625);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_cascadedMessageExpression_Const = new_Constant((Optr)SMB_cascadedMessageExpression);
    // at:ifAbsentPut:. 
    Send PSend13626 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_cascadedMessageExpression_Const, (Optr)PBlock13622);
    Array PThreadedCode13621 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_cascadedMessageExpression, (Optr)&t_push_closure, (Optr)PBlock13622, (Optr)&t_send2, (Optr)PSend13626, (Optr)&t_method_return);
    Method PMethod13620 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13621, 1, PSend13626);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod13620, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_parseStatements_() {
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    Variable VAR_statements_0_0 = new_Variable_named(L"statements", 0);
    Array PArray13628 = new_Array_with(1, (Optr)VAR_statements_0_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13630 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13631 = new_Send((Optr)PSend13630, SMB_end, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13632 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_statements_0_0, (Optr)PSend13631);
    Array PThreadedCode13629 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13630, (Optr)&t_send0, (Optr)PSend13631, (Optr)&t_send2, (Optr)PSend13632, (Optr)&t_method_return);
    Method PMethod13627 = new_Method_with(PArray13628, empty_Array, empty_Array, PThreadedCode13629, 1, PSend13632);
    
    MethodClosure MC_SMB_parseStatements_ = new_MethodClosure((Method)PMethod13627, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseStatements_, MC_SMB_parseStatements_);
}


static void init_SMB_preStoreBinaryObjectDescription() {
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    Symbol  SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    String string_13637 = new_String(L"BINARY-OBJECT-DESCRIPTION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13637_Const = new_Constant((Optr)string_13637);
    // named:. 
    Send PSend13638 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13637_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13639 = new_Send((Optr)PSend13638, SMB_memo, 0);
    Array PThreadedCode13636 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13637, (Optr)&t_send1, (Optr)PSend13638, (Optr)&t_send0, (Optr)PSend13639, (Optr)&t_block_return);
    Block PBlock13635 = new_Block_with(empty_Array, empty_Array, PThreadedCode13636, 1, PSend13639);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryObjectDescription_Const = new_Constant((Optr)SMB_binaryObjectDescription);
    // at:ifAbsentPut:. 
    Send PSend13640 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryObjectDescription_Const, (Optr)PBlock13635);
    Array PThreadedCode13634 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryObjectDescription, (Optr)&t_push_closure, (Optr)PBlock13635, (Optr)&t_send2, (Optr)PSend13640, (Optr)&t_method_return);
    Method PMethod13633 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13634, 1, PSend13640);
    
    MethodClosure MC_SMB_preStoreBinaryObjectDescription = new_MethodClosure((Method)PMethod13633, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBinaryObjectDescription, MC_SMB_preStoreBinaryObjectDescription);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    String string_13643 = new_String(L"BLOCK");
    String string_13644 = new_String(L"[");
    Constant string_13644_Const = new_Constant((Optr)string_13644);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13645 = new_Send((Optr)string_13644_Const, SMB_asParser, 0);
    Symbol SMB_blockArguments = new_Symbol(L"blockArguments");
    // blockArguments. 
    Send PSend13646 = new_Send((Optr)self, SMB_blockArguments, 0);
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13647 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13648 = new_Send((Optr)PSend13646, SMB__and_, 1, (Optr)PSend13647);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13649 = new_Send((Optr)PSend13648, SMB_optional, 0);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13650 = new_Send((Optr)self, SMB_temporaries, 0);
    // optional. 
    Send PSend13651 = new_Send((Optr)PSend13650, SMB_optional, 0);
    // &. 
    Send PSend13652 = new_Send((Optr)PSend13649, SMB__and_, 1, (Optr)PSend13651);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13653 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13654 = new_Send((Optr)PSend13652, SMB__lt__and_, 1, (Optr)PSend13653);
    String string_13655 = new_String(L"]");
    Constant string_13655_Const = new_Constant((Optr)string_13655);
    // <&. 
    Send PSend13656 = new_Send((Optr)PSend13654, SMB__lt__and_, 1, (Optr)string_13655_Const);
    // blockArguments. 
    Send PSend13657 = new_Send((Optr)self, SMB_blockArguments, 0);
    // optional. 
    Send PSend13658 = new_Send((Optr)PSend13657, SMB_optional, 0);
    String string_13659 = new_String(L"]");
    Constant string_13659_Const = new_Constant((Optr)string_13659);
    // &. 
    Send PSend13660 = new_Send((Optr)PSend13658, SMB__and_, 1, (Optr)string_13659_Const);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13661 = new_Send((Optr)PSend13656, SMB__or_, 1, (Optr)PSend13660);
    // &. 
    Send PSend13662 = new_Send((Optr)PSend13645, SMB__and_, 1, (Optr)PSend13661);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13643_Const = new_Constant((Optr)string_13643);
    // named:parsing:. 
    Send PSend13663 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13643_Const, (Optr)PSend13662);
    Array PThreadedCode13642 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13643, (Optr)&t_push1, (Optr)string_13644, (Optr)&t_send0, (Optr)PSend13645, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13646, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13647, (Optr)&t_send1, (Optr)PSend13648, (Optr)&t_send0, (Optr)PSend13649, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13650, (Optr)&t_send0, (Optr)PSend13651, (Optr)&t_send1, (Optr)PSend13652, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13653, (Optr)&t_send1, (Optr)PSend13654, (Optr)&t_push1, (Optr)string_13655, (Optr)&t_send1, (Optr)PSend13656, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13657, (Optr)&t_send0, (Optr)PSend13658, (Optr)&t_push1, (Optr)string_13659, (Optr)&t_send1, (Optr)PSend13660, (Optr)&t_send1, (Optr)PSend13661, (Optr)&t_send1, (Optr)PSend13662, (Optr)&t_send2, (Optr)PSend13663, (Optr)&t_method_return);
    Method PMethod13641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13642, 1, PSend13663);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod13641, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    String string_13666 = new_String(L"IDENTIFIER");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13667 = new_Send((Optr)self, SMB_identifierBody, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13666_Const = new_Constant((Optr)string_13666);
    // named:parsing:. 
    Send PSend13668 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13666_Const, (Optr)PSend13667);
    Array PThreadedCode13665 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13666, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13667, (Optr)&t_send2, (Optr)PSend13668, (Optr)&t_method_return);
    Method PMethod13664 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13665, 1, PSend13668);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod13664, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_injectCascadedMessageExpression() {
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13671 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13672 = new_Send((Optr)self, SMB_messageExpression, 0);
    String string_13673 = new_String(L";");
    Constant string_13673_Const = new_Constant((Optr)string_13673);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13674 = new_Send((Optr)string_13673_Const, SMB_asParser, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13675 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_binaryMessageExpression = new_Symbol(L"binaryMessageExpression");
    // binaryMessageExpression. 
    Send PSend13676 = new_Send((Optr)self, SMB_binaryMessageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13677 = new_Send((Optr)PSend13675, SMB__or_, 1, (Optr)PSend13676);
    Symbol SMB_unaryMessageExpression = new_Symbol(L"unaryMessageExpression");
    // unaryMessageExpression. 
    Send PSend13678 = new_Send((Optr)self, SMB_unaryMessageExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13679 = new_Send((Optr)PSend13677, SMB__lt__equals_, 1, (Optr)PSend13678);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13680 = new_Send((Optr)PSend13674, SMB__and_, 1, (Optr)PSend13679);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13681 = new_Send((Optr)PSend13680, SMB_plus, 0);
    // &. 
    Send PSend13682 = new_Send((Optr)PSend13672, SMB__and_, 1, (Optr)PSend13681);
    // <=. 
    Send PSend13683 = new_Send((Optr)PSend13671, SMB__lt__equals_, 1, (Optr)PSend13682);
    Array PThreadedCode13670 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13671, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13672, (Optr)&t_push1, (Optr)string_13673, (Optr)&t_send0, (Optr)PSend13674, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13675, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13676, (Optr)&t_send1, (Optr)PSend13677, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13678, (Optr)&t_send1, (Optr)PSend13679, (Optr)&t_send1, (Optr)PSend13680, (Optr)&t_send0, (Optr)PSend13681, (Optr)&t_send1, (Optr)PSend13682, (Optr)&t_send1, (Optr)PSend13683, (Optr)&t_method_return);
    Method PMethod13669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13670, 1, PSend13683);
    
    MethodClosure MC_SMB_injectCascadedMessageExpression = new_MethodClosure((Method)PMethod13669, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectCascadedMessageExpression, MC_SMB_injectCascadedMessageExpression);
}


static void init_SMB_initializeCascadedMessageExpression() {
    Symbol SMB_initializeCascadedMessageExpression = new_Symbol(L"initializeCascadedMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13686 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13687 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Array PThreadedCode13685 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13686, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13687, (Optr)&t_method_return);
    Method PMethod13684 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13685, 2, PSend13686, PSend13687);
    
    MethodClosure MC_SMB_initializeCascadedMessageExpression = new_MethodClosure((Method)PMethod13684, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCascadedMessageExpression, MC_SMB_initializeCascadedMessageExpression);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    String string_13690 = new_String(L"RADIX-NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13691 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13692 = new_String(L"r");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13692_Const = new_Constant((Optr)string_13692);
    // &. 
    Send PSend13693 = new_Send((Optr)PSend13691, SMB__and_, 1, (Optr)string_13692_Const);
    // numberFormat. 
    Send PSend13694 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13695 = new_Send((Optr)PSend13693, SMB__lt__and_, 1, (Optr)PSend13694);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13690_Const = new_Constant((Optr)string_13690);
    // named:parsing:. 
    Send PSend13696 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13690_Const, (Optr)PSend13695);
    Array PThreadedCode13689 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13690, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13691, (Optr)&t_push1, (Optr)string_13692, (Optr)&t_send1, (Optr)PSend13693, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13694, (Optr)&t_send1, (Optr)PSend13695, (Optr)&t_send2, (Optr)PSend13696, (Optr)&t_method_return);
    Method PMethod13688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13689, 1, PSend13696);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod13688, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    String string_13699 = new_String(L"SYMBOL-IN-ARRAY");
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13700 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13699_Const = new_Constant((Optr)string_13699);
    // named:parsing:. 
    Send PSend13701 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13699_Const, (Optr)PSend13700);
    Array PThreadedCode13698 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13699, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13700, (Optr)&t_send2, (Optr)PSend13701, (Optr)&t_method_return);
    Method PMethod13697 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13698, 1, PSend13701);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod13697, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    String string_13704 = new_String(L"STATEMENTS");
    Symbol SMB_subExpression = new_Symbol(L"subExpression");
    // subExpression. 
    Send PSend13705 = new_Send((Optr)self, SMB_subExpression, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13706 = new_Send((Optr)PSend13705, SMB_times, 0);
    Symbol SMB_return = new_Symbol(L"return");
    // return. 
    Send PSend13707 = new_Send((Optr)self, SMB_return, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13708 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13709 = new_Send((Optr)PSend13707, SMB__or_, 1, (Optr)PSend13708);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13710 = new_Send((Optr)PSend13709, SMB_optional, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13711 = new_Send((Optr)PSend13706, SMB__and_, 1, (Optr)PSend13710);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13704_Const = new_Constant((Optr)string_13704);
    // named:parsing:. 
    Send PSend13712 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13704_Const, (Optr)PSend13711);
    Array PThreadedCode13703 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13704, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13705, (Optr)&t_send0, (Optr)PSend13706, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13707, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13708, (Optr)&t_send1, (Optr)PSend13709, (Optr)&t_send0, (Optr)PSend13710, (Optr)&t_send1, (Optr)PSend13711, (Optr)&t_send2, (Optr)PSend13712, (Optr)&t_method_return);
    Method PMethod13702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13703, 1, PSend13712);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod13702, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    String string_13715 = new_String(L"SYMBOL-CONSTANT");
    String string_13716 = new_String(L"#");
    Constant string_13716_Const = new_Constant((Optr)string_13716);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13717 = new_Send((Optr)string_13716_Const, SMB_asParser, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13718 = new_Send((Optr)PSend13717, SMB_plus, 0);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13719 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13720 = new_Send((Optr)PSend13718, SMB__logicAnd_, 1, (Optr)PSend13719);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13715_Const = new_Constant((Optr)string_13715);
    // named:parsing:. 
    Send PSend13721 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13715_Const, (Optr)PSend13720);
    Array PThreadedCode13714 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13715, (Optr)&t_push1, (Optr)string_13716, (Optr)&t_send0, (Optr)PSend13717, (Optr)&t_send0, (Optr)PSend13718, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13719, (Optr)&t_send1, (Optr)PSend13720, (Optr)&t_send2, (Optr)PSend13721, (Optr)&t_method_return);
    Method PMethod13713 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13714, 1, PSend13721);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod13713, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Variable VAR_array_0_0 = new_Variable_named(L"array", 0);
    Array PArray13723 = new_Array_with(1, (Optr)VAR_array_0_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    String string_13727 = new_String(L"ARRAY");
    Constant string_13727_Const = new_Constant((Optr)string_13727);
    // named:. 
    Send PSend13726 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13727_Const);
    Assign PAssign13725 = new_Assign((Optr)VAR_array_0_0, (Optr)PSend13726);
    String string_13728 = new_String(L"(");
    Constant string_13728_Const = new_Constant((Optr)string_13728);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13729 = new_Send((Optr)string_13728_Const, SMB_asParser, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13730 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13731 = new_Send((Optr)self, SMB_stringConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13732 = new_Send((Optr)PSend13730, SMB__or_, 1, (Optr)PSend13731);
    Symbol SMB_symbolInArray = new_Symbol(L"symbolInArray");
    // symbolInArray. 
    Send PSend13733 = new_Send((Optr)self, SMB_symbolInArray, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13734 = new_Send((Optr)PSend13732, SMB__lt__equals_, 1, (Optr)PSend13733);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13735 = new_Send((Optr)self, SMB_symbolConstant, 0);
    // <=. 
    Send PSend13736 = new_Send((Optr)PSend13734, SMB__lt__equals_, 1, (Optr)PSend13735);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13737 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend13738 = new_Send((Optr)PSend13736, SMB__lt__equals_, 1, (Optr)PSend13737);
    // <=. 
    Send PSend13739 = new_Send((Optr)PSend13738, SMB__lt__equals_, 1, (Optr)VAR_array_0_0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13740 = new_Send((Optr)PSend13739, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13741 = new_Send((Optr)PSend13729, SMB__and_, 1, (Optr)PSend13740);
    String string_13742 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13742_Const = new_Constant((Optr)string_13742);
    // <&. 
    Send PSend13743 = new_Send((Optr)PSend13741, SMB__lt__and_, 1, (Optr)string_13742_Const);
    // <=. 
    Send PSend13744 = new_Send((Optr)VAR_array_0_0, SMB__lt__equals_, 1, (Optr)PSend13743);
    Array PThreadedCode13724 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push1, (Optr)PAssign13725, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13727, (Optr)&t_send1, (Optr)PSend13726, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_push1, (Optr)string_13728, (Optr)&t_send0, (Optr)PSend13729, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13730, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13731, (Optr)&t_send1, (Optr)PSend13732, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13733, (Optr)&t_send1, (Optr)PSend13734, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13735, (Optr)&t_send1, (Optr)PSend13736, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13737, (Optr)&t_send1, (Optr)PSend13738, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_send1, (Optr)PSend13739, (Optr)&t_send0, (Optr)PSend13740, (Optr)&t_send1, (Optr)PSend13741, (Optr)&t_push1, (Optr)string_13742, (Optr)&t_send1, (Optr)PSend13743, (Optr)&t_send1, (Optr)PSend13744, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_method_return);
    Method PMethod13722 = new_Method_with(empty_Array, PArray13723, empty_Array, PThreadedCode13724, 3, PAssign13725, PSend13744, VAR_array_0_0);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod13722, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    String string_13747 = new_String(L"KEYWORD-ANNOTATION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13748 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13749 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13750 = new_Send((Optr)PSend13748, SMB__and_, 1, (Optr)PSend13749);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13751 = new_Send((Optr)PSend13750, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13747_Const = new_Constant((Optr)string_13747);
    // named:parsing:. 
    Send PSend13752 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13747_Const, (Optr)PSend13751);
    Array PThreadedCode13746 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13747, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13748, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13749, (Optr)&t_send1, (Optr)PSend13750, (Optr)&t_send0, (Optr)PSend13751, (Optr)&t_send2, (Optr)PSend13752, (Optr)&t_method_return);
    Method PMethod13745 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13746, 1, PSend13752);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod13745, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    // preStorePrimary. 
    Send PSend13755 = new_Send((Optr)self, SMB_preStorePrimary, 0);
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    // preStoreMessageExpression. 
    Send PSend13756 = new_Send((Optr)self, SMB_preStoreMessageExpression, 0);
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    // preStoreCascadedMessageExpression. 
    Send PSend13757 = new_Send((Optr)self, SMB_preStoreCascadedMessageExpression, 0);
    Symbol  SMB_expression = new_Symbol(L"expression");
    String string_13758 = new_String(L"EXPRESSION");
    Symbol SMB_assignmentExpressions = new_Symbol(L"assignmentExpressions");
    // assignmentExpressions. 
    Send PSend13759 = new_Send((Optr)self, SMB_assignmentExpressions, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13760 = new_Send((Optr)PSend13759, SMB_optional, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13761 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13762 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13763 = new_Send((Optr)PSend13761, SMB__or_, 1, (Optr)PSend13762);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13764 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13765 = new_Send((Optr)PSend13763, SMB__lt__equals_, 1, (Optr)PSend13764);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13766 = new_Send((Optr)PSend13760, SMB__and_, 1, (Optr)PSend13765);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13758_Const = new_Constant((Optr)string_13758);
    // named:parsing:. 
    Send PSend13767 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13758_Const, (Optr)PSend13766);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // at:put:. 
    Send PSend13768 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_put_, 2, (Optr)SMB_expression_Const, (Optr)PSend13767);
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    // injectPrimary. 
    Send PSend13769 = new_Send((Optr)self, SMB_injectPrimary, 0);
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    // injectMessageExpression. 
    Send PSend13770 = new_Send((Optr)self, SMB_injectMessageExpression, 0);
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    // injectCascadedMessageExpression. 
    Send PSend13771 = new_Send((Optr)self, SMB_injectCascadedMessageExpression, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend13772 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode13754 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13755, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13756, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13757, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13758, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13759, (Optr)&t_send0, (Optr)PSend13760, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13761, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13762, (Optr)&t_send1, (Optr)PSend13763, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13764, (Optr)&t_send1, (Optr)PSend13765, (Optr)&t_send1, (Optr)PSend13766, (Optr)&t_send2, (Optr)PSend13767, (Optr)&t_send2, (Optr)PSend13768, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13769, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13770, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13771, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend13772, (Optr)&t_method_return);
    Method PMethod13753 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13754, 8, PSend13755, PSend13756, PSend13757, PSend13768, PSend13769, PSend13770, PSend13771, PSend13772);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod13753, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    String string_13775 = new_String(L"FLOAT");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13776 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13777 = new_String(L".");
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Constant string_13777_Const = new_Constant((Optr)string_13777);
    // &&. 
    Send PSend13778 = new_Send((Optr)PSend13776, SMB__logicAnd_, 1, (Optr)string_13777_Const);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13779 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13780 = new_Send((Optr)PSend13779, SMB_strongPlus, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13781 = new_Send((Optr)PSend13778, SMB__lt__and_, 1, (Optr)PSend13780);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13775_Const = new_Constant((Optr)string_13775);
    // named:parsing:. 
    Send PSend13782 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13775_Const, (Optr)PSend13781);
    Array PThreadedCode13774 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13775, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13776, (Optr)&t_push1, (Optr)string_13777, (Optr)&t_send1, (Optr)PSend13778, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13779, (Optr)&t_send0, (Optr)PSend13780, (Optr)&t_send1, (Optr)PSend13781, (Optr)&t_send2, (Optr)PSend13782, (Optr)&t_method_return);
    Method PMethod13773 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13774, 1, PSend13782);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod13773, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    String string_13785 = new_String(L"BLOCK-ARGUMENTS");
    String string_13786 = new_String(L":");
    Constant string_13786_Const = new_Constant((Optr)string_13786);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13787 = new_Send((Optr)string_13786_Const, SMB_asParser, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13788 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13789 = new_Send((Optr)PSend13787, SMB__and_, 1, (Optr)PSend13788);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13790 = new_Send((Optr)PSend13789, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13785_Const = new_Constant((Optr)string_13785);
    // named:parsing:. 
    Send PSend13791 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13785_Const, (Optr)PSend13790);
    Array PThreadedCode13784 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13785, (Optr)&t_push1, (Optr)string_13786, (Optr)&t_send0, (Optr)PSend13787, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13788, (Optr)&t_send1, (Optr)PSend13789, (Optr)&t_send0, (Optr)PSend13790, (Optr)&t_send2, (Optr)PSend13791, (Optr)&t_method_return);
    Method PMethod13783 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13784, 1, PSend13791);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod13783, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeCommentFormat() {
    Symbol SMB_initializeCommentFormat = new_Symbol(L"initializeCommentFormat");
    Variable VAR_commentBorder_0_0 = new_Variable_named(L"commentBorder", 0);
    Array PArray13793 = new_Array_with(1, (Optr)VAR_commentBorder_0_0);
    String string_13797 = new_String(L"\"");
    Constant string_13797_Const = new_Constant((Optr)string_13797);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13796 = new_Send((Optr)string_13797_Const, SMB_asParser, 0);
    Assign PAssign13795 = new_Assign((Optr)VAR_commentBorder_0_0, (Optr)PSend13796);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13798 = new_Send((Optr)VAR_commentBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13799 = new_Send((Optr)PSend13798, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13800 = new_Send((Optr)PSend13799, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13801 = new_Send((Optr)VAR_commentBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend13800);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13802 = new_Send((Optr)PSend13801, SMB__lt__and_, 1, (Optr)VAR_commentBorder_0_0);
    Array PThreadedCode13794 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign13795, (Optr)&t_push1, (Optr)string_13797, (Optr)&t_send0, (Optr)PSend13796, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send0, (Optr)PSend13798, (Optr)&t_send0, (Optr)PSend13799, (Optr)&t_send0, (Optr)PSend13800, (Optr)&t_send1, (Optr)PSend13801, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send1, (Optr)PSend13802, (Optr)&t_method_return);
    Method PMethod13792 = new_Method_with(empty_Array, PArray13793, empty_Array, PThreadedCode13794, 2, PAssign13795, PSend13802);
    
    MethodClosure MC_SMB_initializeCommentFormat = new_MethodClosure((Method)PMethod13792, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCommentFormat, MC_SMB_initializeCommentFormat);
}


static void init_SMB_initializeSeparator() {
    Symbol SMB_initializeSeparator = new_Symbol(L"initializeSeparator");
    Super PSuper13805 = new_Super(SMB_initializeSeparator, 0);
    Symbol SMB_commentFormat = new_Symbol(L"commentFormat");
    // commentFormat. 
    Send PSend13806 = new_Send((Optr)self, SMB_commentFormat, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13807 = new_Send((Optr)PSuper13805, SMB__or_, 1, (Optr)PSend13806);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13808 = new_Send((Optr)PSend13807, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13809 = new_Send((Optr)PSend13808, SMB_omit, 0);
    Array PThreadedCode13804 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13805, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13806, (Optr)&t_send1, (Optr)PSend13807, (Optr)&t_send0, (Optr)PSend13808, (Optr)&t_send0, (Optr)PSend13809, (Optr)&t_method_return);
    Method PMethod13803 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13804, 1, PSend13809);
    
    MethodClosure MC_SMB_initializeSeparator = new_MethodClosure((Method)PMethod13803, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSeparator, MC_SMB_initializeSeparator);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    String string_13812 = new_String(L"BRACE-EXPRESSION");
    String string_13813 = new_String(L"{");
    Constant string_13813_Const = new_Constant((Optr)string_13813);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13814 = new_Send((Optr)string_13813_Const, SMB_asParser, 0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13815 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13816 = new_Send((Optr)PSend13814, SMB__and_, 1, (Optr)PSend13815);
    String string_13817 = new_String(L"}");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13817_Const = new_Constant((Optr)string_13817);
    // <&. 
    Send PSend13818 = new_Send((Optr)PSend13816, SMB__lt__and_, 1, (Optr)string_13817_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13812_Const = new_Constant((Optr)string_13812);
    // named:parsing:. 
    Send PSend13819 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13812_Const, (Optr)PSend13818);
    Array PThreadedCode13811 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13812, (Optr)&t_push1, (Optr)string_13813, (Optr)&t_send0, (Optr)PSend13814, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13815, (Optr)&t_send1, (Optr)PSend13816, (Optr)&t_push1, (Optr)string_13817, (Optr)&t_send1, (Optr)PSend13818, (Optr)&t_send2, (Optr)PSend13819, (Optr)&t_method_return);
    Method PMethod13810 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13811, 1, PSend13819);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod13810, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_injectBinaryObjectDescription() {
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13822 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13823 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13824 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13825 = new_Send((Optr)PSend13823, SMB__or_, 1, (Optr)PSend13824);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13826 = new_Send((Optr)PSend13822, SMB__lt__equals_, 1, (Optr)PSend13825);
    Array PThreadedCode13821 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13822, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13823, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13824, (Optr)&t_send1, (Optr)PSend13825, (Optr)&t_send1, (Optr)PSend13826, (Optr)&t_method_return);
    Method PMethod13820 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13821, 1, PSend13826);
    
    MethodClosure MC_SMB_injectBinaryObjectDescription = new_MethodClosure((Method)PMethod13820, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectBinaryObjectDescription, MC_SMB_injectBinaryObjectDescription);
}


static void init_SMB_initializeLowercase() {
    Symbol SMB_initializeLowercase = new_Symbol(L"initializeLowercase");
    String string_13829 = new_String(L"a-z");
    Constant string_13829_Const = new_Constant((Optr)string_13829);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13830 = new_Send((Optr)string_13829_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13828 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13829, (Optr)&t_send0, (Optr)PSend13830, (Optr)&t_method_return);
    Method PMethod13827 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13828, 1, PSend13830);
    
    MethodClosure MC_SMB_initializeLowercase = new_MethodClosure((Method)PMethod13827, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLowercase, MC_SMB_initializeLowercase);
}


static void init_SMB_injectMessageExpression() {
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13833 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB_keywordExpression = new_Symbol(L"keywordExpression");
    // keywordExpression. 
    Send PSend13834 = new_Send((Optr)self, SMB_keywordExpression, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13835 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13836 = new_Send((Optr)PSend13834, SMB__or_, 1, (Optr)PSend13835);
    Symbol SMB_unaryExpression = new_Symbol(L"unaryExpression");
    // unaryExpression. 
    Send PSend13837 = new_Send((Optr)self, SMB_unaryExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13838 = new_Send((Optr)PSend13836, SMB__lt__equals_, 1, (Optr)PSend13837);
    // <=. 
    Send PSend13839 = new_Send((Optr)PSend13833, SMB__lt__equals_, 1, (Optr)PSend13838);
    Array PThreadedCode13832 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13833, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13834, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13835, (Optr)&t_send1, (Optr)PSend13836, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13837, (Optr)&t_send1, (Optr)PSend13838, (Optr)&t_send1, (Optr)PSend13839, (Optr)&t_method_return);
    Method PMethod13831 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13832, 1, PSend13839);
    
    MethodClosure MC_SMB_injectMessageExpression = new_MethodClosure((Method)PMethod13831, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectMessageExpression, MC_SMB_injectMessageExpression);
}


static void init_SMB_initializeIdentifierBody() {
    Symbol SMB_initializeIdentifierBody = new_Symbol(L"initializeIdentifierBody");
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13842 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend13843 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13844 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13845 = new_Send((Optr)PSend13843, SMB__or_, 1, (Optr)PSend13844);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13846 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13847 = new_Send((Optr)PSend13845, SMB__lt__equals_, 1, (Optr)PSend13846);
    String string_13848 = new_String(L"!?");
    Constant string_13848_Const = new_Constant((Optr)string_13848);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13849 = new_Send((Optr)string_13848_Const, SMB_asPEGChoice, 0);
    // <=. 
    Send PSend13850 = new_Send((Optr)PSend13847, SMB__lt__equals_, 1, (Optr)PSend13849);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13851 = new_Send((Optr)PSend13850, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13852 = new_Send((Optr)PSend13842, SMB__logicAnd_, 1, (Optr)PSend13851);
    Array PThreadedCode13841 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13842, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13843, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13844, (Optr)&t_send1, (Optr)PSend13845, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13846, (Optr)&t_send1, (Optr)PSend13847, (Optr)&t_push1, (Optr)string_13848, (Optr)&t_send0, (Optr)PSend13849, (Optr)&t_send1, (Optr)PSend13850, (Optr)&t_send0, (Optr)PSend13851, (Optr)&t_send1, (Optr)PSend13852, (Optr)&t_method_return);
    Method PMethod13840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13841, 1, PSend13852);
    
    MethodClosure MC_SMB_initializeIdentifierBody = new_MethodClosure((Method)PMethod13840, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifierBody, MC_SMB_initializeIdentifierBody);
}


static void init_SMB_initializeLiteral() {
    Symbol SMB_initializeLiteral = new_Symbol(L"initializeLiteral");
    Symbol SMB_float = new_Symbol(L"float");
    // float. 
    Send PSend13855 = new_Send((Optr)self, SMB_float, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13856 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13857 = new_Send((Optr)PSend13855, SMB__or_, 1, (Optr)PSend13856);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13858 = new_Send((Optr)self, SMB_symbolConstant, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13859 = new_Send((Optr)PSend13857, SMB__lt__equals_, 1, (Optr)PSend13858);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13860 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend13861 = new_Send((Optr)PSend13859, SMB__lt__equals_, 1, (Optr)PSend13860);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13862 = new_Send((Optr)self, SMB_stringConstant, 0);
    // <=. 
    Send PSend13863 = new_Send((Optr)PSend13861, SMB__lt__equals_, 1, (Optr)PSend13862);
    Symbol SMB_arrayConstant = new_Symbol(L"arrayConstant");
    // arrayConstant. 
    Send PSend13864 = new_Send((Optr)self, SMB_arrayConstant, 0);
    // <=. 
    Send PSend13865 = new_Send((Optr)PSend13863, SMB__lt__equals_, 1, (Optr)PSend13864);
    Array PThreadedCode13854 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13855, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13856, (Optr)&t_send1, (Optr)PSend13857, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13858, (Optr)&t_send1, (Optr)PSend13859, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13860, (Optr)&t_send1, (Optr)PSend13861, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13862, (Optr)&t_send1, (Optr)PSend13863, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13864, (Optr)&t_send1, (Optr)PSend13865, (Optr)&t_method_return);
    Method PMethod13853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13854, 1, PSend13865);
    
    MethodClosure MC_SMB_initializeLiteral = new_MethodClosure((Method)PMethod13853, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLiteral, MC_SMB_initializeLiteral);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    String string_13868 = new_String(L"BINARY-MESSAGE-EXPRESSION");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13869 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13870 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13871 = new_Send((Optr)PSend13869, SMB__and_, 1, (Optr)PSend13870);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13868_Const = new_Constant((Optr)string_13868);
    // named:parsing:. 
    Send PSend13872 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13868_Const, (Optr)PSend13871);
    Array PThreadedCode13867 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13868, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13869, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13870, (Optr)&t_send1, (Optr)PSend13871, (Optr)&t_send2, (Optr)PSend13872, (Optr)&t_method_return);
    Method PMethod13866 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13867, 1, PSend13872);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod13866, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    String string_13875 = new_String(L"STRING");
    Symbol SMB_stringSegment = new_Symbol(L"stringSegment");
    // stringSegment. 
    Send PSend13876 = new_Send((Optr)self, SMB_stringSegment, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13877 = new_Send((Optr)PSend13876, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13875_Const = new_Constant((Optr)string_13875);
    // named:parsing:. 
    Send PSend13878 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13875_Const, (Optr)PSend13877);
    Array PThreadedCode13874 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13875, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13876, (Optr)&t_send0, (Optr)PSend13877, (Optr)&t_send2, (Optr)PSend13878, (Optr)&t_method_return);
    Method PMethod13873 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13874, 1, PSend13878);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod13873, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    Array PThreadedCode13880 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod13879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13880, 1, self);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod13879, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_test, MC_SMB_test);
}


static void init_SMB_initializeSubExpression() {
    Symbol SMB_initializeSubExpression = new_Symbol(L"initializeSubExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13883 = new_Send((Optr)self, SMB_expression, 0);
    String string_13884 = new_String(L".");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13884_Const = new_Constant((Optr)string_13884);
    // &. 
    Send PSend13885 = new_Send((Optr)PSend13883, SMB__and_, 1, (Optr)string_13884_Const);
    String string_13886 = new_String(L".");
    Symbol SMB__or_ = new_Symbol(L"|");
    Constant string_13886_Const = new_Constant((Optr)string_13886);
    // |. 
    Send PSend13887 = new_Send((Optr)PSend13885, SMB__or_, 1, (Optr)string_13886_Const);
    Array PThreadedCode13882 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13883, (Optr)&t_push1, (Optr)string_13884, (Optr)&t_send1, (Optr)PSend13885, (Optr)&t_push1, (Optr)string_13886, (Optr)&t_send1, (Optr)PSend13887, (Optr)&t_method_return);
    Method PMethod13881 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13882, 1, PSend13887);
    
    MethodClosure MC_SMB_initializeSubExpression = new_MethodClosure((Method)PMethod13881, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSubExpression, MC_SMB_initializeSubExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    String string_13890 = new_String(L"ANNOTATIONS");
    String string_13891 = new_String(L"<");
    Constant string_13891_Const = new_Constant((Optr)string_13891);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13892 = new_Send((Optr)string_13891_Const, SMB_asParser, 0);
    Symbol SMB_keywordAnnotation = new_Symbol(L"keywordAnnotation");
    // keywordAnnotation. 
    Send PSend13893 = new_Send((Optr)self, SMB_keywordAnnotation, 0);
    Symbol SMB_unaryAnnotation = new_Symbol(L"unaryAnnotation");
    // unaryAnnotation. 
    Send PSend13894 = new_Send((Optr)self, SMB_unaryAnnotation, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13895 = new_Send((Optr)PSend13893, SMB__or_, 1, (Optr)PSend13894);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13896 = new_Send((Optr)PSend13892, SMB__and_, 1, (Optr)PSend13895);
    String string_13897 = new_String(L">");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13897_Const = new_Constant((Optr)string_13897);
    // <&. 
    Send PSend13898 = new_Send((Optr)PSend13896, SMB__lt__and_, 1, (Optr)string_13897_Const);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13899 = new_Send((Optr)PSend13898, SMB_times, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13890_Const = new_Constant((Optr)string_13890);
    // named:parsing:. 
    Send PSend13900 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13890_Const, (Optr)PSend13899);
    Array PThreadedCode13889 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13890, (Optr)&t_push1, (Optr)string_13891, (Optr)&t_send0, (Optr)PSend13892, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13893, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13894, (Optr)&t_send1, (Optr)PSend13895, (Optr)&t_send1, (Optr)PSend13896, (Optr)&t_push1, (Optr)string_13897, (Optr)&t_send1, (Optr)PSend13898, (Optr)&t_send0, (Optr)PSend13899, (Optr)&t_send2, (Optr)PSend13900, (Optr)&t_method_return);
    Method PMethod13888 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13889, 1, PSend13900);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod13888, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializeArrayConstant() {
    Symbol SMB_initializeArrayConstant = new_Symbol(L"initializeArrayConstant");
    String string_13903 = new_String(L"#");
    Constant string_13903_Const = new_Constant((Optr)string_13903);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13904 = new_Send((Optr)string_13903_Const, SMB_asParser, 0);
    Symbol SMB_array = new_Symbol(L"array");
    // array. 
    Send PSend13905 = new_Send((Optr)self, SMB_array, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13906 = new_Send((Optr)PSend13904, SMB__and_, 1, (Optr)PSend13905);
    Array PThreadedCode13902 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)string_13903, (Optr)&t_send0, (Optr)PSend13904, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13905, (Optr)&t_send1, (Optr)PSend13906, (Optr)&t_method_return);
    Method PMethod13901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13902, 1, PSend13906);
    
    MethodClosure MC_SMB_initializeArrayConstant = new_MethodClosure((Method)PMethod13901, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArrayConstant, MC_SMB_initializeArrayConstant);
}


static void init_SMB_initializeBinaryObjectDescription() {
    Symbol SMB_initializeBinaryObjectDescription = new_Symbol(L"initializeBinaryObjectDescription");
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13909 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13910 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Array PThreadedCode13908 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13909, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13910, (Optr)&t_method_return);
    Method PMethod13907 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13908, 2, PSend13909, PSend13910);
    
    MethodClosure MC_SMB_initializeBinaryObjectDescription = new_MethodClosure((Method)PMethod13907, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryObjectDescription, MC_SMB_initializeBinaryObjectDescription);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Variable VAR_stringBorder_0_0 = new_Variable_named(L"stringBorder", 0);
    Array PArray13912 = new_Array_with(1, (Optr)VAR_stringBorder_0_0);
    String string_13916 = new_String(L"'");
    Constant string_13916_Const = new_Constant((Optr)string_13916);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13915 = new_Send((Optr)string_13916_Const, SMB_asParser, 0);
    Assign PAssign13914 = new_Assign((Optr)VAR_stringBorder_0_0, (Optr)PSend13915);
    String string_13917 = new_String(L"STRING-SEGMENT");
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13918 = new_Send((Optr)VAR_stringBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13919 = new_Send((Optr)PSend13918, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13920 = new_Send((Optr)PSend13919, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13921 = new_Send((Optr)VAR_stringBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend13920);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13922 = new_Send((Optr)PSend13921, SMB__lt__and_, 1, (Optr)VAR_stringBorder_0_0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13917_Const = new_Constant((Optr)string_13917);
    // named:parsing:. 
    Send PSend13923 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13917_Const, (Optr)PSend13922);
    Array PThreadedCode13913 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign13914, (Optr)&t_push1, (Optr)string_13916, (Optr)&t_send0, (Optr)PSend13915, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13917, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send0, (Optr)PSend13918, (Optr)&t_send0, (Optr)PSend13919, (Optr)&t_send0, (Optr)PSend13920, (Optr)&t_send1, (Optr)PSend13921, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send1, (Optr)PSend13922, (Optr)&t_send2, (Optr)PSend13923, (Optr)&t_method_return);
    Method PMethod13911 = new_Method_with(empty_Array, PArray13912, empty_Array, PThreadedCode13913, 2, PAssign13914, PSend13923);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod13911, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeBar() {
    Symbol SMB_initializeBar = new_Symbol(L"initializeBar");
    String string_13926 = new_String(L"|");
    Constant string_13926_Const = new_Constant((Optr)string_13926);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13927 = new_Send((Optr)string_13926_Const, SMB_asParser, 0);
    Array PThreadedCode13925 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13926, (Optr)&t_send0, (Optr)PSend13927, (Optr)&t_method_return);
    Method PMethod13924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13925, 1, PSend13927);
    
    MethodClosure MC_SMB_initializeBar = new_MethodClosure((Method)PMethod13924, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBar, MC_SMB_initializeBar);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    String string_13930 = new_String(L"BINARY-ARGUMENT");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13931 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13932 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13933 = new_Send((Optr)PSend13931, SMB__and_, 1, (Optr)PSend13932);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13930_Const = new_Constant((Optr)string_13930);
    // named:parsing:. 
    Send PSend13934 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13930_Const, (Optr)PSend13933);
    Array PThreadedCode13929 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13930, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13931, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13932, (Optr)&t_send1, (Optr)PSend13933, (Optr)&t_send2, (Optr)PSend13934, (Optr)&t_method_return);
    Method PMethod13928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13929, 1, PSend13934);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod13928, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    String string_13937 = new_String(L"RETURN");
    String string_13938 = new_String(L"^");
    Constant string_13938_Const = new_Constant((Optr)string_13938);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13939 = new_Send((Optr)string_13938_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13940 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13941 = new_Send((Optr)PSend13939, SMB__and_, 1, (Optr)PSend13940);
    String string_13942 = new_String(L".");
    Constant string_13942_Const = new_Constant((Optr)string_13942);
    // asParser. 
    Send PSend13943 = new_Send((Optr)string_13942_Const, SMB_asParser, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13944 = new_Send((Optr)PSend13943, SMB_optional, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13945 = new_Send((Optr)PSend13944, SMB_omit, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13946 = new_Send((Optr)PSend13941, SMB__lt__and_, 1, (Optr)PSend13945);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13937_Const = new_Constant((Optr)string_13937);
    // named:parsing:. 
    Send PSend13947 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13937_Const, (Optr)PSend13946);
    Array PThreadedCode13936 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13937, (Optr)&t_push1, (Optr)string_13938, (Optr)&t_send0, (Optr)PSend13939, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13940, (Optr)&t_send1, (Optr)PSend13941, (Optr)&t_push1, (Optr)string_13942, (Optr)&t_send0, (Optr)PSend13943, (Optr)&t_send0, (Optr)PSend13944, (Optr)&t_send0, (Optr)PSend13945, (Optr)&t_send1, (Optr)PSend13946, (Optr)&t_send2, (Optr)PSend13947, (Optr)&t_method_return);
    Method PMethod13935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13936, 1, PSend13947);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod13935, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeNumberConstant() {
    Symbol SMB_initializeNumberConstant = new_Symbol(L"initializeNumberConstant");
    Symbol SMB_radix = new_Symbol(L"radix");
    // radix. 
    Send PSend13950 = new_Send((Optr)self, SMB_radix, 0);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend13951 = new_Send((Optr)self, SMB_number, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13952 = new_Send((Optr)PSend13950, SMB__or_, 1, (Optr)PSend13951);
    Array PThreadedCode13949 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13950, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13951, (Optr)&t_send1, (Optr)PSend13952, (Optr)&t_method_return);
    Method PMethod13948 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13949, 1, PSend13952);
    
    MethodClosure MC_SMB_initializeNumberConstant = new_MethodClosure((Method)PMethod13948, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberConstant, MC_SMB_initializeNumberConstant);
}


static void init_SMB_initializeCharacter() {
    Symbol SMB_initializeCharacter = new_Symbol(L"initializeCharacter");
    String string_13955 = new_String(L"[]{}()_^;$#:-|.'\"");
    Constant string_13955_Const = new_Constant((Optr)string_13955);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13956 = new_Send((Optr)string_13955_Const, SMB_asPEGChoice, 0);
    Symbol SMB_separators = new_Symbol(L"separators");
    // separators. 
    Send PSend13957 = new_Send((Optr)PEGParser_classReference, SMB_separators, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13958 = new_Send((Optr)PSend13956, SMB__or_, 1, (Optr)PSend13957);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13959 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13960 = new_Send((Optr)PSend13958, SMB__lt__equals_, 1, (Optr)PSend13959);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13961 = new_Send((Optr)self, SMB_letter, 0);
    // <=. 
    Send PSend13962 = new_Send((Optr)PSend13960, SMB__lt__equals_, 1, (Optr)PSend13961);
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13963 = new_Send((Optr)self, SMB_specialCharacter, 0);
    // <=. 
    Send PSend13964 = new_Send((Optr)PSend13962, SMB__lt__equals_, 1, (Optr)PSend13963);
    Array PThreadedCode13954 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)string_13955, (Optr)&t_send0, (Optr)PSend13956, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend13957, (Optr)&t_send1, (Optr)PSend13958, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13959, (Optr)&t_send1, (Optr)PSend13960, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13961, (Optr)&t_send1, (Optr)PSend13962, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13963, (Optr)&t_send1, (Optr)PSend13964, (Optr)&t_method_return);
    Method PMethod13953 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13954, 1, PSend13964);
    
    MethodClosure MC_SMB_initializeCharacter = new_MethodClosure((Method)PMethod13953, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacter, MC_SMB_initializeCharacter);
}


static void init_SMB_injectPrimary() {
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13967 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_primaryVariable = new_Symbol(L"primaryVariable");
    // primaryVariable. 
    Send PSend13968 = new_Send((Optr)self, SMB_primaryVariable, 0);
    Symbol SMB_literal = new_Symbol(L"literal");
    // literal. 
    Send PSend13969 = new_Send((Optr)self, SMB_literal, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13970 = new_Send((Optr)PSend13968, SMB__or_, 1, (Optr)PSend13969);
    Symbol SMB_block = new_Symbol(L"block");
    // block. 
    Send PSend13971 = new_Send((Optr)self, SMB_block, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13972 = new_Send((Optr)PSend13970, SMB__lt__equals_, 1, (Optr)PSend13971);
    Symbol SMB_scopedExpression = new_Symbol(L"scopedExpression");
    // scopedExpression. 
    Send PSend13973 = new_Send((Optr)self, SMB_scopedExpression, 0);
    // <=. 
    Send PSend13974 = new_Send((Optr)PSend13972, SMB__lt__equals_, 1, (Optr)PSend13973);
    Symbol SMB_braceExpression = new_Symbol(L"braceExpression");
    // braceExpression. 
    Send PSend13975 = new_Send((Optr)self, SMB_braceExpression, 0);
    // <=. 
    Send PSend13976 = new_Send((Optr)PSend13974, SMB__lt__equals_, 1, (Optr)PSend13975);
    // <=. 
    Send PSend13977 = new_Send((Optr)PSend13967, SMB__lt__equals_, 1, (Optr)PSend13976);
    Array PThreadedCode13966 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13967, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13968, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13969, (Optr)&t_send1, (Optr)PSend13970, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13971, (Optr)&t_send1, (Optr)PSend13972, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13973, (Optr)&t_send1, (Optr)PSend13974, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13975, (Optr)&t_send1, (Optr)PSend13976, (Optr)&t_send1, (Optr)PSend13977, (Optr)&t_method_return);
    Method PMethod13965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13966, 1, PSend13977);
    
    MethodClosure MC_SMB_injectPrimary = new_MethodClosure((Method)PMethod13965, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectPrimary, MC_SMB_injectPrimary);
}


static void init_SMB_initializeLetter() {
    Symbol SMB_initializeLetter = new_Symbol(L"initializeLetter");
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend13980 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13981 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13982 = new_Send((Optr)PSend13980, SMB__or_, 1, (Optr)PSend13981);
    Array PThreadedCode13979 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13980, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13981, (Optr)&t_send1, (Optr)PSend13982, (Optr)&t_method_return);
    Method PMethod13978 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13979, 1, PSend13982);
    
    MethodClosure MC_SMB_initializeLetter = new_MethodClosure((Method)PMethod13978, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLetter, MC_SMB_initializeLetter);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    String string_13985 = new_String(L"ASSIGNMENT-EXPRESSIONS");
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend13986 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend13987 = new_Send((Optr)self, SMB_assignmentOp, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13988 = new_Send((Optr)PSend13986, SMB__and_, 1, (Optr)PSend13987);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13989 = new_Send((Optr)PSend13988, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13985_Const = new_Constant((Optr)string_13985);
    // named:parsing:. 
    Send PSend13990 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13985_Const, (Optr)PSend13989);
    Array PThreadedCode13984 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13985, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13986, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13987, (Optr)&t_send1, (Optr)PSend13988, (Optr)&t_send0, (Optr)PSend13989, (Optr)&t_send2, (Optr)PSend13990, (Optr)&t_method_return);
    Method PMethod13983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13984, 1, PSend13990);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod13983, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_initializeFinalExpression() {
    Symbol SMB_initializeFinalExpression = new_Symbol(L"initializeFinalExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13993 = new_Send((Optr)self, SMB_expression, 0);
    Array PThreadedCode13992 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13993, (Optr)&t_method_return);
    Method PMethod13991 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13992, 1, PSend13993);
    
    MethodClosure MC_SMB_initializeFinalExpression = new_MethodClosure((Method)PMethod13991, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFinalExpression, MC_SMB_initializeFinalExpression);
}


static void init_SMB_initializeMessageExpression() {
    Symbol SMB_initializeMessageExpression = new_Symbol(L"initializeMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13996 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13997 = new_Send((Optr)self, SMB_messageExpression, 0);
    Array PThreadedCode13995 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13996, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13997, (Optr)&t_method_return);
    Method PMethod13994 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13995, 2, PSend13996, PSend13997);
    
    MethodClosure MC_SMB_initializeMessageExpression = new_MethodClosure((Method)PMethod13994, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessageExpression, MC_SMB_initializeMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    String string_14000 = new_String(L"UNARY-ANNOTATION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend14001 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14000_Const = new_Constant((Optr)string_14000);
    // named:parsing:. 
    Send PSend14002 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14000_Const, (Optr)PSend14001);
    Array PThreadedCode13999 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14000, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14001, (Optr)&t_send2, (Optr)PSend14002, (Optr)&t_method_return);
    Method PMethod13998 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13999, 1, PSend14002);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod13998, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeMessagePattern() {
    Symbol SMB_initializeMessagePattern = new_Symbol(L"initializeMessagePattern");
    String string_14005 = new_String(L"MESSAGE-PATTERN");
    Symbol SMB_keywordsArguments = new_Symbol(L"keywordsArguments");
    // keywordsArguments. 
    Send PSend14006 = new_Send((Optr)self, SMB_keywordsArguments, 0);
    Symbol SMB_binaryMessageDefinition = new_Symbol(L"binaryMessageDefinition");
    // binaryMessageDefinition. 
    Send PSend14007 = new_Send((Optr)self, SMB_binaryMessageDefinition, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14008 = new_Send((Optr)PSend14006, SMB__or_, 1, (Optr)PSend14007);
    Symbol SMB_unaryMessageDefinition = new_Symbol(L"unaryMessageDefinition");
    // unaryMessageDefinition. 
    Send PSend14009 = new_Send((Optr)self, SMB_unaryMessageDefinition, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14010 = new_Send((Optr)PSend14008, SMB__lt__equals_, 1, (Optr)PSend14009);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14005_Const = new_Constant((Optr)string_14005);
    // named:parsing:. 
    Send PSend14011 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14005_Const, (Optr)PSend14010);
    Array PThreadedCode14004 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14005, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14006, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14007, (Optr)&t_send1, (Optr)PSend14008, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14009, (Optr)&t_send1, (Optr)PSend14010, (Optr)&t_send2, (Optr)PSend14011, (Optr)&t_method_return);
    Method PMethod14003 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14004, 1, PSend14011);
    
    MethodClosure MC_SMB_initializeMessagePattern = new_MethodClosure((Method)PMethod14003, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessagePattern, MC_SMB_initializeMessagePattern);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign14014 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode14013 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign14014, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14012 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14013, 2, PAssign14014, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod14012, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
    store_method(HEADER(Smalltalk_Parser_SmalltalkGrammar_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper14020 = new_Super(SMB_new, 0);
    Assign PAssign14019 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)PSuper14020);
    Array PThreadedCode14018 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14019, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14020, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock14017 = new_Block_with(empty_Array, empty_Array, PThreadedCode14018, 1, PAssign14019);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend14021 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock14017);
    Array PThreadedCode14016 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock14017, (Optr)&t_send1, (Optr)PSend14021, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_method_return);
    Method PMethod14015 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14016, 2, PSend14021, slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod14015, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
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