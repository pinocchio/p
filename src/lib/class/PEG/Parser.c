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
    Array PArray19022 = new_Array_with(1, (Optr)VAR_aSeparator_0_0);
    Assign PAssign19024 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)VAR_aSeparator_0_0);
    Array PThreadedCode19023 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19024, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19021 = new_Method_with(PArray19022, empty_Array, empty_Array, PThreadedCode19023, 2, PAssign19024, self);
    
    MethodClosure MC_SMB_separator_ = new_MethodClosure((Method)PMethod19021, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_separator_, MC_SMB_separator_);
}


static void init_SMB_memo() {
    Symbol SMB_memo = new_Symbol(L"memo");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19027 = new_Send((Optr)PEGMemo_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode19026 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGMemo_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19027, (Optr)&t_method_return);
    Method PMethod19025 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19026, 1, PSend19027);
    
    MethodClosure MC_SMB_memo = new_MethodClosure((Method)PMethod19025, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_memo, MC_SMB_memo);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode19029 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_method_return);
    Method PMethod19028 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19029, 1, slot_PEG_Parser_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod19028, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19034 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend19033 = new_Send((Optr)PSend19034, SMB_separator, 0);
    Assign PAssign19032 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)PSend19033);
    Assign PAssign19035 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)nil_Const);
    Array PThreadedCode19031 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign19032, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19034, (Optr)&t_send0, (Optr)PSend19033, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19035, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19030 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19031, 3, PAssign19032, PAssign19035, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19030, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19037 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19040 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19042 = new_Send((Optr)slot_PEG_Parser_expression, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19046 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19045 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19046, (Optr)&t_block_return);
    Block PBlock19044 = new_Block_with(empty_Array, empty_Array, PThreadedCode19045, 1, PSend19046);
    // ifFalse:. 
    Send PSend19043 = new_Send((Optr)PSend19042, SMB_ifFalse_, 1, (Optr)PBlock19044);
    // escape:. 
    Send PSend19049 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19048 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19049, (Optr)&t_block_return);
    Block PBlock19047 = new_Block_with(empty_Array, empty_Array, PThreadedCode19048, 1, PSend19049);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19050 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_ifNil_, 1, (Optr)PBlock19047);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19051 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // stack. 
    Send PSend19052 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19053 = new_Send((Optr)PSend19052, SMB_peek, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19054 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_value_, 1, (Optr)PSend19053);
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    // poke:. 
    Send PSend19055 = new_Send((Optr)PSend19051, SMB_poke_, 1, (Optr)PSend19054);
    Array PThreadedCode19041 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19042, (Optr)&t_send_ifFalse_, (Optr)PSend19043, (Optr)PBlock19044, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_closure, (Optr)PBlock19047, (Optr)&t_send1, (Optr)PSend19050, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19051, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19052, (Optr)&t_send0, (Optr)PSend19053, (Optr)&t_send1, (Optr)PSend19054, (Optr)&t_send1, (Optr)PSend19055, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19039 = new_Block_with(PArray19040, empty_Array, PThreadedCode19041, 4, PSend19043, PSend19050, PSend19055, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19056 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19039);
    Array PThreadedCode19038 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19039, (Optr)&t_send1, (Optr)PSend19056, (Optr)&t_method_return);
    Method PMethod19036 = new_Method_with(PArray19037, empty_Array, empty_Array, PThreadedCode19038, 1, PSend19056);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19036, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray19058 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Assign PAssign19060 = new_Assign((Optr)slot_PEG_Parser_name, (Optr)VAR_aName_0_0);
    Array PThreadedCode19059 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19060, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19057 = new_Method_with(PArray19058, empty_Array, empty_Array, PThreadedCode19059, 2, PAssign19060, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod19057, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19062 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19064 = new_Send((Optr)slot_PEG_Parser_expression, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19063 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19064, (Optr)&t_method_return);
    Method PMethod19061 = new_Method_with(PArray19062, empty_Array, empty_Array, PThreadedCode19063, 1, PSend19064);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19061, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_semantics_() {
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray19066 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign19068 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode19067 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19068, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19065 = new_Method_with(PArray19066, empty_Array, empty_Array, PThreadedCode19067, 2, PAssign19068, self);
    
    MethodClosure MC_SMB_semantics_ = new_MethodClosure((Method)PMethod19065, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_semantics_, MC_SMB_semantics_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_theExpression_0_0 = new_Variable_named(L"theExpression", 0);
    Array PArray19070 = new_Array_with(1, (Optr)VAR_theExpression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19073 = new_Send((Optr)VAR_theExpression_0_0, SMB_asChildParser, 0);
    Assign PAssign19072 = new_Assign((Optr)slot_PEG_Parser_expression, (Optr)PSend19073);
    Array PThreadedCode19071 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19072, (Optr)&t_push_variable, (Optr)VAR_theExpression_0_0, (Optr)&t_send0, (Optr)PSend19073, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19069 = new_Method_with(PArray19070, empty_Array, empty_Array, PThreadedCode19071, 2, PAssign19072, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19069, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_separators() {
    Symbol SMB_separators = new_Symbol(L"separators");
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    // basicSeparators. 
    Send PSend19076 = new_Send((Optr)PEGParser_classReference, SMB_basicSeparators, 0);
    Array PThreadedCode19075 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19076, (Optr)&t_method_return);
    Method PMethod19074 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19075, 1, PSend19076);
    
    MethodClosure MC_SMB_separators = new_MethodClosure((Method)PMethod19074, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_separators, MC_SMB_separators);
}


static void init_class_SMB_separator() {
    Symbol SMB_separator = new_Symbol(L"separator");
    Symbol SMB_basicSeparator = new_Symbol(L"basicSeparator");
    // basicSeparator. 
    Send PSend19079 = new_Send((Optr)PEGParser_classReference, SMB_basicSeparator, 0);
    Array PThreadedCode19078 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19079, (Optr)&t_method_return);
    Method PMethod19077 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19078, 1, PSend19079);
    
    MethodClosure MC_SMB_separator = new_MethodClosure((Method)PMethod19077, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_separator, MC_SMB_separator);
}


static void init_class_SMB_basicSeparators() {
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray19088 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend19090 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend19091 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend19090);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend19092 = new_Send((Optr)Character_classReference, SMB_cr, 0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend19093 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend19092);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend19094 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend19095 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend19094);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend19096 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend19097 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend19096);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend19098 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode19089 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend19090, (Optr)&t_send2, (Optr)PSend19091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend19092, (Optr)&t_send2, (Optr)PSend19093, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend19094, (Optr)&t_send2, (Optr)PSend19095, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend19096, (Optr)&t_send2, (Optr)PSend19097, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend19098, (Optr)&t_method_return);
    Block PBlock19087 = new_Block_with(PArray19088, empty_Array, PThreadedCode19089, 5, PSend19091, PSend19093, PSend19095, PSend19097, PSend19098);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19099 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4_Const);
    // value:. 
    Send PSend19086 = new_Send((Optr)PBlock19087, SMB_value_, 1, (Optr)PSend19099);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend19085 = new_Send((Optr)PSend19086, SMB_asPEGChoice, 0);
    Assign PAssign19084 = new_Assign((Optr)slot_PEG_Parser_Class_class_separators, (Optr)PSend19085);
    Array PThreadedCode19083 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19084, (Optr)&t_push_closure, (Optr)PBlock19087, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend19099, (Optr)&t_send1, (Optr)PSend19086, (Optr)&t_send0, (Optr)PSend19085, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19082 = new_Block_with(empty_Array, empty_Array, PThreadedCode19083, 1, PAssign19084);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19100 = new_Send((Optr)slot_PEG_Parser_Class_class_separators, SMB_ifNil_, 1, (Optr)PBlock19082);
    Array PThreadedCode19081 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_Class_class_separators, (Optr)&t_push_closure, (Optr)PBlock19082, (Optr)&t_send1, (Optr)PSend19100, (Optr)&t_method_return);
    Method PMethod19080 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19081, 1, PSend19100);
    
    MethodClosure MC_SMB_basicSeparators = new_MethodClosure((Method)PMethod19080, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_basicSeparators, MC_SMB_basicSeparators);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Array PArray19102 = new_Array_with(1, (Optr)VAR_theName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19104 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend19105 = new_Send((Optr)PSend19104, SMB_name_, 1, (Optr)VAR_theName_0_0);
    Array PThreadedCode19103 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19104, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_send1, (Optr)PSend19105, (Optr)&t_method_return);
    Method PMethod19101 = new_Method_with(PArray19102, empty_Array, empty_Array, PThreadedCode19103, 1, PSend19105);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod19101, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_, MC_SMB_named_);
}


static void init_class_SMB_named_parsing_() {
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray19107 = new_Array_with(2, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend19109 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_theName_0_0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend19110 = new_Send((Optr)PSend19109, SMB__lt__equals_, 1, (Optr)VAR_expression_0_1);
    Array PThreadedCode19108 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_send1, (Optr)PSend19109, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend19110, (Optr)&t_method_return);
    Method PMethod19106 = new_Method_with(PArray19107, empty_Array, empty_Array, PThreadedCode19108, 1, PSend19110);
    
    MethodClosure MC_SMB_named_parsing_ = new_MethodClosure((Method)PMethod19106, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_parsing_, MC_SMB_named_parsing_);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign19113 = new_Assign((Optr)slot_PEG_Parser_Class_class_separator, (Optr)nil_Const);
    Assign PAssign19114 = new_Assign((Optr)slot_PEG_Parser_Class_class_separators, (Optr)nil_Const);
    Array PThreadedCode19112 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign19113, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19114, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19111 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19112, 3, PAssign19113, PAssign19114, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod19111, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_basicSeparator() {
    Symbol SMB_basicSeparator = new_Symbol(L"basicSeparator");
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    // basicSeparators. 
    Send PSend19122 = new_Send((Optr)self, SMB_basicSeparators, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend19121 = new_Send((Optr)PSend19122, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend19120 = new_Send((Optr)PSend19121, SMB_omit, 0);
    Assign PAssign19119 = new_Assign((Optr)slot_PEG_Parser_Class_class_separator, (Optr)PSend19120);
    Array PThreadedCode19118 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign19119, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19122, (Optr)&t_send0, (Optr)PSend19121, (Optr)&t_send0, (Optr)PSend19120, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19117 = new_Block_with(empty_Array, empty_Array, PThreadedCode19118, 1, PAssign19119);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19123 = new_Send((Optr)slot_PEG_Parser_Class_class_separator, SMB_ifNil_, 1, (Optr)PBlock19117);
    Array PThreadedCode19116 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_Class_class_separator, (Optr)&t_push_closure, (Optr)PBlock19117, (Optr)&t_send1, (Optr)PSend19123, (Optr)&t_method_return);
    Method PMethod19115 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19116, 1, PSend19123);
    
    MethodClosure MC_SMB_basicSeparator = new_MethodClosure((Method)PMethod19115, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_basicSeparator, MC_SMB_basicSeparator);
}


static void init_class_SMB_named_parsing_semantics_() {
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Variable VAR_semantics_0_2 = new_Variable_named(L"semantics", 0);
    Array PArray19125 = new_Array_with(3, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1, (Optr)VAR_semantics_0_2);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    // named:parsing:. 
    Send PSend19127 = new_Send((Optr)self, SMB_named_parsing_, 2, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend19128 = new_Send((Optr)PSend19127, SMB_semantics_, 1, (Optr)VAR_semantics_0_2);
    Array PThreadedCode19126 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send2, (Optr)PSend19127, (Optr)&t_push_variable, (Optr)VAR_semantics_0_2, (Optr)&t_send1, (Optr)PSend19128, (Optr)&t_method_return);
    Method PMethod19124 = new_Method_with(PArray19125, empty_Array, empty_Array, PThreadedCode19126, 1, PSend19128);
    
    MethodClosure MC_SMB_named_parsing_semantics_ = new_MethodClosure((Method)PMethod19124, HEADER(PEG_Parser_Class));
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