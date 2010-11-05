#include <lib/class/PEG/Parser.h>


Optr slot_PEG_Parser_Class_class_separator;
Optr slot_PEG_Parser_Class_class_separators;
Optr slot_PEG_Parser_Class_class_stream;
Optr layout_PEG_Parser_Class_class;
Optr slot_PEG_Parser_expression;
Optr slot_PEG_Parser_semantics;
Optr slot_PEG_Parser_scopeClass;
Optr slot_PEG_Parser_separator;
Optr slot_PEG_Parser_name;
Optr layout_PEG_Parser;


static void init_SMB_separator_() {
    Symbol SMB_separator_ = new_Symbol(L"separator:");
    Variable VAR_aSeparator_0_0 = new_Variable_named(L"aSeparator", 0);
    Array PArray18692 = new_Array_with(1, (Optr)VAR_aSeparator_0_0);
    Assign PAssign18694 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)VAR_aSeparator_0_0);
    Array PThreadedCode18693 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18694, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18691 = new_Method_with(PArray18692, empty_Array, empty_Array, PThreadedCode18693, 2, PAssign18694, self);
    
    MethodClosure MC_SMB_separator_ = new_MethodClosure((Method)PMethod18691, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_separator_, MC_SMB_separator_);
}


static void init_SMB_memo() {
    Symbol SMB_memo = new_Symbol(L"memo");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18697 = new_Send((Optr)PEGMemo_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18696 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGMemo_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18697, (Optr)&t_method_return);
    Method PMethod18695 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18696, 1, PSend18697);
    
    MethodClosure MC_SMB_memo = new_MethodClosure((Method)PMethod18695, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_memo, MC_SMB_memo);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode18699 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_method_return);
    Method PMethod18698 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18699, 1, slot_PEG_Parser_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod18698, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18704 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend18703 = new_Send((Optr)PSend18704, SMB_separator, 0);
    Assign PAssign18702 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)PSend18703);
    Assign PAssign18705 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)nil_Const);
    Array PThreadedCode18701 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign18702, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18704, (Optr)&t_send0, (Optr)PSend18703, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18705, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18700 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18701, 3, PAssign18702, PAssign18705, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18700, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18707 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18710 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend18712 = new_Send((Optr)slot_PEG_Parser_expression, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18716 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18715 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18716, (Optr)&t_block_return);
    Block PBlock18714 = new_Block_with(empty_Array, empty_Array, PThreadedCode18715, 1, PSend18716);
    // ifFalse:. 
    Send PSend18713 = new_Send((Optr)PSend18712, SMB_ifFalse_, 1, (Optr)PBlock18714);
    // escape:. 
    Send PSend18719 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18718 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18719, (Optr)&t_block_return);
    Block PBlock18717 = new_Block_with(empty_Array, empty_Array, PThreadedCode18718, 1, PSend18719);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18720 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_ifNil_, 1, (Optr)PBlock18717);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18721 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // stack. 
    Send PSend18722 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18723 = new_Send((Optr)PSend18722, SMB_peek, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18724 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_value_, 1, (Optr)PSend18723);
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    // poke:. 
    Send PSend18725 = new_Send((Optr)PSend18721, SMB_poke_, 1, (Optr)PSend18724);
    Array PThreadedCode18711 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18712, (Optr)&t_send_ifFalse_, (Optr)PSend18713, (Optr)PBlock18714, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_closure, (Optr)PBlock18717, (Optr)&t_send1, (Optr)PSend18720, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18721, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18722, (Optr)&t_send0, (Optr)PSend18723, (Optr)&t_send1, (Optr)PSend18724, (Optr)&t_send1, (Optr)PSend18725, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18709 = new_Block_with(PArray18710, empty_Array, PThreadedCode18711, 4, PSend18713, PSend18720, PSend18725, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18726 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18709);
    Array PThreadedCode18708 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18709, (Optr)&t_send1, (Optr)PSend18726, (Optr)&t_method_return);
    Method PMethod18706 = new_Method_with(PArray18707, empty_Array, empty_Array, PThreadedCode18708, 1, PSend18726);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18706, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray18728 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Assign PAssign18730 = new_Assign((Optr)slot_PEG_Parser_name, (Optr)VAR_aName_0_0);
    Array PThreadedCode18729 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18730, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18727 = new_Method_with(PArray18728, empty_Array, empty_Array, PThreadedCode18729, 2, PAssign18730, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod18727, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18732 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend18734 = new_Send((Optr)slot_PEG_Parser_expression, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode18733 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18734, (Optr)&t_method_return);
    Method PMethod18731 = new_Method_with(PArray18732, empty_Array, empty_Array, PThreadedCode18733, 1, PSend18734);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18731, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_semantics_() {
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray18736 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign18738 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode18737 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18738, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18735 = new_Method_with(PArray18736, empty_Array, empty_Array, PThreadedCode18737, 2, PAssign18738, self);
    
    MethodClosure MC_SMB_semantics_ = new_MethodClosure((Method)PMethod18735, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_semantics_, MC_SMB_semantics_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_theExpression_0_0 = new_Variable_named(L"theExpression", 0);
    Array PArray18740 = new_Array_with(1, (Optr)VAR_theExpression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend18743 = new_Send((Optr)VAR_theExpression_0_0, SMB_asChildParser, 0);
    Assign PAssign18742 = new_Assign((Optr)slot_PEG_Parser_expression, (Optr)PSend18743);
    Array PThreadedCode18741 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18742, (Optr)&t_push_variable, (Optr)VAR_theExpression_0_0, (Optr)&t_send0, (Optr)PSend18743, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18739 = new_Method_with(PArray18740, empty_Array, empty_Array, PThreadedCode18741, 2, PAssign18742, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod18739, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_separators() {
    Symbol SMB_separators = new_Symbol(L"separators");
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    // basicSeparators. 
    Send PSend18746 = new_Send((Optr)PEGParser_classReference, SMB_basicSeparators, 0);
    Array PThreadedCode18745 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend18746, (Optr)&t_method_return);
    Method PMethod18744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18745, 1, PSend18746);
    
    MethodClosure MC_SMB_separators = new_MethodClosure((Method)PMethod18744, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_separators, MC_SMB_separators);
}


static void init_class_SMB_separator() {
    Symbol SMB_separator = new_Symbol(L"separator");
    Symbol SMB_basicSeparator = new_Symbol(L"basicSeparator");
    // basicSeparator. 
    Send PSend18749 = new_Send((Optr)PEGParser_classReference, SMB_basicSeparator, 0);
    Array PThreadedCode18748 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend18749, (Optr)&t_method_return);
    Method PMethod18747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18748, 1, PSend18749);
    
    MethodClosure MC_SMB_separator = new_MethodClosure((Method)PMethod18747, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_separator, MC_SMB_separator);
}


static void init_class_SMB_basicSeparators() {
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18758 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend18760 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend18761 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend18760);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend18762 = new_Send((Optr)Character_classReference, SMB_cr, 0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend18763 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend18762);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18764 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend18765 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend18764);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend18766 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend18767 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend18766);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend18768 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode18759 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18760, (Optr)&t_send2, (Optr)PSend18761, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18762, (Optr)&t_send2, (Optr)PSend18763, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18764, (Optr)&t_send2, (Optr)PSend18765, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18766, (Optr)&t_send2, (Optr)PSend18767, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend18768, (Optr)&t_method_return);
    Block PBlock18757 = new_Block_with(PArray18758, empty_Array, PThreadedCode18759, 5, PSend18761, PSend18763, PSend18765, PSend18767, PSend18768);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend18769 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4_Const);
    // value:. 
    Send PSend18756 = new_Send((Optr)PBlock18757, SMB_value_, 1, (Optr)PSend18769);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend18755 = new_Send((Optr)PSend18756, SMB_asPEGChoice, 0);
    Assign PAssign18754 = new_Assign((Optr)slot_PEG_Parser_Class_class_separators, (Optr)PSend18755);
    Array PThreadedCode18753 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign18754, (Optr)&t_push_closure, (Optr)PBlock18757, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend18769, (Optr)&t_send1, (Optr)PSend18756, (Optr)&t_send0, (Optr)PSend18755, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18752 = new_Block_with(empty_Array, empty_Array, PThreadedCode18753, 1, PAssign18754);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18770 = new_Send((Optr)slot_PEG_Parser_Class_class_separators, SMB_ifNil_, 1, (Optr)PBlock18752);
    Array PThreadedCode18751 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_Class_class_separators, (Optr)&t_push_closure, (Optr)PBlock18752, (Optr)&t_send1, (Optr)PSend18770, (Optr)&t_method_return);
    Method PMethod18750 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18751, 1, PSend18770);
    
    MethodClosure MC_SMB_basicSeparators = new_MethodClosure((Method)PMethod18750, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_basicSeparators, MC_SMB_basicSeparators);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Array PArray18772 = new_Array_with(1, (Optr)VAR_theName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18774 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend18775 = new_Send((Optr)PSend18774, SMB_name_, 1, (Optr)VAR_theName_0_0);
    Array PThreadedCode18773 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18774, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_send1, (Optr)PSend18775, (Optr)&t_method_return);
    Method PMethod18771 = new_Method_with(PArray18772, empty_Array, empty_Array, PThreadedCode18773, 1, PSend18775);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod18771, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_, MC_SMB_named_);
}


static void init_class_SMB_named_parsing_() {
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray18777 = new_Array_with(2, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18779 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_theName_0_0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18780 = new_Send((Optr)PSend18779, SMB__lt__equals_, 1, (Optr)VAR_expression_0_1);
    Array PThreadedCode18778 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_send1, (Optr)PSend18779, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend18780, (Optr)&t_method_return);
    Method PMethod18776 = new_Method_with(PArray18777, empty_Array, empty_Array, PThreadedCode18778, 1, PSend18780);
    
    MethodClosure MC_SMB_named_parsing_ = new_MethodClosure((Method)PMethod18776, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_parsing_, MC_SMB_named_parsing_);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign18783 = new_Assign((Optr)slot_PEG_Parser_Class_class_separator, (Optr)nil_Const);
    Assign PAssign18784 = new_Assign((Optr)slot_PEG_Parser_Class_class_separators, (Optr)nil_Const);
    Array PThreadedCode18782 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign18783, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18784, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18781 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18782, 3, PAssign18783, PAssign18784, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod18781, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_basicSeparator() {
    Symbol SMB_basicSeparator = new_Symbol(L"basicSeparator");
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    // basicSeparators. 
    Send PSend18792 = new_Send((Optr)self, SMB_basicSeparators, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend18791 = new_Send((Optr)PSend18792, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend18790 = new_Send((Optr)PSend18791, SMB_omit, 0);
    Assign PAssign18789 = new_Assign((Optr)slot_PEG_Parser_Class_class_separator, (Optr)PSend18790);
    Array PThreadedCode18788 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign18789, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18792, (Optr)&t_send0, (Optr)PSend18791, (Optr)&t_send0, (Optr)PSend18790, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18787 = new_Block_with(empty_Array, empty_Array, PThreadedCode18788, 1, PAssign18789);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18793 = new_Send((Optr)slot_PEG_Parser_Class_class_separator, SMB_ifNil_, 1, (Optr)PBlock18787);
    Array PThreadedCode18786 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_Class_class_separator, (Optr)&t_push_closure, (Optr)PBlock18787, (Optr)&t_send1, (Optr)PSend18793, (Optr)&t_method_return);
    Method PMethod18785 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18786, 1, PSend18793);
    
    MethodClosure MC_SMB_basicSeparator = new_MethodClosure((Method)PMethod18785, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_basicSeparator, MC_SMB_basicSeparator);
}


static void init_class_SMB_named_parsing_semantics_() {
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Variable VAR_semantics_0_2 = new_Variable_named(L"semantics", 0);
    Array PArray18795 = new_Array_with(3, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1, (Optr)VAR_semantics_0_2);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    // named:parsing:. 
    Send PSend18797 = new_Send((Optr)self, SMB_named_parsing_, 2, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend18798 = new_Send((Optr)PSend18797, SMB_semantics_, 1, (Optr)VAR_semantics_0_2);
    Array PThreadedCode18796 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send2, (Optr)PSend18797, (Optr)&t_push_variable, (Optr)VAR_semantics_0_2, (Optr)&t_send1, (Optr)PSend18798, (Optr)&t_method_return);
    Method PMethod18794 = new_Method_with(PArray18795, empty_Array, empty_Array, PThreadedCode18796, 1, PSend18798);
    
    MethodClosure MC_SMB_named_parsing_semantics_ = new_MethodClosure((Method)PMethod18794, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_parsing_semantics_, MC_SMB_named_parsing_semantics_);
}

void init_PEG_PEGParser_layout() {
    slot_PEG_Parser_Class_class_separator = (Optr)new_Slot(5, L"separator");
    slot_PEG_Parser_Class_class_separators = (Optr)new_Slot(6, L"separators");
    slot_PEG_Parser_Class_class_stream = (Optr)new_Slot(7, L"stream");
    layout_PEG_Parser_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 8);
    ((Array)layout_PEG_Parser_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_Parser_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_Parser_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_Parser_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_Parser_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_PEG_Parser_Class_class)->values[5] = slot_PEG_Parser_Class_class_separator; // separator 
    ((Array)layout_PEG_Parser_Class_class)->values[6] = slot_PEG_Parser_Class_class_separators; // separators 
    ((Array)layout_PEG_Parser_Class_class)->values[7] = slot_PEG_Parser_Class_class_stream; // stream 
    
    Symbol  SMB_Parser = new_Symbol(L"Parser");
    slot_PEG_Parser_expression = (Optr)new_Slot(0, L"expression");
    slot_PEG_Parser_semantics = (Optr)new_Slot(1, L"semantics");
    slot_PEG_Parser_scopeClass = (Optr)new_Slot(2, L"scopeClass");
    slot_PEG_Parser_separator = (Optr)new_Slot(3, L"separator");
    slot_PEG_Parser_name = (Optr)new_Slot(4, L"name");
    layout_PEG_Parser = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_Parser)->values[0] = slot_PEG_Parser_expression; // expression 
    ((Array)layout_PEG_Parser)->values[1] = slot_PEG_Parser_semantics; // semantics 
    ((Array)layout_PEG_Parser)->values[2] = slot_PEG_Parser_scopeClass; // scopeClass 
    ((Array)layout_PEG_Parser)->values[3] = slot_PEG_Parser_separator; // separator 
    ((Array)layout_PEG_Parser)->values[4] = slot_PEG_Parser_name; // name 
    PEG_Parser_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_Parser_Class_class);
    PEG_Parser_Class->layout = layout_PEG_Parser;
    PEG_Parser_Class->name = SMB_Parser;
    
}

void init_PEG_PEGParser_methods() {
    init_SMB_separator_();
    init_SMB_memo();
    init_SMB_expression();
    init_SMB_initialize();
    init_SMB_parseOn_();
    init_SMB_name_();
    init_SMB_omitMatch_();
    init_SMB_semantics_();
    init_SMB__lt__equals_();
    init_class_SMB_separators();
    init_class_SMB_separator();
    init_class_SMB_basicSeparators();
    init_class_SMB_named_();
    init_class_SMB_named_parsing_();
    init_class_SMB_reset();
    init_class_SMB_basicSeparator();
    init_class_SMB_named_parsing_semantics_();
    
}