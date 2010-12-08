#include <lib/class/Smalltalk/Parser/SmalltalkGrammar.h>


Optr slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance;
Optr layout_Smalltalk_Parser_SmalltalkGrammar_Class_class;
Optr layout_Smalltalk_Parser_SmalltalkGrammar;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    String string_13659 = new_String(L"UNARY-MESSAGE-EXPRESSION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13660 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13659_Const = new_Constant((Optr)string_13659);
    // named:parsing:. 
    Send PSend13661 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13659_Const, (Optr)PSend13660);
    Array PThreadedCode13658 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13659, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13660, (Optr)&t_send2, (Optr)PSend13661, (Optr)&t_method_return);
    Method PMethod13657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13658, 1, PSend13661);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod13657, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    String string_13664 = new_String(L"UNARY-SELECTOR");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13665 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13666 = new_String(L":");
    Constant string_13666_Const = new_Constant((Optr)string_13666);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13667 = new_Send((Optr)string_13666_Const, SMB_asParser, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend13668 = new_Send((Optr)PSend13667, SMB_not, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13669 = new_Send((Optr)PSend13665, SMB__logicAnd_, 1, (Optr)PSend13668);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13664_Const = new_Constant((Optr)string_13664);
    // named:parsing:. 
    Send PSend13670 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13664_Const, (Optr)PSend13669);
    Array PThreadedCode13663 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13664, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13665, (Optr)&t_push1, (Optr)string_13666, (Optr)&t_send0, (Optr)PSend13667, (Optr)&t_send0, (Optr)PSend13668, (Optr)&t_send1, (Optr)PSend13669, (Optr)&t_send2, (Optr)PSend13670, (Optr)&t_method_return);
    Method PMethod13662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13663, 1, PSend13670);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod13662, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    String string_13673 = new_String(L"NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend13674 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13673_Const = new_Constant((Optr)string_13673);
    // named:parsing:. 
    Send PSend13675 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13673_Const, (Optr)PSend13674);
    Array PThreadedCode13672 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13673, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13674, (Optr)&t_send2, (Optr)PSend13675, (Optr)&t_method_return);
    Method PMethod13671 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13672, 1, PSend13675);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod13671, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    String string_13678 = new_String(L"UNARY-OBJECT-DESCRIPTION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13679 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13680 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13681 = new_Send((Optr)PSend13680, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13682 = new_Send((Optr)PSend13679, SMB__and_, 1, (Optr)PSend13681);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13678_Const = new_Constant((Optr)string_13678);
    // named:parsing:. 
    Send PSend13683 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13678_Const, (Optr)PSend13682);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13684 = new_Send((Optr)PSend13683, SMB_memo, 0);
    Array PThreadedCode13677 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13678, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13679, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13680, (Optr)&t_send0, (Optr)PSend13681, (Optr)&t_send1, (Optr)PSend13682, (Optr)&t_send2, (Optr)PSend13683, (Optr)&t_send0, (Optr)PSend13684, (Optr)&t_method_return);
    Method PMethod13676 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13677, 1, PSend13684);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod13676, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    String string_13687 = new_String(L"VARIABLE-NAME");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13688 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13687_Const = new_Constant((Optr)string_13687);
    // named:parsing:. 
    Send PSend13689 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13687_Const, (Optr)PSend13688);
    Array PThreadedCode13686 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13687, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13688, (Optr)&t_send2, (Optr)PSend13689, (Optr)&t_method_return);
    Method PMethod13685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13686, 1, PSend13689);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod13685, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_assignmentOp() {
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    String string_13692 = new_String(L":=");
    Constant string_13692_Const = new_Constant((Optr)string_13692);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13693 = new_Send((Optr)string_13692_Const, SMB_asParser, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend13694 = new_Send((Optr)PSend13693, SMB_omit, 0);
    Array PThreadedCode13691 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)string_13692, (Optr)&t_send0, (Optr)PSend13693, (Optr)&t_send0, (Optr)PSend13694, (Optr)&t_method_return);
    Method PMethod13690 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13691, 1, PSend13694);
    
    MethodClosure MC_SMB_assignmentOp = new_MethodClosure((Method)PMethod13690, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_assignmentOp, MC_SMB_assignmentOp);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    String string_13697 = new_String(L"CAPITAL-IDENTIFIER");
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13698 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend13699 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13700 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13701 = new_Send((Optr)PSend13699, SMB__or_, 1, (Optr)PSend13700);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13702 = new_Send((Optr)PSend13701, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13703 = new_Send((Optr)PSend13698, SMB__logicAnd_, 1, (Optr)PSend13702);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13697_Const = new_Constant((Optr)string_13697);
    // named:parsing:. 
    Send PSend13704 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13697_Const, (Optr)PSend13703);
    Array PThreadedCode13696 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13697, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13698, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13699, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13700, (Optr)&t_send1, (Optr)PSend13701, (Optr)&t_send0, (Optr)PSend13702, (Optr)&t_send1, (Optr)PSend13703, (Optr)&t_send2, (Optr)PSend13704, (Optr)&t_method_return);
    Method PMethod13695 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13696, 1, PSend13704);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod13695, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    String string_13707 = new_String(L"BINARY-SELECTOR");
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend13708 = new_Send((Optr)self, SMB_specialCharacter, 0);
    String string_13709 = new_String(L"-");
    Constant string_13709_Const = new_Constant((Optr)string_13709);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13710 = new_Send((Optr)string_13709_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13711 = new_Send((Optr)PSend13710, SMB_consume, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13712 = new_Send((Optr)PSend13708, SMB__or_, 1, (Optr)PSend13711);
    // specialCharacter. 
    Send PSend13713 = new_Send((Optr)self, SMB_specialCharacter, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13714 = new_Send((Optr)PSend13713, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13715 = new_Send((Optr)PSend13712, SMB__logicAnd_, 1, (Optr)PSend13714);
    String string_13716 = new_String(L"|");
    Constant string_13716_Const = new_Constant((Optr)string_13716);
    // asParser. 
    Send PSend13717 = new_Send((Optr)string_13716_Const, SMB_asParser, 0);
    // consume. 
    Send PSend13718 = new_Send((Optr)PSend13717, SMB_consume, 0);
    // |. 
    Send PSend13719 = new_Send((Optr)PSend13715, SMB__or_, 1, (Optr)PSend13718);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13707_Const = new_Constant((Optr)string_13707);
    // named:parsing:. 
    Send PSend13720 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13707_Const, (Optr)PSend13719);
    Array PThreadedCode13706 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13707, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13708, (Optr)&t_push1, (Optr)string_13709, (Optr)&t_send0, (Optr)PSend13710, (Optr)&t_send0, (Optr)PSend13711, (Optr)&t_send1, (Optr)PSend13712, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13713, (Optr)&t_send0, (Optr)PSend13714, (Optr)&t_send1, (Optr)PSend13715, (Optr)&t_push1, (Optr)string_13716, (Optr)&t_send0, (Optr)PSend13717, (Optr)&t_send0, (Optr)PSend13718, (Optr)&t_send1, (Optr)PSend13719, (Optr)&t_send2, (Optr)PSend13720, (Optr)&t_method_return);
    Method PMethod13705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13706, 1, PSend13720);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod13705, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    String string_13723 = new_String(L"STRING-CONSTANT");
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13724 = new_Send((Optr)self, SMB_string, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13723_Const = new_Constant((Optr)string_13723);
    // named:parsing:. 
    Send PSend13725 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13723_Const, (Optr)PSend13724);
    Array PThreadedCode13722 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13723, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13724, (Optr)&t_send2, (Optr)PSend13725, (Optr)&t_method_return);
    Method PMethod13721 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13722, 1, PSend13725);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod13721, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeParameterName() {
    Symbol SMB_initializeParameterName = new_Symbol(L"initializeParameterName");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13728 = new_Send((Optr)self, SMB_identifier, 0);
    Array PThreadedCode13727 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13728, (Optr)&t_method_return);
    Method PMethod13726 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13727, 1, PSend13728);
    
    MethodClosure MC_SMB_initializeParameterName = new_MethodClosure((Method)PMethod13726, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeParameterName, MC_SMB_initializeParameterName);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    String string_13731 = new_String(L"KEYWORD-EXPRESSION");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13732 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13733 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    // bracketIndexExpression. 
    Send PSend13734 = new_Send((Optr)self, SMB_bracketIndexExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13735 = new_Send((Optr)PSend13733, SMB__or_, 1, (Optr)PSend13734);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13736 = new_Send((Optr)PSend13732, SMB__and_, 1, (Optr)PSend13735);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13731_Const = new_Constant((Optr)string_13731);
    // named:parsing:. 
    Send PSend13737 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13731_Const, (Optr)PSend13736);
    Array PThreadedCode13730 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13731, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13732, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13733, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13734, (Optr)&t_send1, (Optr)PSend13735, (Optr)&t_send1, (Optr)PSend13736, (Optr)&t_send2, (Optr)PSend13737, (Optr)&t_method_return);
    Method PMethod13729 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13730, 1, PSend13737);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod13729, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    String string_13740 = new_String(L"BRACKET-INDEX-EXPRESSION");
    String string_13741 = new_String(L"[");
    Constant string_13741_Const = new_Constant((Optr)string_13741);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13742 = new_Send((Optr)string_13741_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13743 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13744 = new_Send((Optr)PSend13742, SMB__and_, 1, (Optr)PSend13743);
    String string_13745 = new_String(L"]");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13745_Const = new_Constant((Optr)string_13745);
    // <&. 
    Send PSend13746 = new_Send((Optr)PSend13744, SMB__lt__and_, 1, (Optr)string_13745_Const);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend13747 = new_Send((Optr)self, SMB_assignmentOp, 0);
    // expression. 
    Send PSend13748 = new_Send((Optr)self, SMB_expression, 0);
    // &. 
    Send PSend13749 = new_Send((Optr)PSend13747, SMB__and_, 1, (Optr)PSend13748);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13750 = new_Send((Optr)PSend13749, SMB_optional, 0);
    // <&. 
    Send PSend13751 = new_Send((Optr)PSend13746, SMB__lt__and_, 1, (Optr)PSend13750);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13740_Const = new_Constant((Optr)string_13740);
    // named:parsing:. 
    Send PSend13752 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13740_Const, (Optr)PSend13751);
    Array PThreadedCode13739 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13740, (Optr)&t_push1, (Optr)string_13741, (Optr)&t_send0, (Optr)PSend13742, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13743, (Optr)&t_send1, (Optr)PSend13744, (Optr)&t_push1, (Optr)string_13745, (Optr)&t_send1, (Optr)PSend13746, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13747, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13748, (Optr)&t_send1, (Optr)PSend13749, (Optr)&t_send0, (Optr)PSend13750, (Optr)&t_send1, (Optr)PSend13751, (Optr)&t_send2, (Optr)PSend13752, (Optr)&t_method_return);
    Method PMethod13738 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13739, 1, PSend13752);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod13738, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    // preStoreBinaryObjectDescription. 
    Send PSend13755 = new_Send((Optr)self, SMB_preStoreBinaryObjectDescription, 0);
    Symbol  SMB_binaryExpression = new_Symbol(L"binaryExpression");
    String string_13756 = new_String(L"BINARY-EXPRESSION");
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend13757 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13758 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13759 = new_Send((Optr)PSend13757, SMB__and_, 1, (Optr)PSend13758);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13760 = new_Send((Optr)PSend13759, SMB_plus, 0);
    // unaryObjectDescription. 
    Send PSend13761 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    // &. 
    Send PSend13762 = new_Send((Optr)PSend13760, SMB__and_, 1, (Optr)PSend13761);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13756_Const = new_Constant((Optr)string_13756);
    // named:parsing:. 
    Send PSend13763 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13756_Const, (Optr)PSend13762);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryExpression_Const = new_Constant((Optr)SMB_binaryExpression);
    // at:ifAbsentPut:. 
    Send PSend13764 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryExpression_Const, (Optr)PSend13763);
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    // injectBinaryObjectDescription. 
    Send PSend13765 = new_Send((Optr)self, SMB_injectBinaryObjectDescription, 0);
    // binaryExpression. 
    Send PSend13766 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Array PThreadedCode13754 = instantiate_Array_with(ThreadedCode_Class, 0, 40, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13755, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryExpression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13756, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13757, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13758, (Optr)&t_send1, (Optr)PSend13759, (Optr)&t_send0, (Optr)PSend13760, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13761, (Optr)&t_send1, (Optr)PSend13762, (Optr)&t_send2, (Optr)PSend13763, (Optr)&t_send2, (Optr)PSend13764, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13765, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13766, (Optr)&t_method_return);
    Method PMethod13753 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13754, 4, PSend13755, PSend13764, PSend13765, PSend13766);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod13753, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    String string_13769 = new_String(L"SCOPED-EXPRESSION");
    String string_13770 = new_String(L"(");
    Constant string_13770_Const = new_Constant((Optr)string_13770);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13771 = new_Send((Optr)string_13770_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13772 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13773 = new_Send((Optr)PSend13771, SMB__and_, 1, (Optr)PSend13772);
    String string_13774 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_13774_Const = new_Constant((Optr)string_13774);
    // <&. 
    Send PSend13775 = new_Send((Optr)PSend13773, SMB__lt__and_, 1, (Optr)string_13774_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13769_Const = new_Constant((Optr)string_13769);
    // named:parsing:. 
    Send PSend13776 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13769_Const, (Optr)PSend13775);
    Array PThreadedCode13768 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13769, (Optr)&t_push1, (Optr)string_13770, (Optr)&t_send0, (Optr)PSend13771, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13772, (Optr)&t_send1, (Optr)PSend13773, (Optr)&t_push1, (Optr)string_13774, (Optr)&t_send1, (Optr)PSend13775, (Optr)&t_send2, (Optr)PSend13776, (Optr)&t_method_return);
    Method PMethod13767 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13768, 1, PSend13776);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod13767, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    String string_13779 = new_String(L"CHARACTER-CONSTANT");
    String string_13780 = new_String(L"$");
    Constant string_13780_Const = new_Constant((Optr)string_13780);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13781 = new_Send((Optr)string_13780_Const, SMB_asParser, 0);
    Symbol SMB_character = new_Symbol(L"character");
    // character. 
    Send PSend13782 = new_Send((Optr)self, SMB_character, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13783 = new_Send((Optr)PSend13781, SMB__logicAnd_, 1, (Optr)PSend13782);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13779_Const = new_Constant((Optr)string_13779);
    // named:parsing:. 
    Send PSend13784 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13779_Const, (Optr)PSend13783);
    Array PThreadedCode13778 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13779, (Optr)&t_push1, (Optr)string_13780, (Optr)&t_send0, (Optr)PSend13781, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13782, (Optr)&t_send1, (Optr)PSend13783, (Optr)&t_send2, (Optr)PSend13784, (Optr)&t_method_return);
    Method PMethod13777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13778, 1, PSend13784);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod13777, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    String string_13787 = new_String(L"NUMBER-FORMAT");
    String string_13788 = new_String(L"-");
    Constant string_13788_Const = new_Constant((Optr)string_13788);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13789 = new_Send((Optr)string_13788_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13790 = new_Send((Optr)PSend13789, SMB_consume, 0);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend13791 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend13792 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13793 = new_Send((Optr)PSend13791, SMB__or_, 1, (Optr)PSend13792);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13794 = new_Send((Optr)PSend13793, SMB_strongPlus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13795 = new_Send((Optr)PSend13790, SMB__and_, 1, (Optr)PSend13794);
    // decimalDigit. 
    Send PSend13796 = new_Send((Optr)self, SMB_decimalDigit, 0);
    // uppercase. 
    Send PSend13797 = new_Send((Optr)self, SMB_uppercase, 0);
    // |. 
    Send PSend13798 = new_Send((Optr)PSend13796, SMB__or_, 1, (Optr)PSend13797);
    // strongPlus. 
    Send PSend13799 = new_Send((Optr)PSend13798, SMB_strongPlus, 0);
    // |. 
    Send PSend13800 = new_Send((Optr)PSend13795, SMB__or_, 1, (Optr)PSend13799);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13787_Const = new_Constant((Optr)string_13787);
    // named:parsing:. 
    Send PSend13801 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13787_Const, (Optr)PSend13800);
    Array PThreadedCode13786 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13787, (Optr)&t_push1, (Optr)string_13788, (Optr)&t_send0, (Optr)PSend13789, (Optr)&t_send0, (Optr)PSend13790, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13791, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13792, (Optr)&t_send1, (Optr)PSend13793, (Optr)&t_send0, (Optr)PSend13794, (Optr)&t_send1, (Optr)PSend13795, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13796, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13797, (Optr)&t_send1, (Optr)PSend13798, (Optr)&t_send0, (Optr)PSend13799, (Optr)&t_send1, (Optr)PSend13800, (Optr)&t_send2, (Optr)PSend13801, (Optr)&t_method_return);
    Method PMethod13785 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13786, 1, PSend13801);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod13785, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    String string_13804 = new_String(L"METHOD");
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend13805 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_messagePattern = new_Symbol(L"messagePattern");
    // messagePattern. 
    Send PSend13806 = new_Send((Optr)self, SMB_messagePattern, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13807 = new_Send((Optr)PSend13805, SMB__and_, 1, (Optr)PSend13806);
    Symbol SMB_annotations = new_Symbol(L"annotations");
    // annotations. 
    Send PSend13808 = new_Send((Optr)self, SMB_annotations, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13809 = new_Send((Optr)PSend13807, SMB__lt__and_, 1, (Optr)PSend13808);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13810 = new_Send((Optr)self, SMB_temporaries, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13811 = new_Send((Optr)PSend13810, SMB_optional, 0);
    // <&. 
    Send PSend13812 = new_Send((Optr)PSend13809, SMB__lt__and_, 1, (Optr)PSend13811);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13813 = new_Send((Optr)self, SMB_statements, 0);
    // <&. 
    Send PSend13814 = new_Send((Optr)PSend13812, SMB__lt__and_, 1, (Optr)PSend13813);
    // separator. 
    Send PSend13815 = new_Send((Optr)self, SMB_separator, 0);
    // <&. 
    Send PSend13816 = new_Send((Optr)PSend13814, SMB__lt__and_, 1, (Optr)PSend13815);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13817 = new_Send((Optr)PSend13816, SMB_end, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13804_Const = new_Constant((Optr)string_13804);
    // named:parsing:. 
    Send PSend13818 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13804_Const, (Optr)PSend13817);
    // separator. 
    Send PSend13819 = new_Send((Optr)self, SMB_separator, 0);
    Symbol SMB_separator_ = new_Symbol(L"separator:");
    // separator:. 
    Send PSend13820 = new_Send((Optr)PSend13818, SMB_separator_, 1, (Optr)PSend13819);
    Array PThreadedCode13803 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13804, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13805, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13806, (Optr)&t_send1, (Optr)PSend13807, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13808, (Optr)&t_send1, (Optr)PSend13809, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13810, (Optr)&t_send0, (Optr)PSend13811, (Optr)&t_send1, (Optr)PSend13812, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13813, (Optr)&t_send1, (Optr)PSend13814, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13815, (Optr)&t_send1, (Optr)PSend13816, (Optr)&t_send0, (Optr)PSend13817, (Optr)&t_send2, (Optr)PSend13818, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13819, (Optr)&t_send1, (Optr)PSend13820, (Optr)&t_method_return);
    Method PMethod13802 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13803, 1, PSend13820);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod13802, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    String string_13823 = new_String(L"UNARY-MESSAGE-DEFINITION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13824 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13823_Const = new_Constant((Optr)string_13823);
    // named:parsing:. 
    Send PSend13825 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13823_Const, (Optr)PSend13824);
    Array PThreadedCode13822 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13823, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13824, (Optr)&t_send2, (Optr)PSend13825, (Optr)&t_method_return);
    Method PMethod13821 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13822, 1, PSend13825);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod13821, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_preStorePrimary() {
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    Symbol  SMB_primary = new_Symbol(L"primary");
    String string_13830 = new_String(L"PRIMARY");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13830_Const = new_Constant((Optr)string_13830);
    // named:. 
    Send PSend13831 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13830_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13832 = new_Send((Optr)PSend13831, SMB_memo, 0);
    Array PThreadedCode13829 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13830, (Optr)&t_send1, (Optr)PSend13831, (Optr)&t_send0, (Optr)PSend13832, (Optr)&t_block_return);
    Block PBlock13828 = new_Block_with(empty_Array, empty_Array, PThreadedCode13829, 1, PSend13832);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_primary_Const = new_Constant((Optr)SMB_primary);
    // at:ifAbsentPut:. 
    Send PSend13833 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_primary_Const, (Optr)PBlock13828);
    Array PThreadedCode13827 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_primary, (Optr)&t_push_closure, (Optr)PBlock13828, (Optr)&t_send2, (Optr)PSend13833, (Optr)&t_method_return);
    Method PMethod13826 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13827, 1, PSend13833);
    
    MethodClosure MC_SMB_preStorePrimary = new_MethodClosure((Method)PMethod13826, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStorePrimary, MC_SMB_preStorePrimary);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    String string_13836 = new_String(L"KEYWORD");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13837 = new_Send((Optr)self, SMB_identifierBody, 0);
    String string_13838 = new_String(L":");
    Constant string_13838_Const = new_Constant((Optr)string_13838);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13839 = new_Send((Optr)string_13838_Const, SMB_asParser, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend13840 = new_Send((Optr)PSend13839, SMB_consume, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13841 = new_Send((Optr)PSend13837, SMB__logicAnd_, 1, (Optr)PSend13840);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13836_Const = new_Constant((Optr)string_13836);
    // named:parsing:. 
    Send PSend13842 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13836_Const, (Optr)PSend13841);
    Array PThreadedCode13835 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13836, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13837, (Optr)&t_push1, (Optr)string_13838, (Optr)&t_send0, (Optr)PSend13839, (Optr)&t_send0, (Optr)PSend13840, (Optr)&t_send1, (Optr)PSend13841, (Optr)&t_send2, (Optr)PSend13842, (Optr)&t_method_return);
    Method PMethod13834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13835, 1, PSend13842);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod13834, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeUppercase() {
    Symbol SMB_initializeUppercase = new_Symbol(L"initializeUppercase");
    String string_13845 = new_String(L"A-Z");
    Constant string_13845_Const = new_Constant((Optr)string_13845);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13846 = new_Send((Optr)string_13845_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13844 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13845, (Optr)&t_send0, (Optr)PSend13846, (Optr)&t_method_return);
    Method PMethod13843 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13844, 1, PSend13846);
    
    MethodClosure MC_SMB_initializeUppercase = new_MethodClosure((Method)PMethod13843, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUppercase, MC_SMB_initializeUppercase);
}


static void init_SMB_preStoreMessageExpression() {
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    Symbol  SMB_messageExpression = new_Symbol(L"messageExpression");
    String string_13851 = new_String(L"MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13851_Const = new_Constant((Optr)string_13851);
    // named:. 
    Send PSend13852 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13851_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13853 = new_Send((Optr)PSend13852, SMB_memo, 0);
    Array PThreadedCode13850 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13851, (Optr)&t_send1, (Optr)PSend13852, (Optr)&t_send0, (Optr)PSend13853, (Optr)&t_block_return);
    Block PBlock13849 = new_Block_with(empty_Array, empty_Array, PThreadedCode13850, 1, PSend13853);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_messageExpression_Const = new_Constant((Optr)SMB_messageExpression);
    // at:ifAbsentPut:. 
    Send PSend13854 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_messageExpression_Const, (Optr)PBlock13849);
    Array PThreadedCode13848 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_messageExpression, (Optr)&t_push_closure, (Optr)PBlock13849, (Optr)&t_send2, (Optr)PSend13854, (Optr)&t_method_return);
    Method PMethod13847 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13848, 1, PSend13854);
    
    MethodClosure MC_SMB_preStoreMessageExpression = new_MethodClosure((Method)PMethod13847, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreMessageExpression, MC_SMB_preStoreMessageExpression);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    String string_13857 = new_String(L"UNARY-EXPRESSION");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13858 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend13859 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13860 = new_Send((Optr)PSend13859, SMB_plus, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13861 = new_Send((Optr)PSend13858, SMB__and_, 1, (Optr)PSend13860);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13857_Const = new_Constant((Optr)string_13857);
    // named:parsing:. 
    Send PSend13862 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13857_Const, (Optr)PSend13861);
    Array PThreadedCode13856 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13857, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13858, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13859, (Optr)&t_send0, (Optr)PSend13860, (Optr)&t_send1, (Optr)PSend13861, (Optr)&t_send2, (Optr)PSend13862, (Optr)&t_method_return);
    Method PMethod13855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13856, 1, PSend13862);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod13855, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeSymbol() {
    Symbol SMB_initializeSymbol = new_Symbol(L"initializeSymbol");
    String string_13865 = new_String(L"SYMBOL");
    Symbol SMB_symbolKeywords = new_Symbol(L"symbolKeywords");
    // symbolKeywords. 
    Send PSend13866 = new_Send((Optr)self, SMB_symbolKeywords, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13867 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13868 = new_Send((Optr)PSend13866, SMB__or_, 1, (Optr)PSend13867);
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend13869 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend13870 = new_Send((Optr)PSend13868, SMB__lt__equals_, 1, (Optr)PSend13869);
    Symbol SMB_string = new_Symbol(L"string");
    // string. 
    Send PSend13871 = new_Send((Optr)self, SMB_string, 0);
    // <=. 
    Send PSend13872 = new_Send((Optr)PSend13870, SMB__lt__equals_, 1, (Optr)PSend13871);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13865_Const = new_Constant((Optr)string_13865);
    // named:parsing:. 
    Send PSend13873 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_13865_Const, (Optr)PSend13872);
    Array PThreadedCode13864 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13865, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13866, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13867, (Optr)&t_send1, (Optr)PSend13868, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13869, (Optr)&t_send1, (Optr)PSend13870, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13871, (Optr)&t_send1, (Optr)PSend13872, (Optr)&t_send2, (Optr)PSend13873, (Optr)&t_method_return);
    Method PMethod13863 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13864, 1, PSend13873);
    
    MethodClosure MC_SMB_initializeSymbol = new_MethodClosure((Method)PMethod13863, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbol, MC_SMB_initializeSymbol);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    String string_13876 = new_String(L"PRIMARY-VARIABLE");
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend13877 = new_Send((Optr)self, SMB_identifier, 0);
    String string_13878 = new_String(L".");
    Constant string_13878_Const = new_Constant((Optr)string_13878);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13879 = new_Send((Optr)string_13878_Const, SMB_asParser, 0);
    // identifier. 
    Send PSend13880 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend13881 = new_Send((Optr)PSend13879, SMB__logicAnd_, 1, (Optr)PSend13880);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend13882 = new_Send((Optr)PSend13881, SMB_strongTimes, 0);
    // &&. 
    Send PSend13883 = new_Send((Optr)PSend13877, SMB__logicAnd_, 1, (Optr)PSend13882);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13876_Const = new_Constant((Optr)string_13876);
    // named:parsing:. 
    Send PSend13884 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13876_Const, (Optr)PSend13883);
    Array PThreadedCode13875 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13876, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13877, (Optr)&t_push1, (Optr)string_13878, (Optr)&t_send0, (Optr)PSend13879, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13880, (Optr)&t_send1, (Optr)PSend13881, (Optr)&t_send0, (Optr)PSend13882, (Optr)&t_send1, (Optr)PSend13883, (Optr)&t_send2, (Optr)PSend13884, (Optr)&t_method_return);
    Method PMethod13874 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13875, 1, PSend13884);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod13874, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    String string_13887 = new_String(L"KEYWORDS-ARGUMENTS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13888 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend13889 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13890 = new_Send((Optr)PSend13888, SMB__and_, 1, (Optr)PSend13889);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13891 = new_Send((Optr)PSend13890, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13887_Const = new_Constant((Optr)string_13887);
    // named:parsing:. 
    Send PSend13892 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13887_Const, (Optr)PSend13891);
    Array PThreadedCode13886 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13887, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13888, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13889, (Optr)&t_send1, (Optr)PSend13890, (Optr)&t_send0, (Optr)PSend13891, (Optr)&t_send2, (Optr)PSend13892, (Optr)&t_method_return);
    Method PMethod13885 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13886, 1, PSend13892);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod13885, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_preStoreBracketIndexExpression() {
    Symbol SMB_preStoreBracketIndexExpression = new_Symbol(L"preStoreBracketIndexExpression");
    Symbol  SMB_bracketIndexExpression = new_Symbol(L"bracketIndexExpression");
    String string_13897 = new_String(L"BRACKET-INDEX-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13897_Const = new_Constant((Optr)string_13897);
    // named:. 
    Send PSend13898 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13897_Const);
    Array PThreadedCode13896 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13897, (Optr)&t_send1, (Optr)PSend13898, (Optr)&t_block_return);
    Block PBlock13895 = new_Block_with(empty_Array, empty_Array, PThreadedCode13896, 1, PSend13898);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_bracketIndexExpression_Const = new_Constant((Optr)SMB_bracketIndexExpression);
    // at:ifAbsentPut:. 
    Send PSend13899 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_bracketIndexExpression_Const, (Optr)PBlock13895);
    Array PThreadedCode13894 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_bracketIndexExpression, (Optr)&t_push_closure, (Optr)PBlock13895, (Optr)&t_send2, (Optr)PSend13899, (Optr)&t_method_return);
    Method PMethod13893 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13894, 1, PSend13899);
    
    MethodClosure MC_SMB_preStoreBracketIndexExpression = new_MethodClosure((Method)PMethod13893, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBracketIndexExpression, MC_SMB_preStoreBracketIndexExpression);
}


static void init_SMB_initializePrimary() {
    Symbol SMB_initializePrimary = new_Symbol(L"initializePrimary");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend13902 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend13903 = new_Send((Optr)self, SMB_primary, 0);
    Array PThreadedCode13901 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13902, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13903, (Optr)&t_method_return);
    Method PMethod13900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13901, 2, PSend13902, PSend13903);
    
    MethodClosure MC_SMB_initializePrimary = new_MethodClosure((Method)PMethod13900, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializePrimary, MC_SMB_initializePrimary);
}


static void init_SMB_parseMethod_() {
    Symbol SMB_parseMethod_ = new_Symbol(L"parseMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray13905 = new_Array_with(1, (Optr)VAR_method_0_0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend13907 = new_Send((Optr)self, SMB_method, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13908 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_method_0_0, (Optr)PSend13907);
    Array PThreadedCode13906 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13907, (Optr)&t_send2, (Optr)PSend13908, (Optr)&t_method_return);
    Method PMethod13904 = new_Method_with(PArray13905, empty_Array, empty_Array, PThreadedCode13906, 1, PSend13908);
    
    MethodClosure MC_SMB_parseMethod_ = new_MethodClosure((Method)PMethod13904, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseMethod_, MC_SMB_parseMethod_);
}


static void init_SMB_initializeDecimalDigit() {
    Symbol SMB_initializeDecimalDigit = new_Symbol(L"initializeDecimalDigit");
    String string_13911 = new_String(L"0-9");
    Constant string_13911_Const = new_Constant((Optr)string_13911);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend13912 = new_Send((Optr)string_13911_Const, SMB_asPEGRange, 0);
    Array PThreadedCode13910 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13911, (Optr)&t_send0, (Optr)PSend13912, (Optr)&t_method_return);
    Method PMethod13909 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13910, 1, PSend13912);
    
    MethodClosure MC_SMB_initializeDecimalDigit = new_MethodClosure((Method)PMethod13909, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeDecimalDigit, MC_SMB_initializeDecimalDigit);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    String string_13915 = new_String(L"TEMPORARIES");
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13916 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend13917 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend13918 = new_Send((Optr)PSend13917, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13919 = new_Send((Optr)PSend13916, SMB__and_, 1, (Optr)PSend13918);
    // bar. 
    Send PSend13920 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13921 = new_Send((Optr)PSend13919, SMB__lt__and_, 1, (Optr)PSend13920);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13915_Const = new_Constant((Optr)string_13915);
    // named:parsing:. 
    Send PSend13922 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13915_Const, (Optr)PSend13921);
    Array PThreadedCode13914 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13915, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13916, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13917, (Optr)&t_send0, (Optr)PSend13918, (Optr)&t_send1, (Optr)PSend13919, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13920, (Optr)&t_send1, (Optr)PSend13921, (Optr)&t_send2, (Optr)PSend13922, (Optr)&t_method_return);
    Method PMethod13913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13914, 1, PSend13922);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod13913, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    String string_13925 = new_String(L"KEYWORD-MESSAGE-EXPRESSION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13926 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend13927 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13928 = new_Send((Optr)PSend13926, SMB__and_, 1, (Optr)PSend13927);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend13929 = new_Send((Optr)PSend13928, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13925_Const = new_Constant((Optr)string_13925);
    // named:parsing:. 
    Send PSend13930 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13925_Const, (Optr)PSend13929);
    Array PThreadedCode13924 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13925, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13926, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13927, (Optr)&t_send1, (Optr)PSend13928, (Optr)&t_send0, (Optr)PSend13929, (Optr)&t_send2, (Optr)PSend13930, (Optr)&t_method_return);
    Method PMethod13923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13924, 1, PSend13930);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod13923, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    String string_13933 = new_String(L"SYMBOL-KEYWORDS");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend13934 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend13935 = new_Send((Optr)PSend13934, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13933_Const = new_Constant((Optr)string_13933);
    // named:parsing:. 
    Send PSend13936 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13933_Const, (Optr)PSend13935);
    Array PThreadedCode13932 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13933, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13934, (Optr)&t_send0, (Optr)PSend13935, (Optr)&t_send2, (Optr)PSend13936, (Optr)&t_method_return);
    Method PMethod13931 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13932, 1, PSend13936);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod13931, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeSpecialCharacter() {
    Symbol SMB_initializeSpecialCharacter = new_Symbol(L"initializeSpecialCharacter");
    String string_13939 = new_String(L"+*/\\~<>=@%?!&`,");
    Constant string_13939_Const = new_Constant((Optr)string_13939);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend13940 = new_Send((Optr)string_13939_Const, SMB_asPEGChoice, 0);
    Array PThreadedCode13938 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_13939, (Optr)&t_send0, (Optr)PSend13940, (Optr)&t_method_return);
    Method PMethod13937 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13938, 1, PSend13940);
    
    MethodClosure MC_SMB_initializeSpecialCharacter = new_MethodClosure((Method)PMethod13937, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSpecialCharacter, MC_SMB_initializeSpecialCharacter);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Symbol  SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    String string_13945 = new_String(L"CASCADED-MESSAGE-EXPRESSION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13945_Const = new_Constant((Optr)string_13945);
    // named:. 
    Send PSend13946 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_13945_Const);
    Array PThreadedCode13944 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13945, (Optr)&t_send1, (Optr)PSend13946, (Optr)&t_block_return);
    Block PBlock13943 = new_Block_with(empty_Array, empty_Array, PThreadedCode13944, 1, PSend13946);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_cascadedMessageExpression_Const = new_Constant((Optr)SMB_cascadedMessageExpression);
    // at:ifAbsentPut:. 
    Send PSend13947 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_cascadedMessageExpression_Const, (Optr)PBlock13943);
    Array PThreadedCode13942 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_cascadedMessageExpression, (Optr)&t_push_closure, (Optr)PBlock13943, (Optr)&t_send2, (Optr)PSend13947, (Optr)&t_method_return);
    Method PMethod13941 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13942, 1, PSend13947);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod13941, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_parseStatements_() {
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    Variable VAR_statements_0_0 = new_Variable_named(L"statements", 0);
    Array PArray13949 = new_Array_with(1, (Optr)VAR_statements_0_0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13951 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend13952 = new_Send((Optr)PSend13951, SMB_end, 0);
    Symbol SMB_match_to_ = new_Symbol(L"match:to:");
    // match:to:. 
    Send PSend13953 = new_Send((Optr)self, SMB_match_to_, 2, (Optr)VAR_statements_0_0, (Optr)PSend13952);
    Array PThreadedCode13950 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_statements_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13951, (Optr)&t_send0, (Optr)PSend13952, (Optr)&t_send2, (Optr)PSend13953, (Optr)&t_method_return);
    Method PMethod13948 = new_Method_with(PArray13949, empty_Array, empty_Array, PThreadedCode13950, 1, PSend13953);
    
    MethodClosure MC_SMB_parseStatements_ = new_MethodClosure((Method)PMethod13948, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_parseStatements_, MC_SMB_parseStatements_);
}


static void init_SMB_preStoreBinaryObjectDescription() {
    Symbol SMB_preStoreBinaryObjectDescription = new_Symbol(L"preStoreBinaryObjectDescription");
    Symbol  SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    String string_13958 = new_String(L"BINARY-OBJECT-DESCRIPTION");
    Symbol SMB_named_ = new_Symbol(L"named:");
    Constant string_13958_Const = new_Constant((Optr)string_13958);
    // named:. 
    Send PSend13959 = new_Send((Optr)PEGParser_classReference, SMB_named_, 1, (Optr)string_13958_Const);
    Symbol SMB_memo = new_Symbol(L"memo");
    // memo. 
    Send PSend13960 = new_Send((Optr)PSend13959, SMB_memo, 0);
    Array PThreadedCode13957 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_13958, (Optr)&t_send1, (Optr)PSend13959, (Optr)&t_send0, (Optr)PSend13960, (Optr)&t_block_return);
    Block PBlock13956 = new_Block_with(empty_Array, empty_Array, PThreadedCode13957, 1, PSend13960);
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Constant SMB_binaryObjectDescription_Const = new_Constant((Optr)SMB_binaryObjectDescription);
    // at:ifAbsentPut:. 
    Send PSend13961 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_ifAbsentPut_, 2, (Optr)SMB_binaryObjectDescription_Const, (Optr)PBlock13956);
    Array PThreadedCode13955 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_binaryObjectDescription, (Optr)&t_push_closure, (Optr)PBlock13956, (Optr)&t_send2, (Optr)PSend13961, (Optr)&t_method_return);
    Method PMethod13954 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13955, 1, PSend13961);
    
    MethodClosure MC_SMB_preStoreBinaryObjectDescription = new_MethodClosure((Method)PMethod13954, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_preStoreBinaryObjectDescription, MC_SMB_preStoreBinaryObjectDescription);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    String string_13964 = new_String(L"BLOCK");
    String string_13965 = new_String(L"[");
    Constant string_13965_Const = new_Constant((Optr)string_13965);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13966 = new_Send((Optr)string_13965_Const, SMB_asParser, 0);
    Symbol SMB_blockArguments = new_Symbol(L"blockArguments");
    // blockArguments. 
    Send PSend13967 = new_Send((Optr)self, SMB_blockArguments, 0);
    Symbol SMB_bar = new_Symbol(L"bar");
    // bar. 
    Send PSend13968 = new_Send((Optr)self, SMB_bar, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend13969 = new_Send((Optr)PSend13967, SMB__and_, 1, (Optr)PSend13968);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend13970 = new_Send((Optr)PSend13969, SMB_optional, 0);
    Symbol SMB_temporaries = new_Symbol(L"temporaries");
    // temporaries. 
    Send PSend13971 = new_Send((Optr)self, SMB_temporaries, 0);
    // optional. 
    Send PSend13972 = new_Send((Optr)PSend13971, SMB_optional, 0);
    // &. 
    Send PSend13973 = new_Send((Optr)PSend13970, SMB__and_, 1, (Optr)PSend13972);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend13974 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend13975 = new_Send((Optr)PSend13973, SMB__lt__and_, 1, (Optr)PSend13974);
    String string_13976 = new_String(L"]");
    Constant string_13976_Const = new_Constant((Optr)string_13976);
    // <&. 
    Send PSend13977 = new_Send((Optr)PSend13975, SMB__lt__and_, 1, (Optr)string_13976_Const);
    // blockArguments. 
    Send PSend13978 = new_Send((Optr)self, SMB_blockArguments, 0);
    // optional. 
    Send PSend13979 = new_Send((Optr)PSend13978, SMB_optional, 0);
    String string_13980 = new_String(L"]");
    Constant string_13980_Const = new_Constant((Optr)string_13980);
    // &. 
    Send PSend13981 = new_Send((Optr)PSend13979, SMB__and_, 1, (Optr)string_13980_Const);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13982 = new_Send((Optr)PSend13977, SMB__or_, 1, (Optr)PSend13981);
    // &. 
    Send PSend13983 = new_Send((Optr)PSend13966, SMB__and_, 1, (Optr)PSend13982);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13964_Const = new_Constant((Optr)string_13964);
    // named:parsing:. 
    Send PSend13984 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13964_Const, (Optr)PSend13983);
    Array PThreadedCode13963 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13964, (Optr)&t_push1, (Optr)string_13965, (Optr)&t_send0, (Optr)PSend13966, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13967, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13968, (Optr)&t_send1, (Optr)PSend13969, (Optr)&t_send0, (Optr)PSend13970, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13971, (Optr)&t_send0, (Optr)PSend13972, (Optr)&t_send1, (Optr)PSend13973, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13974, (Optr)&t_send1, (Optr)PSend13975, (Optr)&t_push1, (Optr)string_13976, (Optr)&t_send1, (Optr)PSend13977, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13978, (Optr)&t_send0, (Optr)PSend13979, (Optr)&t_push1, (Optr)string_13980, (Optr)&t_send1, (Optr)PSend13981, (Optr)&t_send1, (Optr)PSend13982, (Optr)&t_send1, (Optr)PSend13983, (Optr)&t_send2, (Optr)PSend13984, (Optr)&t_method_return);
    Method PMethod13962 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13963, 1, PSend13984);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod13962, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    String string_13987 = new_String(L"IDENTIFIER");
    Symbol SMB_identifierBody = new_Symbol(L"identifierBody");
    // identifierBody. 
    Send PSend13988 = new_Send((Optr)self, SMB_identifierBody, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_13987_Const = new_Constant((Optr)string_13987);
    // named:parsing:. 
    Send PSend13989 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_13987_Const, (Optr)PSend13988);
    Array PThreadedCode13986 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_13987, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13988, (Optr)&t_send2, (Optr)PSend13989, (Optr)&t_method_return);
    Method PMethod13985 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13986, 1, PSend13989);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod13985, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_injectCascadedMessageExpression() {
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend13992 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend13993 = new_Send((Optr)self, SMB_messageExpression, 0);
    String string_13994 = new_String(L";");
    Constant string_13994_Const = new_Constant((Optr)string_13994);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend13995 = new_Send((Optr)string_13994_Const, SMB_asParser, 0);
    Symbol SMB_keywordMessageExpression = new_Symbol(L"keywordMessageExpression");
    // keywordMessageExpression. 
    Send PSend13996 = new_Send((Optr)self, SMB_keywordMessageExpression, 0);
    Symbol SMB_binaryMessageExpression = new_Symbol(L"binaryMessageExpression");
    // binaryMessageExpression. 
    Send PSend13997 = new_Send((Optr)self, SMB_binaryMessageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend13998 = new_Send((Optr)PSend13996, SMB__or_, 1, (Optr)PSend13997);
    Symbol SMB_unaryMessageExpression = new_Symbol(L"unaryMessageExpression");
    // unaryMessageExpression. 
    Send PSend13999 = new_Send((Optr)self, SMB_unaryMessageExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14000 = new_Send((Optr)PSend13998, SMB__lt__equals_, 1, (Optr)PSend13999);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14001 = new_Send((Optr)PSend13995, SMB__and_, 1, (Optr)PSend14000);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14002 = new_Send((Optr)PSend14001, SMB_plus, 0);
    // &. 
    Send PSend14003 = new_Send((Optr)PSend13993, SMB__and_, 1, (Optr)PSend14002);
    // <=. 
    Send PSend14004 = new_Send((Optr)PSend13992, SMB__lt__equals_, 1, (Optr)PSend14003);
    Array PThreadedCode13991 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13992, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13993, (Optr)&t_push1, (Optr)string_13994, (Optr)&t_send0, (Optr)PSend13995, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13996, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13997, (Optr)&t_send1, (Optr)PSend13998, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend13999, (Optr)&t_send1, (Optr)PSend14000, (Optr)&t_send1, (Optr)PSend14001, (Optr)&t_send0, (Optr)PSend14002, (Optr)&t_send1, (Optr)PSend14003, (Optr)&t_send1, (Optr)PSend14004, (Optr)&t_method_return);
    Method PMethod13990 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode13991, 1, PSend14004);
    
    MethodClosure MC_SMB_injectCascadedMessageExpression = new_MethodClosure((Method)PMethod13990, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectCascadedMessageExpression, MC_SMB_injectCascadedMessageExpression);
}


static void init_SMB_initializeCascadedMessageExpression() {
    Symbol SMB_initializeCascadedMessageExpression = new_Symbol(L"initializeCascadedMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14007 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend14008 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Array PThreadedCode14006 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14007, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14008, (Optr)&t_method_return);
    Method PMethod14005 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14006, 2, PSend14007, PSend14008);
    
    MethodClosure MC_SMB_initializeCascadedMessageExpression = new_MethodClosure((Method)PMethod14005, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCascadedMessageExpression, MC_SMB_initializeCascadedMessageExpression);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    String string_14011 = new_String(L"RADIX-NUMBER");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend14012 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_14013 = new_String(L"r");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_14013_Const = new_Constant((Optr)string_14013);
    // &. 
    Send PSend14014 = new_Send((Optr)PSend14012, SMB__and_, 1, (Optr)string_14013_Const);
    // numberFormat. 
    Send PSend14015 = new_Send((Optr)self, SMB_numberFormat, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14016 = new_Send((Optr)PSend14014, SMB__lt__and_, 1, (Optr)PSend14015);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14011_Const = new_Constant((Optr)string_14011);
    // named:parsing:. 
    Send PSend14017 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14011_Const, (Optr)PSend14016);
    Array PThreadedCode14010 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14011, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14012, (Optr)&t_push1, (Optr)string_14013, (Optr)&t_send1, (Optr)PSend14014, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14015, (Optr)&t_send1, (Optr)PSend14016, (Optr)&t_send2, (Optr)PSend14017, (Optr)&t_method_return);
    Method PMethod14009 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14010, 1, PSend14017);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14009, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    String string_14020 = new_String(L"SYMBOL-IN-ARRAY");
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend14021 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14020_Const = new_Constant((Optr)string_14020);
    // named:parsing:. 
    Send PSend14022 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14020_Const, (Optr)PSend14021);
    Array PThreadedCode14019 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14020, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14021, (Optr)&t_send2, (Optr)PSend14022, (Optr)&t_method_return);
    Method PMethod14018 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14019, 1, PSend14022);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14018, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    String string_14025 = new_String(L"STATEMENTS");
    Symbol SMB_subExpression = new_Symbol(L"subExpression");
    // subExpression. 
    Send PSend14026 = new_Send((Optr)self, SMB_subExpression, 0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend14027 = new_Send((Optr)PSend14026, SMB_times, 0);
    Symbol SMB_return = new_Symbol(L"return");
    // return. 
    Send PSend14028 = new_Send((Optr)self, SMB_return, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14029 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14030 = new_Send((Optr)PSend14028, SMB__or_, 1, (Optr)PSend14029);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend14031 = new_Send((Optr)PSend14030, SMB_optional, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14032 = new_Send((Optr)PSend14027, SMB__and_, 1, (Optr)PSend14031);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14025_Const = new_Constant((Optr)string_14025);
    // named:parsing:. 
    Send PSend14033 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14025_Const, (Optr)PSend14032);
    Array PThreadedCode14024 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14025, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14026, (Optr)&t_send0, (Optr)PSend14027, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14028, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14029, (Optr)&t_send1, (Optr)PSend14030, (Optr)&t_send0, (Optr)PSend14031, (Optr)&t_send1, (Optr)PSend14032, (Optr)&t_send2, (Optr)PSend14033, (Optr)&t_method_return);
    Method PMethod14023 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14024, 1, PSend14033);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14023, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    String string_14036 = new_String(L"SYMBOL-CONSTANT");
    String string_14037 = new_String(L"#");
    Constant string_14037_Const = new_Constant((Optr)string_14037);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14038 = new_Send((Optr)string_14037_Const, SMB_asParser, 0);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14039 = new_Send((Optr)PSend14038, SMB_plus, 0);
    Symbol SMB_symbol = new_Symbol(L"symbol");
    // symbol. 
    Send PSend14040 = new_Send((Optr)self, SMB_symbol, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14041 = new_Send((Optr)PSend14039, SMB__logicAnd_, 1, (Optr)PSend14040);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14036_Const = new_Constant((Optr)string_14036);
    // named:parsing:. 
    Send PSend14042 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14036_Const, (Optr)PSend14041);
    Array PThreadedCode14035 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14036, (Optr)&t_push1, (Optr)string_14037, (Optr)&t_send0, (Optr)PSend14038, (Optr)&t_send0, (Optr)PSend14039, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14040, (Optr)&t_send1, (Optr)PSend14041, (Optr)&t_send2, (Optr)PSend14042, (Optr)&t_method_return);
    Method PMethod14034 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14035, 1, PSend14042);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14034, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Variable VAR_array_0_0 = new_Variable_named(L"array", 0);
    Array PArray14044 = new_Array_with(1, (Optr)VAR_array_0_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    String string_14048 = new_String(L"ARRAY");
    Constant string_14048_Const = new_Constant((Optr)string_14048);
    // named:. 
    Send PSend14047 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_, 1, (Optr)string_14048_Const);
    Assign PAssign14046 = new_Assign((Optr)VAR_array_0_0, (Optr)PSend14047);
    String string_14049 = new_String(L"(");
    Constant string_14049_Const = new_Constant((Optr)string_14049);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14050 = new_Send((Optr)string_14049_Const, SMB_asParser, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend14051 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend14052 = new_Send((Optr)self, SMB_stringConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14053 = new_Send((Optr)PSend14051, SMB__or_, 1, (Optr)PSend14052);
    Symbol SMB_symbolInArray = new_Symbol(L"symbolInArray");
    // symbolInArray. 
    Send PSend14054 = new_Send((Optr)self, SMB_symbolInArray, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14055 = new_Send((Optr)PSend14053, SMB__lt__equals_, 1, (Optr)PSend14054);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend14056 = new_Send((Optr)self, SMB_symbolConstant, 0);
    // <=. 
    Send PSend14057 = new_Send((Optr)PSend14055, SMB__lt__equals_, 1, (Optr)PSend14056);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend14058 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend14059 = new_Send((Optr)PSend14057, SMB__lt__equals_, 1, (Optr)PSend14058);
    // <=. 
    Send PSend14060 = new_Send((Optr)PSend14059, SMB__lt__equals_, 1, (Optr)VAR_array_0_0);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend14061 = new_Send((Optr)PSend14060, SMB_times, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14062 = new_Send((Optr)PSend14050, SMB__and_, 1, (Optr)PSend14061);
    String string_14063 = new_String(L")");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_14063_Const = new_Constant((Optr)string_14063);
    // <&. 
    Send PSend14064 = new_Send((Optr)PSend14062, SMB__lt__and_, 1, (Optr)string_14063_Const);
    // <=. 
    Send PSend14065 = new_Send((Optr)VAR_array_0_0, SMB__lt__equals_, 1, (Optr)PSend14064);
    Array PThreadedCode14045 = instantiate_Array_with(ThreadedCode_Class, 0, 57, (Optr)&t_push1, (Optr)PAssign14046, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14048, (Optr)&t_send1, (Optr)PSend14047, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_push1, (Optr)string_14049, (Optr)&t_send0, (Optr)PSend14050, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14051, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14052, (Optr)&t_send1, (Optr)PSend14053, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14054, (Optr)&t_send1, (Optr)PSend14055, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14056, (Optr)&t_send1, (Optr)PSend14057, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14058, (Optr)&t_send1, (Optr)PSend14059, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_send1, (Optr)PSend14060, (Optr)&t_send0, (Optr)PSend14061, (Optr)&t_send1, (Optr)PSend14062, (Optr)&t_push1, (Optr)string_14063, (Optr)&t_send1, (Optr)PSend14064, (Optr)&t_send1, (Optr)PSend14065, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_array_0_0, (Optr)&t_method_return);
    Method PMethod14043 = new_Method_with(empty_Array, PArray14044, empty_Array, PThreadedCode14045, 3, PAssign14046, PSend14065, VAR_array_0_0);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14043, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    String string_14068 = new_String(L"KEYWORD-ANNOTATION");
    Symbol SMB_keyword = new_Symbol(L"keyword");
    // keyword. 
    Send PSend14069 = new_Send((Optr)self, SMB_keyword, 0);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14070 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14071 = new_Send((Optr)PSend14069, SMB__and_, 1, (Optr)PSend14070);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14072 = new_Send((Optr)PSend14071, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14068_Const = new_Constant((Optr)string_14068);
    // named:parsing:. 
    Send PSend14073 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14068_Const, (Optr)PSend14072);
    Array PThreadedCode14067 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14068, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14069, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14070, (Optr)&t_send1, (Optr)PSend14071, (Optr)&t_send0, (Optr)PSend14072, (Optr)&t_send2, (Optr)PSend14073, (Optr)&t_method_return);
    Method PMethod14066 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14067, 1, PSend14073);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14066, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Symbol SMB_preStorePrimary = new_Symbol(L"preStorePrimary");
    // preStorePrimary. 
    Send PSend14076 = new_Send((Optr)self, SMB_preStorePrimary, 0);
    Symbol SMB_preStoreMessageExpression = new_Symbol(L"preStoreMessageExpression");
    // preStoreMessageExpression. 
    Send PSend14077 = new_Send((Optr)self, SMB_preStoreMessageExpression, 0);
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    // preStoreCascadedMessageExpression. 
    Send PSend14078 = new_Send((Optr)self, SMB_preStoreCascadedMessageExpression, 0);
    Symbol  SMB_expression = new_Symbol(L"expression");
    String string_14079 = new_String(L"EXPRESSION");
    Symbol SMB_assignmentExpressions = new_Symbol(L"assignmentExpressions");
    // assignmentExpressions. 
    Send PSend14080 = new_Send((Optr)self, SMB_assignmentExpressions, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend14081 = new_Send((Optr)PSend14080, SMB_optional, 0);
    Symbol SMB_cascadedMessageExpression = new_Symbol(L"cascadedMessageExpression");
    // cascadedMessageExpression. 
    Send PSend14082 = new_Send((Optr)self, SMB_cascadedMessageExpression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14083 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14084 = new_Send((Optr)PSend14082, SMB__or_, 1, (Optr)PSend14083);
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14085 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14086 = new_Send((Optr)PSend14084, SMB__lt__equals_, 1, (Optr)PSend14085);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14087 = new_Send((Optr)PSend14081, SMB__and_, 1, (Optr)PSend14086);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14079_Const = new_Constant((Optr)string_14079);
    // named:parsing:. 
    Send PSend14088 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14079_Const, (Optr)PSend14087);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant SMB_expression_Const = new_Constant((Optr)SMB_expression);
    // at:put:. 
    Send PSend14089 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_put_, 2, (Optr)SMB_expression_Const, (Optr)PSend14088);
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    // injectPrimary. 
    Send PSend14090 = new_Send((Optr)self, SMB_injectPrimary, 0);
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    // injectMessageExpression. 
    Send PSend14091 = new_Send((Optr)self, SMB_injectMessageExpression, 0);
    Symbol SMB_injectCascadedMessageExpression = new_Symbol(L"injectCascadedMessageExpression");
    // injectCascadedMessageExpression. 
    Send PSend14092 = new_Send((Optr)self, SMB_injectCascadedMessageExpression, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14093 = new_Send((Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, SMB_at_, 1, (Optr)SMB_expression_Const);
    Array PThreadedCode14075 = instantiate_Array_with(ThreadedCode_Class, 0, 64, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14076, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14077, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14078, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14079, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14080, (Optr)&t_send0, (Optr)PSend14081, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14082, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14083, (Optr)&t_send1, (Optr)PSend14084, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14085, (Optr)&t_send1, (Optr)PSend14086, (Optr)&t_send1, (Optr)PSend14087, (Optr)&t_send2, (Optr)PSend14088, (Optr)&t_send2, (Optr)PSend14089, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14090, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14091, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14092, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_AbstractGrammar_parsers, (Optr)&t_push1, (Optr)SMB_expression, (Optr)&t_send1, (Optr)PSend14093, (Optr)&t_method_return);
    Method PMethod14074 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14075, 8, PSend14076, PSend14077, PSend14078, PSend14089, PSend14090, PSend14091, PSend14092, PSend14093);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14074, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    String string_14096 = new_String(L"FLOAT");
    Symbol SMB_numberFormat = new_Symbol(L"numberFormat");
    // numberFormat. 
    Send PSend14097 = new_Send((Optr)self, SMB_numberFormat, 0);
    String string_14098 = new_String(L".");
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    Constant string_14098_Const = new_Constant((Optr)string_14098);
    // &&. 
    Send PSend14099 = new_Send((Optr)PSend14097, SMB__logicAnd_, 1, (Optr)string_14098_Const);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14100 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend14101 = new_Send((Optr)PSend14100, SMB_strongPlus, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14102 = new_Send((Optr)PSend14099, SMB__lt__and_, 1, (Optr)PSend14101);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14096_Const = new_Constant((Optr)string_14096);
    // named:parsing:. 
    Send PSend14103 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14096_Const, (Optr)PSend14102);
    Array PThreadedCode14095 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14096, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14097, (Optr)&t_push1, (Optr)string_14098, (Optr)&t_send1, (Optr)PSend14099, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14100, (Optr)&t_send0, (Optr)PSend14101, (Optr)&t_send1, (Optr)PSend14102, (Optr)&t_send2, (Optr)PSend14103, (Optr)&t_method_return);
    Method PMethod14094 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14095, 1, PSend14103);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14094, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    String string_14106 = new_String(L"BLOCK-ARGUMENTS");
    String string_14107 = new_String(L":");
    Constant string_14107_Const = new_Constant((Optr)string_14107);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14108 = new_Send((Optr)string_14107_Const, SMB_asParser, 0);
    Symbol SMB_identifier = new_Symbol(L"identifier");
    // identifier. 
    Send PSend14109 = new_Send((Optr)self, SMB_identifier, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14110 = new_Send((Optr)PSend14108, SMB__and_, 1, (Optr)PSend14109);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14111 = new_Send((Optr)PSend14110, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14106_Const = new_Constant((Optr)string_14106);
    // named:parsing:. 
    Send PSend14112 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14106_Const, (Optr)PSend14111);
    Array PThreadedCode14105 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14106, (Optr)&t_push1, (Optr)string_14107, (Optr)&t_send0, (Optr)PSend14108, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14109, (Optr)&t_send1, (Optr)PSend14110, (Optr)&t_send0, (Optr)PSend14111, (Optr)&t_send2, (Optr)PSend14112, (Optr)&t_method_return);
    Method PMethod14104 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14105, 1, PSend14112);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14104, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeCommentFormat() {
    Symbol SMB_initializeCommentFormat = new_Symbol(L"initializeCommentFormat");
    Variable VAR_commentBorder_0_0 = new_Variable_named(L"commentBorder", 0);
    Array PArray14114 = new_Array_with(1, (Optr)VAR_commentBorder_0_0);
    String string_14118 = new_String(L"\"");
    Constant string_14118_Const = new_Constant((Optr)string_14118);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14117 = new_Send((Optr)string_14118_Const, SMB_asParser, 0);
    Assign PAssign14116 = new_Assign((Optr)VAR_commentBorder_0_0, (Optr)PSend14117);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend14119 = new_Send((Optr)VAR_commentBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend14120 = new_Send((Optr)PSend14119, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14121 = new_Send((Optr)PSend14120, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14122 = new_Send((Optr)VAR_commentBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend14121);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14123 = new_Send((Optr)PSend14122, SMB__lt__and_, 1, (Optr)VAR_commentBorder_0_0);
    Array PThreadedCode14115 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign14116, (Optr)&t_push1, (Optr)string_14118, (Optr)&t_send0, (Optr)PSend14117, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send0, (Optr)PSend14119, (Optr)&t_send0, (Optr)PSend14120, (Optr)&t_send0, (Optr)PSend14121, (Optr)&t_send1, (Optr)PSend14122, (Optr)&t_push_variable, (Optr)VAR_commentBorder_0_0, (Optr)&t_send1, (Optr)PSend14123, (Optr)&t_method_return);
    Method PMethod14113 = new_Method_with(empty_Array, PArray14114, empty_Array, PThreadedCode14115, 2, PAssign14116, PSend14123);
    
    MethodClosure MC_SMB_initializeCommentFormat = new_MethodClosure((Method)PMethod14113, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCommentFormat, MC_SMB_initializeCommentFormat);
}


static void init_SMB_initializeSeparator() {
    Symbol SMB_initializeSeparator = new_Symbol(L"initializeSeparator");
    Super PSuper14126 = new_Super(SMB_initializeSeparator, 0);
    Symbol SMB_commentFormat = new_Symbol(L"commentFormat");
    // commentFormat. 
    Send PSend14127 = new_Send((Optr)self, SMB_commentFormat, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14128 = new_Send((Optr)PSuper14126, SMB__or_, 1, (Optr)PSend14127);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14129 = new_Send((Optr)PSend14128, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend14130 = new_Send((Optr)PSend14129, SMB_omit, 0);
    Array PThreadedCode14125 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14126, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14127, (Optr)&t_send1, (Optr)PSend14128, (Optr)&t_send0, (Optr)PSend14129, (Optr)&t_send0, (Optr)PSend14130, (Optr)&t_method_return);
    Method PMethod14124 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14125, 1, PSend14130);
    
    MethodClosure MC_SMB_initializeSeparator = new_MethodClosure((Method)PMethod14124, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSeparator, MC_SMB_initializeSeparator);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    String string_14133 = new_String(L"BRACE-EXPRESSION");
    String string_14134 = new_String(L"{");
    Constant string_14134_Const = new_Constant((Optr)string_14134);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14135 = new_Send((Optr)string_14134_Const, SMB_asParser, 0);
    Symbol SMB_statements = new_Symbol(L"statements");
    // statements. 
    Send PSend14136 = new_Send((Optr)self, SMB_statements, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14137 = new_Send((Optr)PSend14135, SMB__and_, 1, (Optr)PSend14136);
    String string_14138 = new_String(L"}");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_14138_Const = new_Constant((Optr)string_14138);
    // <&. 
    Send PSend14139 = new_Send((Optr)PSend14137, SMB__lt__and_, 1, (Optr)string_14138_Const);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14133_Const = new_Constant((Optr)string_14133);
    // named:parsing:. 
    Send PSend14140 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14133_Const, (Optr)PSend14139);
    Array PThreadedCode14132 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14133, (Optr)&t_push1, (Optr)string_14134, (Optr)&t_send0, (Optr)PSend14135, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14136, (Optr)&t_send1, (Optr)PSend14137, (Optr)&t_push1, (Optr)string_14138, (Optr)&t_send1, (Optr)PSend14139, (Optr)&t_send2, (Optr)PSend14140, (Optr)&t_method_return);
    Method PMethod14131 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14132, 1, PSend14140);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14131, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_injectBinaryObjectDescription() {
    Symbol SMB_injectBinaryObjectDescription = new_Symbol(L"injectBinaryObjectDescription");
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend14143 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend14144 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend14145 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14146 = new_Send((Optr)PSend14144, SMB__or_, 1, (Optr)PSend14145);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14147 = new_Send((Optr)PSend14143, SMB__lt__equals_, 1, (Optr)PSend14146);
    Array PThreadedCode14142 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14143, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14144, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14145, (Optr)&t_send1, (Optr)PSend14146, (Optr)&t_send1, (Optr)PSend14147, (Optr)&t_method_return);
    Method PMethod14141 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14142, 1, PSend14147);
    
    MethodClosure MC_SMB_injectBinaryObjectDescription = new_MethodClosure((Method)PMethod14141, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectBinaryObjectDescription, MC_SMB_injectBinaryObjectDescription);
}


static void init_SMB_initializeLowercase() {
    Symbol SMB_initializeLowercase = new_Symbol(L"initializeLowercase");
    String string_14150 = new_String(L"a-z");
    Constant string_14150_Const = new_Constant((Optr)string_14150);
    Symbol SMB_asPEGRange = new_Symbol(L"asPEGRange");
    // asPEGRange. 
    Send PSend14151 = new_Send((Optr)string_14150_Const, SMB_asPEGRange, 0);
    Array PThreadedCode14149 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_14150, (Optr)&t_send0, (Optr)PSend14151, (Optr)&t_method_return);
    Method PMethod14148 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14149, 1, PSend14151);
    
    MethodClosure MC_SMB_initializeLowercase = new_MethodClosure((Method)PMethod14148, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLowercase, MC_SMB_initializeLowercase);
}


static void init_SMB_injectMessageExpression() {
    Symbol SMB_injectMessageExpression = new_Symbol(L"injectMessageExpression");
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14154 = new_Send((Optr)self, SMB_messageExpression, 0);
    Symbol SMB_keywordExpression = new_Symbol(L"keywordExpression");
    // keywordExpression. 
    Send PSend14155 = new_Send((Optr)self, SMB_keywordExpression, 0);
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend14156 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14157 = new_Send((Optr)PSend14155, SMB__or_, 1, (Optr)PSend14156);
    Symbol SMB_unaryExpression = new_Symbol(L"unaryExpression");
    // unaryExpression. 
    Send PSend14158 = new_Send((Optr)self, SMB_unaryExpression, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14159 = new_Send((Optr)PSend14157, SMB__lt__equals_, 1, (Optr)PSend14158);
    // <=. 
    Send PSend14160 = new_Send((Optr)PSend14154, SMB__lt__equals_, 1, (Optr)PSend14159);
    Array PThreadedCode14153 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14154, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14155, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14156, (Optr)&t_send1, (Optr)PSend14157, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14158, (Optr)&t_send1, (Optr)PSend14159, (Optr)&t_send1, (Optr)PSend14160, (Optr)&t_method_return);
    Method PMethod14152 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14153, 1, PSend14160);
    
    MethodClosure MC_SMB_injectMessageExpression = new_MethodClosure((Method)PMethod14152, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectMessageExpression, MC_SMB_injectMessageExpression);
}


static void init_SMB_initializeIdentifierBody() {
    Symbol SMB_initializeIdentifierBody = new_Symbol(L"initializeIdentifierBody");
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend14163 = new_Send((Optr)self, SMB_letter, 0);
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend14164 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend14165 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14166 = new_Send((Optr)PSend14164, SMB__or_, 1, (Optr)PSend14165);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14167 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14168 = new_Send((Optr)PSend14166, SMB__lt__equals_, 1, (Optr)PSend14167);
    String string_14169 = new_String(L"!?");
    Constant string_14169_Const = new_Constant((Optr)string_14169);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend14170 = new_Send((Optr)string_14169_Const, SMB_asPEGChoice, 0);
    // <=. 
    Send PSend14171 = new_Send((Optr)PSend14168, SMB__lt__equals_, 1, (Optr)PSend14170);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14172 = new_Send((Optr)PSend14171, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14173 = new_Send((Optr)PSend14163, SMB__logicAnd_, 1, (Optr)PSend14172);
    Array PThreadedCode14162 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14163, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14164, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14165, (Optr)&t_send1, (Optr)PSend14166, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14167, (Optr)&t_send1, (Optr)PSend14168, (Optr)&t_push1, (Optr)string_14169, (Optr)&t_send0, (Optr)PSend14170, (Optr)&t_send1, (Optr)PSend14171, (Optr)&t_send0, (Optr)PSend14172, (Optr)&t_send1, (Optr)PSend14173, (Optr)&t_method_return);
    Method PMethod14161 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14162, 1, PSend14173);
    
    MethodClosure MC_SMB_initializeIdentifierBody = new_MethodClosure((Method)PMethod14161, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeIdentifierBody, MC_SMB_initializeIdentifierBody);
}


static void init_SMB_initializeLiteral() {
    Symbol SMB_initializeLiteral = new_Symbol(L"initializeLiteral");
    Symbol SMB_float = new_Symbol(L"float");
    // float. 
    Send PSend14176 = new_Send((Optr)self, SMB_float, 0);
    Symbol SMB_numberConstant = new_Symbol(L"numberConstant");
    // numberConstant. 
    Send PSend14177 = new_Send((Optr)self, SMB_numberConstant, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14178 = new_Send((Optr)PSend14176, SMB__or_, 1, (Optr)PSend14177);
    Symbol SMB_symbolConstant = new_Symbol(L"symbolConstant");
    // symbolConstant. 
    Send PSend14179 = new_Send((Optr)self, SMB_symbolConstant, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14180 = new_Send((Optr)PSend14178, SMB__lt__equals_, 1, (Optr)PSend14179);
    Symbol SMB_characterConstant = new_Symbol(L"characterConstant");
    // characterConstant. 
    Send PSend14181 = new_Send((Optr)self, SMB_characterConstant, 0);
    // <=. 
    Send PSend14182 = new_Send((Optr)PSend14180, SMB__lt__equals_, 1, (Optr)PSend14181);
    Symbol SMB_stringConstant = new_Symbol(L"stringConstant");
    // stringConstant. 
    Send PSend14183 = new_Send((Optr)self, SMB_stringConstant, 0);
    // <=. 
    Send PSend14184 = new_Send((Optr)PSend14182, SMB__lt__equals_, 1, (Optr)PSend14183);
    Symbol SMB_arrayConstant = new_Symbol(L"arrayConstant");
    // arrayConstant. 
    Send PSend14185 = new_Send((Optr)self, SMB_arrayConstant, 0);
    // <=. 
    Send PSend14186 = new_Send((Optr)PSend14184, SMB__lt__equals_, 1, (Optr)PSend14185);
    Array PThreadedCode14175 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14176, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14177, (Optr)&t_send1, (Optr)PSend14178, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14179, (Optr)&t_send1, (Optr)PSend14180, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14181, (Optr)&t_send1, (Optr)PSend14182, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14183, (Optr)&t_send1, (Optr)PSend14184, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14185, (Optr)&t_send1, (Optr)PSend14186, (Optr)&t_method_return);
    Method PMethod14174 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14175, 1, PSend14186);
    
    MethodClosure MC_SMB_initializeLiteral = new_MethodClosure((Method)PMethod14174, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLiteral, MC_SMB_initializeLiteral);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    String string_14189 = new_String(L"BINARY-MESSAGE-EXPRESSION");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend14190 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_unaryObjectDescription = new_Symbol(L"unaryObjectDescription");
    // unaryObjectDescription. 
    Send PSend14191 = new_Send((Optr)self, SMB_unaryObjectDescription, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14192 = new_Send((Optr)PSend14190, SMB__and_, 1, (Optr)PSend14191);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14189_Const = new_Constant((Optr)string_14189);
    // named:parsing:. 
    Send PSend14193 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14189_Const, (Optr)PSend14192);
    Array PThreadedCode14188 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14189, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14190, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14191, (Optr)&t_send1, (Optr)PSend14192, (Optr)&t_send2, (Optr)PSend14193, (Optr)&t_method_return);
    Method PMethod14187 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14188, 1, PSend14193);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14187, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    String string_14196 = new_String(L"STRING");
    Symbol SMB_stringSegment = new_Symbol(L"stringSegment");
    // stringSegment. 
    Send PSend14197 = new_Send((Optr)self, SMB_stringSegment, 0);
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    // strongPlus. 
    Send PSend14198 = new_Send((Optr)PSend14197, SMB_strongPlus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14196_Const = new_Constant((Optr)string_14196);
    // named:parsing:. 
    Send PSend14199 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14196_Const, (Optr)PSend14198);
    Array PThreadedCode14195 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14196, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14197, (Optr)&t_send0, (Optr)PSend14198, (Optr)&t_send2, (Optr)PSend14199, (Optr)&t_method_return);
    Method PMethod14194 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14195, 1, PSend14199);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14194, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_test() {
    Symbol SMB_test = new_Symbol(L"test");
    Array PThreadedCode14201 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod14200 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14201, 1, self);
    
    MethodClosure MC_SMB_test = new_MethodClosure((Method)PMethod14200, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_test, MC_SMB_test);
}


static void init_SMB_initializeSubExpression() {
    Symbol SMB_initializeSubExpression = new_Symbol(L"initializeSubExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14204 = new_Send((Optr)self, SMB_expression, 0);
    String string_14205 = new_String(L".");
    Symbol SMB__and_ = new_Symbol(L"&");
    Constant string_14205_Const = new_Constant((Optr)string_14205);
    // &. 
    Send PSend14206 = new_Send((Optr)PSend14204, SMB__and_, 1, (Optr)string_14205_Const);
    String string_14207 = new_String(L".");
    Symbol SMB__or_ = new_Symbol(L"|");
    Constant string_14207_Const = new_Constant((Optr)string_14207);
    // |. 
    Send PSend14208 = new_Send((Optr)PSend14206, SMB__or_, 1, (Optr)string_14207_Const);
    Array PThreadedCode14203 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14204, (Optr)&t_push1, (Optr)string_14205, (Optr)&t_send1, (Optr)PSend14206, (Optr)&t_push1, (Optr)string_14207, (Optr)&t_send1, (Optr)PSend14208, (Optr)&t_method_return);
    Method PMethod14202 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14203, 1, PSend14208);
    
    MethodClosure MC_SMB_initializeSubExpression = new_MethodClosure((Method)PMethod14202, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeSubExpression, MC_SMB_initializeSubExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    String string_14211 = new_String(L"ANNOTATIONS");
    String string_14212 = new_String(L"<");
    Constant string_14212_Const = new_Constant((Optr)string_14212);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14213 = new_Send((Optr)string_14212_Const, SMB_asParser, 0);
    Symbol SMB_keywordAnnotation = new_Symbol(L"keywordAnnotation");
    // keywordAnnotation. 
    Send PSend14214 = new_Send((Optr)self, SMB_keywordAnnotation, 0);
    Symbol SMB_unaryAnnotation = new_Symbol(L"unaryAnnotation");
    // unaryAnnotation. 
    Send PSend14215 = new_Send((Optr)self, SMB_unaryAnnotation, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14216 = new_Send((Optr)PSend14214, SMB__or_, 1, (Optr)PSend14215);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14217 = new_Send((Optr)PSend14213, SMB__and_, 1, (Optr)PSend14216);
    String string_14218 = new_String(L">");
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    Constant string_14218_Const = new_Constant((Optr)string_14218);
    // <&. 
    Send PSend14219 = new_Send((Optr)PSend14217, SMB__lt__and_, 1, (Optr)string_14218_Const);
    Symbol SMB_times = new_Symbol(L"times");
    // times. 
    Send PSend14220 = new_Send((Optr)PSend14219, SMB_times, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14211_Const = new_Constant((Optr)string_14211);
    // named:parsing:. 
    Send PSend14221 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14211_Const, (Optr)PSend14220);
    Array PThreadedCode14210 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14211, (Optr)&t_push1, (Optr)string_14212, (Optr)&t_send0, (Optr)PSend14213, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14214, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14215, (Optr)&t_send1, (Optr)PSend14216, (Optr)&t_send1, (Optr)PSend14217, (Optr)&t_push1, (Optr)string_14218, (Optr)&t_send1, (Optr)PSend14219, (Optr)&t_send0, (Optr)PSend14220, (Optr)&t_send2, (Optr)PSend14221, (Optr)&t_method_return);
    Method PMethod14209 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14210, 1, PSend14221);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14209, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializeArrayConstant() {
    Symbol SMB_initializeArrayConstant = new_Symbol(L"initializeArrayConstant");
    String string_14224 = new_String(L"#");
    Constant string_14224_Const = new_Constant((Optr)string_14224);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14225 = new_Send((Optr)string_14224_Const, SMB_asParser, 0);
    Symbol SMB_array = new_Symbol(L"array");
    // array. 
    Send PSend14226 = new_Send((Optr)self, SMB_array, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14227 = new_Send((Optr)PSend14225, SMB__and_, 1, (Optr)PSend14226);
    Array PThreadedCode14223 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)string_14224, (Optr)&t_send0, (Optr)PSend14225, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14226, (Optr)&t_send1, (Optr)PSend14227, (Optr)&t_method_return);
    Method PMethod14222 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14223, 1, PSend14227);
    
    MethodClosure MC_SMB_initializeArrayConstant = new_MethodClosure((Method)PMethod14222, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeArrayConstant, MC_SMB_initializeArrayConstant);
}


static void init_SMB_initializeBinaryObjectDescription() {
    Symbol SMB_initializeBinaryObjectDescription = new_Symbol(L"initializeBinaryObjectDescription");
    Symbol SMB_binaryExpression = new_Symbol(L"binaryExpression");
    // binaryExpression. 
    Send PSend14230 = new_Send((Optr)self, SMB_binaryExpression, 0);
    Symbol SMB_binaryObjectDescription = new_Symbol(L"binaryObjectDescription");
    // binaryObjectDescription. 
    Send PSend14231 = new_Send((Optr)self, SMB_binaryObjectDescription, 0);
    Array PThreadedCode14229 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14230, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14231, (Optr)&t_method_return);
    Method PMethod14228 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14229, 2, PSend14230, PSend14231);
    
    MethodClosure MC_SMB_initializeBinaryObjectDescription = new_MethodClosure((Method)PMethod14228, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryObjectDescription, MC_SMB_initializeBinaryObjectDescription);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Variable VAR_stringBorder_0_0 = new_Variable_named(L"stringBorder", 0);
    Array PArray14233 = new_Array_with(1, (Optr)VAR_stringBorder_0_0);
    String string_14237 = new_String(L"'");
    Constant string_14237_Const = new_Constant((Optr)string_14237);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14236 = new_Send((Optr)string_14237_Const, SMB_asParser, 0);
    Assign PAssign14235 = new_Assign((Optr)VAR_stringBorder_0_0, (Optr)PSend14236);
    String string_14238 = new_String(L"STRING-SEGMENT");
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend14239 = new_Send((Optr)VAR_stringBorder_0_0, SMB_not, 0);
    Symbol SMB_consume = new_Symbol(L"consume");
    // consume. 
    Send PSend14240 = new_Send((Optr)PSend14239, SMB_consume, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend14241 = new_Send((Optr)PSend14240, SMB_strongTimes, 0);
    Symbol SMB__logicAnd_ = new_Symbol(L"&&");
    // &&. 
    Send PSend14242 = new_Send((Optr)VAR_stringBorder_0_0, SMB__logicAnd_, 1, (Optr)PSend14241);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14243 = new_Send((Optr)PSend14242, SMB__lt__and_, 1, (Optr)VAR_stringBorder_0_0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14238_Const = new_Constant((Optr)string_14238);
    // named:parsing:. 
    Send PSend14244 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14238_Const, (Optr)PSend14243);
    Array PThreadedCode14234 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign14235, (Optr)&t_push1, (Optr)string_14237, (Optr)&t_send0, (Optr)PSend14236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14238, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send0, (Optr)PSend14239, (Optr)&t_send0, (Optr)PSend14240, (Optr)&t_send0, (Optr)PSend14241, (Optr)&t_send1, (Optr)PSend14242, (Optr)&t_push_variable, (Optr)VAR_stringBorder_0_0, (Optr)&t_send1, (Optr)PSend14243, (Optr)&t_send2, (Optr)PSend14244, (Optr)&t_method_return);
    Method PMethod14232 = new_Method_with(empty_Array, PArray14233, empty_Array, PThreadedCode14234, 2, PAssign14235, PSend14244);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14232, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeBar() {
    Symbol SMB_initializeBar = new_Symbol(L"initializeBar");
    String string_14247 = new_String(L"|");
    Constant string_14247_Const = new_Constant((Optr)string_14247);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14248 = new_Send((Optr)string_14247_Const, SMB_asParser, 0);
    Array PThreadedCode14246 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push1, (Optr)string_14247, (Optr)&t_send0, (Optr)PSend14248, (Optr)&t_method_return);
    Method PMethod14245 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14246, 1, PSend14248);
    
    MethodClosure MC_SMB_initializeBar = new_MethodClosure((Method)PMethod14245, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBar, MC_SMB_initializeBar);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    String string_14251 = new_String(L"BINARY-ARGUMENT");
    Symbol SMB_binarySelector = new_Symbol(L"binarySelector");
    // binarySelector. 
    Send PSend14252 = new_Send((Optr)self, SMB_binarySelector, 0);
    Symbol SMB_parameterName = new_Symbol(L"parameterName");
    // parameterName. 
    Send PSend14253 = new_Send((Optr)self, SMB_parameterName, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14254 = new_Send((Optr)PSend14252, SMB__and_, 1, (Optr)PSend14253);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14251_Const = new_Constant((Optr)string_14251);
    // named:parsing:. 
    Send PSend14255 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14251_Const, (Optr)PSend14254);
    Array PThreadedCode14250 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14251, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14252, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14253, (Optr)&t_send1, (Optr)PSend14254, (Optr)&t_send2, (Optr)PSend14255, (Optr)&t_method_return);
    Method PMethod14249 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14250, 1, PSend14255);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14249, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    String string_14258 = new_String(L"RETURN");
    String string_14259 = new_String(L"^");
    Constant string_14259_Const = new_Constant((Optr)string_14259);
    Symbol SMB_asParser = new_Symbol(L"asParser");
    // asParser. 
    Send PSend14260 = new_Send((Optr)string_14259_Const, SMB_asParser, 0);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14261 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14262 = new_Send((Optr)PSend14260, SMB__and_, 1, (Optr)PSend14261);
    String string_14263 = new_String(L".");
    Constant string_14263_Const = new_Constant((Optr)string_14263);
    // asParser. 
    Send PSend14264 = new_Send((Optr)string_14263_Const, SMB_asParser, 0);
    Symbol SMB_optional = new_Symbol(L"optional");
    // optional. 
    Send PSend14265 = new_Send((Optr)PSend14264, SMB_optional, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend14266 = new_Send((Optr)PSend14265, SMB_omit, 0);
    Symbol SMB__lt__and_ = new_Symbol(L"<&");
    // <&. 
    Send PSend14267 = new_Send((Optr)PSend14262, SMB__lt__and_, 1, (Optr)PSend14266);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14258_Const = new_Constant((Optr)string_14258);
    // named:parsing:. 
    Send PSend14268 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14258_Const, (Optr)PSend14267);
    Array PThreadedCode14257 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14258, (Optr)&t_push1, (Optr)string_14259, (Optr)&t_send0, (Optr)PSend14260, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14261, (Optr)&t_send1, (Optr)PSend14262, (Optr)&t_push1, (Optr)string_14263, (Optr)&t_send0, (Optr)PSend14264, (Optr)&t_send0, (Optr)PSend14265, (Optr)&t_send0, (Optr)PSend14266, (Optr)&t_send1, (Optr)PSend14267, (Optr)&t_send2, (Optr)PSend14268, (Optr)&t_method_return);
    Method PMethod14256 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14257, 1, PSend14268);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14256, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeNumberConstant() {
    Symbol SMB_initializeNumberConstant = new_Symbol(L"initializeNumberConstant");
    Symbol SMB_radix = new_Symbol(L"radix");
    // radix. 
    Send PSend14271 = new_Send((Optr)self, SMB_radix, 0);
    Symbol SMB_number = new_Symbol(L"number");
    // number. 
    Send PSend14272 = new_Send((Optr)self, SMB_number, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14273 = new_Send((Optr)PSend14271, SMB__or_, 1, (Optr)PSend14272);
    Array PThreadedCode14270 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14271, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14272, (Optr)&t_send1, (Optr)PSend14273, (Optr)&t_method_return);
    Method PMethod14269 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14270, 1, PSend14273);
    
    MethodClosure MC_SMB_initializeNumberConstant = new_MethodClosure((Method)PMethod14269, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeNumberConstant, MC_SMB_initializeNumberConstant);
}


static void init_SMB_initializeCharacter() {
    Symbol SMB_initializeCharacter = new_Symbol(L"initializeCharacter");
    String string_14276 = new_String(L"[]{}()_^;$#:-|.'\"");
    Constant string_14276_Const = new_Constant((Optr)string_14276);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend14277 = new_Send((Optr)string_14276_Const, SMB_asPEGChoice, 0);
    Symbol SMB_separators = new_Symbol(L"separators");
    // separators. 
    Send PSend14278 = new_Send((Optr)PEGParser_classReference, SMB_separators, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14279 = new_Send((Optr)PSend14277, SMB__or_, 1, (Optr)PSend14278);
    Symbol SMB_decimalDigit = new_Symbol(L"decimalDigit");
    // decimalDigit. 
    Send PSend14280 = new_Send((Optr)self, SMB_decimalDigit, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14281 = new_Send((Optr)PSend14279, SMB__lt__equals_, 1, (Optr)PSend14280);
    Symbol SMB_letter = new_Symbol(L"letter");
    // letter. 
    Send PSend14282 = new_Send((Optr)self, SMB_letter, 0);
    // <=. 
    Send PSend14283 = new_Send((Optr)PSend14281, SMB__lt__equals_, 1, (Optr)PSend14282);
    Symbol SMB_specialCharacter = new_Symbol(L"specialCharacter");
    // specialCharacter. 
    Send PSend14284 = new_Send((Optr)self, SMB_specialCharacter, 0);
    // <=. 
    Send PSend14285 = new_Send((Optr)PSend14283, SMB__lt__equals_, 1, (Optr)PSend14284);
    Array PThreadedCode14275 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)string_14276, (Optr)&t_send0, (Optr)PSend14277, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend14278, (Optr)&t_send1, (Optr)PSend14279, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14280, (Optr)&t_send1, (Optr)PSend14281, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14282, (Optr)&t_send1, (Optr)PSend14283, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14284, (Optr)&t_send1, (Optr)PSend14285, (Optr)&t_method_return);
    Method PMethod14274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14275, 1, PSend14285);
    
    MethodClosure MC_SMB_initializeCharacter = new_MethodClosure((Method)PMethod14274, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeCharacter, MC_SMB_initializeCharacter);
}


static void init_SMB_injectPrimary() {
    Symbol SMB_injectPrimary = new_Symbol(L"injectPrimary");
    Symbol SMB_primary = new_Symbol(L"primary");
    // primary. 
    Send PSend14288 = new_Send((Optr)self, SMB_primary, 0);
    Symbol SMB_primaryVariable = new_Symbol(L"primaryVariable");
    // primaryVariable. 
    Send PSend14289 = new_Send((Optr)self, SMB_primaryVariable, 0);
    Symbol SMB_literal = new_Symbol(L"literal");
    // literal. 
    Send PSend14290 = new_Send((Optr)self, SMB_literal, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14291 = new_Send((Optr)PSend14289, SMB__or_, 1, (Optr)PSend14290);
    Symbol SMB_block = new_Symbol(L"block");
    // block. 
    Send PSend14292 = new_Send((Optr)self, SMB_block, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14293 = new_Send((Optr)PSend14291, SMB__lt__equals_, 1, (Optr)PSend14292);
    Symbol SMB_scopedExpression = new_Symbol(L"scopedExpression");
    // scopedExpression. 
    Send PSend14294 = new_Send((Optr)self, SMB_scopedExpression, 0);
    // <=. 
    Send PSend14295 = new_Send((Optr)PSend14293, SMB__lt__equals_, 1, (Optr)PSend14294);
    Symbol SMB_braceExpression = new_Symbol(L"braceExpression");
    // braceExpression. 
    Send PSend14296 = new_Send((Optr)self, SMB_braceExpression, 0);
    // <=. 
    Send PSend14297 = new_Send((Optr)PSend14295, SMB__lt__equals_, 1, (Optr)PSend14296);
    // <=. 
    Send PSend14298 = new_Send((Optr)PSend14288, SMB__lt__equals_, 1, (Optr)PSend14297);
    Array PThreadedCode14287 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14288, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14289, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14290, (Optr)&t_send1, (Optr)PSend14291, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14292, (Optr)&t_send1, (Optr)PSend14293, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14294, (Optr)&t_send1, (Optr)PSend14295, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14296, (Optr)&t_send1, (Optr)PSend14297, (Optr)&t_send1, (Optr)PSend14298, (Optr)&t_method_return);
    Method PMethod14286 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14287, 1, PSend14298);
    
    MethodClosure MC_SMB_injectPrimary = new_MethodClosure((Method)PMethod14286, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_injectPrimary, MC_SMB_injectPrimary);
}


static void init_SMB_initializeLetter() {
    Symbol SMB_initializeLetter = new_Symbol(L"initializeLetter");
    Symbol SMB_lowercase = new_Symbol(L"lowercase");
    // lowercase. 
    Send PSend14301 = new_Send((Optr)self, SMB_lowercase, 0);
    Symbol SMB_uppercase = new_Symbol(L"uppercase");
    // uppercase. 
    Send PSend14302 = new_Send((Optr)self, SMB_uppercase, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14303 = new_Send((Optr)PSend14301, SMB__or_, 1, (Optr)PSend14302);
    Array PThreadedCode14300 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14301, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14302, (Optr)&t_send1, (Optr)PSend14303, (Optr)&t_method_return);
    Method PMethod14299 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14300, 1, PSend14303);
    
    MethodClosure MC_SMB_initializeLetter = new_MethodClosure((Method)PMethod14299, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeLetter, MC_SMB_initializeLetter);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    String string_14306 = new_String(L"ASSIGNMENT-EXPRESSIONS");
    Symbol SMB_variableName = new_Symbol(L"variableName");
    // variableName. 
    Send PSend14307 = new_Send((Optr)self, SMB_variableName, 0);
    Symbol SMB_assignmentOp = new_Symbol(L"assignmentOp");
    // assignmentOp. 
    Send PSend14308 = new_Send((Optr)self, SMB_assignmentOp, 0);
    Symbol SMB__and_ = new_Symbol(L"&");
    // &. 
    Send PSend14309 = new_Send((Optr)PSend14307, SMB__and_, 1, (Optr)PSend14308);
    Symbol SMB_plus = new_Symbol(L"plus");
    // plus. 
    Send PSend14310 = new_Send((Optr)PSend14309, SMB_plus, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14306_Const = new_Constant((Optr)string_14306);
    // named:parsing:. 
    Send PSend14311 = new_Send((Optr)PEGMultiParser_classReference, SMB_named_parsing_, 2, (Optr)string_14306_Const, (Optr)PSend14310);
    Array PThreadedCode14305 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_class_reference, (Optr)PEGMultiParser_classReference, (Optr)&t_push1, (Optr)string_14306, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14307, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14308, (Optr)&t_send1, (Optr)PSend14309, (Optr)&t_send0, (Optr)PSend14310, (Optr)&t_send2, (Optr)PSend14311, (Optr)&t_method_return);
    Method PMethod14304 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14305, 1, PSend14311);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14304, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_initializeFinalExpression() {
    Symbol SMB_initializeFinalExpression = new_Symbol(L"initializeFinalExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14314 = new_Send((Optr)self, SMB_expression, 0);
    Array PThreadedCode14313 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14314, (Optr)&t_method_return);
    Method PMethod14312 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14313, 1, PSend14314);
    
    MethodClosure MC_SMB_initializeFinalExpression = new_MethodClosure((Method)PMethod14312, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeFinalExpression, MC_SMB_initializeFinalExpression);
}


static void init_SMB_initializeMessageExpression() {
    Symbol SMB_initializeMessageExpression = new_Symbol(L"initializeMessageExpression");
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend14317 = new_Send((Optr)self, SMB_expression, 0);
    Symbol SMB_messageExpression = new_Symbol(L"messageExpression");
    // messageExpression. 
    Send PSend14318 = new_Send((Optr)self, SMB_messageExpression, 0);
    Array PThreadedCode14316 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14317, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14318, (Optr)&t_method_return);
    Method PMethod14315 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14316, 2, PSend14317, PSend14318);
    
    MethodClosure MC_SMB_initializeMessageExpression = new_MethodClosure((Method)PMethod14315, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessageExpression, MC_SMB_initializeMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    String string_14321 = new_String(L"UNARY-ANNOTATION");
    Symbol SMB_unarySelector = new_Symbol(L"unarySelector");
    // unarySelector. 
    Send PSend14322 = new_Send((Optr)self, SMB_unarySelector, 0);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14321_Const = new_Constant((Optr)string_14321);
    // named:parsing:. 
    Send PSend14323 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14321_Const, (Optr)PSend14322);
    Array PThreadedCode14320 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14321, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14322, (Optr)&t_send2, (Optr)PSend14323, (Optr)&t_method_return);
    Method PMethod14319 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14320, 1, PSend14323);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14319, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeMessagePattern() {
    Symbol SMB_initializeMessagePattern = new_Symbol(L"initializeMessagePattern");
    String string_14326 = new_String(L"MESSAGE-PATTERN");
    Symbol SMB_keywordsArguments = new_Symbol(L"keywordsArguments");
    // keywordsArguments. 
    Send PSend14327 = new_Send((Optr)self, SMB_keywordsArguments, 0);
    Symbol SMB_binaryMessageDefinition = new_Symbol(L"binaryMessageDefinition");
    // binaryMessageDefinition. 
    Send PSend14328 = new_Send((Optr)self, SMB_binaryMessageDefinition, 0);
    Symbol SMB__or_ = new_Symbol(L"|");
    // |. 
    Send PSend14329 = new_Send((Optr)PSend14327, SMB__or_, 1, (Optr)PSend14328);
    Symbol SMB_unaryMessageDefinition = new_Symbol(L"unaryMessageDefinition");
    // unaryMessageDefinition. 
    Send PSend14330 = new_Send((Optr)self, SMB_unaryMessageDefinition, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend14331 = new_Send((Optr)PSend14329, SMB__lt__equals_, 1, (Optr)PSend14330);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Constant string_14326_Const = new_Constant((Optr)string_14326);
    // named:parsing:. 
    Send PSend14332 = new_Send((Optr)PEGParser_classReference, SMB_named_parsing_, 2, (Optr)string_14326_Const, (Optr)PSend14331);
    Array PThreadedCode14325 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_push1, (Optr)string_14326, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14327, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14328, (Optr)&t_send1, (Optr)PSend14329, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14330, (Optr)&t_send1, (Optr)PSend14331, (Optr)&t_send2, (Optr)PSend14332, (Optr)&t_method_return);
    Method PMethod14324 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14325, 1, PSend14332);
    
    MethodClosure MC_SMB_initializeMessagePattern = new_MethodClosure((Method)PMethod14324, Smalltalk_Parser_SmalltalkGrammar_Class);
    store_method(Smalltalk_Parser_SmalltalkGrammar_Class, SMB_initializeMessagePattern, MC_SMB_initializeMessagePattern);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign14335 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode14334 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign14335, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14333 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14334, 2, PAssign14335, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod14333, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
    store_method(HEADER(Smalltalk_Parser_SmalltalkGrammar_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper14341 = new_Super(SMB_new, 0);
    Assign PAssign14340 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)PSuper14341);
    Array PThreadedCode14339 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign14340, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14341, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock14338 = new_Block_with(empty_Array, empty_Array, PThreadedCode14339, 1, PAssign14340);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend14342 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock14338);
    Array PThreadedCode14337 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock14338, (Optr)&t_send1, (Optr)PSend14342, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance, (Optr)&t_method_return);
    Method PMethod14336 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14337, 2, PSend14342, slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod14336, HEADER(Smalltalk_Parser_SmalltalkGrammar_Class));
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