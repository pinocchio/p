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
    Array PArray18662 = new_Array_with(1, (Optr)VAR_aSeparator_0_0);
    Assign PAssign18664 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)VAR_aSeparator_0_0);
    Array PThreadedCode18663 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18664, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18661 = new_Method_with(PArray18662, empty_Array, empty_Array, PThreadedCode18663, 2, PAssign18664, self);
    
    MethodClosure MC_SMB_separator_ = new_MethodClosure((Method)PMethod18661, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_separator_, MC_SMB_separator_);
}


static void init_SMB_memo() {
    Symbol SMB_memo = new_Symbol(L"memo");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18667 = new_Send((Optr)PEGMemo_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18666 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGMemo_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18667, (Optr)&t_method_return);
    Method PMethod18665 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18666, 1, PSend18667);
    
    MethodClosure MC_SMB_memo = new_MethodClosure((Method)PMethod18665, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_memo, MC_SMB_memo);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode18669 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_method_return);
    Method PMethod18668 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18669, 1, slot_PEG_Parser_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod18668, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18674 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend18673 = new_Send((Optr)PSend18674, SMB_separator, 0);
    Assign PAssign18672 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)PSend18673);
    Assign PAssign18675 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)nil_Const);
    Array PThreadedCode18671 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign18672, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18674, (Optr)&t_send0, (Optr)PSend18673, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18675, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18670 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18671, 3, PAssign18672, PAssign18675, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18670, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18677 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18680 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend18682 = new_Send((Optr)slot_PEG_Parser_expression, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18686 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18685 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18686, (Optr)&t_block_return);
    Block PBlock18684 = new_Block_with(empty_Array, empty_Array, PThreadedCode18685, 1, PSend18686);
    // ifFalse:. 
    Send PSend18683 = new_Send((Optr)PSend18682, SMB_ifFalse_, 1, (Optr)PBlock18684);
    // escape:. 
    Send PSend18689 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18688 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18689, (Optr)&t_block_return);
    Block PBlock18687 = new_Block_with(empty_Array, empty_Array, PThreadedCode18688, 1, PSend18689);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18690 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_ifNil_, 1, (Optr)PBlock18687);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18691 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // stack. 
    Send PSend18692 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18693 = new_Send((Optr)PSend18692, SMB_peek, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18694 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_value_, 1, (Optr)PSend18693);
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    // poke:. 
    Send PSend18695 = new_Send((Optr)PSend18691, SMB_poke_, 1, (Optr)PSend18694);
    Array PThreadedCode18681 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18682, (Optr)&t_send_ifFalse_, (Optr)PSend18683, (Optr)PBlock18684, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_closure, (Optr)PBlock18687, (Optr)&t_send1, (Optr)PSend18690, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18691, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18692, (Optr)&t_send0, (Optr)PSend18693, (Optr)&t_send1, (Optr)PSend18694, (Optr)&t_send1, (Optr)PSend18695, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18679 = new_Block_with(PArray18680, empty_Array, PThreadedCode18681, 4, PSend18683, PSend18690, PSend18695, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18696 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18679);
    Array PThreadedCode18678 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18679, (Optr)&t_send1, (Optr)PSend18696, (Optr)&t_method_return);
    Method PMethod18676 = new_Method_with(PArray18677, empty_Array, empty_Array, PThreadedCode18678, 1, PSend18696);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18676, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray18698 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Assign PAssign18700 = new_Assign((Optr)slot_PEG_Parser_name, (Optr)VAR_aName_0_0);
    Array PThreadedCode18699 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18700, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18697 = new_Method_with(PArray18698, empty_Array, empty_Array, PThreadedCode18699, 2, PAssign18700, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod18697, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18702 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend18704 = new_Send((Optr)slot_PEG_Parser_expression, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode18703 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18704, (Optr)&t_method_return);
    Method PMethod18701 = new_Method_with(PArray18702, empty_Array, empty_Array, PThreadedCode18703, 1, PSend18704);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18701, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_semantics_() {
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray18706 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign18708 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode18707 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18708, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18705 = new_Method_with(PArray18706, empty_Array, empty_Array, PThreadedCode18707, 2, PAssign18708, self);
    
    MethodClosure MC_SMB_semantics_ = new_MethodClosure((Method)PMethod18705, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_semantics_, MC_SMB_semantics_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_theExpression_0_0 = new_Variable_named(L"theExpression", 0);
    Array PArray18710 = new_Array_with(1, (Optr)VAR_theExpression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend18713 = new_Send((Optr)VAR_theExpression_0_0, SMB_asChildParser, 0);
    Assign PAssign18712 = new_Assign((Optr)slot_PEG_Parser_expression, (Optr)PSend18713);
    Array PThreadedCode18711 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18712, (Optr)&t_push_variable, (Optr)VAR_theExpression_0_0, (Optr)&t_send0, (Optr)PSend18713, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18709 = new_Method_with(PArray18710, empty_Array, empty_Array, PThreadedCode18711, 2, PAssign18712, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod18709, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_separators() {
    Symbol SMB_separators = new_Symbol(L"separators");
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    // basicSeparators. 
    Send PSend18716 = new_Send((Optr)PEGParser_classReference, SMB_basicSeparators, 0);
    Array PThreadedCode18715 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend18716, (Optr)&t_method_return);
    Method PMethod18714 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18715, 1, PSend18716);
    
    MethodClosure MC_SMB_separators = new_MethodClosure((Method)PMethod18714, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_separators, MC_SMB_separators);
}


static void init_class_SMB_separator() {
    Symbol SMB_separator = new_Symbol(L"separator");
    Symbol SMB_basicSeparator = new_Symbol(L"basicSeparator");
    // basicSeparator. 
    Send PSend18719 = new_Send((Optr)PEGParser_classReference, SMB_basicSeparator, 0);
    Array PThreadedCode18718 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend18719, (Optr)&t_method_return);
    Method PMethod18717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18718, 1, PSend18719);
    
    MethodClosure MC_SMB_separator = new_MethodClosure((Method)PMethod18717, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_separator, MC_SMB_separator);
}


static void init_class_SMB_basicSeparators() {
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18728 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend18730 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend18731 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend18730);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend18732 = new_Send((Optr)Character_classReference, SMB_cr, 0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend18733 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend18732);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18734 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend18735 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend18734);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend18736 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend18737 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend18736);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend18738 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode18729 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18730, (Optr)&t_send2, (Optr)PSend18731, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18732, (Optr)&t_send2, (Optr)PSend18733, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18734, (Optr)&t_send2, (Optr)PSend18735, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18736, (Optr)&t_send2, (Optr)PSend18737, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend18738, (Optr)&t_method_return);
    Block PBlock18727 = new_Block_with(PArray18728, empty_Array, PThreadedCode18729, 5, PSend18731, PSend18733, PSend18735, PSend18737, PSend18738);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend18739 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4_Const);
    // value:. 
    Send PSend18726 = new_Send((Optr)PBlock18727, SMB_value_, 1, (Optr)PSend18739);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend18725 = new_Send((Optr)PSend18726, SMB_asPEGChoice, 0);
    Assign PAssign18724 = new_Assign((Optr)slot_PEG_Parser_Class_class_separators, (Optr)PSend18725);
    Array PThreadedCode18723 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign18724, (Optr)&t_push_closure, (Optr)PBlock18727, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend18739, (Optr)&t_send1, (Optr)PSend18726, (Optr)&t_send0, (Optr)PSend18725, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18722 = new_Block_with(empty_Array, empty_Array, PThreadedCode18723, 1, PAssign18724);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18740 = new_Send((Optr)slot_PEG_Parser_Class_class_separators, SMB_ifNil_, 1, (Optr)PBlock18722);
    Array PThreadedCode18721 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_Class_class_separators, (Optr)&t_push_closure, (Optr)PBlock18722, (Optr)&t_send1, (Optr)PSend18740, (Optr)&t_method_return);
    Method PMethod18720 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18721, 1, PSend18740);
    
    MethodClosure MC_SMB_basicSeparators = new_MethodClosure((Method)PMethod18720, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_basicSeparators, MC_SMB_basicSeparators);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Array PArray18742 = new_Array_with(1, (Optr)VAR_theName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18744 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend18745 = new_Send((Optr)PSend18744, SMB_name_, 1, (Optr)VAR_theName_0_0);
    Array PThreadedCode18743 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18744, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_send1, (Optr)PSend18745, (Optr)&t_method_return);
    Method PMethod18741 = new_Method_with(PArray18742, empty_Array, empty_Array, PThreadedCode18743, 1, PSend18745);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod18741, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_, MC_SMB_named_);
}


static void init_class_SMB_named_parsing_() {
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray18747 = new_Array_with(2, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18749 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_theName_0_0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18750 = new_Send((Optr)PSend18749, SMB__lt__equals_, 1, (Optr)VAR_expression_0_1);
    Array PThreadedCode18748 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_send1, (Optr)PSend18749, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend18750, (Optr)&t_method_return);
    Method PMethod18746 = new_Method_with(PArray18747, empty_Array, empty_Array, PThreadedCode18748, 1, PSend18750);
    
    MethodClosure MC_SMB_named_parsing_ = new_MethodClosure((Method)PMethod18746, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_parsing_, MC_SMB_named_parsing_);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign18753 = new_Assign((Optr)slot_PEG_Parser_Class_class_separator, (Optr)nil_Const);
    Assign PAssign18754 = new_Assign((Optr)slot_PEG_Parser_Class_class_separators, (Optr)nil_Const);
    Array PThreadedCode18752 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign18753, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18754, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18751 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18752, 3, PAssign18753, PAssign18754, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod18751, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_basicSeparator() {
    Symbol SMB_basicSeparator = new_Symbol(L"basicSeparator");
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    // basicSeparators. 
    Send PSend18762 = new_Send((Optr)self, SMB_basicSeparators, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend18761 = new_Send((Optr)PSend18762, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend18760 = new_Send((Optr)PSend18761, SMB_omit, 0);
    Assign PAssign18759 = new_Assign((Optr)slot_PEG_Parser_Class_class_separator, (Optr)PSend18760);
    Array PThreadedCode18758 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign18759, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18762, (Optr)&t_send0, (Optr)PSend18761, (Optr)&t_send0, (Optr)PSend18760, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18757 = new_Block_with(empty_Array, empty_Array, PThreadedCode18758, 1, PAssign18759);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18763 = new_Send((Optr)slot_PEG_Parser_Class_class_separator, SMB_ifNil_, 1, (Optr)PBlock18757);
    Array PThreadedCode18756 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_Class_class_separator, (Optr)&t_push_closure, (Optr)PBlock18757, (Optr)&t_send1, (Optr)PSend18763, (Optr)&t_method_return);
    Method PMethod18755 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18756, 1, PSend18763);
    
    MethodClosure MC_SMB_basicSeparator = new_MethodClosure((Method)PMethod18755, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_basicSeparator, MC_SMB_basicSeparator);
}


static void init_class_SMB_named_parsing_semantics_() {
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Variable VAR_semantics_0_2 = new_Variable_named(L"semantics", 0);
    Array PArray18765 = new_Array_with(3, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1, (Optr)VAR_semantics_0_2);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    // named:parsing:. 
    Send PSend18767 = new_Send((Optr)self, SMB_named_parsing_, 2, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend18768 = new_Send((Optr)PSend18767, SMB_semantics_, 1, (Optr)VAR_semantics_0_2);
    Array PThreadedCode18766 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send2, (Optr)PSend18767, (Optr)&t_push_variable, (Optr)VAR_semantics_0_2, (Optr)&t_send1, (Optr)PSend18768, (Optr)&t_method_return);
    Method PMethod18764 = new_Method_with(PArray18765, empty_Array, empty_Array, PThreadedCode18766, 1, PSend18768);
    
    MethodClosure MC_SMB_named_parsing_semantics_ = new_MethodClosure((Method)PMethod18764, HEADER(PEG_Parser_Class));
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