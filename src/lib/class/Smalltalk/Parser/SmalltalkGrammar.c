#include <lib/class/Smalltalk/Parser/SmalltalkGrammar.h>


Optr slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance;
Optr layout_Smalltalk_Parser_SmalltalkGrammar_Class_class;
Optr layout_Smalltalk_Parser_SmalltalkGrammar;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    String string_13600 = new_String(L"UNARY-MESSAGE-EXPRESSION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13601 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13600_Const = new_Constant((Optr)string_13600);
    // named:parsing:. 
    Send PSend13602 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13600_Const, (Optr)PSend13601);
    Array PThreadedCode13599 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13600, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13601, (Optr)&t_send2, (Optr)PSend13602, (Optr)&t_method_return);
    Method PMethod13598 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13599, 1, PSend13602);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod13598, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    String string_13605 = new_String(L"UNARY-SELECTOR");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13606 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13607 = new_String(L":");
    Constant string_13607_Const = new_Constant((Optr)string_13607);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13608 = new_Send((Optr)string_13607_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13609 = new_Send((Optr)PSend13608, SMB_not, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13610 = new_Send((Optr)PSend13606, SMB__logicAnd_, 1, (Optr)PSend13609);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13605_Const = new_Constant((Optr)string_13605);
    // named:parsing:. 
    Send PSend13611 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13605_Const, (Optr)PSend13610);
    Array PThreadedCode13604 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13605, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13606, (Optr)&t_push1, (Optr)string_13607, (Optr)&t_send0, (Optr)PSend13608, (Optr)&t_send0, (Optr)PSend13609, (Optr)&t_send1, (Optr)PSend13610, (Optr)&t_send2, (Optr)PSend13611, (Optr)&t_method_return);
    Method PMethod13603 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13604, 1, PSend13611);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod13603, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    String string_13614 = new_String(L"NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13615 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13614_Const = new_Constant((Optr)string_13614);
    // named:parsing:. 
    Send PSend13616 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13614_Const, (Optr)PSend13615);
    Array PThreadedCode13613 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13614, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13615, (Optr)&t_send2, (Optr)PSend13616, (Optr)&t_method_return);
    Method PMethod13612 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13613, 1, PSend13616);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod13612, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    String string_13619 = new_String(L"UNARY-OBJECT-DESCRIPTION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13620 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13621 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13622 = new_Send((Optr)PSend13621, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13623 = new_Send((Optr)PSend13620, SMB__and_, 1, (Optr)PSend13622);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13619_Const = new_Constant((Optr)string_13619);
    // named:parsing:. 
    Send PSend13624 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13619_Const, (Optr)PSend13623);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13625 = new_Send((Optr)PSend13624, SMB_memo, 0);
    Array PThreadedCode13618 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13619, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13620, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13621, (Optr)&t_send0, (Optr)PSend13622, (Optr)&t_send1, (Optr)PSend13623, (Optr)&t_send2, (Optr)PSend13624, (Optr)&t_send0, (Optr)PSend13625, (Optr)&t_method_return);
    Method PMethod13617 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13618, 1, PSend13625);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod13617, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    String string_13628 = new_String(L"VARIABLE-NAME");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13629 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13628_Const = new_Constant((Optr)string_13628);
    // named:parsing:. 
    Send PSend13630 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13628_Const, (Optr)PSend13629);
    Array PThreadedCode13627 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13628, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13629, (Optr)&t_send2, (Optr)PSend13630, (Optr)&t_method_return);
    Method PMethod13626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13627, 1, PSend13630);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod13626, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_assignmentOp() {
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    String string_13633 = new_String(L":=");
    Constant string_13633_Const = new_Constant((Optr)string_13633);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13634 = new_Send((Optr)string_13633_Const, SMB_asParser, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13635 = new_Send((Optr)PSend13634, SMB_omit, 0);
    Array PThreadedCode13632 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)string_13633, (Optr)&t_send0, (Optr)PSend13634, (Optr)&t_send0, (Optr)PSend13635, (Optr)&t_method_return);
    Method PMethod13631 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13632, 1, PSend13635);
    
    MethodClosure MC_SMB_assignmentOp = new_MethodClosure((Method)PMethod13631, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_assignmentOp, MC_SMB_assignmentOp);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    String string_13638 = new_String(L"CAPITAL-IDENTIFIER");
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13639 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13640 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13641 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13642 = new_Send((Optr)PSend13640, SMB__or_, 1, (Optr)PSend13641);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13643 = new_Send((Optr)PSend13642, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13644 = new_Send((Optr)PSend13639, SMB__logicAnd_, 1, (Optr)PSend13643);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13638_Const = new_Constant((Optr)string_13638);
    // named:parsing:. 
    Send PSend13645 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13638_Const, (Optr)PSend13644);
    Array PThreadedCode13637 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13638, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13639, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13640, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13641, (Optr)&t_send1, (Optr)PSend13642, (Optr)&t_send0, (Optr)PSend13643, (Optr)&t_send1, (Optr)PSend13644, (Optr)&t_send2, (Optr)PSend13645, (Optr)&t_method_return);
    Method PMethod13636 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13637, 1, PSend13645);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod13636, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    String string_13648 = new_String(L"BINARY-SELECTOR");
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13649 = new_Send((Optr)self, SMB_specialCharacter, 0);
    String string_13650 = new_String(L"-");
    Constant string_13650_Const = new_Constant((Optr)string_13650);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13651 = new_Send((Optr)string_13650_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13652 = new_Send((Optr)PSend13651, SMB_consume, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13653 = new_Send((Optr)PSend13649, SMB__or_, 1, (Optr)PSend13652);
    // specialCharacter. 
    Send PSend13654 = new_Send((Optr)self, SMB_specialCharacter, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13655 = new_Send((Optr)PSend13654, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13656 = new_Send((Optr)PSend13653, SMB__logicAnd_, 1, (Optr)PSend13655);
    String string_13657 = new_String(L"|");
    Constant string_13657_Const = new_Constant((Optr)string_13657);
    // asParser. 
    Send PSend13658 = new_Send((Optr)string_13657_Const, SMB_asParser, 0);
    // consume. 
    Send PSend13659 = new_Send((Optr)PSend13658, SMB_consume, 0);
    // |. 
    Send PSend13660 = new_Send((Optr)PSend13656, SMB__or_, 1, (Optr)PSend13659);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13648_Const = new_Constant((Optr)string_13648);
    // named:parsing:. 
    Send PSend13661 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13648_Const, (Optr)PSend13660);
    Array PThreadedCode13647 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13648, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13649, (Optr)&t_push1, (Optr)string_13650, (Optr)&t_send0, (Optr)PSend13651, (Optr)&t_send0, (Optr)PSend13652, (Optr)&t_send1, (Optr)PSend13653, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13654, (Optr)&t_send0, (Optr)PSend13655, (Optr)&t_send1, (Optr)PSend13656, (Optr)&t_push1, (Optr)string_13657, (Optr)&t_send0, (Optr)PSend13658, (Optr)&t_send0, (Optr)PSend13659, (Optr)&t_send1, (Optr)PSend13660, (Optr)&t_send2, (Optr)PSend13661, (Optr)&t_method_return);
    Method PMethod13646 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13647, 1, PSend13661);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod13646, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    String string_13664 = new_String(L"STRING-CONSTANT");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13665 = new_Send((Optr)self, SMB_string, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13664_Const = new_Constant((Optr)string_13664);
    // named:parsing:. 
    Send PSend13666 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13664_Const, (Optr)PSend13665);
    Array PThreadedCode13663 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13664, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13665, (Optr)&t_send2, (Optr)PSend13666, (Optr)&t_method_return);
    Method PMethod13662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13663, 1, PSend13666);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod13662, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeParameterName() {
    Symbol SMB_initializeParameterName = new_Symbol(L"initializeParameterName");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13669 = new_Send((Optr)self, SMB_identifier, 0);
    Array PThreadedCode13668 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13669, (Optr)&t_method_return);
    Method PMethod13667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13668, 1, PSend13669);
    
    MethodClosure MC_SMB_initializeParameterName = new_MethodClosure((Method)PMethod13667, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeParameterName, MC_SMB_initializeParameterName);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    String string_13672 = new_String(L"KEYWORD-EXPRESSION");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13673 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13674 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    // bracketIndexExpression. 
    Send PSend13675 = new_Send((Optr)self, SMB_bracketIndexExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13676 = new_Send((Optr)PSend13674, SMB__or_, 1, (Optr)PSend13675);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13677 = new_Send((Optr)PSend13673, SMB__and_, 1, (Optr)PSend13676);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13672_Const = new_Constant((Optr)string_13672);
    // named:parsing:. 
    Send PSend13678 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13672_Const, (Optr)PSend13677);
    Array PThreadedCode13671 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13672, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13673, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13674, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13675, (Optr)&t_send1, (Optr)PSend13676, (Optr)&t_send1, (Optr)PSend13677, (Optr)&t_send2, (Optr)PSend13678, (Optr)&t_method_return);
    Method PMethod13670 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13671, 1, PSend13678);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod13670, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    String string_13681 = new_String(L"BRACKET-INDEX-EXPRESSION");
    String string_13682 = new_String(L"[");
    Constant string_13682_Const = new_Constant((Optr)string_13682);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13683 = new_Send((Optr)string_13682_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13684 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13685 = new_Send((Optr)PSend13683, SMB__and_, 1, (Optr)PSend13684);
    String string_13686 = new_String(L"]");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13686_Const = new_Constant((Optr)string_13686);
    // <&. 
    Send PSend13687 = new_Send((Optr)PSend13685, SMB__lt__and_, 1, (Optr)string_13686_Const);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend13688 = new_Send((Optr)self, SMB_assignmentOp, 0);
    // expression. 
    Send PSend13689 = new_Send((Optr)self, SMB_expression, 0);
    // &. 
    Send PSend13690 = new_Send((Optr)PSend13688, SMB__and_, 1, (Optr)PSend13689);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13691 = new_Send((Optr)PSend13690, SMB_optional, 0);
    // <&. 
    Send PSend13692 = new_Send((Optr)PSend13687, SMB__lt__and_, 1, (Optr)PSend13691);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13681_Const = new_Constant((Optr)string_13681);
    // named:parsing:. 
    Send PSend13693 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13681_Const, (Optr)PSend13692);
    Array PThreadedCode13680 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13681, (Optr)&t_push1, (Optr)string_13682, (Optr)&t_send0, (Optr)PSend13683, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13684, (Optr)&t_send1, (Optr)PSend13685, (Optr)&t_push1, (Optr)string_13686, (Optr)&t_send1, (Optr)PSend13687, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13688, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13689, (Optr)&t_send1, (Optr)PSend13690, (Optr)&t_send0, (Optr)PSend13691, (Optr)&t_send1, (Optr)PSend13692, (Optr)&t_send2, (Optr)PSend13693, (Optr)&t_method_return);
    Method PMethod13679 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13680, 1, PSend13693);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod13679, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    // preStoreBinaryObjectDescription. 
    Send PSend13696 = new_Send((Optr)self, SMB_preStoreBinaryObjectDescription, 0);
    Symbol  SMB_binaryExpression = new_Symbol(L"binaryExpression");
    String string_13697 = new_String(L"BINARY-EXPRESSION");
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13698 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13699 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13700 = new_Send((Optr)PSend13698, SMB__and_, 1, (Optr)PSend13699);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13701 = new_Send((Optr)PSend13700, SMB_plus, 0);
    // unaryObjectDescription. 
    Send PSend13702 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    // &. 
    Send PSend13703 = new_Send((Optr)PSend13701, SMB__and_, 1, (Optr)PSend13702);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13697_Const = new_Constant((Optr)string_13697);
    // named:parsing:. 
    Send PSend13704 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13697_Const, (Optr)PSend13703);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryExpression_Const = new_Constant((Optr)SMB_binaryExpression);
    // at:ifAbsentPut:. 
    Send PSend13705 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryExpression_Const, (Optr)PSend13704);
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    // injectBinaryObjectDescription. 
    Send PSend13706 = new_Send((Optr)self, SMB_injectBinaryObjectDescription, 0);
    // binaryExpression. 
    Send PSend13707 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Array PThreadedCode13695 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13696, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryExpression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13697, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13698, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13699, (Optr)&t_send1, (Optr)PSend13700, (Optr)&t_send0, (Optr)PSend13701, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13702, (Optr)&t_send1, (Optr)PSend13703, (Optr)&t_send2, (Optr)PSend13704, (Optr)&t_send2, (Optr)PSend13705, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13706, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13707, (Optr)&t_method_return);
    Method PMethod13694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13695, 4, PSend13696, PSend13705, PSend13706, PSend13707);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod13694, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    String string_13710 = new_String(L"SCOPED-EXPRESSION");
    String string_13711 = new_String(L"(");
    Constant string_13711_Const = new_Constant((Optr)string_13711);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13712 = new_Send((Optr)string_13711_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13713 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13714 = new_Send((Optr)PSend13712, SMB__and_, 1, (Optr)PSend13713);
    String string_13715 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13715_Const = new_Constant((Optr)string_13715);
    // <&. 
    Send PSend13716 = new_Send((Optr)PSend13714, SMB__lt__and_, 1, (Optr)string_13715_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13710_Const = new_Constant((Optr)string_13710);
    // named:parsing:. 
    Send PSend13717 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13710_Const, (Optr)PSend13716);
    Array PThreadedCode13709 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13710, (Optr)&t_push1, (Optr)string_13711, (Optr)&t_send0, (Optr)PSend13712, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13713, (Optr)&t_send1, (Optr)PSend13714, (Optr)&t_push1, (Optr)string_13715, (Optr)&t_send1, (Optr)PSend13716, (Optr)&t_send2, (Optr)PSend13717, (Optr)&t_method_return);
    Method PMethod13708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13709, 1, PSend13717);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod13708, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    String string_13720 = new_String(L"CHARACTER-CONSTANT");
    String string_13721 = new_String(L"$");
    Constant string_13721_Const = new_Constant((Optr)string_13721);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13722 = new_Send((Optr)string_13721_Const, SMB_asParser, 0);
    Symbol SMB_character = new_Symbol(L"character");
    // character. 
    Send PSend13723 = new_Send((Optr)self, SMB_character, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13724 = new_Send((Optr)PSend13722, SMB__logicAnd_, 1, (Optr)PSend13723);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13720_Const = new_Constant((Optr)string_13720);
    // named:parsing:. 
    Send PSend13725 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13720_Const, (Optr)PSend13724);
    Array PThreadedCode13719 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13720, (Optr)&t_push1, (Optr)string_13721, (Optr)&t_send0, (Optr)PSend13722, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13723, (Optr)&t_send1, (Optr)PSend13724, (Optr)&t_send2, (Optr)PSend13725, (Optr)&t_method_return);
    Method PMethod13718 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13719, 1, PSend13725);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod13718, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    String string_13728 = new_String(L"NUMBER-FORMAT");
    String string_13729 = new_String(L"-");
    Constant string_13729_Const = new_Constant((Optr)string_13729);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13730 = new_Send((Optr)string_13729_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13731 = new_Send((Optr)PSend13730, SMB_consume, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13732 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13733 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13734 = new_Send((Optr)PSend13732, SMB__or_, 1, (Optr)PSend13733);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13735 = new_Send((Optr)PSend13734, SMB_strongPlus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13736 = new_Send((Optr)PSend13731, SMB__and_, 1, (Optr)PSend13735);
    // decimalDigit. 
    Send PSend13737 = new_Send((Optr)self, SMB_decimalDigit, 0);
    // uppercase. 
    Send PSend13738 = new_Send((Optr)self, SMB_uppercase, 0);
    // |. 
    Send PSend13739 = new_Send((Optr)PSend13737, SMB__or_, 1, (Optr)PSend13738);
    // strongPlus. 
    Send PSend13740 = new_Send((Optr)PSend13739, SMB_strongPlus, 0);
    // |. 
    Send PSend13741 = new_Send((Optr)PSend13736, SMB__or_, 1, (Optr)PSend13740);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13728_Const = new_Constant((Optr)string_13728);
    // named:parsing:. 
    Send PSend13742 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13728_Const, (Optr)PSend13741);
    Array PThreadedCode13727 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13728, (Optr)&t_push1, (Optr)string_13729, (Optr)&t_send0, (Optr)PSend13730, (Optr)&t_send0, (Optr)PSend13731, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13732, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13733, (Optr)&t_send1, (Optr)PSend13734, (Optr)&t_send0, (Optr)PSend13735, (Optr)&t_send1, (Optr)PSend13736, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13737, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13738, (Optr)&t_send1, (Optr)PSend13739, (Optr)&t_send0, (Optr)PSend13740, (Optr)&t_send1, (Optr)PSend13741, (Optr)&t_send2, (Optr)PSend13742, (Optr)&t_method_return);
    Method PMethod13726 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13727, 1, PSend13742);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod13726, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    String string_13745 = new_String(L"METHOD");
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend13746 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_messagePattern = new_Symbol(L"messagePattern");
    // messagePattern. 
    Send PSend13747 = new_Send((Optr)self, SMB_messagePattern, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13748 = new_Send((Optr)PSend13746, SMB__and_, 1, (Optr)PSend13747);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13749 = new_Send((Optr)self, SMB_annotations, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13750 = new_Send((Optr)PSend13748, SMB__lt__and_, 1, (Optr)PSend13749);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13751 = new_Send((Optr)self, SMB_temporaries, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13752 = new_Send((Optr)PSend13751, SMB_optional, 0);
    // <&. 
    Send PSend13753 = new_Send((Optr)PSend13750, SMB__lt__and_, 1, (Optr)PSend13752);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13754 = new_Send((Optr)self, SMB_statements, 0);
    // <&. 
    Send PSend13755 = new_Send((Optr)PSend13753, SMB__lt__and_, 1, (Optr)PSend13754);
    // separator. 
    Send PSend13756 = new_Send((Optr)self, SMB_separator, 0);
    // <&. 
    Send PSend13757 = new_Send((Optr)PSend13755, SMB__lt__and_, 1, (Optr)PSend13756);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13758 = new_Send((Optr)PSend13757, SMB_end, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13745_Const = new_Constant((Optr)string_13745);
    // named:parsing:. 
    Send PSend13759 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13745_Const, (Optr)PSend13758);
    // separator. 
    Send PSend13760 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_separator_ = new_Symbol(L"separator:");
    // separator:. 
    Send PSend13761 = new_Send((Optr)PSend13759, SMB_separator_, 1, (Optr)PSend13760);
    Array PThreadedCode13744 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13745, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13746, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13747, (Optr)&t_send1, (Optr)PSend13748, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13749, (Optr)&t_send1, (Optr)PSend13750, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13751, (Optr)&t_send0, (Optr)PSend13752, (Optr)&t_send1, (Optr)PSend13753, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13754, (Optr)&t_send1, (Optr)PSend13755, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13756, (Optr)&t_send1, (Optr)PSend13757, (Optr)&t_send0, (Optr)PSend13758, (Optr)&t_send2, (Optr)PSend13759, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13760, (Optr)&t_send1, (Optr)PSend13761, (Optr)&t_method_return);
    Method PMethod13743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13744, 1, PSend13761);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod13743, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    String string_13764 = new_String(L"UNARY-MESSAGE-DEFINITION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13765 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13764_Const = new_Constant((Optr)string_13764);
    // named:parsing:. 
    Send PSend13766 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13764_Const, (Optr)PSend13765);
    Array PThreadedCode13763 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13764, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13765, (Optr)&t_send2, (Optr)PSend13766, (Optr)&t_method_return);
    Method PMethod13762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13763, 1, PSend13766);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod13762, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_preStorePrimary() {
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    Symbol  SMB_primary = new_Symbol(L"primary");
    String string_13771 = new_String(L"PRIMARY");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13771_Const = new_Constant((Optr)string_13771);
    // named:. 
    Send PSend13772 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13771_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13773 = new_Send((Optr)PSend13772, SMB_memo, 0);
    Array PThreadedCode13770 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13771, (Optr)&t_send1, (Optr)PSend13772, (Optr)&t_send0, (Optr)PSend13773, (Optr)&t_block_return);
    Block PBlock13769 = new_Block_with(empty_Array, empty_Array, PThreadedCode13770, 1, PSend13773);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_primary_Const = new_Constant((Optr)SMB_primary);
    // at:ifAbsentPut:. 
    Send PSend13774 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_primary_Const, (Optr)PBlock13769);
    Array PThreadedCode13768 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_primary, (Optr)&t_push_closure, (Optr)PBlock13769, (Optr)&t_send2, (Optr)PSend13774, (Optr)&t_method_return);
    Method PMethod13767 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13768, 1, PSend13774);
    
    MethodClosure MC_SMB_preStorePrimary = new_MethodClosure((Method)PMethod13767, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStorePrimary, MC_SMB_preStorePrimary);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    String string_13777 = new_String(L"KEYWORD");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13778 = new_Send((Optr)self, SMB_identifierBody, 0);
    String string_13779 = new_String(L":");
    Constant string_13779_Const = new_Constant((Optr)string_13779);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13780 = new_Send((Optr)string_13779_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13781 = new_Send((Optr)PSend13780, SMB_consume, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13782 = new_Send((Optr)PSend13778, SMB__logicAnd_, 1, (Optr)PSend13781);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13777_Const = new_Constant((Optr)string_13777);
    // named:parsing:. 
    Send PSend13783 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13777_Const, (Optr)PSend13782);
    Array PThreadedCode13776 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13777, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13778, (Optr)&t_push1, (Optr)string_13779, (Optr)&t_send0, (Optr)PSend13780, (Optr)&t_send0, (Optr)PSend13781, (Optr)&t_send1, (Optr)PSend13782, (Optr)&t_send2, (Optr)PSend13783, (Optr)&t_method_return);
    Method PMethod13775 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13776, 1, PSend13783);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod13775, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeUppercase() {
    Symbol SMB_initializeUppercase = new_Symbol(L"initializeUppercase");
    String string_13786 = new_String(L"A-Z");
    Constant string_13786_Const = new_Constant((Optr)string_13786);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13787 = new_Send((Optr)string_13786_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13785 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13786, (Optr)&t_send0, (Optr)PSend13787, (Optr)&t_method_return);
    Method PMethod13784 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13785, 1, PSend13787);
    
    MethodClosure MC_SMB_initializeUppercase = new_MethodClosure((Method)PMethod13784, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUppercase, MC_SMB_initializeUppercase);
}


static void init_SMB_preStoreMessageExpression() {
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    Symbol  SMB_messageExpression = new_Symbol(L"messageExpression");
    String string_13792 = new_String(L"MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13792_Const = new_Constant((Optr)string_13792);
    // named:. 
    Send PSend13793 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13792_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13794 = new_Send((Optr)PSend13793, SMB_memo, 0);
    Array PThreadedCode13791 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13792, (Optr)&t_send1, (Optr)PSend13793, (Optr)&t_send0, (Optr)PSend13794, (Optr)&t_block_return);
    Block PBlock13790 = new_Block_with(empty_Array, empty_Array, PThreadedCode13791, 1, PSend13794);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_messageExpression_Const = new_Constant((Optr)SMB_messageExpression);
    // at:ifAbsentPut:. 
    Send PSend13795 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_messageExpression_Const, (Optr)PBlock13790);
    Array PThreadedCode13789 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_messageExpression, (Optr)&t_push_closure, (Optr)PBlock13790, (Optr)&t_send2, (Optr)PSend13795, (Optr)&t_method_return);
    Method PMethod13788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13789, 1, PSend13795);
    
    MethodClosure MC_SMB_preStoreMessageExpression = new_MethodClosure((Method)PMethod13788, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreMessageExpression, MC_SMB_preStoreMessageExpression);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    String string_13798 = new_String(L"UNARY-EXPRESSION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13799 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13800 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13801 = new_Send((Optr)PSend13800, SMB_plus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13802 = new_Send((Optr)PSend13799, SMB__and_, 1, (Optr)PSend13801);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13798_Const = new_Constant((Optr)string_13798);
    // named:parsing:. 
    Send PSend13803 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13798_Const, (Optr)PSend13802);
    Array PThreadedCode13797 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13798, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13799, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13800, (Optr)&t_send0, (Optr)PSend13801, (Optr)&t_send1, (Optr)PSend13802, (Optr)&t_send2, (Optr)PSend13803, (Optr)&t_method_return);
    Method PMethod13796 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13797, 1, PSend13803);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod13796, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeSymbol() {
    Symbol SMB_initializeSymbol = new_Symbol(L"initializeSymbol");
    String string_13806 = new_String(L"SYMBOL");
    Symbol SMB_symbolKeywords = new_Symbol(L"symbolKeywords");
    // symbolKeywords. 
    Send PSend13807 = new_Send((Optr)self, SMB_symbolKeywords, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13808 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13809 = new_Send((Optr)PSend13807, SMB__or_, 1, (Optr)PSend13808);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13810 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13811 = new_Send((Optr)PSend13809, SMB__lt__equals_, 1, (Optr)PSend13810);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13812 = new_Send((Optr)self, SMB_string, 0);
    // <=. 
    Send PSend13813 = new_Send((Optr)PSend13811, SMB__lt__equals_, 1, (Optr)PSend13812);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13806_Const = new_Constant((Optr)string_13806);
    // named:parsing:. 
    Send PSend13814 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13806_Const, (Optr)PSend13813);
    Array PThreadedCode13805 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13806, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13807, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13808, (Optr)&t_send1, (Optr)PSend13809, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13810, (Optr)&t_send1, (Optr)PSend13811, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13812, (Optr)&t_send1, (Optr)PSend13813, (Optr)&t_send2, (Optr)PSend13814, (Optr)&t_method_return);
    Method PMethod13804 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13805, 1, PSend13814);
    
    MethodClosure MC_SMB_initializeSymbol = new_MethodClosure((Method)PMethod13804, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbol, MC_SMB_initializeSymbol);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    String string_13817 = new_String(L"PRIMARY-VARIABLE");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13818 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13819 = new_String(L".");
    Constant string_13819_Const = new_Constant((Optr)string_13819);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13820 = new_Send((Optr)string_13819_Const, SMB_asParser, 0);
    // identifier. 
    Send PSend13821 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13822 = new_Send((Optr)PSend13820, SMB__logicAnd_, 1, (Optr)PSend13821);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13823 = new_Send((Optr)PSend13822, SMB_strongTimes, 0);
    // &&. 
    Send PSend13824 = new_Send((Optr)PSend13818, SMB__logicAnd_, 1, (Optr)PSend13823);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13817_Const = new_Constant((Optr)string_13817);
    // named:parsing:. 
    Send PSend13825 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13817_Const, (Optr)PSend13824);
    Array PThreadedCode13816 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13817, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13818, (Optr)&t_push1, (Optr)string_13819, (Optr)&t_send0, (Optr)PSend13820, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13821, (Optr)&t_send1, (Optr)PSend13822, (Optr)&t_send0, (Optr)PSend13823, (Optr)&t_send1, (Optr)PSend13824, (Optr)&t_send2, (Optr)PSend13825, (Optr)&t_method_return);
    Method PMethod13815 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13816, 1, PSend13825);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod13815, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    String string_13828 = new_String(L"KEYWORDS-ARGUMENTS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13829 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13830 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13831 = new_Send((Optr)PSend13829, SMB__and_, 1, (Optr)PSend13830);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13832 = new_Send((Optr)PSend13831, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13828_Const = new_Constant((Optr)string_13828);
    // named:parsing:. 
    Send PSend13833 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13828_Const, (Optr)PSend13832);
    Array PThreadedCode13827 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13828, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13829, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13830, (Optr)&t_send1, (Optr)PSend13831, (Optr)&t_send0, (Optr)PSend13832, (Optr)&t_send2, (Optr)PSend13833, (Optr)&t_method_return);
    Method PMethod13826 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13827, 1, PSend13833);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod13826, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_preStoreBracketIndexExpression() {
    Symbol SMB_preStoreBracketIndexExpression = new_Symbol(L"preStoreBracketIndexExpression");
    Symbol  SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    String string_13838 = new_String(L"BRACKET-INDEX-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13838_Const = new_Constant((Optr)string_13838);
    // named:. 
    Send PSend13839 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13838_Const);
    Array PThreadedCode13837 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13838, (Optr)&t_send1, (Optr)PSend13839, (Optr)&t_block_return);
    Block PBlock13836 = new_Block_with(empty_Array, empty_Array, PThreadedCode13837, 1, PSend13839);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_bracketIndexExpression_Const = new_Constant((Optr)SMB_bracketIndexExpression);
    // at:ifAbsentPut:. 
    Send PSend13840 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_bracketIndexExpression_Const, (Optr)PBlock13836);
    Array PThreadedCode13835 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_bracketIndexExpression, (Optr)&t_push_closure, (Optr)PBlock13836, (Optr)&t_send2, (Optr)PSend13840, (Optr)&t_method_return);
    Method PMethod13834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13835, 1, PSend13840);
    
    MethodClosure MC_SMB_preStoreBracketIndexExpression = new_MethodClosure((Method)PMethod13834, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBracketIndexExpression, MC_SMB_preStoreBracketIndexExpression);
}


static void init_SMB_initializePrimary() {
    Symbol SMB_initializePrimary = new_Symbol(L"initializePrimary");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13843 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13844 = new_Send((Optr)self, SMB_primary, 0);
    Array PThreadedCode13842 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13843, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13844, (Optr)&t_method_return);
    Method PMethod13841 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13842, 2, PSend13843, PSend13844);
    
    MethodClosure MC_SMB_initializePrimary = new_MethodClosure((Method)PMethod13841, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimary, MC_SMB_initializePrimary);
}


static void init_SMB_parseMethod_() {
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray13846 = new_Array_with(1, (Optr)VAR_method_0_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend13848 = new_Send((Optr)self, SMB_method, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13849 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_method_0_0, (Optr)PSend13848);
    Array PThreadedCode13847 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13848, (Optr)&t_send2, (Optr)PSend13849, (Optr)&t_method_return);
    Method PMethod13845 = new_Method_with(PArray13846, empty_Array, empty_Array, PThreadedCode13847, 1, PSend13849);
    
    MethodClosure MC_SMB_parseMethod_ = new_MethodClosure((Method)PMethod13845, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseMethod_, MC_SMB_parseMethod_);
}


static void init_SMB_initializeDecimalDigit() {
    Symbol SMB_initializeDecimalDigit = new_Symbol(L"initializeDecimalDigit");
    String string_13852 = new_String(L"0-9");
    Constant string_13852_Const = new_Constant((Optr)string_13852);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13853 = new_Send((Optr)string_13852_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13851 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13852, (Optr)&t_send0, (Optr)PSend13853, (Optr)&t_method_return);
    Method PMethod13850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13851, 1, PSend13853);
    
    MethodClosure MC_SMB_initializeDecimalDigit = new_MethodClosure((Method)PMethod13850, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeDecimalDigit, MC_SMB_initializeDecimalDigit);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    String string_13856 = new_String(L"TEMPORARIES");
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13857 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend13858 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13859 = new_Send((Optr)PSend13858, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13860 = new_Send((Optr)PSend13857, SMB__and_, 1, (Optr)PSend13859);
    // bar. 
    Send PSend13861 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13862 = new_Send((Optr)PSend13860, SMB__lt__and_, 1, (Optr)PSend13861);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13856_Const = new_Constant((Optr)string_13856);
    // named:parsing:. 
    Send PSend13863 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13856_Const, (Optr)PSend13862);
    Array PThreadedCode13855 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13856, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13857, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13858, (Optr)&t_send0, (Optr)PSend13859, (Optr)&t_send1, (Optr)PSend13860, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13861, (Optr)&t_send1, (Optr)PSend13862, (Optr)&t_send2, (Optr)PSend13863, (Optr)&t_method_return);
    Method PMethod13854 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13855, 1, PSend13863);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod13854, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    String string_13866 = new_String(L"KEYWORD-MESSAGE-EXPRESSION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13867 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13868 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13869 = new_Send((Optr)PSend13867, SMB__and_, 1, (Optr)PSend13868);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13870 = new_Send((Optr)PSend13869, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13866_Const = new_Constant((Optr)string_13866);
    // named:parsing:. 
    Send PSend13871 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13866_Const, (Optr)PSend13870);
    Array PThreadedCode13865 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13866, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13867, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13868, (Optr)&t_send1, (Optr)PSend13869, (Optr)&t_send0, (Optr)PSend13870, (Optr)&t_send2, (Optr)PSend13871, (Optr)&t_method_return);
    Method PMethod13864 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13865, 1, PSend13871);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod13864, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    String string_13874 = new_String(L"SYMBOL-KEYWORDS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13875 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13876 = new_Send((Optr)PSend13875, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13874_Const = new_Constant((Optr)string_13874);
    // named:parsing:. 
    Send PSend13877 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13874_Const, (Optr)PSend13876);
    Array PThreadedCode13873 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13874, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13875, (Optr)&t_send0, (Optr)PSend13876, (Optr)&t_send2, (Optr)PSend13877, (Optr)&t_method_return);
    Method PMethod13872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13873, 1, PSend13877);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod13872, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeSpecialCharacter() {
    Symbol SMB_initializeSpecialCharacter = new_Symbol(L"initializeSpecialCharacter");
    String string_13880 = new_String(L"+*/\\~<>=@%?!&`,");
    Constant string_13880_Const = new_Constant((Optr)string_13880);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13881 = new_Send((Optr)string_13880_Const, SMB_asPEGChoice, 0);
    Array PThreadedCode13879 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13880, (Optr)&t_send0, (Optr)PSend13881, (Optr)&t_method_return);
    Method PMethod13878 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13879, 1, PSend13881);
    
    MethodClosure MC_SMB_initializeSpecialCharacter = new_MethodClosure((Method)PMethod13878, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSpecialCharacter, MC_SMB_initializeSpecialCharacter);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Symbol  SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    String string_13886 = new_String(L"CASCADED-MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13886_Const = new_Constant((Optr)string_13886);
    // named:. 
    Send PSend13887 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13886_Const);
    Array PThreadedCode13885 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13886, (Optr)&t_send1, (Optr)PSend13887, (Optr)&t_block_return);
    Block PBlock13884 = new_Block_with(empty_Array, empty_Array, PThreadedCode13885, 1, PSend13887);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_cascadedMessageExpression_Const = new_Constant((Optr)SMB_cascadedMessageExpression);
    // at:ifAbsentPut:. 
    Send PSend13888 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_cascadedMessageExpression_Const, (Optr)PBlock13884);
    Array PThreadedCode13883 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_cascadedMessageExpression, (Optr)&t_push_closure, (Optr)PBlock13884, (Optr)&t_send2, (Optr)PSend13888, (Optr)&t_method_return);
    Method PMethod13882 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13883, 1, PSend13888);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod13882, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_parseStatements_() {
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    Variable VAR_statements_0_0 = new_Variable_named(L"statements", 0);
    Array PArray13890 = new_Array_with(1, (Optr)VAR_statements_0_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13892 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13893 = new_Send((Optr)PSend13892, SMB_end, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13894 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_statements_0_0, (Optr)PSend13893);
    Array PThreadedCode13891 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13892, (Optr)&t_send0, (Optr)PSend13893, (Optr)&t_send2, (Optr)PSend13894, (Optr)&t_method_return);
    Method PMethod13889 = new_Method_with(PArray13890, empty_Array, empty_Array, PThreadedCode13891, 1, PSend13894);
    
    MethodClosure MC_SMB_parseStatements_ = new_MethodClosure((Method)PMethod13889, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseStatements_, MC_SMB_parseStatements_);
}


static void init_SMB_preStoreBinaryObjectDescription() {
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    Symbol  SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    String string_13899 = new_String(L"BINARY-OBJECT-DESCRIPTION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13899_Const = new_Constant((Optr)string_13899);
    // named:. 
    Send PSend13900 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13899_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13901 = new_Send((Optr)PSend13900, SMB_memo, 0);
    Array PThreadedCode13898 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13899, (Optr)&t_send1, (Optr)PSend13900, (Optr)&t_send0, (Optr)PSend13901, (Optr)&t_block_return);
    Block PBlock13897 = new_Block_with(empty_Array, empty_Array, PThreadedCode13898, 1, PSend13901);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryObjectDescription_Const = new_Constant((Optr)SMB_binaryObjectDescription);
    // at:ifAbsentPut:. 
    Send PSend13902 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryObjectDescription_Const, (Optr)PBlock13897);
    Array PThreadedCode13896 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryObjectDescription, (Optr)&t_push_closure, (Optr)PBlock13897, (Optr)&t_send2, (Optr)PSend13902, (Optr)&t_method_return);
    Method PMethod13895 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13896, 1, PSend13902);
    
    MethodClosure MC_SMB_preStoreBinaryObjectDescription = new_MethodClosure((Method)PMethod13895, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBinaryObjectDescription, MC_SMB_preStoreBinaryObjectDescription);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    String string_13905 = new_String(L"BLOCK");
    String string_13906 = new_String(L"[");
    Constant string_13906_Const = new_Constant((Optr)string_13906);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13907 = new_Send((Optr)string_13906_Const, SMB_asParser, 0);
    Symbol SMB_blockArguments = new_Symbol(L"blockArguments");
    // blockArguments. 
    Send PSend13908 = new_Send((Optr)self, SMB_blockArguments, 0);
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13909 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13910 = new_Send((Optr)PSend13908, SMB__and_, 1, (Optr)PSend13909);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13911 = new_Send((Optr)PSend13910, SMB_optional, 0);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13912 = new_Send((Optr)self, SMB_temporaries, 0);
    // optional. 
    Send PSend13913 = new_Send((Optr)PSend13912, SMB_optional, 0);
    // &. 
    Send PSend13914 = new_Send((Optr)PSend13911, SMB__and_, 1, (Optr)PSend13913);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13915 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13916 = new_Send((Optr)PSend13914, SMB__lt__and_, 1, (Optr)PSend13915);
    String string_13917 = new_String(L"]");
    Constant string_13917_Const = new_Constant((Optr)string_13917);
    // <&. 
    Send PSend13918 = new_Send((Optr)PSend13916, SMB__lt__and_, 1, (Optr)string_13917_Const);
    // blockArguments. 
    Send PSend13919 = new_Send((Optr)self, SMB_blockArguments, 0);
    // optional. 
    Send PSend13920 = new_Send((Optr)PSend13919, SMB_optional, 0);
    String string_13921 = new_String(L"]");
    Constant string_13921_Const = new_Constant((Optr)string_13921);
    // &. 
    Send PSend13922 = new_Send((Optr)PSend13920, SMB__and_, 1, (Optr)string_13921_Const);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13923 = new_Send((Optr)PSend13918, SMB__or_, 1, (Optr)PSend13922);
    // &. 
    Send PSend13924 = new_Send((Optr)PSend13907, SMB__and_, 1, (Optr)PSend13923);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13905_Const = new_Constant((Optr)string_13905);
    // named:parsing:. 
    Send PSend13925 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13905_Const, (Optr)PSend13924);
    Array PThreadedCode13904 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13905, (Optr)&t_push1, (Optr)string_13906, (Optr)&t_send0, (Optr)PSend13907, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13908, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13909, (Optr)&t_send1, (Optr)PSend13910, (Optr)&t_send0, (Optr)PSend13911, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13912, (Optr)&t_send0, (Optr)PSend13913, (Optr)&t_send1, (Optr)PSend13914, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13915, (Optr)&t_send1, (Optr)PSend13916, (Optr)&t_push1, (Optr)string_13917, (Optr)&t_send1, (Optr)PSend13918, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13919, (Optr)&t_send0, (Optr)PSend13920, (Optr)&t_push1, (Optr)string_13921, (Optr)&t_send1, (Optr)PSend13922, (Optr)&t_send1, (Optr)PSend13923, (Optr)&t_send1, (Optr)PSend13924, (Optr)&t_send2, (Optr)PSend13925, (Optr)&t_method_return);
    Method PMethod13903 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13904, 1, PSend13925);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod13903, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    String string_13928 = new_String(L"IDENTIFIER");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13929 = new_Send((Optr)self, SMB_identifierBody, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13928_Const = new_Constant((Optr)string_13928);
    // named:parsing:. 
    Send PSend13930 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13928_Const, (Optr)PSend13929);
    Array PThreadedCode13927 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13928, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13929, (Optr)&t_send2, (Optr)PSend13930, (Optr)&t_method_return);
    Method PMethod13926 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13927, 1, PSend13930);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod13926, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_injectCascadedMessageExpression() {
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13933 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13934 = new_Send((Optr)self, SMB_messageExpression, 0);
    String string_13935 = new_String(L";");
    Constant string_13935_Const = new_Constant((Optr)string_13935);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13936 = new_Send((Optr)string_13935_Const, SMB_asParser, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13937 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_binaryMessageExpression = new_Symbol(L"binaryMessageExpression");
    // binaryMessageExpression. 
    Send PSend13938 = new_Send((Optr)self, SMB_binaryMessageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13939 = new_Send((Optr)PSend13937, SMB__or_, 1, (Optr)PSend13938);
    Symbol SMB_unaryMessageExpression = new_Symbol(L"unaryMessageExpression");
    // unaryMessageExpression. 
    Send PSend13940 = new_Send((Optr)self, SMB_unaryMessageExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13941 = new_Send((Optr)PSend13939, SMB__lt__equals_, 1, (Optr)PSend13940);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13942 = new_Send((Optr)PSend13936, SMB__and_, 1, (Optr)PSend13941);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13943 = new_Send((Optr)PSend13942, SMB_plus, 0);
    // &. 
    Send PSend13944 = new_Send((Optr)PSend13934, SMB__and_, 1, (Optr)PSend13943);
    // <=. 
    Send PSend13945 = new_Send((Optr)PSend13933, SMB__lt__equals_, 1, (Optr)PSend13944);
    Array PThreadedCode13932 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13933, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13934, (Optr)&t_push1, (Optr)string_13935, (Optr)&t_send0, (Optr)PSend13936, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13937, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13938, (Optr)&t_send1, (Optr)PSend13939, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13940, (Optr)&t_send1, (Optr)PSend13941, (Optr)&t_send1, (Optr)PSend13942, (Optr)&t_send0, (Optr)PSend13943, (Optr)&t_send1, (Optr)PSend13944, (Optr)&t_send1, (Optr)PSend13945, (Optr)&t_method_return);
    Method PMethod13931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13932, 1, PSend13945);
    
    MethodClosure MC_SMB_injectCascadedMessageExpression = new_MethodClosure((Method)PMethod13931, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectCascadedMessageExpression, MC_SMB_injectCascadedMessageExpression);
}


static void init_SMB_initializeCascadedMessageExpression() {
    Symbol SMB_initializeCascadedMessageExpression = new_Symbol(L"initializeCascadedMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13948 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13949 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Array PThreadedCode13947 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13948, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13949, (Optr)&t_method_return);
    Method PMethod13946 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13947, 2, PSend13948, PSend13949);
    
    MethodClosure MC_SMB_initializeCascadedMessageExpression = new_MethodClosure((Method)PMethod13946, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCascadedMessageExpression, MC_SMB_initializeCascadedMessageExpression);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    String string_13952 = new_String(L"RADIX-NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13953 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13954 = new_String(L"r");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13954_Const = new_Constant((Optr)string_13954);
    // &. 
    Send PSend13955 = new_Send((Optr)PSend13953, SMB__and_, 1, (Optr)string_13954_Const);
    // numberFormat. 
    Send PSend13956 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13957 = new_Send((Optr)PSend13955, SMB__lt__and_, 1, (Optr)PSend13956);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13952_Const = new_Constant((Optr)string_13952);
    // named:parsing:. 
    Send PSend13958 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13952_Const, (Optr)PSend13957);
    Array PThreadedCode13951 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13952, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13953, (Optr)&t_push1, (Optr)string_13954, (Optr)&t_send1, (Optr)PSend13955, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13956, (Optr)&t_send1, (Optr)PSend13957, (Optr)&t_send2, (Optr)PSend13958, (Optr)&t_method_return);
    Method PMethod13950 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13951, 1, PSend13958);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod13950, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    String string_13961 = new_String(L"SYMBOL-IN-ARRAY");
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13962 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13961_Const = new_Constant((Optr)string_13961);
    // named:parsing:. 
    Send PSend13963 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13961_Const, (Optr)PSend13962);
    Array PThreadedCode13960 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13961, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13962, (Optr)&t_send2, (Optr)PSend13963, (Optr)&t_method_return);
    Method PMethod13959 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13960, 1, PSend13963);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod13959, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    String string_13966 = new_String(L"STATEMENTS");
    Symbol SMB_subExpression = new_Symbol(L"subExpression");
    // subExpression. 
    Send PSend13967 = new_Send((Optr)self, SMB_subExpression, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13968 = new_Send((Optr)PSend13967, SMB_times, 0);
    Symbol SMB_return = new_Symbol(L"return");
    // return. 
    Send PSend13969 = new_Send((Optr)self, SMB_return, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13970 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13971 = new_Send((Optr)PSend13969, SMB__or_, 1, (Optr)PSend13970);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13972 = new_Send((Optr)PSend13971, SMB_optional, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13973 = new_Send((Optr)PSend13968, SMB__and_, 1, (Optr)PSend13972);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13966_Const = new_Constant((Optr)string_13966);
    // named:parsing:. 
    Send PSend13974 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13966_Const, (Optr)PSend13973);
    Array PThreadedCode13965 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13966, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13967, (Optr)&t_send0, (Optr)PSend13968, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13969, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13970, (Optr)&t_send1, (Optr)PSend13971, (Optr)&t_send0, (Optr)PSend13972, (Optr)&t_send1, (Optr)PSend13973, (Optr)&t_send2, (Optr)PSend13974, (Optr)&t_method_return);
    Method PMethod13964 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13965, 1, PSend13974);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod13964, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    String string_13977 = new_String(L"SYMBOL-CONSTANT");
    String string_13978 = new_String(L"#");
    Constant string_13978_Const = new_Constant((Optr)string_13978);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13979 = new_Send((Optr)string_13978_Const, SMB_asParser, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13980 = new_Send((Optr)PSend13979, SMB_plus, 0);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13981 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13982 = new_Send((Optr)PSend13980, SMB__logicAnd_, 1, (Optr)PSend13981);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13977_Const = new_Constant((Optr)string_13977);
    // named:parsing:. 
    Send PSend13983 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13977_Const, (Optr)PSend13982);
    Array PThreadedCode13976 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13977, (Optr)&t_push1, (Optr)string_13978, (Optr)&t_send0, (Optr)PSend13979, (Optr)&t_send0, (Optr)PSend13980, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13981, (Optr)&t_send1, (Optr)PSend13982, (Optr)&t_send2, (Optr)PSend13983, (Optr)&t_method_return);
    Method PMethod13975 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13976, 1, PSend13983);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod13975, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Variable VAR_array_0_0 = new_Variable_named(L"array", 0);
    Array PArray13985 = new_Array_with(1, (Optr)VAR_array_0_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    String string_13989 = new_String(L"ARRAY");
    Constant string_13989_Const = new_Constant((Optr)string_13989);
    // named:. 
    Send PSend13988 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13989_Const);
    Assign PAssign13987 = new_Assign((Optr)VAR_array_0_0, (Optr)PSend13988);
    String string_13990 = new_String(L"(");
    Constant string_13990_Const = new_Constant((Optr)string_13990);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13991 = new_Send((Optr)string_13990_Const, SMB_asParser, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend13992 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend13993 = new_Send((Optr)self, SMB_stringConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13994 = new_Send((Optr)PSend13992, SMB__or_, 1, (Optr)PSend13993);
    Symbol SMB_symbolInArray = new_Symbol(L"symbolInArray");
    // symbolInArray. 
    Send PSend13995 = new_Send((Optr)self, SMB_symbolInArray, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13996 = new_Send((Optr)PSend13994, SMB__lt__equals_, 1, (Optr)PSend13995);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend13997 = new_Send((Optr)self, SMB_symbolConstant, 0);
    // <=. 
    Send PSend13998 = new_Send((Optr)PSend13996, SMB__lt__equals_, 1, (Optr)PSend13997);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend13999 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend14000 = new_Send((Optr)PSend13998, SMB__lt__equals_, 1, (Optr)PSend13999);
    // <=. 
    Send PSend14001 = new_Send((Optr)PSend14000, SMB__lt__equals_, 1, (Optr)VAR_array_0_0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend14002 = new_Send((Optr)PSend14001, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14003 = new_Send((Optr)PSend13991, SMB__and_, 1, (Optr)PSend14002);
    String string_14004 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_14004_Const = new_Constant((Optr)string_14004);
    // <&. 
    Send PSend14005 = new_Send((Optr)PSend14003, SMB__lt__and_, 1, (Optr)string_14004_Const);
    // <=. 
    Send PSend14006 = new_Send((Optr)VAR_array_0_0, SMB__lt__equals_, 1, (Optr)PSend14005);
    Array PThreadedCode13986 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push1, (Optr)PAssign13987, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13989, (Optr)&t_send1, (Optr)PSend13988, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_push1, (Optr)string_13990, (Optr)&t_send0, (Optr)PSend13991, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13992, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13993, (Optr)&t_send1, (Optr)PSend13994, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13995, (Optr)&t_send1, (Optr)PSend13996, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13997, (Optr)&t_send1, (Optr)PSend13998, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13999, (Optr)&t_send1, (Optr)PSend14000, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_send1, (Optr)PSend14001, (Optr)&t_send0, (Optr)PSend14002, (Optr)&t_send1, (Optr)PSend14003, (Optr)&t_push1, (Optr)string_14004, (Optr)&t_send1, (Optr)PSend14005, (Optr)&t_send1, (Optr)PSend14006, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_method_return);
    Method PMethod13984 = new_Method_with(empty_Array, PArray13985, empty_Array, PThreadedCode13986, 3, PAssign13987, PSend14006, VAR_array_0_0);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod13984, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    String string_14009 = new_String(L"KEYWORD-ANNOTATION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend14010 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14011 = new_Send((Optr)self, SMB_primary, 0);
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
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14007, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    // preStorePrimary. 
    Send PSend14017 = new_Send((Optr)self, SMB_preStorePrimary, 0);
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    // preStoreMessageExpression. 
    Send PSend14018 = new_Send((Optr)self, SMB_preStoreMessageExpression, 0);
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    // preStoreCascadedMessageExpression. 
    Send PSend14019 = new_Send((Optr)self, SMB_preStoreCascadedMessageExpression, 0);
    Symbol  SMB_expression = new_Symbol(L"expression");
    String string_14020 = new_String(L"EXPRESSION");
    Symbol SMB_assignmentExpressions = new_Symbol(L"assignmentExpressions");
    // assignmentExpressions. 
    Send PSend14021 = new_Send((Optr)self, SMB_assignmentExpressions, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend14022 = new_Send((Optr)PSend14021, SMB_optional, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend14023 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14024 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14025 = new_Send((Optr)PSend14023, SMB__or_, 1, (Optr)PSend14024);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14026 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14027 = new_Send((Optr)PSend14025, SMB__lt__equals_, 1, (Optr)PSend14026);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14028 = new_Send((Optr)PSend14022, SMB__and_, 1, (Optr)PSend14027);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14020_Const = new_Constant((Optr)string_14020);
    // named:parsing:. 
    Send PSend14029 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14020_Const, (Optr)PSend14028);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // at:put:. 
    Send PSend14030 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_put_, 2, (Optr)SMB_expression_Const, (Optr)PSend14029);
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    // injectPrimary. 
    Send PSend14031 = new_Send((Optr)self, SMB_injectPrimary, 0);
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    // injectMessageExpression. 
    Send PSend14032 = new_Send((Optr)self, SMB_injectMessageExpression, 0);
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    // injectCascadedMessageExpression. 
    Send PSend14033 = new_Send((Optr)self, SMB_injectCascadedMessageExpression, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14034 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode14016 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14017, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14018, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14019, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14020, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14021, (Optr)&t_send0, (Optr)PSend14022, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14023, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14024, (Optr)&t_send1, (Optr)PSend14025, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14026, (Optr)&t_send1, (Optr)PSend14027, (Optr)&t_send1, (Optr)PSend14028, (Optr)&t_send2, (Optr)PSend14029, (Optr)&t_send2, (Optr)PSend14030, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14031, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14032, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14033, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend14034, (Optr)&t_method_return);
    Method PMethod14015 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14016, 8, PSend14017, PSend14018, PSend14019, PSend14030, PSend14031, PSend14032, PSend14033, PSend14034);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14015, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    String string_14037 = new_String(L"FLOAT");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend14038 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_14039 = new_String(L".");
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Constant string_14039_Const = new_Constant((Optr)string_14039);
    // &&. 
    Send PSend14040 = new_Send((Optr)PSend14038, SMB__logicAnd_, 1, (Optr)string_14039_Const);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14041 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend14042 = new_Send((Optr)PSend14041, SMB_strongPlus, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14043 = new_Send((Optr)PSend14040, SMB__lt__and_, 1, (Optr)PSend14042);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14037_Const = new_Constant((Optr)string_14037);
    // named:parsing:. 
    Send PSend14044 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14037_Const, (Optr)PSend14043);
    Array PThreadedCode14036 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14037, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14038, (Optr)&t_push1, (Optr)string_14039, (Optr)&t_send1, (Optr)PSend14040, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14041, (Optr)&t_send0, (Optr)PSend14042, (Optr)&t_send1, (Optr)PSend14043, (Optr)&t_send2, (Optr)PSend14044, (Optr)&t_method_return);
    Method PMethod14035 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14036, 1, PSend14044);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14035, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    String string_14047 = new_String(L"BLOCK-ARGUMENTS");
    String string_14048 = new_String(L":");
    Constant string_14048_Const = new_Constant((Optr)string_14048);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14049 = new_Send((Optr)string_14048_Const, SMB_asParser, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend14050 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14051 = new_Send((Optr)PSend14049, SMB__and_, 1, (Optr)PSend14050);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14052 = new_Send((Optr)PSend14051, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14047_Const = new_Constant((Optr)string_14047);
    // named:parsing:. 
    Send PSend14053 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14047_Const, (Optr)PSend14052);
    Array PThreadedCode14046 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14047, (Optr)&t_push1, (Optr)string_14048, (Optr)&t_send0, (Optr)PSend14049, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14050, (Optr)&t_send1, (Optr)PSend14051, (Optr)&t_send0, (Optr)PSend14052, (Optr)&t_send2, (Optr)PSend14053, (Optr)&t_method_return);
    Method PMethod14045 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14046, 1, PSend14053);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14045, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeCommentFormat() {
    Symbol SMB_initializeCommentFormat = new_Symbol(L"initializeCommentFormat");
    Variable VAR_commentBorder_0_0 = new_Variable_named(L"commentBorder", 0);
    Array PArray14055 = new_Array_with(1, (Optr)VAR_commentBorder_0_0);
    String string_14059 = new_String(L"\"");
    Constant string_14059_Const = new_Constant((Optr)string_14059);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14058 = new_Send((Optr)string_14059_Const, SMB_asParser, 0);
    Assign PAssign14057 = new_Assign((Optr)VAR_commentBorder_0_0, (Optr)PSend14058);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend14060 = new_Send((Optr)VAR_commentBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend14061 = new_Send((Optr)PSend14060, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14062 = new_Send((Optr)PSend14061, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14063 = new_Send((Optr)VAR_commentBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend14062);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14064 = new_Send((Optr)PSend14063, SMB__lt__and_, 1, (Optr)VAR_commentBorder_0_0);
    Array PThreadedCode14056 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign14057, (Optr)&t_push1, (Optr)string_14059, (Optr)&t_send0, (Optr)PSend14058, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send0, (Optr)PSend14060, (Optr)&t_send0, (Optr)PSend14061, (Optr)&t_send0, (Optr)PSend14062, (Optr)&t_send1, (Optr)PSend14063, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send1, (Optr)PSend14064, (Optr)&t_method_return);
    Method PMethod14054 = new_Method_with(empty_Array, PArray14055, empty_Array, PThreadedCode14056, 2, PAssign14057, PSend14064);
    
    MethodClosure MC_SMB_initializeCommentFormat = new_MethodClosure((Method)PMethod14054, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCommentFormat, MC_SMB_initializeCommentFormat);
}


static void init_SMB_initializeSeparator() {
    Symbol SMB_initializeSeparator = new_Symbol(L"initializeSeparator");
    Super PSuper14067 = new_Super(SMB_initializeSeparator, 0);
    Symbol SMB_commentFormat = new_Symbol(L"commentFormat");
    // commentFormat. 
    Send PSend14068 = new_Send((Optr)self, SMB_commentFormat, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14069 = new_Send((Optr)PSuper14067, SMB__or_, 1, (Optr)PSend14068);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14070 = new_Send((Optr)PSend14069, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend14071 = new_Send((Optr)PSend14070, SMB_omit, 0);
    Array PThreadedCode14066 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14067, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14068, (Optr)&t_send1, (Optr)PSend14069, (Optr)&t_send0, (Optr)PSend14070, (Optr)&t_send0, (Optr)PSend14071, (Optr)&t_method_return);
    Method PMethod14065 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14066, 1, PSend14071);
    
    MethodClosure MC_SMB_initializeSeparator = new_MethodClosure((Method)PMethod14065, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSeparator, MC_SMB_initializeSeparator);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    String string_14074 = new_String(L"BRACE-EXPRESSION");
    String string_14075 = new_String(L"{");
    Constant string_14075_Const = new_Constant((Optr)string_14075);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14076 = new_Send((Optr)string_14075_Const, SMB_asParser, 0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend14077 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14078 = new_Send((Optr)PSend14076, SMB__and_, 1, (Optr)PSend14077);
    String string_14079 = new_String(L"}");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_14079_Const = new_Constant((Optr)string_14079);
    // <&. 
    Send PSend14080 = new_Send((Optr)PSend14078, SMB__lt__and_, 1, (Optr)string_14079_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14074_Const = new_Constant((Optr)string_14074);
    // named:parsing:. 
    Send PSend14081 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14074_Const, (Optr)PSend14080);
    Array PThreadedCode14073 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14074, (Optr)&t_push1, (Optr)string_14075, (Optr)&t_send0, (Optr)PSend14076, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14077, (Optr)&t_send1, (Optr)PSend14078, (Optr)&t_push1, (Optr)string_14079, (Optr)&t_send1, (Optr)PSend14080, (Optr)&t_send2, (Optr)PSend14081, (Optr)&t_method_return);
    Method PMethod14072 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14073, 1, PSend14081);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14072, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_injectBinaryObjectDescription() {
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend14084 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend14085 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend14086 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14087 = new_Send((Optr)PSend14085, SMB__or_, 1, (Optr)PSend14086);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14088 = new_Send((Optr)PSend14084, SMB__lt__equals_, 1, (Optr)PSend14087);
    Array PThreadedCode14083 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14084, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14085, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14086, (Optr)&t_send1, (Optr)PSend14087, (Optr)&t_send1, (Optr)PSend14088, (Optr)&t_method_return);
    Method PMethod14082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14083, 1, PSend14088);
    
    MethodClosure MC_SMB_injectBinaryObjectDescription = new_MethodClosure((Method)PMethod14082, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectBinaryObjectDescription, MC_SMB_injectBinaryObjectDescription);
}


static void init_SMB_initializeLowercase() {
    Symbol SMB_initializeLowercase = new_Symbol(L"initializeLowercase");
    String string_14091 = new_String(L"a-z");
    Constant string_14091_Const = new_Constant((Optr)string_14091);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend14092 = new_Send((Optr)string_14091_Const, SMB_asPEGRange, 0);
    Array PThreadedCode14090 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_14091, (Optr)&t_send0, (Optr)PSend14092, (Optr)&t_method_return);
    Method PMethod14089 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14090, 1, PSend14092);
    
    MethodClosure MC_SMB_initializeLowercase = new_MethodClosure((Method)PMethod14089, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLowercase, MC_SMB_initializeLowercase);
}


static void init_SMB_injectMessageExpression() {
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14095 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB_keywordExpression = new_Symbol(L"keywordExpression");
    // keywordExpression. 
    Send PSend14096 = new_Send((Optr)self, SMB_keywordExpression, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend14097 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14098 = new_Send((Optr)PSend14096, SMB__or_, 1, (Optr)PSend14097);
    Symbol SMB_unaryExpression = new_Symbol(L"unaryExpression");
    // unaryExpression. 
    Send PSend14099 = new_Send((Optr)self, SMB_unaryExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14100 = new_Send((Optr)PSend14098, SMB__lt__equals_, 1, (Optr)PSend14099);
    // <=. 
    Send PSend14101 = new_Send((Optr)PSend14095, SMB__lt__equals_, 1, (Optr)PSend14100);
    Array PThreadedCode14094 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14095, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14096, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14097, (Optr)&t_send1, (Optr)PSend14098, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14099, (Optr)&t_send1, (Optr)PSend14100, (Optr)&t_send1, (Optr)PSend14101, (Optr)&t_method_return);
    Method PMethod14093 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14094, 1, PSend14101);
    
    MethodClosure MC_SMB_injectMessageExpression = new_MethodClosure((Method)PMethod14093, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectMessageExpression, MC_SMB_injectMessageExpression);
}


static void init_SMB_initializeIdentifierBody() {
    Symbol SMB_initializeIdentifierBody = new_Symbol(L"initializeIdentifierBody");
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend14104 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend14105 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend14106 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14107 = new_Send((Optr)PSend14105, SMB__or_, 1, (Optr)PSend14106);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14108 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14109 = new_Send((Optr)PSend14107, SMB__lt__equals_, 1, (Optr)PSend14108);
    String string_14110 = new_String(L"!?");
    Constant string_14110_Const = new_Constant((Optr)string_14110);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend14111 = new_Send((Optr)string_14110_Const, SMB_asPEGChoice, 0);
    // <=. 
    Send PSend14112 = new_Send((Optr)PSend14109, SMB__lt__equals_, 1, (Optr)PSend14111);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14113 = new_Send((Optr)PSend14112, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14114 = new_Send((Optr)PSend14104, SMB__logicAnd_, 1, (Optr)PSend14113);
    Array PThreadedCode14103 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14104, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14105, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14106, (Optr)&t_send1, (Optr)PSend14107, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14108, (Optr)&t_send1, (Optr)PSend14109, (Optr)&t_push1, (Optr)string_14110, (Optr)&t_send0, (Optr)PSend14111, (Optr)&t_send1, (Optr)PSend14112, (Optr)&t_send0, (Optr)PSend14113, (Optr)&t_send1, (Optr)PSend14114, (Optr)&t_method_return);
    Method PMethod14102 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14103, 1, PSend14114);
    
    MethodClosure MC_SMB_initializeIdentifierBody = new_MethodClosure((Method)PMethod14102, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifierBody, MC_SMB_initializeIdentifierBody);
}


static void init_SMB_initializeLiteral() {
    Symbol SMB_initializeLiteral = new_Symbol(L"initializeLiteral");
    Symbol SMB_float = new_Symbol(L"float");
    // float. 
    Send PSend14117 = new_Send((Optr)self, SMB_float, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend14118 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14119 = new_Send((Optr)PSend14117, SMB__or_, 1, (Optr)PSend14118);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend14120 = new_Send((Optr)self, SMB_symbolConstant, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14121 = new_Send((Optr)PSend14119, SMB__lt__equals_, 1, (Optr)PSend14120);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend14122 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend14123 = new_Send((Optr)PSend14121, SMB__lt__equals_, 1, (Optr)PSend14122);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend14124 = new_Send((Optr)self, SMB_stringConstant, 0);
    // <=. 
    Send PSend14125 = new_Send((Optr)PSend14123, SMB__lt__equals_, 1, (Optr)PSend14124);
    Symbol SMB_arrayConstant = new_Symbol(L"arrayConstant");
    // arrayConstant. 
    Send PSend14126 = new_Send((Optr)self, SMB_arrayConstant, 0);
    // <=. 
    Send PSend14127 = new_Send((Optr)PSend14125, SMB__lt__equals_, 1, (Optr)PSend14126);
    Array PThreadedCode14116 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14117, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14118, (Optr)&t_send1, (Optr)PSend14119, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14120, (Optr)&t_send1, (Optr)PSend14121, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14122, (Optr)&t_send1, (Optr)PSend14123, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14124, (Optr)&t_send1, (Optr)PSend14125, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14126, (Optr)&t_send1, (Optr)PSend14127, (Optr)&t_method_return);
    Method PMethod14115 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14116, 1, PSend14127);
    
    MethodClosure MC_SMB_initializeLiteral = new_MethodClosure((Method)PMethod14115, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLiteral, MC_SMB_initializeLiteral);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    String string_14130 = new_String(L"BINARY-MESSAGE-EXPRESSION");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend14131 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend14132 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14133 = new_Send((Optr)PSend14131, SMB__and_, 1, (Optr)PSend14132);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14130_Const = new_Constant((Optr)string_14130);
    // named:parsing:. 
    Send PSend14134 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14130_Const, (Optr)PSend14133);
    Array PThreadedCode14129 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14130, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14131, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14132, (Optr)&t_send1, (Optr)PSend14133, (Optr)&t_send2, (Optr)PSend14134, (Optr)&t_method_return);
    Method PMethod14128 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14129, 1, PSend14134);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14128, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    String string_14137 = new_String(L"STRING");
    Symbol SMB_stringSegment = new_Symbol(L"stringSegment");
    // stringSegment. 
    Send PSend14138 = new_Send((Optr)self, SMB_stringSegment, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend14139 = new_Send((Optr)PSend14138, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14137_Const = new_Constant((Optr)string_14137);
    // named:parsing:. 
    Send PSend14140 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14137_Const, (Optr)PSend14139);
    Array PThreadedCode14136 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14137, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14138, (Optr)&t_send0, (Optr)PSend14139, (Optr)&t_send2, (Optr)PSend14140, (Optr)&t_method_return);
    Method PMethod14135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14136, 1, PSend14140);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14135, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    Array PThreadedCode14142 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod14141 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14142, 1, self);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod14141, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_test, MC_SMB_test);
}


static void init_SMB_initializeSubExpression() {
    Symbol SMB_initializeSubExpression = new_Symbol(L"initializeSubExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14145 = new_Send((Optr)self, SMB_expression, 0);
    String string_14146 = new_String(L".");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_14146_Const = new_Constant((Optr)string_14146);
    // &. 
    Send PSend14147 = new_Send((Optr)PSend14145, SMB__and_, 1, (Optr)string_14146_Const);
    String string_14148 = new_String(L".");
    Symbol SMB__or_ = new_Symbol(L"|");
    Constant string_14148_Const = new_Constant((Optr)string_14148);
    // |. 
    Send PSend14149 = new_Send((Optr)PSend14147, SMB__or_, 1, (Optr)string_14148_Const);
    Array PThreadedCode14144 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14145, (Optr)&t_push1, (Optr)string_14146, (Optr)&t_send1, (Optr)PSend14147, (Optr)&t_push1, (Optr)string_14148, (Optr)&t_send1, (Optr)PSend14149, (Optr)&t_method_return);
    Method PMethod14143 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14144, 1, PSend14149);
    
    MethodClosure MC_SMB_initializeSubExpression = new_MethodClosure((Method)PMethod14143, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSubExpression, MC_SMB_initializeSubExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    String string_14152 = new_String(L"ANNOTATIONS");
    String string_14153 = new_String(L"<");
    Constant string_14153_Const = new_Constant((Optr)string_14153);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14154 = new_Send((Optr)string_14153_Const, SMB_asParser, 0);
    Symbol SMB_keywordAnnotation = new_Symbol(L"keywordAnnotation");
    // keywordAnnotation. 
    Send PSend14155 = new_Send((Optr)self, SMB_keywordAnnotation, 0);
    Symbol SMB_unaryAnnotation = new_Symbol(L"unaryAnnotation");
    // unaryAnnotation. 
    Send PSend14156 = new_Send((Optr)self, SMB_unaryAnnotation, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14157 = new_Send((Optr)PSend14155, SMB__or_, 1, (Optr)PSend14156);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14158 = new_Send((Optr)PSend14154, SMB__and_, 1, (Optr)PSend14157);
    String string_14159 = new_String(L">");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_14159_Const = new_Constant((Optr)string_14159);
    // <&. 
    Send PSend14160 = new_Send((Optr)PSend14158, SMB__lt__and_, 1, (Optr)string_14159_Const);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend14161 = new_Send((Optr)PSend14160, SMB_times, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14152_Const = new_Constant((Optr)string_14152);
    // named:parsing:. 
    Send PSend14162 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14152_Const, (Optr)PSend14161);
    Array PThreadedCode14151 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14152, (Optr)&t_push1, (Optr)string_14153, (Optr)&t_send0, (Optr)PSend14154, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14155, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14156, (Optr)&t_send1, (Optr)PSend14157, (Optr)&t_send1, (Optr)PSend14158, (Optr)&t_push1, (Optr)string_14159, (Optr)&t_send1, (Optr)PSend14160, (Optr)&t_send0, (Optr)PSend14161, (Optr)&t_send2, (Optr)PSend14162, (Optr)&t_method_return);
    Method PMethod14150 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14151, 1, PSend14162);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14150, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializeArrayConstant() {
    Symbol SMB_initializeArrayConstant = new_Symbol(L"initializeArrayConstant");
    String string_14165 = new_String(L"#");
    Constant string_14165_Const = new_Constant((Optr)string_14165);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14166 = new_Send((Optr)string_14165_Const, SMB_asParser, 0);
    Symbol SMB_array = new_Symbol(L"array");
    // array. 
    Send PSend14167 = new_Send((Optr)self, SMB_array, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14168 = new_Send((Optr)PSend14166, SMB__and_, 1, (Optr)PSend14167);
    Array PThreadedCode14164 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)string_14165, (Optr)&t_send0, (Optr)PSend14166, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14167, (Optr)&t_send1, (Optr)PSend14168, (Optr)&t_method_return);
    Method PMethod14163 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14164, 1, PSend14168);
    
    MethodClosure MC_SMB_initializeArrayConstant = new_MethodClosure((Method)PMethod14163, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArrayConstant, MC_SMB_initializeArrayConstant);
}


static void init_SMB_initializeBinaryObjectDescription() {
    Symbol SMB_initializeBinaryObjectDescription = new_Symbol(L"initializeBinaryObjectDescription");
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend14171 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend14172 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Array PThreadedCode14170 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14171, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14172, (Optr)&t_method_return);
    Method PMethod14169 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14170, 2, PSend14171, PSend14172);
    
    MethodClosure MC_SMB_initializeBinaryObjectDescription = new_MethodClosure((Method)PMethod14169, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryObjectDescription, MC_SMB_initializeBinaryObjectDescription);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Variable VAR_stringBorder_0_0 = new_Variable_named(L"stringBorder", 0);
    Array PArray14174 = new_Array_with(1, (Optr)VAR_stringBorder_0_0);
    String string_14178 = new_String(L"'");
    Constant string_14178_Const = new_Constant((Optr)string_14178);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14177 = new_Send((Optr)string_14178_Const, SMB_asParser, 0);
    Assign PAssign14176 = new_Assign((Optr)VAR_stringBorder_0_0, (Optr)PSend14177);
    String string_14179 = new_String(L"STRING-SEGMENT");
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend14180 = new_Send((Optr)VAR_stringBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend14181 = new_Send((Optr)PSend14180, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14182 = new_Send((Optr)PSend14181, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14183 = new_Send((Optr)VAR_stringBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend14182);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14184 = new_Send((Optr)PSend14183, SMB__lt__and_, 1, (Optr)VAR_stringBorder_0_0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14179_Const = new_Constant((Optr)string_14179);
    // named:parsing:. 
    Send PSend14185 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14179_Const, (Optr)PSend14184);
    Array PThreadedCode14175 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign14176, (Optr)&t_push1, (Optr)string_14178, (Optr)&t_send0, (Optr)PSend14177, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14179, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send0, (Optr)PSend14180, (Optr)&t_send0, (Optr)PSend14181, (Optr)&t_send0, (Optr)PSend14182, (Optr)&t_send1, (Optr)PSend14183, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send1, (Optr)PSend14184, (Optr)&t_send2, (Optr)PSend14185, (Optr)&t_method_return);
    Method PMethod14173 = new_Method_with(empty_Array, PArray14174, empty_Array, PThreadedCode14175, 2, PAssign14176, PSend14185);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14173, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeBar() {
    Symbol SMB_initializeBar = new_Symbol(L"initializeBar");
    String string_14188 = new_String(L"|");
    Constant string_14188_Const = new_Constant((Optr)string_14188);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14189 = new_Send((Optr)string_14188_Const, SMB_asParser, 0);
    Array PThreadedCode14187 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_14188, (Optr)&t_send0, (Optr)PSend14189, (Optr)&t_method_return);
    Method PMethod14186 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14187, 1, PSend14189);
    
    MethodClosure MC_SMB_initializeBar = new_MethodClosure((Method)PMethod14186, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBar, MC_SMB_initializeBar);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    String string_14192 = new_String(L"BINARY-ARGUMENT");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend14193 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend14194 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14195 = new_Send((Optr)PSend14193, SMB__and_, 1, (Optr)PSend14194);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14192_Const = new_Constant((Optr)string_14192);
    // named:parsing:. 
    Send PSend14196 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14192_Const, (Optr)PSend14195);
    Array PThreadedCode14191 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14192, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14193, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14194, (Optr)&t_send1, (Optr)PSend14195, (Optr)&t_send2, (Optr)PSend14196, (Optr)&t_method_return);
    Method PMethod14190 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14191, 1, PSend14196);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14190, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    String string_14199 = new_String(L"RETURN");
    String string_14200 = new_String(L"^");
    Constant string_14200_Const = new_Constant((Optr)string_14200);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14201 = new_Send((Optr)string_14200_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14202 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14203 = new_Send((Optr)PSend14201, SMB__and_, 1, (Optr)PSend14202);
    String string_14204 = new_String(L".");
    Constant string_14204_Const = new_Constant((Optr)string_14204);
    // asParser. 
    Send PSend14205 = new_Send((Optr)string_14204_Const, SMB_asParser, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend14206 = new_Send((Optr)PSend14205, SMB_optional, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend14207 = new_Send((Optr)PSend14206, SMB_omit, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14208 = new_Send((Optr)PSend14203, SMB__lt__and_, 1, (Optr)PSend14207);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14199_Const = new_Constant((Optr)string_14199);
    // named:parsing:. 
    Send PSend14209 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14199_Const, (Optr)PSend14208);
    Array PThreadedCode14198 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14199, (Optr)&t_push1, (Optr)string_14200, (Optr)&t_send0, (Optr)PSend14201, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14202, (Optr)&t_send1, (Optr)PSend14203, (Optr)&t_push1, (Optr)string_14204, (Optr)&t_send0, (Optr)PSend14205, (Optr)&t_send0, (Optr)PSend14206, (Optr)&t_send0, (Optr)PSend14207, (Optr)&t_send1, (Optr)PSend14208, (Optr)&t_send2, (Optr)PSend14209, (Optr)&t_method_return);
    Method PMethod14197 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14198, 1, PSend14209);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14197, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeNumberConstant() {
    Symbol SMB_initializeNumberConstant = new_Symbol(L"initializeNumberConstant");
    Symbol SMB_radix = new_Symbol(L"radix");
    // radix. 
    Send PSend14212 = new_Send((Optr)self, SMB_radix, 0);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend14213 = new_Send((Optr)self, SMB_number, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14214 = new_Send((Optr)PSend14212, SMB__or_, 1, (Optr)PSend14213);
    Array PThreadedCode14211 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14212, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14213, (Optr)&t_send1, (Optr)PSend14214, (Optr)&t_method_return);
    Method PMethod14210 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14211, 1, PSend14214);
    
    MethodClosure MC_SMB_initializeNumberConstant = new_MethodClosure((Method)PMethod14210, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberConstant, MC_SMB_initializeNumberConstant);
}


static void init_SMB_initializeCharacter() {
    Symbol SMB_initializeCharacter = new_Symbol(L"initializeCharacter");
    String string_14217 = new_String(L"[]{}()_^;$#:-|.'\"");
    Constant string_14217_Const = new_Constant((Optr)string_14217);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend14218 = new_Send((Optr)string_14217_Const, SMB_asPEGChoice, 0);
    Symbol SMB_separators = new_Symbol(L"separators");
    // separators. 
    Send PSend14219 = new_Send((Optr)PEGParser_classReference, SMB_separators, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14220 = new_Send((Optr)PSend14218, SMB__or_, 1, (Optr)PSend14219);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14221 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14222 = new_Send((Optr)PSend14220, SMB__lt__equals_, 1, (Optr)PSend14221);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend14223 = new_Send((Optr)self, SMB_letter, 0);
    // <=. 
    Send PSend14224 = new_Send((Optr)PSend14222, SMB__lt__equals_, 1, (Optr)PSend14223);
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend14225 = new_Send((Optr)self, SMB_specialCharacter, 0);
    // <=. 
    Send PSend14226 = new_Send((Optr)PSend14224, SMB__lt__equals_, 1, (Optr)PSend14225);
    Array PThreadedCode14216 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)string_14217, (Optr)&t_send0, (Optr)PSend14218, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend14219, (Optr)&t_send1, (Optr)PSend14220, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14221, (Optr)&t_send1, (Optr)PSend14222, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14223, (Optr)&t_send1, (Optr)PSend14224, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14225, (Optr)&t_send1, (Optr)PSend14226, (Optr)&t_method_return);
    Method PMethod14215 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14216, 1, PSend14226);
    
    MethodClosure MC_SMB_initializeCharacter = new_MethodClosure((Method)PMethod14215, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacter, MC_SMB_initializeCharacter);
}


static void init_SMB_injectPrimary() {
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14229 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_primaryVariable = new_Symbol(L"primaryVariable");
    // primaryVariable. 
    Send PSend14230 = new_Send((Optr)self, SMB_primaryVariable, 0);
    Symbol SMB_literal = new_Symbol(L"literal");
    // literal. 
    Send PSend14231 = new_Send((Optr)self, SMB_literal, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14232 = new_Send((Optr)PSend14230, SMB__or_, 1, (Optr)PSend14231);
    Symbol SMB_block = new_Symbol(L"block");
    // block. 
    Send PSend14233 = new_Send((Optr)self, SMB_block, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14234 = new_Send((Optr)PSend14232, SMB__lt__equals_, 1, (Optr)PSend14233);
    Symbol SMB_scopedExpression = new_Symbol(L"scopedExpression");
    // scopedExpression. 
    Send PSend14235 = new_Send((Optr)self, SMB_scopedExpression, 0);
    // <=. 
    Send PSend14236 = new_Send((Optr)PSend14234, SMB__lt__equals_, 1, (Optr)PSend14235);
    Symbol SMB_braceExpression = new_Symbol(L"braceExpression");
    // braceExpression. 
    Send PSend14237 = new_Send((Optr)self, SMB_braceExpression, 0);
    // <=. 
    Send PSend14238 = new_Send((Optr)PSend14236, SMB__lt__equals_, 1, (Optr)PSend14237);
    // <=. 
    Send PSend14239 = new_Send((Optr)PSend14229, SMB__lt__equals_, 1, (Optr)PSend14238);
    Array PThreadedCode14228 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14229, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14230, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14231, (Optr)&t_send1, (Optr)PSend14232, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14233, (Optr)&t_send1, (Optr)PSend14234, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14235, (Optr)&t_send1, (Optr)PSend14236, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14237, (Optr)&t_send1, (Optr)PSend14238, (Optr)&t_send1, (Optr)PSend14239, (Optr)&t_method_return);
    Method PMethod14227 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14228, 1, PSend14239);
    
    MethodClosure MC_SMB_injectPrimary = new_MethodClosure((Method)PMethod14227, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectPrimary, MC_SMB_injectPrimary);
}


static void init_SMB_initializeLetter() {
    Symbol SMB_initializeLetter = new_Symbol(L"initializeLetter");
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend14242 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend14243 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14244 = new_Send((Optr)PSend14242, SMB__or_, 1, (Optr)PSend14243);
    Array PThreadedCode14241 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14242, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14243, (Optr)&t_send1, (Optr)PSend14244, (Optr)&t_method_return);
    Method PMethod14240 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14241, 1, PSend14244);
    
    MethodClosure MC_SMB_initializeLetter = new_MethodClosure((Method)PMethod14240, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLetter, MC_SMB_initializeLetter);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    String string_14247 = new_String(L"ASSIGNMENT-EXPRESSIONS");
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend14248 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend14249 = new_Send((Optr)self, SMB_assignmentOp, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14250 = new_Send((Optr)PSend14248, SMB__and_, 1, (Optr)PSend14249);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14251 = new_Send((Optr)PSend14250, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14247_Const = new_Constant((Optr)string_14247);
    // named:parsing:. 
    Send PSend14252 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14247_Const, (Optr)PSend14251);
    Array PThreadedCode14246 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14247, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14248, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14249, (Optr)&t_send1, (Optr)PSend14250, (Optr)&t_send0, (Optr)PSend14251, (Optr)&t_send2, (Optr)PSend14252, (Optr)&t_method_return);
    Method PMethod14245 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14246, 1, PSend14252);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14245, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_initializeFinalExpression() {
    Symbol SMB_initializeFinalExpression = new_Symbol(L"initializeFinalExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14255 = new_Send((Optr)self, SMB_expression, 0);
    Array PThreadedCode14254 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14255, (Optr)&t_method_return);
    Method PMethod14253 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14254, 1, PSend14255);
    
    MethodClosure MC_SMB_initializeFinalExpression = new_MethodClosure((Method)PMethod14253, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFinalExpression, MC_SMB_initializeFinalExpression);
}


static void init_SMB_initializeMessageExpression() {
    Symbol SMB_initializeMessageExpression = new_Symbol(L"initializeMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14258 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14259 = new_Send((Optr)self, SMB_messageExpression, 0);
    Array PThreadedCode14257 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14258, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14259, (Optr)&t_method_return);
    Method PMethod14256 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14257, 2, PSend14258, PSend14259);
    
    MethodClosure MC_SMB_initializeMessageExpression = new_MethodClosure((Method)PMethod14256, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessageExpression, MC_SMB_initializeMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    String string_14262 = new_String(L"UNARY-ANNOTATION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend14263 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14262_Const = new_Constant((Optr)string_14262);
    // named:parsing:. 
    Send PSend14264 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14262_Const, (Optr)PSend14263);
    Array PThreadedCode14261 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14262, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14263, (Optr)&t_send2, (Optr)PSend14264, (Optr)&t_method_return);
    Method PMethod14260 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14261, 1, PSend14264);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14260, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeMessagePattern() {
    Symbol SMB_initializeMessagePattern = new_Symbol(L"initializeMessagePattern");
    String string_14267 = new_String(L"MESSAGE-PATTERN");
    Symbol SMB_keywordsArguments = new_Symbol(L"keywordsArguments");
    // keywordsArguments. 
    Send PSend14268 = new_Send((Optr)self, SMB_keywordsArguments, 0);
    Symbol SMB_binaryMessageDefinition = new_Symbol(L"binaryMessageDefinition");
    // binaryMessageDefinition. 
    Send PSend14269 = new_Send((Optr)self, SMB_binaryMessageDefinition, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14270 = new_Send((Optr)PSend14268, SMB__or_, 1, (Optr)PSend14269);
    Symbol SMB_unaryMessageDefinition = new_Symbol(L"unaryMessageDefinition");
    // unaryMessageDefinition. 
    Send PSend14271 = new_Send((Optr)self, SMB_unaryMessageDefinition, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14272 = new_Send((Optr)PSend14270, SMB__lt__equals_, 1, (Optr)PSend14271);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14267_Const = new_Constant((Optr)string_14267);
    // named:parsing:. 
    Send PSend14273 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14267_Const, (Optr)PSend14272);
    Array PThreadedCode14266 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14267, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14268, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14269, (Optr)&t_send1, (Optr)PSend14270, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14271, (Optr)&t_send1, (Optr)PSend14272, (Optr)&t_send2, (Optr)PSend14273, (Optr)&t_method_return);
    Method PMethod14265 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14266, 1, PSend14273);
    
    MethodClosure MC_SMB_initializeMessagePattern = new_MethodClosure((Method)PMethod14265, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessagePattern, MC_SMB_initializeMessagePattern);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign14276 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode14275 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign14276, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14275, 2, PAssign14276, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod14274, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
    store_method(HEADER(Smalltalk_Parser_SmalltalkGrammar_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper14282 = new_Super(SMB_new, 0);
    Assign PAssign14281 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)PSuper14282);
    Array PThreadedCode14280 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14281, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14282, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock14279 = new_Block_with(empty_Array, empty_Array, PThreadedCode14280, 1, PAssign14281);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend14283 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock14279);
    Array PThreadedCode14278 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock14279, (Optr)&t_send1, (Optr)PSend14283, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_method_return);
    Method PMethod14277 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14278, 2, PSend14283, slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod14277, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
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