#include <lib/class/Smalltalk/Parser/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParser_stream;
Optr layout_Smalltalk_Parser_SmalltalkParser;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    Super PSuper14084 = new_Super(SMB_initializeUnaryMessageExpression, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14086 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14088 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14089 = new_Send((Optr)PSend14088, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14087 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14088, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14089, (Optr)&t_method_return);
    Block PBlock14085 = new_Block_with(PArray14086, empty_Array, PThreadedCode14087, 1, PSend14089);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14090 = new_Send((Optr)PSuper14084, SMB_semantics_, 1, (Optr)PBlock14085);
    Array PThreadedCode14083 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14084, (Optr)&t_push_closure, (Optr)PBlock14085, (Optr)&t_send1, (Optr)PSend14090, (Optr)&t_method_return);
    Method PMethod14082 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14083, 1, PSend14090);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod14082, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    Super PSuper14093 = new_Super(SMB_initializeUnarySelector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14095 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14096 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_method_return);
    Block PBlock14094 = new_Block_with(PArray14095, empty_Array, PThreadedCode14096, 1, VAR_selector_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14097 = new_Send((Optr)PSuper14093, SMB_semantics_, 1, (Optr)PBlock14094);
    Array PThreadedCode14092 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14093, (Optr)&t_push_closure, (Optr)PBlock14094, (Optr)&t_send1, (Optr)PSend14097, (Optr)&t_method_return);
    Method PMethod14091 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14092, 1, PSend14097);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod14091, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    Super PSuper14100 = new_Super(SMB_initializeNumber, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14102 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14105 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14107 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)VAR_result_1_0);
    String string_14108 = new_String(L"10");
    Symbol SMB_base_ = new_Symbol(L"base:");
    Constant string_14108_Const = new_Constant((Optr)string_14108);
    // base:. 
    Send PSend14109 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)string_14108_Const);
    Array PThreadedCode14106 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14107, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_14108, (Optr)&t_send1, (Optr)PSend14109, (Optr)&t_method_return);
    Block PBlock14104 = new_Block_with(PArray14105, empty_Array, PThreadedCode14106, 2, PSend14107, PSend14109);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14110 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14111 = new_Send((Optr)PBlock14104, SMB_value_, 1, (Optr)PSend14110);
    Array PThreadedCode14103 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14104, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14110, (Optr)&t_send1, (Optr)PSend14111, (Optr)&t_method_return);
    Block PBlock14101 = new_Block_with(PArray14102, empty_Array, PThreadedCode14103, 1, PSend14111);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14112 = new_Send((Optr)PSuper14100, SMB_semantics_, 1, (Optr)PBlock14101);
    Array PThreadedCode14099 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14100, (Optr)&t_push_closure, (Optr)PBlock14101, (Optr)&t_send1, (Optr)PSend14112, (Optr)&t_method_return);
    Method PMethod14098 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14099, 1, PSend14112);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod14098, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    Super PSuper14115 = new_Super(SMB_initializeIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14117 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14119 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14118 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14119, (Optr)&t_method_return);
    Block PBlock14116 = new_Block_with(PArray14117, empty_Array, PThreadedCode14118, 1, PSend14119);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14120 = new_Send((Optr)PSuper14115, SMB_semantics_, 1, (Optr)PBlock14116);
    Array PThreadedCode14114 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14115, (Optr)&t_push_closure, (Optr)PBlock14116, (Optr)&t_send1, (Optr)PSend14120, (Optr)&t_method_return);
    Method PMethod14113 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14114, 1, PSend14120);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod14113, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    Super PSuper14123 = new_Super(SMB_initializeRadix, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14125 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14128 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14130 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend14131 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)PSend14130);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14132 = new_Send((Optr)VAR_result_1_0, SMB_second, 0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14133 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)PSend14132);
    Array PThreadedCode14129 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14130, (Optr)&t_send1, (Optr)PSend14131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14132, (Optr)&t_send1, (Optr)PSend14133, (Optr)&t_method_return);
    Block PBlock14127 = new_Block_with(PArray14128, empty_Array, PThreadedCode14129, 2, PSend14131, PSend14133);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14134 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14135 = new_Send((Optr)PBlock14127, SMB_value_, 1, (Optr)PSend14134);
    Array PThreadedCode14126 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14127, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14134, (Optr)&t_send1, (Optr)PSend14135, (Optr)&t_method_return);
    Block PBlock14124 = new_Block_with(PArray14125, empty_Array, PThreadedCode14126, 1, PSend14135);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14136 = new_Send((Optr)PSuper14123, SMB_semantics_, 1, (Optr)PBlock14124);
    Array PThreadedCode14122 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14123, (Optr)&t_push_closure, (Optr)PBlock14124, (Optr)&t_send1, (Optr)PSend14136, (Optr)&t_method_return);
    Method PMethod14121 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14122, 1, PSend14136);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14121, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    Super PSuper14139 = new_Super(SMB_initializeUnaryObjectDescription, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14141 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14142 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14145 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14144 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14145);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14146 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14148 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14153 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14155 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14156 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14157 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14156);
    Array PThreadedCode14154 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14155, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14156, (Optr)&t_send1, (Optr)PSend14157, (Optr)&t_method_return);
    Block PBlock14152 = new_Block_with(PArray14153, empty_Array, PThreadedCode14154, 2, PSend14155, PSend14157);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14158 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14151 = new_Send((Optr)PBlock14152, SMB_value_, 1, (Optr)PSend14158);
    Assign PAssign14150 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14151);
    Array PThreadedCode14149 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14150, (Optr)&t_push_closure, (Optr)PBlock14152, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14158, (Optr)&t_send1, (Optr)PSend14151, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14147 = new_Block_with(PArray14148, empty_Array, PThreadedCode14149, 1, PAssign14150);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14159 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14146, (Optr)PBlock14147);
    Array PThreadedCode14143 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14144, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14145, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14146, (Optr)&t_push_closure, (Optr)PBlock14147, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14159, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14140 = new_Block_with(PArray14141, PArray14142, PThreadedCode14143, 3, PAssign14144, PSend14159, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14160 = new_Send((Optr)PSuper14139, SMB_semantics_, 1, (Optr)PBlock14140);
    Array PThreadedCode14138 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14139, (Optr)&t_push_closure, (Optr)PBlock14140, (Optr)&t_send1, (Optr)PSend14160, (Optr)&t_method_return);
    Method PMethod14137 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14138, 1, PSend14160);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14137, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    Super PSuper14163 = new_Super(SMB_initializeVariableName, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14165 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14167 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14166 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14167, (Optr)&t_method_return);
    Block PBlock14164 = new_Block_with(PArray14165, empty_Array, PThreadedCode14166, 1, PSend14167);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14168 = new_Send((Optr)PSuper14163, SMB_semantics_, 1, (Optr)PBlock14164);
    Array PThreadedCode14162 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14163, (Optr)&t_push_closure, (Optr)PBlock14164, (Optr)&t_send1, (Optr)PSend14168, (Optr)&t_method_return);
    Method PMethod14161 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14162, 1, PSend14168);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod14161, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    Super PSuper14171 = new_Super(SMB_initializeSymbolInArray, 0);
    Variable VAR_symbol_1_0 = new_Variable_named(L"symbol", 1);
    Array PArray14173 = new_Array_with(1, (Optr)VAR_symbol_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14175 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_symbol_1_0);
    Array PThreadedCode14174 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_symbol_1_0, (Optr)&t_send1, (Optr)PSend14175, (Optr)&t_method_return);
    Block PBlock14172 = new_Block_with(PArray14173, empty_Array, PThreadedCode14174, 1, PSend14175);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14176 = new_Send((Optr)PSuper14171, SMB_semantics_, 1, (Optr)PBlock14172);
    Array PThreadedCode14170 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14171, (Optr)&t_push_closure, (Optr)PBlock14172, (Optr)&t_send1, (Optr)PSend14176, (Optr)&t_method_return);
    Method PMethod14169 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14170, 1, PSend14176);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14169, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    Super PSuper14179 = new_Super(SMB_initializeStatements, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14181 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend14183 = new_Send((Optr)VAR_result_1_0, SMB_removeLast, 0);
    Variable VAR_exp_2_0 = new_Variable_named(L"exp", 2);
    Array PArray14185 = new_Array_with(1, (Optr)VAR_exp_2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14187 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)VAR_exp_2_0);
    Array PThreadedCode14186 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_variable, (Optr)VAR_exp_2_0, (Optr)&t_send1, (Optr)PSend14187, (Optr)&t_method_return);
    Block PBlock14184 = new_Block_with(PArray14185, empty_Array, PThreadedCode14186, 1, PSend14187);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14188 = new_Send((Optr)PSend14183, SMB_ifMatched_, 1, (Optr)PBlock14184);
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend14189 = new_Send((Optr)VAR_result_1_0, SMB_asOrderedCollection, 0);
    Array PThreadedCode14182 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14183, (Optr)&t_push_closure, (Optr)PBlock14184, (Optr)&t_send1, (Optr)PSend14188, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14189, (Optr)&t_method_return);
    Block PBlock14180 = new_Block_with(PArray14181, empty_Array, PThreadedCode14182, 2, PSend14188, PSend14189);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14190 = new_Send((Optr)PSuper14179, SMB_semantics_, 1, (Optr)PBlock14180);
    Array PThreadedCode14178 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14179, (Optr)&t_push_closure, (Optr)PBlock14180, (Optr)&t_send1, (Optr)PSend14190, (Optr)&t_method_return);
    Method PMethod14177 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14178, 1, PSend14190);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14177, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    Super PSuper14193 = new_Super(SMB_initializeCapitalIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14195 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14197 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14196 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14197, (Optr)&t_method_return);
    Block PBlock14194 = new_Block_with(PArray14195, empty_Array, PThreadedCode14196, 1, PSend14197);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14198 = new_Send((Optr)PSuper14193, SMB_semantics_, 1, (Optr)PBlock14194);
    Array PThreadedCode14192 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14193, (Optr)&t_push_closure, (Optr)PBlock14194, (Optr)&t_send1, (Optr)PSend14198, (Optr)&t_method_return);
    Method PMethod14191 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14192, 1, PSend14198);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod14191, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    Super PSuper14201 = new_Super(SMB_initializeSymbolConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14203 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14205 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14204 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14205, (Optr)&t_method_return);
    Block PBlock14202 = new_Block_with(PArray14203, empty_Array, PThreadedCode14204, 1, PSend14205);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14206 = new_Send((Optr)PSuper14201, SMB_semantics_, 1, (Optr)PBlock14202);
    Array PThreadedCode14200 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14201, (Optr)&t_push_closure, (Optr)PBlock14202, (Optr)&t_send1, (Optr)PSend14206, (Optr)&t_method_return);
    Method PMethod14199 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14200, 1, PSend14206);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14199, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Super PSuper14209 = new_Super(SMB_initializeArray, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14211 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14213 = new_Send((Optr)ASTArray_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14214 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    // literals:. 
    Send PSend14215 = new_Send((Optr)PSend14213, SMB_literals_, 1, (Optr)PSend14214);
    Array PThreadedCode14212 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)ASTArray_classReference, (Optr)&t_send0, (Optr)PSend14213, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14214, (Optr)&t_send1, (Optr)PSend14215, (Optr)&t_method_return);
    Block PBlock14210 = new_Block_with(PArray14211, empty_Array, PThreadedCode14212, 1, PSend14215);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14216 = new_Send((Optr)PSuper14209, SMB_semantics_, 1, (Optr)PBlock14210);
    Array PThreadedCode14208 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14209, (Optr)&t_push_closure, (Optr)PBlock14210, (Optr)&t_send1, (Optr)PSend14216, (Optr)&t_method_return);
    Method PMethod14207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14208, 1, PSend14216);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14207, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    Super PSuper14219 = new_Super(SMB_initializeBinarySelector, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14221 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14223 = new_Send((Optr)VAR_result_1_0, SMB_asSymbol, 0);
    Array PThreadedCode14222 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14223, (Optr)&t_method_return);
    Block PBlock14220 = new_Block_with(PArray14221, empty_Array, PThreadedCode14222, 1, PSend14223);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14224 = new_Send((Optr)PSuper14219, SMB_semantics_, 1, (Optr)PBlock14220);
    Array PThreadedCode14218 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14219, (Optr)&t_push_closure, (Optr)PBlock14220, (Optr)&t_send1, (Optr)PSend14224, (Optr)&t_method_return);
    Method PMethod14217 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14218, 1, PSend14224);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod14217, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_createReference_() {
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    Variable VAR_path_0_0 = new_Variable_named(L"path", 0);
    Array PArray14226 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14227 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14230 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14232 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14233 = new_Send((Optr)PSend14232, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14238 = new_Send((Optr)VAR_path_0_0, SMB_first, 0);
    Assign PAssign14237 = new_Assign((Optr)VAR_name_0_1, (Optr)PSend14238);
    Symbol  SMB_self = new_Symbol(L"self");
    Constant SMB_self_Const = new_Constant((Optr)SMB_self);
    // =. 
    Send PSend14239 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_self_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14243 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14244 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14243);
    Array PThreadedCode14242 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend14243, (Optr)&t_send1, (Optr)PSend14244, (Optr)&t_block_return);
    Block PBlock14241 = new_Block_with(empty_Array, empty_Array, PThreadedCode14242, 1, PSend14244);
    // ifTrue:. 
    Send PSend14240 = new_Send((Optr)PSend14239, SMB_ifTrue_, 1, (Optr)PBlock14241);
    Symbol  SMB_super = new_Symbol(L"super");
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    // =. 
    Send PSend14245 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_super_Const);
    // new. 
    Send PSend14249 = new_Send((Optr)ASTSuper_classReference, SMB_new, 0);
    // escape:. 
    Send PSend14250 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14249);
    Array PThreadedCode14248 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send0, (Optr)PSend14249, (Optr)&t_send1, (Optr)PSend14250, (Optr)&t_block_return);
    Block PBlock14247 = new_Block_with(empty_Array, empty_Array, PThreadedCode14248, 1, PSend14250);
    // ifTrue:. 
    Send PSend14246 = new_Send((Optr)PSend14245, SMB_ifTrue_, 1, (Optr)PBlock14247);
    // new. 
    Send PSend14251 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14252 = new_Send((Optr)PSend14251, SMB_name_, 1, (Optr)VAR_name_0_1);
    // escape:. 
    Send PSend14253 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14252);
    Array PThreadedCode14236 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push1, (Optr)PAssign14237, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14238, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_self, (Optr)&t_send1, (Optr)PSend14239, (Optr)&t_send_ifTrue_, (Optr)PSend14240, (Optr)PBlock14241, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_send1, (Optr)PSend14245, (Optr)&t_send_ifTrue_, (Optr)PSend14246, (Optr)PBlock14247, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14251, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_send1, (Optr)PSend14252, (Optr)&t_send1, (Optr)PSend14253, (Optr)&t_block_return);
    Block PBlock14235 = new_Block_with(empty_Array, empty_Array, PThreadedCode14236, 4, PAssign14237, PSend14240, PSend14246, PSend14253);
    // ifTrue:. 
    Send PSend14234 = new_Send((Optr)PSend14233, SMB_ifTrue_, 1, (Optr)PBlock14235);
    // new. 
    Send PSend14254 = new_Send((Optr)ASTPath_classReference, SMB_new, 0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend14255 = new_Send((Optr)PSend14254, SMB_path_, 1, (Optr)VAR_path_0_0);
    Array PThreadedCode14231 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14232, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14233, (Optr)&t_send_ifTrue_, (Optr)PSend14234, (Optr)PBlock14235, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)ASTPath_classReference, (Optr)&t_send0, (Optr)PSend14254, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send1, (Optr)PSend14255, (Optr)&t_method_return);
    Block PBlock14229 = new_Block_with(PArray14230, empty_Array, PThreadedCode14231, 2, PSend14234, PSend14255);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14256 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14229);
    Array PThreadedCode14228 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14229, (Optr)&t_send1, (Optr)PSend14256, (Optr)&t_method_return);
    Method PMethod14225 = new_Method_with(PArray14226, PArray14227, empty_Array, PThreadedCode14228, 1, PSend14256);
    
    MethodClosure MC_SMB_createReference_ = new_MethodClosure((Method)PMethod14225, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createReference_, MC_SMB_createReference_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14259 = new_Super(SMB_initialize, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend14262 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14261 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14262);
    Assign PAssign14260 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14261);
    Array PThreadedCode14258 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14259, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14260, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14262, (Optr)&t_send1, (Optr)PSend14261, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14257 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14258, 3, PSuper14259, PAssign14260, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14257, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    Super PSuper14265 = new_Super(SMB_initializeStringConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14267 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14269 = new_Send((Optr)ASTString_classReference, SMB_new, 0);
    Symbol SMB_string_ = new_Symbol(L"string:");
    // string:. 
    Send PSend14270 = new_Send((Optr)PSend14269, SMB_string_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14268 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTString_classReference, (Optr)&t_send0, (Optr)PSend14269, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14270, (Optr)&t_method_return);
    Block PBlock14266 = new_Block_with(PArray14267, empty_Array, PThreadedCode14268, 1, PSend14270);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14271 = new_Send((Optr)PSuper14265, SMB_semantics_, 1, (Optr)PBlock14266);
    Array PThreadedCode14264 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14265, (Optr)&t_push_closure, (Optr)PBlock14266, (Optr)&t_send1, (Optr)PSend14271, (Optr)&t_method_return);
    Method PMethod14263 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14264, 1, PSend14271);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod14263, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    Super PSuper14274 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14276 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14278 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14279 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14280 = new_Send((Optr)PSend14278, SMB_receiver_, 1, (Optr)PSend14279);
    Array PThreadedCode14277 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14278, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14279, (Optr)&t_send1, (Optr)PSend14280, (Optr)&t_method_return);
    Block PBlock14275 = new_Block_with(PArray14276, empty_Array, PThreadedCode14277, 1, PSend14280);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14281 = new_Send((Optr)PSuper14274, SMB_semantics_, 1, (Optr)PBlock14275);
    Array PThreadedCode14273 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14274, (Optr)&t_push_closure, (Optr)PBlock14275, (Optr)&t_send1, (Optr)PSend14281, (Optr)&t_method_return);
    Method PMethod14272 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14273, 1, PSend14281);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod14272, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    Variable VAR_optionalAssignment_0_0 = new_Variable_named(L"optionalAssignment", 0);
    Variable VAR_isAssignment_0_1 = new_Variable_named(L"isAssignment", 0);
    Variable VAR_keywords_0_2 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_3 = new_Variable_named(L"arguments", 0);
    Array PArray14283 = new_Array_with(4, (Optr)VAR_optionalAssignment_0_0, (Optr)VAR_isAssignment_0_1, (Optr)VAR_keywords_0_2, (Optr)VAR_arguments_0_3);
    Super PSuper14285 = new_Super(SMB_initializeBracketIndexExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14287 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14290 = new_Send((Optr)VAR_parts_1_0, SMB_second, 0);
    Assign PAssign14289 = new_Assign((Optr)VAR_optionalAssignment_0_0, (Optr)PSend14290);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend14293 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend14292 = new_Send((Optr)PSend14293, SMB__pequals_, 1, (Optr)PEGSucceededOptionalResult_classReference);
    Assign PAssign14291 = new_Assign((Optr)VAR_isAssignment_0_1, (Optr)PSend14292);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol  SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_at__Const = new_Constant((Optr)SMB_at_);
    // with:. 
    Send PSend14298 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14297 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14298, (Optr)&t_block_return);
    Block PBlock14296 = new_Block_with(empty_Array, empty_Array, PThreadedCode14297, 1, PSend14298);
    Symbol  SMB_put_ = new_Symbol(L"put:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_put__Const = new_Constant((Optr)SMB_put_);
    // with:with:. 
    Send PSend14301 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_at__Const, (Optr)SMB_put__Const);
    Array PThreadedCode14300 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_push1, (Optr)SMB_put_, (Optr)&t_send2, (Optr)PSend14301, (Optr)&t_block_return);
    Block PBlock14299 = new_Block_with(empty_Array, empty_Array, PThreadedCode14300, 1, PSend14301);
    // ifFalse:ifTrue:. 
    Send PSend14295 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14296, (Optr)PBlock14299);
    Assign PAssign14294 = new_Assign((Optr)VAR_keywords_0_2, (Optr)PSend14295);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14306 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    // with:. 
    Send PSend14307 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend14306);
    Array PThreadedCode14305 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14306, (Optr)&t_send1, (Optr)PSend14307, (Optr)&t_block_return);
    Block PBlock14304 = new_Block_with(empty_Array, empty_Array, PThreadedCode14305, 1, PSend14307);
    // first. 
    Send PSend14310 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_result = new_Symbol(L"result");
    // result. 
    Send PSend14311 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_result, 0);
    // with:with:. 
    Send PSend14312 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend14310, (Optr)PSend14311);
    Array PThreadedCode14309 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14310, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14311, (Optr)&t_send2, (Optr)PSend14312, (Optr)&t_block_return);
    Block PBlock14308 = new_Block_with(empty_Array, empty_Array, PThreadedCode14309, 1, PSend14312);
    // ifFalse:ifTrue:. 
    Send PSend14303 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14304, (Optr)PBlock14308);
    Assign PAssign14302 = new_Assign((Optr)VAR_arguments_0_3, (Optr)PSend14303);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14314 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14316 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_2);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14317 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_3);
    Array PThreadedCode14315 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_2, (Optr)&t_send1, (Optr)PSend14316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_3, (Optr)&t_send1, (Optr)PSend14317, (Optr)&t_method_return);
    Block PBlock14313 = new_Block_with(PArray14314, empty_Array, PThreadedCode14315, 2, PSend14316, PSend14317);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14318 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14319 = new_Send((Optr)PBlock14313, SMB_value_, 1, (Optr)PSend14318);
    Array PThreadedCode14288 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14289, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14290, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14291, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14293, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14292, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14294, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14295, (Optr)PBlock14296, (Optr)PBlock14299, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14302, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14303, (Optr)PBlock14304, (Optr)PBlock14308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14313, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14318, (Optr)&t_send1, (Optr)PSend14319, (Optr)&t_method_return);
    Block PBlock14286 = new_Block_with(PArray14287, empty_Array, PThreadedCode14288, 5, PAssign14289, PAssign14291, PAssign14294, PAssign14302, PSend14319);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14320 = new_Send((Optr)PSuper14285, SMB_semantics_, 1, (Optr)PBlock14286);
    Array PThreadedCode14284 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14285, (Optr)&t_push_closure, (Optr)PBlock14286, (Optr)&t_send1, (Optr)PSend14320, (Optr)&t_method_return);
    Method PMethod14282 = new_Method_with(empty_Array, PArray14283, empty_Array, PThreadedCode14284, 1, PSend14320);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod14282, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Super PSuper14323 = new_Super(SMB_initializeBinaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14325 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14326 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14329 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14328 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14329);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14330 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14332 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14337 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14339 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14340 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14341 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14340);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend14342 = new_Send((Optr)VAR_i_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend14343 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14342);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14344 = new_Send((Optr)VAR__receiver__3_0, SMB_argument_, 1, (Optr)PSend14343);
    Array PThreadedCode14338 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14339, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14340, (Optr)&t_send1, (Optr)PSend14341, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14342, (Optr)&t_send1, (Optr)PSend14343, (Optr)&t_send1, (Optr)PSend14344, (Optr)&t_method_return);
    Block PBlock14336 = new_Block_with(PArray14337, empty_Array, PThreadedCode14338, 3, PSend14339, PSend14341, PSend14344);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14345 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14335 = new_Send((Optr)PBlock14336, SMB_value_, 1, (Optr)PSend14345);
    Assign PAssign14334 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14335);
    Array PThreadedCode14333 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14334, (Optr)&t_push_closure, (Optr)PBlock14336, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14345, (Optr)&t_send1, (Optr)PSend14335, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14331 = new_Block_with(PArray14332, empty_Array, PThreadedCode14333, 1, PAssign14334);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend14346 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14330, (Optr)int_2_Const, (Optr)PBlock14331);
    Array PThreadedCode14327 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14328, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14329, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14330, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14331, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14346, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14324 = new_Block_with(PArray14325, PArray14326, PThreadedCode14327, 3, PAssign14328, PSend14346, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14347 = new_Send((Optr)PSuper14323, SMB_semantics_, 1, (Optr)PBlock14324);
    Array PThreadedCode14322 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14323, (Optr)&t_push_closure, (Optr)PBlock14324, (Optr)&t_send1, (Optr)PSend14347, (Optr)&t_method_return);
    Method PMethod14321 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14322, 1, PSend14347);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14321, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    Super PSuper14350 = new_Super(SMB_initializeScopedExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14352 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_scoped = new_Symbol(L"scoped");
    // scoped. 
    Send PSend14354 = new_Send((Optr)VAR_result_1_0, SMB_scoped, 0);
    Array PThreadedCode14353 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14354, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_method_return);
    Block PBlock14351 = new_Block_with(PArray14352, empty_Array, PThreadedCode14353, 2, PSend14354, VAR_result_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14355 = new_Send((Optr)PSuper14350, SMB_semantics_, 1, (Optr)PBlock14351);
    Array PThreadedCode14349 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14350, (Optr)&t_push_closure, (Optr)PBlock14351, (Optr)&t_send1, (Optr)PSend14355, (Optr)&t_method_return);
    Method PMethod14348 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14349, 1, PSend14355);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod14348, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    Super PSuper14358 = new_Super(SMB_initializeCharacterConstant, 0);
    Variable VAR_char_1_0 = new_Variable_named(L"char", 1);
    Array PArray14360 = new_Array_with(1, (Optr)VAR_char_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14362 = new_Send((Optr)ASTCharacter_classReference, SMB_new, 0);
    Symbol SMB_char_ = new_Symbol(L"char:");
    // char:. 
    Send PSend14363 = new_Send((Optr)PSend14362, SMB_char_, 1, (Optr)VAR_char_1_0);
    Array PThreadedCode14361 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTCharacter_classReference, (Optr)&t_send0, (Optr)PSend14362, (Optr)&t_push_variable, (Optr)VAR_char_1_0, (Optr)&t_send1, (Optr)PSend14363, (Optr)&t_method_return);
    Block PBlock14359 = new_Block_with(PArray14360, empty_Array, PThreadedCode14361, 1, PSend14363);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14364 = new_Send((Optr)PSuper14358, SMB_semantics_, 1, (Optr)PBlock14359);
    Array PThreadedCode14357 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14358, (Optr)&t_push_closure, (Optr)PBlock14359, (Optr)&t_send1, (Optr)PSend14364, (Optr)&t_method_return);
    Method PMethod14356 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14357, 1, PSend14364);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod14356, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    Super PSuper14367 = new_Super(SMB_initializeNumberFormat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14369 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14371 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14370 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14371, (Optr)&t_method_return);
    Block PBlock14368 = new_Block_with(PArray14369, empty_Array, PThreadedCode14370, 1, PSend14371);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14372 = new_Send((Optr)PSuper14367, SMB_semantics_, 1, (Optr)PBlock14368);
    Array PThreadedCode14366 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14367, (Optr)&t_push_closure, (Optr)PBlock14368, (Optr)&t_send1, (Optr)PSend14372, (Optr)&t_method_return);
    Method PMethod14365 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14366, 1, PSend14372);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod14365, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    Super PSuper14375 = new_Super(SMB_initializeMethod, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14377 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14380 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14382 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend14383 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)PSend14382);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14384 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend14385 = new_Send((Optr)VAR__receiver__2_0, SMB_annotations_, 1, (Optr)PSend14384);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14386 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14389 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14388 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14389, (Optr)&t_block_return);
    Block PBlock14387 = new_Block_with(empty_Array, empty_Array, PThreadedCode14388, 1, PSend14389);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14390 = new_Send((Optr)PSend14386, SMB_resultIfFailed_, 1, (Optr)PBlock14387);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14391 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14390);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend14392 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14393 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14392);
    Array PThreadedCode14381 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14382, (Optr)&t_send1, (Optr)PSend14383, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14384, (Optr)&t_send1, (Optr)PSend14385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14386, (Optr)&t_push_closure, (Optr)PBlock14387, (Optr)&t_send1, (Optr)PSend14390, (Optr)&t_send1, (Optr)PSend14391, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend14392, (Optr)&t_send1, (Optr)PSend14393, (Optr)&t_method_return);
    Block PBlock14379 = new_Block_with(PArray14380, empty_Array, PThreadedCode14381, 4, PSend14383, PSend14385, PSend14391, PSend14393);
    // new. 
    Send PSend14394 = new_Send((Optr)ASTMethod_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14395 = new_Send((Optr)PBlock14379, SMB_value_, 1, (Optr)PSend14394);
    Array PThreadedCode14378 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14379, (Optr)&t_push_class_reference, (Optr)ASTMethod_classReference, (Optr)&t_send0, (Optr)PSend14394, (Optr)&t_send1, (Optr)PSend14395, (Optr)&t_method_return);
    Block PBlock14376 = new_Block_with(PArray14377, empty_Array, PThreadedCode14378, 1, PSend14395);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14396 = new_Send((Optr)PSuper14375, SMB_semantics_, 1, (Optr)PBlock14376);
    Array PThreadedCode14374 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14375, (Optr)&t_push_closure, (Optr)PBlock14376, (Optr)&t_send1, (Optr)PSend14396, (Optr)&t_method_return);
    Method PMethod14373 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14374, 1, PSend14396);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod14373, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    Super PSuper14399 = new_Super(SMB_initializeUnaryMessageDefinition, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14401 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14403 = new_Send((Optr)ASTUnaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14404 = new_Send((Optr)PSend14403, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14402 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14403, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14404, (Optr)&t_method_return);
    Block PBlock14400 = new_Block_with(PArray14401, empty_Array, PThreadedCode14402, 1, PSend14404);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14405 = new_Send((Optr)PSuper14399, SMB_semantics_, 1, (Optr)PBlock14400);
    Array PThreadedCode14398 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14399, (Optr)&t_push_closure, (Optr)PBlock14400, (Optr)&t_send1, (Optr)PSend14405, (Optr)&t_method_return);
    Method PMethod14397 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14398, 1, PSend14405);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod14397, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14407 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14409 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14411 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14415 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14414 = new_Send((Optr)PSend14415, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14413 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14414);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14417 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14416 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14417);
    // new:. 
    Send PSend14419 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14418 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14419);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14421 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14423 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14424 = new_Send((Optr)PSend14423, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14425 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14424);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14426 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14425);
    // *. 
    Send PSend14427 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14428 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14427);
    // at:put:. 
    Send PSend14429 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14428);
    Array PThreadedCode14422 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14423, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14424, (Optr)&t_send1, (Optr)PSend14425, (Optr)&t_send2, (Optr)PSend14426, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14427, (Optr)&t_send1, (Optr)PSend14428, (Optr)&t_send2, (Optr)PSend14429, (Optr)&t_method_return);
    Block PBlock14420 = new_Block_with(PArray14421, empty_Array, PThreadedCode14422, 2, PSend14426, PSend14429);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14430 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14420);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14432 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14434 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14435 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14433 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14434, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14435, (Optr)&t_method_return);
    Block PBlock14431 = new_Block_with(PArray14432, empty_Array, PThreadedCode14433, 2, PSend14434, PSend14435);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14436 = new_Send((Optr)ASTKeywordAnnotation_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14437 = new_Send((Optr)PBlock14431, SMB_value_, 1, (Optr)PSend14436);
    Array PThreadedCode14412 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14413, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14415, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14414, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14416, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14417, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14418, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14419, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14420, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14430, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14431, (Optr)&t_push_class_reference, (Optr)ASTKeywordAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14436, (Optr)&t_send1, (Optr)PSend14437, (Optr)&t_method_return);
    Block PBlock14410 = new_Block_with(PArray14411, empty_Array, PThreadedCode14412, 5, PAssign14413, PAssign14416, PAssign14418, PSend14430, PSend14437);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14438 = new_Send((Optr)PSuper14409, SMB_semantics_, 1, (Optr)PBlock14410);
    Array PThreadedCode14408 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14409, (Optr)&t_push_closure, (Optr)PBlock14410, (Optr)&t_send1, (Optr)PSend14438, (Optr)&t_method_return);
    Method PMethod14406 = new_Method_with(empty_Array, PArray14407, empty_Array, PThreadedCode14408, 1, PSend14438);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14406, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    Super PSuper14441 = new_Super(SMB_initializeKeyword, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14443 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14445 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14444 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14445, (Optr)&t_method_return);
    Block PBlock14442 = new_Block_with(PArray14443, empty_Array, PThreadedCode14444, 1, PSend14445);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14446 = new_Send((Optr)PSuper14441, SMB_semantics_, 1, (Optr)PBlock14442);
    Array PThreadedCode14440 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14441, (Optr)&t_push_closure, (Optr)PBlock14442, (Optr)&t_send1, (Optr)PSend14446, (Optr)&t_method_return);
    Method PMethod14439 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14440, 1, PSend14446);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod14439, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Variable VAR_vars_0_0 = new_Variable_named(L"vars", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray14448 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14450 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14452 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14455 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14454 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14455);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14457 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign14456 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14457);
    Variable VAR_variables_2_0 = new_Variable_named(L"variables", 2);
    Array PArray14459 = new_Array_with(1, (Optr)VAR_variables_2_0);
    Variable VAR_variable_3_0 = new_Variable_named(L"variable", 3);
    Array PArray14462 = new_Array_with(1, (Optr)VAR_variable_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray14467 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14469 = new_Send((Optr)VAR__receiver__4_0, SMB_expression_, 1, (Optr)VAR_expression_0_1);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend14470 = new_Send((Optr)VAR__receiver__4_0, SMB_variable_, 1, (Optr)VAR_variable_3_0);
    Array PThreadedCode14468 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend14469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_variable_3_0, (Optr)&t_send1, (Optr)PSend14470, (Optr)&t_method_return);
    Block PBlock14466 = new_Block_with(PArray14467, empty_Array, PThreadedCode14468, 2, PSend14469, PSend14470);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14471 = new_Send((Optr)ASTAssignmentExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14465 = new_Send((Optr)PBlock14466, SMB_value_, 1, (Optr)PSend14471);
    Assign PAssign14464 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14465);
    Array PThreadedCode14463 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14464, (Optr)&t_push_closure, (Optr)PBlock14466, (Optr)&t_push_class_reference, (Optr)ASTAssignmentExpression_classReference, (Optr)&t_send0, (Optr)PSend14471, (Optr)&t_send1, (Optr)PSend14465, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14461 = new_Block_with(PArray14462, empty_Array, PThreadedCode14463, 1, PAssign14464);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend14472 = new_Send((Optr)VAR_variables_2_0, SMB_reverseDo_, 1, (Optr)PBlock14461);
    Array PThreadedCode14460 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_variables_2_0, (Optr)&t_push_closure, (Optr)PBlock14461, (Optr)&t_send1, (Optr)PSend14472, (Optr)&t_method_return);
    Block PBlock14458 = new_Block_with(PArray14459, empty_Array, PThreadedCode14460, 1, PSend14472);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14473 = new_Send((Optr)VAR_vars_0_0, SMB_ifMatched_, 1, (Optr)PBlock14458);
    Array PThreadedCode14453 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign14454, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14455, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14456, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14457, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_vars_0_0, (Optr)&t_push_closure, (Optr)PBlock14458, (Optr)&t_send1, (Optr)PSend14473, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_method_return);
    Block PBlock14451 = new_Block_with(PArray14452, empty_Array, PThreadedCode14453, 4, PAssign14454, PAssign14456, PSend14473, VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14474 = new_Send((Optr)PSuper14450, SMB_semantics_, 1, (Optr)PBlock14451);
    Array PThreadedCode14449 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14450, (Optr)&t_push_closure, (Optr)PBlock14451, (Optr)&t_send1, (Optr)PSend14474, (Optr)&t_method_return);
    Method PMethod14447 = new_Method_with(empty_Array, PArray14448, empty_Array, PThreadedCode14449, 1, PSend14474);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14447, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    Super PSuper14477 = new_Super(SMB_initializeFloat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14479 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14482 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14484 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_high_ = new_Symbol(L"high:");
    // high:. 
    Send PSend14485 = new_Send((Optr)VAR__receiver__2_0, SMB_high_, 1, (Optr)PSend14484);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14486 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Symbol SMB_low_ = new_Symbol(L"low:");
    // low:. 
    Send PSend14487 = new_Send((Optr)VAR__receiver__2_0, SMB_low_, 1, (Optr)PSend14486);
    Array PThreadedCode14483 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14484, (Optr)&t_send1, (Optr)PSend14485, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14486, (Optr)&t_send1, (Optr)PSend14487, (Optr)&t_method_return);
    Block PBlock14481 = new_Block_with(PArray14482, empty_Array, PThreadedCode14483, 2, PSend14485, PSend14487);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14488 = new_Send((Optr)ASTFloat_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14489 = new_Send((Optr)PBlock14481, SMB_value_, 1, (Optr)PSend14488);
    Array PThreadedCode14480 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14481, (Optr)&t_push_class_reference, (Optr)ASTFloat_classReference, (Optr)&t_send0, (Optr)PSend14488, (Optr)&t_send1, (Optr)PSend14489, (Optr)&t_method_return);
    Block PBlock14478 = new_Block_with(PArray14479, empty_Array, PThreadedCode14480, 1, PSend14489);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14490 = new_Send((Optr)PSuper14477, SMB_semantics_, 1, (Optr)PBlock14478);
    Array PThreadedCode14476 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14477, (Optr)&t_push_closure, (Optr)PBlock14478, (Optr)&t_send1, (Optr)PSend14490, (Optr)&t_method_return);
    Method PMethod14475 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14476, 1, PSend14490);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14475, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    Super PSuper14493 = new_Super(SMB_initializeBlockArguments, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14495 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR_variable_2_0 = new_Variable_named(L"variable", 2);
    Array PArray14498 = new_Array_with(1, (Optr)VAR_variable_2_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14500 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_variable_2_0);
    Array PThreadedCode14499 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_variable_2_0, (Optr)&t_send1, (Optr)PSend14500, (Optr)&t_method_return);
    Block PBlock14497 = new_Block_with(PArray14498, empty_Array, PThreadedCode14499, 1, PSend14500);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend14501 = new_Send((Optr)VAR_result_1_0, SMB_collect_, 1, (Optr)PBlock14497);
    Array PThreadedCode14496 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_closure, (Optr)PBlock14497, (Optr)&t_send1, (Optr)PSend14501, (Optr)&t_method_return);
    Block PBlock14494 = new_Block_with(PArray14495, empty_Array, PThreadedCode14496, 1, PSend14501);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14502 = new_Send((Optr)PSuper14493, SMB_semantics_, 1, (Optr)PBlock14494);
    Array PThreadedCode14492 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14493, (Optr)&t_push_closure, (Optr)PBlock14494, (Optr)&t_send1, (Optr)PSend14502, (Optr)&t_method_return);
    Method PMethod14491 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14492, 1, PSend14502);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14491, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    Super PSuper14505 = new_Super(SMB_initializeBraceExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14507 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14509 = new_Send((Optr)ASTBraceExpression_classReference, SMB_new, 0);
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    // expressions:. 
    Send PSend14510 = new_Send((Optr)PSend14509, SMB_expressions_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14508 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTBraceExpression_classReference, (Optr)&t_send0, (Optr)PSend14509, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14510, (Optr)&t_method_return);
    Block PBlock14506 = new_Block_with(PArray14507, empty_Array, PThreadedCode14508, 1, PSend14510);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14511 = new_Send((Optr)PSuper14505, SMB_semantics_, 1, (Optr)PBlock14506);
    Array PThreadedCode14504 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14505, (Optr)&t_push_closure, (Optr)PBlock14506, (Optr)&t_send1, (Optr)PSend14511, (Optr)&t_method_return);
    Method PMethod14503 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14504, 1, PSend14511);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14503, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    Super PSuper14514 = new_Super(SMB_initializeBinaryMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14516 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14519 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14521 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14522 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14521);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14523 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14524 = new_Send((Optr)VAR__receiver__2_0, SMB_argument_, 1, (Optr)PSend14523);
    Array PThreadedCode14520 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14521, (Optr)&t_send1, (Optr)PSend14522, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14523, (Optr)&t_send1, (Optr)PSend14524, (Optr)&t_method_return);
    Block PBlock14518 = new_Block_with(PArray14519, empty_Array, PThreadedCode14520, 2, PSend14522, PSend14524);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14525 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14526 = new_Send((Optr)PBlock14518, SMB_value_, 1, (Optr)PSend14525);
    Array PThreadedCode14517 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14518, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14525, (Optr)&t_send1, (Optr)PSend14526, (Optr)&t_method_return);
    Block PBlock14515 = new_Block_with(PArray14516, empty_Array, PThreadedCode14517, 1, PSend14526);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14527 = new_Send((Optr)PSuper14514, SMB_semantics_, 1, (Optr)PBlock14515);
    Array PThreadedCode14513 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14514, (Optr)&t_push_closure, (Optr)PBlock14515, (Optr)&t_send1, (Optr)PSend14527, (Optr)&t_method_return);
    Method PMethod14512 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14513, 1, PSend14527);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14512, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    Super PSuper14530 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14532 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14534 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend14535 = new_Send((Optr)PSend14534, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_14539 = new_String(L"");
    Array PThreadedCode14538 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_14539, (Optr)&t_block_return);
    Constant string_14539_Const = new_Constant((Optr)string_14539);
    Block PBlock14537 = new_Block_with(empty_Array, empty_Array, PThreadedCode14538, 1, string_14539_Const);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14542 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend14543 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_with_, 1, (Optr)PSend14542);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Variable VAR_i_2_1 = new_Variable_named(L"i", 2);
    Array PArray14545 = new_Array_with(2, (Optr)VAR_s_2_0, (Optr)VAR_i_2_1);
    String string_14547 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_14547_Const = new_Constant((Optr)string_14547);
    // <<. 
    Send PSend14548 = new_Send((Optr)VAR_s_2_0, SMB__shiftLeft_, 1, (Optr)string_14547_Const);
    // <<. 
    Send PSend14549 = new_Send((Optr)PSend14548, SMB__shiftLeft_, 1, (Optr)VAR_i_2_1);
    Array PThreadedCode14546 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)string_14547, (Optr)&t_send1, (Optr)PSend14548, (Optr)&t_push_variable, (Optr)VAR_i_2_1, (Optr)&t_send1, (Optr)PSend14549, (Optr)&t_method_return);
    Block PBlock14544 = new_Block_with(PArray14545, empty_Array, PThreadedCode14546, 1, PSend14549);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14550 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14543, (Optr)PBlock14544);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14551 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14541 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14542, (Optr)&t_send1, (Optr)PSend14543, (Optr)&t_push_closure, (Optr)PBlock14544, (Optr)&t_send2, (Optr)PSend14550, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14551, (Optr)&t_block_return);
    Block PBlock14540 = new_Block_with(empty_Array, empty_Array, PThreadedCode14541, 2, PSend14550, PSend14551);
    // ifTrue:ifFalse:. 
    Send PSend14536 = new_Send((Optr)PSend14535, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock14537, (Optr)PBlock14540);
    Array PThreadedCode14533 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14534, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend14535, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend14536, (Optr)PBlock14537, (Optr)PBlock14540, (Optr)&t_method_return);
    Block PBlock14531 = new_Block_with(PArray14532, empty_Array, PThreadedCode14533, 1, PSend14536);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14552 = new_Send((Optr)PSuper14530, SMB_semantics_, 1, (Optr)PBlock14531);
    Array PThreadedCode14529 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14530, (Optr)&t_push_closure, (Optr)PBlock14531, (Optr)&t_send1, (Optr)PSend14552, (Optr)&t_method_return);
    Method PMethod14528 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14529, 1, PSend14552);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14528, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_createVariable_() {
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
    Array PArray14554 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14556 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14557 = new_Send((Optr)PSend14556, SMB_name_, 1, (Optr)VAR_variable_0_0);
    Array PThreadedCode14555 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14556, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send1, (Optr)PSend14557, (Optr)&t_method_return);
    Method PMethod14553 = new_Method_with(PArray14554, empty_Array, empty_Array, PThreadedCode14555, 1, PSend14557);
    
    MethodClosure MC_SMB_createVariable_ = new_MethodClosure((Method)PMethod14553, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createVariable_, MC_SMB_createVariable_);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    Super PSuper14560 = new_Super(SMB_initializeUnaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14562 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14563 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14566 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14565 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14566);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14567 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14569 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14574 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14576 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14577 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14578 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14577);
    Array PThreadedCode14575 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14576, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14577, (Optr)&t_send1, (Optr)PSend14578, (Optr)&t_method_return);
    Block PBlock14573 = new_Block_with(PArray14574, empty_Array, PThreadedCode14575, 2, PSend14576, PSend14578);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14579 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14572 = new_Send((Optr)PBlock14573, SMB_value_, 1, (Optr)PSend14579);
    Assign PAssign14571 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14572);
    Array PThreadedCode14570 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14571, (Optr)&t_push_closure, (Optr)PBlock14573, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14579, (Optr)&t_send1, (Optr)PSend14572, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14568 = new_Block_with(PArray14569, empty_Array, PThreadedCode14570, 1, PAssign14571);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14580 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14567, (Optr)PBlock14568);
    Array PThreadedCode14564 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14565, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14566, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14567, (Optr)&t_push_closure, (Optr)PBlock14568, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14580, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14561 = new_Block_with(PArray14562, PArray14563, PThreadedCode14564, 3, PAssign14565, PSend14580, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14581 = new_Send((Optr)PSuper14560, SMB_semantics_, 1, (Optr)PBlock14561);
    Array PThreadedCode14559 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14560, (Optr)&t_push_closure, (Optr)PBlock14561, (Optr)&t_send1, (Optr)PSend14581, (Optr)&t_method_return);
    Method PMethod14558 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14559, 1, PSend14581);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14558, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    Super PSuper14584 = new_Super(SMB_initializeAnnotations, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14586 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14588 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14587 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14588, (Optr)&t_method_return);
    Block PBlock14585 = new_Block_with(PArray14586, empty_Array, PThreadedCode14587, 1, PSend14588);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14589 = new_Send((Optr)PSuper14584, SMB_semantics_, 1, (Optr)PBlock14585);
    Array PThreadedCode14583 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14584, (Optr)&t_push_closure, (Optr)PBlock14585, (Optr)&t_send1, (Optr)PSend14589, (Optr)&t_method_return);
    Method PMethod14582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14583, 1, PSend14589);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14582, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    Super PSuper14592 = new_Super(SMB_initializePrimaryVariable, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14594 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14596 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    // createReference:. 
    Send PSend14597 = new_Send((Optr)self, SMB_createReference_, 1, (Optr)PSend14596);
    Array PThreadedCode14595 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14596, (Optr)&t_send1, (Optr)PSend14597, (Optr)&t_method_return);
    Block PBlock14593 = new_Block_with(PArray14594, empty_Array, PThreadedCode14595, 1, PSend14597);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14598 = new_Send((Optr)PSuper14592, SMB_semantics_, 1, (Optr)PBlock14593);
    Array PThreadedCode14591 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14592, (Optr)&t_push_closure, (Optr)PBlock14593, (Optr)&t_send1, (Optr)PSend14598, (Optr)&t_method_return);
    Method PMethod14590 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14591, 1, PSend14598);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod14590, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Super PSuper14601 = new_Super(SMB_initializeStringSegment, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14603 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14605 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14604 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14605, (Optr)&t_method_return);
    Block PBlock14602 = new_Block_with(PArray14603, empty_Array, PThreadedCode14604, 1, PSend14605);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14606 = new_Send((Optr)PSuper14601, SMB_semantics_, 1, (Optr)PBlock14602);
    Array PThreadedCode14600 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14601, (Optr)&t_push_closure, (Optr)PBlock14602, (Optr)&t_send1, (Optr)PSend14606, (Optr)&t_method_return);
    Method PMethod14599 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14600, 1, PSend14606);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14599, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_parameters_0_2 = new_Variable_named(L"parameters", 0);
    Array PArray14608 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14610 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14612 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14616 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14615 = new_Send((Optr)PSend14616, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14614 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14615);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14618 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14617 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14618);
    // new:. 
    Send PSend14620 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14619 = new_Assign((Optr)VAR_parameters_0_2, (Optr)PSend14620);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14622 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14624 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14625 = new_Send((Optr)PSend14624, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14626 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14625);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14627 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14626);
    // *. 
    Send PSend14628 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14629 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14628);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14630 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14629);
    // at:put:. 
    Send PSend14631 = new_Send((Optr)VAR_parameters_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14630);
    Array PThreadedCode14623 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14624, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14625, (Optr)&t_send1, (Optr)PSend14626, (Optr)&t_send2, (Optr)PSend14627, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14628, (Optr)&t_send1, (Optr)PSend14629, (Optr)&t_send1, (Optr)PSend14630, (Optr)&t_send2, (Optr)PSend14631, (Optr)&t_method_return);
    Block PBlock14621 = new_Block_with(PArray14622, empty_Array, PThreadedCode14623, 2, PSend14627, PSend14631);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14632 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14621);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14634 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14636 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14637 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)VAR_parameters_0_2);
    Array PThreadedCode14635 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14636, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_send1, (Optr)PSend14637, (Optr)&t_method_return);
    Block PBlock14633 = new_Block_with(PArray14634, empty_Array, PThreadedCode14635, 2, PSend14636, PSend14637);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14638 = new_Send((Optr)ASTKeywordMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14639 = new_Send((Optr)PBlock14633, SMB_value_, 1, (Optr)PSend14638);
    Array PThreadedCode14613 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14614, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14616, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14615, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14617, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14618, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14619, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14620, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14621, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14632, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14633, (Optr)&t_push_class_reference, (Optr)ASTKeywordMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14638, (Optr)&t_send1, (Optr)PSend14639, (Optr)&t_method_return);
    Block PBlock14611 = new_Block_with(PArray14612, empty_Array, PThreadedCode14613, 5, PAssign14614, PAssign14617, PAssign14619, PSend14632, PSend14639);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14640 = new_Send((Optr)PSuper14610, SMB_semantics_, 1, (Optr)PBlock14611);
    Array PThreadedCode14609 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14610, (Optr)&t_push_closure, (Optr)PBlock14611, (Optr)&t_send1, (Optr)PSend14640, (Optr)&t_method_return);
    Method PMethod14607 = new_Method_with(empty_Array, PArray14608, empty_Array, PThreadedCode14609, 1, PSend14640);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod14607, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    Super PSuper14643 = new_Super(SMB_initializeBinaryMessageDefinition, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14645 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14648 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14650 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14651 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14650);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14652 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14653 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14652);
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    // parameter:. 
    Send PSend14654 = new_Send((Optr)VAR__receiver__2_0, SMB_parameter_, 1, (Optr)PSend14653);
    Array PThreadedCode14649 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14650, (Optr)&t_send1, (Optr)PSend14651, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14652, (Optr)&t_send1, (Optr)PSend14653, (Optr)&t_send1, (Optr)PSend14654, (Optr)&t_method_return);
    Block PBlock14647 = new_Block_with(PArray14648, empty_Array, PThreadedCode14649, 2, PSend14651, PSend14654);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14655 = new_Send((Optr)ASTBinaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14656 = new_Send((Optr)PBlock14647, SMB_value_, 1, (Optr)PSend14655);
    Array PThreadedCode14646 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14647, (Optr)&t_push_class_reference, (Optr)ASTBinaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14655, (Optr)&t_send1, (Optr)PSend14656, (Optr)&t_method_return);
    Block PBlock14644 = new_Block_with(PArray14645, empty_Array, PThreadedCode14646, 1, PSend14656);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14657 = new_Send((Optr)PSuper14643, SMB_semantics_, 1, (Optr)PBlock14644);
    Array PThreadedCode14642 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14643, (Optr)&t_push_closure, (Optr)PBlock14644, (Optr)&t_send1, (Optr)PSend14657, (Optr)&t_method_return);
    Method PMethod14641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14642, 1, PSend14657);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14641, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    Super PSuper14660 = new_Super(SMB_initializeReturn, 0);
    Variable VAR_expression_1_0 = new_Variable_named(L"expression", 1);
    Array PArray14662 = new_Array_with(1, (Optr)VAR_expression_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14664 = new_Send((Optr)ASTReturnExpression_classReference, SMB_new, 0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14665 = new_Send((Optr)PSend14664, SMB_expression_, 1, (Optr)VAR_expression_1_0);
    Array PThreadedCode14663 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTReturnExpression_classReference, (Optr)&t_send0, (Optr)PSend14664, (Optr)&t_push_variable, (Optr)VAR_expression_1_0, (Optr)&t_send1, (Optr)PSend14665, (Optr)&t_method_return);
    Block PBlock14661 = new_Block_with(PArray14662, empty_Array, PThreadedCode14663, 1, PSend14665);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14666 = new_Send((Optr)PSuper14660, SMB_semantics_, 1, (Optr)PBlock14661);
    Array PThreadedCode14659 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14660, (Optr)&t_push_closure, (Optr)PBlock14661, (Optr)&t_send1, (Optr)PSend14666, (Optr)&t_method_return);
    Method PMethod14658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14659, 1, PSend14666);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14658, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    Super PSuper14669 = new_Super(SMB_initializeTemporaries, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14671 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14673 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14672 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14673, (Optr)&t_method_return);
    Block PBlock14670 = new_Block_with(PArray14671, empty_Array, PThreadedCode14672, 1, PSend14673);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14674 = new_Send((Optr)PSuper14669, SMB_semantics_, 1, (Optr)PBlock14670);
    Array PThreadedCode14668 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14669, (Optr)&t_push_closure, (Optr)PBlock14670, (Optr)&t_send1, (Optr)PSend14674, (Optr)&t_method_return);
    Method PMethod14667 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14668, 1, PSend14674);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod14667, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14676 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14678 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14680 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14684 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14683 = new_Send((Optr)PSend14684, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14682 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14683);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14686 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14685 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14686);
    // new:. 
    Send PSend14688 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14687 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14688);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14690 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14692 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14693 = new_Send((Optr)PSend14692, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14694 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14693);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14695 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14694);
    // *. 
    Send PSend14696 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14697 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14696);
    // at:put:. 
    Send PSend14698 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14697);
    Array PThreadedCode14691 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14692, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14693, (Optr)&t_send1, (Optr)PSend14694, (Optr)&t_send2, (Optr)PSend14695, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14696, (Optr)&t_send1, (Optr)PSend14697, (Optr)&t_send2, (Optr)PSend14698, (Optr)&t_method_return);
    Block PBlock14689 = new_Block_with(PArray14690, empty_Array, PThreadedCode14691, 2, PSend14695, PSend14698);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14699 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14689);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14701 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14703 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14704 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14702 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14703, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14704, (Optr)&t_method_return);
    Block PBlock14700 = new_Block_with(PArray14701, empty_Array, PThreadedCode14702, 2, PSend14703, PSend14704);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14705 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14706 = new_Send((Optr)PBlock14700, SMB_value_, 1, (Optr)PSend14705);
    Array PThreadedCode14681 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14682, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14684, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14683, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14685, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14686, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14687, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14688, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14689, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14699, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14700, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14705, (Optr)&t_send1, (Optr)PSend14706, (Optr)&t_method_return);
    Block PBlock14679 = new_Block_with(PArray14680, empty_Array, PThreadedCode14681, 5, PAssign14682, PAssign14685, PAssign14687, PSend14699, PSend14706);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14707 = new_Send((Optr)PSuper14678, SMB_semantics_, 1, (Optr)PBlock14679);
    Array PThreadedCode14677 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14678, (Optr)&t_push_closure, (Optr)PBlock14679, (Optr)&t_send1, (Optr)PSend14707, (Optr)&t_method_return);
    Method PMethod14675 = new_Method_with(empty_Array, PArray14676, empty_Array, PThreadedCode14677, 1, PSend14707);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod14675, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    Super PSuper14710 = new_Super(SMB_initializeSymbolKeywords, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14712 = new_Array_with(1, (Optr)VAR_result_1_0);
    String string_14714 = new_String(L"");
    Symbol SMB_on_ = new_Symbol(L"on:");
    Constant string_14714_Const = new_Constant((Optr)string_14714);
    // on:. 
    Send PSend14715 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_on_, 1, (Optr)string_14714_Const);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Variable VAR_e_2_1 = new_Variable_named(L"e", 2);
    Array PArray14717 = new_Array_with(2, (Optr)VAR_c_2_0, (Optr)VAR_e_2_1);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend14719 = new_Send((Optr)VAR_c_2_0, SMB__shiftLeft_, 1, (Optr)VAR_e_2_1);
    Array PThreadedCode14718 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_push_variable, (Optr)VAR_e_2_1, (Optr)&t_send1, (Optr)PSend14719, (Optr)&t_method_return);
    Block PBlock14716 = new_Block_with(PArray14717, empty_Array, PThreadedCode14718, 1, PSend14719);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14720 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14715, (Optr)PBlock14716);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14721 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14713 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push1, (Optr)string_14714, (Optr)&t_send1, (Optr)PSend14715, (Optr)&t_push_closure, (Optr)PBlock14716, (Optr)&t_send2, (Optr)PSend14720, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14721, (Optr)&t_method_return);
    Block PBlock14711 = new_Block_with(PArray14712, empty_Array, PThreadedCode14713, 2, PSend14720, PSend14721);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14722 = new_Send((Optr)PSuper14710, SMB_semantics_, 1, (Optr)PBlock14711);
    Array PThreadedCode14709 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14710, (Optr)&t_push_closure, (Optr)PBlock14711, (Optr)&t_send1, (Optr)PSend14722, (Optr)&t_method_return);
    Method PMethod14708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14709, 1, PSend14722);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod14708, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    Super PSuper14725 = new_Super(SMB_initializeAssignmentExpressions, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14727 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14729 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14728 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14729, (Optr)&t_method_return);
    Block PBlock14726 = new_Block_with(PArray14727, empty_Array, PThreadedCode14728, 1, PSend14729);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14730 = new_Send((Optr)PSuper14725, SMB_semantics_, 1, (Optr)PBlock14726);
    Array PThreadedCode14724 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14725, (Optr)&t_push_closure, (Optr)PBlock14726, (Optr)&t_send1, (Optr)PSend14730, (Optr)&t_method_return);
    Method PMethod14723 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14724, 1, PSend14730);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14723, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Super PSuper14733 = new_Super(SMB_preStoreCascadedMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14735 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14738 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14740 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend14741 = new_Send((Optr)PSend14740, SMB_receiver, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14742 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend14741);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14743 = new_Send((Optr)VAR_parts_1_0, SMB_asArray, 0);
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    // cascades:. 
    Send PSend14744 = new_Send((Optr)VAR__receiver__2_0, SMB_cascades_, 1, (Optr)PSend14743);
    Array PThreadedCode14739 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14740, (Optr)&t_send0, (Optr)PSend14741, (Optr)&t_send1, (Optr)PSend14742, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14743, (Optr)&t_send1, (Optr)PSend14744, (Optr)&t_method_return);
    Block PBlock14737 = new_Block_with(PArray14738, empty_Array, PThreadedCode14739, 2, PSend14742, PSend14744);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14745 = new_Send((Optr)ASTMessageCascadeExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14746 = new_Send((Optr)PBlock14737, SMB_value_, 1, (Optr)PSend14745);
    Array PThreadedCode14736 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14737, (Optr)&t_push_class_reference, (Optr)ASTMessageCascadeExpression_classReference, (Optr)&t_send0, (Optr)PSend14745, (Optr)&t_send1, (Optr)PSend14746, (Optr)&t_method_return);
    Block PBlock14734 = new_Block_with(PArray14735, empty_Array, PThreadedCode14736, 1, PSend14746);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14747 = new_Send((Optr)PSuper14733, SMB_semantics_, 1, (Optr)PBlock14734);
    Array PThreadedCode14732 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14733, (Optr)&t_push_closure, (Optr)PBlock14734, (Optr)&t_send1, (Optr)PSend14747, (Optr)&t_method_return);
    Method PMethod14731 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14732, 1, PSend14747);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod14731, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    Super PSuper14750 = new_Super(SMB_initializeUnaryAnnotation, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14752 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14754 = new_Send((Optr)ASTUnaryAnnotation_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14755 = new_Send((Optr)PSend14754, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14753 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14754, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14755, (Optr)&t_method_return);
    Block PBlock14751 = new_Block_with(PArray14752, empty_Array, PThreadedCode14753, 1, PSend14755);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14756 = new_Send((Optr)PSuper14750, SMB_semantics_, 1, (Optr)PBlock14751);
    Array PThreadedCode14749 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14750, (Optr)&t_push_closure, (Optr)PBlock14751, (Optr)&t_send1, (Optr)PSend14756, (Optr)&t_method_return);
    Method PMethod14748 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14749, 1, PSend14756);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14748, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    Super PSuper14759 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14761 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14763 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14764 = new_Send((Optr)PSend14763, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14768 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14769 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // add:. 
    Send PSend14770 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PSend14769);
    Array PThreadedCode14767 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14768, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend14769, (Optr)&t_send1, (Optr)PSend14770, (Optr)&t_block_return);
    Block PBlock14766 = new_Block_with(empty_Array, empty_Array, PThreadedCode14767, 2, PSend14768, PSend14770);
    // ifTrue:. 
    Send PSend14765 = new_Send((Optr)PSend14764, SMB_ifTrue_, 1, (Optr)PBlock14766);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14772 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14774 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    // new. 
    Send PSend14777 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14776 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14777, (Optr)&t_block_return);
    Block PBlock14775 = new_Block_with(empty_Array, empty_Array, PThreadedCode14776, 1, PSend14777);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14778 = new_Send((Optr)PSend14774, SMB_resultIfFailed_, 1, (Optr)PBlock14775);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14779 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)PSend14778);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14780 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    // new. 
    Send PSend14783 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14782 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14783, (Optr)&t_block_return);
    Block PBlock14781 = new_Block_with(empty_Array, empty_Array, PThreadedCode14782, 1, PSend14783);
    // resultIfFailed:. 
    Send PSend14784 = new_Send((Optr)PSend14780, SMB_resultIfFailed_, 1, (Optr)PBlock14781);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14785 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14784);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14786 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14787 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14786);
    Array PThreadedCode14773 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14774, (Optr)&t_push_closure, (Optr)PBlock14775, (Optr)&t_send1, (Optr)PSend14778, (Optr)&t_send1, (Optr)PSend14779, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14780, (Optr)&t_push_closure, (Optr)PBlock14781, (Optr)&t_send1, (Optr)PSend14784, (Optr)&t_send1, (Optr)PSend14785, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14786, (Optr)&t_send1, (Optr)PSend14787, (Optr)&t_method_return);
    Block PBlock14771 = new_Block_with(PArray14772, empty_Array, PThreadedCode14773, 3, PSend14779, PSend14785, PSend14787);
    // new. 
    Send PSend14788 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14789 = new_Send((Optr)PBlock14771, SMB_value_, 1, (Optr)PSend14788);
    Array PThreadedCode14762 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14763, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14764, (Optr)&t_send_ifTrue_, (Optr)PSend14765, (Optr)PBlock14766, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14771, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend14788, (Optr)&t_send1, (Optr)PSend14789, (Optr)&t_method_return);
    Block PBlock14760 = new_Block_with(PArray14761, empty_Array, PThreadedCode14762, 2, PSend14765, PSend14789);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14790 = new_Send((Optr)PSuper14759, SMB_semantics_, 1, (Optr)PBlock14760);
    Array PThreadedCode14758 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14759, (Optr)&t_push_closure, (Optr)PBlock14760, (Optr)&t_send1, (Optr)PSend14790, (Optr)&t_method_return);
    Method PMethod14757 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14758, 1, PSend14790);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod14757, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_class_SMB_match_in_() {
    Symbol SMB_match_in_ = new_Symbol(L"match:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray14792 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend14794 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14795 = new_Send((Optr)PSend14794, SMB_method, 0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend14796 = new_Send((Optr)VAR_class_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14797 = new_Send((Optr)PSend14796, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14798 = new_Send((Optr)PSend14797, SMB_asString, 0);
    // asString. 
    Send PSend14799 = new_Send((Optr)PSend14798, SMB_asString, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14800 = new_Send((Optr)PSend14795, SMB_parse_, 1, (Optr)PSend14799);
    Array PThreadedCode14793 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14794, (Optr)&t_send0, (Optr)PSend14795, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send0, (Optr)PSend14796, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend14797, (Optr)&t_send0, (Optr)PSend14798, (Optr)&t_send0, (Optr)PSend14799, (Optr)&t_send1, (Optr)PSend14800, (Optr)&t_method_return);
    Method PMethod14791 = new_Method_with(PArray14792, empty_Array, empty_Array, PThreadedCode14793, 1, PSend14800);
    
    MethodClosure MC_SMB_match_in_ = new_MethodClosure((Method)PMethod14791, HEADER(Smalltalk_Parser_SmalltalkParser_Class));
    store_method(HEADER(Smalltalk_Parser_SmalltalkParser_Class), SMB_match_in_, MC_SMB_match_in_);
}

void init_Smalltalk_Parser_PSmalltalkParser_layout() {
    layout_Smalltalk_Parser_SmalltalkParser_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser_Class_class)->values[5] = slot_Smalltalk_Parser_SmalltalkGrammar_Class_class_instance; // instance 
    
    Symbol  SMB_SmalltalkParser = new_Symbol(L"SmalltalkParser");
    slot_Smalltalk_Parser_SmalltalkParser_stream = (Optr)new_Slot(1, L"stream");
    layout_Smalltalk_Parser_SmalltalkParser = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Smalltalk_Parser_SmalltalkParser)->values[0] = slot_Smalltalk_Parser_AbstractGrammar_parsers; // parsers 
    ((Array)layout_Smalltalk_Parser_SmalltalkParser)->values[1] = slot_Smalltalk_Parser_SmalltalkParser_stream; // stream 
    Smalltalk_Parser_SmalltalkParser_Class = (Class)new_Class(Smalltalk_Parser_SmalltalkGrammar_Class, layout_Smalltalk_Parser_SmalltalkParser_Class_class);
    Smalltalk_Parser_SmalltalkParser_Class->layout = layout_Smalltalk_Parser_SmalltalkParser;
    Smalltalk_Parser_SmalltalkParser_Class->name = SMB_SmalltalkParser;
    
}

void init_Smalltalk_Parser_PSmalltalkParser_methods() {
    init_SMB_initializeUnaryMessageExpression();
    init_SMB_initializeUnarySelector();
    init_SMB_initializeNumber();
    init_SMB_initializeIdentifier();
    init_SMB_initializeRadix();
    init_SMB_initializeUnaryObjectDescription();
    init_SMB_initializeVariableName();
    init_SMB_initializeSymbolInArray();
    init_SMB_initializeStatements();
    init_SMB_initializeCapitalIdentifier();
    init_SMB_initializeSymbolConstant();
    init_SMB_initializeArray();
    init_SMB_initializeBinarySelector();
    init_SMB_createReference_();
    init_SMB_initialize();
    init_SMB_initializeStringConstant();
    init_SMB_initializeKeywordExpression();
    init_SMB_initializeBracketIndexExpression();
    init_SMB_initializeBinaryExpression();
    init_SMB_initializeScopedExpression();
    init_SMB_initializeCharacterConstant();
    init_SMB_initializeNumberFormat();
    init_SMB_initializeMethod();
    init_SMB_initializeUnaryMessageDefinition();
    init_SMB_initializeKeywordAnnotation();
    init_SMB_initializeKeyword();
    init_SMB_initializeExpression();
    init_SMB_initializeFloat();
    init_SMB_initializeBlockArguments();
    init_SMB_initializeBraceExpression();
    init_SMB_initializeBinaryMessageExpression();
    init_SMB_initializeString();
    init_SMB_createVariable_();
    init_SMB_initializeUnaryExpression();
    init_SMB_initializeAnnotations();
    init_SMB_initializePrimaryVariable();
    init_SMB_initializeStringSegment();
    init_SMB_initializeKeywordsArguments();
    init_SMB_initializeBinaryMessageDefinition();
    init_SMB_initializeReturn();
    init_SMB_initializeTemporaries();
    init_SMB_initializeKeywordMessageExpression();
    init_SMB_initializeSymbolKeywords();
    init_SMB_initializeAssignmentExpressions();
    init_SMB_preStoreCascadedMessageExpression();
    init_SMB_initializeUnaryAnnotation();
    init_SMB_initializeBlock();
    init_class_SMB_match_in_();
    
}