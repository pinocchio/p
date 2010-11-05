#include <lib/class/Smalltalk/Parser/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParser_stream;
Optr layout_Smalltalk_Parser_SmalltalkParser;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    Super PSuper14141 = new_Super(SMB_initializeUnaryMessageExpression, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14143 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14145 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14146 = new_Send((Optr)PSend14145, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14144 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14145, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14146, (Optr)&t_method_return);
    Block PBlock14142 = new_Block_with(PArray14143, empty_Array, PThreadedCode14144, 1, PSend14146);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14147 = new_Send((Optr)PSuper14141, SMB_semantics_, 1, (Optr)PBlock14142);
    Array PThreadedCode14140 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14141, (Optr)&t_push_closure, (Optr)PBlock14142, (Optr)&t_send1, (Optr)PSend14147, (Optr)&t_method_return);
    Method PMethod14139 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14140, 1, PSend14147);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod14139, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    Super PSuper14150 = new_Super(SMB_initializeUnarySelector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14152 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14153 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_method_return);
    Block PBlock14151 = new_Block_with(PArray14152, empty_Array, PThreadedCode14153, 1, VAR_selector_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14154 = new_Send((Optr)PSuper14150, SMB_semantics_, 1, (Optr)PBlock14151);
    Array PThreadedCode14149 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14150, (Optr)&t_push_closure, (Optr)PBlock14151, (Optr)&t_send1, (Optr)PSend14154, (Optr)&t_method_return);
    Method PMethod14148 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14149, 1, PSend14154);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod14148, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    Super PSuper14157 = new_Super(SMB_initializeNumber, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14159 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14162 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14164 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)VAR_result_1_0);
    String string_14165 = new_String(L"10");
    Symbol SMB_base_ = new_Symbol(L"base:");
    Constant string_14165_Const = new_Constant((Optr)string_14165);
    // base:. 
    Send PSend14166 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)string_14165_Const);
    Array PThreadedCode14163 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14164, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_14165, (Optr)&t_send1, (Optr)PSend14166, (Optr)&t_method_return);
    Block PBlock14161 = new_Block_with(PArray14162, empty_Array, PThreadedCode14163, 2, PSend14164, PSend14166);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14167 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14168 = new_Send((Optr)PBlock14161, SMB_value_, 1, (Optr)PSend14167);
    Array PThreadedCode14160 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14161, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14167, (Optr)&t_send1, (Optr)PSend14168, (Optr)&t_method_return);
    Block PBlock14158 = new_Block_with(PArray14159, empty_Array, PThreadedCode14160, 1, PSend14168);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14169 = new_Send((Optr)PSuper14157, SMB_semantics_, 1, (Optr)PBlock14158);
    Array PThreadedCode14156 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14157, (Optr)&t_push_closure, (Optr)PBlock14158, (Optr)&t_send1, (Optr)PSend14169, (Optr)&t_method_return);
    Method PMethod14155 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14156, 1, PSend14169);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod14155, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    Super PSuper14172 = new_Super(SMB_initializeIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14174 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14176 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14175 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14176, (Optr)&t_method_return);
    Block PBlock14173 = new_Block_with(PArray14174, empty_Array, PThreadedCode14175, 1, PSend14176);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14177 = new_Send((Optr)PSuper14172, SMB_semantics_, 1, (Optr)PBlock14173);
    Array PThreadedCode14171 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14172, (Optr)&t_push_closure, (Optr)PBlock14173, (Optr)&t_send1, (Optr)PSend14177, (Optr)&t_method_return);
    Method PMethod14170 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14171, 1, PSend14177);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod14170, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    Super PSuper14180 = new_Super(SMB_initializeRadix, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14182 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14185 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14187 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend14188 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)PSend14187);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14189 = new_Send((Optr)VAR_result_1_0, SMB_second, 0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14190 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)PSend14189);
    Array PThreadedCode14186 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14187, (Optr)&t_send1, (Optr)PSend14188, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14189, (Optr)&t_send1, (Optr)PSend14190, (Optr)&t_method_return);
    Block PBlock14184 = new_Block_with(PArray14185, empty_Array, PThreadedCode14186, 2, PSend14188, PSend14190);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14191 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14192 = new_Send((Optr)PBlock14184, SMB_value_, 1, (Optr)PSend14191);
    Array PThreadedCode14183 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14184, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14191, (Optr)&t_send1, (Optr)PSend14192, (Optr)&t_method_return);
    Block PBlock14181 = new_Block_with(PArray14182, empty_Array, PThreadedCode14183, 1, PSend14192);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14193 = new_Send((Optr)PSuper14180, SMB_semantics_, 1, (Optr)PBlock14181);
    Array PThreadedCode14179 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14180, (Optr)&t_push_closure, (Optr)PBlock14181, (Optr)&t_send1, (Optr)PSend14193, (Optr)&t_method_return);
    Method PMethod14178 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14179, 1, PSend14193);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14178, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    Super PSuper14196 = new_Super(SMB_initializeUnaryObjectDescription, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14198 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14199 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14202 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14201 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14202);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14203 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14205 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14210 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14212 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14213 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14214 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14213);
    Array PThreadedCode14211 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14212, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14213, (Optr)&t_send1, (Optr)PSend14214, (Optr)&t_method_return);
    Block PBlock14209 = new_Block_with(PArray14210, empty_Array, PThreadedCode14211, 2, PSend14212, PSend14214);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14215 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14208 = new_Send((Optr)PBlock14209, SMB_value_, 1, (Optr)PSend14215);
    Assign PAssign14207 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14208);
    Array PThreadedCode14206 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14207, (Optr)&t_push_closure, (Optr)PBlock14209, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14215, (Optr)&t_send1, (Optr)PSend14208, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14204 = new_Block_with(PArray14205, empty_Array, PThreadedCode14206, 1, PAssign14207);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14216 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14203, (Optr)PBlock14204);
    Array PThreadedCode14200 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14201, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14202, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14203, (Optr)&t_push_closure, (Optr)PBlock14204, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14216, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14197 = new_Block_with(PArray14198, PArray14199, PThreadedCode14200, 3, PAssign14201, PSend14216, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14217 = new_Send((Optr)PSuper14196, SMB_semantics_, 1, (Optr)PBlock14197);
    Array PThreadedCode14195 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14196, (Optr)&t_push_closure, (Optr)PBlock14197, (Optr)&t_send1, (Optr)PSend14217, (Optr)&t_method_return);
    Method PMethod14194 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14195, 1, PSend14217);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14194, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    Super PSuper14220 = new_Super(SMB_initializeVariableName, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14222 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14224 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14223 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14224, (Optr)&t_method_return);
    Block PBlock14221 = new_Block_with(PArray14222, empty_Array, PThreadedCode14223, 1, PSend14224);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14225 = new_Send((Optr)PSuper14220, SMB_semantics_, 1, (Optr)PBlock14221);
    Array PThreadedCode14219 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14220, (Optr)&t_push_closure, (Optr)PBlock14221, (Optr)&t_send1, (Optr)PSend14225, (Optr)&t_method_return);
    Method PMethod14218 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14219, 1, PSend14225);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod14218, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    Super PSuper14228 = new_Super(SMB_initializeSymbolInArray, 0);
    Variable VAR_symbol_1_0 = new_Variable_named(L"symbol", 1);
    Array PArray14230 = new_Array_with(1, (Optr)VAR_symbol_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14232 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_symbol_1_0);
    Array PThreadedCode14231 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_symbol_1_0, (Optr)&t_send1, (Optr)PSend14232, (Optr)&t_method_return);
    Block PBlock14229 = new_Block_with(PArray14230, empty_Array, PThreadedCode14231, 1, PSend14232);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14233 = new_Send((Optr)PSuper14228, SMB_semantics_, 1, (Optr)PBlock14229);
    Array PThreadedCode14227 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14228, (Optr)&t_push_closure, (Optr)PBlock14229, (Optr)&t_send1, (Optr)PSend14233, (Optr)&t_method_return);
    Method PMethod14226 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14227, 1, PSend14233);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14226, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    Super PSuper14236 = new_Super(SMB_initializeStatements, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14238 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend14240 = new_Send((Optr)VAR_result_1_0, SMB_removeLast, 0);
    Variable VAR_exp_2_0 = new_Variable_named(L"exp", 2);
    Array PArray14242 = new_Array_with(1, (Optr)VAR_exp_2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14244 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)VAR_exp_2_0);
    Array PThreadedCode14243 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_variable, (Optr)VAR_exp_2_0, (Optr)&t_send1, (Optr)PSend14244, (Optr)&t_method_return);
    Block PBlock14241 = new_Block_with(PArray14242, empty_Array, PThreadedCode14243, 1, PSend14244);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14245 = new_Send((Optr)PSend14240, SMB_ifMatched_, 1, (Optr)PBlock14241);
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend14246 = new_Send((Optr)VAR_result_1_0, SMB_asOrderedCollection, 0);
    Array PThreadedCode14239 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14240, (Optr)&t_push_closure, (Optr)PBlock14241, (Optr)&t_send1, (Optr)PSend14245, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14246, (Optr)&t_method_return);
    Block PBlock14237 = new_Block_with(PArray14238, empty_Array, PThreadedCode14239, 2, PSend14245, PSend14246);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14247 = new_Send((Optr)PSuper14236, SMB_semantics_, 1, (Optr)PBlock14237);
    Array PThreadedCode14235 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14236, (Optr)&t_push_closure, (Optr)PBlock14237, (Optr)&t_send1, (Optr)PSend14247, (Optr)&t_method_return);
    Method PMethod14234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14235, 1, PSend14247);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14234, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    Super PSuper14250 = new_Super(SMB_initializeCapitalIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14252 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14254 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14253 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14254, (Optr)&t_method_return);
    Block PBlock14251 = new_Block_with(PArray14252, empty_Array, PThreadedCode14253, 1, PSend14254);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14255 = new_Send((Optr)PSuper14250, SMB_semantics_, 1, (Optr)PBlock14251);
    Array PThreadedCode14249 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14250, (Optr)&t_push_closure, (Optr)PBlock14251, (Optr)&t_send1, (Optr)PSend14255, (Optr)&t_method_return);
    Method PMethod14248 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14249, 1, PSend14255);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod14248, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    Super PSuper14258 = new_Super(SMB_initializeSymbolConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14260 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14262 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14261 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14262, (Optr)&t_method_return);
    Block PBlock14259 = new_Block_with(PArray14260, empty_Array, PThreadedCode14261, 1, PSend14262);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14263 = new_Send((Optr)PSuper14258, SMB_semantics_, 1, (Optr)PBlock14259);
    Array PThreadedCode14257 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14258, (Optr)&t_push_closure, (Optr)PBlock14259, (Optr)&t_send1, (Optr)PSend14263, (Optr)&t_method_return);
    Method PMethod14256 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14257, 1, PSend14263);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14256, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Super PSuper14266 = new_Super(SMB_initializeArray, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14268 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14270 = new_Send((Optr)ASTArray_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14271 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    // literals:. 
    Send PSend14272 = new_Send((Optr)PSend14270, SMB_literals_, 1, (Optr)PSend14271);
    Array PThreadedCode14269 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)ASTArray_classReference, (Optr)&t_send0, (Optr)PSend14270, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14271, (Optr)&t_send1, (Optr)PSend14272, (Optr)&t_method_return);
    Block PBlock14267 = new_Block_with(PArray14268, empty_Array, PThreadedCode14269, 1, PSend14272);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14273 = new_Send((Optr)PSuper14266, SMB_semantics_, 1, (Optr)PBlock14267);
    Array PThreadedCode14265 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14266, (Optr)&t_push_closure, (Optr)PBlock14267, (Optr)&t_send1, (Optr)PSend14273, (Optr)&t_method_return);
    Method PMethod14264 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14265, 1, PSend14273);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14264, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    Super PSuper14276 = new_Super(SMB_initializeBinarySelector, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14278 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14280 = new_Send((Optr)VAR_result_1_0, SMB_asSymbol, 0);
    Array PThreadedCode14279 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14280, (Optr)&t_method_return);
    Block PBlock14277 = new_Block_with(PArray14278, empty_Array, PThreadedCode14279, 1, PSend14280);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14281 = new_Send((Optr)PSuper14276, SMB_semantics_, 1, (Optr)PBlock14277);
    Array PThreadedCode14275 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14276, (Optr)&t_push_closure, (Optr)PBlock14277, (Optr)&t_send1, (Optr)PSend14281, (Optr)&t_method_return);
    Method PMethod14274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14275, 1, PSend14281);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod14274, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_createReference_() {
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    Variable VAR_path_0_0 = new_Variable_named(L"path", 0);
    Array PArray14283 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14284 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14287 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14289 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14290 = new_Send((Optr)PSend14289, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14295 = new_Send((Optr)VAR_path_0_0, SMB_first, 0);
    Assign PAssign14294 = new_Assign((Optr)VAR_name_0_1, (Optr)PSend14295);
    Symbol  SMB_self = new_Symbol(L"self");
    Constant SMB_self_Const = new_Constant((Optr)SMB_self);
    // =. 
    Send PSend14296 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_self_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14300 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14301 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14300);
    Array PThreadedCode14299 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend14300, (Optr)&t_send1, (Optr)PSend14301, (Optr)&t_block_return);
    Block PBlock14298 = new_Block_with(empty_Array, empty_Array, PThreadedCode14299, 1, PSend14301);
    // ifTrue:. 
    Send PSend14297 = new_Send((Optr)PSend14296, SMB_ifTrue_, 1, (Optr)PBlock14298);
    Symbol  SMB_super = new_Symbol(L"super");
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    // =. 
    Send PSend14302 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_super_Const);
    // new. 
    Send PSend14306 = new_Send((Optr)ASTSuper_classReference, SMB_new, 0);
    // escape:. 
    Send PSend14307 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14306);
    Array PThreadedCode14305 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send0, (Optr)PSend14306, (Optr)&t_send1, (Optr)PSend14307, (Optr)&t_block_return);
    Block PBlock14304 = new_Block_with(empty_Array, empty_Array, PThreadedCode14305, 1, PSend14307);
    // ifTrue:. 
    Send PSend14303 = new_Send((Optr)PSend14302, SMB_ifTrue_, 1, (Optr)PBlock14304);
    // new. 
    Send PSend14308 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14309 = new_Send((Optr)PSend14308, SMB_name_, 1, (Optr)VAR_name_0_1);
    // escape:. 
    Send PSend14310 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14309);
    Array PThreadedCode14293 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push1, (Optr)PAssign14294, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14295, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_self, (Optr)&t_send1, (Optr)PSend14296, (Optr)&t_send_ifTrue_, (Optr)PSend14297, (Optr)PBlock14298, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_send1, (Optr)PSend14302, (Optr)&t_send_ifTrue_, (Optr)PSend14303, (Optr)PBlock14304, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14308, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_send1, (Optr)PSend14309, (Optr)&t_send1, (Optr)PSend14310, (Optr)&t_block_return);
    Block PBlock14292 = new_Block_with(empty_Array, empty_Array, PThreadedCode14293, 4, PAssign14294, PSend14297, PSend14303, PSend14310);
    // ifTrue:. 
    Send PSend14291 = new_Send((Optr)PSend14290, SMB_ifTrue_, 1, (Optr)PBlock14292);
    // new. 
    Send PSend14311 = new_Send((Optr)ASTPath_classReference, SMB_new, 0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend14312 = new_Send((Optr)PSend14311, SMB_path_, 1, (Optr)VAR_path_0_0);
    Array PThreadedCode14288 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14289, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14290, (Optr)&t_send_ifTrue_, (Optr)PSend14291, (Optr)PBlock14292, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)ASTPath_classReference, (Optr)&t_send0, (Optr)PSend14311, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send1, (Optr)PSend14312, (Optr)&t_method_return);
    Block PBlock14286 = new_Block_with(PArray14287, empty_Array, PThreadedCode14288, 2, PSend14291, PSend14312);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14313 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14286);
    Array PThreadedCode14285 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14286, (Optr)&t_send1, (Optr)PSend14313, (Optr)&t_method_return);
    Method PMethod14282 = new_Method_with(PArray14283, PArray14284, empty_Array, PThreadedCode14285, 1, PSend14313);
    
    MethodClosure MC_SMB_createReference_ = new_MethodClosure((Method)PMethod14282, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createReference_, MC_SMB_createReference_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14316 = new_Super(SMB_initialize, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend14319 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14318 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14319);
    Assign PAssign14317 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14318);
    Array PThreadedCode14315 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14316, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14317, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14319, (Optr)&t_send1, (Optr)PSend14318, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14314 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14315, 3, PSuper14316, PAssign14317, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14314, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    Super PSuper14322 = new_Super(SMB_initializeStringConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14324 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14326 = new_Send((Optr)ASTString_classReference, SMB_new, 0);
    Symbol SMB_string_ = new_Symbol(L"string:");
    // string:. 
    Send PSend14327 = new_Send((Optr)PSend14326, SMB_string_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14325 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTString_classReference, (Optr)&t_send0, (Optr)PSend14326, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14327, (Optr)&t_method_return);
    Block PBlock14323 = new_Block_with(PArray14324, empty_Array, PThreadedCode14325, 1, PSend14327);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14328 = new_Send((Optr)PSuper14322, SMB_semantics_, 1, (Optr)PBlock14323);
    Array PThreadedCode14321 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14322, (Optr)&t_push_closure, (Optr)PBlock14323, (Optr)&t_send1, (Optr)PSend14328, (Optr)&t_method_return);
    Method PMethod14320 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14321, 1, PSend14328);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod14320, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    Super PSuper14331 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14333 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14335 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14336 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14337 = new_Send((Optr)PSend14335, SMB_receiver_, 1, (Optr)PSend14336);
    Array PThreadedCode14334 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14335, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14336, (Optr)&t_send1, (Optr)PSend14337, (Optr)&t_method_return);
    Block PBlock14332 = new_Block_with(PArray14333, empty_Array, PThreadedCode14334, 1, PSend14337);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14338 = new_Send((Optr)PSuper14331, SMB_semantics_, 1, (Optr)PBlock14332);
    Array PThreadedCode14330 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14331, (Optr)&t_push_closure, (Optr)PBlock14332, (Optr)&t_send1, (Optr)PSend14338, (Optr)&t_method_return);
    Method PMethod14329 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14330, 1, PSend14338);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod14329, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    Variable VAR_optionalAssignment_0_0 = new_Variable_named(L"optionalAssignment", 0);
    Variable VAR_isAssignment_0_1 = new_Variable_named(L"isAssignment", 0);
    Variable VAR_keywords_0_2 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_3 = new_Variable_named(L"arguments", 0);
    Array PArray14340 = new_Array_with(4, (Optr)VAR_optionalAssignment_0_0, (Optr)VAR_isAssignment_0_1, (Optr)VAR_keywords_0_2, (Optr)VAR_arguments_0_3);
    Super PSuper14342 = new_Super(SMB_initializeBracketIndexExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14344 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14347 = new_Send((Optr)VAR_parts_1_0, SMB_second, 0);
    Assign PAssign14346 = new_Assign((Optr)VAR_optionalAssignment_0_0, (Optr)PSend14347);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend14350 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend14349 = new_Send((Optr)PSend14350, SMB__pequals_, 1, (Optr)PEGSucceededOptionalResult_classReference);
    Assign PAssign14348 = new_Assign((Optr)VAR_isAssignment_0_1, (Optr)PSend14349);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol  SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_at__Const = new_Constant((Optr)SMB_at_);
    // with:. 
    Send PSend14355 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14354 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14355, (Optr)&t_block_return);
    Block PBlock14353 = new_Block_with(empty_Array, empty_Array, PThreadedCode14354, 1, PSend14355);
    Symbol  SMB_put_ = new_Symbol(L"put:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_put__Const = new_Constant((Optr)SMB_put_);
    // with:with:. 
    Send PSend14358 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_at__Const, (Optr)SMB_put__Const);
    Array PThreadedCode14357 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_push1, (Optr)SMB_put_, (Optr)&t_send2, (Optr)PSend14358, (Optr)&t_block_return);
    Block PBlock14356 = new_Block_with(empty_Array, empty_Array, PThreadedCode14357, 1, PSend14358);
    // ifFalse:ifTrue:. 
    Send PSend14352 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14353, (Optr)PBlock14356);
    Assign PAssign14351 = new_Assign((Optr)VAR_keywords_0_2, (Optr)PSend14352);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14363 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    // with:. 
    Send PSend14364 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend14363);
    Array PThreadedCode14362 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14363, (Optr)&t_send1, (Optr)PSend14364, (Optr)&t_block_return);
    Block PBlock14361 = new_Block_with(empty_Array, empty_Array, PThreadedCode14362, 1, PSend14364);
    // first. 
    Send PSend14367 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_result = new_Symbol(L"result");
    // result. 
    Send PSend14368 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_result, 0);
    // with:with:. 
    Send PSend14369 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend14367, (Optr)PSend14368);
    Array PThreadedCode14366 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14367, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14368, (Optr)&t_send2, (Optr)PSend14369, (Optr)&t_block_return);
    Block PBlock14365 = new_Block_with(empty_Array, empty_Array, PThreadedCode14366, 1, PSend14369);
    // ifFalse:ifTrue:. 
    Send PSend14360 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14361, (Optr)PBlock14365);
    Assign PAssign14359 = new_Assign((Optr)VAR_arguments_0_3, (Optr)PSend14360);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14371 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14373 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_2);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14374 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_3);
    Array PThreadedCode14372 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_2, (Optr)&t_send1, (Optr)PSend14373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_3, (Optr)&t_send1, (Optr)PSend14374, (Optr)&t_method_return);
    Block PBlock14370 = new_Block_with(PArray14371, empty_Array, PThreadedCode14372, 2, PSend14373, PSend14374);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14375 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14376 = new_Send((Optr)PBlock14370, SMB_value_, 1, (Optr)PSend14375);
    Array PThreadedCode14345 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14346, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14347, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14348, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14350, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14351, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14352, (Optr)PBlock14353, (Optr)PBlock14356, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14359, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14360, (Optr)PBlock14361, (Optr)PBlock14365, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14370, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14375, (Optr)&t_send1, (Optr)PSend14376, (Optr)&t_method_return);
    Block PBlock14343 = new_Block_with(PArray14344, empty_Array, PThreadedCode14345, 5, PAssign14346, PAssign14348, PAssign14351, PAssign14359, PSend14376);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14377 = new_Send((Optr)PSuper14342, SMB_semantics_, 1, (Optr)PBlock14343);
    Array PThreadedCode14341 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14342, (Optr)&t_push_closure, (Optr)PBlock14343, (Optr)&t_send1, (Optr)PSend14377, (Optr)&t_method_return);
    Method PMethod14339 = new_Method_with(empty_Array, PArray14340, empty_Array, PThreadedCode14341, 1, PSend14377);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod14339, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Super PSuper14380 = new_Super(SMB_initializeBinaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14382 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14383 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14386 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14385 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14386);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14387 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14389 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14394 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14396 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14397 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14398 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14397);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend14399 = new_Send((Optr)VAR_i_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend14400 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14399);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14401 = new_Send((Optr)VAR__receiver__3_0, SMB_argument_, 1, (Optr)PSend14400);
    Array PThreadedCode14395 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14396, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14397, (Optr)&t_send1, (Optr)PSend14398, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14399, (Optr)&t_send1, (Optr)PSend14400, (Optr)&t_send1, (Optr)PSend14401, (Optr)&t_method_return);
    Block PBlock14393 = new_Block_with(PArray14394, empty_Array, PThreadedCode14395, 3, PSend14396, PSend14398, PSend14401);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14402 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14392 = new_Send((Optr)PBlock14393, SMB_value_, 1, (Optr)PSend14402);
    Assign PAssign14391 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14392);
    Array PThreadedCode14390 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14391, (Optr)&t_push_closure, (Optr)PBlock14393, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14402, (Optr)&t_send1, (Optr)PSend14392, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14388 = new_Block_with(PArray14389, empty_Array, PThreadedCode14390, 1, PAssign14391);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend14403 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14387, (Optr)int_2_Const, (Optr)PBlock14388);
    Array PThreadedCode14384 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14385, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14387, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14388, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14403, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14381 = new_Block_with(PArray14382, PArray14383, PThreadedCode14384, 3, PAssign14385, PSend14403, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14404 = new_Send((Optr)PSuper14380, SMB_semantics_, 1, (Optr)PBlock14381);
    Array PThreadedCode14379 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14380, (Optr)&t_push_closure, (Optr)PBlock14381, (Optr)&t_send1, (Optr)PSend14404, (Optr)&t_method_return);
    Method PMethod14378 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14379, 1, PSend14404);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14378, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    Super PSuper14407 = new_Super(SMB_initializeScopedExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14409 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_scoped = new_Symbol(L"scoped");
    // scoped. 
    Send PSend14411 = new_Send((Optr)VAR_result_1_0, SMB_scoped, 0);
    Array PThreadedCode14410 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14411, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_method_return);
    Block PBlock14408 = new_Block_with(PArray14409, empty_Array, PThreadedCode14410, 2, PSend14411, VAR_result_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14412 = new_Send((Optr)PSuper14407, SMB_semantics_, 1, (Optr)PBlock14408);
    Array PThreadedCode14406 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14407, (Optr)&t_push_closure, (Optr)PBlock14408, (Optr)&t_send1, (Optr)PSend14412, (Optr)&t_method_return);
    Method PMethod14405 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14406, 1, PSend14412);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod14405, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    Super PSuper14415 = new_Super(SMB_initializeCharacterConstant, 0);
    Variable VAR_char_1_0 = new_Variable_named(L"char", 1);
    Array PArray14417 = new_Array_with(1, (Optr)VAR_char_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14419 = new_Send((Optr)ASTCharacter_classReference, SMB_new, 0);
    Symbol SMB_char_ = new_Symbol(L"char:");
    // char:. 
    Send PSend14420 = new_Send((Optr)PSend14419, SMB_char_, 1, (Optr)VAR_char_1_0);
    Array PThreadedCode14418 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTCharacter_classReference, (Optr)&t_send0, (Optr)PSend14419, (Optr)&t_push_variable, (Optr)VAR_char_1_0, (Optr)&t_send1, (Optr)PSend14420, (Optr)&t_method_return);
    Block PBlock14416 = new_Block_with(PArray14417, empty_Array, PThreadedCode14418, 1, PSend14420);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14421 = new_Send((Optr)PSuper14415, SMB_semantics_, 1, (Optr)PBlock14416);
    Array PThreadedCode14414 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14415, (Optr)&t_push_closure, (Optr)PBlock14416, (Optr)&t_send1, (Optr)PSend14421, (Optr)&t_method_return);
    Method PMethod14413 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14414, 1, PSend14421);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod14413, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    Super PSuper14424 = new_Super(SMB_initializeNumberFormat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14426 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14428 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14427 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14428, (Optr)&t_method_return);
    Block PBlock14425 = new_Block_with(PArray14426, empty_Array, PThreadedCode14427, 1, PSend14428);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14429 = new_Send((Optr)PSuper14424, SMB_semantics_, 1, (Optr)PBlock14425);
    Array PThreadedCode14423 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14424, (Optr)&t_push_closure, (Optr)PBlock14425, (Optr)&t_send1, (Optr)PSend14429, (Optr)&t_method_return);
    Method PMethod14422 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14423, 1, PSend14429);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod14422, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    Super PSuper14432 = new_Super(SMB_initializeMethod, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14434 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14437 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14439 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend14440 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)PSend14439);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14441 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend14442 = new_Send((Optr)VAR__receiver__2_0, SMB_annotations_, 1, (Optr)PSend14441);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14443 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14446 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14445 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14446, (Optr)&t_block_return);
    Block PBlock14444 = new_Block_with(empty_Array, empty_Array, PThreadedCode14445, 1, PSend14446);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14447 = new_Send((Optr)PSend14443, SMB_resultIfFailed_, 1, (Optr)PBlock14444);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14448 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14447);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend14449 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14450 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14449);
    Array PThreadedCode14438 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14439, (Optr)&t_send1, (Optr)PSend14440, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14441, (Optr)&t_send1, (Optr)PSend14442, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14443, (Optr)&t_push_closure, (Optr)PBlock14444, (Optr)&t_send1, (Optr)PSend14447, (Optr)&t_send1, (Optr)PSend14448, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend14449, (Optr)&t_send1, (Optr)PSend14450, (Optr)&t_method_return);
    Block PBlock14436 = new_Block_with(PArray14437, empty_Array, PThreadedCode14438, 4, PSend14440, PSend14442, PSend14448, PSend14450);
    // new. 
    Send PSend14451 = new_Send((Optr)ASTMethod_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14452 = new_Send((Optr)PBlock14436, SMB_value_, 1, (Optr)PSend14451);
    Array PThreadedCode14435 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14436, (Optr)&t_push_class_reference, (Optr)ASTMethod_classReference, (Optr)&t_send0, (Optr)PSend14451, (Optr)&t_send1, (Optr)PSend14452, (Optr)&t_method_return);
    Block PBlock14433 = new_Block_with(PArray14434, empty_Array, PThreadedCode14435, 1, PSend14452);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14453 = new_Send((Optr)PSuper14432, SMB_semantics_, 1, (Optr)PBlock14433);
    Array PThreadedCode14431 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14432, (Optr)&t_push_closure, (Optr)PBlock14433, (Optr)&t_send1, (Optr)PSend14453, (Optr)&t_method_return);
    Method PMethod14430 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14431, 1, PSend14453);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod14430, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    Super PSuper14456 = new_Super(SMB_initializeUnaryMessageDefinition, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14458 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14460 = new_Send((Optr)ASTUnaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14461 = new_Send((Optr)PSend14460, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14459 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14460, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14461, (Optr)&t_method_return);
    Block PBlock14457 = new_Block_with(PArray14458, empty_Array, PThreadedCode14459, 1, PSend14461);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14462 = new_Send((Optr)PSuper14456, SMB_semantics_, 1, (Optr)PBlock14457);
    Array PThreadedCode14455 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14456, (Optr)&t_push_closure, (Optr)PBlock14457, (Optr)&t_send1, (Optr)PSend14462, (Optr)&t_method_return);
    Method PMethod14454 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14455, 1, PSend14462);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod14454, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14464 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14466 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14468 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14472 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14471 = new_Send((Optr)PSend14472, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14470 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14471);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14474 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14473 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14474);
    // new:. 
    Send PSend14476 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14475 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14476);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14478 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14480 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14481 = new_Send((Optr)PSend14480, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14482 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14481);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14483 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14482);
    // *. 
    Send PSend14484 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14485 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14484);
    // at:put:. 
    Send PSend14486 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14485);
    Array PThreadedCode14479 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14480, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14481, (Optr)&t_send1, (Optr)PSend14482, (Optr)&t_send2, (Optr)PSend14483, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14484, (Optr)&t_send1, (Optr)PSend14485, (Optr)&t_send2, (Optr)PSend14486, (Optr)&t_method_return);
    Block PBlock14477 = new_Block_with(PArray14478, empty_Array, PThreadedCode14479, 2, PSend14483, PSend14486);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14487 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14477);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14489 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14491 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14492 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14490 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14491, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14492, (Optr)&t_method_return);
    Block PBlock14488 = new_Block_with(PArray14489, empty_Array, PThreadedCode14490, 2, PSend14491, PSend14492);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14493 = new_Send((Optr)ASTKeywordAnnotation_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14494 = new_Send((Optr)PBlock14488, SMB_value_, 1, (Optr)PSend14493);
    Array PThreadedCode14469 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14470, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14472, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14471, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14473, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14474, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14475, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14476, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14477, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14487, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14488, (Optr)&t_push_class_reference, (Optr)ASTKeywordAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14493, (Optr)&t_send1, (Optr)PSend14494, (Optr)&t_method_return);
    Block PBlock14467 = new_Block_with(PArray14468, empty_Array, PThreadedCode14469, 5, PAssign14470, PAssign14473, PAssign14475, PSend14487, PSend14494);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14495 = new_Send((Optr)PSuper14466, SMB_semantics_, 1, (Optr)PBlock14467);
    Array PThreadedCode14465 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14466, (Optr)&t_push_closure, (Optr)PBlock14467, (Optr)&t_send1, (Optr)PSend14495, (Optr)&t_method_return);
    Method PMethod14463 = new_Method_with(empty_Array, PArray14464, empty_Array, PThreadedCode14465, 1, PSend14495);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14463, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    Super PSuper14498 = new_Super(SMB_initializeKeyword, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14500 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14502 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14501 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14502, (Optr)&t_method_return);
    Block PBlock14499 = new_Block_with(PArray14500, empty_Array, PThreadedCode14501, 1, PSend14502);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14503 = new_Send((Optr)PSuper14498, SMB_semantics_, 1, (Optr)PBlock14499);
    Array PThreadedCode14497 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14498, (Optr)&t_push_closure, (Optr)PBlock14499, (Optr)&t_send1, (Optr)PSend14503, (Optr)&t_method_return);
    Method PMethod14496 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14497, 1, PSend14503);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod14496, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Variable VAR_vars_0_0 = new_Variable_named(L"vars", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray14505 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14507 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14509 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14512 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14511 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14512);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14514 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign14513 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14514);
    Variable VAR_variables_2_0 = new_Variable_named(L"variables", 2);
    Array PArray14516 = new_Array_with(1, (Optr)VAR_variables_2_0);
    Variable VAR_variable_3_0 = new_Variable_named(L"variable", 3);
    Array PArray14519 = new_Array_with(1, (Optr)VAR_variable_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray14524 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14526 = new_Send((Optr)VAR__receiver__4_0, SMB_expression_, 1, (Optr)VAR_expression_0_1);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend14527 = new_Send((Optr)VAR__receiver__4_0, SMB_variable_, 1, (Optr)VAR_variable_3_0);
    Array PThreadedCode14525 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend14526, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_variable_3_0, (Optr)&t_send1, (Optr)PSend14527, (Optr)&t_method_return);
    Block PBlock14523 = new_Block_with(PArray14524, empty_Array, PThreadedCode14525, 2, PSend14526, PSend14527);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14528 = new_Send((Optr)ASTAssignmentExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14522 = new_Send((Optr)PBlock14523, SMB_value_, 1, (Optr)PSend14528);
    Assign PAssign14521 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14522);
    Array PThreadedCode14520 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14521, (Optr)&t_push_closure, (Optr)PBlock14523, (Optr)&t_push_class_reference, (Optr)ASTAssignmentExpression_classReference, (Optr)&t_send0, (Optr)PSend14528, (Optr)&t_send1, (Optr)PSend14522, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14518 = new_Block_with(PArray14519, empty_Array, PThreadedCode14520, 1, PAssign14521);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend14529 = new_Send((Optr)VAR_variables_2_0, SMB_reverseDo_, 1, (Optr)PBlock14518);
    Array PThreadedCode14517 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_variables_2_0, (Optr)&t_push_closure, (Optr)PBlock14518, (Optr)&t_send1, (Optr)PSend14529, (Optr)&t_method_return);
    Block PBlock14515 = new_Block_with(PArray14516, empty_Array, PThreadedCode14517, 1, PSend14529);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14530 = new_Send((Optr)VAR_vars_0_0, SMB_ifMatched_, 1, (Optr)PBlock14515);
    Array PThreadedCode14510 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign14511, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14512, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14513, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14514, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_vars_0_0, (Optr)&t_push_closure, (Optr)PBlock14515, (Optr)&t_send1, (Optr)PSend14530, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_method_return);
    Block PBlock14508 = new_Block_with(PArray14509, empty_Array, PThreadedCode14510, 4, PAssign14511, PAssign14513, PSend14530, VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14531 = new_Send((Optr)PSuper14507, SMB_semantics_, 1, (Optr)PBlock14508);
    Array PThreadedCode14506 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14507, (Optr)&t_push_closure, (Optr)PBlock14508, (Optr)&t_send1, (Optr)PSend14531, (Optr)&t_method_return);
    Method PMethod14504 = new_Method_with(empty_Array, PArray14505, empty_Array, PThreadedCode14506, 1, PSend14531);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14504, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    Super PSuper14534 = new_Super(SMB_initializeFloat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14536 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14539 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14541 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_high_ = new_Symbol(L"high:");
    // high:. 
    Send PSend14542 = new_Send((Optr)VAR__receiver__2_0, SMB_high_, 1, (Optr)PSend14541);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14543 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Symbol SMB_low_ = new_Symbol(L"low:");
    // low:. 
    Send PSend14544 = new_Send((Optr)VAR__receiver__2_0, SMB_low_, 1, (Optr)PSend14543);
    Array PThreadedCode14540 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14541, (Optr)&t_send1, (Optr)PSend14542, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14543, (Optr)&t_send1, (Optr)PSend14544, (Optr)&t_method_return);
    Block PBlock14538 = new_Block_with(PArray14539, empty_Array, PThreadedCode14540, 2, PSend14542, PSend14544);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14545 = new_Send((Optr)ASTFloat_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14546 = new_Send((Optr)PBlock14538, SMB_value_, 1, (Optr)PSend14545);
    Array PThreadedCode14537 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14538, (Optr)&t_push_class_reference, (Optr)ASTFloat_classReference, (Optr)&t_send0, (Optr)PSend14545, (Optr)&t_send1, (Optr)PSend14546, (Optr)&t_method_return);
    Block PBlock14535 = new_Block_with(PArray14536, empty_Array, PThreadedCode14537, 1, PSend14546);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14547 = new_Send((Optr)PSuper14534, SMB_semantics_, 1, (Optr)PBlock14535);
    Array PThreadedCode14533 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14534, (Optr)&t_push_closure, (Optr)PBlock14535, (Optr)&t_send1, (Optr)PSend14547, (Optr)&t_method_return);
    Method PMethod14532 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14533, 1, PSend14547);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14532, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    Super PSuper14550 = new_Super(SMB_initializeBlockArguments, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14552 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR_variable_2_0 = new_Variable_named(L"variable", 2);
    Array PArray14555 = new_Array_with(1, (Optr)VAR_variable_2_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14557 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_variable_2_0);
    Array PThreadedCode14556 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_variable_2_0, (Optr)&t_send1, (Optr)PSend14557, (Optr)&t_method_return);
    Block PBlock14554 = new_Block_with(PArray14555, empty_Array, PThreadedCode14556, 1, PSend14557);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend14558 = new_Send((Optr)VAR_result_1_0, SMB_collect_, 1, (Optr)PBlock14554);
    Array PThreadedCode14553 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_closure, (Optr)PBlock14554, (Optr)&t_send1, (Optr)PSend14558, (Optr)&t_method_return);
    Block PBlock14551 = new_Block_with(PArray14552, empty_Array, PThreadedCode14553, 1, PSend14558);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14559 = new_Send((Optr)PSuper14550, SMB_semantics_, 1, (Optr)PBlock14551);
    Array PThreadedCode14549 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14550, (Optr)&t_push_closure, (Optr)PBlock14551, (Optr)&t_send1, (Optr)PSend14559, (Optr)&t_method_return);
    Method PMethod14548 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14549, 1, PSend14559);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14548, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    Super PSuper14562 = new_Super(SMB_initializeBraceExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14564 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14566 = new_Send((Optr)ASTBraceExpression_classReference, SMB_new, 0);
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    // expressions:. 
    Send PSend14567 = new_Send((Optr)PSend14566, SMB_expressions_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14565 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTBraceExpression_classReference, (Optr)&t_send0, (Optr)PSend14566, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14567, (Optr)&t_method_return);
    Block PBlock14563 = new_Block_with(PArray14564, empty_Array, PThreadedCode14565, 1, PSend14567);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14568 = new_Send((Optr)PSuper14562, SMB_semantics_, 1, (Optr)PBlock14563);
    Array PThreadedCode14561 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14562, (Optr)&t_push_closure, (Optr)PBlock14563, (Optr)&t_send1, (Optr)PSend14568, (Optr)&t_method_return);
    Method PMethod14560 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14561, 1, PSend14568);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14560, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    Super PSuper14571 = new_Super(SMB_initializeBinaryMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14573 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14576 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14578 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14579 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14578);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14580 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14581 = new_Send((Optr)VAR__receiver__2_0, SMB_argument_, 1, (Optr)PSend14580);
    Array PThreadedCode14577 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14578, (Optr)&t_send1, (Optr)PSend14579, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14580, (Optr)&t_send1, (Optr)PSend14581, (Optr)&t_method_return);
    Block PBlock14575 = new_Block_with(PArray14576, empty_Array, PThreadedCode14577, 2, PSend14579, PSend14581);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14582 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14583 = new_Send((Optr)PBlock14575, SMB_value_, 1, (Optr)PSend14582);
    Array PThreadedCode14574 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14575, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14582, (Optr)&t_send1, (Optr)PSend14583, (Optr)&t_method_return);
    Block PBlock14572 = new_Block_with(PArray14573, empty_Array, PThreadedCode14574, 1, PSend14583);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14584 = new_Send((Optr)PSuper14571, SMB_semantics_, 1, (Optr)PBlock14572);
    Array PThreadedCode14570 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14571, (Optr)&t_push_closure, (Optr)PBlock14572, (Optr)&t_send1, (Optr)PSend14584, (Optr)&t_method_return);
    Method PMethod14569 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14570, 1, PSend14584);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14569, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    Super PSuper14587 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14589 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14591 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend14592 = new_Send((Optr)PSend14591, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_14596 = new_String(L"");
    Array PThreadedCode14595 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_14596, (Optr)&t_block_return);
    Constant string_14596_Const = new_Constant((Optr)string_14596);
    Block PBlock14594 = new_Block_with(empty_Array, empty_Array, PThreadedCode14595, 1, string_14596_Const);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14599 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend14600 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_with_, 1, (Optr)PSend14599);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Variable VAR_i_2_1 = new_Variable_named(L"i", 2);
    Array PArray14602 = new_Array_with(2, (Optr)VAR_s_2_0, (Optr)VAR_i_2_1);
    String string_14604 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_14604_Const = new_Constant((Optr)string_14604);
    // <<. 
    Send PSend14605 = new_Send((Optr)VAR_s_2_0, SMB__shiftLeft_, 1, (Optr)string_14604_Const);
    // <<. 
    Send PSend14606 = new_Send((Optr)PSend14605, SMB__shiftLeft_, 1, (Optr)VAR_i_2_1);
    Array PThreadedCode14603 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)string_14604, (Optr)&t_send1, (Optr)PSend14605, (Optr)&t_push_variable, (Optr)VAR_i_2_1, (Optr)&t_send1, (Optr)PSend14606, (Optr)&t_method_return);
    Block PBlock14601 = new_Block_with(PArray14602, empty_Array, PThreadedCode14603, 1, PSend14606);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14607 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14600, (Optr)PBlock14601);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14608 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14598 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14599, (Optr)&t_send1, (Optr)PSend14600, (Optr)&t_push_closure, (Optr)PBlock14601, (Optr)&t_send2, (Optr)PSend14607, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14608, (Optr)&t_block_return);
    Block PBlock14597 = new_Block_with(empty_Array, empty_Array, PThreadedCode14598, 2, PSend14607, PSend14608);
    // ifTrue:ifFalse:. 
    Send PSend14593 = new_Send((Optr)PSend14592, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock14594, (Optr)PBlock14597);
    Array PThreadedCode14590 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14591, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend14592, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend14593, (Optr)PBlock14594, (Optr)PBlock14597, (Optr)&t_method_return);
    Block PBlock14588 = new_Block_with(PArray14589, empty_Array, PThreadedCode14590, 1, PSend14593);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14609 = new_Send((Optr)PSuper14587, SMB_semantics_, 1, (Optr)PBlock14588);
    Array PThreadedCode14586 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14587, (Optr)&t_push_closure, (Optr)PBlock14588, (Optr)&t_send1, (Optr)PSend14609, (Optr)&t_method_return);
    Method PMethod14585 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14586, 1, PSend14609);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14585, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_createVariable_() {
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
    Array PArray14611 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14613 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14614 = new_Send((Optr)PSend14613, SMB_name_, 1, (Optr)VAR_variable_0_0);
    Array PThreadedCode14612 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14613, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send1, (Optr)PSend14614, (Optr)&t_method_return);
    Method PMethod14610 = new_Method_with(PArray14611, empty_Array, empty_Array, PThreadedCode14612, 1, PSend14614);
    
    MethodClosure MC_SMB_createVariable_ = new_MethodClosure((Method)PMethod14610, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createVariable_, MC_SMB_createVariable_);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    Super PSuper14617 = new_Super(SMB_initializeUnaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14619 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14620 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14623 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14622 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14623);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14624 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14626 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14631 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14633 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14634 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14635 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14634);
    Array PThreadedCode14632 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14633, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14634, (Optr)&t_send1, (Optr)PSend14635, (Optr)&t_method_return);
    Block PBlock14630 = new_Block_with(PArray14631, empty_Array, PThreadedCode14632, 2, PSend14633, PSend14635);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14636 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14629 = new_Send((Optr)PBlock14630, SMB_value_, 1, (Optr)PSend14636);
    Assign PAssign14628 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14629);
    Array PThreadedCode14627 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14628, (Optr)&t_push_closure, (Optr)PBlock14630, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14636, (Optr)&t_send1, (Optr)PSend14629, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14625 = new_Block_with(PArray14626, empty_Array, PThreadedCode14627, 1, PAssign14628);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14637 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14624, (Optr)PBlock14625);
    Array PThreadedCode14621 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14622, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14623, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14624, (Optr)&t_push_closure, (Optr)PBlock14625, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14637, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14618 = new_Block_with(PArray14619, PArray14620, PThreadedCode14621, 3, PAssign14622, PSend14637, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14638 = new_Send((Optr)PSuper14617, SMB_semantics_, 1, (Optr)PBlock14618);
    Array PThreadedCode14616 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14617, (Optr)&t_push_closure, (Optr)PBlock14618, (Optr)&t_send1, (Optr)PSend14638, (Optr)&t_method_return);
    Method PMethod14615 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14616, 1, PSend14638);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14615, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    Super PSuper14641 = new_Super(SMB_initializeAnnotations, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14643 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14645 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14644 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14645, (Optr)&t_method_return);
    Block PBlock14642 = new_Block_with(PArray14643, empty_Array, PThreadedCode14644, 1, PSend14645);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14646 = new_Send((Optr)PSuper14641, SMB_semantics_, 1, (Optr)PBlock14642);
    Array PThreadedCode14640 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14641, (Optr)&t_push_closure, (Optr)PBlock14642, (Optr)&t_send1, (Optr)PSend14646, (Optr)&t_method_return);
    Method PMethod14639 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14640, 1, PSend14646);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14639, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    Super PSuper14649 = new_Super(SMB_initializePrimaryVariable, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14651 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14653 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    // createReference:. 
    Send PSend14654 = new_Send((Optr)self, SMB_createReference_, 1, (Optr)PSend14653);
    Array PThreadedCode14652 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14653, (Optr)&t_send1, (Optr)PSend14654, (Optr)&t_method_return);
    Block PBlock14650 = new_Block_with(PArray14651, empty_Array, PThreadedCode14652, 1, PSend14654);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14655 = new_Send((Optr)PSuper14649, SMB_semantics_, 1, (Optr)PBlock14650);
    Array PThreadedCode14648 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14649, (Optr)&t_push_closure, (Optr)PBlock14650, (Optr)&t_send1, (Optr)PSend14655, (Optr)&t_method_return);
    Method PMethod14647 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14648, 1, PSend14655);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod14647, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Super PSuper14658 = new_Super(SMB_initializeStringSegment, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14660 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14662 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14661 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14662, (Optr)&t_method_return);
    Block PBlock14659 = new_Block_with(PArray14660, empty_Array, PThreadedCode14661, 1, PSend14662);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14663 = new_Send((Optr)PSuper14658, SMB_semantics_, 1, (Optr)PBlock14659);
    Array PThreadedCode14657 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14658, (Optr)&t_push_closure, (Optr)PBlock14659, (Optr)&t_send1, (Optr)PSend14663, (Optr)&t_method_return);
    Method PMethod14656 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14657, 1, PSend14663);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14656, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_parameters_0_2 = new_Variable_named(L"parameters", 0);
    Array PArray14665 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14667 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14669 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14673 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14672 = new_Send((Optr)PSend14673, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14671 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14672);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14675 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14674 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14675);
    // new:. 
    Send PSend14677 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14676 = new_Assign((Optr)VAR_parameters_0_2, (Optr)PSend14677);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14679 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14681 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14682 = new_Send((Optr)PSend14681, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14683 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14682);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14684 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14683);
    // *. 
    Send PSend14685 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14686 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14685);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14687 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14686);
    // at:put:. 
    Send PSend14688 = new_Send((Optr)VAR_parameters_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14687);
    Array PThreadedCode14680 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14681, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14682, (Optr)&t_send1, (Optr)PSend14683, (Optr)&t_send2, (Optr)PSend14684, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14685, (Optr)&t_send1, (Optr)PSend14686, (Optr)&t_send1, (Optr)PSend14687, (Optr)&t_send2, (Optr)PSend14688, (Optr)&t_method_return);
    Block PBlock14678 = new_Block_with(PArray14679, empty_Array, PThreadedCode14680, 2, PSend14684, PSend14688);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14689 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14678);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14691 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14693 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14694 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)VAR_parameters_0_2);
    Array PThreadedCode14692 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14693, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_send1, (Optr)PSend14694, (Optr)&t_method_return);
    Block PBlock14690 = new_Block_with(PArray14691, empty_Array, PThreadedCode14692, 2, PSend14693, PSend14694);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14695 = new_Send((Optr)ASTKeywordMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14696 = new_Send((Optr)PBlock14690, SMB_value_, 1, (Optr)PSend14695);
    Array PThreadedCode14670 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14671, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14673, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14672, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14674, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14675, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14676, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14677, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14678, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14689, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14690, (Optr)&t_push_class_reference, (Optr)ASTKeywordMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14695, (Optr)&t_send1, (Optr)PSend14696, (Optr)&t_method_return);
    Block PBlock14668 = new_Block_with(PArray14669, empty_Array, PThreadedCode14670, 5, PAssign14671, PAssign14674, PAssign14676, PSend14689, PSend14696);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14697 = new_Send((Optr)PSuper14667, SMB_semantics_, 1, (Optr)PBlock14668);
    Array PThreadedCode14666 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14667, (Optr)&t_push_closure, (Optr)PBlock14668, (Optr)&t_send1, (Optr)PSend14697, (Optr)&t_method_return);
    Method PMethod14664 = new_Method_with(empty_Array, PArray14665, empty_Array, PThreadedCode14666, 1, PSend14697);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod14664, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    Super PSuper14700 = new_Super(SMB_initializeBinaryMessageDefinition, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14702 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14705 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14707 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14708 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14707);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14709 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14710 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14709);
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    // parameter:. 
    Send PSend14711 = new_Send((Optr)VAR__receiver__2_0, SMB_parameter_, 1, (Optr)PSend14710);
    Array PThreadedCode14706 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14707, (Optr)&t_send1, (Optr)PSend14708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14709, (Optr)&t_send1, (Optr)PSend14710, (Optr)&t_send1, (Optr)PSend14711, (Optr)&t_method_return);
    Block PBlock14704 = new_Block_with(PArray14705, empty_Array, PThreadedCode14706, 2, PSend14708, PSend14711);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14712 = new_Send((Optr)ASTBinaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14713 = new_Send((Optr)PBlock14704, SMB_value_, 1, (Optr)PSend14712);
    Array PThreadedCode14703 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14704, (Optr)&t_push_class_reference, (Optr)ASTBinaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14712, (Optr)&t_send1, (Optr)PSend14713, (Optr)&t_method_return);
    Block PBlock14701 = new_Block_with(PArray14702, empty_Array, PThreadedCode14703, 1, PSend14713);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14714 = new_Send((Optr)PSuper14700, SMB_semantics_, 1, (Optr)PBlock14701);
    Array PThreadedCode14699 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14700, (Optr)&t_push_closure, (Optr)PBlock14701, (Optr)&t_send1, (Optr)PSend14714, (Optr)&t_method_return);
    Method PMethod14698 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14699, 1, PSend14714);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14698, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    Super PSuper14717 = new_Super(SMB_initializeReturn, 0);
    Variable VAR_expression_1_0 = new_Variable_named(L"expression", 1);
    Array PArray14719 = new_Array_with(1, (Optr)VAR_expression_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14721 = new_Send((Optr)ASTReturnExpression_classReference, SMB_new, 0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14722 = new_Send((Optr)PSend14721, SMB_expression_, 1, (Optr)VAR_expression_1_0);
    Array PThreadedCode14720 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTReturnExpression_classReference, (Optr)&t_send0, (Optr)PSend14721, (Optr)&t_push_variable, (Optr)VAR_expression_1_0, (Optr)&t_send1, (Optr)PSend14722, (Optr)&t_method_return);
    Block PBlock14718 = new_Block_with(PArray14719, empty_Array, PThreadedCode14720, 1, PSend14722);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14723 = new_Send((Optr)PSuper14717, SMB_semantics_, 1, (Optr)PBlock14718);
    Array PThreadedCode14716 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14717, (Optr)&t_push_closure, (Optr)PBlock14718, (Optr)&t_send1, (Optr)PSend14723, (Optr)&t_method_return);
    Method PMethod14715 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14716, 1, PSend14723);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14715, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    Super PSuper14726 = new_Super(SMB_initializeTemporaries, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14728 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14730 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14729 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14730, (Optr)&t_method_return);
    Block PBlock14727 = new_Block_with(PArray14728, empty_Array, PThreadedCode14729, 1, PSend14730);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14731 = new_Send((Optr)PSuper14726, SMB_semantics_, 1, (Optr)PBlock14727);
    Array PThreadedCode14725 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14726, (Optr)&t_push_closure, (Optr)PBlock14727, (Optr)&t_send1, (Optr)PSend14731, (Optr)&t_method_return);
    Method PMethod14724 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14725, 1, PSend14731);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod14724, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14733 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14735 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14737 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14741 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14740 = new_Send((Optr)PSend14741, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14739 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14740);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14743 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14742 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14743);
    // new:. 
    Send PSend14745 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14744 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14745);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14747 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14749 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14750 = new_Send((Optr)PSend14749, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14751 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14750);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14752 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14751);
    // *. 
    Send PSend14753 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14754 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14753);
    // at:put:. 
    Send PSend14755 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14754);
    Array PThreadedCode14748 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14749, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14750, (Optr)&t_send1, (Optr)PSend14751, (Optr)&t_send2, (Optr)PSend14752, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14753, (Optr)&t_send1, (Optr)PSend14754, (Optr)&t_send2, (Optr)PSend14755, (Optr)&t_method_return);
    Block PBlock14746 = new_Block_with(PArray14747, empty_Array, PThreadedCode14748, 2, PSend14752, PSend14755);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14756 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14746);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14758 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14760 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14761 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14759 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14760, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14761, (Optr)&t_method_return);
    Block PBlock14757 = new_Block_with(PArray14758, empty_Array, PThreadedCode14759, 2, PSend14760, PSend14761);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14762 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14763 = new_Send((Optr)PBlock14757, SMB_value_, 1, (Optr)PSend14762);
    Array PThreadedCode14738 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14739, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14741, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14740, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14742, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14743, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14744, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14745, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14746, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14756, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14757, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14762, (Optr)&t_send1, (Optr)PSend14763, (Optr)&t_method_return);
    Block PBlock14736 = new_Block_with(PArray14737, empty_Array, PThreadedCode14738, 5, PAssign14739, PAssign14742, PAssign14744, PSend14756, PSend14763);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14764 = new_Send((Optr)PSuper14735, SMB_semantics_, 1, (Optr)PBlock14736);
    Array PThreadedCode14734 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14735, (Optr)&t_push_closure, (Optr)PBlock14736, (Optr)&t_send1, (Optr)PSend14764, (Optr)&t_method_return);
    Method PMethod14732 = new_Method_with(empty_Array, PArray14733, empty_Array, PThreadedCode14734, 1, PSend14764);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod14732, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    Super PSuper14767 = new_Super(SMB_initializeSymbolKeywords, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14769 = new_Array_with(1, (Optr)VAR_result_1_0);
    String string_14771 = new_String(L"");
    Symbol SMB_on_ = new_Symbol(L"on:");
    Constant string_14771_Const = new_Constant((Optr)string_14771);
    // on:. 
    Send PSend14772 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_on_, 1, (Optr)string_14771_Const);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Variable VAR_e_2_1 = new_Variable_named(L"e", 2);
    Array PArray14774 = new_Array_with(2, (Optr)VAR_c_2_0, (Optr)VAR_e_2_1);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend14776 = new_Send((Optr)VAR_c_2_0, SMB__shiftLeft_, 1, (Optr)VAR_e_2_1);
    Array PThreadedCode14775 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_push_variable, (Optr)VAR_e_2_1, (Optr)&t_send1, (Optr)PSend14776, (Optr)&t_method_return);
    Block PBlock14773 = new_Block_with(PArray14774, empty_Array, PThreadedCode14775, 1, PSend14776);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14777 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14772, (Optr)PBlock14773);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14778 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14770 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push1, (Optr)string_14771, (Optr)&t_send1, (Optr)PSend14772, (Optr)&t_push_closure, (Optr)PBlock14773, (Optr)&t_send2, (Optr)PSend14777, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14778, (Optr)&t_method_return);
    Block PBlock14768 = new_Block_with(PArray14769, empty_Array, PThreadedCode14770, 2, PSend14777, PSend14778);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14779 = new_Send((Optr)PSuper14767, SMB_semantics_, 1, (Optr)PBlock14768);
    Array PThreadedCode14766 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14767, (Optr)&t_push_closure, (Optr)PBlock14768, (Optr)&t_send1, (Optr)PSend14779, (Optr)&t_method_return);
    Method PMethod14765 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14766, 1, PSend14779);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod14765, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    Super PSuper14782 = new_Super(SMB_initializeAssignmentExpressions, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14784 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14786 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14785 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14786, (Optr)&t_method_return);
    Block PBlock14783 = new_Block_with(PArray14784, empty_Array, PThreadedCode14785, 1, PSend14786);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14787 = new_Send((Optr)PSuper14782, SMB_semantics_, 1, (Optr)PBlock14783);
    Array PThreadedCode14781 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14782, (Optr)&t_push_closure, (Optr)PBlock14783, (Optr)&t_send1, (Optr)PSend14787, (Optr)&t_method_return);
    Method PMethod14780 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14781, 1, PSend14787);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14780, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Super PSuper14790 = new_Super(SMB_preStoreCascadedMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14792 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14795 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14797 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend14798 = new_Send((Optr)PSend14797, SMB_receiver, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14799 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend14798);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14800 = new_Send((Optr)VAR_parts_1_0, SMB_asArray, 0);
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    // cascades:. 
    Send PSend14801 = new_Send((Optr)VAR__receiver__2_0, SMB_cascades_, 1, (Optr)PSend14800);
    Array PThreadedCode14796 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14797, (Optr)&t_send0, (Optr)PSend14798, (Optr)&t_send1, (Optr)PSend14799, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14800, (Optr)&t_send1, (Optr)PSend14801, (Optr)&t_method_return);
    Block PBlock14794 = new_Block_with(PArray14795, empty_Array, PThreadedCode14796, 2, PSend14799, PSend14801);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14802 = new_Send((Optr)ASTMessageCascadeExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14803 = new_Send((Optr)PBlock14794, SMB_value_, 1, (Optr)PSend14802);
    Array PThreadedCode14793 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14794, (Optr)&t_push_class_reference, (Optr)ASTMessageCascadeExpression_classReference, (Optr)&t_send0, (Optr)PSend14802, (Optr)&t_send1, (Optr)PSend14803, (Optr)&t_method_return);
    Block PBlock14791 = new_Block_with(PArray14792, empty_Array, PThreadedCode14793, 1, PSend14803);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14804 = new_Send((Optr)PSuper14790, SMB_semantics_, 1, (Optr)PBlock14791);
    Array PThreadedCode14789 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14790, (Optr)&t_push_closure, (Optr)PBlock14791, (Optr)&t_send1, (Optr)PSend14804, (Optr)&t_method_return);
    Method PMethod14788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14789, 1, PSend14804);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod14788, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    Super PSuper14807 = new_Super(SMB_initializeUnaryAnnotation, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14809 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14811 = new_Send((Optr)ASTUnaryAnnotation_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14812 = new_Send((Optr)PSend14811, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14810 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14811, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14812, (Optr)&t_method_return);
    Block PBlock14808 = new_Block_with(PArray14809, empty_Array, PThreadedCode14810, 1, PSend14812);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14813 = new_Send((Optr)PSuper14807, SMB_semantics_, 1, (Optr)PBlock14808);
    Array PThreadedCode14806 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14807, (Optr)&t_push_closure, (Optr)PBlock14808, (Optr)&t_send1, (Optr)PSend14813, (Optr)&t_method_return);
    Method PMethod14805 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14806, 1, PSend14813);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14805, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    Super PSuper14816 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14818 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14820 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14821 = new_Send((Optr)PSend14820, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14825 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14826 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // add:. 
    Send PSend14827 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PSend14826);
    Array PThreadedCode14824 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14825, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend14826, (Optr)&t_send1, (Optr)PSend14827, (Optr)&t_block_return);
    Block PBlock14823 = new_Block_with(empty_Array, empty_Array, PThreadedCode14824, 2, PSend14825, PSend14827);
    // ifTrue:. 
    Send PSend14822 = new_Send((Optr)PSend14821, SMB_ifTrue_, 1, (Optr)PBlock14823);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14829 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14831 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    // new. 
    Send PSend14834 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14833 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14834, (Optr)&t_block_return);
    Block PBlock14832 = new_Block_with(empty_Array, empty_Array, PThreadedCode14833, 1, PSend14834);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14835 = new_Send((Optr)PSend14831, SMB_resultIfFailed_, 1, (Optr)PBlock14832);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14836 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)PSend14835);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14837 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    // new. 
    Send PSend14840 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14839 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14840, (Optr)&t_block_return);
    Block PBlock14838 = new_Block_with(empty_Array, empty_Array, PThreadedCode14839, 1, PSend14840);
    // resultIfFailed:. 
    Send PSend14841 = new_Send((Optr)PSend14837, SMB_resultIfFailed_, 1, (Optr)PBlock14838);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14842 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14841);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14843 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14844 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14843);
    Array PThreadedCode14830 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14831, (Optr)&t_push_closure, (Optr)PBlock14832, (Optr)&t_send1, (Optr)PSend14835, (Optr)&t_send1, (Optr)PSend14836, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14837, (Optr)&t_push_closure, (Optr)PBlock14838, (Optr)&t_send1, (Optr)PSend14841, (Optr)&t_send1, (Optr)PSend14842, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14843, (Optr)&t_send1, (Optr)PSend14844, (Optr)&t_method_return);
    Block PBlock14828 = new_Block_with(PArray14829, empty_Array, PThreadedCode14830, 3, PSend14836, PSend14842, PSend14844);
    // new. 
    Send PSend14845 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14846 = new_Send((Optr)PBlock14828, SMB_value_, 1, (Optr)PSend14845);
    Array PThreadedCode14819 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14820, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14821, (Optr)&t_send_ifTrue_, (Optr)PSend14822, (Optr)PBlock14823, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14828, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend14845, (Optr)&t_send1, (Optr)PSend14846, (Optr)&t_method_return);
    Block PBlock14817 = new_Block_with(PArray14818, empty_Array, PThreadedCode14819, 2, PSend14822, PSend14846);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14847 = new_Send((Optr)PSuper14816, SMB_semantics_, 1, (Optr)PBlock14817);
    Array PThreadedCode14815 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14816, (Optr)&t_push_closure, (Optr)PBlock14817, (Optr)&t_send1, (Optr)PSend14847, (Optr)&t_method_return);
    Method PMethod14814 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14815, 1, PSend14847);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod14814, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_class_SMB_match_in_() {
    Symbol SMB_match_in_ = new_Symbol(L"match:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray14849 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend14851 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14852 = new_Send((Optr)PSend14851, SMB_method, 0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend14853 = new_Send((Optr)VAR_class_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14854 = new_Send((Optr)PSend14853, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14855 = new_Send((Optr)PSend14854, SMB_asString, 0);
    // asString. 
    Send PSend14856 = new_Send((Optr)PSend14855, SMB_asString, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14857 = new_Send((Optr)PSend14852, SMB_parse_, 1, (Optr)PSend14856);
    Array PThreadedCode14850 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14851, (Optr)&t_send0, (Optr)PSend14852, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send0, (Optr)PSend14853, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend14854, (Optr)&t_send0, (Optr)PSend14855, (Optr)&t_send0, (Optr)PSend14856, (Optr)&t_send1, (Optr)PSend14857, (Optr)&t_method_return);
    Method PMethod14848 = new_Method_with(PArray14849, empty_Array, empty_Array, PThreadedCode14850, 1, PSend14857);
    
    MethodClosure MC_SMB_match_in_ = new_MethodClosure((Method)PMethod14848, HEADER(Smalltalk_Parser_SmalltalkParser_Class));
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