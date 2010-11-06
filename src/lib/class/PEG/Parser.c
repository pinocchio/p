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
    Array PArray18833 = new_Array_with(1, (Optr)VAR_aSeparator_0_0);
    Assign PAssign18835 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)VAR_aSeparator_0_0);
    Array PThreadedCode18834 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18835, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18832 = new_Method_with(PArray18833, empty_Array, empty_Array, PThreadedCode18834, 2, PAssign18835, self);
    
    MethodClosure MC_SMB_separator_ = new_MethodClosure((Method)PMethod18832, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_separator_, MC_SMB_separator_);
}


static void init_SMB_memo() {
    Symbol SMB_memo = new_Symbol(L"memo");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18838 = new_Send((Optr)PEGMemo_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18837 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGMemo_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18838, (Optr)&t_method_return);
    Method PMethod18836 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18837, 1, PSend18838);
    
    MethodClosure MC_SMB_memo = new_MethodClosure((Method)PMethod18836, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_memo, MC_SMB_memo);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode18840 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_method_return);
    Method PMethod18839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18840, 1, slot_PEG_Parser_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod18839, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend18845 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend18844 = new_Send((Optr)PSend18845, SMB_separator, 0);
    Assign PAssign18843 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)PSend18844);
    Assign PAssign18846 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)nil_Const);
    Array PThreadedCode18842 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign18843, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18845, (Optr)&t_send0, (Optr)PSend18844, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18846, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18841 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18842, 3, PAssign18843, PAssign18846, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18841, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18848 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18851 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend18853 = new_Send((Optr)slot_PEG_Parser_expression, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18857 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18856 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18857, (Optr)&t_block_return);
    Block PBlock18855 = new_Block_with(empty_Array, empty_Array, PThreadedCode18856, 1, PSend18857);
    // ifFalse:. 
    Send PSend18854 = new_Send((Optr)PSend18853, SMB_ifFalse_, 1, (Optr)PBlock18855);
    // escape:. 
    Send PSend18860 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode18859 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend18860, (Optr)&t_block_return);
    Block PBlock18858 = new_Block_with(empty_Array, empty_Array, PThreadedCode18859, 1, PSend18860);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18861 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_ifNil_, 1, (Optr)PBlock18858);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18862 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // stack. 
    Send PSend18863 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18864 = new_Send((Optr)PSend18863, SMB_peek, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18865 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_value_, 1, (Optr)PSend18864);
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    // poke:. 
    Send PSend18866 = new_Send((Optr)PSend18862, SMB_poke_, 1, (Optr)PSend18865);
    Array PThreadedCode18852 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18853, (Optr)&t_send_ifFalse_, (Optr)PSend18854, (Optr)PBlock18855, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_closure, (Optr)PBlock18858, (Optr)&t_send1, (Optr)PSend18861, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18862, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18863, (Optr)&t_send0, (Optr)PSend18864, (Optr)&t_send1, (Optr)PSend18865, (Optr)&t_send1, (Optr)PSend18866, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18850 = new_Block_with(PArray18851, empty_Array, PThreadedCode18852, 4, PSend18854, PSend18861, PSend18866, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18867 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18850);
    Array PThreadedCode18849 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18850, (Optr)&t_send1, (Optr)PSend18867, (Optr)&t_method_return);
    Method PMethod18847 = new_Method_with(PArray18848, empty_Array, empty_Array, PThreadedCode18849, 1, PSend18867);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18847, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray18869 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Assign PAssign18871 = new_Assign((Optr)slot_PEG_Parser_name, (Optr)VAR_aName_0_0);
    Array PThreadedCode18870 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18871, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18868 = new_Method_with(PArray18869, empty_Array, empty_Array, PThreadedCode18870, 2, PAssign18871, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod18868, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18873 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend18875 = new_Send((Optr)slot_PEG_Parser_expression, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode18874 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend18875, (Optr)&t_method_return);
    Method PMethod18872 = new_Method_with(PArray18873, empty_Array, empty_Array, PThreadedCode18874, 1, PSend18875);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18872, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_semantics_() {
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray18877 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign18879 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode18878 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18879, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18876 = new_Method_with(PArray18877, empty_Array, empty_Array, PThreadedCode18878, 2, PAssign18879, self);
    
    MethodClosure MC_SMB_semantics_ = new_MethodClosure((Method)PMethod18876, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_semantics_, MC_SMB_semantics_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_theExpression_0_0 = new_Variable_named(L"theExpression", 0);
    Array PArray18881 = new_Array_with(1, (Optr)VAR_theExpression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend18884 = new_Send((Optr)VAR_theExpression_0_0, SMB_asChildParser, 0);
    Assign PAssign18883 = new_Assign((Optr)slot_PEG_Parser_expression, (Optr)PSend18884);
    Array PThreadedCode18882 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18883, (Optr)&t_push_variable, (Optr)VAR_theExpression_0_0, (Optr)&t_send0, (Optr)PSend18884, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18880 = new_Method_with(PArray18881, empty_Array, empty_Array, PThreadedCode18882, 2, PAssign18883, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod18880, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_separators() {
    Symbol SMB_separators = new_Symbol(L"separators");
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    // basicSeparators. 
    Send PSend18887 = new_Send((Optr)PEGParser_classReference, SMB_basicSeparators, 0);
    Array PThreadedCode18886 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend18887, (Optr)&t_method_return);
    Method PMethod18885 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18886, 1, PSend18887);
    
    MethodClosure MC_SMB_separators = new_MethodClosure((Method)PMethod18885, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_separators, MC_SMB_separators);
}


static void init_class_SMB_separator() {
    Symbol SMB_separator = new_Symbol(L"separator");
    Symbol SMB_basicSeparator = new_Symbol(L"basicSeparator");
    // basicSeparator. 
    Send PSend18890 = new_Send((Optr)PEGParser_classReference, SMB_basicSeparator, 0);
    Array PThreadedCode18889 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend18890, (Optr)&t_method_return);
    Method PMethod18888 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18889, 1, PSend18890);
    
    MethodClosure MC_SMB_separator = new_MethodClosure((Method)PMethod18888, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_separator, MC_SMB_separator);
}


static void init_class_SMB_basicSeparators() {
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18899 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend18901 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend18902 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend18901);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend18903 = new_Send((Optr)Character_classReference, SMB_cr, 0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend18904 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend18903);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18905 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend18906 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend18905);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend18907 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend18908 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend18907);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend18909 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode18900 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18901, (Optr)&t_send2, (Optr)PSend18902, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18903, (Optr)&t_send2, (Optr)PSend18904, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18905, (Optr)&t_send2, (Optr)PSend18906, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18907, (Optr)&t_send2, (Optr)PSend18908, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend18909, (Optr)&t_method_return);
    Block PBlock18898 = new_Block_with(PArray18899, empty_Array, PThreadedCode18900, 5, PSend18902, PSend18904, PSend18906, PSend18908, PSend18909);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend18910 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4_Const);
    // value:. 
    Send PSend18897 = new_Send((Optr)PBlock18898, SMB_value_, 1, (Optr)PSend18910);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend18896 = new_Send((Optr)PSend18897, SMB_asPEGChoice, 0);
    Assign PAssign18895 = new_Assign((Optr)slot_PEG_Parser_Class_class_separators, (Optr)PSend18896);
    Array PThreadedCode18894 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign18895, (Optr)&t_push_closure, (Optr)PBlock18898, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend18910, (Optr)&t_send1, (Optr)PSend18897, (Optr)&t_send0, (Optr)PSend18896, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18893 = new_Block_with(empty_Array, empty_Array, PThreadedCode18894, 1, PAssign18895);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18911 = new_Send((Optr)slot_PEG_Parser_Class_class_separators, SMB_ifNil_, 1, (Optr)PBlock18893);
    Array PThreadedCode18892 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_Class_class_separators, (Optr)&t_push_closure, (Optr)PBlock18893, (Optr)&t_send1, (Optr)PSend18911, (Optr)&t_method_return);
    Method PMethod18891 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18892, 1, PSend18911);
    
    MethodClosure MC_SMB_basicSeparators = new_MethodClosure((Method)PMethod18891, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_basicSeparators, MC_SMB_basicSeparators);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Array PArray18913 = new_Array_with(1, (Optr)VAR_theName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18915 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend18916 = new_Send((Optr)PSend18915, SMB_name_, 1, (Optr)VAR_theName_0_0);
    Array PThreadedCode18914 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18915, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_send1, (Optr)PSend18916, (Optr)&t_method_return);
    Method PMethod18912 = new_Method_with(PArray18913, empty_Array, empty_Array, PThreadedCode18914, 1, PSend18916);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod18912, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_, MC_SMB_named_);
}


static void init_class_SMB_named_parsing_() {
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray18918 = new_Array_with(2, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend18920 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_theName_0_0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend18921 = new_Send((Optr)PSend18920, SMB__lt__equals_, 1, (Optr)VAR_expression_0_1);
    Array PThreadedCode18919 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_send1, (Optr)PSend18920, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend18921, (Optr)&t_method_return);
    Method PMethod18917 = new_Method_with(PArray18918, empty_Array, empty_Array, PThreadedCode18919, 1, PSend18921);
    
    MethodClosure MC_SMB_named_parsing_ = new_MethodClosure((Method)PMethod18917, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_parsing_, MC_SMB_named_parsing_);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign18924 = new_Assign((Optr)slot_PEG_Parser_Class_class_separator, (Optr)nil_Const);
    Assign PAssign18925 = new_Assign((Optr)slot_PEG_Parser_Class_class_separators, (Optr)nil_Const);
    Array PThreadedCode18923 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign18924, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18925, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18922 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18923, 3, PAssign18924, PAssign18925, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod18922, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_basicSeparator() {
    Symbol SMB_basicSeparator = new_Symbol(L"basicSeparator");
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    // basicSeparators. 
    Send PSend18933 = new_Send((Optr)self, SMB_basicSeparators, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend18932 = new_Send((Optr)PSend18933, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend18931 = new_Send((Optr)PSend18932, SMB_omit, 0);
    Assign PAssign18930 = new_Assign((Optr)slot_PEG_Parser_Class_class_separator, (Optr)PSend18931);
    Array PThreadedCode18929 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign18930, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18933, (Optr)&t_send0, (Optr)PSend18932, (Optr)&t_send0, (Optr)PSend18931, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18928 = new_Block_with(empty_Array, empty_Array, PThreadedCode18929, 1, PAssign18930);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend18934 = new_Send((Optr)slot_PEG_Parser_Class_class_separator, SMB_ifNil_, 1, (Optr)PBlock18928);
    Array PThreadedCode18927 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_Class_class_separator, (Optr)&t_push_closure, (Optr)PBlock18928, (Optr)&t_send1, (Optr)PSend18934, (Optr)&t_method_return);
    Method PMethod18926 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18927, 1, PSend18934);
    
    MethodClosure MC_SMB_basicSeparator = new_MethodClosure((Method)PMethod18926, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_basicSeparator, MC_SMB_basicSeparator);
}


static void init_class_SMB_named_parsing_semantics_() {
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Variable VAR_semantics_0_2 = new_Variable_named(L"semantics", 0);
    Array PArray18936 = new_Array_with(3, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1, (Optr)VAR_semantics_0_2);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    // named:parsing:. 
    Send PSend18938 = new_Send((Optr)self, SMB_named_parsing_, 2, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend18939 = new_Send((Optr)PSend18938, SMB_semantics_, 1, (Optr)VAR_semantics_0_2);
    Array PThreadedCode18937 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send2, (Optr)PSend18938, (Optr)&t_push_variable, (Optr)VAR_semantics_0_2, (Optr)&t_send1, (Optr)PSend18939, (Optr)&t_method_return);
    Method PMethod18935 = new_Method_with(PArray18936, empty_Array, empty_Array, PThreadedCode18937, 1, PSend18939);
    
    MethodClosure MC_SMB_named_parsing_semantics_ = new_MethodClosure((Method)PMethod18935, HEADER(PEG_Parser_Class));
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