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
    Array PArray19151 = new_Array_with(1, (Optr)VAR_aSeparator_0_0);
    Assign PAssign19153 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)VAR_aSeparator_0_0);
    Array PThreadedCode19152 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19153, (Optr)&t_push_variable, (Optr)VAR_aSeparator_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19150 = new_Method_with(PArray19151, empty_Array, empty_Array, PThreadedCode19152, 2, PAssign19153, self);
    
    MethodClosure MC_SMB_separator_ = new_MethodClosure((Method)PMethod19150, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_separator_, MC_SMB_separator_);
}


static void init_SMB_memo() {
    Symbol SMB_memo = new_Symbol(L"memo");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19156 = new_Send((Optr)PEGMemo_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode19155 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGMemo_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend19156, (Optr)&t_method_return);
    Method PMethod19154 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19155, 1, PSend19156);
    
    MethodClosure MC_SMB_memo = new_MethodClosure((Method)PMethod19154, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_memo, MC_SMB_memo);
}


static void init_SMB_expression() {
    Symbol SMB_expression = new_Symbol(L"expression");
    Array PThreadedCode19158 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_method_return);
    Method PMethod19157 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19158, 1, slot_PEG_Parser_expression);
    
    MethodClosure MC_SMB_expression = new_MethodClosure((Method)PMethod19157, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_expression, MC_SMB_expression);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend19163 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_separator = new_Symbol(L"separator");
    // separator. 
    Send PSend19162 = new_Send((Optr)PSend19163, SMB_separator, 0);
    Assign PAssign19161 = new_Assign((Optr)slot_PEG_Parser_separator, (Optr)PSend19162);
    Assign PAssign19164 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)nil_Const);
    Array PThreadedCode19160 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign19161, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19163, (Optr)&t_send0, (Optr)PSend19162, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19164, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19159 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19160, 3, PAssign19161, PAssign19164, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod19159, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19166 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19169 = new_Array_with(1, (Optr)VAR__return__1_0);
    // parseOn:. 
    Send PSend19171 = new_Send((Optr)slot_PEG_Parser_expression, SMB_parseOn_, 1, (Optr)VAR_input_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19175 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19174 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19175, (Optr)&t_block_return);
    Block PBlock19173 = new_Block_with(empty_Array, empty_Array, PThreadedCode19174, 1, PSend19175);
    // ifFalse:. 
    Send PSend19172 = new_Send((Optr)PSend19171, SMB_ifFalse_, 1, (Optr)PBlock19173);
    // escape:. 
    Send PSend19178 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)true_Const);
    Array PThreadedCode19177 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend19178, (Optr)&t_block_return);
    Block PBlock19176 = new_Block_with(empty_Array, empty_Array, PThreadedCode19177, 1, PSend19178);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19179 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_ifNil_, 1, (Optr)PBlock19176);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19180 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    // stack. 
    Send PSend19181 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19182 = new_Send((Optr)PSend19181, SMB_peek, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend19183 = new_Send((Optr)slot_PEG_Parser_semantics, SMB_value_, 1, (Optr)PSend19182);
    Symbol SMB_poke_ = new_Symbol(L"poke:");
    // poke:. 
    Send PSend19184 = new_Send((Optr)PSend19180, SMB_poke_, 1, (Optr)PSend19183);
    Array PThreadedCode19170 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19171, (Optr)&t_send_ifFalse_, (Optr)PSend19172, (Optr)PBlock19173, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_closure, (Optr)PBlock19176, (Optr)&t_send1, (Optr)PSend19179, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19180, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_semantics, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19181, (Optr)&t_send0, (Optr)PSend19182, (Optr)&t_send1, (Optr)PSend19183, (Optr)&t_send1, (Optr)PSend19184, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19168 = new_Block_with(PArray19169, empty_Array, PThreadedCode19170, 4, PSend19172, PSend19179, PSend19184, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19185 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19168);
    Array PThreadedCode19167 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19168, (Optr)&t_send1, (Optr)PSend19185, (Optr)&t_method_return);
    Method PMethod19165 = new_Method_with(PArray19166, empty_Array, empty_Array, PThreadedCode19167, 1, PSend19185);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19165, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_aName_0_0 = new_Variable_named(L"aName", 0);
    Array PArray19187 = new_Array_with(1, (Optr)VAR_aName_0_0);
    Assign PAssign19189 = new_Assign((Optr)slot_PEG_Parser_name, (Optr)VAR_aName_0_0);
    Array PThreadedCode19188 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19189, (Optr)&t_push_variable, (Optr)VAR_aName_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19186 = new_Method_with(PArray19187, empty_Array, empty_Array, PThreadedCode19188, 2, PAssign19189, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod19186, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19191 = new_Array_with(1, (Optr)VAR_input_0_0);
    // omitMatch:. 
    Send PSend19193 = new_Send((Optr)slot_PEG_Parser_expression, SMB_omitMatch_, 1, (Optr)VAR_input_0_0);
    Array PThreadedCode19192 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_expression, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send1, (Optr)PSend19193, (Optr)&t_method_return);
    Method PMethod19190 = new_Method_with(PArray19191, empty_Array, empty_Array, PThreadedCode19192, 1, PSend19193);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19190, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_semantics_() {
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray19195 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign19197 = new_Assign((Optr)slot_PEG_Parser_semantics, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode19196 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19197, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19194 = new_Method_with(PArray19195, empty_Array, empty_Array, PThreadedCode19196, 2, PAssign19197, self);
    
    MethodClosure MC_SMB_semantics_ = new_MethodClosure((Method)PMethod19194, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB_semantics_, MC_SMB_semantics_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_theExpression_0_0 = new_Variable_named(L"theExpression", 0);
    Array PArray19199 = new_Array_with(1, (Optr)VAR_theExpression_0_0);
    Symbol SMB_asChildParser = new_Symbol(L"asChildParser");
    // asChildParser. 
    Send PSend19202 = new_Send((Optr)VAR_theExpression_0_0, SMB_asChildParser, 0);
    Assign PAssign19201 = new_Assign((Optr)slot_PEG_Parser_expression, (Optr)PSend19202);
    Array PThreadedCode19200 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19201, (Optr)&t_push_variable, (Optr)VAR_theExpression_0_0, (Optr)&t_send0, (Optr)PSend19202, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19198 = new_Method_with(PArray19199, empty_Array, empty_Array, PThreadedCode19200, 2, PAssign19201, self);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod19198, PEG_Parser_Class);
    store_method(PEG_Parser_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_class_SMB_separators() {
    Symbol SMB_separators = new_Symbol(L"separators");
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    // basicSeparators. 
    Send PSend19205 = new_Send((Optr)PEGParser_classReference, SMB_basicSeparators, 0);
    Array PThreadedCode19204 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19205, (Optr)&t_method_return);
    Method PMethod19203 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19204, 1, PSend19205);
    
    MethodClosure MC_SMB_separators = new_MethodClosure((Method)PMethod19203, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_separators, MC_SMB_separators);
}


static void init_class_SMB_separator() {
    Symbol SMB_separator = new_Symbol(L"separator");
    Symbol SMB_basicSeparator = new_Symbol(L"basicSeparator");
    // basicSeparator. 
    Send PSend19208 = new_Send((Optr)PEGParser_classReference, SMB_basicSeparator, 0);
    Array PThreadedCode19207 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)PEGParser_classReference, (Optr)&t_send0, (Optr)PSend19208, (Optr)&t_method_return);
    Method PMethod19206 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19207, 1, PSend19208);
    
    MethodClosure MC_SMB_separator = new_MethodClosure((Method)PMethod19206, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_separator, MC_SMB_separator);
}


static void init_class_SMB_basicSeparators() {
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray19217 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend19219 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend19220 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PSend19219);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend19221 = new_Send((Optr)Character_classReference, SMB_cr, 0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend19222 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PSend19221);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend19223 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend19224 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PSend19223);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend19225 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend19226 = new_Send((Optr)VAR__receiver__1_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PSend19225);
    Symbol SMB_yourself = new_Symbol(L"yourself");
    // yourself. 
    Send PSend19227 = new_Send((Optr)VAR__receiver__1_0, SMB_yourself, 0);
    Array PThreadedCode19218 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_1, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend19219, (Optr)&t_send2, (Optr)PSend19220, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_2, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend19221, (Optr)&t_send2, (Optr)PSend19222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend19223, (Optr)&t_send2, (Optr)PSend19224, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend19225, (Optr)&t_send2, (Optr)PSend19226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend19227, (Optr)&t_method_return);
    Block PBlock19216 = new_Block_with(PArray19217, empty_Array, PThreadedCode19218, 5, PSend19220, PSend19222, PSend19224, PSend19226, PSend19227);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend19228 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_4_Const);
    // value:. 
    Send PSend19215 = new_Send((Optr)PBlock19216, SMB_value_, 1, (Optr)PSend19228);
    Symbol SMB_asPEGChoice = new_Symbol(L"asPEGChoice");
    // asPEGChoice. 
    Send PSend19214 = new_Send((Optr)PSend19215, SMB_asPEGChoice, 0);
    Assign PAssign19213 = new_Assign((Optr)slot_PEG_Parser_Class_class_separators, (Optr)PSend19214);
    Array PThreadedCode19212 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign19213, (Optr)&t_push_closure, (Optr)PBlock19216, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend19228, (Optr)&t_send1, (Optr)PSend19215, (Optr)&t_send0, (Optr)PSend19214, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19211 = new_Block_with(empty_Array, empty_Array, PThreadedCode19212, 1, PAssign19213);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19229 = new_Send((Optr)slot_PEG_Parser_Class_class_separators, SMB_ifNil_, 1, (Optr)PBlock19211);
    Array PThreadedCode19210 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_Class_class_separators, (Optr)&t_push_closure, (Optr)PBlock19211, (Optr)&t_send1, (Optr)PSend19229, (Optr)&t_method_return);
    Method PMethod19209 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19210, 1, PSend19229);
    
    MethodClosure MC_SMB_basicSeparators = new_MethodClosure((Method)PMethod19209, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_basicSeparators, MC_SMB_basicSeparators);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Array PArray19231 = new_Array_with(1, (Optr)VAR_theName_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend19233 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend19234 = new_Send((Optr)PSend19233, SMB_name_, 1, (Optr)VAR_theName_0_0);
    Array PThreadedCode19232 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19233, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_send1, (Optr)PSend19234, (Optr)&t_method_return);
    Method PMethod19230 = new_Method_with(PArray19231, empty_Array, empty_Array, PThreadedCode19232, 1, PSend19234);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod19230, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_, MC_SMB_named_);
}


static void init_class_SMB_named_parsing_() {
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray19236 = new_Array_with(2, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend19238 = new_Send((Optr)self, SMB_named_, 1, (Optr)VAR_theName_0_0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend19239 = new_Send((Optr)PSend19238, SMB__lt__equals_, 1, (Optr)VAR_expression_0_1);
    Array PThreadedCode19237 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_send1, (Optr)PSend19238, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend19239, (Optr)&t_method_return);
    Method PMethod19235 = new_Method_with(PArray19236, empty_Array, empty_Array, PThreadedCode19237, 1, PSend19239);
    
    MethodClosure MC_SMB_named_parsing_ = new_MethodClosure((Method)PMethod19235, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_named_parsing_, MC_SMB_named_parsing_);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign19242 = new_Assign((Optr)slot_PEG_Parser_Class_class_separator, (Optr)nil_Const);
    Assign PAssign19243 = new_Assign((Optr)slot_PEG_Parser_Class_class_separators, (Optr)nil_Const);
    Array PThreadedCode19241 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign19242, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign19243, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19240 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19241, 3, PAssign19242, PAssign19243, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod19240, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_basicSeparator() {
    Symbol SMB_basicSeparator = new_Symbol(L"basicSeparator");
    Symbol SMB_basicSeparators = new_Symbol(L"basicSeparators");
    // basicSeparators. 
    Send PSend19251 = new_Send((Optr)self, SMB_basicSeparators, 0);
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    // strongTimes. 
    Send PSend19250 = new_Send((Optr)PSend19251, SMB_strongTimes, 0);
    Symbol SMB_omit = new_Symbol(L"omit");
    // omit. 
    Send PSend19249 = new_Send((Optr)PSend19250, SMB_omit, 0);
    Assign PAssign19248 = new_Assign((Optr)slot_PEG_Parser_Class_class_separator, (Optr)PSend19249);
    Array PThreadedCode19247 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign19248, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend19251, (Optr)&t_send0, (Optr)PSend19250, (Optr)&t_send0, (Optr)PSend19249, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock19246 = new_Block_with(empty_Array, empty_Array, PThreadedCode19247, 1, PAssign19248);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend19252 = new_Send((Optr)slot_PEG_Parser_Class_class_separator, SMB_ifNil_, 1, (Optr)PBlock19246);
    Array PThreadedCode19245 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_PEG_Parser_Class_class_separator, (Optr)&t_push_closure, (Optr)PBlock19246, (Optr)&t_send1, (Optr)PSend19252, (Optr)&t_method_return);
    Method PMethod19244 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19245, 1, PSend19252);
    
    MethodClosure MC_SMB_basicSeparator = new_MethodClosure((Method)PMethod19244, HEADER(PEG_Parser_Class));
    store_method(HEADER(PEG_Parser_Class), SMB_basicSeparator, MC_SMB_basicSeparator);
}


static void init_class_SMB_named_parsing_semantics_() {
    Symbol SMB_named_parsing_semantics_ = new_Symbol(L"named:parsing:semantics:");
    Variable VAR_theName_0_0 = new_Variable_named(L"theName", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Variable VAR_semantics_0_2 = new_Variable_named(L"semantics", 0);
    Array PArray19254 = new_Array_with(3, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1, (Optr)VAR_semantics_0_2);
    Symbol SMB_named_parsing_ = new_Symbol(L"named:parsing:");
    // named:parsing:. 
    Send PSend19256 = new_Send((Optr)self, SMB_named_parsing_, 2, (Optr)VAR_theName_0_0, (Optr)VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend19257 = new_Send((Optr)PSend19256, SMB_semantics_, 1, (Optr)VAR_semantics_0_2);
    Array PThreadedCode19255 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_theName_0_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send2, (Optr)PSend19256, (Optr)&t_push_variable, (Optr)VAR_semantics_0_2, (Optr)&t_send1, (Optr)PSend19257, (Optr)&t_method_return);
    Method PMethod19253 = new_Method_with(PArray19254, empty_Array, empty_Array, PThreadedCode19255, 1, PSend19257);
    
    MethodClosure MC_SMB_named_parsing_semantics_ = new_MethodClosure((Method)PMethod19253, HEADER(PEG_Parser_Class));
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