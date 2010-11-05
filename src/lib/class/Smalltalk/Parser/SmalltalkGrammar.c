#include <lib/class/Smalltalk/Parser/SmalltalkGrammar.h>


Optr slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance;
Optr layout_Smalltalk_Parser_SmalltalkGrammar_Class_class;
Optr layout_Smalltalk_Parser_SmalltalkGrammar;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    String string_13327 = new_String(L"UNARY-MESSAGE-EXPRESSION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13328 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13327_Const = new_Constant((Optr)string_13327);
    // named:parsing:. 
    Send PSend13329 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13327_Const, (Optr)PSend13328);
    Array PThreadedCode13326 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13327, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13328, (Optr)&t_send2, (Optr)PSend13329, (Optr)&t_method_return);
    Method PMethod13325 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13326, 1, PSend13329);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod13325, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    String string_13332 = new_String(L"UNARY-SELECTOR");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13333 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13334 = new_String(L":");
    Constant string_13334_Const = new_Constant((Optr)string_13334);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13335 = new_Send((Optr)string_13334_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13336 = new_Send((Optr)PSend13335, SMB_not, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13337 = new_Send((Optr)PSend13333, SMB__logicAnd_, 1, (Optr)PSend13336);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13332_Const = new_Constant((Optr)string_13332);
    // named:parsing:. 
    Send PSend13338 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13332_Const, (Optr)PSend13337);
    Array PThreadedCode13331 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13332, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13333, (Optr)&t_push1, (Optr)string_13334, (Optr)&t_send0, (Optr)PSend13335, (Optr)&t_send0, (Optr)PSend13336, (Optr)&t_send1, (Optr)PSend13337, (Optr)&t_send2, (Optr)PSend13338, (Optr)&t_method_return);
    Method PMethod13330 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13331, 1, PSend13338);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod13330, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    String string_13341 = new_String(L"NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13342 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13341_Const = new_Constant((Optr)string_13341);
    // named:parsing:. 
    Send PSend13343 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13341_Const, (Optr)PSend13342);
    Array PThreadedCode13340 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13341, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13342, (Optr)&t_send2, (Optr)PSend13343, (Optr)&t_method_return);
    Method PMethod13339 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13340, 1, PSend13343);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod13339, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    String string_13346 = new_String(L"UNARY-OBJECT-DESCRIPTION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13347 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13348 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13349 = new_Send((Optr)PSend13348, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13350 = new_Send((Optr)PSend13347, SMB__and_, 1, (Optr)PSend13349);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13346_Const = new_Constant((Optr)string_13346);
    // named:parsing:. 
    Send PSend13351 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13346_Const, (Optr)PSend13350);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13352 = new_Send((Optr)PSend13351, SMB_memo, 0);
    Array PThreadedCode13345 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13346, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13347, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13348, (Optr)&t_send0, (Optr)PSend13349, (Optr)&t_send1, (Optr)PSend13350, (Optr)&t_send2, (Optr)PSend13351, (Optr)&t_send0, (Optr)PSend13352, (Optr)&t_method_return);
    Method PMethod13344 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13345, 1, PSend13352);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod13344, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    String string_13355 = new_String(L"VARIABLE-NAME");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13356 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13355_Const = new_Constant((Optr)string_13355);
    // named:parsing:. 
    Send PSend13357 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13355_Const, (Optr)PSend13356);
    Array PThreadedCode13354 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13355, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13356, (Optr)&t_send2, (Optr)PSend13357, (Optr)&t_method_return);
    Method PMethod13353 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13354, 1, PSend13357);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod13353, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_assignmentOp() {
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    String string_13360 = new_String(L":=");
    Constant string_13360_Const = new_Constant((Optr)string_13360);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13361 = new_Send((Optr)string_13360_Const, SMB_asParser, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13362 = new_Send((Optr)PSend13361, SMB_omit, 0);
    Array PThreadedCode13359 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)string_13360, (Optr)&t_send0, (Optr)PSend13361, (Optr)&t_send0, (Optr)PSend13362, (Optr)&t_method_return);
    Method PMethod13358 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13359, 1, PSend13362);
    
    MethodClosure MC_SMB_assignmentOp = new_MethodClosure((Method)PMethod13358, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_assignmentOp, MC_SMB_assignmentOp);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    String string_13365 = new_String(L"CAPITAL-IDENTIFIER");
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13366 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13367 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13368 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13369 = new_Send((Optr)PSend13367, SMB__or_, 1, (Optr)PSend13368);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13370 = new_Send((Optr)PSend13369, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13371 = new_Send((Optr)PSend13366, SMB__logicAnd_, 1, (Optr)PSend13370);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13365_Const = new_Constant((Optr)string_13365);
    // named:parsing:. 
    Send PSend13372 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13365_Const, (Optr)PSend13371);
    Array PThreadedCode13364 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13365, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13366, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13367, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13368, (Optr)&t_send1, (Optr)PSend13369, (Optr)&t_send0, (Optr)PSend13370, (Optr)&t_send1, (Optr)PSend13371, (Optr)&t_send2, (Optr)PSend13372, (Optr)&t_method_return);
    Method PMethod13363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13364, 1, PSend13372);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod13363, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    String string_13375 = new_String(L"BINARY-SELECTOR");
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13376 = new_Send((Optr)self, SMB_specialCharacter, 0);
    String string_13377 = new_String(L"-");
    Constant string_13377_Const = new_Constant((Optr)string_13377);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13378 = new_Send((Optr)string_13377_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13379 = new_Send((Optr)PSend13378, SMB_consume, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13380 = new_Send((Optr)PSend13376, SMB__or_, 1, (Optr)PSend13379);
    // specialCharacter. 
    Send PSend13381 = new_Send((Optr)self, SMB_specialCharacter, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13382 = new_Send((Optr)PSend13381, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13383 = new_Send((Optr)PSend13380, SMB__logicAnd_, 1, (Optr)PSend13382);
    String string_13384 = new_String(L"|");
    Constant string_13384_Const = new_Constant((Optr)string_13384);
    // asParser. 
    Send PSend13385 = new_Send((Optr)string_13384_Const, SMB_asParser, 0);
    // consume. 
    Send PSend13386 = new_Send((Optr)PSend13385, SMB_consume, 0);
    // |. 
    Send PSend13387 = new_Send((Optr)PSend13383, SMB__or_, 1, (Optr)PSend13386);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13375_Const = new_Constant((Optr)string_13375);
    // named:parsing:. 
    Send PSend13388 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13375_Const, (Optr)PSend13387);
    Array PThreadedCode13374 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13375, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13376, (Optr)&t_push1, (Optr)string_13377, (Optr)&t_send0, (Optr)PSend13378, (Optr)&t_send0, (Optr)PSend13379, (Optr)&t_send1, (Optr)PSend13380, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13381, (Optr)&t_send0, (Optr)PSend13382, (Optr)&t_send1, (Optr)PSend13383, (Optr)&t_push1, (Optr)string_13384, (Optr)&t_send0, (Optr)PSend13385, (Optr)&t_send0, (Optr)PSend13386, (Optr)&t_send1, (Optr)PSend13387, (Optr)&t_send2, (Optr)PSend13388, (Optr)&t_method_return);
    Method PMethod13373 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13374, 1, PSend13388);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod13373, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    String string_13391 = new_String(L"STRING-CONSTANT");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13392 = new_Send((Optr)self, SMB_string, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13391_Const = new_Constant((Optr)string_13391);
    // named:parsing:. 
    Send PSend13393 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13391_Const, (Optr)PSend13392);
    Array PThreadedCode13390 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13391, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13392, (Optr)&t_send2, (Optr)PSend13393, (Optr)&t_method_return);
    Method PMethod13389 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13390, 1, PSend13393);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod13389, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeParameterName() {
    Symbol SMB_initializeParameterName = new_Symbol(L"initializeParameterName");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13396 = new_Send((Optr)self, SMB_identifier, 0);
    Array PThreadedCode13395 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13396, (Optr)&t_method_return);
    Method PMethod13394 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13395, 1, PSend13396);
    
    MethodClosure MC_SMB_initializeParameterName = new_MethodClosure((Method)PMethod13394, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeParameterName, MC_SMB_initializeParameterName);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    String string_13399 = new_String(L"KEYWORD-EXPRESSION");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13400 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13401 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    // bracketIndexExpression. 
    Send PSend13402 = new_Send((Optr)self, SMB_bracketIndexExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13403 = new_Send((Optr)PSend13401, SMB__or_, 1, (Optr)PSend13402);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13404 = new_Send((Optr)PSend13400, SMB__and_, 1, (Optr)PSend13403);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13399_Const = new_Constant((Optr)string_13399);
    // named:parsing:. 
    Send PSend13405 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13399_Const, (Optr)PSend13404);
    Array PThreadedCode13398 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13399, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13400, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13401, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13402, (Optr)&t_send1, (Optr)PSend13403, (Optr)&t_send1, (Optr)PSend13404, (Optr)&t_send2, (Optr)PSend13405, (Optr)&t_method_return);
    Method PMethod13397 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13398, 1, PSend13405);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod13397, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    String string_13408 = new_String(L"BRACKET-INDEX-EXPRESSION");
    String string_13409 = new_String(L"[");
    Constant string_13409_Const = new_Constant((Optr)string_13409);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13410 = new_Send((Optr)string_13409_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13411 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13412 = new_Send((Optr)PSend13410, SMB__and_, 1, (Optr)PSend13411);
    String string_13413 = new_String(L"]");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13413_Const = new_Constant((Optr)string_13413);
    // <&. 
    Send PSend13414 = new_Send((Optr)PSend13412, SMB__lt__and_, 1, (Optr)string_13413_Const);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend13415 = new_Send((Optr)self, SMB_assignmentOp, 0);
    // expression. 
    Send PSend13416 = new_Send((Optr)self, SMB_expression, 0);
    // &. 
    Send PSend13417 = new_Send((Optr)PSend13415, SMB__and_, 1, (Optr)PSend13416);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13418 = new_Send((Optr)PSend13417, SMB_optional, 0);
    // <&. 
    Send PSend13419 = new_Send((Optr)PSend13414, SMB__lt__and_, 1, (Optr)PSend13418);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13408_Const = new_Constant((Optr)string_13408);
    // named:parsing:. 
    Send PSend13420 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13408_Const, (Optr)PSend13419);
    Array PThreadedCode13407 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13408, (Optr)&t_push1, (Optr)string_13409, (Optr)&t_send0, (Optr)PSend13410, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13411, (Optr)&t_send1, (Optr)PSend13412, (Optr)&t_push1, (Optr)string_13413, (Optr)&t_send1, (Optr)PSend13414, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13415, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13416, (Optr)&t_send1, (Optr)PSend13417, (Optr)&t_send0, (Optr)PSend13418, (Optr)&t_send1, (Optr)PSend13419, (Optr)&t_send2, (Optr)PSend13420, (Optr)&t_method_return);
    Method PMethod13406 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13407, 1, PSend13420);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod13406, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    // preStoreBinaryObjectDescription. 
    Send PSend13423 = new_Send((Optr)self, SMB_preStoreBinaryObjectDescription, 0);
    Symbol  SMB_binaryExpression = new_Symbol(L"binaryExpression");
    String string_13424 = new_String(L"BINARY-EXPRESSION");
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13425 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13426 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13427 = new_Send((Optr)PSend13425, SMB__and_, 1, (Optr)PSend13426);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13428 = new_Send((Optr)PSend13427, SMB_plus, 0);
    // unaryObjectDescription. 
    Send PSend13429 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    // &. 
    Send PSend13430 = new_Send((Optr)PSend13428, SMB__and_, 1, (Optr)PSend13429);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13424_Const = new_Constant((Optr)string_13424);
    // named:parsing:. 
    Send PSend13431 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13424_Const, (Optr)PSend13430);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryExpression_Const = new_Constant((Optr)SMB_binaryExpression);
    // at:ifAbsentPut:. 
    Send PSend13432 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryExpression_Const, (Optr)PSend13431);
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    // injectBinaryObjectDescription. 
    Send PSend13433 = new_Send((Optr)self, SMB_injectBinaryObjectDescription, 0);
    // binaryExpression. 
    Send PSend13434 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Array PThreadedCode13422 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13423, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryExpression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13424, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13425, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13426, (Optr)&t_send1, (Optr)PSend13427, (Optr)&t_send0, (Optr)PSend13428, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13429, (Optr)&t_send1, (Optr)PSend13430, (Optr)&t_send2, (Optr)PSend13431, (Optr)&t_send2, (Optr)PSend13432, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13433, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13434, (Optr)&t_method_return);
    Method PMethod13421 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13422, 4, PSend13423, PSend13432, PSend13433, PSend13434);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod13421, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    String string_13437 = new_String(L"SCOPED-EXPRESSION");
    String string_13438 = new_String(L"(");
    Constant string_13438_Const = new_Constant((Optr)string_13438);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13439 = new_Send((Optr)string_13438_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13440 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13441 = new_Send((Optr)PSend13439, SMB__and_, 1, (Optr)PSend13440);
    String string_13442 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13442_Const = new_Constant((Optr)string_13442);
    // <&. 
    Send PSend13443 = new_Send((Optr)PSend13441, SMB__lt__and_, 1, (Optr)string_13442_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13437_Const = new_Constant((Optr)string_13437);
    // named:parsing:. 
    Send PSend13444 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13437_Const, (Optr)PSend13443);
    Array PThreadedCode13436 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13437, (Optr)&t_push1, (Optr)string_13438, (Optr)&t_send0, (Optr)PSend13439, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13440, (Optr)&t_send1, (Optr)PSend13441, (Optr)&t_push1, (Optr)string_13442, (Optr)&t_send1, (Optr)PSend13443, (Optr)&t_send2, (Optr)PSend13444, (Optr)&t_method_return);
    Method PMethod13435 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13436, 1, PSend13444);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod13435, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    String string_13447 = new_String(L"CHARACTER-CONSTANT");
    String string_13448 = new_String(L"$");
    Constant string_13448_Const = new_Constant((Optr)string_13448);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13449 = new_Send((Optr)string_13448_Const, SMB_asParser, 0);
    Symbol SMB_character = new_Symbol(L"character");
    // character. 
    Send PSend13450 = new_Send((Optr)self, SMB_character, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13451 = new_Send((Optr)PSend13449, SMB__logicAnd_, 1, (Optr)PSend13450);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13447_Const = new_Constant((Optr)string_13447);
    // named:parsing:. 
    Send PSend13452 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13447_Const, (Optr)PSend13451);
    Array PThreadedCode13446 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13447, (Optr)&t_push1, (Optr)string_13448, (Optr)&t_send0, (Optr)PSend13449, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13450, (Optr)&t_send1, (Optr)PSend13451, (Optr)&t_send2, (Optr)PSend13452, (Optr)&t_method_return);
    Method PMethod13445 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13446, 1, PSend13452);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod13445, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    String string_13455 = new_String(L"NUMBER-FORMAT");
    String string_13456 = new_String(L"-");
    Constant string_13456_Const = new_Constant((Optr)string_13456);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13457 = new_Send((Optr)string_13456_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13458 = new_Send((Optr)PSend13457, SMB_consume, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13459 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13460 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13461 = new_Send((Optr)PSend13459, SMB__or_, 1, (Optr)PSend13460);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13462 = new_Send((Optr)PSend13461, SMB_strongPlus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13463 = new_Send((Optr)PSend13458, SMB__and_, 1, (Optr)PSend13462);
    // decimalDigit. 
    Send PSend13464 = new_Send((Optr)self, SMB_decimalDigit, 0);
    // uppercase. 
    Send PSend13465 = new_Send((Optr)self, SMB_uppercase, 0);
    // |. 
    Send PSend13466 = new_Send((Optr)PSend13464, SMB__or_, 1, (Optr)PSend13465);
    // strongPlus. 
    Send PSend13467 = new_Send((Optr)PSend13466, SMB_strongPlus, 0);
    // |. 
    Send PSend13468 = new_Send((Optr)PSend13463, SMB__or_, 1, (Optr)PSend13467);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13455_Const = new_Constant((Optr)string_13455);
    // named:parsing:. 
    Send PSend13469 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13455_Const, (Optr)PSend13468);
    Array PThreadedCode13454 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13455, (Optr)&t_push1, (Optr)string_13456, (Optr)&t_send0, (Optr)PSend13457, (Optr)&t_send0, (Optr)PSend13458, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13459, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13460, (Optr)&t_send1, (Optr)PSend13461, (Optr)&t_send0, (Optr)PSend13462, (Optr)&t_send1, (Optr)PSend13463, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13464, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13465, (Optr)&t_send1, (Optr)PSend13466, (Optr)&t_send0, (Optr)PSend13467, (Optr)&t_send1, (Optr)PSend13468, (Optr)&t_send2, (Optr)PSend13469, (Optr)&t_method_return);
    Method PMethod13453 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13454, 1, PSend13469);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod13453, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    String string_13472 = new_String(L"METHOD");
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend13473 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_messagePattern = new_Symbol(L"messagePattern");
    // messagePattern. 
    Send PSend13474 = new_Send((Optr)self, SMB_messagePattern, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13475 = new_Send((Optr)PSend13473, SMB__and_, 1, (Optr)PSend13474);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13476 = new_Send((Optr)self, SMB_annotations, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13477 = new_Send((Optr)PSend13475, SMB__lt__and_, 1, (Optr)PSend13476);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13478 = new_Send((Optr)self, SMB_temporaries, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13479 = new_Send((Optr)PSend13478, SMB_optional, 0);
    // <&. 
    Send PSend13480 = new_Send((Optr)PSend13477, SMB__lt__and_, 1, (Optr)PSend13479);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13481 = new_Send((Optr)self, SMB_statements, 0);
    // <&. 
    Send PSend13482 = new_Send((Optr)PSend13480, SMB__lt__and_, 1, (Optr)PSend13481);
    // separator. 
    Send PSend13483 = new_Send((Optr)self, SMB_separator, 0);
    // <&. 
    Send PSend13484 = new_Send((Optr)PSend13482, SMB__lt__and_, 1, (Optr)PSend13483);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13485 = new_Send((Optr)PSend13484, SMB_end, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13472_Const = new_Constant((Optr)string_13472);
    // named:parsing:. 
    Send PSend13486 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13472_Const, (Optr)PSend13485);
    // separator. 
    Send PSend13487 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_separator_ = new_Symbol(L"separator:");
    // separator:. 
    Send PSend13488 = new_Send((Optr)PSend13486, SMB_separator_, 1, (Optr)PSend13487);
    Array PThreadedCode13471 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13472, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13473, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13474, (Optr)&t_send1, (Optr)PSend13475, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13476, (Optr)&t_send1, (Optr)PSend13477, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13478, (Optr)&t_send0, (Optr)PSend13479, (Optr)&t_send1, (Optr)PSend13480, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13481, (Optr)&t_send1, (Optr)PSend13482, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13483, (Optr)&t_send1, (Optr)PSend13484, (Optr)&t_send0, (Optr)PSend13485, (Optr)&t_send2, (Optr)PSend13486, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13487, (Optr)&t_send1, (Optr)PSend13488, (Optr)&t_method_return);
    Method PMethod13470 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13471, 1, PSend13488);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod13470, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    String string_13491 = new_String(L"UNARY-MESSAGE-DEFINITION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13492 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13491_Const = new_Constant((Optr)string_13491);
    // named:parsing:. 
    Send PSend13493 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13491_Const, (Optr)PSend13492);
    Array PThreadedCode13490 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13491, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13492, (Optr)&t_send2, (Optr)PSend13493, (Optr)&t_method_return);
    Method PMethod13489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13490, 1, PSend13493);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod13489, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_preStorePrimary() {
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    Symbol  SMB_primary = new_Symbol(L"primary");
    String string_13498 = new_String(L"PRIMARY");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13498_Const = new_Constant((Optr)string_13498);
    // named:. 
    Send PSend13499 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13498_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13500 = new_Send((Optr)PSend13499, SMB_memo, 0);
    Array PThreadedCode13497 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13498, (Optr)&t_send1, (Optr)PSend13499, (Optr)&t_send0, (Optr)PSend13500, (Optr)&t_block_return);
    Block PBlock13496 = new_Block_with(empty_Array, empty_Array, PThreadedCode13497, 1, PSend13500);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_primary_Const = new_Constant((Optr)SMB_primary);
    // at:ifAbsentPut:. 
    Send PSend13501 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_primary_Const, (Optr)PBlock13496);
    Array PThreadedCode13495 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_primary, (Optr)&t_push_closure, (Optr)PBlock13496, (Optr)&t_send2, (Optr)PSend13501, (Optr)&t_method_return);
    Method PMethod13494 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13495, 1, PSend13501);
    
    MethodClosure MC_SMB_preStorePrimary = new_MethodClosure((Method)PMethod13494, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStorePrimary, MC_SMB_preStorePrimary);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    String string_13504 = new_String(L"KEYWORD");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13505 = new_Send((Optr)self, SMB_identifierBody, 0);
    String string_13506 = new_String(L":");
    Constant string_13506_Const = new_Constant((Optr)string_13506);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13507 = new_Send((Optr)string_13506_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13508 = new_Send((Optr)PSend13507, SMB_consume, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13509 = new_Send((Optr)PSend13505, SMB__logicAnd_, 1, (Optr)PSend13508);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13504_Const = new_Constant((Optr)string_13504);
    // named:parsing:. 
    Send PSend13510 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13504_Const, (Optr)PSend13509);
    Array PThreadedCode13503 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13504, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13505, (Optr)&t_push1, (Optr)string_13506, (Optr)&t_send0, (Optr)PSend13507, (Optr)&t_send0, (Optr)PSend13508, (Optr)&t_send1, (Optr)PSend13509, (Optr)&t_send2, (Optr)PSend13510, (Optr)&t_method_return);
    Method PMethod13502 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13503, 1, PSend13510);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod13502, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeUppercase() {
    Symbol SMB_initializeUppercase = new_Symbol(L"initializeUppercase");
    String string_13513 = new_String(L"A-Z");
    Constant string_13513_Const = new_Constant((Optr)string_13513);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13514 = new_Send((Optr)string_13513_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13512 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13513, (Optr)&t_send0, (Optr)PSend13514, (Optr)&t_method_return);
    Method PMethod13511 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13512, 1, PSend13514);
    
    MethodClosure MC_SMB_initializeUppercase = new_MethodClosure((Method)PMethod13511, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUppercase, MC_SMB_initializeUppercase);
}


static void init_SMB_preStoreMessageExpression() {
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    Symbol  SMB_messageExpression = new_Symbol(L"messageExpression");
    String string_13519 = new_String(L"MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13519_Const = new_Constant((Optr)string_13519);
    // named:. 
    Send PSend13520 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13519_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13521 = new_Send((Optr)PSend13520, SMB_memo, 0);
    Array PThreadedCode13518 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13519, (Optr)&t_send1, (Optr)PSend13520, (Optr)&t_send0, (Optr)PSend13521, (Optr)&t_block_return);
    Block PBlock13517 = new_Block_with(empty_Array, empty_Array, PThreadedCode13518, 1, PSend13521);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_messageExpression_Const = new_Constant((Optr)SMB_messageExpression);
    // at:ifAbsentPut:. 
    Send PSend13522 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_messageExpression_Const, (Optr)PBlock13517);
    Array PThreadedCode13516 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_messageExpression, (Optr)&t_push_closure, (Optr)PBlock13517, (Optr)&t_send2, (Optr)PSend13522, (Optr)&t_method_return);
    Method PMethod13515 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13516, 1, PSend13522);
    
    MethodClosure MC_SMB_preStoreMessageExpression = new_MethodClosure((Method)PMethod13515, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreMessageExpression, MC_SMB_preStoreMessageExpression);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    String string_13525 = new_String(L"UNARY-EXPRESSION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13526 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13527 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13528 = new_Send((Optr)PSend13527, SMB_plus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13529 = new_Send((Optr)PSend13526, SMB__and_, 1, (Optr)PSend13528);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13525_Const = new_Constant((Optr)string_13525);
    // named:parsing:. 
    Send PSend13530 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13525_Const, (Optr)PSend13529);
    Array PThreadedCode13524 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13525, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13526, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13527, (Optr)&t_send0, (Optr)PSend13528, (Optr)&t_send1, (Optr)PSend13529, (Optr)&t_send2, (Optr)PSend13530, (Optr)&t_method_return);
    Method PMethod13523 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13524, 1, PSend13530);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod13523, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeSymbol() {
    Symbol SMB_initializeSymbol = new_Symbol(L"initializeSymbol");
    String string_13533 = new_String(L"SYMBOL");
    Symbol SMB_symbolKeywords = new_Symbol(L"symbolKeywords");
    // symbolKeywords. 
    Send PSend13534 = new_Send((Optr)self, SMB_symbolKeywords, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13535 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13536 = new_Send((Optr)PSend13534, SMB__or_, 1, (Optr)PSend13535);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13537 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13538 = new_Send((Optr)PSend13536, SMB__lt__equals_, 1, (Optr)PSend13537);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13539 = new_Send((Optr)self, SMB_string, 0);
    // <=. 
    Send PSend13540 = new_Send((Optr)PSend13538, SMB__lt__equals_, 1, (Optr)PSend13539);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13533_Const = new_Constant((Optr)string_13533);
    // named:parsing:. 
    Send PSend13541 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13533_Const, (Optr)PSend13540);
    Array PThreadedCode13532 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13533, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13534, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13535, (Optr)&t_send1, (Optr)PSend13536, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13537, (Optr)&t_send1, (Optr)PSend13538, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13539, (Optr)&t_send1, (Optr)PSend13540, (Optr)&t_send2, (Optr)PSend13541, (Optr)&t_method_return);
    Method PMethod13531 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13532, 1, PSend13541);
    
    MethodClosure MC_SMB_initializeSymbol = new_MethodClosure((Method)PMethod13531, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbol, MC_SMB_initializeSymbol);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    String string_13544 = new_String(L"PRIMARY-VARIABLE");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13545 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13546 = new_String(L".");
    Constant string_13546_Const = new_Constant((Optr)string_13546);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13547 = new_Send((Optr)string_13546_Const, SMB_asParser, 0);
    // identifier. 
    Send PSend13548 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13549 = new_Send((Optr)PSend13547, SMB__logicAnd_, 1, (Optr)PSend13548);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13550 = new_Send((Optr)PSend13549, SMB_strongTimes, 0);
    // &&. 
    Send PSend13551 = new_Send((Optr)PSend13545, SMB__logicAnd_, 1, (Optr)PSend13550);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13544_Const = new_Constant((Optr)string_13544);
    // named:parsing:. 
    Send PSend13552 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13544_Const, (Optr)PSend13551);
    Array PThreadedCode13543 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13544, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13545, (Optr)&t_push1, (Optr)string_13546, (Optr)&t_send0, (Optr)PSend13547, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13548, (Optr)&t_send1, (Optr)PSend13549, (Optr)&t_send0, (Optr)PSend13550, (Optr)&t_send1, (Optr)PSend13551, (Optr)&t_send2, (Optr)PSend13552, (Optr)&t_method_return);
    Method PMethod13542 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13543, 1, PSend13552);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod13542, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    String string_13555 = new_String(L"KEYWORDS-ARGUMENTS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13556 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13557 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13558 = new_Send((Optr)PSend13556, SMB__and_, 1, (Optr)PSend13557);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13559 = new_Send((Optr)PSend13558, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13555_Const = new_Constant((Optr)string_13555);
    // named:parsing:. 
    Send PSend13560 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13555_Const, (Optr)PSend13559);
    Array PThreadedCode13554 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13555, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13556, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13557, (Optr)&t_send1, (Optr)PSend13558, (Optr)&t_send0, (Optr)PSend13559, (Optr)&t_send2, (Optr)PSend13560, (Optr)&t_method_return);
    Method PMethod13553 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13554, 1, PSend13560);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod13553, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_preStoreBracketIndexExpression() {
    Symbol SMB_preStoreBracketIndexExpression = new_Symbol(L"preStoreBracketIndexExpression");
    Symbol  SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    String string_13565 = new_String(L"BRACKET-INDEX-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13565_Const = new_Constant((Optr)string_13565);
    // named:. 
    Send PSend13566 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13565_Const);
    Array PThreadedCode13564 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13565, (Optr)&t_send1, (Optr)PSend13566, (Optr)&t_block_return);
    Block PBlock13563 = new_Block_with(empty_Array, empty_Array, PThreadedCode13564, 1, PSend13566);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_bracketIndexExpression_Const = new_Constant((Optr)SMB_bracketIndexExpression);
    // at:ifAbsentPut:. 
    Send PSend13567 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_bracketIndexExpression_Const, (Optr)PBlock13563);
    Array PThreadedCode13562 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_bracketIndexExpression, (Optr)&t_push_closure, (Optr)PBlock13563, (Optr)&t_send2, (Optr)PSend13567, (Optr)&t_method_return);
    Method PMethod13561 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13562, 1, PSend13567);
    
    MethodClosure MC_SMB_preStoreBracketIndexExpression = new_MethodClosure((Method)PMethod13561, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBracketIndexExpression, MC_SMB_preStoreBracketIndexExpression);
}


static void init_SMB_initializePrimary() {
    Symbol SMB_initializePrimary = new_Symbol(L"initializePrimary");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13570 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13571 = new_Send((Optr)self, SMB_primary, 0);
    Array PThreadedCode13569 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13570, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13571, (Optr)&t_method_return);
    Method PMethod13568 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13569, 2, PSend13570, PSend13571);
    
    MethodClosure MC_SMB_initializePrimary = new_MethodClosure((Method)PMethod13568, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimary, MC_SMB_initializePrimary);
}


static void init_SMB_parseMethod_() {
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray13573 = new_Array_with(1, (Optr)VAR_method_0_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend13575 = new_Send((Optr)self, SMB_method, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13576 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_method_0_0, (Optr)PSend13575);
    Array PThreadedCode13574 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13575, (Optr)&t_send2, (Optr)PSend13576, (Optr)&t_method_return);
    Method PMethod13572 = new_Method_with(PArray13573, empty_Array, empty_Array, PThreadedCode13574, 1, PSend13576);
    
    MethodClosure MC_SMB_parseMethod_ = new_MethodClosure((Method)PMethod13572, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseMethod_, MC_SMB_parseMethod_);
}


static void init_SMB_initializeDecimalDigit() {
    Symbol SMB_initializeDecimalDigit = new_Symbol(L"initializeDecimalDigit");
    String string_13579 = new_String(L"0-9");
    Constant string_13579_Const = new_Constant((Optr)string_13579);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13580 = new_Send((Optr)string_13579_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13578 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13579, (Optr)&t_send0, (Optr)PSend13580, (Optr)&t_method_return);
    Method PMethod13577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13578, 1, PSend13580);
    
    MethodClosure MC_SMB_initializeDecimalDigit = new_MethodClosure((Method)PMethod13577, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeDecimalDigit, MC_SMB_initializeDecimalDigit);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    String string_13583 = new_String(L"TEMPORARIES");
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13584 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend13585 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13586 = new_Send((Optr)PSend13585, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13587 = new_Send((Optr)PSend13584, SMB__and_, 1, (Optr)PSend13586);
    // bar. 
    Send PSend13588 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13589 = new_Send((Optr)PSend13587, SMB__lt__and_, 1, (Optr)PSend13588);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13583_Const = new_Constant((Optr)string_13583);
    // named:parsing:. 
    Send PSend13590 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13583_Const, (Optr)PSend13589);
    Array PThreadedCode13582 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13583, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13584, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13585, (Optr)&t_send0, (Optr)PSend13586, (Optr)&t_send1, (Optr)PSend13587, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13588, (Optr)&t_send1, (Optr)PSend13589, (Optr)&t_send2, (Optr)PSend13590, (Optr)&t_method_return);
    Method PMethod13581 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13582, 1, PSend13590);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod13581, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    String string_13593 = new_String(L"KEYWORD-MESSAGE-EXPRESSION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13594 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13595 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13596 = new_Send((Optr)PSend13594, SMB__and_, 1, (Optr)PSend13595);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13597 = new_Send((Optr)PSend13596, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13593_Const = new_Constant((Optr)string_13593);
    // named:parsing:. 
    Send PSend13598 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13593_Const, (Optr)PSend13597);
    Array PThreadedCode13592 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13593, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13594, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13595, (Optr)&t_send1, (Optr)PSend13596, (Optr)&t_send0, (Optr)PSend13597, (Optr)&t_send2, (Optr)PSend13598, (Optr)&t_method_return);
    Method PMethod13591 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13592, 1, PSend13598);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod13591, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    String string_13601 = new_String(L"SYMBOL-KEYWORDS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13602 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13603 = new_Send((Optr)PSend13602, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13601_Const = new_Constant((Optr)string_13601);
    // named:parsing:. 
    Send PSend13604 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13601_Const, (Optr)PSend13603);
    Array PThreadedCode13600 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13601, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13602, (Optr)&t_send0, (Optr)PSend13603, (Optr)&t_send2, (Optr)PSend13604, (Optr)&t_method_return);
    Method PMethod13599 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13600, 1, PSend13604);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod13599, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeSpecialCharacter() {
    Symbol SMB_initializeSpecialCharacter = new_Symbol(L"initializeSpecialCharacter");
    String string_13607 = new_String(L"+*/\\~<>=@%?!&`,");
    Constant string_13607_Const = new_Constant((Optr)string_13607);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13608 = new_Send((Optr)string_13607_Const, SMB_asPEGChoice, 0);
    Array PThreadedCode13606 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13607, (Optr)&t_send0, (Optr)PSend13608, (Optr)&t_method_return);
    Method PMethod13605 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13606, 1, PSend13608);
    
    MethodClosure MC_SMB_initializeSpecialCharacter = new_MethodClosure((Method)PMethod13605, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSpecialCharacter, MC_SMB_initializeSpecialCharacter);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Symbol  SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    String string_13613 = new_String(L"CASCADED-MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13613_Const = new_Constant((Optr)string_13613);
    // named:. 
    Send PSend13614 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13613_Const);
    Array PThreadedCode13612 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13613, (Optr)&t_send1, (Optr)PSend13614, (Optr)&t_block_return);
    Block PBlock13611 = new_Block_with(empty_Array, empty_Array, PThreadedCode13612, 1, PSend13614);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_cascadedMessageExpression_Const = new_Constant((Optr)SMB_cascadedMessageExpression);
    // at:ifAbsentPut:. 
    Send PSend13615 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_cascadedMessageExpression_Const, (Optr)PBlock13611);
    Array PThreadedCode13610 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_cascadedMessageExpression, (Optr)&t_push_closure, (Optr)PBlock13611, (Optr)&t_send2, (Optr)PSend13615, (Optr)&t_method_return);
    Method PMethod13609 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13610, 1, PSend13615);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod13609, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_parseStatements_() {
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    Variable VAR_statements_0_0 = new_Variable_named(L"statements", 0);
    Array PArray13617 = new_Array_with(1, (Optr)VAR_statements_0_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13619 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13620 = new_Send((Optr)PSend13619, SMB_end, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13621 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_statements_0_0, (Optr)PSend13620);
    Array PThreadedCode13618 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13619, (Optr)&t_send0, (Optr)PSend13620, (Optr)&t_send2, (Optr)PSend13621, (Optr)&t_method_return);
    Method PMethod13616 = new_Method_with(PArray13617, empty_Array, empty_Array, PThreadedCode13618, 1, PSend13621);
    
    MethodClosure MC_SMB_parseStatements_ = new_MethodClosure((Method)PMethod13616, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseStatements_, MC_SMB_parseStatements_);
}


static void init_SMB_preStoreBinaryObjectDescription() {
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    Symbol  SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    String string_13626 = new_String(L"BINARY-OBJECT-DESCRIPTION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13626_Const = new_Constant((Optr)string_13626);
    // named:. 
    Send PSend13627 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13626_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13628 = new_Send((Optr)PSend13627, SMB_memo, 0);
    Array PThreadedCode13625 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13626, (Optr)&t_send1, (Optr)PSend13627, (Optr)&t_send0, (Optr)PSend13628, (Optr)&t_block_return);
    Block PBlock13624 = new_Block_with(empty_Array, empty_Array, PThreadedCode13625, 1, PSend13628);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryObjectDescription_Const = new_Constant((Optr)SMB_binaryObjectDescription);
    // at:ifAbsentPut:. 
    Send PSend13629 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryObjectDescription_Const, (Optr)PBlock13624);
    Array PThreadedCode13623 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryObjectDescription, (Optr)&t_push_closure, (Optr)PBlock13624, (Optr)&t_send2, (Optr)PSend13629, (Optr)&t_method_return);
    Method PMethod13622 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13623, 1, PSend13629);
    
    MethodClosure MC_SMB_preStoreBinaryObjectDescription = new_MethodClosure((Method)PMethod13622, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBinaryObjectDescription, MC_SMB_preStoreBinaryObjectDescription);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    String string_13632 = new_String(L"BLOCK");
    String string_13633 = new_String(L"[");
    Constant string_13633_Const = new_Constant((Optr)string_13633);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13634 = new_Send((Optr)string_13633_Const, SMB_asParser, 0);
    Symbol SMB_blockArguments = new_Symbol(L"blockArguments");
    // blockArguments. 
    Send PSend13635 = new_Send((Optr)self, SMB_blockArguments, 0);
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13636 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13637 = new_Send((Optr)PSend13635, SMB__and_, 1, (Optr)PSend13636);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13638 = new_Send((Optr)PSend13637, SMB_optional, 0);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13639 = new_Send((Optr)self, SMB_temporaries, 0);
    // optional. 
    Send PSend13640 = new_Send((Optr)PSend13639, SMB_optional, 0);
    // &. 
    Send PSend13641 = new_Send((Optr)PSend13638, SMB__and_, 1, (Optr)PSend13640);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13642 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13643 = new_Send((Optr)PSend13641, SMB__lt__and_, 1, (Optr)PSend13642);
    String string_13644 = new_String(L"]");
    Constant string_13644_Const = new_Constant((Optr)string_13644);
    // <&. 
    Send PSend13645 = new_Send((Optr)PSend13643, SMB__lt__and_, 1, (Optr)string_13644_Const);
    // blockArguments. 
    Send PSend13646 = new_Send((Optr)self, SMB_blockArguments, 0);
    // optional. 
    Send PSend13647 = new_Send((Optr)PSend13646, SMB_optional, 0);
    String string_13648 = new_String(L"]");
    Constant string_13648_Const = new_Constant((Optr)string_13648);
    // &. 
    Send PSend13649 = new_Send((Optr)PSend13647, SMB__and_, 1, (Optr)string_13648_Const);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13650 = new_Send((Optr)PSend13645, SMB__or_, 1, (Optr)PSend13649);
    // &. 
    Send PSend13651 = new_Send((Optr)PSend13634, SMB__and_, 1, (Optr)PSend13650);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13632_Const = new_Constant((Optr)string_13632);
    // named:parsing:. 
    Send PSend13652 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13632_Const, (Optr)PSend13651);
    Array PThreadedCode13631 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13632, (Optr)&t_push1, (Optr)string_13633, (Optr)&t_send0, (Optr)PSend13634, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13635, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13636, (Optr)&t_send1, (Optr)PSend13637, (Optr)&t_send0, (Optr)PSend13638, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13639, (Optr)&t_send0, (Optr)PSend13640, (Optr)&t_send1, (Optr)PSend13641, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13642, (Optr)&t_send1, (Optr)PSend13643, (Optr)&t_push1, (Optr)string_13644, (Optr)&t_send1, (Optr)PSend13645, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13646, (Optr)&t_send0, (Optr)PSend13647, (Optr)&t_push1, (Optr)string_13648, (Optr)&t_send1, (Optr)PSend13649, (Optr)&t_send1, (Optr)PSend13650, (Optr)&t_send1, (Optr)PSend13651, (Optr)&t_send2, (Optr)PSend13652, (Optr)&t_method_return);
    Method PMethod13630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13631, 1, PSend13652);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod13630, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    String string_13655 = new_String(L"IDENTIFIER");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13656 = new_Send((Optr)self, SMB_identifierBody, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13655_Const = new_Constant((Optr)string_13655);
    // named:parsing:. 
    Send PSend13657 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13655_Const, (Optr)PSend13656);
    Array PThreadedCode13654 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13655, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13656, (Optr)&t_send2, (Optr)PSend13657, (Optr)&t_method_return);
    Method PMethod13653 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13654, 1, PSend13657);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod13653, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_injectCascadedMessageExpression() {
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13660 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13661 = new_Send((Optr)self, SMB_messageExpression, 0);
    String string_13662 = new_String(L";");
    Constant string_13662_Const = new_Constant((Optr)string_13662);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13663 = new_Send((Optr)string_13662_Const, SMB_asParser, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13664 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_binaryMessageExpression = new_Symbol(L"binaryMessageExpression");
    // binaryMessageExpression. 
    Send PSend13665 = new_Send((Optr)self, SMB_binaryMessageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13666 = new_Send((Optr)PSend13664, SMB__or_, 1, (Optr)PSend13665);
    Symbol SMB_unaryMessageExpression = new_Symbol(L"unaryMessageExpression");
    // unaryMessageExpression. 
    Send PSend13667 = new_Send((Optr)self, SMB_unaryMessageExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13668 = new_Send((Optr)PSend13666, SMB__lt__equals_, 1, (Optr)PSend13667);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13669 = new_Send((Optr)PSend13663, SMB__and_, 1, (Optr)PSend13668);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13670 = new_Send((Optr)PSend13669, SMB_plus, 0);
    // &. 
    Send PSend13671 = new_Send((Optr)PSend13661, SMB__and_, 1, (Optr)PSend13670);
    // <=. 
    Send PSend13672 = new_Send((Optr)PSend13660, SMB__lt__equals_, 1, (Optr)PSend13671);
    Array PThreadedCode13659 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13660, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13661, (Optr)&t_push1, (Optr)string_13662, (Optr)&t_send0, (Optr)PSend13663, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13664, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13665, (Optr)&t_send1, (Optr)PSend13666, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13667, (Optr)&t_send1, (Optr)PSend13668, (Optr)&t_send1, (Optr)PSend13669, (Optr)&t_send0, (Optr)PSend13670, (Optr)&t_send1, (Optr)PSend13671, (Optr)&t_send1, (Optr)PSend13672, (Optr)&t_method_return);
    Method PMethod13658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13659, 1, PSend13672);
    
    MethodClosure MC_SMB_injectCascadedMessageExpression = new_MethodClosure((Method)PMethod13658, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectCascadedMessageExpression, MC_SMB_injectCascadedMessageExpression);
}


static void init_SMB_initializeCascadedMessageExpression() {
    Symbol SMB_initializeCascadedMessageExpression = new_Symbol(L"initializeCascadedMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13675 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13676 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Array PThreadedCode13674 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13675, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13676, (Optr)&t_method_return);
    Method PMethod13673 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13674, 2, PSend13675, PSend13676);
    
    MethodClosure MC_SMB_initializeCascadedMessageExpression = new_MethodClosure((Method)PMethod13673, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCascadedMessageExpression, MC_SMB_initializeCascadedMessageExpression);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    String string_13679 = new_String(L"RADIX-NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13680 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13681 = new_String(L"r");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13681_Const = new_Constant((Optr)string_13681);
    // &. 
    Send PSend13682 = new_Send((Optr)PSend13680, SMB__and_, 1, (Optr)string_13681_Const);
    // numberFormat. 
    Send PSend13683 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13684 = new_Send((Optr)PSend13682, SMB__lt__and_, 1, (Optr)PSend13683);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13679_Const = new_Constant((Optr)string_13679);
    // named:parsing:. 
    Send PSend13685 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13679_Const, (Optr)PSend13684);
    Array PThreadedCode13678 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13679, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13680, (Optr)&t_push1, (Optr)string_13681, (Optr)&t_send1, (Optr)PSend13682, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13683, (Optr)&t_send1, (Optr)PSend13684, (Optr)&t_send2, (Optr)PSend13685, (Optr)&t_method_return);
    Method PMethod13677 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13678, 1, PSend13685);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod13677, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    String string_13688 = new_String(L"SYMBOL-IN-ARRAY");
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13689 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13688_Const = new_Constant((Optr)string_13688);
    // named:parsing:. 
    Send PSend13690 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13688_Const, (Optr)PSend13689);
    Array PThreadedCode13687 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13688, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13689, (Optr)&t_send2, (Optr)PSend13690, (Optr)&t_method_return);
    Method PMethod13686 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13687, 1, PSend13690);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod13686, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    String string_13693 = new_String(L"STATEMENTS");
    Symbol SMB_subExpression = new_Symbol(L"subExpression");
    // subExpression. 
    Send PSend13694 = new_Send((Optr)self, SMB_subExpression, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13695 = new_Send((Optr)PSend13694, SMB_times, 0);
    Symbol SMB_return = new_Symbol(L"return");
    // return. 
    Send PSend13696 = new_Send((Optr)self, SMB_return, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13697 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13698 = new_Send((Optr)PSend13696, SMB__or_, 1, (Optr)PSend13697);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13699 = new_Send((Optr)PSend13698, SMB_optional, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13700 = new_Send((Optr)PSend13695, SMB__and_, 1, (Optr)PSend13699);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13693_Const = new_Constant((Optr)string_13693);
    // named:parsing:. 
    Send PSend13701 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13693_Const, (Optr)PSend13700);
    Array PThreadedCode13692 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13693, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13694, (Optr)&t_send0, (Optr)PSend13695, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13696, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13697, (Optr)&t_send1, (Optr)PSend13698, (Optr)&t_send0, (Optr)PSend13699, (Optr)&t_send1, (Optr)PSend13700, (Optr)&t_send2, (Optr)PSend13701, (Optr)&t_method_return);
    Method PMethod13691 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13692, 1, PSend13701);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod13691, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    String string_13704 = new_String(L"SYMBOL-CONSTANT");
    String string_13705 = new_String(L"#");
    Constant string_13705_Const = new_Constant((Optr)string_13705);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13706 = new_Send((Optr)string_13705_Const, SMB_asParser, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13707 = new_Send((Optr)PSend13706, SMB_plus, 0);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13708 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13709 = new_Send((Optr)PSend13707, SMB__logicAnd_, 1, (Optr)PSend13708);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13704_Const = new_Constant((Optr)string_13704);
    // named:parsing:. 
    Send PSend13710 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13704_Const, (Optr)PSend13709);
    Array PThreadedCode13703 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13704, (Optr)&t_push1, (Optr)string_13705, (Optr)&t_send0, (Optr)PSend13706, (Optr)&t_send0, (Optr)PSend13707, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13708, (Optr)&t_send1, (Optr)PSend13709, (Optr)&t_send2, (Optr)PSend13710, (Optr)&t_method_return);
    Method PMethod13702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13703, 1, PSend13710);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod13702, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Variable VAR_array_0_0 = new_Variable_named(L"array", 0);
    Array PArray13712 = new_Array_with(1, (Optr)VAR_array_0_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    String string_13716 = new_String(L"ARRAY");
    Constant string_13716_Const = new_Constant((Optr)string_13716);
    // named:. 
    Send PSend13715 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13716_Const);
    Assign PAssign13714 = new_Assign((Optr)VAR_array_0_0, (Optr)PSend13715);
    String string_13717 = new_String(L"(");
    Constant string_13717_Const = new_Constant((Optr)string_13717);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13718 = new_Send((Optr)string_13717_Const, SMB_asParser, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13719 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13720 = new_Send((Optr)self, SMB_stringConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13721 = new_Send((Optr)PSend13719, SMB__or_, 1, (Optr)PSend13720);
    Symbol SMB_symbolInArray = new_Symbol(L"symbolInArray");
    // symbolInArray. 
    Send PSend13722 = new_Send((Optr)self, SMB_symbolInArray, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13723 = new_Send((Optr)PSend13721, SMB__lt__equals_, 1, (Optr)PSend13722);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13724 = new_Send((Optr)self, SMB_symbolConstant, 0);
    // <=. 
    Send PSend13725 = new_Send((Optr)PSend13723, SMB__lt__equals_, 1, (Optr)PSend13724);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13726 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend13727 = new_Send((Optr)PSend13725, SMB__lt__equals_, 1, (Optr)PSend13726);
    // <=. 
    Send PSend13728 = new_Send((Optr)PSend13727, SMB__lt__equals_, 1, (Optr)VAR_array_0_0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13729 = new_Send((Optr)PSend13728, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13730 = new_Send((Optr)PSend13718, SMB__and_, 1, (Optr)PSend13729);
    String string_13731 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13731_Const = new_Constant((Optr)string_13731);
    // <&. 
    Send PSend13732 = new_Send((Optr)PSend13730, SMB__lt__and_, 1, (Optr)string_13731_Const);
    // <=. 
    Send PSend13733 = new_Send((Optr)VAR_array_0_0, SMB__lt__equals_, 1, (Optr)PSend13732);
    Array PThreadedCode13713 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push1, (Optr)PAssign13714, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13716, (Optr)&t_send1, (Optr)PSend13715, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_push1, (Optr)string_13717, (Optr)&t_send0, (Optr)PSend13718, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13719, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13720, (Optr)&t_send1, (Optr)PSend13721, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13722, (Optr)&t_send1, (Optr)PSend13723, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13724, (Optr)&t_send1, (Optr)PSend13725, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13726, (Optr)&t_send1, (Optr)PSend13727, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_send1, (Optr)PSend13728, (Optr)&t_send0, (Optr)PSend13729, (Optr)&t_send1, (Optr)PSend13730, (Optr)&t_push1, (Optr)string_13731, (Optr)&t_send1, (Optr)PSend13732, (Optr)&t_send1, (Optr)PSend13733, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_method_return);
    Method PMethod13711 = new_Method_with(empty_Array, PArray13712, empty_Array, PThreadedCode13713, 3, PAssign13714, PSend13733, VAR_array_0_0);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod13711, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    String string_13736 = new_String(L"KEYWORD-ANNOTATION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13737 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13738 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13739 = new_Send((Optr)PSend13737, SMB__and_, 1, (Optr)PSend13738);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13740 = new_Send((Optr)PSend13739, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13736_Const = new_Constant((Optr)string_13736);
    // named:parsing:. 
    Send PSend13741 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13736_Const, (Optr)PSend13740);
    Array PThreadedCode13735 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13736, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13737, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13738, (Optr)&t_send1, (Optr)PSend13739, (Optr)&t_send0, (Optr)PSend13740, (Optr)&t_send2, (Optr)PSend13741, (Optr)&t_method_return);
    Method PMethod13734 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13735, 1, PSend13741);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod13734, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    // preStorePrimary. 
    Send PSend13744 = new_Send((Optr)self, SMB_preStorePrimary, 0);
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    // preStoreMessageExpression. 
    Send PSend13745 = new_Send((Optr)self, SMB_preStoreMessageExpression, 0);
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    // preStoreCascadedMessageExpression. 
    Send PSend13746 = new_Send((Optr)self, SMB_preStoreCascadedMessageExpression, 0);
    Symbol  SMB_expression = new_Symbol(L"expression");
    String string_13747 = new_String(L"EXPRESSION");
    Symbol SMB_assignmentExpressions = new_Symbol(L"assignmentExpressions");
    // assignmentExpressions. 
    Send PSend13748 = new_Send((Optr)self, SMB_assignmentExpressions, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13749 = new_Send((Optr)PSend13748, SMB_optional, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13750 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13751 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13752 = new_Send((Optr)PSend13750, SMB__or_, 1, (Optr)PSend13751);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13753 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13754 = new_Send((Optr)PSend13752, SMB__lt__equals_, 1, (Optr)PSend13753);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13755 = new_Send((Optr)PSend13749, SMB__and_, 1, (Optr)PSend13754);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13747_Const = new_Constant((Optr)string_13747);
    // named:parsing:. 
    Send PSend13756 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13747_Const, (Optr)PSend13755);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // at:put:. 
    Send PSend13757 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_put_, 2, (Optr)SMB_expression_Const, (Optr)PSend13756);
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    // injectPrimary. 
    Send PSend13758 = new_Send((Optr)self, SMB_injectPrimary, 0);
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    // injectMessageExpression. 
    Send PSend13759 = new_Send((Optr)self, SMB_injectMessageExpression, 0);
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    // injectCascadedMessageExpression. 
    Send PSend13760 = new_Send((Optr)self, SMB_injectCascadedMessageExpression, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend13761 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode13743 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13744, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13745, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13746, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13747, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13748, (Optr)&t_send0, (Optr)PSend13749, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13750, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13751, (Optr)&t_send1, (Optr)PSend13752, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13753, (Optr)&t_send1, (Optr)PSend13754, (Optr)&t_send1, (Optr)PSend13755, (Optr)&t_send2, (Optr)PSend13756, (Optr)&t_send2, (Optr)PSend13757, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13758, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13759, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13760, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend13761, (Optr)&t_method_return);
    Method PMethod13742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13743, 8, PSend13744, PSend13745, PSend13746, PSend13757, PSend13758, PSend13759, PSend13760, PSend13761);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod13742, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    String string_13764 = new_String(L"FLOAT");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13765 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13766 = new_String(L".");
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Constant string_13766_Const = new_Constant((Optr)string_13766);
    // &&. 
    Send PSend13767 = new_Send((Optr)PSend13765, SMB__logicAnd_, 1, (Optr)string_13766_Const);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13768 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13769 = new_Send((Optr)PSend13768, SMB_strongPlus, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13770 = new_Send((Optr)PSend13767, SMB__lt__and_, 1, (Optr)PSend13769);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13764_Const = new_Constant((Optr)string_13764);
    // named:parsing:. 
    Send PSend13771 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13764_Const, (Optr)PSend13770);
    Array PThreadedCode13763 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13764, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13765, (Optr)&t_push1, (Optr)string_13766, (Optr)&t_send1, (Optr)PSend13767, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13768, (Optr)&t_send0, (Optr)PSend13769, (Optr)&t_send1, (Optr)PSend13770, (Optr)&t_send2, (Optr)PSend13771, (Optr)&t_method_return);
    Method PMethod13762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13763, 1, PSend13771);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod13762, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    String string_13774 = new_String(L"BLOCK-ARGUMENTS");
    String string_13775 = new_String(L":");
    Constant string_13775_Const = new_Constant((Optr)string_13775);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13776 = new_Send((Optr)string_13775_Const, SMB_asParser, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13777 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13778 = new_Send((Optr)PSend13776, SMB__and_, 1, (Optr)PSend13777);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13779 = new_Send((Optr)PSend13778, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13774_Const = new_Constant((Optr)string_13774);
    // named:parsing:. 
    Send PSend13780 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13774_Const, (Optr)PSend13779);
    Array PThreadedCode13773 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13774, (Optr)&t_push1, (Optr)string_13775, (Optr)&t_send0, (Optr)PSend13776, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13777, (Optr)&t_send1, (Optr)PSend13778, (Optr)&t_send0, (Optr)PSend13779, (Optr)&t_send2, (Optr)PSend13780, (Optr)&t_method_return);
    Method PMethod13772 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13773, 1, PSend13780);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod13772, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeCommentFormat() {
    Symbol SMB_initializeCommentFormat = new_Symbol(L"initializeCommentFormat");
    Variable VAR_commentBorder_0_0 = new_Variable_named(L"commentBorder", 0);
    Array PArray13782 = new_Array_with(1, (Optr)VAR_commentBorder_0_0);
    String string_13786 = new_String(L"\"");
    Constant string_13786_Const = new_Constant((Optr)string_13786);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13785 = new_Send((Optr)string_13786_Const, SMB_asParser, 0);
    Assign PAssign13784 = new_Assign((Optr)VAR_commentBorder_0_0, (Optr)PSend13785);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13787 = new_Send((Optr)VAR_commentBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13788 = new_Send((Optr)PSend13787, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13789 = new_Send((Optr)PSend13788, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13790 = new_Send((Optr)VAR_commentBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend13789);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13791 = new_Send((Optr)PSend13790, SMB__lt__and_, 1, (Optr)VAR_commentBorder_0_0);
    Array PThreadedCode13783 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign13784, (Optr)&t_push1, (Optr)string_13786, (Optr)&t_send0, (Optr)PSend13785, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send0, (Optr)PSend13787, (Optr)&t_send0, (Optr)PSend13788, (Optr)&t_send0, (Optr)PSend13789, (Optr)&t_send1, (Optr)PSend13790, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send1, (Optr)PSend13791, (Optr)&t_method_return);
    Method PMethod13781 = new_Method_with(empty_Array, PArray13782, empty_Array, PThreadedCode13783, 2, PAssign13784, PSend13791);
    
    MethodClosure MC_SMB_initializeCommentFormat = new_MethodClosure((Method)PMethod13781, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCommentFormat, MC_SMB_initializeCommentFormat);
}


static void init_SMB_initializeSeparator() {
    Symbol SMB_initializeSeparator = new_Symbol(L"initializeSeparator");
    Super PSuper13794 = new_Super(SMB_initializeSeparator, 0);
    Symbol SMB_commentFormat = new_Symbol(L"commentFormat");
    // commentFormat. 
    Send PSend13795 = new_Send((Optr)self, SMB_commentFormat, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13796 = new_Send((Optr)PSuper13794, SMB__or_, 1, (Optr)PSend13795);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13797 = new_Send((Optr)PSend13796, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13798 = new_Send((Optr)PSend13797, SMB_omit, 0);
    Array PThreadedCode13793 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper13794, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13795, (Optr)&t_send1, (Optr)PSend13796, (Optr)&t_send0, (Optr)PSend13797, (Optr)&t_send0, (Optr)PSend13798, (Optr)&t_method_return);
    Method PMethod13792 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13793, 1, PSend13798);
    
    MethodClosure MC_SMB_initializeSeparator = new_MethodClosure((Method)PMethod13792, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSeparator, MC_SMB_initializeSeparator);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    String string_13801 = new_String(L"BRACE-EXPRESSION");
    String string_13802 = new_String(L"{");
    Constant string_13802_Const = new_Constant((Optr)string_13802);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13803 = new_Send((Optr)string_13802_Const, SMB_asParser, 0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13804 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13805 = new_Send((Optr)PSend13803, SMB__and_, 1, (Optr)PSend13804);
    String string_13806 = new_String(L"}");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13806_Const = new_Constant((Optr)string_13806);
    // <&. 
    Send PSend13807 = new_Send((Optr)PSend13805, SMB__lt__and_, 1, (Optr)string_13806_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13801_Const = new_Constant((Optr)string_13801);
    // named:parsing:. 
    Send PSend13808 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13801_Const, (Optr)PSend13807);
    Array PThreadedCode13800 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13801, (Optr)&t_push1, (Optr)string_13802, (Optr)&t_send0, (Optr)PSend13803, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13804, (Optr)&t_send1, (Optr)PSend13805, (Optr)&t_push1, (Optr)string_13806, (Optr)&t_send1, (Optr)PSend13807, (Optr)&t_send2, (Optr)PSend13808, (Optr)&t_method_return);
    Method PMethod13799 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13800, 1, PSend13808);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod13799, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_injectBinaryObjectDescription() {
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13811 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13812 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13813 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13814 = new_Send((Optr)PSend13812, SMB__or_, 1, (Optr)PSend13813);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13815 = new_Send((Optr)PSend13811, SMB__lt__equals_, 1, (Optr)PSend13814);
    Array PThreadedCode13810 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13811, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13812, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13813, (Optr)&t_send1, (Optr)PSend13814, (Optr)&t_send1, (Optr)PSend13815, (Optr)&t_method_return);
    Method PMethod13809 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13810, 1, PSend13815);
    
    MethodClosure MC_SMB_injectBinaryObjectDescription = new_MethodClosure((Method)PMethod13809, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectBinaryObjectDescription, MC_SMB_injectBinaryObjectDescription);
}


static void init_SMB_initializeLowercase() {
    Symbol SMB_initializeLowercase = new_Symbol(L"initializeLowercase");
    String string_13818 = new_String(L"a-z");
    Constant string_13818_Const = new_Constant((Optr)string_13818);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13819 = new_Send((Optr)string_13818_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13817 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13818, (Optr)&t_send0, (Optr)PSend13819, (Optr)&t_method_return);
    Method PMethod13816 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13817, 1, PSend13819);
    
    MethodClosure MC_SMB_initializeLowercase = new_MethodClosure((Method)PMethod13816, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLowercase, MC_SMB_initializeLowercase);
}


static void init_SMB_injectMessageExpression() {
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13822 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB_keywordExpression = new_Symbol(L"keywordExpression");
    // keywordExpression. 
    Send PSend13823 = new_Send((Optr)self, SMB_keywordExpression, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13824 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13825 = new_Send((Optr)PSend13823, SMB__or_, 1, (Optr)PSend13824);
    Symbol SMB_unaryExpression = new_Symbol(L"unaryExpression");
    // unaryExpression. 
    Send PSend13826 = new_Send((Optr)self, SMB_unaryExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13827 = new_Send((Optr)PSend13825, SMB__lt__equals_, 1, (Optr)PSend13826);
    // <=. 
    Send PSend13828 = new_Send((Optr)PSend13822, SMB__lt__equals_, 1, (Optr)PSend13827);
    Array PThreadedCode13821 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13822, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13823, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13824, (Optr)&t_send1, (Optr)PSend13825, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13826, (Optr)&t_send1, (Optr)PSend13827, (Optr)&t_send1, (Optr)PSend13828, (Optr)&t_method_return);
    Method PMethod13820 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13821, 1, PSend13828);
    
    MethodClosure MC_SMB_injectMessageExpression = new_MethodClosure((Method)PMethod13820, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectMessageExpression, MC_SMB_injectMessageExpression);
}


static void init_SMB_initializeIdentifierBody() {
    Symbol SMB_initializeIdentifierBody = new_Symbol(L"initializeIdentifierBody");
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13831 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend13832 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13833 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13834 = new_Send((Optr)PSend13832, SMB__or_, 1, (Optr)PSend13833);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13835 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13836 = new_Send((Optr)PSend13834, SMB__lt__equals_, 1, (Optr)PSend13835);
    String string_13837 = new_String(L"!?");
    Constant string_13837_Const = new_Constant((Optr)string_13837);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13838 = new_Send((Optr)string_13837_Const, SMB_asPEGChoice, 0);
    // <=. 
    Send PSend13839 = new_Send((Optr)PSend13836, SMB__lt__equals_, 1, (Optr)PSend13838);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13840 = new_Send((Optr)PSend13839, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13841 = new_Send((Optr)PSend13831, SMB__logicAnd_, 1, (Optr)PSend13840);
    Array PThreadedCode13830 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13831, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13832, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13833, (Optr)&t_send1, (Optr)PSend13834, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13835, (Optr)&t_send1, (Optr)PSend13836, (Optr)&t_push1, (Optr)string_13837, (Optr)&t_send0, (Optr)PSend13838, (Optr)&t_send1, (Optr)PSend13839, (Optr)&t_send0, (Optr)PSend13840, (Optr)&t_send1, (Optr)PSend13841, (Optr)&t_method_return);
    Method PMethod13829 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13830, 1, PSend13841);
    
    MethodClosure MC_SMB_initializeIdentifierBody = new_MethodClosure((Method)PMethod13829, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifierBody, MC_SMB_initializeIdentifierBody);
}


static void init_SMB_initializeLiteral() {
    Symbol SMB_initializeLiteral = new_Symbol(L"initializeLiteral");
    Symbol SMB_float = new_Symbol(L"float");
    // float. 
    Send PSend13844 = new_Send((Optr)self, SMB_float, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13845 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13846 = new_Send((Optr)PSend13844, SMB__or_, 1, (Optr)PSend13845);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13847 = new_Send((Optr)self, SMB_symbolConstant, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13848 = new_Send((Optr)PSend13846, SMB__lt__equals_, 1, (Optr)PSend13847);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13849 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend13850 = new_Send((Optr)PSend13848, SMB__lt__equals_, 1, (Optr)PSend13849);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13851 = new_Send((Optr)self, SMB_stringConstant, 0);
    // <=. 
    Send PSend13852 = new_Send((Optr)PSend13850, SMB__lt__equals_, 1, (Optr)PSend13851);
    Symbol SMB_arrayConstant = new_Symbol(L"arrayConstant");
    // arrayConstant. 
    Send PSend13853 = new_Send((Optr)self, SMB_arrayConstant, 0);
    // <=. 
    Send PSend13854 = new_Send((Optr)PSend13852, SMB__lt__equals_, 1, (Optr)PSend13853);
    Array PThreadedCode13843 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13844, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13845, (Optr)&t_send1, (Optr)PSend13846, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13847, (Optr)&t_send1, (Optr)PSend13848, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13849, (Optr)&t_send1, (Optr)PSend13850, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13851, (Optr)&t_send1, (Optr)PSend13852, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13853, (Optr)&t_send1, (Optr)PSend13854, (Optr)&t_method_return);
    Method PMethod13842 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13843, 1, PSend13854);
    
    MethodClosure MC_SMB_initializeLiteral = new_MethodClosure((Method)PMethod13842, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLiteral, MC_SMB_initializeLiteral);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    String string_13857 = new_String(L"BINARY-MESSAGE-EXPRESSION");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13858 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13859 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13860 = new_Send((Optr)PSend13858, SMB__and_, 1, (Optr)PSend13859);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13857_Const = new_Constant((Optr)string_13857);
    // named:parsing:. 
    Send PSend13861 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13857_Const, (Optr)PSend13860);
    Array PThreadedCode13856 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13857, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13858, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13859, (Optr)&t_send1, (Optr)PSend13860, (Optr)&t_send2, (Optr)PSend13861, (Optr)&t_method_return);
    Method PMethod13855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13856, 1, PSend13861);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod13855, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    String string_13864 = new_String(L"STRING");
    Symbol SMB_stringSegment = new_Symbol(L"stringSegment");
    // stringSegment. 
    Send PSend13865 = new_Send((Optr)self, SMB_stringSegment, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13866 = new_Send((Optr)PSend13865, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13864_Const = new_Constant((Optr)string_13864);
    // named:parsing:. 
    Send PSend13867 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13864_Const, (Optr)PSend13866);
    Array PThreadedCode13863 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13864, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13865, (Optr)&t_send0, (Optr)PSend13866, (Optr)&t_send2, (Optr)PSend13867, (Optr)&t_method_return);
    Method PMethod13862 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13863, 1, PSend13867);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod13862, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    Array PThreadedCode13869 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod13868 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13869, 1, self);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod13868, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_test, MC_SMB_test);
}


static void init_SMB_initializeSubExpression() {
    Symbol SMB_initializeSubExpression = new_Symbol(L"initializeSubExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13872 = new_Send((Optr)self, SMB_expression, 0);
    String string_13873 = new_String(L".");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13873_Const = new_Constant((Optr)string_13873);
    // &. 
    Send PSend13874 = new_Send((Optr)PSend13872, SMB__and_, 1, (Optr)string_13873_Const);
    String string_13875 = new_String(L".");
    Symbol SMB__or_ = new_Symbol(L"|");
    Constant string_13875_Const = new_Constant((Optr)string_13875);
    // |. 
    Send PSend13876 = new_Send((Optr)PSend13874, SMB__or_, 1, (Optr)string_13875_Const);
    Array PThreadedCode13871 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13872, (Optr)&t_push1, (Optr)string_13873, (Optr)&t_send1, (Optr)PSend13874, (Optr)&t_push1, (Optr)string_13875, (Optr)&t_send1, (Optr)PSend13876, (Optr)&t_method_return);
    Method PMethod13870 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13871, 1, PSend13876);
    
    MethodClosure MC_SMB_initializeSubExpression = new_MethodClosure((Method)PMethod13870, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSubExpression, MC_SMB_initializeSubExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    String string_13879 = new_String(L"ANNOTATIONS");
    String string_13880 = new_String(L"<");
    Constant string_13880_Const = new_Constant((Optr)string_13880);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13881 = new_Send((Optr)string_13880_Const, SMB_asParser, 0);
    Symbol SMB_keywordAnnotation = new_Symbol(L"keywordAnnotation");
    // keywordAnnotation. 
    Send PSend13882 = new_Send((Optr)self, SMB_keywordAnnotation, 0);
    Symbol SMB_unaryAnnotation = new_Symbol(L"unaryAnnotation");
    // unaryAnnotation. 
    Send PSend13883 = new_Send((Optr)self, SMB_unaryAnnotation, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13884 = new_Send((Optr)PSend13882, SMB__or_, 1, (Optr)PSend13883);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13885 = new_Send((Optr)PSend13881, SMB__and_, 1, (Optr)PSend13884);
    String string_13886 = new_String(L">");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13886_Const = new_Constant((Optr)string_13886);
    // <&. 
    Send PSend13887 = new_Send((Optr)PSend13885, SMB__lt__and_, 1, (Optr)string_13886_Const);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13888 = new_Send((Optr)PSend13887, SMB_times, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13879_Const = new_Constant((Optr)string_13879);
    // named:parsing:. 
    Send PSend13889 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13879_Const, (Optr)PSend13888);
    Array PThreadedCode13878 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13879, (Optr)&t_push1, (Optr)string_13880, (Optr)&t_send0, (Optr)PSend13881, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13882, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13883, (Optr)&t_send1, (Optr)PSend13884, (Optr)&t_send1, (Optr)PSend13885, (Optr)&t_push1, (Optr)string_13886, (Optr)&t_send1, (Optr)PSend13887, (Optr)&t_send0, (Optr)PSend13888, (Optr)&t_send2, (Optr)PSend13889, (Optr)&t_method_return);
    Method PMethod13877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13878, 1, PSend13889);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod13877, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializeArrayConstant() {
    Symbol SMB_initializeArrayConstant = new_Symbol(L"initializeArrayConstant");
    String string_13892 = new_String(L"#");
    Constant string_13892_Const = new_Constant((Optr)string_13892);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13893 = new_Send((Optr)string_13892_Const, SMB_asParser, 0);
    Symbol SMB_array = new_Symbol(L"array");
    // array. 
    Send PSend13894 = new_Send((Optr)self, SMB_array, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13895 = new_Send((Optr)PSend13893, SMB__and_, 1, (Optr)PSend13894);
    Array PThreadedCode13891 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)string_13892, (Optr)&t_send0, (Optr)PSend13893, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13894, (Optr)&t_send1, (Optr)PSend13895, (Optr)&t_method_return);
    Method PMethod13890 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13891, 1, PSend13895);
    
    MethodClosure MC_SMB_initializeArrayConstant = new_MethodClosure((Method)PMethod13890, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArrayConstant, MC_SMB_initializeArrayConstant);
}


static void init_SMB_initializeBinaryObjectDescription() {
    Symbol SMB_initializeBinaryObjectDescription = new_Symbol(L"initializeBinaryObjectDescription");
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend13898 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13899 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Array PThreadedCode13897 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13898, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13899, (Optr)&t_method_return);
    Method PMethod13896 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13897, 2, PSend13898, PSend13899);
    
    MethodClosure MC_SMB_initializeBinaryObjectDescription = new_MethodClosure((Method)PMethod13896, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryObjectDescription, MC_SMB_initializeBinaryObjectDescription);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Variable VAR_stringBorder_0_0 = new_Variable_named(L"stringBorder", 0);
    Array PArray13901 = new_Array_with(1, (Optr)VAR_stringBorder_0_0);
    String string_13905 = new_String(L"'");
    Constant string_13905_Const = new_Constant((Optr)string_13905);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13904 = new_Send((Optr)string_13905_Const, SMB_asParser, 0);
    Assign PAssign13903 = new_Assign((Optr)VAR_stringBorder_0_0, (Optr)PSend13904);
    String string_13906 = new_String(L"STRING-SEGMENT");
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13907 = new_Send((Optr)VAR_stringBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13908 = new_Send((Optr)PSend13907, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13909 = new_Send((Optr)PSend13908, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13910 = new_Send((Optr)VAR_stringBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend13909);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13911 = new_Send((Optr)PSend13910, SMB__lt__and_, 1, (Optr)VAR_stringBorder_0_0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13906_Const = new_Constant((Optr)string_13906);
    // named:parsing:. 
    Send PSend13912 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13906_Const, (Optr)PSend13911);
    Array PThreadedCode13902 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign13903, (Optr)&t_push1, (Optr)string_13905, (Optr)&t_send0, (Optr)PSend13904, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13906, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send0, (Optr)PSend13907, (Optr)&t_send0, (Optr)PSend13908, (Optr)&t_send0, (Optr)PSend13909, (Optr)&t_send1, (Optr)PSend13910, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send1, (Optr)PSend13911, (Optr)&t_send2, (Optr)PSend13912, (Optr)&t_method_return);
    Method PMethod13900 = new_Method_with(empty_Array, PArray13901, empty_Array, PThreadedCode13902, 2, PAssign13903, PSend13912);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod13900, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeBar() {
    Symbol SMB_initializeBar = new_Symbol(L"initializeBar");
    String string_13915 = new_String(L"|");
    Constant string_13915_Const = new_Constant((Optr)string_13915);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13916 = new_Send((Optr)string_13915_Const, SMB_asParser, 0);
    Array PThreadedCode13914 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13915, (Optr)&t_send0, (Optr)PSend13916, (Optr)&t_method_return);
    Method PMethod13913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13914, 1, PSend13916);
    
    MethodClosure MC_SMB_initializeBar = new_MethodClosure((Method)PMethod13913, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBar, MC_SMB_initializeBar);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    String string_13919 = new_String(L"BINARY-ARGUMENT");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13920 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13921 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13922 = new_Send((Optr)PSend13920, SMB__and_, 1, (Optr)PSend13921);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13919_Const = new_Constant((Optr)string_13919);
    // named:parsing:. 
    Send PSend13923 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13919_Const, (Optr)PSend13922);
    Array PThreadedCode13918 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13919, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13920, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13921, (Optr)&t_send1, (Optr)PSend13922, (Optr)&t_send2, (Optr)PSend13923, (Optr)&t_method_return);
    Method PMethod13917 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13918, 1, PSend13923);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod13917, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    String string_13926 = new_String(L"RETURN");
    String string_13927 = new_String(L"^");
    Constant string_13927_Const = new_Constant((Optr)string_13927);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13928 = new_Send((Optr)string_13927_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13929 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13930 = new_Send((Optr)PSend13928, SMB__and_, 1, (Optr)PSend13929);
    String string_13931 = new_String(L".");
    Constant string_13931_Const = new_Constant((Optr)string_13931);
    // asParser. 
    Send PSend13932 = new_Send((Optr)string_13931_Const, SMB_asParser, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13933 = new_Send((Optr)PSend13932, SMB_optional, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13934 = new_Send((Optr)PSend13933, SMB_omit, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13935 = new_Send((Optr)PSend13930, SMB__lt__and_, 1, (Optr)PSend13934);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13926_Const = new_Constant((Optr)string_13926);
    // named:parsing:. 
    Send PSend13936 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13926_Const, (Optr)PSend13935);
    Array PThreadedCode13925 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13926, (Optr)&t_push1, (Optr)string_13927, (Optr)&t_send0, (Optr)PSend13928, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13929, (Optr)&t_send1, (Optr)PSend13930, (Optr)&t_push1, (Optr)string_13931, (Optr)&t_send0, (Optr)PSend13932, (Optr)&t_send0, (Optr)PSend13933, (Optr)&t_send0, (Optr)PSend13934, (Optr)&t_send1, (Optr)PSend13935, (Optr)&t_send2, (Optr)PSend13936, (Optr)&t_method_return);
    Method PMethod13924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13925, 1, PSend13936);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod13924, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeNumberConstant() {
    Symbol SMB_initializeNumberConstant = new_Symbol(L"initializeNumberConstant");
    Symbol SMB_radix = new_Symbol(L"radix");
    // radix. 
    Send PSend13939 = new_Send((Optr)self, SMB_radix, 0);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend13940 = new_Send((Optr)self, SMB_number, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13941 = new_Send((Optr)PSend13939, SMB__or_, 1, (Optr)PSend13940);
    Array PThreadedCode13938 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13939, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13940, (Optr)&t_send1, (Optr)PSend13941, (Optr)&t_method_return);
    Method PMethod13937 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13938, 1, PSend13941);
    
    MethodClosure MC_SMB_initializeNumberConstant = new_MethodClosure((Method)PMethod13937, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberConstant, MC_SMB_initializeNumberConstant);
}


static void init_SMB_initializeCharacter() {
    Symbol SMB_initializeCharacter = new_Symbol(L"initializeCharacter");
    String string_13944 = new_String(L"[]{}()_^;$#:-|.'\"");
    Constant string_13944_Const = new_Constant((Optr)string_13944);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13945 = new_Send((Optr)string_13944_Const, SMB_asPEGChoice, 0);
    Symbol SMB_separators = new_Symbol(L"separators");
    // separators. 
    Send PSend13946 = new_Send((Optr)PEGParser_classReference, SMB_separators, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13947 = new_Send((Optr)PSend13945, SMB__or_, 1, (Optr)PSend13946);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13948 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13949 = new_Send((Optr)PSend13947, SMB__lt__equals_, 1, (Optr)PSend13948);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13950 = new_Send((Optr)self, SMB_letter, 0);
    // <=. 
    Send PSend13951 = new_Send((Optr)PSend13949, SMB__lt__equals_, 1, (Optr)PSend13950);
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13952 = new_Send((Optr)self, SMB_specialCharacter, 0);
    // <=. 
    Send PSend13953 = new_Send((Optr)PSend13951, SMB__lt__equals_, 1, (Optr)PSend13952);
    Array PThreadedCode13943 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)string_13944, (Optr)&t_send0, (Optr)PSend13945, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend13946, (Optr)&t_send1, (Optr)PSend13947, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13948, (Optr)&t_send1, (Optr)PSend13949, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13950, (Optr)&t_send1, (Optr)PSend13951, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13952, (Optr)&t_send1, (Optr)PSend13953, (Optr)&t_method_return);
    Method PMethod13942 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13943, 1, PSend13953);
    
    MethodClosure MC_SMB_initializeCharacter = new_MethodClosure((Method)PMethod13942, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacter, MC_SMB_initializeCharacter);
}


static void init_SMB_injectPrimary() {
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13956 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_primaryVariable = new_Symbol(L"primaryVariable");
    // primaryVariable. 
    Send PSend13957 = new_Send((Optr)self, SMB_primaryVariable, 0);
    Symbol SMB_literal = new_Symbol(L"literal");
    // literal. 
    Send PSend13958 = new_Send((Optr)self, SMB_literal, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13959 = new_Send((Optr)PSend13957, SMB__or_, 1, (Optr)PSend13958);
    Symbol SMB_block = new_Symbol(L"block");
    // block. 
    Send PSend13960 = new_Send((Optr)self, SMB_block, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13961 = new_Send((Optr)PSend13959, SMB__lt__equals_, 1, (Optr)PSend13960);
    Symbol SMB_scopedExpression = new_Symbol(L"scopedExpression");
    // scopedExpression. 
    Send PSend13962 = new_Send((Optr)self, SMB_scopedExpression, 0);
    // <=. 
    Send PSend13963 = new_Send((Optr)PSend13961, SMB__lt__equals_, 1, (Optr)PSend13962);
    Symbol SMB_braceExpression = new_Symbol(L"braceExpression");
    // braceExpression. 
    Send PSend13964 = new_Send((Optr)self, SMB_braceExpression, 0);
    // <=. 
    Send PSend13965 = new_Send((Optr)PSend13963, SMB__lt__equals_, 1, (Optr)PSend13964);
    // <=. 
    Send PSend13966 = new_Send((Optr)PSend13956, SMB__lt__equals_, 1, (Optr)PSend13965);
    Array PThreadedCode13955 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13956, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13957, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13958, (Optr)&t_send1, (Optr)PSend13959, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13960, (Optr)&t_send1, (Optr)PSend13961, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13962, (Optr)&t_send1, (Optr)PSend13963, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13964, (Optr)&t_send1, (Optr)PSend13965, (Optr)&t_send1, (Optr)PSend13966, (Optr)&t_method_return);
    Method PMethod13954 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13955, 1, PSend13966);
    
    MethodClosure MC_SMB_injectPrimary = new_MethodClosure((Method)PMethod13954, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectPrimary, MC_SMB_injectPrimary);
}


static void init_SMB_initializeLetter() {
    Symbol SMB_initializeLetter = new_Symbol(L"initializeLetter");
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend13969 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13970 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13971 = new_Send((Optr)PSend13969, SMB__or_, 1, (Optr)PSend13970);
    Array PThreadedCode13968 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13969, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13970, (Optr)&t_send1, (Optr)PSend13971, (Optr)&t_method_return);
    Method PMethod13967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13968, 1, PSend13971);
    
    MethodClosure MC_SMB_initializeLetter = new_MethodClosure((Method)PMethod13967, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLetter, MC_SMB_initializeLetter);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    String string_13974 = new_String(L"ASSIGNMENT-EXPRESSIONS");
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend13975 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend13976 = new_Send((Optr)self, SMB_assignmentOp, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13977 = new_Send((Optr)PSend13975, SMB__and_, 1, (Optr)PSend13976);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13978 = new_Send((Optr)PSend13977, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13974_Const = new_Constant((Optr)string_13974);
    // named:parsing:. 
    Send PSend13979 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13974_Const, (Optr)PSend13978);
    Array PThreadedCode13973 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13974, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13975, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13976, (Optr)&t_send1, (Optr)PSend13977, (Optr)&t_send0, (Optr)PSend13978, (Optr)&t_send2, (Optr)PSend13979, (Optr)&t_method_return);
    Method PMethod13972 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13973, 1, PSend13979);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod13972, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_initializeFinalExpression() {
    Symbol SMB_initializeFinalExpression = new_Symbol(L"initializeFinalExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13982 = new_Send((Optr)self, SMB_expression, 0);
    Array PThreadedCode13981 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13982, (Optr)&t_method_return);
    Method PMethod13980 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13981, 1, PSend13982);
    
    MethodClosure MC_SMB_initializeFinalExpression = new_MethodClosure((Method)PMethod13980, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFinalExpression, MC_SMB_initializeFinalExpression);
}


static void init_SMB_initializeMessageExpression() {
    Symbol SMB_initializeMessageExpression = new_Symbol(L"initializeMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13985 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13986 = new_Send((Optr)self, SMB_messageExpression, 0);
    Array PThreadedCode13984 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13985, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13986, (Optr)&t_method_return);
    Method PMethod13983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13984, 2, PSend13985, PSend13986);
    
    MethodClosure MC_SMB_initializeMessageExpression = new_MethodClosure((Method)PMethod13983, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessageExpression, MC_SMB_initializeMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    String string_13989 = new_String(L"UNARY-ANNOTATION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13990 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13989_Const = new_Constant((Optr)string_13989);
    // named:parsing:. 
    Send PSend13991 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13989_Const, (Optr)PSend13990);
    Array PThreadedCode13988 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13989, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13990, (Optr)&t_send2, (Optr)PSend13991, (Optr)&t_method_return);
    Method PMethod13987 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13988, 1, PSend13991);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod13987, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeMessagePattern() {
    Symbol SMB_initializeMessagePattern = new_Symbol(L"initializeMessagePattern");
    String string_13994 = new_String(L"MESSAGE-PATTERN");
    Symbol SMB_keywordsArguments = new_Symbol(L"keywordsArguments");
    // keywordsArguments. 
    Send PSend13995 = new_Send((Optr)self, SMB_keywordsArguments, 0);
    Symbol SMB_binaryMessageDefinition = new_Symbol(L"binaryMessageDefinition");
    // binaryMessageDefinition. 
    Send PSend13996 = new_Send((Optr)self, SMB_binaryMessageDefinition, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13997 = new_Send((Optr)PSend13995, SMB__or_, 1, (Optr)PSend13996);
    Symbol SMB_unaryMessageDefinition = new_Symbol(L"unaryMessageDefinition");
    // unaryMessageDefinition. 
    Send PSend13998 = new_Send((Optr)self, SMB_unaryMessageDefinition, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13999 = new_Send((Optr)PSend13997, SMB__lt__equals_, 1, (Optr)PSend13998);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13994_Const = new_Constant((Optr)string_13994);
    // named:parsing:. 
    Send PSend14000 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13994_Const, (Optr)PSend13999);
    Array PThreadedCode13993 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13994, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13995, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13996, (Optr)&t_send1, (Optr)PSend13997, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13998, (Optr)&t_send1, (Optr)PSend13999, (Optr)&t_send2, (Optr)PSend14000, (Optr)&t_method_return);
    Method PMethod13992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13993, 1, PSend14000);
    
    MethodClosure MC_SMB_initializeMessagePattern = new_MethodClosure((Method)PMethod13992, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessagePattern, MC_SMB_initializeMessagePattern);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign14003 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode14002 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign14003, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14001 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14002, 2, PAssign14003, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod14001, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
    store_method(HEADER(Smalltalk_Parser_SmalltalkGrammar_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper14009 = new_Super(SMB_new, 0);
    Assign PAssign14008 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)PSuper14009);
    Array PThreadedCode14007 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14008, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14009, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock14006 = new_Block_with(empty_Array, empty_Array, PThreadedCode14007, 1, PAssign14008);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend14010 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock14006);
    Array PThreadedCode14005 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock14006, (Optr)&t_send1, (Optr)PSend14010, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_method_return);
    Method PMethod14004 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14005, 2, PSend14010, slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod14004, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
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