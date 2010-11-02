#include <lib/class/Smalltalk/Parser/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParser_stream;
Optr layout_Smalltalk_Parser_SmalltalkParser;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    Super PSuper14054 = new_Super(SMB_initializeUnaryMessageExpression, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14056 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14058 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14059 = new_Send((Optr)PSend14058, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14057 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14058, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14059, (Optr)&t_method_return);
    Block PBlock14055 = new_Block_with(PArray14056, empty_Array, PThreadedCode14057, 1, PSend14059);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14060 = new_Send((Optr)PSuper14054, SMB_semantics_, 1, (Optr)PBlock14055);
    Array PThreadedCode14053 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14054, (Optr)&t_push_closure, (Optr)PBlock14055, (Optr)&t_send1, (Optr)PSend14060, (Optr)&t_method_return);
    Method PMethod14052 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14053, 1, PSend14060);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod14052, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    Super PSuper14063 = new_Super(SMB_initializeUnarySelector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14065 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14066 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_method_return);
    Block PBlock14064 = new_Block_with(PArray14065, empty_Array, PThreadedCode14066, 1, VAR_selector_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14067 = new_Send((Optr)PSuper14063, SMB_semantics_, 1, (Optr)PBlock14064);
    Array PThreadedCode14062 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14063, (Optr)&t_push_closure, (Optr)PBlock14064, (Optr)&t_send1, (Optr)PSend14067, (Optr)&t_method_return);
    Method PMethod14061 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14062, 1, PSend14067);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod14061, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    Super PSuper14070 = new_Super(SMB_initializeNumber, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14072 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14075 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14077 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)VAR_result_1_0);
    String string_14078 = new_String(L"10");
    Symbol SMB_base_ = new_Symbol(L"base:");
    Constant string_14078_Const = new_Constant((Optr)string_14078);
    // base:. 
    Send PSend14079 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)string_14078_Const);
    Array PThreadedCode14076 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14077, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_14078, (Optr)&t_send1, (Optr)PSend14079, (Optr)&t_method_return);
    Block PBlock14074 = new_Block_with(PArray14075, empty_Array, PThreadedCode14076, 2, PSend14077, PSend14079);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14080 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14081 = new_Send((Optr)PBlock14074, SMB_value_, 1, (Optr)PSend14080);
    Array PThreadedCode14073 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14074, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14080, (Optr)&t_send1, (Optr)PSend14081, (Optr)&t_method_return);
    Block PBlock14071 = new_Block_with(PArray14072, empty_Array, PThreadedCode14073, 1, PSend14081);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14082 = new_Send((Optr)PSuper14070, SMB_semantics_, 1, (Optr)PBlock14071);
    Array PThreadedCode14069 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14070, (Optr)&t_push_closure, (Optr)PBlock14071, (Optr)&t_send1, (Optr)PSend14082, (Optr)&t_method_return);
    Method PMethod14068 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14069, 1, PSend14082);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod14068, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    Super PSuper14085 = new_Super(SMB_initializeIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14087 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14089 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14088 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14089, (Optr)&t_method_return);
    Block PBlock14086 = new_Block_with(PArray14087, empty_Array, PThreadedCode14088, 1, PSend14089);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14090 = new_Send((Optr)PSuper14085, SMB_semantics_, 1, (Optr)PBlock14086);
    Array PThreadedCode14084 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14085, (Optr)&t_push_closure, (Optr)PBlock14086, (Optr)&t_send1, (Optr)PSend14090, (Optr)&t_method_return);
    Method PMethod14083 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14084, 1, PSend14090);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod14083, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    Super PSuper14093 = new_Super(SMB_initializeRadix, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14095 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14098 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14100 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend14101 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)PSend14100);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14102 = new_Send((Optr)VAR_result_1_0, SMB_second, 0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14103 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)PSend14102);
    Array PThreadedCode14099 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14100, (Optr)&t_send1, (Optr)PSend14101, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14102, (Optr)&t_send1, (Optr)PSend14103, (Optr)&t_method_return);
    Block PBlock14097 = new_Block_with(PArray14098, empty_Array, PThreadedCode14099, 2, PSend14101, PSend14103);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14104 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14105 = new_Send((Optr)PBlock14097, SMB_value_, 1, (Optr)PSend14104);
    Array PThreadedCode14096 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14097, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14104, (Optr)&t_send1, (Optr)PSend14105, (Optr)&t_method_return);
    Block PBlock14094 = new_Block_with(PArray14095, empty_Array, PThreadedCode14096, 1, PSend14105);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14106 = new_Send((Optr)PSuper14093, SMB_semantics_, 1, (Optr)PBlock14094);
    Array PThreadedCode14092 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14093, (Optr)&t_push_closure, (Optr)PBlock14094, (Optr)&t_send1, (Optr)PSend14106, (Optr)&t_method_return);
    Method PMethod14091 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14092, 1, PSend14106);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14091, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    Super PSuper14109 = new_Super(SMB_initializeUnaryObjectDescription, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14111 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14112 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14115 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14114 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14115);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14116 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14118 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14123 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14125 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14126 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14127 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14126);
    Array PThreadedCode14124 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14126, (Optr)&t_send1, (Optr)PSend14127, (Optr)&t_method_return);
    Block PBlock14122 = new_Block_with(PArray14123, empty_Array, PThreadedCode14124, 2, PSend14125, PSend14127);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14128 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14121 = new_Send((Optr)PBlock14122, SMB_value_, 1, (Optr)PSend14128);
    Assign PAssign14120 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14121);
    Array PThreadedCode14119 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14120, (Optr)&t_push_closure, (Optr)PBlock14122, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14128, (Optr)&t_send1, (Optr)PSend14121, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14117 = new_Block_with(PArray14118, empty_Array, PThreadedCode14119, 1, PAssign14120);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14129 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14116, (Optr)PBlock14117);
    Array PThreadedCode14113 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14114, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14115, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14116, (Optr)&t_push_closure, (Optr)PBlock14117, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14129, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14110 = new_Block_with(PArray14111, PArray14112, PThreadedCode14113, 3, PAssign14114, PSend14129, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14130 = new_Send((Optr)PSuper14109, SMB_semantics_, 1, (Optr)PBlock14110);
    Array PThreadedCode14108 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14109, (Optr)&t_push_closure, (Optr)PBlock14110, (Optr)&t_send1, (Optr)PSend14130, (Optr)&t_method_return);
    Method PMethod14107 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14108, 1, PSend14130);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14107, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    Super PSuper14133 = new_Super(SMB_initializeVariableName, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14135 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14137 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14136 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14137, (Optr)&t_method_return);
    Block PBlock14134 = new_Block_with(PArray14135, empty_Array, PThreadedCode14136, 1, PSend14137);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14138 = new_Send((Optr)PSuper14133, SMB_semantics_, 1, (Optr)PBlock14134);
    Array PThreadedCode14132 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14133, (Optr)&t_push_closure, (Optr)PBlock14134, (Optr)&t_send1, (Optr)PSend14138, (Optr)&t_method_return);
    Method PMethod14131 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14132, 1, PSend14138);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod14131, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    Super PSuper14141 = new_Super(SMB_initializeSymbolInArray, 0);
    Variable VAR_symbol_1_0 = new_Variable_named(L"symbol", 1);
    Array PArray14143 = new_Array_with(1, (Optr)VAR_symbol_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14145 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_symbol_1_0);
    Array PThreadedCode14144 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_symbol_1_0, (Optr)&t_send1, (Optr)PSend14145, (Optr)&t_method_return);
    Block PBlock14142 = new_Block_with(PArray14143, empty_Array, PThreadedCode14144, 1, PSend14145);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14146 = new_Send((Optr)PSuper14141, SMB_semantics_, 1, (Optr)PBlock14142);
    Array PThreadedCode14140 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14141, (Optr)&t_push_closure, (Optr)PBlock14142, (Optr)&t_send1, (Optr)PSend14146, (Optr)&t_method_return);
    Method PMethod14139 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14140, 1, PSend14146);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14139, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    Super PSuper14149 = new_Super(SMB_initializeStatements, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14151 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend14153 = new_Send((Optr)VAR_result_1_0, SMB_removeLast, 0);
    Variable VAR_exp_2_0 = new_Variable_named(L"exp", 2);
    Array PArray14155 = new_Array_with(1, (Optr)VAR_exp_2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14157 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)VAR_exp_2_0);
    Array PThreadedCode14156 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_variable, (Optr)VAR_exp_2_0, (Optr)&t_send1, (Optr)PSend14157, (Optr)&t_method_return);
    Block PBlock14154 = new_Block_with(PArray14155, empty_Array, PThreadedCode14156, 1, PSend14157);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14158 = new_Send((Optr)PSend14153, SMB_ifMatched_, 1, (Optr)PBlock14154);
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend14159 = new_Send((Optr)VAR_result_1_0, SMB_asOrderedCollection, 0);
    Array PThreadedCode14152 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14153, (Optr)&t_push_closure, (Optr)PBlock14154, (Optr)&t_send1, (Optr)PSend14158, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14159, (Optr)&t_method_return);
    Block PBlock14150 = new_Block_with(PArray14151, empty_Array, PThreadedCode14152, 2, PSend14158, PSend14159);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14160 = new_Send((Optr)PSuper14149, SMB_semantics_, 1, (Optr)PBlock14150);
    Array PThreadedCode14148 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14149, (Optr)&t_push_closure, (Optr)PBlock14150, (Optr)&t_send1, (Optr)PSend14160, (Optr)&t_method_return);
    Method PMethod14147 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14148, 1, PSend14160);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14147, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    Super PSuper14163 = new_Super(SMB_initializeCapitalIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14165 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14167 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14166 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14167, (Optr)&t_method_return);
    Block PBlock14164 = new_Block_with(PArray14165, empty_Array, PThreadedCode14166, 1, PSend14167);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14168 = new_Send((Optr)PSuper14163, SMB_semantics_, 1, (Optr)PBlock14164);
    Array PThreadedCode14162 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14163, (Optr)&t_push_closure, (Optr)PBlock14164, (Optr)&t_send1, (Optr)PSend14168, (Optr)&t_method_return);
    Method PMethod14161 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14162, 1, PSend14168);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod14161, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    Super PSuper14171 = new_Super(SMB_initializeSymbolConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14173 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14175 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14174 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14175, (Optr)&t_method_return);
    Block PBlock14172 = new_Block_with(PArray14173, empty_Array, PThreadedCode14174, 1, PSend14175);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14176 = new_Send((Optr)PSuper14171, SMB_semantics_, 1, (Optr)PBlock14172);
    Array PThreadedCode14170 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14171, (Optr)&t_push_closure, (Optr)PBlock14172, (Optr)&t_send1, (Optr)PSend14176, (Optr)&t_method_return);
    Method PMethod14169 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14170, 1, PSend14176);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14169, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Super PSuper14179 = new_Super(SMB_initializeArray, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14181 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14183 = new_Send((Optr)ASTArray_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14184 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    // literals:. 
    Send PSend14185 = new_Send((Optr)PSend14183, SMB_literals_, 1, (Optr)PSend14184);
    Array PThreadedCode14182 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)ASTArray_classReference, (Optr)&t_send0, (Optr)PSend14183, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14184, (Optr)&t_send1, (Optr)PSend14185, (Optr)&t_method_return);
    Block PBlock14180 = new_Block_with(PArray14181, empty_Array, PThreadedCode14182, 1, PSend14185);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14186 = new_Send((Optr)PSuper14179, SMB_semantics_, 1, (Optr)PBlock14180);
    Array PThreadedCode14178 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14179, (Optr)&t_push_closure, (Optr)PBlock14180, (Optr)&t_send1, (Optr)PSend14186, (Optr)&t_method_return);
    Method PMethod14177 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14178, 1, PSend14186);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14177, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    Super PSuper14189 = new_Super(SMB_initializeBinarySelector, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14191 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14193 = new_Send((Optr)VAR_result_1_0, SMB_asSymbol, 0);
    Array PThreadedCode14192 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14193, (Optr)&t_method_return);
    Block PBlock14190 = new_Block_with(PArray14191, empty_Array, PThreadedCode14192, 1, PSend14193);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14194 = new_Send((Optr)PSuper14189, SMB_semantics_, 1, (Optr)PBlock14190);
    Array PThreadedCode14188 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14189, (Optr)&t_push_closure, (Optr)PBlock14190, (Optr)&t_send1, (Optr)PSend14194, (Optr)&t_method_return);
    Method PMethod14187 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14188, 1, PSend14194);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod14187, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_createReference_() {
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    Variable VAR_path_0_0 = new_Variable_named(L"path", 0);
    Array PArray14196 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14197 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14200 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14202 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14203 = new_Send((Optr)PSend14202, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14208 = new_Send((Optr)VAR_path_0_0, SMB_first, 0);
    Assign PAssign14207 = new_Assign((Optr)VAR_name_0_1, (Optr)PSend14208);
    Symbol  SMB_self = new_Symbol(L"self");
    Constant SMB_self_Const = new_Constant((Optr)SMB_self);
    // =. 
    Send PSend14209 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_self_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14213 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14214 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14213);
    Array PThreadedCode14212 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend14213, (Optr)&t_send1, (Optr)PSend14214, (Optr)&t_block_return);
    Block PBlock14211 = new_Block_with(empty_Array, empty_Array, PThreadedCode14212, 1, PSend14214);
    // ifTrue:. 
    Send PSend14210 = new_Send((Optr)PSend14209, SMB_ifTrue_, 1, (Optr)PBlock14211);
    Symbol  SMB_super = new_Symbol(L"super");
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    // =. 
    Send PSend14215 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_super_Const);
    // new. 
    Send PSend14219 = new_Send((Optr)ASTSuper_classReference, SMB_new, 0);
    // escape:. 
    Send PSend14220 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14219);
    Array PThreadedCode14218 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send0, (Optr)PSend14219, (Optr)&t_send1, (Optr)PSend14220, (Optr)&t_block_return);
    Block PBlock14217 = new_Block_with(empty_Array, empty_Array, PThreadedCode14218, 1, PSend14220);
    // ifTrue:. 
    Send PSend14216 = new_Send((Optr)PSend14215, SMB_ifTrue_, 1, (Optr)PBlock14217);
    // new. 
    Send PSend14221 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14222 = new_Send((Optr)PSend14221, SMB_name_, 1, (Optr)VAR_name_0_1);
    // escape:. 
    Send PSend14223 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14222);
    Array PThreadedCode14206 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push1, (Optr)PAssign14207, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14208, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_self, (Optr)&t_send1, (Optr)PSend14209, (Optr)&t_send_ifTrue_, (Optr)PSend14210, (Optr)PBlock14211, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_send1, (Optr)PSend14215, (Optr)&t_send_ifTrue_, (Optr)PSend14216, (Optr)PBlock14217, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14221, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_send1, (Optr)PSend14222, (Optr)&t_send1, (Optr)PSend14223, (Optr)&t_block_return);
    Block PBlock14205 = new_Block_with(empty_Array, empty_Array, PThreadedCode14206, 4, PAssign14207, PSend14210, PSend14216, PSend14223);
    // ifTrue:. 
    Send PSend14204 = new_Send((Optr)PSend14203, SMB_ifTrue_, 1, (Optr)PBlock14205);
    // new. 
    Send PSend14224 = new_Send((Optr)ASTPath_classReference, SMB_new, 0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend14225 = new_Send((Optr)PSend14224, SMB_path_, 1, (Optr)VAR_path_0_0);
    Array PThreadedCode14201 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14202, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14203, (Optr)&t_send_ifTrue_, (Optr)PSend14204, (Optr)PBlock14205, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)ASTPath_classReference, (Optr)&t_send0, (Optr)PSend14224, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send1, (Optr)PSend14225, (Optr)&t_method_return);
    Block PBlock14199 = new_Block_with(PArray14200, empty_Array, PThreadedCode14201, 2, PSend14204, PSend14225);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14226 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14199);
    Array PThreadedCode14198 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14199, (Optr)&t_send1, (Optr)PSend14226, (Optr)&t_method_return);
    Method PMethod14195 = new_Method_with(PArray14196, PArray14197, empty_Array, PThreadedCode14198, 1, PSend14226);
    
    MethodClosure MC_SMB_createReference_ = new_MethodClosure((Method)PMethod14195, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createReference_, MC_SMB_createReference_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14229 = new_Super(SMB_initialize, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend14232 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14231 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14232);
    Assign PAssign14230 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14231);
    Array PThreadedCode14228 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14229, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14230, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14232, (Optr)&t_send1, (Optr)PSend14231, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14227 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14228, 3, PSuper14229, PAssign14230, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14227, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    Super PSuper14235 = new_Super(SMB_initializeStringConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14237 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14239 = new_Send((Optr)ASTString_classReference, SMB_new, 0);
    Symbol SMB_string_ = new_Symbol(L"string:");
    // string:. 
    Send PSend14240 = new_Send((Optr)PSend14239, SMB_string_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14238 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTString_classReference, (Optr)&t_send0, (Optr)PSend14239, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14240, (Optr)&t_method_return);
    Block PBlock14236 = new_Block_with(PArray14237, empty_Array, PThreadedCode14238, 1, PSend14240);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14241 = new_Send((Optr)PSuper14235, SMB_semantics_, 1, (Optr)PBlock14236);
    Array PThreadedCode14234 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14235, (Optr)&t_push_closure, (Optr)PBlock14236, (Optr)&t_send1, (Optr)PSend14241, (Optr)&t_method_return);
    Method PMethod14233 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14234, 1, PSend14241);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod14233, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    Super PSuper14244 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14246 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14248 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14249 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14250 = new_Send((Optr)PSend14248, SMB_receiver_, 1, (Optr)PSend14249);
    Array PThreadedCode14247 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14248, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14249, (Optr)&t_send1, (Optr)PSend14250, (Optr)&t_method_return);
    Block PBlock14245 = new_Block_with(PArray14246, empty_Array, PThreadedCode14247, 1, PSend14250);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14251 = new_Send((Optr)PSuper14244, SMB_semantics_, 1, (Optr)PBlock14245);
    Array PThreadedCode14243 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14244, (Optr)&t_push_closure, (Optr)PBlock14245, (Optr)&t_send1, (Optr)PSend14251, (Optr)&t_method_return);
    Method PMethod14242 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14243, 1, PSend14251);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod14242, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    Variable VAR_optionalAssignment_0_0 = new_Variable_named(L"optionalAssignment", 0);
    Variable VAR_isAssignment_0_1 = new_Variable_named(L"isAssignment", 0);
    Variable VAR_keywords_0_2 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_3 = new_Variable_named(L"arguments", 0);
    Array PArray14253 = new_Array_with(4, (Optr)VAR_optionalAssignment_0_0, (Optr)VAR_isAssignment_0_1, (Optr)VAR_keywords_0_2, (Optr)VAR_arguments_0_3);
    Super PSuper14255 = new_Super(SMB_initializeBracketIndexExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14257 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14260 = new_Send((Optr)VAR_parts_1_0, SMB_second, 0);
    Assign PAssign14259 = new_Assign((Optr)VAR_optionalAssignment_0_0, (Optr)PSend14260);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend14263 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend14262 = new_Send((Optr)PSend14263, SMB__pequals_, 1, (Optr)PEGSucceededOptionalResult_classReference);
    Assign PAssign14261 = new_Assign((Optr)VAR_isAssignment_0_1, (Optr)PSend14262);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol  SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_at__Const = new_Constant((Optr)SMB_at_);
    // with:. 
    Send PSend14268 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14267 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14268, (Optr)&t_block_return);
    Block PBlock14266 = new_Block_with(empty_Array, empty_Array, PThreadedCode14267, 1, PSend14268);
    Symbol  SMB_put_ = new_Symbol(L"put:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_put__Const = new_Constant((Optr)SMB_put_);
    // with:with:. 
    Send PSend14271 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_at__Const, (Optr)SMB_put__Const);
    Array PThreadedCode14270 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_push1, (Optr)SMB_put_, (Optr)&t_send2, (Optr)PSend14271, (Optr)&t_block_return);
    Block PBlock14269 = new_Block_with(empty_Array, empty_Array, PThreadedCode14270, 1, PSend14271);
    // ifFalse:ifTrue:. 
    Send PSend14265 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14266, (Optr)PBlock14269);
    Assign PAssign14264 = new_Assign((Optr)VAR_keywords_0_2, (Optr)PSend14265);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14276 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    // with:. 
    Send PSend14277 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend14276);
    Array PThreadedCode14275 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14276, (Optr)&t_send1, (Optr)PSend14277, (Optr)&t_block_return);
    Block PBlock14274 = new_Block_with(empty_Array, empty_Array, PThreadedCode14275, 1, PSend14277);
    // first. 
    Send PSend14280 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_result = new_Symbol(L"result");
    // result. 
    Send PSend14281 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_result, 0);
    // with:with:. 
    Send PSend14282 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend14280, (Optr)PSend14281);
    Array PThreadedCode14279 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14280, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14281, (Optr)&t_send2, (Optr)PSend14282, (Optr)&t_block_return);
    Block PBlock14278 = new_Block_with(empty_Array, empty_Array, PThreadedCode14279, 1, PSend14282);
    // ifFalse:ifTrue:. 
    Send PSend14273 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14274, (Optr)PBlock14278);
    Assign PAssign14272 = new_Assign((Optr)VAR_arguments_0_3, (Optr)PSend14273);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14284 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14286 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_2);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14287 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_3);
    Array PThreadedCode14285 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_2, (Optr)&t_send1, (Optr)PSend14286, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_3, (Optr)&t_send1, (Optr)PSend14287, (Optr)&t_method_return);
    Block PBlock14283 = new_Block_with(PArray14284, empty_Array, PThreadedCode14285, 2, PSend14286, PSend14287);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14288 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14289 = new_Send((Optr)PBlock14283, SMB_value_, 1, (Optr)PSend14288);
    Array PThreadedCode14258 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14259, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14260, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14261, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14263, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14262, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14264, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14265, (Optr)PBlock14266, (Optr)PBlock14269, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14272, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14273, (Optr)PBlock14274, (Optr)PBlock14278, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14283, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14288, (Optr)&t_send1, (Optr)PSend14289, (Optr)&t_method_return);
    Block PBlock14256 = new_Block_with(PArray14257, empty_Array, PThreadedCode14258, 5, PAssign14259, PAssign14261, PAssign14264, PAssign14272, PSend14289);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14290 = new_Send((Optr)PSuper14255, SMB_semantics_, 1, (Optr)PBlock14256);
    Array PThreadedCode14254 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14255, (Optr)&t_push_closure, (Optr)PBlock14256, (Optr)&t_send1, (Optr)PSend14290, (Optr)&t_method_return);
    Method PMethod14252 = new_Method_with(empty_Array, PArray14253, empty_Array, PThreadedCode14254, 1, PSend14290);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod14252, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Super PSuper14293 = new_Super(SMB_initializeBinaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14295 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14296 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14299 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14298 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14299);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14300 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14302 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14307 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14309 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14310 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14311 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14310);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend14312 = new_Send((Optr)VAR_i_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend14313 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14312);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14314 = new_Send((Optr)VAR__receiver__3_0, SMB_argument_, 1, (Optr)PSend14313);
    Array PThreadedCode14308 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14309, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14310, (Optr)&t_send1, (Optr)PSend14311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14312, (Optr)&t_send1, (Optr)PSend14313, (Optr)&t_send1, (Optr)PSend14314, (Optr)&t_method_return);
    Block PBlock14306 = new_Block_with(PArray14307, empty_Array, PThreadedCode14308, 3, PSend14309, PSend14311, PSend14314);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14315 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14305 = new_Send((Optr)PBlock14306, SMB_value_, 1, (Optr)PSend14315);
    Assign PAssign14304 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14305);
    Array PThreadedCode14303 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14304, (Optr)&t_push_closure, (Optr)PBlock14306, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14315, (Optr)&t_send1, (Optr)PSend14305, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14301 = new_Block_with(PArray14302, empty_Array, PThreadedCode14303, 1, PAssign14304);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend14316 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14300, (Optr)int_2_Const, (Optr)PBlock14301);
    Array PThreadedCode14297 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14298, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14299, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14300, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14301, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14294 = new_Block_with(PArray14295, PArray14296, PThreadedCode14297, 3, PAssign14298, PSend14316, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14317 = new_Send((Optr)PSuper14293, SMB_semantics_, 1, (Optr)PBlock14294);
    Array PThreadedCode14292 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14293, (Optr)&t_push_closure, (Optr)PBlock14294, (Optr)&t_send1, (Optr)PSend14317, (Optr)&t_method_return);
    Method PMethod14291 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14292, 1, PSend14317);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14291, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    Super PSuper14320 = new_Super(SMB_initializeScopedExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14322 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_scoped = new_Symbol(L"scoped");
    // scoped. 
    Send PSend14324 = new_Send((Optr)VAR_result_1_0, SMB_scoped, 0);
    Array PThreadedCode14323 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14324, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_method_return);
    Block PBlock14321 = new_Block_with(PArray14322, empty_Array, PThreadedCode14323, 2, PSend14324, VAR_result_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14325 = new_Send((Optr)PSuper14320, SMB_semantics_, 1, (Optr)PBlock14321);
    Array PThreadedCode14319 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14320, (Optr)&t_push_closure, (Optr)PBlock14321, (Optr)&t_send1, (Optr)PSend14325, (Optr)&t_method_return);
    Method PMethod14318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14319, 1, PSend14325);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod14318, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    Super PSuper14328 = new_Super(SMB_initializeCharacterConstant, 0);
    Variable VAR_char_1_0 = new_Variable_named(L"char", 1);
    Array PArray14330 = new_Array_with(1, (Optr)VAR_char_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14332 = new_Send((Optr)ASTCharacter_classReference, SMB_new, 0);
    Symbol SMB_char_ = new_Symbol(L"char:");
    // char:. 
    Send PSend14333 = new_Send((Optr)PSend14332, SMB_char_, 1, (Optr)VAR_char_1_0);
    Array PThreadedCode14331 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTCharacter_classReference, (Optr)&t_send0, (Optr)PSend14332, (Optr)&t_push_variable, (Optr)VAR_char_1_0, (Optr)&t_send1, (Optr)PSend14333, (Optr)&t_method_return);
    Block PBlock14329 = new_Block_with(PArray14330, empty_Array, PThreadedCode14331, 1, PSend14333);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14334 = new_Send((Optr)PSuper14328, SMB_semantics_, 1, (Optr)PBlock14329);
    Array PThreadedCode14327 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14328, (Optr)&t_push_closure, (Optr)PBlock14329, (Optr)&t_send1, (Optr)PSend14334, (Optr)&t_method_return);
    Method PMethod14326 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14327, 1, PSend14334);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod14326, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    Super PSuper14337 = new_Super(SMB_initializeNumberFormat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14339 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14341 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14340 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14341, (Optr)&t_method_return);
    Block PBlock14338 = new_Block_with(PArray14339, empty_Array, PThreadedCode14340, 1, PSend14341);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14342 = new_Send((Optr)PSuper14337, SMB_semantics_, 1, (Optr)PBlock14338);
    Array PThreadedCode14336 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14337, (Optr)&t_push_closure, (Optr)PBlock14338, (Optr)&t_send1, (Optr)PSend14342, (Optr)&t_method_return);
    Method PMethod14335 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14336, 1, PSend14342);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod14335, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    Super PSuper14345 = new_Super(SMB_initializeMethod, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14347 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14350 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14352 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend14353 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)PSend14352);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14354 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend14355 = new_Send((Optr)VAR__receiver__2_0, SMB_annotations_, 1, (Optr)PSend14354);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14356 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14359 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14358 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14359, (Optr)&t_block_return);
    Block PBlock14357 = new_Block_with(empty_Array, empty_Array, PThreadedCode14358, 1, PSend14359);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14360 = new_Send((Optr)PSend14356, SMB_resultIfFailed_, 1, (Optr)PBlock14357);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14361 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14360);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend14362 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14363 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14362);
    Array PThreadedCode14351 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14352, (Optr)&t_send1, (Optr)PSend14353, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14354, (Optr)&t_send1, (Optr)PSend14355, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14356, (Optr)&t_push_closure, (Optr)PBlock14357, (Optr)&t_send1, (Optr)PSend14360, (Optr)&t_send1, (Optr)PSend14361, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend14362, (Optr)&t_send1, (Optr)PSend14363, (Optr)&t_method_return);
    Block PBlock14349 = new_Block_with(PArray14350, empty_Array, PThreadedCode14351, 4, PSend14353, PSend14355, PSend14361, PSend14363);
    // new. 
    Send PSend14364 = new_Send((Optr)ASTMethod_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14365 = new_Send((Optr)PBlock14349, SMB_value_, 1, (Optr)PSend14364);
    Array PThreadedCode14348 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14349, (Optr)&t_push_class_reference, (Optr)ASTMethod_classReference, (Optr)&t_send0, (Optr)PSend14364, (Optr)&t_send1, (Optr)PSend14365, (Optr)&t_method_return);
    Block PBlock14346 = new_Block_with(PArray14347, empty_Array, PThreadedCode14348, 1, PSend14365);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14366 = new_Send((Optr)PSuper14345, SMB_semantics_, 1, (Optr)PBlock14346);
    Array PThreadedCode14344 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14345, (Optr)&t_push_closure, (Optr)PBlock14346, (Optr)&t_send1, (Optr)PSend14366, (Optr)&t_method_return);
    Method PMethod14343 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14344, 1, PSend14366);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod14343, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    Super PSuper14369 = new_Super(SMB_initializeUnaryMessageDefinition, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14371 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14373 = new_Send((Optr)ASTUnaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14374 = new_Send((Optr)PSend14373, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14372 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14373, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14374, (Optr)&t_method_return);
    Block PBlock14370 = new_Block_with(PArray14371, empty_Array, PThreadedCode14372, 1, PSend14374);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14375 = new_Send((Optr)PSuper14369, SMB_semantics_, 1, (Optr)PBlock14370);
    Array PThreadedCode14368 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14369, (Optr)&t_push_closure, (Optr)PBlock14370, (Optr)&t_send1, (Optr)PSend14375, (Optr)&t_method_return);
    Method PMethod14367 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14368, 1, PSend14375);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod14367, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14377 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14379 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14381 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14385 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14384 = new_Send((Optr)PSend14385, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14383 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14384);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14387 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14386 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14387);
    // new:. 
    Send PSend14389 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14388 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14389);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14391 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14393 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14394 = new_Send((Optr)PSend14393, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14395 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14394);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14396 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14395);
    // *. 
    Send PSend14397 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14398 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14397);
    // at:put:. 
    Send PSend14399 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14398);
    Array PThreadedCode14392 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14393, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14394, (Optr)&t_send1, (Optr)PSend14395, (Optr)&t_send2, (Optr)PSend14396, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14397, (Optr)&t_send1, (Optr)PSend14398, (Optr)&t_send2, (Optr)PSend14399, (Optr)&t_method_return);
    Block PBlock14390 = new_Block_with(PArray14391, empty_Array, PThreadedCode14392, 2, PSend14396, PSend14399);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14400 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14390);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14402 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14404 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14405 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14403 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14404, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14405, (Optr)&t_method_return);
    Block PBlock14401 = new_Block_with(PArray14402, empty_Array, PThreadedCode14403, 2, PSend14404, PSend14405);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14406 = new_Send((Optr)ASTKeywordAnnotation_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14407 = new_Send((Optr)PBlock14401, SMB_value_, 1, (Optr)PSend14406);
    Array PThreadedCode14382 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14383, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14385, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14386, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14387, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14388, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14389, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14390, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14400, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14401, (Optr)&t_push_class_reference, (Optr)ASTKeywordAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14406, (Optr)&t_send1, (Optr)PSend14407, (Optr)&t_method_return);
    Block PBlock14380 = new_Block_with(PArray14381, empty_Array, PThreadedCode14382, 5, PAssign14383, PAssign14386, PAssign14388, PSend14400, PSend14407);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14408 = new_Send((Optr)PSuper14379, SMB_semantics_, 1, (Optr)PBlock14380);
    Array PThreadedCode14378 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14379, (Optr)&t_push_closure, (Optr)PBlock14380, (Optr)&t_send1, (Optr)PSend14408, (Optr)&t_method_return);
    Method PMethod14376 = new_Method_with(empty_Array, PArray14377, empty_Array, PThreadedCode14378, 1, PSend14408);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14376, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    Super PSuper14411 = new_Super(SMB_initializeKeyword, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14413 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14415 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14414 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14415, (Optr)&t_method_return);
    Block PBlock14412 = new_Block_with(PArray14413, empty_Array, PThreadedCode14414, 1, PSend14415);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14416 = new_Send((Optr)PSuper14411, SMB_semantics_, 1, (Optr)PBlock14412);
    Array PThreadedCode14410 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14411, (Optr)&t_push_closure, (Optr)PBlock14412, (Optr)&t_send1, (Optr)PSend14416, (Optr)&t_method_return);
    Method PMethod14409 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14410, 1, PSend14416);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod14409, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Variable VAR_vars_0_0 = new_Variable_named(L"vars", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray14418 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14420 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14422 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14425 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14424 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14425);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14427 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign14426 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14427);
    Variable VAR_variables_2_0 = new_Variable_named(L"variables", 2);
    Array PArray14429 = new_Array_with(1, (Optr)VAR_variables_2_0);
    Variable VAR_variable_3_0 = new_Variable_named(L"variable", 3);
    Array PArray14432 = new_Array_with(1, (Optr)VAR_variable_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray14437 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14439 = new_Send((Optr)VAR__receiver__4_0, SMB_expression_, 1, (Optr)VAR_expression_0_1);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend14440 = new_Send((Optr)VAR__receiver__4_0, SMB_variable_, 1, (Optr)VAR_variable_3_0);
    Array PThreadedCode14438 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend14439, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_variable_3_0, (Optr)&t_send1, (Optr)PSend14440, (Optr)&t_method_return);
    Block PBlock14436 = new_Block_with(PArray14437, empty_Array, PThreadedCode14438, 2, PSend14439, PSend14440);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14441 = new_Send((Optr)ASTAssignmentExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14435 = new_Send((Optr)PBlock14436, SMB_value_, 1, (Optr)PSend14441);
    Assign PAssign14434 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14435);
    Array PThreadedCode14433 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14434, (Optr)&t_push_closure, (Optr)PBlock14436, (Optr)&t_push_class_reference, (Optr)ASTAssignmentExpression_classReference, (Optr)&t_send0, (Optr)PSend14441, (Optr)&t_send1, (Optr)PSend14435, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14431 = new_Block_with(PArray14432, empty_Array, PThreadedCode14433, 1, PAssign14434);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend14442 = new_Send((Optr)VAR_variables_2_0, SMB_reverseDo_, 1, (Optr)PBlock14431);
    Array PThreadedCode14430 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_variables_2_0, (Optr)&t_push_closure, (Optr)PBlock14431, (Optr)&t_send1, (Optr)PSend14442, (Optr)&t_method_return);
    Block PBlock14428 = new_Block_with(PArray14429, empty_Array, PThreadedCode14430, 1, PSend14442);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14443 = new_Send((Optr)VAR_vars_0_0, SMB_ifMatched_, 1, (Optr)PBlock14428);
    Array PThreadedCode14423 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign14424, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14425, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14426, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14427, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_vars_0_0, (Optr)&t_push_closure, (Optr)PBlock14428, (Optr)&t_send1, (Optr)PSend14443, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_method_return);
    Block PBlock14421 = new_Block_with(PArray14422, empty_Array, PThreadedCode14423, 4, PAssign14424, PAssign14426, PSend14443, VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14444 = new_Send((Optr)PSuper14420, SMB_semantics_, 1, (Optr)PBlock14421);
    Array PThreadedCode14419 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14420, (Optr)&t_push_closure, (Optr)PBlock14421, (Optr)&t_send1, (Optr)PSend14444, (Optr)&t_method_return);
    Method PMethod14417 = new_Method_with(empty_Array, PArray14418, empty_Array, PThreadedCode14419, 1, PSend14444);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14417, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    Super PSuper14447 = new_Super(SMB_initializeFloat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14449 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14452 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14454 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_high_ = new_Symbol(L"high:");
    // high:. 
    Send PSend14455 = new_Send((Optr)VAR__receiver__2_0, SMB_high_, 1, (Optr)PSend14454);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14456 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Symbol SMB_low_ = new_Symbol(L"low:");
    // low:. 
    Send PSend14457 = new_Send((Optr)VAR__receiver__2_0, SMB_low_, 1, (Optr)PSend14456);
    Array PThreadedCode14453 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14454, (Optr)&t_send1, (Optr)PSend14455, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14456, (Optr)&t_send1, (Optr)PSend14457, (Optr)&t_method_return);
    Block PBlock14451 = new_Block_with(PArray14452, empty_Array, PThreadedCode14453, 2, PSend14455, PSend14457);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14458 = new_Send((Optr)ASTFloat_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14459 = new_Send((Optr)PBlock14451, SMB_value_, 1, (Optr)PSend14458);
    Array PThreadedCode14450 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14451, (Optr)&t_push_class_reference, (Optr)ASTFloat_classReference, (Optr)&t_send0, (Optr)PSend14458, (Optr)&t_send1, (Optr)PSend14459, (Optr)&t_method_return);
    Block PBlock14448 = new_Block_with(PArray14449, empty_Array, PThreadedCode14450, 1, PSend14459);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14460 = new_Send((Optr)PSuper14447, SMB_semantics_, 1, (Optr)PBlock14448);
    Array PThreadedCode14446 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14447, (Optr)&t_push_closure, (Optr)PBlock14448, (Optr)&t_send1, (Optr)PSend14460, (Optr)&t_method_return);
    Method PMethod14445 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14446, 1, PSend14460);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14445, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    Super PSuper14463 = new_Super(SMB_initializeBlockArguments, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14465 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR_variable_2_0 = new_Variable_named(L"variable", 2);
    Array PArray14468 = new_Array_with(1, (Optr)VAR_variable_2_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14470 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_variable_2_0);
    Array PThreadedCode14469 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_variable_2_0, (Optr)&t_send1, (Optr)PSend14470, (Optr)&t_method_return);
    Block PBlock14467 = new_Block_with(PArray14468, empty_Array, PThreadedCode14469, 1, PSend14470);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend14471 = new_Send((Optr)VAR_result_1_0, SMB_collect_, 1, (Optr)PBlock14467);
    Array PThreadedCode14466 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_closure, (Optr)PBlock14467, (Optr)&t_send1, (Optr)PSend14471, (Optr)&t_method_return);
    Block PBlock14464 = new_Block_with(PArray14465, empty_Array, PThreadedCode14466, 1, PSend14471);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14472 = new_Send((Optr)PSuper14463, SMB_semantics_, 1, (Optr)PBlock14464);
    Array PThreadedCode14462 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14463, (Optr)&t_push_closure, (Optr)PBlock14464, (Optr)&t_send1, (Optr)PSend14472, (Optr)&t_method_return);
    Method PMethod14461 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14462, 1, PSend14472);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14461, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    Super PSuper14475 = new_Super(SMB_initializeBraceExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14477 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14479 = new_Send((Optr)ASTBraceExpression_classReference, SMB_new, 0);
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    // expressions:. 
    Send PSend14480 = new_Send((Optr)PSend14479, SMB_expressions_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14478 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTBraceExpression_classReference, (Optr)&t_send0, (Optr)PSend14479, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14480, (Optr)&t_method_return);
    Block PBlock14476 = new_Block_with(PArray14477, empty_Array, PThreadedCode14478, 1, PSend14480);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14481 = new_Send((Optr)PSuper14475, SMB_semantics_, 1, (Optr)PBlock14476);
    Array PThreadedCode14474 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14475, (Optr)&t_push_closure, (Optr)PBlock14476, (Optr)&t_send1, (Optr)PSend14481, (Optr)&t_method_return);
    Method PMethod14473 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14474, 1, PSend14481);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14473, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    Super PSuper14484 = new_Super(SMB_initializeBinaryMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14486 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14489 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14491 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14492 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14491);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14493 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14494 = new_Send((Optr)VAR__receiver__2_0, SMB_argument_, 1, (Optr)PSend14493);
    Array PThreadedCode14490 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14491, (Optr)&t_send1, (Optr)PSend14492, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14493, (Optr)&t_send1, (Optr)PSend14494, (Optr)&t_method_return);
    Block PBlock14488 = new_Block_with(PArray14489, empty_Array, PThreadedCode14490, 2, PSend14492, PSend14494);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14495 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14496 = new_Send((Optr)PBlock14488, SMB_value_, 1, (Optr)PSend14495);
    Array PThreadedCode14487 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14488, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14495, (Optr)&t_send1, (Optr)PSend14496, (Optr)&t_method_return);
    Block PBlock14485 = new_Block_with(PArray14486, empty_Array, PThreadedCode14487, 1, PSend14496);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14497 = new_Send((Optr)PSuper14484, SMB_semantics_, 1, (Optr)PBlock14485);
    Array PThreadedCode14483 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14484, (Optr)&t_push_closure, (Optr)PBlock14485, (Optr)&t_send1, (Optr)PSend14497, (Optr)&t_method_return);
    Method PMethod14482 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14483, 1, PSend14497);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14482, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    Super PSuper14500 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14502 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14504 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend14505 = new_Send((Optr)PSend14504, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_14509 = new_String(L"");
    Array PThreadedCode14508 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_14509, (Optr)&t_block_return);
    Constant string_14509_Const = new_Constant((Optr)string_14509);
    Block PBlock14507 = new_Block_with(empty_Array, empty_Array, PThreadedCode14508, 1, string_14509_Const);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14512 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend14513 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_with_, 1, (Optr)PSend14512);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Variable VAR_i_2_1 = new_Variable_named(L"i", 2);
    Array PArray14515 = new_Array_with(2, (Optr)VAR_s_2_0, (Optr)VAR_i_2_1);
    String string_14517 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_14517_Const = new_Constant((Optr)string_14517);
    // <<. 
    Send PSend14518 = new_Send((Optr)VAR_s_2_0, SMB__shiftLeft_, 1, (Optr)string_14517_Const);
    // <<. 
    Send PSend14519 = new_Send((Optr)PSend14518, SMB__shiftLeft_, 1, (Optr)VAR_i_2_1);
    Array PThreadedCode14516 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)string_14517, (Optr)&t_send1, (Optr)PSend14518, (Optr)&t_push_variable, (Optr)VAR_i_2_1, (Optr)&t_send1, (Optr)PSend14519, (Optr)&t_method_return);
    Block PBlock14514 = new_Block_with(PArray14515, empty_Array, PThreadedCode14516, 1, PSend14519);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14520 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14513, (Optr)PBlock14514);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14521 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14511 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14512, (Optr)&t_send1, (Optr)PSend14513, (Optr)&t_push_closure, (Optr)PBlock14514, (Optr)&t_send2, (Optr)PSend14520, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14521, (Optr)&t_block_return);
    Block PBlock14510 = new_Block_with(empty_Array, empty_Array, PThreadedCode14511, 2, PSend14520, PSend14521);
    // ifTrue:ifFalse:. 
    Send PSend14506 = new_Send((Optr)PSend14505, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock14507, (Optr)PBlock14510);
    Array PThreadedCode14503 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14504, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend14505, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend14506, (Optr)PBlock14507, (Optr)PBlock14510, (Optr)&t_method_return);
    Block PBlock14501 = new_Block_with(PArray14502, empty_Array, PThreadedCode14503, 1, PSend14506);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14522 = new_Send((Optr)PSuper14500, SMB_semantics_, 1, (Optr)PBlock14501);
    Array PThreadedCode14499 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14500, (Optr)&t_push_closure, (Optr)PBlock14501, (Optr)&t_send1, (Optr)PSend14522, (Optr)&t_method_return);
    Method PMethod14498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14499, 1, PSend14522);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14498, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_createVariable_() {
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
    Array PArray14524 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14526 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14527 = new_Send((Optr)PSend14526, SMB_name_, 1, (Optr)VAR_variable_0_0);
    Array PThreadedCode14525 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14526, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send1, (Optr)PSend14527, (Optr)&t_method_return);
    Method PMethod14523 = new_Method_with(PArray14524, empty_Array, empty_Array, PThreadedCode14525, 1, PSend14527);
    
    MethodClosure MC_SMB_createVariable_ = new_MethodClosure((Method)PMethod14523, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createVariable_, MC_SMB_createVariable_);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    Super PSuper14530 = new_Super(SMB_initializeUnaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14532 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14533 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14536 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14535 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14536);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14537 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14539 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14544 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14546 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14547 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14548 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14547);
    Array PThreadedCode14545 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14546, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14547, (Optr)&t_send1, (Optr)PSend14548, (Optr)&t_method_return);
    Block PBlock14543 = new_Block_with(PArray14544, empty_Array, PThreadedCode14545, 2, PSend14546, PSend14548);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14549 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14542 = new_Send((Optr)PBlock14543, SMB_value_, 1, (Optr)PSend14549);
    Assign PAssign14541 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14542);
    Array PThreadedCode14540 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14541, (Optr)&t_push_closure, (Optr)PBlock14543, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14549, (Optr)&t_send1, (Optr)PSend14542, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14538 = new_Block_with(PArray14539, empty_Array, PThreadedCode14540, 1, PAssign14541);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14550 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14537, (Optr)PBlock14538);
    Array PThreadedCode14534 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14535, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14536, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14537, (Optr)&t_push_closure, (Optr)PBlock14538, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14550, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14531 = new_Block_with(PArray14532, PArray14533, PThreadedCode14534, 3, PAssign14535, PSend14550, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14551 = new_Send((Optr)PSuper14530, SMB_semantics_, 1, (Optr)PBlock14531);
    Array PThreadedCode14529 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14530, (Optr)&t_push_closure, (Optr)PBlock14531, (Optr)&t_send1, (Optr)PSend14551, (Optr)&t_method_return);
    Method PMethod14528 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14529, 1, PSend14551);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14528, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    Super PSuper14554 = new_Super(SMB_initializeAnnotations, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14556 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14558 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14557 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14558, (Optr)&t_method_return);
    Block PBlock14555 = new_Block_with(PArray14556, empty_Array, PThreadedCode14557, 1, PSend14558);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14559 = new_Send((Optr)PSuper14554, SMB_semantics_, 1, (Optr)PBlock14555);
    Array PThreadedCode14553 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14554, (Optr)&t_push_closure, (Optr)PBlock14555, (Optr)&t_send1, (Optr)PSend14559, (Optr)&t_method_return);
    Method PMethod14552 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14553, 1, PSend14559);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14552, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    Super PSuper14562 = new_Super(SMB_initializePrimaryVariable, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14564 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14566 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    // createReference:. 
    Send PSend14567 = new_Send((Optr)self, SMB_createReference_, 1, (Optr)PSend14566);
    Array PThreadedCode14565 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14566, (Optr)&t_send1, (Optr)PSend14567, (Optr)&t_method_return);
    Block PBlock14563 = new_Block_with(PArray14564, empty_Array, PThreadedCode14565, 1, PSend14567);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14568 = new_Send((Optr)PSuper14562, SMB_semantics_, 1, (Optr)PBlock14563);
    Array PThreadedCode14561 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14562, (Optr)&t_push_closure, (Optr)PBlock14563, (Optr)&t_send1, (Optr)PSend14568, (Optr)&t_method_return);
    Method PMethod14560 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14561, 1, PSend14568);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod14560, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Super PSuper14571 = new_Super(SMB_initializeStringSegment, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14573 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14575 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14574 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14575, (Optr)&t_method_return);
    Block PBlock14572 = new_Block_with(PArray14573, empty_Array, PThreadedCode14574, 1, PSend14575);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14576 = new_Send((Optr)PSuper14571, SMB_semantics_, 1, (Optr)PBlock14572);
    Array PThreadedCode14570 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14571, (Optr)&t_push_closure, (Optr)PBlock14572, (Optr)&t_send1, (Optr)PSend14576, (Optr)&t_method_return);
    Method PMethod14569 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14570, 1, PSend14576);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14569, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_parameters_0_2 = new_Variable_named(L"parameters", 0);
    Array PArray14578 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14580 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14582 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14586 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14585 = new_Send((Optr)PSend14586, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14584 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14585);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14588 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14587 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14588);
    // new:. 
    Send PSend14590 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14589 = new_Assign((Optr)VAR_parameters_0_2, (Optr)PSend14590);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14592 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14594 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14595 = new_Send((Optr)PSend14594, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14596 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14595);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14597 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14596);
    // *. 
    Send PSend14598 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14599 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14598);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14600 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14599);
    // at:put:. 
    Send PSend14601 = new_Send((Optr)VAR_parameters_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14600);
    Array PThreadedCode14593 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14594, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14595, (Optr)&t_send1, (Optr)PSend14596, (Optr)&t_send2, (Optr)PSend14597, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14598, (Optr)&t_send1, (Optr)PSend14599, (Optr)&t_send1, (Optr)PSend14600, (Optr)&t_send2, (Optr)PSend14601, (Optr)&t_method_return);
    Block PBlock14591 = new_Block_with(PArray14592, empty_Array, PThreadedCode14593, 2, PSend14597, PSend14601);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14602 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14591);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14604 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14606 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14607 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)VAR_parameters_0_2);
    Array PThreadedCode14605 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14606, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_send1, (Optr)PSend14607, (Optr)&t_method_return);
    Block PBlock14603 = new_Block_with(PArray14604, empty_Array, PThreadedCode14605, 2, PSend14606, PSend14607);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14608 = new_Send((Optr)ASTKeywordMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14609 = new_Send((Optr)PBlock14603, SMB_value_, 1, (Optr)PSend14608);
    Array PThreadedCode14583 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14584, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14586, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14585, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14587, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14588, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14589, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14590, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14591, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14602, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14603, (Optr)&t_push_class_reference, (Optr)ASTKeywordMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14608, (Optr)&t_send1, (Optr)PSend14609, (Optr)&t_method_return);
    Block PBlock14581 = new_Block_with(PArray14582, empty_Array, PThreadedCode14583, 5, PAssign14584, PAssign14587, PAssign14589, PSend14602, PSend14609);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14610 = new_Send((Optr)PSuper14580, SMB_semantics_, 1, (Optr)PBlock14581);
    Array PThreadedCode14579 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14580, (Optr)&t_push_closure, (Optr)PBlock14581, (Optr)&t_send1, (Optr)PSend14610, (Optr)&t_method_return);
    Method PMethod14577 = new_Method_with(empty_Array, PArray14578, empty_Array, PThreadedCode14579, 1, PSend14610);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod14577, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    Super PSuper14613 = new_Super(SMB_initializeBinaryMessageDefinition, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14615 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14618 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14620 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14621 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14620);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14622 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14623 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14622);
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    // parameter:. 
    Send PSend14624 = new_Send((Optr)VAR__receiver__2_0, SMB_parameter_, 1, (Optr)PSend14623);
    Array PThreadedCode14619 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14620, (Optr)&t_send1, (Optr)PSend14621, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14622, (Optr)&t_send1, (Optr)PSend14623, (Optr)&t_send1, (Optr)PSend14624, (Optr)&t_method_return);
    Block PBlock14617 = new_Block_with(PArray14618, empty_Array, PThreadedCode14619, 2, PSend14621, PSend14624);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14625 = new_Send((Optr)ASTBinaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14626 = new_Send((Optr)PBlock14617, SMB_value_, 1, (Optr)PSend14625);
    Array PThreadedCode14616 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14617, (Optr)&t_push_class_reference, (Optr)ASTBinaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14625, (Optr)&t_send1, (Optr)PSend14626, (Optr)&t_method_return);
    Block PBlock14614 = new_Block_with(PArray14615, empty_Array, PThreadedCode14616, 1, PSend14626);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14627 = new_Send((Optr)PSuper14613, SMB_semantics_, 1, (Optr)PBlock14614);
    Array PThreadedCode14612 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14613, (Optr)&t_push_closure, (Optr)PBlock14614, (Optr)&t_send1, (Optr)PSend14627, (Optr)&t_method_return);
    Method PMethod14611 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14612, 1, PSend14627);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14611, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    Super PSuper14630 = new_Super(SMB_initializeReturn, 0);
    Variable VAR_expression_1_0 = new_Variable_named(L"expression", 1);
    Array PArray14632 = new_Array_with(1, (Optr)VAR_expression_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14634 = new_Send((Optr)ASTReturnExpression_classReference, SMB_new, 0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14635 = new_Send((Optr)PSend14634, SMB_expression_, 1, (Optr)VAR_expression_1_0);
    Array PThreadedCode14633 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTReturnExpression_classReference, (Optr)&t_send0, (Optr)PSend14634, (Optr)&t_push_variable, (Optr)VAR_expression_1_0, (Optr)&t_send1, (Optr)PSend14635, (Optr)&t_method_return);
    Block PBlock14631 = new_Block_with(PArray14632, empty_Array, PThreadedCode14633, 1, PSend14635);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14636 = new_Send((Optr)PSuper14630, SMB_semantics_, 1, (Optr)PBlock14631);
    Array PThreadedCode14629 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14630, (Optr)&t_push_closure, (Optr)PBlock14631, (Optr)&t_send1, (Optr)PSend14636, (Optr)&t_method_return);
    Method PMethod14628 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14629, 1, PSend14636);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14628, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    Super PSuper14639 = new_Super(SMB_initializeTemporaries, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14641 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14643 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14642 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14643, (Optr)&t_method_return);
    Block PBlock14640 = new_Block_with(PArray14641, empty_Array, PThreadedCode14642, 1, PSend14643);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14644 = new_Send((Optr)PSuper14639, SMB_semantics_, 1, (Optr)PBlock14640);
    Array PThreadedCode14638 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14639, (Optr)&t_push_closure, (Optr)PBlock14640, (Optr)&t_send1, (Optr)PSend14644, (Optr)&t_method_return);
    Method PMethod14637 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14638, 1, PSend14644);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod14637, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14646 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14648 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14650 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14654 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14653 = new_Send((Optr)PSend14654, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14652 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14653);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14656 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14655 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14656);
    // new:. 
    Send PSend14658 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14657 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14658);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14660 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14662 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14663 = new_Send((Optr)PSend14662, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14664 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14663);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14665 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14664);
    // *. 
    Send PSend14666 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14667 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14666);
    // at:put:. 
    Send PSend14668 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14667);
    Array PThreadedCode14661 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14662, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14663, (Optr)&t_send1, (Optr)PSend14664, (Optr)&t_send2, (Optr)PSend14665, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14666, (Optr)&t_send1, (Optr)PSend14667, (Optr)&t_send2, (Optr)PSend14668, (Optr)&t_method_return);
    Block PBlock14659 = new_Block_with(PArray14660, empty_Array, PThreadedCode14661, 2, PSend14665, PSend14668);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14669 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14659);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14671 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14673 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14674 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14672 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14673, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14674, (Optr)&t_method_return);
    Block PBlock14670 = new_Block_with(PArray14671, empty_Array, PThreadedCode14672, 2, PSend14673, PSend14674);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14675 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14676 = new_Send((Optr)PBlock14670, SMB_value_, 1, (Optr)PSend14675);
    Array PThreadedCode14651 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14652, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14654, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14653, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14655, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14656, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14657, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14658, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14659, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14669, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14670, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14675, (Optr)&t_send1, (Optr)PSend14676, (Optr)&t_method_return);
    Block PBlock14649 = new_Block_with(PArray14650, empty_Array, PThreadedCode14651, 5, PAssign14652, PAssign14655, PAssign14657, PSend14669, PSend14676);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14677 = new_Send((Optr)PSuper14648, SMB_semantics_, 1, (Optr)PBlock14649);
    Array PThreadedCode14647 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14648, (Optr)&t_push_closure, (Optr)PBlock14649, (Optr)&t_send1, (Optr)PSend14677, (Optr)&t_method_return);
    Method PMethod14645 = new_Method_with(empty_Array, PArray14646, empty_Array, PThreadedCode14647, 1, PSend14677);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod14645, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    Super PSuper14680 = new_Super(SMB_initializeSymbolKeywords, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14682 = new_Array_with(1, (Optr)VAR_result_1_0);
    String string_14684 = new_String(L"");
    Symbol SMB_on_ = new_Symbol(L"on:");
    Constant string_14684_Const = new_Constant((Optr)string_14684);
    // on:. 
    Send PSend14685 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_on_, 1, (Optr)string_14684_Const);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Variable VAR_e_2_1 = new_Variable_named(L"e", 2);
    Array PArray14687 = new_Array_with(2, (Optr)VAR_c_2_0, (Optr)VAR_e_2_1);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend14689 = new_Send((Optr)VAR_c_2_0, SMB__shiftLeft_, 1, (Optr)VAR_e_2_1);
    Array PThreadedCode14688 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_push_variable, (Optr)VAR_e_2_1, (Optr)&t_send1, (Optr)PSend14689, (Optr)&t_method_return);
    Block PBlock14686 = new_Block_with(PArray14687, empty_Array, PThreadedCode14688, 1, PSend14689);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14690 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14685, (Optr)PBlock14686);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14691 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14683 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push1, (Optr)string_14684, (Optr)&t_send1, (Optr)PSend14685, (Optr)&t_push_closure, (Optr)PBlock14686, (Optr)&t_send2, (Optr)PSend14690, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14691, (Optr)&t_method_return);
    Block PBlock14681 = new_Block_with(PArray14682, empty_Array, PThreadedCode14683, 2, PSend14690, PSend14691);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14692 = new_Send((Optr)PSuper14680, SMB_semantics_, 1, (Optr)PBlock14681);
    Array PThreadedCode14679 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14680, (Optr)&t_push_closure, (Optr)PBlock14681, (Optr)&t_send1, (Optr)PSend14692, (Optr)&t_method_return);
    Method PMethod14678 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14679, 1, PSend14692);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod14678, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    Super PSuper14695 = new_Super(SMB_initializeAssignmentExpressions, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14697 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14699 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14698 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14699, (Optr)&t_method_return);
    Block PBlock14696 = new_Block_with(PArray14697, empty_Array, PThreadedCode14698, 1, PSend14699);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14700 = new_Send((Optr)PSuper14695, SMB_semantics_, 1, (Optr)PBlock14696);
    Array PThreadedCode14694 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14695, (Optr)&t_push_closure, (Optr)PBlock14696, (Optr)&t_send1, (Optr)PSend14700, (Optr)&t_method_return);
    Method PMethod14693 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14694, 1, PSend14700);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14693, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Super PSuper14703 = new_Super(SMB_preStoreCascadedMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14705 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14708 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14710 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend14711 = new_Send((Optr)PSend14710, SMB_receiver, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14712 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend14711);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14713 = new_Send((Optr)VAR_parts_1_0, SMB_asArray, 0);
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    // cascades:. 
    Send PSend14714 = new_Send((Optr)VAR__receiver__2_0, SMB_cascades_, 1, (Optr)PSend14713);
    Array PThreadedCode14709 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14710, (Optr)&t_send0, (Optr)PSend14711, (Optr)&t_send1, (Optr)PSend14712, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14713, (Optr)&t_send1, (Optr)PSend14714, (Optr)&t_method_return);
    Block PBlock14707 = new_Block_with(PArray14708, empty_Array, PThreadedCode14709, 2, PSend14712, PSend14714);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14715 = new_Send((Optr)ASTMessageCascadeExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14716 = new_Send((Optr)PBlock14707, SMB_value_, 1, (Optr)PSend14715);
    Array PThreadedCode14706 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14707, (Optr)&t_push_class_reference, (Optr)ASTMessageCascadeExpression_classReference, (Optr)&t_send0, (Optr)PSend14715, (Optr)&t_send1, (Optr)PSend14716, (Optr)&t_method_return);
    Block PBlock14704 = new_Block_with(PArray14705, empty_Array, PThreadedCode14706, 1, PSend14716);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14717 = new_Send((Optr)PSuper14703, SMB_semantics_, 1, (Optr)PBlock14704);
    Array PThreadedCode14702 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14703, (Optr)&t_push_closure, (Optr)PBlock14704, (Optr)&t_send1, (Optr)PSend14717, (Optr)&t_method_return);
    Method PMethod14701 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14702, 1, PSend14717);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod14701, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    Super PSuper14720 = new_Super(SMB_initializeUnaryAnnotation, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14722 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14724 = new_Send((Optr)ASTUnaryAnnotation_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14725 = new_Send((Optr)PSend14724, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14723 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14724, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14725, (Optr)&t_method_return);
    Block PBlock14721 = new_Block_with(PArray14722, empty_Array, PThreadedCode14723, 1, PSend14725);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14726 = new_Send((Optr)PSuper14720, SMB_semantics_, 1, (Optr)PBlock14721);
    Array PThreadedCode14719 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14720, (Optr)&t_push_closure, (Optr)PBlock14721, (Optr)&t_send1, (Optr)PSend14726, (Optr)&t_method_return);
    Method PMethod14718 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14719, 1, PSend14726);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14718, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    Super PSuper14729 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14731 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14733 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14734 = new_Send((Optr)PSend14733, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14738 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14739 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // add:. 
    Send PSend14740 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PSend14739);
    Array PThreadedCode14737 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14738, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend14739, (Optr)&t_send1, (Optr)PSend14740, (Optr)&t_block_return);
    Block PBlock14736 = new_Block_with(empty_Array, empty_Array, PThreadedCode14737, 2, PSend14738, PSend14740);
    // ifTrue:. 
    Send PSend14735 = new_Send((Optr)PSend14734, SMB_ifTrue_, 1, (Optr)PBlock14736);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14742 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14744 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    // new. 
    Send PSend14747 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14746 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14747, (Optr)&t_block_return);
    Block PBlock14745 = new_Block_with(empty_Array, empty_Array, PThreadedCode14746, 1, PSend14747);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14748 = new_Send((Optr)PSend14744, SMB_resultIfFailed_, 1, (Optr)PBlock14745);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14749 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)PSend14748);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14750 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    // new. 
    Send PSend14753 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14752 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14753, (Optr)&t_block_return);
    Block PBlock14751 = new_Block_with(empty_Array, empty_Array, PThreadedCode14752, 1, PSend14753);
    // resultIfFailed:. 
    Send PSend14754 = new_Send((Optr)PSend14750, SMB_resultIfFailed_, 1, (Optr)PBlock14751);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14755 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14754);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14756 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14757 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14756);
    Array PThreadedCode14743 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14744, (Optr)&t_push_closure, (Optr)PBlock14745, (Optr)&t_send1, (Optr)PSend14748, (Optr)&t_send1, (Optr)PSend14749, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14750, (Optr)&t_push_closure, (Optr)PBlock14751, (Optr)&t_send1, (Optr)PSend14754, (Optr)&t_send1, (Optr)PSend14755, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14756, (Optr)&t_send1, (Optr)PSend14757, (Optr)&t_method_return);
    Block PBlock14741 = new_Block_with(PArray14742, empty_Array, PThreadedCode14743, 3, PSend14749, PSend14755, PSend14757);
    // new. 
    Send PSend14758 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14759 = new_Send((Optr)PBlock14741, SMB_value_, 1, (Optr)PSend14758);
    Array PThreadedCode14732 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14733, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14734, (Optr)&t_send_ifTrue_, (Optr)PSend14735, (Optr)PBlock14736, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14741, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend14758, (Optr)&t_send1, (Optr)PSend14759, (Optr)&t_method_return);
    Block PBlock14730 = new_Block_with(PArray14731, empty_Array, PThreadedCode14732, 2, PSend14735, PSend14759);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14760 = new_Send((Optr)PSuper14729, SMB_semantics_, 1, (Optr)PBlock14730);
    Array PThreadedCode14728 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14729, (Optr)&t_push_closure, (Optr)PBlock14730, (Optr)&t_send1, (Optr)PSend14760, (Optr)&t_method_return);
    Method PMethod14727 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14728, 1, PSend14760);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod14727, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_class_SMB_match_in_() {
    Symbol SMB_match_in_ = new_Symbol(L"match:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray14762 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend14764 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14765 = new_Send((Optr)PSend14764, SMB_method, 0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend14766 = new_Send((Optr)VAR_class_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14767 = new_Send((Optr)PSend14766, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14768 = new_Send((Optr)PSend14767, SMB_asString, 0);
    // asString. 
    Send PSend14769 = new_Send((Optr)PSend14768, SMB_asString, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14770 = new_Send((Optr)PSend14765, SMB_parse_, 1, (Optr)PSend14769);
    Array PThreadedCode14763 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14764, (Optr)&t_send0, (Optr)PSend14765, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send0, (Optr)PSend14766, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend14767, (Optr)&t_send0, (Optr)PSend14768, (Optr)&t_send0, (Optr)PSend14769, (Optr)&t_send1, (Optr)PSend14770, (Optr)&t_method_return);
    Method PMethod14761 = new_Method_with(PArray14762, empty_Array, empty_Array, PThreadedCode14763, 1, PSend14770);
    
    MethodClosure MC_SMB_match_in_ = new_MethodClosure((Method)PMethod14761, HEADER(Smalltalk_Parser_SmalltalkParser_Class));
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