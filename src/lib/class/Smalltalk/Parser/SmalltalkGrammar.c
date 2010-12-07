#include <lib/class/Smalltalk/Parser/SmalltalkGrammar.h>


Optr slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance;
Optr layout_Smalltalk_Parser_SmalltalkGrammar_Class_class;
Optr layout_Smalltalk_Parser_SmalltalkGrammar;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    String string_13632 = new_String(L"UNARY-MESSAGE-EXPRESSION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13633 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13632_Const = new_Constant((Optr)string_13632);
    // named:parsing:. 
    Send PSend13634 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13632_Const, (Optr)PSend13633);
    Array PThreadedCode13631 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13632, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13633, (Optr)&t_send2, (Optr)PSend13634, (Optr)&t_method_return);
    Method PMethod13630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13631, 1, PSend13634);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod13630, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    String string_13637 = new_String(L"UNARY-SELECTOR");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13638 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13639 = new_String(L":");
    Constant string_13639_Const = new_Constant((Optr)string_13639);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13640 = new_Send((Optr)string_13639_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13641 = new_Send((Optr)PSend13640, SMB_not, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13642 = new_Send((Optr)PSend13638, SMB__logicAnd_, 1, (Optr)PSend13641);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13637_Const = new_Constant((Optr)string_13637);
    // named:parsing:. 
    Send PSend13643 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13637_Const, (Optr)PSend13642);
    Array PThreadedCode13636 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13637, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13638, (Optr)&t_push1, (Optr)string_13639, (Optr)&t_send0, (Optr)PSend13640, (Optr)&t_send0, (Optr)PSend13641, (Optr)&t_send1, (Optr)PSend13642, (Optr)&t_send2, (Optr)PSend13643, (Optr)&t_method_return);
    Method PMethod13635 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13636, 1, PSend13643);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod13635, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    String string_13646 = new_String(L"NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13647 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13646_Const = new_Constant((Optr)string_13646);
    // named:parsing:. 
    Send PSend13648 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13646_Const, (Optr)PSend13647);
    Array PThreadedCode13645 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13646, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13647, (Optr)&t_send2, (Optr)PSend13648, (Optr)&t_method_return);
    Method PMethod13644 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13645, 1, PSend13648);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod13644, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    String string_13651 = new_String(L"UNARY-OBJECT-DESCRIPTION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13652 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13653 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13654 = new_Send((Optr)PSend13653, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13655 = new_Send((Optr)PSend13652, SMB__and_, 1, (Optr)PSend13654);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13651_Const = new_Constant((Optr)string_13651);
    // named:parsing:. 
    Send PSend13656 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13651_Const, (Optr)PSend13655);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13657 = new_Send((Optr)PSend13656, SMB_memo, 0);
    Array PThreadedCode13650 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13651, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13652, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13653, (Optr)&t_send0, (Optr)PSend13654, (Optr)&t_send1, (Optr)PSend13655, (Optr)&t_send2, (Optr)PSend13656, (Optr)&t_send0, (Optr)PSend13657, (Optr)&t_method_return);
    Method PMethod13649 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13650, 1, PSend13657);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod13649, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    String string_13660 = new_String(L"VARIABLE-NAME");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13661 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13660_Const = new_Constant((Optr)string_13660);
    // named:parsing:. 
    Send PSend13662 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13660_Const, (Optr)PSend13661);
    Array PThreadedCode13659 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13660, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13661, (Optr)&t_send2, (Optr)PSend13662, (Optr)&t_method_return);
    Method PMethod13658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13659, 1, PSend13662);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod13658, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_assignmentOp() {
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    String string_13665 = new_String(L":=");
    Constant string_13665_Const = new_Constant((Optr)string_13665);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13666 = new_Send((Optr)string_13665_Const, SMB_asParser, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13667 = new_Send((Optr)PSend13666, SMB_omit, 0);
    Array PThreadedCode13664 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)string_13665, (Optr)&t_send0, (Optr)PSend13666, (Optr)&t_send0, (Optr)PSend13667, (Optr)&t_method_return);
    Method PMethod13663 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13664, 1, PSend13667);
    
    MethodClosure MC_SMB_assignmentOp = new_MethodClosure((Method)PMethod13663, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_assignmentOp, MC_SMB_assignmentOp);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    String string_13670 = new_String(L"CAPITAL-IDENTIFIER");
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13671 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13672 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13673 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13674 = new_Send((Optr)PSend13672, SMB__or_, 1, (Optr)PSend13673);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13675 = new_Send((Optr)PSend13674, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13676 = new_Send((Optr)PSend13671, SMB__logicAnd_, 1, (Optr)PSend13675);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13670_Const = new_Constant((Optr)string_13670);
    // named:parsing:. 
    Send PSend13677 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13670_Const, (Optr)PSend13676);
    Array PThreadedCode13669 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13670, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13671, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13672, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13673, (Optr)&t_send1, (Optr)PSend13674, (Optr)&t_send0, (Optr)PSend13675, (Optr)&t_send1, (Optr)PSend13676, (Optr)&t_send2, (Optr)PSend13677, (Optr)&t_method_return);
    Method PMethod13668 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13669, 1, PSend13677);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod13668, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    String string_13680 = new_String(L"BINARY-SELECTOR");
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13681 = new_Send((Optr)self, SMB_specialCharacter, 0);
    String string_13682 = new_String(L"-");
    Constant string_13682_Const = new_Constant((Optr)string_13682);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13683 = new_Send((Optr)string_13682_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13684 = new_Send((Optr)PSend13683, SMB_consume, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13685 = new_Send((Optr)PSend13681, SMB__or_, 1, (Optr)PSend13684);
    // specialCharacter. 
    Send PSend13686 = new_Send((Optr)self, SMB_specialCharacter, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13687 = new_Send((Optr)PSend13686, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13688 = new_Send((Optr)PSend13685, SMB__logicAnd_, 1, (Optr)PSend13687);
    String string_13689 = new_String(L"|");
    Constant string_13689_Const = new_Constant((Optr)string_13689);
    // asParser. 
    Send PSend13690 = new_Send((Optr)string_13689_Const, SMB_asParser, 0);
    // consume. 
    Send PSend13691 = new_Send((Optr)PSend13690, SMB_consume, 0);
    // |. 
    Send PSend13692 = new_Send((Optr)PSend13688, SMB__or_, 1, (Optr)PSend13691);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13680_Const = new_Constant((Optr)string_13680);
    // named:parsing:. 
    Send PSend13693 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13680_Const, (Optr)PSend13692);
    Array PThreadedCode13679 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13680, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13681, (Optr)&t_push1, (Optr)string_13682, (Optr)&t_send0, (Optr)PSend13683, (Optr)&t_send0, (Optr)PSend13684, (Optr)&t_send1, (Optr)PSend13685, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13686, (Optr)&t_send0, (Optr)PSend13687, (Optr)&t_send1, (Optr)PSend13688, (Optr)&t_push1, (Optr)string_13689, (Optr)&t_send0, (Optr)PSend13690, (Optr)&t_send0, (Optr)PSend13691, (Optr)&t_send1, (Optr)PSend13692, (Optr)&t_send2, (Optr)PSend13693, (Optr)&t_method_return);
    Method PMethod13678 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13679, 1, PSend13693);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod13678, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    String string_13696 = new_String(L"STRING-CONSTANT");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13697 = new_Send((Optr)self, SMB_string, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13696_Const = new_Constant((Optr)string_13696);
    // named:parsing:. 
    Send PSend13698 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13696_Const, (Optr)PSend13697);
    Array PThreadedCode13695 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13696, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13697, (Optr)&t_send2, (Optr)PSend13698, (Optr)&t_method_return);
    Method PMethod13694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13695, 1, PSend13698);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod13694, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeParameterName() {
    Symbol SMB_initializeParameterName = new_Symbol(L"initializeParameterName");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13701 = new_Send((Optr)self, SMB_identifier, 0);
    Array PThreadedCode13700 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13701, (Optr)&t_method_return);
    Method PMethod13699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13700, 1, PSend13701);
    
    MethodClosure MC_SMB_initializeParameterName = new_MethodClosure((Method)PMethod13699, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeParameterName, MC_SMB_initializeParameterName);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    String string_13704 = new_String(L"KEYWORD-EXPRESSION");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13705 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13706 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    // bracketIndexExpression. 
    Send PSend13707 = new_Send((Optr)self, SMB_bracketIndexExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13708 = new_Send((Optr)PSend13706, SMB__or_, 1, (Optr)PSend13707);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13709 = new_Send((Optr)PSend13705, SMB__and_, 1, (Optr)PSend13708);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13704_Const = new_Constant((Optr)string_13704);
    // named:parsing:. 
    Send PSend13710 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13704_Const, (Optr)PSend13709);
    Array PThreadedCode13703 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13704, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13705, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13706, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13707, (Optr)&t_send1, (Optr)PSend13708, (Optr)&t_send1, (Optr)PSend13709, (Optr)&t_send2, (Optr)PSend13710, (Optr)&t_method_return);
    Method PMethod13702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13703, 1, PSend13710);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod13702, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    String string_13713 = new_String(L"BRACKET-INDEX-EXPRESSION");
    String string_13714 = new_String(L"[");
    Constant string_13714_Const = new_Constant((Optr)string_13714);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13715 = new_Send((Optr)string_13714_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13716 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13717 = new_Send((Optr)PSend13715, SMB__and_, 1, (Optr)PSend13716);
    String string_13718 = new_String(L"]");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13718_Const = new_Constant((Optr)string_13718);
    // <&. 
    Send PSend13719 = new_Send((Optr)PSend13717, SMB__lt__and_, 1, (Optr)string_13718_Const);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend13720 = new_Send((Optr)self, SMB_assignmentOp, 0);
    // expression. 
    Send PSend13721 = new_Send((Optr)self, SMB_expression, 0);
    // &. 
    Send PSend13722 = new_Send((Optr)PSend13720, SMB__and_, 1, (Optr)PSend13721);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13723 = new_Send((Optr)PSend13722, SMB_optional, 0);
    // <&. 
    Send PSend13724 = new_Send((Optr)PSend13719, SMB__lt__and_, 1, (Optr)PSend13723);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13713_Const = new_Constant((Optr)string_13713);
    // named:parsing:. 
    Send PSend13725 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13713_Const, (Optr)PSend13724);
    Array PThreadedCode13712 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13713, (Optr)&t_push1, (Optr)string_13714, (Optr)&t_send0, (Optr)PSend13715, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13716, (Optr)&t_send1, (Optr)PSend13717, (Optr)&t_push1, (Optr)string_13718, (Optr)&t_send1, (Optr)PSend13719, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13720, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13721, (Optr)&t_send1, (Optr)PSend13722, (Optr)&t_send0, (Optr)PSend13723, (Optr)&t_send1, (Optr)PSend13724, (Optr)&t_send2, (Optr)PSend13725, (Optr)&t_method_return);
    Method PMethod13711 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13712, 1, PSend13725);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod13711, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    // preStoreBinaryObjectDescription. 
    Send PSend13728 = new_Send((Optr)self, SMB_preStoreBinaryObjectDescription, 0);
    Symbol  SMB_binaryExpression = new_Symbol(L"binaryExpression");
    String string_13729 = new_String(L"BINARY-EXPRESSION");
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13730 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13731 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13732 = new_Send((Optr)PSend13730, SMB__and_, 1, (Optr)PSend13731);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13733 = new_Send((Optr)PSend13732, SMB_plus, 0);
    // unaryObjectDescription. 
    Send PSend13734 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    // &. 
    Send PSend13735 = new_Send((Optr)PSend13733, SMB__and_, 1, (Optr)PSend13734);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13729_Const = new_Constant((Optr)string_13729);
    // named:parsing:. 
    Send PSend13736 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13729_Const, (Optr)PSend13735);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryExpression_Const = new_Constant((Optr)SMB_binaryExpression);
    // at:ifAbsentPut:. 
    Send PSend13737 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryExpression_Const, (Optr)PSend13736);
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    // injectBinaryObjectDescription. 
    Send PSend13738 = new_Send((Optr)self, SMB_injectBinaryObjectDescription, 0);
    // binaryExpression. 
    Send PSend13739 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Array PThreadedCode13727 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13728, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryExpression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13729, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13730, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13731, (Optr)&t_send1, (Optr)PSend13732, (Optr)&t_send0, (Optr)PSend13733, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13734, (Optr)&t_send1, (Optr)PSend13735, (Optr)&t_send2, (Optr)PSend13736, (Optr)&t_send2, (Optr)PSend13737, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13738, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13739, (Optr)&t_method_return);
    Method PMethod13726 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13727, 4, PSend13728, PSend13737, PSend13738, PSend13739);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod13726, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    String string_13742 = new_String(L"SCOPED-EXPRESSION");
    String string_13743 = new_String(L"(");
    Constant string_13743_Const = new_Constant((Optr)string_13743);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13744 = new_Send((Optr)string_13743_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13745 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13746 = new_Send((Optr)PSend13744, SMB__and_, 1, (Optr)PSend13745);
    String string_13747 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13747_Const = new_Constant((Optr)string_13747);
    // <&. 
    Send PSend13748 = new_Send((Optr)PSend13746, SMB__lt__and_, 1, (Optr)string_13747_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13742_Const = new_Constant((Optr)string_13742);
    // named:parsing:. 
    Send PSend13749 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13742_Const, (Optr)PSend13748);
    Array PThreadedCode13741 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13742, (Optr)&t_push1, (Optr)string_13743, (Optr)&t_send0, (Optr)PSend13744, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13745, (Optr)&t_send1, (Optr)PSend13746, (Optr)&t_push1, (Optr)string_13747, (Optr)&t_send1, (Optr)PSend13748, (Optr)&t_send2, (Optr)PSend13749, (Optr)&t_method_return);
    Method PMethod13740 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13741, 1, PSend13749);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod13740, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    String string_13752 = new_String(L"CHARACTER-CONSTANT");
    String string_13753 = new_String(L"$");
    Constant string_13753_Const = new_Constant((Optr)string_13753);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13754 = new_Send((Optr)string_13753_Const, SMB_asParser, 0);
    Symbol SMB_character = new_Symbol(L"character");
    // character. 
    Send PSend13755 = new_Send((Optr)self, SMB_character, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13756 = new_Send((Optr)PSend13754, SMB__logicAnd_, 1, (Optr)PSend13755);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13752_Const = new_Constant((Optr)string_13752);
    // named:parsing:. 
    Send PSend13757 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13752_Const, (Optr)PSend13756);
    Array PThreadedCode13751 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13752, (Optr)&t_push1, (Optr)string_13753, (Optr)&t_send0, (Optr)PSend13754, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13755, (Optr)&t_send1, (Optr)PSend13756, (Optr)&t_send2, (Optr)PSend13757, (Optr)&t_method_return);
    Method PMethod13750 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13751, 1, PSend13757);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod13750, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    String string_13760 = new_String(L"NUMBER-FORMAT");
    String string_13761 = new_String(L"-");
    Constant string_13761_Const = new_Constant((Optr)string_13761);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13762 = new_Send((Optr)string_13761_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13763 = new_Send((Optr)PSend13762, SMB_consume, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13764 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13765 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13766 = new_Send((Optr)PSend13764, SMB__or_, 1, (Optr)PSend13765);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13767 = new_Send((Optr)PSend13766, SMB_strongPlus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13768 = new_Send((Optr)PSend13763, SMB__and_, 1, (Optr)PSend13767);
    // decimalDigit. 
    Send PSend13769 = new_Send((Optr)self, SMB_decimalDigit, 0);
    // uppercase. 
    Send PSend13770 = new_Send((Optr)self, SMB_uppercase, 0);
    // |. 
    Send PSend13771 = new_Send((Optr)PSend13769, SMB__or_, 1, (Optr)PSend13770);
    // strongPlus. 
    Send PSend13772 = new_Send((Optr)PSend13771, SMB_strongPlus, 0);
    // |. 
    Send PSend13773 = new_Send((Optr)PSend13768, SMB__or_, 1, (Optr)PSend13772);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13760_Const = new_Constant((Optr)string_13760);
    // named:parsing:. 
    Send PSend13774 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13760_Const, (Optr)PSend13773);
    Array PThreadedCode13759 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13760, (Optr)&t_push1, (Optr)string_13761, (Optr)&t_send0, (Optr)PSend13762, (Optr)&t_send0, (Optr)PSend13763, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13764, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13765, (Optr)&t_send1, (Optr)PSend13766, (Optr)&t_send0, (Optr)PSend13767, (Optr)&t_send1, (Optr)PSend13768, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13769, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13770, (Optr)&t_send1, (Optr)PSend13771, (Optr)&t_send0, (Optr)PSend13772, (Optr)&t_send1, (Optr)PSend13773, (Optr)&t_send2, (Optr)PSend13774, (Optr)&t_method_return);
    Method PMethod13758 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13759, 1, PSend13774);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod13758, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    String string_13777 = new_String(L"METHOD");
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend13778 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_messagePattern = new_Symbol(L"messagePattern");
    // messagePattern. 
    Send PSend13779 = new_Send((Optr)self, SMB_messagePattern, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13780 = new_Send((Optr)PSend13778, SMB__and_, 1, (Optr)PSend13779);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13781 = new_Send((Optr)self, SMB_annotations, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13782 = new_Send((Optr)PSend13780, SMB__lt__and_, 1, (Optr)PSend13781);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13783 = new_Send((Optr)self, SMB_temporaries, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13784 = new_Send((Optr)PSend13783, SMB_optional, 0);
    // <&. 
    Send PSend13785 = new_Send((Optr)PSend13782, SMB__lt__and_, 1, (Optr)PSend13784);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13786 = new_Send((Optr)self, SMB_statements, 0);
    // <&. 
    Send PSend13787 = new_Send((Optr)PSend13785, SMB__lt__and_, 1, (Optr)PSend13786);
    // separator. 
    Send PSend13788 = new_Send((Optr)self, SMB_separator, 0);
    // <&. 
    Send PSend13789 = new_Send((Optr)PSend13787, SMB__lt__and_, 1, (Optr)PSend13788);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13790 = new_Send((Optr)PSend13789, SMB_end, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13777_Const = new_Constant((Optr)string_13777);
    // named:parsing:. 
    Send PSend13791 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13777_Const, (Optr)PSend13790);
    // separator. 
    Send PSend13792 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_separator_ = new_Symbol(L"separator:");
    // separator:. 
    Send PSend13793 = new_Send((Optr)PSend13791, SMB_separator_, 1, (Optr)PSend13792);
    Array PThreadedCode13776 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13777, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13778, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13779, (Optr)&t_send1, (Optr)PSend13780, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13781, (Optr)&t_send1, (Optr)PSend13782, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13783, (Optr)&t_send0, (Optr)PSend13784, (Optr)&t_send1, (Optr)PSend13785, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13786, (Optr)&t_send1, (Optr)PSend13787, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13788, (Optr)&t_send1, (Optr)PSend13789, (Optr)&t_send0, (Optr)PSend13790, (Optr)&t_send2, (Optr)PSend13791, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13792, (Optr)&t_send1, (Optr)PSend13793, (Optr)&t_method_return);
    Method PMethod13775 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13776, 1, PSend13793);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod13775, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    String string_13796 = new_String(L"UNARY-MESSAGE-DEFINITION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13797 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13796_Const = new_Constant((Optr)string_13796);
    // named:parsing:. 
    Send PSend13798 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13796_Const, (Optr)PSend13797);
    Array PThreadedCode13795 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13796, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13797, (Optr)&t_send2, (Optr)PSend13798, (Optr)&t_method_return);
    Method PMethod13794 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13795, 1, PSend13798);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod13794, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_preStorePrimary() {
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    Symbol  SMB_primary = new_Symbol(L"primary");
    String string_13803 = new_String(L"PRIMARY");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13803_Const = new_Constant((Optr)string_13803);
    // named:. 
    Send PSend13804 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13803_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13805 = new_Send((Optr)PSend13804, SMB_memo, 0);
    Array PThreadedCode13802 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13803, (Optr)&t_send1, (Optr)PSend13804, (Optr)&t_send0, (Optr)PSend13805, (Optr)&t_block_return);
    Block PBlock13801 = new_Block_with(empty_Array, empty_Array, PThreadedCode13802, 1, PSend13805);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_primary_Const = new_Constant((Optr)SMB_primary);
    // at:ifAbsentPut:. 
    Send PSend13806 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_primary_Const, (Optr)PBlock13801);
    Array PThreadedCode13800 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_primary, (Optr)&t_push_closure, (Optr)PBlock13801, (Optr)&t_send2, (Optr)PSend13806, (Optr)&t_method_return);
    Method PMethod13799 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13800, 1, PSend13806);
    
    MethodClosure MC_SMB_preStorePrimary = new_MethodClosure((Method)PMethod13799, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStorePrimary, MC_SMB_preStorePrimary);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    String string_13809 = new_String(L"KEYWORD");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13810 = new_Send((Optr)self, SMB_identifierBody, 0);
    String string_13811 = new_String(L":");
    Constant string_13811_Const = new_Constant((Optr)string_13811);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13812 = new_Send((Optr)string_13811_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13813 = new_Send((Optr)PSend13812, SMB_consume, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13814 = new_Send((Optr)PSend13810, SMB__logicAnd_, 1, (Optr)PSend13813);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13809_Const = new_Constant((Optr)string_13809);
    // named:parsing:. 
    Send PSend13815 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13809_Const, (Optr)PSend13814);
    Array PThreadedCode13808 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13809, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13810, (Optr)&t_push1, (Optr)string_13811, (Optr)&t_send0, (Optr)PSend13812, (Optr)&t_send0, (Optr)PSend13813, (Optr)&t_send1, (Optr)PSend13814, (Optr)&t_send2, (Optr)PSend13815, (Optr)&t_method_return);
    Method PMethod13807 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13808, 1, PSend13815);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod13807, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeUppercase() {
    Symbol SMB_initializeUppercase = new_Symbol(L"initializeUppercase");
    String string_13818 = new_String(L"A-Z");
    Constant string_13818_Const = new_Constant((Optr)string_13818);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13819 = new_Send((Optr)string_13818_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13817 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13818, (Optr)&t_send0, (Optr)PSend13819, (Optr)&t_method_return);
    Method PMethod13816 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13817, 1, PSend13819);
    
    MethodClosure MC_SMB_initializeUppercase = new_MethodClosure((Method)PMethod13816, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUppercase, MC_SMB_initializeUppercase);
}


static void init_SMB_preStoreMessageExpression() {
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    Symbol  SMB_messageExpression = new_Symbol(L"messageExpression");
    String string_13824 = new_String(L"MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13824_Const = new_Constant((Optr)string_13824);
    // named:. 
    Send PSend13825 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13824_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13826 = new_Send((Optr)PSend13825, SMB_memo, 0);
    Array PThreadedCode13823 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13824, (Optr)&t_send1, (Optr)PSend13825, (Optr)&t_send0, (Optr)PSend13826, (Optr)&t_block_return);
    Block PBlock13822 = new_Block_with(empty_Array, empty_Array, PThreadedCode13823, 1, PSend13826);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_messageExpression_Const = new_Constant((Optr)SMB_messageExpression);
    // at:ifAbsentPut:. 
    Send PSend13827 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_messageExpression_Const, (Optr)PBlock13822);
    Array PThreadedCode13821 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_messageExpression, (Optr)&t_push_closure, (Optr)PBlock13822, (Optr)&t_send2, (Optr)PSend13827, (Optr)&t_method_return);
    Method PMethod13820 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13821, 1, PSend13827);
    
    MethodClosure MC_SMB_preStoreMessageExpression = new_MethodClosure((Method)PMethod13820, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreMessageExpression, MC_SMB_preStoreMessageExpression);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    String string_13830 = new_String(L"UNARY-EXPRESSION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13831 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13832 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13833 = new_Send((Optr)PSend13832, SMB_plus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13834 = new_Send((Optr)PSend13831, SMB__and_, 1, (Optr)PSend13833);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13830_Const = new_Constant((Optr)string_13830);
    // named:parsing:. 
    Send PSend13835 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13830_Const, (Optr)PSend13834);
    Array PThreadedCode13829 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13830, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13831, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13832, (Optr)&t_send0, (Optr)PSend13833, (Optr)&t_send1, (Optr)PSend13834, (Optr)&t_send2, (Optr)PSend13835, (Optr)&t_method_return);
    Method PMethod13828 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13829, 1, PSend13835);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod13828, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeSymbol() {
    Symbol SMB_initializeSymbol = new_Symbol(L"initializeSymbol");
    String string_13838 = new_String(L"SYMBOL");
    Symbol SMB_symbolKeywords = new_Symbol(L"symbolKeywords");
    // symbolKeywords. 
    Send PSend13839 = new_Send((Optr)self, SMB_symbolKeywords, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13840 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13841 = new_Send((Optr)PSend13839, SMB__or_, 1, (Optr)PSend13840);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13842 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13843 = new_Send((Optr)PSend13841, SMB__lt__equals_, 1, (Optr)PSend13842);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13844 = new_Send((Optr)self, SMB_string, 0);
    // <=. 
    Send PSend13845 = new_Send((Optr)PSend13843, SMB__lt__equals_, 1, (Optr)PSend13844);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13838_Const = new_Constant((Optr)string_13838);
    // named:parsing:. 
    Send PSend13846 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13838_Const, (Optr)PSend13845);
    Array PThreadedCode13837 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13838, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13839, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13840, (Optr)&t_send1, (Optr)PSend13841, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13842, (Optr)&t_send1, (Optr)PSend13843, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13844, (Optr)&t_send1, (Optr)PSend13845, (Optr)&t_send2, (Optr)PSend13846, (Optr)&t_method_return);
    Method PMethod13836 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13837, 1, PSend13846);
    
    MethodClosure MC_SMB_initializeSymbol = new_MethodClosure((Method)PMethod13836, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbol, MC_SMB_initializeSymbol);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    String string_13849 = new_String(L"PRIMARY-VARIABLE");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13850 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13851 = new_String(L".");
    Constant string_13851_Const = new_Constant((Optr)string_13851);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13852 = new_Send((Optr)string_13851_Const, SMB_asParser, 0);
    // identifier. 
    Send PSend13853 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13854 = new_Send((Optr)PSend13852, SMB__logicAnd_, 1, (Optr)PSend13853);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13855 = new_Send((Optr)PSend13854, SMB_strongTimes, 0);
    // &&. 
    Send PSend13856 = new_Send((Optr)PSend13850, SMB__logicAnd_, 1, (Optr)PSend13855);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13849_Const = new_Constant((Optr)string_13849);
    // named:parsing:. 
    Send PSend13857 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13849_Const, (Optr)PSend13856);
    Array PThreadedCode13848 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13849, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13850, (Optr)&t_push1, (Optr)string_13851, (Optr)&t_send0, (Optr)PSend13852, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13853, (Optr)&t_send1, (Optr)PSend13854, (Optr)&t_send0, (Optr)PSend13855, (Optr)&t_send1, (Optr)PSend13856, (Optr)&t_send2, (Optr)PSend13857, (Optr)&t_method_return);
    Method PMethod13847 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13848, 1, PSend13857);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod13847, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    String string_13860 = new_String(L"KEYWORDS-ARGUMENTS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13861 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13862 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13863 = new_Send((Optr)PSend13861, SMB__and_, 1, (Optr)PSend13862);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13864 = new_Send((Optr)PSend13863, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13860_Const = new_Constant((Optr)string_13860);
    // named:parsing:. 
    Send PSend13865 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13860_Const, (Optr)PSend13864);
    Array PThreadedCode13859 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13860, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13861, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13862, (Optr)&t_send1, (Optr)PSend13863, (Optr)&t_send0, (Optr)PSend13864, (Optr)&t_send2, (Optr)PSend13865, (Optr)&t_method_return);
    Method PMethod13858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13859, 1, PSend13865);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod13858, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_preStoreBracketIndexExpression() {
    Symbol SMB_preStoreBracketIndexExpression = new_Symbol(L"preStoreBracketIndexExpression");
    Symbol  SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    String string_13870 = new_String(L"BRACKET-INDEX-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13870_Const = new_Constant((Optr)string_13870);
    // named:. 
    Send PSend13871 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13870_Const);
    Array PThreadedCode13869 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13870, (Optr)&t_send1, (Optr)PSend13871, (Optr)&t_block_return);
    Block PBlock13868 = new_Block_with(empty_Array, empty_Array, PThreadedCode13869, 1, PSend13871);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_bracketIndexExpression_Const = new_Constant((Optr)SMB_bracketIndexExpression);
    // at:ifAbsentPut:. 
    Send PSend13872 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_bracketIndexExpression_Const, (Optr)PBlock13868);
    Array PThreadedCode13867 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_bracketIndexExpression, (Optr)&t_push_closure, (Optr)PBlock13868, (Optr)&t_send2, (Optr)PSend13872, (Optr)&t_method_return);
    Method PMethod13866 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13867, 1, PSend13872);
    
    MethodClosure MC_SMB_preStoreBracketIndexExpression = new_MethodClosure((Method)PMethod13866, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBracketIndexExpression, MC_SMB_preStoreBracketIndexExpression);
}


static void init_SMB_initializePrimary() {
    Symbol SMB_initializePrimary = new_Symbol(L"initializePrimary");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13875 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13876 = new_Send((Optr)self, SMB_primary, 0);
    Array PThreadedCode13874 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13875, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13876, (Optr)&t_method_return);
    Method PMethod13873 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13874, 2, PSend13875, PSend13876);
    
    MethodClosure MC_SMB_initializePrimary = new_MethodClosure((Method)PMethod13873, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimary, MC_SMB_initializePrimary);
}


static void init_SMB_parseMethod_() {
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray13878 = new_Array_with(1, (Optr)VAR_method_0_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend13880 = new_Send((Optr)self, SMB_method, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13881 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_method_0_0, (Optr)PSend13880);
    Array PThreadedCode13879 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13880, (Optr)&t_send2, (Optr)PSend13881, (Optr)&t_method_return);
    Method PMethod13877 = new_Method_with(PArray13878, empty_Array, empty_Array, PThreadedCode13879, 1, PSend13881);
    
    MethodClosure MC_SMB_parseMethod_ = new_MethodClosure((Method)PMethod13877, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseMethod_, MC_SMB_parseMethod_);
}


static void init_SMB_initializeDecimalDigit() {
    Symbol SMB_initializeDecimalDigit = new_Symbol(L"initializeDecimalDigit");
    String string_13884 = new_String(L"0-9");
    Constant string_13884_Const = new_Constant((Optr)string_13884);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13885 = new_Send((Optr)string_13884_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13883 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13884, (Optr)&t_send0, (Optr)PSend13885, (Optr)&t_method_return);
    Method PMethod13882 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13883, 1, PSend13885);
    
    MethodClosure MC_SMB_initializeDecimalDigit = new_MethodClosure((Method)PMethod13882, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeDecimalDigit, MC_SMB_initializeDecimalDigit);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    String string_13888 = new_String(L"TEMPORARIES");
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13889 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend13890 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13891 = new_Send((Optr)PSend13890, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13892 = new_Send((Optr)PSend13889, SMB__and_, 1, (Optr)PSend13891);
    // bar. 
    Send PSend13893 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13894 = new_Send((Optr)PSend13892, SMB__lt__and_, 1, (Optr)PSend13893);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13888_Const = new_Constant((Optr)string_13888);
    // named:parsing:. 
    Send PSend13895 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13888_Const, (Optr)PSend13894);
    Array PThreadedCode13887 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13888, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13889, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13890, (Optr)&t_send0, (Optr)PSend13891, (Optr)&t_send1, (Optr)PSend13892, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13893, (Optr)&t_send1, (Optr)PSend13894, (Optr)&t_send2, (Optr)PSend13895, (Optr)&t_method_return);
    Method PMethod13886 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13887, 1, PSend13895);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod13886, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    String string_13898 = new_String(L"KEYWORD-MESSAGE-EXPRESSION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13899 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13900 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13901 = new_Send((Optr)PSend13899, SMB__and_, 1, (Optr)PSend13900);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13902 = new_Send((Optr)PSend13901, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13898_Const = new_Constant((Optr)string_13898);
    // named:parsing:. 
    Send PSend13903 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13898_Const, (Optr)PSend13902);
    Array PThreadedCode13897 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13898, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13899, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13900, (Optr)&t_send1, (Optr)PSend13901, (Optr)&t_send0, (Optr)PSend13902, (Optr)&t_send2, (Optr)PSend13903, (Optr)&t_method_return);
    Method PMethod13896 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13897, 1, PSend13903);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod13896, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    String string_13906 = new_String(L"SYMBOL-KEYWORDS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13907 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13908 = new_Send((Optr)PSend13907, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13906_Const = new_Constant((Optr)string_13906);
    // named:parsing:. 
    Send PSend13909 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13906_Const, (Optr)PSend13908);
    Array PThreadedCode13905 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13906, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13907, (Optr)&t_send0, (Optr)PSend13908, (Optr)&t_send2, (Optr)PSend13909, (Optr)&t_method_return);
    Method PMethod13904 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13905, 1, PSend13909);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod13904, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeSpecialCharacter() {
    Symbol SMB_initializeSpecialCharacter = new_Symbol(L"initializeSpecialCharacter");
    String string_13912 = new_String(L"+*/\\~<>=@%?!&`,");
    Constant string_13912_Const = new_Constant((Optr)string_13912);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13913 = new_Send((Optr)string_13912_Const, SMB_asPEGChoice, 0);
    Array PThreadedCode13911 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13912, (Optr)&t_send0, (Optr)PSend13913, (Optr)&t_method_return);
    Method PMethod13910 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13911, 1, PSend13913);
    
    MethodClosure MC_SMB_initializeSpecialCharacter = new_MethodClosure((Method)PMethod13910, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSpecialCharacter, MC_SMB_initializeSpecialCharacter);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Symbol  SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    String string_13918 = new_String(L"CASCADED-MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13918_Const = new_Constant((Optr)string_13918);
    // named:. 
    Send PSend13919 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13918_Const);
    Array PThreadedCode13917 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13918, (Optr)&t_send1, (Optr)PSend13919, (Optr)&t_block_return);
    Block PBlock13916 = new_Block_with(empty_Array, empty_Array, PThreadedCode13917, 1, PSend13919);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_cascadedMessageExpression_Const = new_Constant((Optr)SMB_cascadedMessageExpression);
    // at:ifAbsentPut:. 
    Send PSend13920 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_cascadedMessageExpression_Const, (Optr)PBlock13916);
    Array PThreadedCode13915 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_cascadedMessageExpression, (Optr)&t_push_closure, (Optr)PBlock13916, (Optr)&t_send2, (Optr)PSend13920, (Optr)&t_method_return);
    Method PMethod13914 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13915, 1, PSend13920);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod13914, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_parseStatements_() {
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    Variable VAR_statements_0_0 = new_Variable_named(L"statements", 0);
    Array PArray13922 = new_Array_with(1, (Optr)VAR_statements_0_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13924 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13925 = new_Send((Optr)PSend13924, SMB_end, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13926 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_statements_0_0, (Optr)PSend13925);
    Array PThreadedCode13923 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13924, (Optr)&t_send0, (Optr)PSend13925, (Optr)&t_send2, (Optr)PSend13926, (Optr)&t_method_return);
    Method PMethod13921 = new_Method_with(PArray13922, empty_Array, empty_Array, PThreadedCode13923, 1, PSend13926);
    
    MethodClosure MC_SMB_parseStatements_ = new_MethodClosure((Method)PMethod13921, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseStatements_, MC_SMB_parseStatements_);
}


static void init_SMB_preStoreBinaryObjectDescription() {
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    Symbol  SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    String string_13931 = new_String(L"BINARY-OBJECT-DESCRIPTION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13931_Const = new_Constant((Optr)string_13931);
    // named:. 
    Send PSend13932 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13931_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13933 = new_Send((Optr)PSend13932, SMB_memo, 0);
    Array PThreadedCode13930 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13931, (Optr)&t_send1, (Optr)PSend13932, (Optr)&t_send0, (Optr)PSend13933, (Optr)&t_block_return);
    Block PBlock13929 = new_Block_with(empty_Array, empty_Array, PThreadedCode13930, 1, PSend13933);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryObjectDescription_Const = new_Constant((Optr)SMB_binaryObjectDescription);
    // at:ifAbsentPut:. 
    Send PSend13934 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryObjectDescription_Const, (Optr)PBlock13929);
    Array PThreadedCode13928 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryObjectDescription, (Optr)&t_push_closure, (Optr)PBlock13929, (Optr)&t_send2, (Optr)PSend13934, (Optr)&t_method_return);
    Method PMethod13927 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13928, 1, PSend13934);
    
    MethodClosure MC_SMB_preStoreBinaryObjectDescription = new_MethodClosure((Method)PMethod13927, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBinaryObjectDescription, MC_SMB_preStoreBinaryObjectDescription);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    String string_13937 = new_String(L"BLOCK");
    String string_13938 = new_String(L"[");
    Constant string_13938_Const = new_Constant((Optr)string_13938);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13939 = new_Send((Optr)string_13938_Const, SMB_asParser, 0);
    Symbol SMB_blockArguments = new_Symbol(L"blockArguments");
    // blockArguments. 
    Send PSend13940 = new_Send((Optr)self, SMB_blockArguments, 0);
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13941 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13942 = new_Send((Optr)PSend13940, SMB__and_, 1, (Optr)PSend13941);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13943 = new_Send((Optr)PSend13942, SMB_optional, 0);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13944 = new_Send((Optr)self, SMB_temporaries, 0);
    // optional. 
    Send PSend13945 = new_Send((Optr)PSend13944, SMB_optional, 0);
    // &. 
    Send PSend13946 = new_Send((Optr)PSend13943, SMB__and_, 1, (Optr)PSend13945);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13947 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13948 = new_Send((Optr)PSend13946, SMB__lt__and_, 1, (Optr)PSend13947);
    String string_13949 = new_String(L"]");
    Constant string_13949_Const = new_Constant((Optr)string_13949);
    // <&. 
    Send PSend13950 = new_Send((Optr)PSend13948, SMB__lt__and_, 1, (Optr)string_13949_Const);
    // blockArguments. 
    Send PSend13951 = new_Send((Optr)self, SMB_blockArguments, 0);
    // optional. 
    Send PSend13952 = new_Send((Optr)PSend13951, SMB_optional, 0);
    String string_13953 = new_String(L"]");
    Constant string_13953_Const = new_Constant((Optr)string_13953);
    // &. 
    Send PSend13954 = new_Send((Optr)PSend13952, SMB__and_, 1, (Optr)string_13953_Const);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13955 = new_Send((Optr)PSend13950, SMB__or_, 1, (Optr)PSend13954);
    // &. 
    Send PSend13956 = new_Send((Optr)PSend13939, SMB__and_, 1, (Optr)PSend13955);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13937_Const = new_Constant((Optr)string_13937);
    // named:parsing:. 
    Send PSend13957 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13937_Const, (Optr)PSend13956);
    Array PThreadedCode13936 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13937, (Optr)&t_push1, (Optr)string_13938, (Optr)&t_send0, (Optr)PSend13939, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13940, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13941, (Optr)&t_send1, (Optr)PSend13942, (Optr)&t_send0, (Optr)PSend13943, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13944, (Optr)&t_send0, (Optr)PSend13945, (Optr)&t_send1, (Optr)PSend13946, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13947, (Optr)&t_send1, (Optr)PSend13948, (Optr)&t_push1, (Optr)string_13949, (Optr)&t_send1, (Optr)PSend13950, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13951, (Optr)&t_send0, (Optr)PSend13952, (Optr)&t_push1, (Optr)string_13953, (Optr)&t_send1, (Optr)PSend13954, (Optr)&t_send1, (Optr)PSend13955, (Optr)&t_send1, (Optr)PSend13956, (Optr)&t_send2, (Optr)PSend13957, (Optr)&t_method_return);
    Method PMethod13935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13936, 1, PSend13957);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod13935, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    String string_13960 = new_String(L"IDENTIFIER");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13961 = new_Send((Optr)self, SMB_identifierBody, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13960_Const = new_Constant((Optr)string_13960);
    // named:parsing:. 
    Send PSend13962 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13960_Const, (Optr)PSend13961);
    Array PThreadedCode13959 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13960, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13961, (Optr)&t_send2, (Optr)PSend13962, (Optr)&t_method_return);
    Method PMethod13958 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13959, 1, PSend13962);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod13958, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_injectCascadedMessageExpression() {
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13965 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13966 = new_Send((Optr)self, SMB_messageExpression, 0);
    String string_13967 = new_String(L";");
    Constant string_13967_Const = new_Constant((Optr)string_13967);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13968 = new_Send((Optr)string_13967_Const, SMB_asParser, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13969 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_binaryMessageExpression = new_Symbol(L"binaryMessageExpression");
    // binaryMessageExpression. 
    Send PSend13970 = new_Send((Optr)self, SMB_binaryMessageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13971 = new_Send((Optr)PSend13969, SMB__or_, 1, (Optr)PSend13970);
    Symbol SMB_unaryMessageExpression = new_Symbol(L"unaryMessageExpression");
    // unaryMessageExpression. 
    Send PSend13972 = new_Send((Optr)self, SMB_unaryMessageExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13973 = new_Send((Optr)PSend13971, SMB__lt__equals_, 1, (Optr)PSend13972);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13974 = new_Send((Optr)PSend13968, SMB__and_, 1, (Optr)PSend13973);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13975 = new_Send((Optr)PSend13974, SMB_plus, 0);
    // &. 
    Send PSend13976 = new_Send((Optr)PSend13966, SMB__and_, 1, (Optr)PSend13975);
    // <=. 
    Send PSend13977 = new_Send((Optr)PSend13965, SMB__lt__equals_, 1, (Optr)PSend13976);
    Array PThreadedCode13964 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13965, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13966, (Optr)&t_push1, (Optr)string_13967, (Optr)&t_send0, (Optr)PSend13968, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13969, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13970, (Optr)&t_send1, (Optr)PSend13971, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13972, (Optr)&t_send1, (Optr)PSend13973, (Optr)&t_send1, (Optr)PSend13974, (Optr)&t_send0, (Optr)PSend13975, (Optr)&t_send1, (Optr)PSend13976, (Optr)&t_send1, (Optr)PSend13977, (Optr)&t_method_return);
    Method PMethod13963 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13964, 1, PSend13977);
    
    MethodClosure MC_SMB_injectCascadedMessageExpression = new_MethodClosure((Method)PMethod13963, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectCascadedMessageExpression, MC_SMB_injectCascadedMessageExpression);
}


static void init_SMB_initializeCascadedMessageExpression() {
    Symbol SMB_initializeCascadedMessageExpression = new_Symbol(L"initializeCascadedMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13980 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13981 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Array PThreadedCode13979 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13980, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13981, (Optr)&t_method_return);
    Method PMethod13978 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13979, 2, PSend13980, PSend13981);
    
    MethodClosure MC_SMB_initializeCascadedMessageExpression = new_MethodClosure((Method)PMethod13978, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCascadedMessageExpression, MC_SMB_initializeCascadedMessageExpression);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    String string_13984 = new_String(L"RADIX-NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13985 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_13986 = new_String(L"r");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_13986_Const = new_Constant((Optr)string_13986);
    // &. 
    Send PSend13987 = new_Send((Optr)PSend13985, SMB__and_, 1, (Optr)string_13986_Const);
    // numberFormat. 
    Send PSend13988 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13989 = new_Send((Optr)PSend13987, SMB__lt__and_, 1, (Optr)PSend13988);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13984_Const = new_Constant((Optr)string_13984);
    // named:parsing:. 
    Send PSend13990 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13984_Const, (Optr)PSend13989);
    Array PThreadedCode13983 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13984, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13985, (Optr)&t_push1, (Optr)string_13986, (Optr)&t_send1, (Optr)PSend13987, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13988, (Optr)&t_send1, (Optr)PSend13989, (Optr)&t_send2, (Optr)PSend13990, (Optr)&t_method_return);
    Method PMethod13982 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13983, 1, PSend13990);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod13982, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    String string_13993 = new_String(L"SYMBOL-IN-ARRAY");
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend13994 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13993_Const = new_Constant((Optr)string_13993);
    // named:parsing:. 
    Send PSend13995 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13993_Const, (Optr)PSend13994);
    Array PThreadedCode13992 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13993, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13994, (Optr)&t_send2, (Optr)PSend13995, (Optr)&t_method_return);
    Method PMethod13991 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13992, 1, PSend13995);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod13991, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    String string_13998 = new_String(L"STATEMENTS");
    Symbol SMB_subExpression = new_Symbol(L"subExpression");
    // subExpression. 
    Send PSend13999 = new_Send((Optr)self, SMB_subExpression, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend14000 = new_Send((Optr)PSend13999, SMB_times, 0);
    Symbol SMB_return = new_Symbol(L"return");
    // return. 
    Send PSend14001 = new_Send((Optr)self, SMB_return, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14002 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14003 = new_Send((Optr)PSend14001, SMB__or_, 1, (Optr)PSend14002);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend14004 = new_Send((Optr)PSend14003, SMB_optional, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14005 = new_Send((Optr)PSend14000, SMB__and_, 1, (Optr)PSend14004);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13998_Const = new_Constant((Optr)string_13998);
    // named:parsing:. 
    Send PSend14006 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13998_Const, (Optr)PSend14005);
    Array PThreadedCode13997 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13998, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13999, (Optr)&t_send0, (Optr)PSend14000, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14001, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14002, (Optr)&t_send1, (Optr)PSend14003, (Optr)&t_send0, (Optr)PSend14004, (Optr)&t_send1, (Optr)PSend14005, (Optr)&t_send2, (Optr)PSend14006, (Optr)&t_method_return);
    Method PMethod13996 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13997, 1, PSend14006);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod13996, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    String string_14009 = new_String(L"SYMBOL-CONSTANT");
    String string_14010 = new_String(L"#");
    Constant string_14010_Const = new_Constant((Optr)string_14010);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14011 = new_Send((Optr)string_14010_Const, SMB_asParser, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14012 = new_Send((Optr)PSend14011, SMB_plus, 0);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend14013 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14014 = new_Send((Optr)PSend14012, SMB__logicAnd_, 1, (Optr)PSend14013);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14009_Const = new_Constant((Optr)string_14009);
    // named:parsing:. 
    Send PSend14015 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14009_Const, (Optr)PSend14014);
    Array PThreadedCode14008 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14009, (Optr)&t_push1, (Optr)string_14010, (Optr)&t_send0, (Optr)PSend14011, (Optr)&t_send0, (Optr)PSend14012, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14013, (Optr)&t_send1, (Optr)PSend14014, (Optr)&t_send2, (Optr)PSend14015, (Optr)&t_method_return);
    Method PMethod14007 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14008, 1, PSend14015);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14007, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Variable VAR_array_0_0 = new_Variable_named(L"array", 0);
    Array PArray14017 = new_Array_with(1, (Optr)VAR_array_0_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    String string_14021 = new_String(L"ARRAY");
    Constant string_14021_Const = new_Constant((Optr)string_14021);
    // named:. 
    Send PSend14020 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_14021_Const);
    Assign PAssign14019 = new_Assign((Optr)VAR_array_0_0, (Optr)PSend14020);
    String string_14022 = new_String(L"(");
    Constant string_14022_Const = new_Constant((Optr)string_14022);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14023 = new_Send((Optr)string_14022_Const, SMB_asParser, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend14024 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend14025 = new_Send((Optr)self, SMB_stringConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14026 = new_Send((Optr)PSend14024, SMB__or_, 1, (Optr)PSend14025);
    Symbol SMB_symbolInArray = new_Symbol(L"symbolInArray");
    // symbolInArray. 
    Send PSend14027 = new_Send((Optr)self, SMB_symbolInArray, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14028 = new_Send((Optr)PSend14026, SMB__lt__equals_, 1, (Optr)PSend14027);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend14029 = new_Send((Optr)self, SMB_symbolConstant, 0);
    // <=. 
    Send PSend14030 = new_Send((Optr)PSend14028, SMB__lt__equals_, 1, (Optr)PSend14029);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend14031 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend14032 = new_Send((Optr)PSend14030, SMB__lt__equals_, 1, (Optr)PSend14031);
    // <=. 
    Send PSend14033 = new_Send((Optr)PSend14032, SMB__lt__equals_, 1, (Optr)VAR_array_0_0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend14034 = new_Send((Optr)PSend14033, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14035 = new_Send((Optr)PSend14023, SMB__and_, 1, (Optr)PSend14034);
    String string_14036 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_14036_Const = new_Constant((Optr)string_14036);
    // <&. 
    Send PSend14037 = new_Send((Optr)PSend14035, SMB__lt__and_, 1, (Optr)string_14036_Const);
    // <=. 
    Send PSend14038 = new_Send((Optr)VAR_array_0_0, SMB__lt__equals_, 1, (Optr)PSend14037);
    Array PThreadedCode14018 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push1, (Optr)PAssign14019, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14021, (Optr)&t_send1, (Optr)PSend14020, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_push1, (Optr)string_14022, (Optr)&t_send0, (Optr)PSend14023, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14024, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14025, (Optr)&t_send1, (Optr)PSend14026, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14027, (Optr)&t_send1, (Optr)PSend14028, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14029, (Optr)&t_send1, (Optr)PSend14030, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14031, (Optr)&t_send1, (Optr)PSend14032, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_send1, (Optr)PSend14033, (Optr)&t_send0, (Optr)PSend14034, (Optr)&t_send1, (Optr)PSend14035, (Optr)&t_push1, (Optr)string_14036, (Optr)&t_send1, (Optr)PSend14037, (Optr)&t_send1, (Optr)PSend14038, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_method_return);
    Method PMethod14016 = new_Method_with(empty_Array, PArray14017, empty_Array, PThreadedCode14018, 3, PAssign14019, PSend14038, VAR_array_0_0);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14016, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    String string_14041 = new_String(L"KEYWORD-ANNOTATION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend14042 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14043 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14044 = new_Send((Optr)PSend14042, SMB__and_, 1, (Optr)PSend14043);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14045 = new_Send((Optr)PSend14044, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14041_Const = new_Constant((Optr)string_14041);
    // named:parsing:. 
    Send PSend14046 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14041_Const, (Optr)PSend14045);
    Array PThreadedCode14040 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14041, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14042, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14043, (Optr)&t_send1, (Optr)PSend14044, (Optr)&t_send0, (Optr)PSend14045, (Optr)&t_send2, (Optr)PSend14046, (Optr)&t_method_return);
    Method PMethod14039 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14040, 1, PSend14046);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14039, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    // preStorePrimary. 
    Send PSend14049 = new_Send((Optr)self, SMB_preStorePrimary, 0);
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    // preStoreMessageExpression. 
    Send PSend14050 = new_Send((Optr)self, SMB_preStoreMessageExpression, 0);
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    // preStoreCascadedMessageExpression. 
    Send PSend14051 = new_Send((Optr)self, SMB_preStoreCascadedMessageExpression, 0);
    Symbol  SMB_expression = new_Symbol(L"expression");
    String string_14052 = new_String(L"EXPRESSION");
    Symbol SMB_assignmentExpressions = new_Symbol(L"assignmentExpressions");
    // assignmentExpressions. 
    Send PSend14053 = new_Send((Optr)self, SMB_assignmentExpressions, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend14054 = new_Send((Optr)PSend14053, SMB_optional, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend14055 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14056 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14057 = new_Send((Optr)PSend14055, SMB__or_, 1, (Optr)PSend14056);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14058 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14059 = new_Send((Optr)PSend14057, SMB__lt__equals_, 1, (Optr)PSend14058);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14060 = new_Send((Optr)PSend14054, SMB__and_, 1, (Optr)PSend14059);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14052_Const = new_Constant((Optr)string_14052);
    // named:parsing:. 
    Send PSend14061 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14052_Const, (Optr)PSend14060);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // at:put:. 
    Send PSend14062 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_put_, 2, (Optr)SMB_expression_Const, (Optr)PSend14061);
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    // injectPrimary. 
    Send PSend14063 = new_Send((Optr)self, SMB_injectPrimary, 0);
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    // injectMessageExpression. 
    Send PSend14064 = new_Send((Optr)self, SMB_injectMessageExpression, 0);
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    // injectCascadedMessageExpression. 
    Send PSend14065 = new_Send((Optr)self, SMB_injectCascadedMessageExpression, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14066 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode14048 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14049, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14050, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14051, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14052, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14053, (Optr)&t_send0, (Optr)PSend14054, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14055, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14056, (Optr)&t_send1, (Optr)PSend14057, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14058, (Optr)&t_send1, (Optr)PSend14059, (Optr)&t_send1, (Optr)PSend14060, (Optr)&t_send2, (Optr)PSend14061, (Optr)&t_send2, (Optr)PSend14062, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14063, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14064, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14065, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend14066, (Optr)&t_method_return);
    Method PMethod14047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14048, 8, PSend14049, PSend14050, PSend14051, PSend14062, PSend14063, PSend14064, PSend14065, PSend14066);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14047, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    String string_14069 = new_String(L"FLOAT");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend14070 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_14071 = new_String(L".");
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Constant string_14071_Const = new_Constant((Optr)string_14071);
    // &&. 
    Send PSend14072 = new_Send((Optr)PSend14070, SMB__logicAnd_, 1, (Optr)string_14071_Const);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14073 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend14074 = new_Send((Optr)PSend14073, SMB_strongPlus, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14075 = new_Send((Optr)PSend14072, SMB__lt__and_, 1, (Optr)PSend14074);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14069_Const = new_Constant((Optr)string_14069);
    // named:parsing:. 
    Send PSend14076 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14069_Const, (Optr)PSend14075);
    Array PThreadedCode14068 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14069, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14070, (Optr)&t_push1, (Optr)string_14071, (Optr)&t_send1, (Optr)PSend14072, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14073, (Optr)&t_send0, (Optr)PSend14074, (Optr)&t_send1, (Optr)PSend14075, (Optr)&t_send2, (Optr)PSend14076, (Optr)&t_method_return);
    Method PMethod14067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14068, 1, PSend14076);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14067, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    String string_14079 = new_String(L"BLOCK-ARGUMENTS");
    String string_14080 = new_String(L":");
    Constant string_14080_Const = new_Constant((Optr)string_14080);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14081 = new_Send((Optr)string_14080_Const, SMB_asParser, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend14082 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14083 = new_Send((Optr)PSend14081, SMB__and_, 1, (Optr)PSend14082);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14084 = new_Send((Optr)PSend14083, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14079_Const = new_Constant((Optr)string_14079);
    // named:parsing:. 
    Send PSend14085 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14079_Const, (Optr)PSend14084);
    Array PThreadedCode14078 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14079, (Optr)&t_push1, (Optr)string_14080, (Optr)&t_send0, (Optr)PSend14081, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14082, (Optr)&t_send1, (Optr)PSend14083, (Optr)&t_send0, (Optr)PSend14084, (Optr)&t_send2, (Optr)PSend14085, (Optr)&t_method_return);
    Method PMethod14077 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14078, 1, PSend14085);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14077, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeCommentFormat() {
    Symbol SMB_initializeCommentFormat = new_Symbol(L"initializeCommentFormat");
    Variable VAR_commentBorder_0_0 = new_Variable_named(L"commentBorder", 0);
    Array PArray14087 = new_Array_with(1, (Optr)VAR_commentBorder_0_0);
    String string_14091 = new_String(L"\"");
    Constant string_14091_Const = new_Constant((Optr)string_14091);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14090 = new_Send((Optr)string_14091_Const, SMB_asParser, 0);
    Assign PAssign14089 = new_Assign((Optr)VAR_commentBorder_0_0, (Optr)PSend14090);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend14092 = new_Send((Optr)VAR_commentBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend14093 = new_Send((Optr)PSend14092, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14094 = new_Send((Optr)PSend14093, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14095 = new_Send((Optr)VAR_commentBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend14094);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14096 = new_Send((Optr)PSend14095, SMB__lt__and_, 1, (Optr)VAR_commentBorder_0_0);
    Array PThreadedCode14088 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign14089, (Optr)&t_push1, (Optr)string_14091, (Optr)&t_send0, (Optr)PSend14090, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send0, (Optr)PSend14092, (Optr)&t_send0, (Optr)PSend14093, (Optr)&t_send0, (Optr)PSend14094, (Optr)&t_send1, (Optr)PSend14095, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send1, (Optr)PSend14096, (Optr)&t_method_return);
    Method PMethod14086 = new_Method_with(empty_Array, PArray14087, empty_Array, PThreadedCode14088, 2, PAssign14089, PSend14096);
    
    MethodClosure MC_SMB_initializeCommentFormat = new_MethodClosure((Method)PMethod14086, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCommentFormat, MC_SMB_initializeCommentFormat);
}


static void init_SMB_initializeSeparator() {
    Symbol SMB_initializeSeparator = new_Symbol(L"initializeSeparator");
    Super PSuper14099 = new_Super(SMB_initializeSeparator, 0);
    Symbol SMB_commentFormat = new_Symbol(L"commentFormat");
    // commentFormat. 
    Send PSend14100 = new_Send((Optr)self, SMB_commentFormat, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14101 = new_Send((Optr)PSuper14099, SMB__or_, 1, (Optr)PSend14100);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14102 = new_Send((Optr)PSend14101, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend14103 = new_Send((Optr)PSend14102, SMB_omit, 0);
    Array PThreadedCode14098 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14099, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14100, (Optr)&t_send1, (Optr)PSend14101, (Optr)&t_send0, (Optr)PSend14102, (Optr)&t_send0, (Optr)PSend14103, (Optr)&t_method_return);
    Method PMethod14097 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14098, 1, PSend14103);
    
    MethodClosure MC_SMB_initializeSeparator = new_MethodClosure((Method)PMethod14097, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSeparator, MC_SMB_initializeSeparator);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    String string_14106 = new_String(L"BRACE-EXPRESSION");
    String string_14107 = new_String(L"{");
    Constant string_14107_Const = new_Constant((Optr)string_14107);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14108 = new_Send((Optr)string_14107_Const, SMB_asParser, 0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend14109 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14110 = new_Send((Optr)PSend14108, SMB__and_, 1, (Optr)PSend14109);
    String string_14111 = new_String(L"}");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_14111_Const = new_Constant((Optr)string_14111);
    // <&. 
    Send PSend14112 = new_Send((Optr)PSend14110, SMB__lt__and_, 1, (Optr)string_14111_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14106_Const = new_Constant((Optr)string_14106);
    // named:parsing:. 
    Send PSend14113 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14106_Const, (Optr)PSend14112);
    Array PThreadedCode14105 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14106, (Optr)&t_push1, (Optr)string_14107, (Optr)&t_send0, (Optr)PSend14108, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14109, (Optr)&t_send1, (Optr)PSend14110, (Optr)&t_push1, (Optr)string_14111, (Optr)&t_send1, (Optr)PSend14112, (Optr)&t_send2, (Optr)PSend14113, (Optr)&t_method_return);
    Method PMethod14104 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14105, 1, PSend14113);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14104, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_injectBinaryObjectDescription() {
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend14116 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend14117 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend14118 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14119 = new_Send((Optr)PSend14117, SMB__or_, 1, (Optr)PSend14118);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14120 = new_Send((Optr)PSend14116, SMB__lt__equals_, 1, (Optr)PSend14119);
    Array PThreadedCode14115 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14116, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14117, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14118, (Optr)&t_send1, (Optr)PSend14119, (Optr)&t_send1, (Optr)PSend14120, (Optr)&t_method_return);
    Method PMethod14114 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14115, 1, PSend14120);
    
    MethodClosure MC_SMB_injectBinaryObjectDescription = new_MethodClosure((Method)PMethod14114, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectBinaryObjectDescription, MC_SMB_injectBinaryObjectDescription);
}


static void init_SMB_initializeLowercase() {
    Symbol SMB_initializeLowercase = new_Symbol(L"initializeLowercase");
    String string_14123 = new_String(L"a-z");
    Constant string_14123_Const = new_Constant((Optr)string_14123);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend14124 = new_Send((Optr)string_14123_Const, SMB_asPEGRange, 0);
    Array PThreadedCode14122 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_14123, (Optr)&t_send0, (Optr)PSend14124, (Optr)&t_method_return);
    Method PMethod14121 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14122, 1, PSend14124);
    
    MethodClosure MC_SMB_initializeLowercase = new_MethodClosure((Method)PMethod14121, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLowercase, MC_SMB_initializeLowercase);
}


static void init_SMB_injectMessageExpression() {
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14127 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB_keywordExpression = new_Symbol(L"keywordExpression");
    // keywordExpression. 
    Send PSend14128 = new_Send((Optr)self, SMB_keywordExpression, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend14129 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14130 = new_Send((Optr)PSend14128, SMB__or_, 1, (Optr)PSend14129);
    Symbol SMB_unaryExpression = new_Symbol(L"unaryExpression");
    // unaryExpression. 
    Send PSend14131 = new_Send((Optr)self, SMB_unaryExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14132 = new_Send((Optr)PSend14130, SMB__lt__equals_, 1, (Optr)PSend14131);
    // <=. 
    Send PSend14133 = new_Send((Optr)PSend14127, SMB__lt__equals_, 1, (Optr)PSend14132);
    Array PThreadedCode14126 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14127, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14128, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14129, (Optr)&t_send1, (Optr)PSend14130, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14131, (Optr)&t_send1, (Optr)PSend14132, (Optr)&t_send1, (Optr)PSend14133, (Optr)&t_method_return);
    Method PMethod14125 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14126, 1, PSend14133);
    
    MethodClosure MC_SMB_injectMessageExpression = new_MethodClosure((Method)PMethod14125, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectMessageExpression, MC_SMB_injectMessageExpression);
}


static void init_SMB_initializeIdentifierBody() {
    Symbol SMB_initializeIdentifierBody = new_Symbol(L"initializeIdentifierBody");
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend14136 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend14137 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend14138 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14139 = new_Send((Optr)PSend14137, SMB__or_, 1, (Optr)PSend14138);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14140 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14141 = new_Send((Optr)PSend14139, SMB__lt__equals_, 1, (Optr)PSend14140);
    String string_14142 = new_String(L"!?");
    Constant string_14142_Const = new_Constant((Optr)string_14142);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend14143 = new_Send((Optr)string_14142_Const, SMB_asPEGChoice, 0);
    // <=. 
    Send PSend14144 = new_Send((Optr)PSend14141, SMB__lt__equals_, 1, (Optr)PSend14143);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14145 = new_Send((Optr)PSend14144, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14146 = new_Send((Optr)PSend14136, SMB__logicAnd_, 1, (Optr)PSend14145);
    Array PThreadedCode14135 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14136, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14137, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14138, (Optr)&t_send1, (Optr)PSend14139, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14140, (Optr)&t_send1, (Optr)PSend14141, (Optr)&t_push1, (Optr)string_14142, (Optr)&t_send0, (Optr)PSend14143, (Optr)&t_send1, (Optr)PSend14144, (Optr)&t_send0, (Optr)PSend14145, (Optr)&t_send1, (Optr)PSend14146, (Optr)&t_method_return);
    Method PMethod14134 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14135, 1, PSend14146);
    
    MethodClosure MC_SMB_initializeIdentifierBody = new_MethodClosure((Method)PMethod14134, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifierBody, MC_SMB_initializeIdentifierBody);
}


static void init_SMB_initializeLiteral() {
    Symbol SMB_initializeLiteral = new_Symbol(L"initializeLiteral");
    Symbol SMB_float = new_Symbol(L"float");
    // float. 
    Send PSend14149 = new_Send((Optr)self, SMB_float, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend14150 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14151 = new_Send((Optr)PSend14149, SMB__or_, 1, (Optr)PSend14150);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend14152 = new_Send((Optr)self, SMB_symbolConstant, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14153 = new_Send((Optr)PSend14151, SMB__lt__equals_, 1, (Optr)PSend14152);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend14154 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend14155 = new_Send((Optr)PSend14153, SMB__lt__equals_, 1, (Optr)PSend14154);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend14156 = new_Send((Optr)self, SMB_stringConstant, 0);
    // <=. 
    Send PSend14157 = new_Send((Optr)PSend14155, SMB__lt__equals_, 1, (Optr)PSend14156);
    Symbol SMB_arrayConstant = new_Symbol(L"arrayConstant");
    // arrayConstant. 
    Send PSend14158 = new_Send((Optr)self, SMB_arrayConstant, 0);
    // <=. 
    Send PSend14159 = new_Send((Optr)PSend14157, SMB__lt__equals_, 1, (Optr)PSend14158);
    Array PThreadedCode14148 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14149, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14150, (Optr)&t_send1, (Optr)PSend14151, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14152, (Optr)&t_send1, (Optr)PSend14153, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14154, (Optr)&t_send1, (Optr)PSend14155, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14156, (Optr)&t_send1, (Optr)PSend14157, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14158, (Optr)&t_send1, (Optr)PSend14159, (Optr)&t_method_return);
    Method PMethod14147 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14148, 1, PSend14159);
    
    MethodClosure MC_SMB_initializeLiteral = new_MethodClosure((Method)PMethod14147, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLiteral, MC_SMB_initializeLiteral);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    String string_14162 = new_String(L"BINARY-MESSAGE-EXPRESSION");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend14163 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend14164 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14165 = new_Send((Optr)PSend14163, SMB__and_, 1, (Optr)PSend14164);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14162_Const = new_Constant((Optr)string_14162);
    // named:parsing:. 
    Send PSend14166 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14162_Const, (Optr)PSend14165);
    Array PThreadedCode14161 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14162, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14163, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14164, (Optr)&t_send1, (Optr)PSend14165, (Optr)&t_send2, (Optr)PSend14166, (Optr)&t_method_return);
    Method PMethod14160 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14161, 1, PSend14166);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14160, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    String string_14169 = new_String(L"STRING");
    Symbol SMB_stringSegment = new_Symbol(L"stringSegment");
    // stringSegment. 
    Send PSend14170 = new_Send((Optr)self, SMB_stringSegment, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend14171 = new_Send((Optr)PSend14170, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14169_Const = new_Constant((Optr)string_14169);
    // named:parsing:. 
    Send PSend14172 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14169_Const, (Optr)PSend14171);
    Array PThreadedCode14168 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14169, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14170, (Optr)&t_send0, (Optr)PSend14171, (Optr)&t_send2, (Optr)PSend14172, (Optr)&t_method_return);
    Method PMethod14167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14168, 1, PSend14172);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14167, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    Array PThreadedCode14174 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod14173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14174, 1, self);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod14173, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_test, MC_SMB_test);
}


static void init_SMB_initializeSubExpression() {
    Symbol SMB_initializeSubExpression = new_Symbol(L"initializeSubExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14177 = new_Send((Optr)self, SMB_expression, 0);
    String string_14178 = new_String(L".");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_14178_Const = new_Constant((Optr)string_14178);
    // &. 
    Send PSend14179 = new_Send((Optr)PSend14177, SMB__and_, 1, (Optr)string_14178_Const);
    String string_14180 = new_String(L".");
    Symbol SMB__or_ = new_Symbol(L"|");
    Constant string_14180_Const = new_Constant((Optr)string_14180);
    // |. 
    Send PSend14181 = new_Send((Optr)PSend14179, SMB__or_, 1, (Optr)string_14180_Const);
    Array PThreadedCode14176 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14177, (Optr)&t_push1, (Optr)string_14178, (Optr)&t_send1, (Optr)PSend14179, (Optr)&t_push1, (Optr)string_14180, (Optr)&t_send1, (Optr)PSend14181, (Optr)&t_method_return);
    Method PMethod14175 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14176, 1, PSend14181);
    
    MethodClosure MC_SMB_initializeSubExpression = new_MethodClosure((Method)PMethod14175, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSubExpression, MC_SMB_initializeSubExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    String string_14184 = new_String(L"ANNOTATIONS");
    String string_14185 = new_String(L"<");
    Constant string_14185_Const = new_Constant((Optr)string_14185);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14186 = new_Send((Optr)string_14185_Const, SMB_asParser, 0);
    Symbol SMB_keywordAnnotation = new_Symbol(L"keywordAnnotation");
    // keywordAnnotation. 
    Send PSend14187 = new_Send((Optr)self, SMB_keywordAnnotation, 0);
    Symbol SMB_unaryAnnotation = new_Symbol(L"unaryAnnotation");
    // unaryAnnotation. 
    Send PSend14188 = new_Send((Optr)self, SMB_unaryAnnotation, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14189 = new_Send((Optr)PSend14187, SMB__or_, 1, (Optr)PSend14188);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14190 = new_Send((Optr)PSend14186, SMB__and_, 1, (Optr)PSend14189);
    String string_14191 = new_String(L">");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_14191_Const = new_Constant((Optr)string_14191);
    // <&. 
    Send PSend14192 = new_Send((Optr)PSend14190, SMB__lt__and_, 1, (Optr)string_14191_Const);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend14193 = new_Send((Optr)PSend14192, SMB_times, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14184_Const = new_Constant((Optr)string_14184);
    // named:parsing:. 
    Send PSend14194 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14184_Const, (Optr)PSend14193);
    Array PThreadedCode14183 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14184, (Optr)&t_push1, (Optr)string_14185, (Optr)&t_send0, (Optr)PSend14186, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14187, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14188, (Optr)&t_send1, (Optr)PSend14189, (Optr)&t_send1, (Optr)PSend14190, (Optr)&t_push1, (Optr)string_14191, (Optr)&t_send1, (Optr)PSend14192, (Optr)&t_send0, (Optr)PSend14193, (Optr)&t_send2, (Optr)PSend14194, (Optr)&t_method_return);
    Method PMethod14182 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14183, 1, PSend14194);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14182, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializeArrayConstant() {
    Symbol SMB_initializeArrayConstant = new_Symbol(L"initializeArrayConstant");
    String string_14197 = new_String(L"#");
    Constant string_14197_Const = new_Constant((Optr)string_14197);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14198 = new_Send((Optr)string_14197_Const, SMB_asParser, 0);
    Symbol SMB_array = new_Symbol(L"array");
    // array. 
    Send PSend14199 = new_Send((Optr)self, SMB_array, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14200 = new_Send((Optr)PSend14198, SMB__and_, 1, (Optr)PSend14199);
    Array PThreadedCode14196 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)string_14197, (Optr)&t_send0, (Optr)PSend14198, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14199, (Optr)&t_send1, (Optr)PSend14200, (Optr)&t_method_return);
    Method PMethod14195 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14196, 1, PSend14200);
    
    MethodClosure MC_SMB_initializeArrayConstant = new_MethodClosure((Method)PMethod14195, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArrayConstant, MC_SMB_initializeArrayConstant);
}


static void init_SMB_initializeBinaryObjectDescription() {
    Symbol SMB_initializeBinaryObjectDescription = new_Symbol(L"initializeBinaryObjectDescription");
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend14203 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend14204 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Array PThreadedCode14202 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14203, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14204, (Optr)&t_method_return);
    Method PMethod14201 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14202, 2, PSend14203, PSend14204);
    
    MethodClosure MC_SMB_initializeBinaryObjectDescription = new_MethodClosure((Method)PMethod14201, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryObjectDescription, MC_SMB_initializeBinaryObjectDescription);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Variable VAR_stringBorder_0_0 = new_Variable_named(L"stringBorder", 0);
    Array PArray14206 = new_Array_with(1, (Optr)VAR_stringBorder_0_0);
    String string_14210 = new_String(L"'");
    Constant string_14210_Const = new_Constant((Optr)string_14210);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14209 = new_Send((Optr)string_14210_Const, SMB_asParser, 0);
    Assign PAssign14208 = new_Assign((Optr)VAR_stringBorder_0_0, (Optr)PSend14209);
    String string_14211 = new_String(L"STRING-SEGMENT");
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend14212 = new_Send((Optr)VAR_stringBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend14213 = new_Send((Optr)PSend14212, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14214 = new_Send((Optr)PSend14213, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14215 = new_Send((Optr)VAR_stringBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend14214);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14216 = new_Send((Optr)PSend14215, SMB__lt__and_, 1, (Optr)VAR_stringBorder_0_0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14211_Const = new_Constant((Optr)string_14211);
    // named:parsing:. 
    Send PSend14217 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14211_Const, (Optr)PSend14216);
    Array PThreadedCode14207 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign14208, (Optr)&t_push1, (Optr)string_14210, (Optr)&t_send0, (Optr)PSend14209, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14211, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send0, (Optr)PSend14212, (Optr)&t_send0, (Optr)PSend14213, (Optr)&t_send0, (Optr)PSend14214, (Optr)&t_send1, (Optr)PSend14215, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send1, (Optr)PSend14216, (Optr)&t_send2, (Optr)PSend14217, (Optr)&t_method_return);
    Method PMethod14205 = new_Method_with(empty_Array, PArray14206, empty_Array, PThreadedCode14207, 2, PAssign14208, PSend14217);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14205, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeBar() {
    Symbol SMB_initializeBar = new_Symbol(L"initializeBar");
    String string_14220 = new_String(L"|");
    Constant string_14220_Const = new_Constant((Optr)string_14220);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14221 = new_Send((Optr)string_14220_Const, SMB_asParser, 0);
    Array PThreadedCode14219 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_14220, (Optr)&t_send0, (Optr)PSend14221, (Optr)&t_method_return);
    Method PMethod14218 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14219, 1, PSend14221);
    
    MethodClosure MC_SMB_initializeBar = new_MethodClosure((Method)PMethod14218, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBar, MC_SMB_initializeBar);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    String string_14224 = new_String(L"BINARY-ARGUMENT");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend14225 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend14226 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14227 = new_Send((Optr)PSend14225, SMB__and_, 1, (Optr)PSend14226);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14224_Const = new_Constant((Optr)string_14224);
    // named:parsing:. 
    Send PSend14228 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14224_Const, (Optr)PSend14227);
    Array PThreadedCode14223 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14224, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14225, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14226, (Optr)&t_send1, (Optr)PSend14227, (Optr)&t_send2, (Optr)PSend14228, (Optr)&t_method_return);
    Method PMethod14222 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14223, 1, PSend14228);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14222, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    String string_14231 = new_String(L"RETURN");
    String string_14232 = new_String(L"^");
    Constant string_14232_Const = new_Constant((Optr)string_14232);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14233 = new_Send((Optr)string_14232_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14234 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14235 = new_Send((Optr)PSend14233, SMB__and_, 1, (Optr)PSend14234);
    String string_14236 = new_String(L".");
    Constant string_14236_Const = new_Constant((Optr)string_14236);
    // asParser. 
    Send PSend14237 = new_Send((Optr)string_14236_Const, SMB_asParser, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend14238 = new_Send((Optr)PSend14237, SMB_optional, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend14239 = new_Send((Optr)PSend14238, SMB_omit, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14240 = new_Send((Optr)PSend14235, SMB__lt__and_, 1, (Optr)PSend14239);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14231_Const = new_Constant((Optr)string_14231);
    // named:parsing:. 
    Send PSend14241 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14231_Const, (Optr)PSend14240);
    Array PThreadedCode14230 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14231, (Optr)&t_push1, (Optr)string_14232, (Optr)&t_send0, (Optr)PSend14233, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14234, (Optr)&t_send1, (Optr)PSend14235, (Optr)&t_push1, (Optr)string_14236, (Optr)&t_send0, (Optr)PSend14237, (Optr)&t_send0, (Optr)PSend14238, (Optr)&t_send0, (Optr)PSend14239, (Optr)&t_send1, (Optr)PSend14240, (Optr)&t_send2, (Optr)PSend14241, (Optr)&t_method_return);
    Method PMethod14229 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14230, 1, PSend14241);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14229, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeNumberConstant() {
    Symbol SMB_initializeNumberConstant = new_Symbol(L"initializeNumberConstant");
    Symbol SMB_radix = new_Symbol(L"radix");
    // radix. 
    Send PSend14244 = new_Send((Optr)self, SMB_radix, 0);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend14245 = new_Send((Optr)self, SMB_number, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14246 = new_Send((Optr)PSend14244, SMB__or_, 1, (Optr)PSend14245);
    Array PThreadedCode14243 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14244, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14245, (Optr)&t_send1, (Optr)PSend14246, (Optr)&t_method_return);
    Method PMethod14242 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14243, 1, PSend14246);
    
    MethodClosure MC_SMB_initializeNumberConstant = new_MethodClosure((Method)PMethod14242, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberConstant, MC_SMB_initializeNumberConstant);
}


static void init_SMB_initializeCharacter() {
    Symbol SMB_initializeCharacter = new_Symbol(L"initializeCharacter");
    String string_14249 = new_String(L"[]{}()_^;$#:-|.'\"");
    Constant string_14249_Const = new_Constant((Optr)string_14249);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend14250 = new_Send((Optr)string_14249_Const, SMB_asPEGChoice, 0);
    Symbol SMB_separators = new_Symbol(L"separators");
    // separators. 
    Send PSend14251 = new_Send((Optr)PEGParser_classReference, SMB_separators, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14252 = new_Send((Optr)PSend14250, SMB__or_, 1, (Optr)PSend14251);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14253 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14254 = new_Send((Optr)PSend14252, SMB__lt__equals_, 1, (Optr)PSend14253);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend14255 = new_Send((Optr)self, SMB_letter, 0);
    // <=. 
    Send PSend14256 = new_Send((Optr)PSend14254, SMB__lt__equals_, 1, (Optr)PSend14255);
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend14257 = new_Send((Optr)self, SMB_specialCharacter, 0);
    // <=. 
    Send PSend14258 = new_Send((Optr)PSend14256, SMB__lt__equals_, 1, (Optr)PSend14257);
    Array PThreadedCode14248 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)string_14249, (Optr)&t_send0, (Optr)PSend14250, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend14251, (Optr)&t_send1, (Optr)PSend14252, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14253, (Optr)&t_send1, (Optr)PSend14254, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14255, (Optr)&t_send1, (Optr)PSend14256, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14257, (Optr)&t_send1, (Optr)PSend14258, (Optr)&t_method_return);
    Method PMethod14247 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14248, 1, PSend14258);
    
    MethodClosure MC_SMB_initializeCharacter = new_MethodClosure((Method)PMethod14247, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacter, MC_SMB_initializeCharacter);
}


static void init_SMB_injectPrimary() {
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14261 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_primaryVariable = new_Symbol(L"primaryVariable");
    // primaryVariable. 
    Send PSend14262 = new_Send((Optr)self, SMB_primaryVariable, 0);
    Symbol SMB_literal = new_Symbol(L"literal");
    // literal. 
    Send PSend14263 = new_Send((Optr)self, SMB_literal, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14264 = new_Send((Optr)PSend14262, SMB__or_, 1, (Optr)PSend14263);
    Symbol SMB_block = new_Symbol(L"block");
    // block. 
    Send PSend14265 = new_Send((Optr)self, SMB_block, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14266 = new_Send((Optr)PSend14264, SMB__lt__equals_, 1, (Optr)PSend14265);
    Symbol SMB_scopedExpression = new_Symbol(L"scopedExpression");
    // scopedExpression. 
    Send PSend14267 = new_Send((Optr)self, SMB_scopedExpression, 0);
    // <=. 
    Send PSend14268 = new_Send((Optr)PSend14266, SMB__lt__equals_, 1, (Optr)PSend14267);
    Symbol SMB_braceExpression = new_Symbol(L"braceExpression");
    // braceExpression. 
    Send PSend14269 = new_Send((Optr)self, SMB_braceExpression, 0);
    // <=. 
    Send PSend14270 = new_Send((Optr)PSend14268, SMB__lt__equals_, 1, (Optr)PSend14269);
    // <=. 
    Send PSend14271 = new_Send((Optr)PSend14261, SMB__lt__equals_, 1, (Optr)PSend14270);
    Array PThreadedCode14260 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14261, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14262, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14263, (Optr)&t_send1, (Optr)PSend14264, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14265, (Optr)&t_send1, (Optr)PSend14266, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14267, (Optr)&t_send1, (Optr)PSend14268, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14269, (Optr)&t_send1, (Optr)PSend14270, (Optr)&t_send1, (Optr)PSend14271, (Optr)&t_method_return);
    Method PMethod14259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14260, 1, PSend14271);
    
    MethodClosure MC_SMB_injectPrimary = new_MethodClosure((Method)PMethod14259, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectPrimary, MC_SMB_injectPrimary);
}


static void init_SMB_initializeLetter() {
    Symbol SMB_initializeLetter = new_Symbol(L"initializeLetter");
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend14274 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend14275 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14276 = new_Send((Optr)PSend14274, SMB__or_, 1, (Optr)PSend14275);
    Array PThreadedCode14273 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14274, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14275, (Optr)&t_send1, (Optr)PSend14276, (Optr)&t_method_return);
    Method PMethod14272 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14273, 1, PSend14276);
    
    MethodClosure MC_SMB_initializeLetter = new_MethodClosure((Method)PMethod14272, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLetter, MC_SMB_initializeLetter);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    String string_14279 = new_String(L"ASSIGNMENT-EXPRESSIONS");
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend14280 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend14281 = new_Send((Optr)self, SMB_assignmentOp, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14282 = new_Send((Optr)PSend14280, SMB__and_, 1, (Optr)PSend14281);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14283 = new_Send((Optr)PSend14282, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14279_Const = new_Constant((Optr)string_14279);
    // named:parsing:. 
    Send PSend14284 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14279_Const, (Optr)PSend14283);
    Array PThreadedCode14278 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14279, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14280, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14281, (Optr)&t_send1, (Optr)PSend14282, (Optr)&t_send0, (Optr)PSend14283, (Optr)&t_send2, (Optr)PSend14284, (Optr)&t_method_return);
    Method PMethod14277 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14278, 1, PSend14284);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14277, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_initializeFinalExpression() {
    Symbol SMB_initializeFinalExpression = new_Symbol(L"initializeFinalExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14287 = new_Send((Optr)self, SMB_expression, 0);
    Array PThreadedCode14286 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14287, (Optr)&t_method_return);
    Method PMethod14285 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14286, 1, PSend14287);
    
    MethodClosure MC_SMB_initializeFinalExpression = new_MethodClosure((Method)PMethod14285, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFinalExpression, MC_SMB_initializeFinalExpression);
}


static void init_SMB_initializeMessageExpression() {
    Symbol SMB_initializeMessageExpression = new_Symbol(L"initializeMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14290 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14291 = new_Send((Optr)self, SMB_messageExpression, 0);
    Array PThreadedCode14289 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14290, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14291, (Optr)&t_method_return);
    Method PMethod14288 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14289, 2, PSend14290, PSend14291);
    
    MethodClosure MC_SMB_initializeMessageExpression = new_MethodClosure((Method)PMethod14288, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessageExpression, MC_SMB_initializeMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    String string_14294 = new_String(L"UNARY-ANNOTATION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend14295 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14294_Const = new_Constant((Optr)string_14294);
    // named:parsing:. 
    Send PSend14296 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14294_Const, (Optr)PSend14295);
    Array PThreadedCode14293 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14294, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14295, (Optr)&t_send2, (Optr)PSend14296, (Optr)&t_method_return);
    Method PMethod14292 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14293, 1, PSend14296);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14292, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeMessagePattern() {
    Symbol SMB_initializeMessagePattern = new_Symbol(L"initializeMessagePattern");
    String string_14299 = new_String(L"MESSAGE-PATTERN");
    Symbol SMB_keywordsArguments = new_Symbol(L"keywordsArguments");
    // keywordsArguments. 
    Send PSend14300 = new_Send((Optr)self, SMB_keywordsArguments, 0);
    Symbol SMB_binaryMessageDefinition = new_Symbol(L"binaryMessageDefinition");
    // binaryMessageDefinition. 
    Send PSend14301 = new_Send((Optr)self, SMB_binaryMessageDefinition, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14302 = new_Send((Optr)PSend14300, SMB__or_, 1, (Optr)PSend14301);
    Symbol SMB_unaryMessageDefinition = new_Symbol(L"unaryMessageDefinition");
    // unaryMessageDefinition. 
    Send PSend14303 = new_Send((Optr)self, SMB_unaryMessageDefinition, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14304 = new_Send((Optr)PSend14302, SMB__lt__equals_, 1, (Optr)PSend14303);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14299_Const = new_Constant((Optr)string_14299);
    // named:parsing:. 
    Send PSend14305 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14299_Const, (Optr)PSend14304);
    Array PThreadedCode14298 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14299, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14300, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14301, (Optr)&t_send1, (Optr)PSend14302, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14303, (Optr)&t_send1, (Optr)PSend14304, (Optr)&t_send2, (Optr)PSend14305, (Optr)&t_method_return);
    Method PMethod14297 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14298, 1, PSend14305);
    
    MethodClosure MC_SMB_initializeMessagePattern = new_MethodClosure((Method)PMethod14297, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessagePattern, MC_SMB_initializeMessagePattern);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign14308 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode14307 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign14308, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14306 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14307, 2, PAssign14308, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod14306, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
    store_method(HEADER(Smalltalk_Parser_SmalltalkGrammar_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper14314 = new_Super(SMB_new, 0);
    Assign PAssign14313 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)PSuper14314);
    Array PThreadedCode14312 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14313, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14314, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock14311 = new_Block_with(empty_Array, empty_Array, PThreadedCode14312, 1, PAssign14313);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend14315 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock14311);
    Array PThreadedCode14310 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock14311, (Optr)&t_send1, (Optr)PSend14315, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_method_return);
    Method PMethod14309 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14310, 2, PSend14315, slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod14309, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
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