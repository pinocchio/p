#include <lib/class/Smalltalk/Parser/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParser_stream;
Optr layout_Smalltalk_Parser_SmalltalkParser;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    Super PSuper14214 = new_Super(SMB_initializeUnaryMessageExpression, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14216 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14218 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14219 = new_Send((Optr)PSend14218, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14217 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14218, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14219, (Optr)&t_method_return);
    Block PBlock14215 = new_Block_with(PArray14216, empty_Array, PThreadedCode14217, 1, PSend14219);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14220 = new_Send((Optr)PSuper14214, SMB_semantics_, 1, (Optr)PBlock14215);
    Array PThreadedCode14213 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14214, (Optr)&t_push_closure, (Optr)PBlock14215, (Optr)&t_send1, (Optr)PSend14220, (Optr)&t_method_return);
    Method PMethod14212 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14213, 1, PSend14220);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod14212, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    Super PSuper14223 = new_Super(SMB_initializeUnarySelector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14225 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14226 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_method_return);
    Block PBlock14224 = new_Block_with(PArray14225, empty_Array, PThreadedCode14226, 1, VAR_selector_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14227 = new_Send((Optr)PSuper14223, SMB_semantics_, 1, (Optr)PBlock14224);
    Array PThreadedCode14222 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14223, (Optr)&t_push_closure, (Optr)PBlock14224, (Optr)&t_send1, (Optr)PSend14227, (Optr)&t_method_return);
    Method PMethod14221 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14222, 1, PSend14227);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod14221, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    Super PSuper14230 = new_Super(SMB_initializeNumber, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14232 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14235 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14237 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)VAR_result_1_0);
    String string_14238 = new_String(L"10");
    Symbol SMB_base_ = new_Symbol(L"base:");
    Constant string_14238_Const = new_Constant((Optr)string_14238);
    // base:. 
    Send PSend14239 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)string_14238_Const);
    Array PThreadedCode14236 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14237, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_14238, (Optr)&t_send1, (Optr)PSend14239, (Optr)&t_method_return);
    Block PBlock14234 = new_Block_with(PArray14235, empty_Array, PThreadedCode14236, 2, PSend14237, PSend14239);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14240 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14241 = new_Send((Optr)PBlock14234, SMB_value_, 1, (Optr)PSend14240);
    Array PThreadedCode14233 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14234, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14240, (Optr)&t_send1, (Optr)PSend14241, (Optr)&t_method_return);
    Block PBlock14231 = new_Block_with(PArray14232, empty_Array, PThreadedCode14233, 1, PSend14241);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14242 = new_Send((Optr)PSuper14230, SMB_semantics_, 1, (Optr)PBlock14231);
    Array PThreadedCode14229 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14230, (Optr)&t_push_closure, (Optr)PBlock14231, (Optr)&t_send1, (Optr)PSend14242, (Optr)&t_method_return);
    Method PMethod14228 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14229, 1, PSend14242);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod14228, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    Super PSuper14245 = new_Super(SMB_initializeIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14247 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14249 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14248 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14249, (Optr)&t_method_return);
    Block PBlock14246 = new_Block_with(PArray14247, empty_Array, PThreadedCode14248, 1, PSend14249);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14250 = new_Send((Optr)PSuper14245, SMB_semantics_, 1, (Optr)PBlock14246);
    Array PThreadedCode14244 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14245, (Optr)&t_push_closure, (Optr)PBlock14246, (Optr)&t_send1, (Optr)PSend14250, (Optr)&t_method_return);
    Method PMethod14243 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14244, 1, PSend14250);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod14243, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    Super PSuper14253 = new_Super(SMB_initializeRadix, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14255 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14258 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14260 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend14261 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)PSend14260);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14262 = new_Send((Optr)VAR_result_1_0, SMB_second, 0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14263 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)PSend14262);
    Array PThreadedCode14259 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14260, (Optr)&t_send1, (Optr)PSend14261, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14262, (Optr)&t_send1, (Optr)PSend14263, (Optr)&t_method_return);
    Block PBlock14257 = new_Block_with(PArray14258, empty_Array, PThreadedCode14259, 2, PSend14261, PSend14263);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14264 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14265 = new_Send((Optr)PBlock14257, SMB_value_, 1, (Optr)PSend14264);
    Array PThreadedCode14256 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14257, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14264, (Optr)&t_send1, (Optr)PSend14265, (Optr)&t_method_return);
    Block PBlock14254 = new_Block_with(PArray14255, empty_Array, PThreadedCode14256, 1, PSend14265);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14266 = new_Send((Optr)PSuper14253, SMB_semantics_, 1, (Optr)PBlock14254);
    Array PThreadedCode14252 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14253, (Optr)&t_push_closure, (Optr)PBlock14254, (Optr)&t_send1, (Optr)PSend14266, (Optr)&t_method_return);
    Method PMethod14251 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14252, 1, PSend14266);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14251, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    Super PSuper14269 = new_Super(SMB_initializeUnaryObjectDescription, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14271 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14272 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14275 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14274 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14275);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14276 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14278 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14283 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14285 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14286 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14287 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14286);
    Array PThreadedCode14284 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14285, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14286, (Optr)&t_send1, (Optr)PSend14287, (Optr)&t_method_return);
    Block PBlock14282 = new_Block_with(PArray14283, empty_Array, PThreadedCode14284, 2, PSend14285, PSend14287);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14288 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14281 = new_Send((Optr)PBlock14282, SMB_value_, 1, (Optr)PSend14288);
    Assign PAssign14280 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14281);
    Array PThreadedCode14279 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14280, (Optr)&t_push_closure, (Optr)PBlock14282, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14288, (Optr)&t_send1, (Optr)PSend14281, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14277 = new_Block_with(PArray14278, empty_Array, PThreadedCode14279, 1, PAssign14280);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14289 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14276, (Optr)PBlock14277);
    Array PThreadedCode14273 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14274, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14275, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14276, (Optr)&t_push_closure, (Optr)PBlock14277, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14289, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14270 = new_Block_with(PArray14271, PArray14272, PThreadedCode14273, 3, PAssign14274, PSend14289, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14290 = new_Send((Optr)PSuper14269, SMB_semantics_, 1, (Optr)PBlock14270);
    Array PThreadedCode14268 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14269, (Optr)&t_push_closure, (Optr)PBlock14270, (Optr)&t_send1, (Optr)PSend14290, (Optr)&t_method_return);
    Method PMethod14267 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14268, 1, PSend14290);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14267, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    Super PSuper14293 = new_Super(SMB_initializeVariableName, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14295 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14297 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14296 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14297, (Optr)&t_method_return);
    Block PBlock14294 = new_Block_with(PArray14295, empty_Array, PThreadedCode14296, 1, PSend14297);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14298 = new_Send((Optr)PSuper14293, SMB_semantics_, 1, (Optr)PBlock14294);
    Array PThreadedCode14292 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14293, (Optr)&t_push_closure, (Optr)PBlock14294, (Optr)&t_send1, (Optr)PSend14298, (Optr)&t_method_return);
    Method PMethod14291 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14292, 1, PSend14298);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod14291, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    Super PSuper14301 = new_Super(SMB_initializeSymbolInArray, 0);
    Variable VAR_symbol_1_0 = new_Variable_named(L"symbol", 1);
    Array PArray14303 = new_Array_with(1, (Optr)VAR_symbol_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14305 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_symbol_1_0);
    Array PThreadedCode14304 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_symbol_1_0, (Optr)&t_send1, (Optr)PSend14305, (Optr)&t_method_return);
    Block PBlock14302 = new_Block_with(PArray14303, empty_Array, PThreadedCode14304, 1, PSend14305);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14306 = new_Send((Optr)PSuper14301, SMB_semantics_, 1, (Optr)PBlock14302);
    Array PThreadedCode14300 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14301, (Optr)&t_push_closure, (Optr)PBlock14302, (Optr)&t_send1, (Optr)PSend14306, (Optr)&t_method_return);
    Method PMethod14299 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14300, 1, PSend14306);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14299, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    Super PSuper14309 = new_Super(SMB_initializeStatements, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14311 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend14313 = new_Send((Optr)VAR_result_1_0, SMB_removeLast, 0);
    Variable VAR_exp_2_0 = new_Variable_named(L"exp", 2);
    Array PArray14315 = new_Array_with(1, (Optr)VAR_exp_2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14317 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)VAR_exp_2_0);
    Array PThreadedCode14316 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_variable, (Optr)VAR_exp_2_0, (Optr)&t_send1, (Optr)PSend14317, (Optr)&t_method_return);
    Block PBlock14314 = new_Block_with(PArray14315, empty_Array, PThreadedCode14316, 1, PSend14317);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14318 = new_Send((Optr)PSend14313, SMB_ifMatched_, 1, (Optr)PBlock14314);
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend14319 = new_Send((Optr)VAR_result_1_0, SMB_asOrderedCollection, 0);
    Array PThreadedCode14312 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14313, (Optr)&t_push_closure, (Optr)PBlock14314, (Optr)&t_send1, (Optr)PSend14318, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14319, (Optr)&t_method_return);
    Block PBlock14310 = new_Block_with(PArray14311, empty_Array, PThreadedCode14312, 2, PSend14318, PSend14319);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14320 = new_Send((Optr)PSuper14309, SMB_semantics_, 1, (Optr)PBlock14310);
    Array PThreadedCode14308 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14309, (Optr)&t_push_closure, (Optr)PBlock14310, (Optr)&t_send1, (Optr)PSend14320, (Optr)&t_method_return);
    Method PMethod14307 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14308, 1, PSend14320);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14307, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    Super PSuper14323 = new_Super(SMB_initializeCapitalIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14325 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14327 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14326 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14327, (Optr)&t_method_return);
    Block PBlock14324 = new_Block_with(PArray14325, empty_Array, PThreadedCode14326, 1, PSend14327);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14328 = new_Send((Optr)PSuper14323, SMB_semantics_, 1, (Optr)PBlock14324);
    Array PThreadedCode14322 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14323, (Optr)&t_push_closure, (Optr)PBlock14324, (Optr)&t_send1, (Optr)PSend14328, (Optr)&t_method_return);
    Method PMethod14321 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14322, 1, PSend14328);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod14321, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    Super PSuper14331 = new_Super(SMB_initializeSymbolConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14333 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14335 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14334 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14335, (Optr)&t_method_return);
    Block PBlock14332 = new_Block_with(PArray14333, empty_Array, PThreadedCode14334, 1, PSend14335);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14336 = new_Send((Optr)PSuper14331, SMB_semantics_, 1, (Optr)PBlock14332);
    Array PThreadedCode14330 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14331, (Optr)&t_push_closure, (Optr)PBlock14332, (Optr)&t_send1, (Optr)PSend14336, (Optr)&t_method_return);
    Method PMethod14329 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14330, 1, PSend14336);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14329, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Super PSuper14339 = new_Super(SMB_initializeArray, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14341 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14343 = new_Send((Optr)ASTArray_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14344 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    // literals:. 
    Send PSend14345 = new_Send((Optr)PSend14343, SMB_literals_, 1, (Optr)PSend14344);
    Array PThreadedCode14342 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)ASTArray_classReference, (Optr)&t_send0, (Optr)PSend14343, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14344, (Optr)&t_send1, (Optr)PSend14345, (Optr)&t_method_return);
    Block PBlock14340 = new_Block_with(PArray14341, empty_Array, PThreadedCode14342, 1, PSend14345);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14346 = new_Send((Optr)PSuper14339, SMB_semantics_, 1, (Optr)PBlock14340);
    Array PThreadedCode14338 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14339, (Optr)&t_push_closure, (Optr)PBlock14340, (Optr)&t_send1, (Optr)PSend14346, (Optr)&t_method_return);
    Method PMethod14337 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14338, 1, PSend14346);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14337, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    Super PSuper14349 = new_Super(SMB_initializeBinarySelector, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14351 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14353 = new_Send((Optr)VAR_result_1_0, SMB_asSymbol, 0);
    Array PThreadedCode14352 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14353, (Optr)&t_method_return);
    Block PBlock14350 = new_Block_with(PArray14351, empty_Array, PThreadedCode14352, 1, PSend14353);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14354 = new_Send((Optr)PSuper14349, SMB_semantics_, 1, (Optr)PBlock14350);
    Array PThreadedCode14348 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14349, (Optr)&t_push_closure, (Optr)PBlock14350, (Optr)&t_send1, (Optr)PSend14354, (Optr)&t_method_return);
    Method PMethod14347 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14348, 1, PSend14354);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod14347, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_createReference_() {
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    Variable VAR_path_0_0 = new_Variable_named(L"path", 0);
    Array PArray14356 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14357 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14360 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14362 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14363 = new_Send((Optr)PSend14362, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14368 = new_Send((Optr)VAR_path_0_0, SMB_first, 0);
    Assign PAssign14367 = new_Assign((Optr)VAR_name_0_1, (Optr)PSend14368);
    Symbol  SMB_self = new_Symbol(L"self");
    Constant SMB_self_Const = new_Constant((Optr)SMB_self);
    // =. 
    Send PSend14369 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_self_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14373 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14374 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14373);
    Array PThreadedCode14372 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend14373, (Optr)&t_send1, (Optr)PSend14374, (Optr)&t_block_return);
    Block PBlock14371 = new_Block_with(empty_Array, empty_Array, PThreadedCode14372, 1, PSend14374);
    // ifTrue:. 
    Send PSend14370 = new_Send((Optr)PSend14369, SMB_ifTrue_, 1, (Optr)PBlock14371);
    Symbol  SMB_super = new_Symbol(L"super");
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    // =. 
    Send PSend14375 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_super_Const);
    // new. 
    Send PSend14379 = new_Send((Optr)ASTSuper_classReference, SMB_new, 0);
    // escape:. 
    Send PSend14380 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14379);
    Array PThreadedCode14378 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send0, (Optr)PSend14379, (Optr)&t_send1, (Optr)PSend14380, (Optr)&t_block_return);
    Block PBlock14377 = new_Block_with(empty_Array, empty_Array, PThreadedCode14378, 1, PSend14380);
    // ifTrue:. 
    Send PSend14376 = new_Send((Optr)PSend14375, SMB_ifTrue_, 1, (Optr)PBlock14377);
    // new. 
    Send PSend14381 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14382 = new_Send((Optr)PSend14381, SMB_name_, 1, (Optr)VAR_name_0_1);
    // escape:. 
    Send PSend14383 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14382);
    Array PThreadedCode14366 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push1, (Optr)PAssign14367, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14368, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_self, (Optr)&t_send1, (Optr)PSend14369, (Optr)&t_send_ifTrue_, (Optr)PSend14370, (Optr)PBlock14371, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_send1, (Optr)PSend14375, (Optr)&t_send_ifTrue_, (Optr)PSend14376, (Optr)PBlock14377, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14381, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_send1, (Optr)PSend14382, (Optr)&t_send1, (Optr)PSend14383, (Optr)&t_block_return);
    Block PBlock14365 = new_Block_with(empty_Array, empty_Array, PThreadedCode14366, 4, PAssign14367, PSend14370, PSend14376, PSend14383);
    // ifTrue:. 
    Send PSend14364 = new_Send((Optr)PSend14363, SMB_ifTrue_, 1, (Optr)PBlock14365);
    // new. 
    Send PSend14384 = new_Send((Optr)ASTPath_classReference, SMB_new, 0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend14385 = new_Send((Optr)PSend14384, SMB_path_, 1, (Optr)VAR_path_0_0);
    Array PThreadedCode14361 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14362, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14363, (Optr)&t_send_ifTrue_, (Optr)PSend14364, (Optr)PBlock14365, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)ASTPath_classReference, (Optr)&t_send0, (Optr)PSend14384, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send1, (Optr)PSend14385, (Optr)&t_method_return);
    Block PBlock14359 = new_Block_with(PArray14360, empty_Array, PThreadedCode14361, 2, PSend14364, PSend14385);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14386 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14359);
    Array PThreadedCode14358 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14359, (Optr)&t_send1, (Optr)PSend14386, (Optr)&t_method_return);
    Method PMethod14355 = new_Method_with(PArray14356, PArray14357, empty_Array, PThreadedCode14358, 1, PSend14386);
    
    MethodClosure MC_SMB_createReference_ = new_MethodClosure((Method)PMethod14355, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createReference_, MC_SMB_createReference_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14389 = new_Super(SMB_initialize, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend14392 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14391 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14392);
    Assign PAssign14390 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14391);
    Array PThreadedCode14388 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14389, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14390, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14392, (Optr)&t_send1, (Optr)PSend14391, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14387 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14388, 3, PSuper14389, PAssign14390, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14387, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    Super PSuper14395 = new_Super(SMB_initializeStringConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14397 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14399 = new_Send((Optr)ASTString_classReference, SMB_new, 0);
    Symbol SMB_string_ = new_Symbol(L"string:");
    // string:. 
    Send PSend14400 = new_Send((Optr)PSend14399, SMB_string_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14398 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTString_classReference, (Optr)&t_send0, (Optr)PSend14399, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14400, (Optr)&t_method_return);
    Block PBlock14396 = new_Block_with(PArray14397, empty_Array, PThreadedCode14398, 1, PSend14400);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14401 = new_Send((Optr)PSuper14395, SMB_semantics_, 1, (Optr)PBlock14396);
    Array PThreadedCode14394 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14395, (Optr)&t_push_closure, (Optr)PBlock14396, (Optr)&t_send1, (Optr)PSend14401, (Optr)&t_method_return);
    Method PMethod14393 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14394, 1, PSend14401);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod14393, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    Super PSuper14404 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14406 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14408 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14409 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14410 = new_Send((Optr)PSend14408, SMB_receiver_, 1, (Optr)PSend14409);
    Array PThreadedCode14407 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14408, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14409, (Optr)&t_send1, (Optr)PSend14410, (Optr)&t_method_return);
    Block PBlock14405 = new_Block_with(PArray14406, empty_Array, PThreadedCode14407, 1, PSend14410);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14411 = new_Send((Optr)PSuper14404, SMB_semantics_, 1, (Optr)PBlock14405);
    Array PThreadedCode14403 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14404, (Optr)&t_push_closure, (Optr)PBlock14405, (Optr)&t_send1, (Optr)PSend14411, (Optr)&t_method_return);
    Method PMethod14402 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14403, 1, PSend14411);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod14402, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    Variable VAR_optionalAssignment_0_0 = new_Variable_named(L"optionalAssignment", 0);
    Variable VAR_isAssignment_0_1 = new_Variable_named(L"isAssignment", 0);
    Variable VAR_keywords_0_2 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_3 = new_Variable_named(L"arguments", 0);
    Array PArray14413 = new_Array_with(4, (Optr)VAR_optionalAssignment_0_0, (Optr)VAR_isAssignment_0_1, (Optr)VAR_keywords_0_2, (Optr)VAR_arguments_0_3);
    Super PSuper14415 = new_Super(SMB_initializeBracketIndexExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14417 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14420 = new_Send((Optr)VAR_parts_1_0, SMB_second, 0);
    Assign PAssign14419 = new_Assign((Optr)VAR_optionalAssignment_0_0, (Optr)PSend14420);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend14423 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend14422 = new_Send((Optr)PSend14423, SMB__pequals_, 1, (Optr)PEGSucceededOptionalResult_classReference);
    Assign PAssign14421 = new_Assign((Optr)VAR_isAssignment_0_1, (Optr)PSend14422);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol  SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_at__Const = new_Constant((Optr)SMB_at_);
    // with:. 
    Send PSend14428 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14427 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14428, (Optr)&t_block_return);
    Block PBlock14426 = new_Block_with(empty_Array, empty_Array, PThreadedCode14427, 1, PSend14428);
    Symbol  SMB_put_ = new_Symbol(L"put:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_put__Const = new_Constant((Optr)SMB_put_);
    // with:with:. 
    Send PSend14431 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_at__Const, (Optr)SMB_put__Const);
    Array PThreadedCode14430 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_push1, (Optr)SMB_put_, (Optr)&t_send2, (Optr)PSend14431, (Optr)&t_block_return);
    Block PBlock14429 = new_Block_with(empty_Array, empty_Array, PThreadedCode14430, 1, PSend14431);
    // ifFalse:ifTrue:. 
    Send PSend14425 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14426, (Optr)PBlock14429);
    Assign PAssign14424 = new_Assign((Optr)VAR_keywords_0_2, (Optr)PSend14425);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14436 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    // with:. 
    Send PSend14437 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend14436);
    Array PThreadedCode14435 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14436, (Optr)&t_send1, (Optr)PSend14437, (Optr)&t_block_return);
    Block PBlock14434 = new_Block_with(empty_Array, empty_Array, PThreadedCode14435, 1, PSend14437);
    // first. 
    Send PSend14440 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_result = new_Symbol(L"result");
    // result. 
    Send PSend14441 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_result, 0);
    // with:with:. 
    Send PSend14442 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend14440, (Optr)PSend14441);
    Array PThreadedCode14439 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14440, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14441, (Optr)&t_send2, (Optr)PSend14442, (Optr)&t_block_return);
    Block PBlock14438 = new_Block_with(empty_Array, empty_Array, PThreadedCode14439, 1, PSend14442);
    // ifFalse:ifTrue:. 
    Send PSend14433 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14434, (Optr)PBlock14438);
    Assign PAssign14432 = new_Assign((Optr)VAR_arguments_0_3, (Optr)PSend14433);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14444 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14446 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_2);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14447 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_3);
    Array PThreadedCode14445 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_2, (Optr)&t_send1, (Optr)PSend14446, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_3, (Optr)&t_send1, (Optr)PSend14447, (Optr)&t_method_return);
    Block PBlock14443 = new_Block_with(PArray14444, empty_Array, PThreadedCode14445, 2, PSend14446, PSend14447);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14448 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14449 = new_Send((Optr)PBlock14443, SMB_value_, 1, (Optr)PSend14448);
    Array PThreadedCode14418 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14419, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14420, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14421, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14423, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14422, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14424, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14425, (Optr)PBlock14426, (Optr)PBlock14429, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14432, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14433, (Optr)PBlock14434, (Optr)PBlock14438, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14443, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14448, (Optr)&t_send1, (Optr)PSend14449, (Optr)&t_method_return);
    Block PBlock14416 = new_Block_with(PArray14417, empty_Array, PThreadedCode14418, 5, PAssign14419, PAssign14421, PAssign14424, PAssign14432, PSend14449);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14450 = new_Send((Optr)PSuper14415, SMB_semantics_, 1, (Optr)PBlock14416);
    Array PThreadedCode14414 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14415, (Optr)&t_push_closure, (Optr)PBlock14416, (Optr)&t_send1, (Optr)PSend14450, (Optr)&t_method_return);
    Method PMethod14412 = new_Method_with(empty_Array, PArray14413, empty_Array, PThreadedCode14414, 1, PSend14450);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod14412, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Super PSuper14453 = new_Super(SMB_initializeBinaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14455 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14456 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14459 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14458 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14459);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14460 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14462 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14467 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14469 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14470 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14471 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14470);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend14472 = new_Send((Optr)VAR_i_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend14473 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14472);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14474 = new_Send((Optr)VAR__receiver__3_0, SMB_argument_, 1, (Optr)PSend14473);
    Array PThreadedCode14468 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14470, (Optr)&t_send1, (Optr)PSend14471, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14472, (Optr)&t_send1, (Optr)PSend14473, (Optr)&t_send1, (Optr)PSend14474, (Optr)&t_method_return);
    Block PBlock14466 = new_Block_with(PArray14467, empty_Array, PThreadedCode14468, 3, PSend14469, PSend14471, PSend14474);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14475 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14465 = new_Send((Optr)PBlock14466, SMB_value_, 1, (Optr)PSend14475);
    Assign PAssign14464 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14465);
    Array PThreadedCode14463 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14464, (Optr)&t_push_closure, (Optr)PBlock14466, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14475, (Optr)&t_send1, (Optr)PSend14465, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14461 = new_Block_with(PArray14462, empty_Array, PThreadedCode14463, 1, PAssign14464);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend14476 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14460, (Optr)int_2_Const, (Optr)PBlock14461);
    Array PThreadedCode14457 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14458, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14459, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14460, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14461, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14476, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14454 = new_Block_with(PArray14455, PArray14456, PThreadedCode14457, 3, PAssign14458, PSend14476, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14477 = new_Send((Optr)PSuper14453, SMB_semantics_, 1, (Optr)PBlock14454);
    Array PThreadedCode14452 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14453, (Optr)&t_push_closure, (Optr)PBlock14454, (Optr)&t_send1, (Optr)PSend14477, (Optr)&t_method_return);
    Method PMethod14451 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14452, 1, PSend14477);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14451, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    Super PSuper14480 = new_Super(SMB_initializeScopedExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14482 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_scoped = new_Symbol(L"scoped");
    // scoped. 
    Send PSend14484 = new_Send((Optr)VAR_result_1_0, SMB_scoped, 0);
    Array PThreadedCode14483 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14484, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_method_return);
    Block PBlock14481 = new_Block_with(PArray14482, empty_Array, PThreadedCode14483, 2, PSend14484, VAR_result_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14485 = new_Send((Optr)PSuper14480, SMB_semantics_, 1, (Optr)PBlock14481);
    Array PThreadedCode14479 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14480, (Optr)&t_push_closure, (Optr)PBlock14481, (Optr)&t_send1, (Optr)PSend14485, (Optr)&t_method_return);
    Method PMethod14478 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14479, 1, PSend14485);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod14478, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    Super PSuper14488 = new_Super(SMB_initializeCharacterConstant, 0);
    Variable VAR_char_1_0 = new_Variable_named(L"char", 1);
    Array PArray14490 = new_Array_with(1, (Optr)VAR_char_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14492 = new_Send((Optr)ASTCharacter_classReference, SMB_new, 0);
    Symbol SMB_char_ = new_Symbol(L"char:");
    // char:. 
    Send PSend14493 = new_Send((Optr)PSend14492, SMB_char_, 1, (Optr)VAR_char_1_0);
    Array PThreadedCode14491 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTCharacter_classReference, (Optr)&t_send0, (Optr)PSend14492, (Optr)&t_push_variable, (Optr)VAR_char_1_0, (Optr)&t_send1, (Optr)PSend14493, (Optr)&t_method_return);
    Block PBlock14489 = new_Block_with(PArray14490, empty_Array, PThreadedCode14491, 1, PSend14493);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14494 = new_Send((Optr)PSuper14488, SMB_semantics_, 1, (Optr)PBlock14489);
    Array PThreadedCode14487 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14488, (Optr)&t_push_closure, (Optr)PBlock14489, (Optr)&t_send1, (Optr)PSend14494, (Optr)&t_method_return);
    Method PMethod14486 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14487, 1, PSend14494);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod14486, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    Super PSuper14497 = new_Super(SMB_initializeNumberFormat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14499 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14501 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14500 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14501, (Optr)&t_method_return);
    Block PBlock14498 = new_Block_with(PArray14499, empty_Array, PThreadedCode14500, 1, PSend14501);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14502 = new_Send((Optr)PSuper14497, SMB_semantics_, 1, (Optr)PBlock14498);
    Array PThreadedCode14496 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14497, (Optr)&t_push_closure, (Optr)PBlock14498, (Optr)&t_send1, (Optr)PSend14502, (Optr)&t_method_return);
    Method PMethod14495 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14496, 1, PSend14502);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod14495, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    Super PSuper14505 = new_Super(SMB_initializeMethod, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14507 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14510 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14512 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend14513 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)PSend14512);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14514 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend14515 = new_Send((Optr)VAR__receiver__2_0, SMB_annotations_, 1, (Optr)PSend14514);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14516 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14519 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14518 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14519, (Optr)&t_block_return);
    Block PBlock14517 = new_Block_with(empty_Array, empty_Array, PThreadedCode14518, 1, PSend14519);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14520 = new_Send((Optr)PSend14516, SMB_resultIfFailed_, 1, (Optr)PBlock14517);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14521 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14520);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend14522 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14523 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14522);
    Array PThreadedCode14511 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14512, (Optr)&t_send1, (Optr)PSend14513, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14514, (Optr)&t_send1, (Optr)PSend14515, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14516, (Optr)&t_push_closure, (Optr)PBlock14517, (Optr)&t_send1, (Optr)PSend14520, (Optr)&t_send1, (Optr)PSend14521, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend14522, (Optr)&t_send1, (Optr)PSend14523, (Optr)&t_method_return);
    Block PBlock14509 = new_Block_with(PArray14510, empty_Array, PThreadedCode14511, 4, PSend14513, PSend14515, PSend14521, PSend14523);
    // new. 
    Send PSend14524 = new_Send((Optr)ASTMethod_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14525 = new_Send((Optr)PBlock14509, SMB_value_, 1, (Optr)PSend14524);
    Array PThreadedCode14508 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14509, (Optr)&t_push_class_reference, (Optr)ASTMethod_classReference, (Optr)&t_send0, (Optr)PSend14524, (Optr)&t_send1, (Optr)PSend14525, (Optr)&t_method_return);
    Block PBlock14506 = new_Block_with(PArray14507, empty_Array, PThreadedCode14508, 1, PSend14525);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14526 = new_Send((Optr)PSuper14505, SMB_semantics_, 1, (Optr)PBlock14506);
    Array PThreadedCode14504 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14505, (Optr)&t_push_closure, (Optr)PBlock14506, (Optr)&t_send1, (Optr)PSend14526, (Optr)&t_method_return);
    Method PMethod14503 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14504, 1, PSend14526);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod14503, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    Super PSuper14529 = new_Super(SMB_initializeUnaryMessageDefinition, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14531 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14533 = new_Send((Optr)ASTUnaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14534 = new_Send((Optr)PSend14533, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14532 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14533, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14534, (Optr)&t_method_return);
    Block PBlock14530 = new_Block_with(PArray14531, empty_Array, PThreadedCode14532, 1, PSend14534);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14535 = new_Send((Optr)PSuper14529, SMB_semantics_, 1, (Optr)PBlock14530);
    Array PThreadedCode14528 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14529, (Optr)&t_push_closure, (Optr)PBlock14530, (Optr)&t_send1, (Optr)PSend14535, (Optr)&t_method_return);
    Method PMethod14527 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14528, 1, PSend14535);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod14527, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14537 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14539 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14541 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14545 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14544 = new_Send((Optr)PSend14545, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14543 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14544);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14547 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14546 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14547);
    // new:. 
    Send PSend14549 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14548 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14549);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14551 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14553 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14554 = new_Send((Optr)PSend14553, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14555 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14554);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14556 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14555);
    // *. 
    Send PSend14557 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14558 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14557);
    // at:put:. 
    Send PSend14559 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14558);
    Array PThreadedCode14552 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14553, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14554, (Optr)&t_send1, (Optr)PSend14555, (Optr)&t_send2, (Optr)PSend14556, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14557, (Optr)&t_send1, (Optr)PSend14558, (Optr)&t_send2, (Optr)PSend14559, (Optr)&t_method_return);
    Block PBlock14550 = new_Block_with(PArray14551, empty_Array, PThreadedCode14552, 2, PSend14556, PSend14559);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14560 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14550);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14562 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14564 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14565 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14563 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14564, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14565, (Optr)&t_method_return);
    Block PBlock14561 = new_Block_with(PArray14562, empty_Array, PThreadedCode14563, 2, PSend14564, PSend14565);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14566 = new_Send((Optr)ASTKeywordAnnotation_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14567 = new_Send((Optr)PBlock14561, SMB_value_, 1, (Optr)PSend14566);
    Array PThreadedCode14542 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14543, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14545, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14544, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14546, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14547, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14548, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14549, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14550, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14560, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14561, (Optr)&t_push_class_reference, (Optr)ASTKeywordAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14566, (Optr)&t_send1, (Optr)PSend14567, (Optr)&t_method_return);
    Block PBlock14540 = new_Block_with(PArray14541, empty_Array, PThreadedCode14542, 5, PAssign14543, PAssign14546, PAssign14548, PSend14560, PSend14567);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14568 = new_Send((Optr)PSuper14539, SMB_semantics_, 1, (Optr)PBlock14540);
    Array PThreadedCode14538 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14539, (Optr)&t_push_closure, (Optr)PBlock14540, (Optr)&t_send1, (Optr)PSend14568, (Optr)&t_method_return);
    Method PMethod14536 = new_Method_with(empty_Array, PArray14537, empty_Array, PThreadedCode14538, 1, PSend14568);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14536, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    Super PSuper14571 = new_Super(SMB_initializeKeyword, 0);
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
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod14569, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Variable VAR_vars_0_0 = new_Variable_named(L"vars", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray14578 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14580 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14582 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14585 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14584 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14585);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14587 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign14586 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14587);
    Variable VAR_variables_2_0 = new_Variable_named(L"variables", 2);
    Array PArray14589 = new_Array_with(1, (Optr)VAR_variables_2_0);
    Variable VAR_variable_3_0 = new_Variable_named(L"variable", 3);
    Array PArray14592 = new_Array_with(1, (Optr)VAR_variable_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray14597 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14599 = new_Send((Optr)VAR__receiver__4_0, SMB_expression_, 1, (Optr)VAR_expression_0_1);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend14600 = new_Send((Optr)VAR__receiver__4_0, SMB_variable_, 1, (Optr)VAR_variable_3_0);
    Array PThreadedCode14598 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend14599, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_variable_3_0, (Optr)&t_send1, (Optr)PSend14600, (Optr)&t_method_return);
    Block PBlock14596 = new_Block_with(PArray14597, empty_Array, PThreadedCode14598, 2, PSend14599, PSend14600);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14601 = new_Send((Optr)ASTAssignmentExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14595 = new_Send((Optr)PBlock14596, SMB_value_, 1, (Optr)PSend14601);
    Assign PAssign14594 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14595);
    Array PThreadedCode14593 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14594, (Optr)&t_push_closure, (Optr)PBlock14596, (Optr)&t_push_class_reference, (Optr)ASTAssignmentExpression_classReference, (Optr)&t_send0, (Optr)PSend14601, (Optr)&t_send1, (Optr)PSend14595, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14591 = new_Block_with(PArray14592, empty_Array, PThreadedCode14593, 1, PAssign14594);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend14602 = new_Send((Optr)VAR_variables_2_0, SMB_reverseDo_, 1, (Optr)PBlock14591);
    Array PThreadedCode14590 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_variables_2_0, (Optr)&t_push_closure, (Optr)PBlock14591, (Optr)&t_send1, (Optr)PSend14602, (Optr)&t_method_return);
    Block PBlock14588 = new_Block_with(PArray14589, empty_Array, PThreadedCode14590, 1, PSend14602);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14603 = new_Send((Optr)VAR_vars_0_0, SMB_ifMatched_, 1, (Optr)PBlock14588);
    Array PThreadedCode14583 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign14584, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14585, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14586, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14587, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_vars_0_0, (Optr)&t_push_closure, (Optr)PBlock14588, (Optr)&t_send1, (Optr)PSend14603, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_method_return);
    Block PBlock14581 = new_Block_with(PArray14582, empty_Array, PThreadedCode14583, 4, PAssign14584, PAssign14586, PSend14603, VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14604 = new_Send((Optr)PSuper14580, SMB_semantics_, 1, (Optr)PBlock14581);
    Array PThreadedCode14579 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14580, (Optr)&t_push_closure, (Optr)PBlock14581, (Optr)&t_send1, (Optr)PSend14604, (Optr)&t_method_return);
    Method PMethod14577 = new_Method_with(empty_Array, PArray14578, empty_Array, PThreadedCode14579, 1, PSend14604);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14577, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    Super PSuper14607 = new_Super(SMB_initializeFloat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14609 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14612 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14614 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_high_ = new_Symbol(L"high:");
    // high:. 
    Send PSend14615 = new_Send((Optr)VAR__receiver__2_0, SMB_high_, 1, (Optr)PSend14614);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14616 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Symbol SMB_low_ = new_Symbol(L"low:");
    // low:. 
    Send PSend14617 = new_Send((Optr)VAR__receiver__2_0, SMB_low_, 1, (Optr)PSend14616);
    Array PThreadedCode14613 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14614, (Optr)&t_send1, (Optr)PSend14615, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14616, (Optr)&t_send1, (Optr)PSend14617, (Optr)&t_method_return);
    Block PBlock14611 = new_Block_with(PArray14612, empty_Array, PThreadedCode14613, 2, PSend14615, PSend14617);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14618 = new_Send((Optr)ASTFloat_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14619 = new_Send((Optr)PBlock14611, SMB_value_, 1, (Optr)PSend14618);
    Array PThreadedCode14610 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14611, (Optr)&t_push_class_reference, (Optr)ASTFloat_classReference, (Optr)&t_send0, (Optr)PSend14618, (Optr)&t_send1, (Optr)PSend14619, (Optr)&t_method_return);
    Block PBlock14608 = new_Block_with(PArray14609, empty_Array, PThreadedCode14610, 1, PSend14619);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14620 = new_Send((Optr)PSuper14607, SMB_semantics_, 1, (Optr)PBlock14608);
    Array PThreadedCode14606 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14607, (Optr)&t_push_closure, (Optr)PBlock14608, (Optr)&t_send1, (Optr)PSend14620, (Optr)&t_method_return);
    Method PMethod14605 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14606, 1, PSend14620);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14605, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    Super PSuper14623 = new_Super(SMB_initializeBlockArguments, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14625 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR_variable_2_0 = new_Variable_named(L"variable", 2);
    Array PArray14628 = new_Array_with(1, (Optr)VAR_variable_2_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14630 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_variable_2_0);
    Array PThreadedCode14629 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_variable_2_0, (Optr)&t_send1, (Optr)PSend14630, (Optr)&t_method_return);
    Block PBlock14627 = new_Block_with(PArray14628, empty_Array, PThreadedCode14629, 1, PSend14630);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend14631 = new_Send((Optr)VAR_result_1_0, SMB_collect_, 1, (Optr)PBlock14627);
    Array PThreadedCode14626 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_closure, (Optr)PBlock14627, (Optr)&t_send1, (Optr)PSend14631, (Optr)&t_method_return);
    Block PBlock14624 = new_Block_with(PArray14625, empty_Array, PThreadedCode14626, 1, PSend14631);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14632 = new_Send((Optr)PSuper14623, SMB_semantics_, 1, (Optr)PBlock14624);
    Array PThreadedCode14622 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14623, (Optr)&t_push_closure, (Optr)PBlock14624, (Optr)&t_send1, (Optr)PSend14632, (Optr)&t_method_return);
    Method PMethod14621 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14622, 1, PSend14632);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14621, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    Super PSuper14635 = new_Super(SMB_initializeBraceExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14637 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14639 = new_Send((Optr)ASTBraceExpression_classReference, SMB_new, 0);
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    // expressions:. 
    Send PSend14640 = new_Send((Optr)PSend14639, SMB_expressions_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14638 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTBraceExpression_classReference, (Optr)&t_send0, (Optr)PSend14639, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14640, (Optr)&t_method_return);
    Block PBlock14636 = new_Block_with(PArray14637, empty_Array, PThreadedCode14638, 1, PSend14640);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14641 = new_Send((Optr)PSuper14635, SMB_semantics_, 1, (Optr)PBlock14636);
    Array PThreadedCode14634 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14635, (Optr)&t_push_closure, (Optr)PBlock14636, (Optr)&t_send1, (Optr)PSend14641, (Optr)&t_method_return);
    Method PMethod14633 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14634, 1, PSend14641);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14633, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    Super PSuper14644 = new_Super(SMB_initializeBinaryMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14646 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14649 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14651 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14652 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14651);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14653 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14654 = new_Send((Optr)VAR__receiver__2_0, SMB_argument_, 1, (Optr)PSend14653);
    Array PThreadedCode14650 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14651, (Optr)&t_send1, (Optr)PSend14652, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14653, (Optr)&t_send1, (Optr)PSend14654, (Optr)&t_method_return);
    Block PBlock14648 = new_Block_with(PArray14649, empty_Array, PThreadedCode14650, 2, PSend14652, PSend14654);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14655 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14656 = new_Send((Optr)PBlock14648, SMB_value_, 1, (Optr)PSend14655);
    Array PThreadedCode14647 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14648, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14655, (Optr)&t_send1, (Optr)PSend14656, (Optr)&t_method_return);
    Block PBlock14645 = new_Block_with(PArray14646, empty_Array, PThreadedCode14647, 1, PSend14656);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14657 = new_Send((Optr)PSuper14644, SMB_semantics_, 1, (Optr)PBlock14645);
    Array PThreadedCode14643 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14644, (Optr)&t_push_closure, (Optr)PBlock14645, (Optr)&t_send1, (Optr)PSend14657, (Optr)&t_method_return);
    Method PMethod14642 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14643, 1, PSend14657);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14642, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    Super PSuper14660 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14662 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14664 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend14665 = new_Send((Optr)PSend14664, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_14669 = new_String(L"");
    Array PThreadedCode14668 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_14669, (Optr)&t_block_return);
    Constant string_14669_Const = new_Constant((Optr)string_14669);
    Block PBlock14667 = new_Block_with(empty_Array, empty_Array, PThreadedCode14668, 1, string_14669_Const);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14672 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend14673 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_with_, 1, (Optr)PSend14672);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Variable VAR_i_2_1 = new_Variable_named(L"i", 2);
    Array PArray14675 = new_Array_with(2, (Optr)VAR_s_2_0, (Optr)VAR_i_2_1);
    String string_14677 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_14677_Const = new_Constant((Optr)string_14677);
    // <<. 
    Send PSend14678 = new_Send((Optr)VAR_s_2_0, SMB__shiftLeft_, 1, (Optr)string_14677_Const);
    // <<. 
    Send PSend14679 = new_Send((Optr)PSend14678, SMB__shiftLeft_, 1, (Optr)VAR_i_2_1);
    Array PThreadedCode14676 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)string_14677, (Optr)&t_send1, (Optr)PSend14678, (Optr)&t_push_variable, (Optr)VAR_i_2_1, (Optr)&t_send1, (Optr)PSend14679, (Optr)&t_method_return);
    Block PBlock14674 = new_Block_with(PArray14675, empty_Array, PThreadedCode14676, 1, PSend14679);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14680 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14673, (Optr)PBlock14674);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14681 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14671 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14672, (Optr)&t_send1, (Optr)PSend14673, (Optr)&t_push_closure, (Optr)PBlock14674, (Optr)&t_send2, (Optr)PSend14680, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14681, (Optr)&t_block_return);
    Block PBlock14670 = new_Block_with(empty_Array, empty_Array, PThreadedCode14671, 2, PSend14680, PSend14681);
    // ifTrue:ifFalse:. 
    Send PSend14666 = new_Send((Optr)PSend14665, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock14667, (Optr)PBlock14670);
    Array PThreadedCode14663 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14664, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend14665, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend14666, (Optr)PBlock14667, (Optr)PBlock14670, (Optr)&t_method_return);
    Block PBlock14661 = new_Block_with(PArray14662, empty_Array, PThreadedCode14663, 1, PSend14666);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14682 = new_Send((Optr)PSuper14660, SMB_semantics_, 1, (Optr)PBlock14661);
    Array PThreadedCode14659 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14660, (Optr)&t_push_closure, (Optr)PBlock14661, (Optr)&t_send1, (Optr)PSend14682, (Optr)&t_method_return);
    Method PMethod14658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14659, 1, PSend14682);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14658, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_createVariable_() {
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
    Array PArray14684 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14686 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14687 = new_Send((Optr)PSend14686, SMB_name_, 1, (Optr)VAR_variable_0_0);
    Array PThreadedCode14685 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14686, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send1, (Optr)PSend14687, (Optr)&t_method_return);
    Method PMethod14683 = new_Method_with(PArray14684, empty_Array, empty_Array, PThreadedCode14685, 1, PSend14687);
    
    MethodClosure MC_SMB_createVariable_ = new_MethodClosure((Method)PMethod14683, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createVariable_, MC_SMB_createVariable_);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    Super PSuper14690 = new_Super(SMB_initializeUnaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14692 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14693 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14696 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14695 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14696);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14697 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14699 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14704 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14706 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14707 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14708 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14707);
    Array PThreadedCode14705 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14706, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14707, (Optr)&t_send1, (Optr)PSend14708, (Optr)&t_method_return);
    Block PBlock14703 = new_Block_with(PArray14704, empty_Array, PThreadedCode14705, 2, PSend14706, PSend14708);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14709 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14702 = new_Send((Optr)PBlock14703, SMB_value_, 1, (Optr)PSend14709);
    Assign PAssign14701 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14702);
    Array PThreadedCode14700 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14701, (Optr)&t_push_closure, (Optr)PBlock14703, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14709, (Optr)&t_send1, (Optr)PSend14702, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14698 = new_Block_with(PArray14699, empty_Array, PThreadedCode14700, 1, PAssign14701);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14710 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14697, (Optr)PBlock14698);
    Array PThreadedCode14694 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14695, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14696, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14697, (Optr)&t_push_closure, (Optr)PBlock14698, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14710, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14691 = new_Block_with(PArray14692, PArray14693, PThreadedCode14694, 3, PAssign14695, PSend14710, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14711 = new_Send((Optr)PSuper14690, SMB_semantics_, 1, (Optr)PBlock14691);
    Array PThreadedCode14689 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14690, (Optr)&t_push_closure, (Optr)PBlock14691, (Optr)&t_send1, (Optr)PSend14711, (Optr)&t_method_return);
    Method PMethod14688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14689, 1, PSend14711);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14688, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    Super PSuper14714 = new_Super(SMB_initializeAnnotations, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14716 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14718 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14717 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14718, (Optr)&t_method_return);
    Block PBlock14715 = new_Block_with(PArray14716, empty_Array, PThreadedCode14717, 1, PSend14718);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14719 = new_Send((Optr)PSuper14714, SMB_semantics_, 1, (Optr)PBlock14715);
    Array PThreadedCode14713 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14714, (Optr)&t_push_closure, (Optr)PBlock14715, (Optr)&t_send1, (Optr)PSend14719, (Optr)&t_method_return);
    Method PMethod14712 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14713, 1, PSend14719);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14712, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    Super PSuper14722 = new_Super(SMB_initializePrimaryVariable, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14724 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14726 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    // createReference:. 
    Send PSend14727 = new_Send((Optr)self, SMB_createReference_, 1, (Optr)PSend14726);
    Array PThreadedCode14725 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14726, (Optr)&t_send1, (Optr)PSend14727, (Optr)&t_method_return);
    Block PBlock14723 = new_Block_with(PArray14724, empty_Array, PThreadedCode14725, 1, PSend14727);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14728 = new_Send((Optr)PSuper14722, SMB_semantics_, 1, (Optr)PBlock14723);
    Array PThreadedCode14721 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14722, (Optr)&t_push_closure, (Optr)PBlock14723, (Optr)&t_send1, (Optr)PSend14728, (Optr)&t_method_return);
    Method PMethod14720 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14721, 1, PSend14728);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod14720, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Super PSuper14731 = new_Super(SMB_initializeStringSegment, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14733 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14735 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14734 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14735, (Optr)&t_method_return);
    Block PBlock14732 = new_Block_with(PArray14733, empty_Array, PThreadedCode14734, 1, PSend14735);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14736 = new_Send((Optr)PSuper14731, SMB_semantics_, 1, (Optr)PBlock14732);
    Array PThreadedCode14730 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14731, (Optr)&t_push_closure, (Optr)PBlock14732, (Optr)&t_send1, (Optr)PSend14736, (Optr)&t_method_return);
    Method PMethod14729 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14730, 1, PSend14736);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14729, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_parameters_0_2 = new_Variable_named(L"parameters", 0);
    Array PArray14738 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14740 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14742 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14746 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14745 = new_Send((Optr)PSend14746, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14744 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14745);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14748 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14747 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14748);
    // new:. 
    Send PSend14750 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14749 = new_Assign((Optr)VAR_parameters_0_2, (Optr)PSend14750);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14752 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14754 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14755 = new_Send((Optr)PSend14754, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14756 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14755);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14757 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14756);
    // *. 
    Send PSend14758 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14759 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14758);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14760 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14759);
    // at:put:. 
    Send PSend14761 = new_Send((Optr)VAR_parameters_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14760);
    Array PThreadedCode14753 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14754, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14755, (Optr)&t_send1, (Optr)PSend14756, (Optr)&t_send2, (Optr)PSend14757, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14758, (Optr)&t_send1, (Optr)PSend14759, (Optr)&t_send1, (Optr)PSend14760, (Optr)&t_send2, (Optr)PSend14761, (Optr)&t_method_return);
    Block PBlock14751 = new_Block_with(PArray14752, empty_Array, PThreadedCode14753, 2, PSend14757, PSend14761);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14762 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14751);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14764 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14766 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14767 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)VAR_parameters_0_2);
    Array PThreadedCode14765 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14766, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_send1, (Optr)PSend14767, (Optr)&t_method_return);
    Block PBlock14763 = new_Block_with(PArray14764, empty_Array, PThreadedCode14765, 2, PSend14766, PSend14767);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14768 = new_Send((Optr)ASTKeywordMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14769 = new_Send((Optr)PBlock14763, SMB_value_, 1, (Optr)PSend14768);
    Array PThreadedCode14743 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14744, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14746, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14745, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14747, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14748, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14749, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14750, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14751, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14762, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14763, (Optr)&t_push_class_reference, (Optr)ASTKeywordMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14768, (Optr)&t_send1, (Optr)PSend14769, (Optr)&t_method_return);
    Block PBlock14741 = new_Block_with(PArray14742, empty_Array, PThreadedCode14743, 5, PAssign14744, PAssign14747, PAssign14749, PSend14762, PSend14769);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14770 = new_Send((Optr)PSuper14740, SMB_semantics_, 1, (Optr)PBlock14741);
    Array PThreadedCode14739 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14740, (Optr)&t_push_closure, (Optr)PBlock14741, (Optr)&t_send1, (Optr)PSend14770, (Optr)&t_method_return);
    Method PMethod14737 = new_Method_with(empty_Array, PArray14738, empty_Array, PThreadedCode14739, 1, PSend14770);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod14737, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    Super PSuper14773 = new_Super(SMB_initializeBinaryMessageDefinition, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14775 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14778 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14780 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14781 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14780);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14782 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14783 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14782);
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    // parameter:. 
    Send PSend14784 = new_Send((Optr)VAR__receiver__2_0, SMB_parameter_, 1, (Optr)PSend14783);
    Array PThreadedCode14779 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14780, (Optr)&t_send1, (Optr)PSend14781, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14782, (Optr)&t_send1, (Optr)PSend14783, (Optr)&t_send1, (Optr)PSend14784, (Optr)&t_method_return);
    Block PBlock14777 = new_Block_with(PArray14778, empty_Array, PThreadedCode14779, 2, PSend14781, PSend14784);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14785 = new_Send((Optr)ASTBinaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14786 = new_Send((Optr)PBlock14777, SMB_value_, 1, (Optr)PSend14785);
    Array PThreadedCode14776 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14777, (Optr)&t_push_class_reference, (Optr)ASTBinaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14785, (Optr)&t_send1, (Optr)PSend14786, (Optr)&t_method_return);
    Block PBlock14774 = new_Block_with(PArray14775, empty_Array, PThreadedCode14776, 1, PSend14786);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14787 = new_Send((Optr)PSuper14773, SMB_semantics_, 1, (Optr)PBlock14774);
    Array PThreadedCode14772 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14773, (Optr)&t_push_closure, (Optr)PBlock14774, (Optr)&t_send1, (Optr)PSend14787, (Optr)&t_method_return);
    Method PMethod14771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14772, 1, PSend14787);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14771, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    Super PSuper14790 = new_Super(SMB_initializeReturn, 0);
    Variable VAR_expression_1_0 = new_Variable_named(L"expression", 1);
    Array PArray14792 = new_Array_with(1, (Optr)VAR_expression_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14794 = new_Send((Optr)ASTReturnExpression_classReference, SMB_new, 0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14795 = new_Send((Optr)PSend14794, SMB_expression_, 1, (Optr)VAR_expression_1_0);
    Array PThreadedCode14793 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTReturnExpression_classReference, (Optr)&t_send0, (Optr)PSend14794, (Optr)&t_push_variable, (Optr)VAR_expression_1_0, (Optr)&t_send1, (Optr)PSend14795, (Optr)&t_method_return);
    Block PBlock14791 = new_Block_with(PArray14792, empty_Array, PThreadedCode14793, 1, PSend14795);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14796 = new_Send((Optr)PSuper14790, SMB_semantics_, 1, (Optr)PBlock14791);
    Array PThreadedCode14789 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14790, (Optr)&t_push_closure, (Optr)PBlock14791, (Optr)&t_send1, (Optr)PSend14796, (Optr)&t_method_return);
    Method PMethod14788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14789, 1, PSend14796);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14788, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    Super PSuper14799 = new_Super(SMB_initializeTemporaries, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14801 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14803 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14802 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14803, (Optr)&t_method_return);
    Block PBlock14800 = new_Block_with(PArray14801, empty_Array, PThreadedCode14802, 1, PSend14803);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14804 = new_Send((Optr)PSuper14799, SMB_semantics_, 1, (Optr)PBlock14800);
    Array PThreadedCode14798 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14799, (Optr)&t_push_closure, (Optr)PBlock14800, (Optr)&t_send1, (Optr)PSend14804, (Optr)&t_method_return);
    Method PMethod14797 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14798, 1, PSend14804);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod14797, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14806 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14808 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14810 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14814 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14813 = new_Send((Optr)PSend14814, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14812 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14813);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14816 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14815 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14816);
    // new:. 
    Send PSend14818 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14817 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14818);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14820 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14822 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14823 = new_Send((Optr)PSend14822, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14824 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14823);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14825 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14824);
    // *. 
    Send PSend14826 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14827 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14826);
    // at:put:. 
    Send PSend14828 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14827);
    Array PThreadedCode14821 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14822, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14823, (Optr)&t_send1, (Optr)PSend14824, (Optr)&t_send2, (Optr)PSend14825, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14826, (Optr)&t_send1, (Optr)PSend14827, (Optr)&t_send2, (Optr)PSend14828, (Optr)&t_method_return);
    Block PBlock14819 = new_Block_with(PArray14820, empty_Array, PThreadedCode14821, 2, PSend14825, PSend14828);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14829 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14819);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14831 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14833 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14834 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14832 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14833, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14834, (Optr)&t_method_return);
    Block PBlock14830 = new_Block_with(PArray14831, empty_Array, PThreadedCode14832, 2, PSend14833, PSend14834);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14835 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14836 = new_Send((Optr)PBlock14830, SMB_value_, 1, (Optr)PSend14835);
    Array PThreadedCode14811 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14812, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14814, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14813, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14815, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14816, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14817, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14818, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14819, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14829, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14830, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14835, (Optr)&t_send1, (Optr)PSend14836, (Optr)&t_method_return);
    Block PBlock14809 = new_Block_with(PArray14810, empty_Array, PThreadedCode14811, 5, PAssign14812, PAssign14815, PAssign14817, PSend14829, PSend14836);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14837 = new_Send((Optr)PSuper14808, SMB_semantics_, 1, (Optr)PBlock14809);
    Array PThreadedCode14807 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14808, (Optr)&t_push_closure, (Optr)PBlock14809, (Optr)&t_send1, (Optr)PSend14837, (Optr)&t_method_return);
    Method PMethod14805 = new_Method_with(empty_Array, PArray14806, empty_Array, PThreadedCode14807, 1, PSend14837);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod14805, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    Super PSuper14840 = new_Super(SMB_initializeSymbolKeywords, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14842 = new_Array_with(1, (Optr)VAR_result_1_0);
    String string_14844 = new_String(L"");
    Symbol SMB_on_ = new_Symbol(L"on:");
    Constant string_14844_Const = new_Constant((Optr)string_14844);
    // on:. 
    Send PSend14845 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_on_, 1, (Optr)string_14844_Const);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Variable VAR_e_2_1 = new_Variable_named(L"e", 2);
    Array PArray14847 = new_Array_with(2, (Optr)VAR_c_2_0, (Optr)VAR_e_2_1);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend14849 = new_Send((Optr)VAR_c_2_0, SMB__shiftLeft_, 1, (Optr)VAR_e_2_1);
    Array PThreadedCode14848 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_push_variable, (Optr)VAR_e_2_1, (Optr)&t_send1, (Optr)PSend14849, (Optr)&t_method_return);
    Block PBlock14846 = new_Block_with(PArray14847, empty_Array, PThreadedCode14848, 1, PSend14849);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14850 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14845, (Optr)PBlock14846);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14851 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14843 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push1, (Optr)string_14844, (Optr)&t_send1, (Optr)PSend14845, (Optr)&t_push_closure, (Optr)PBlock14846, (Optr)&t_send2, (Optr)PSend14850, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14851, (Optr)&t_method_return);
    Block PBlock14841 = new_Block_with(PArray14842, empty_Array, PThreadedCode14843, 2, PSend14850, PSend14851);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14852 = new_Send((Optr)PSuper14840, SMB_semantics_, 1, (Optr)PBlock14841);
    Array PThreadedCode14839 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14840, (Optr)&t_push_closure, (Optr)PBlock14841, (Optr)&t_send1, (Optr)PSend14852, (Optr)&t_method_return);
    Method PMethod14838 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14839, 1, PSend14852);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod14838, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    Super PSuper14855 = new_Super(SMB_initializeAssignmentExpressions, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14857 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14859 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14858 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14859, (Optr)&t_method_return);
    Block PBlock14856 = new_Block_with(PArray14857, empty_Array, PThreadedCode14858, 1, PSend14859);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14860 = new_Send((Optr)PSuper14855, SMB_semantics_, 1, (Optr)PBlock14856);
    Array PThreadedCode14854 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14855, (Optr)&t_push_closure, (Optr)PBlock14856, (Optr)&t_send1, (Optr)PSend14860, (Optr)&t_method_return);
    Method PMethod14853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14854, 1, PSend14860);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14853, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Super PSuper14863 = new_Super(SMB_preStoreCascadedMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14865 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14868 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14870 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend14871 = new_Send((Optr)PSend14870, SMB_receiver, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14872 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend14871);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14873 = new_Send((Optr)VAR_parts_1_0, SMB_asArray, 0);
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    // cascades:. 
    Send PSend14874 = new_Send((Optr)VAR__receiver__2_0, SMB_cascades_, 1, (Optr)PSend14873);
    Array PThreadedCode14869 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14870, (Optr)&t_send0, (Optr)PSend14871, (Optr)&t_send1, (Optr)PSend14872, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14873, (Optr)&t_send1, (Optr)PSend14874, (Optr)&t_method_return);
    Block PBlock14867 = new_Block_with(PArray14868, empty_Array, PThreadedCode14869, 2, PSend14872, PSend14874);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14875 = new_Send((Optr)ASTMessageCascadeExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14876 = new_Send((Optr)PBlock14867, SMB_value_, 1, (Optr)PSend14875);
    Array PThreadedCode14866 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14867, (Optr)&t_push_class_reference, (Optr)ASTMessageCascadeExpression_classReference, (Optr)&t_send0, (Optr)PSend14875, (Optr)&t_send1, (Optr)PSend14876, (Optr)&t_method_return);
    Block PBlock14864 = new_Block_with(PArray14865, empty_Array, PThreadedCode14866, 1, PSend14876);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14877 = new_Send((Optr)PSuper14863, SMB_semantics_, 1, (Optr)PBlock14864);
    Array PThreadedCode14862 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14863, (Optr)&t_push_closure, (Optr)PBlock14864, (Optr)&t_send1, (Optr)PSend14877, (Optr)&t_method_return);
    Method PMethod14861 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14862, 1, PSend14877);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod14861, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    Super PSuper14880 = new_Super(SMB_initializeUnaryAnnotation, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14882 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14884 = new_Send((Optr)ASTUnaryAnnotation_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14885 = new_Send((Optr)PSend14884, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14883 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14884, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14885, (Optr)&t_method_return);
    Block PBlock14881 = new_Block_with(PArray14882, empty_Array, PThreadedCode14883, 1, PSend14885);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14886 = new_Send((Optr)PSuper14880, SMB_semantics_, 1, (Optr)PBlock14881);
    Array PThreadedCode14879 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14880, (Optr)&t_push_closure, (Optr)PBlock14881, (Optr)&t_send1, (Optr)PSend14886, (Optr)&t_method_return);
    Method PMethod14878 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14879, 1, PSend14886);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14878, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    Super PSuper14889 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14891 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14893 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14894 = new_Send((Optr)PSend14893, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14898 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14899 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // add:. 
    Send PSend14900 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PSend14899);
    Array PThreadedCode14897 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14898, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend14899, (Optr)&t_send1, (Optr)PSend14900, (Optr)&t_block_return);
    Block PBlock14896 = new_Block_with(empty_Array, empty_Array, PThreadedCode14897, 2, PSend14898, PSend14900);
    // ifTrue:. 
    Send PSend14895 = new_Send((Optr)PSend14894, SMB_ifTrue_, 1, (Optr)PBlock14896);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14902 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14904 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    // new. 
    Send PSend14907 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14906 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14907, (Optr)&t_block_return);
    Block PBlock14905 = new_Block_with(empty_Array, empty_Array, PThreadedCode14906, 1, PSend14907);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14908 = new_Send((Optr)PSend14904, SMB_resultIfFailed_, 1, (Optr)PBlock14905);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14909 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)PSend14908);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14910 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    // new. 
    Send PSend14913 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14912 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14913, (Optr)&t_block_return);
    Block PBlock14911 = new_Block_with(empty_Array, empty_Array, PThreadedCode14912, 1, PSend14913);
    // resultIfFailed:. 
    Send PSend14914 = new_Send((Optr)PSend14910, SMB_resultIfFailed_, 1, (Optr)PBlock14911);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14915 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14914);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14916 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14917 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14916);
    Array PThreadedCode14903 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14904, (Optr)&t_push_closure, (Optr)PBlock14905, (Optr)&t_send1, (Optr)PSend14908, (Optr)&t_send1, (Optr)PSend14909, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14910, (Optr)&t_push_closure, (Optr)PBlock14911, (Optr)&t_send1, (Optr)PSend14914, (Optr)&t_send1, (Optr)PSend14915, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14916, (Optr)&t_send1, (Optr)PSend14917, (Optr)&t_method_return);
    Block PBlock14901 = new_Block_with(PArray14902, empty_Array, PThreadedCode14903, 3, PSend14909, PSend14915, PSend14917);
    // new. 
    Send PSend14918 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14919 = new_Send((Optr)PBlock14901, SMB_value_, 1, (Optr)PSend14918);
    Array PThreadedCode14892 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14893, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14894, (Optr)&t_send_ifTrue_, (Optr)PSend14895, (Optr)PBlock14896, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14901, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend14918, (Optr)&t_send1, (Optr)PSend14919, (Optr)&t_method_return);
    Block PBlock14890 = new_Block_with(PArray14891, empty_Array, PThreadedCode14892, 2, PSend14895, PSend14919);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14920 = new_Send((Optr)PSuper14889, SMB_semantics_, 1, (Optr)PBlock14890);
    Array PThreadedCode14888 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14889, (Optr)&t_push_closure, (Optr)PBlock14890, (Optr)&t_send1, (Optr)PSend14920, (Optr)&t_method_return);
    Method PMethod14887 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14888, 1, PSend14920);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod14887, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_class_SMB_match_in_() {
    Symbol SMB_match_in_ = new_Symbol(L"match:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray14922 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend14924 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14925 = new_Send((Optr)PSend14924, SMB_method, 0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend14926 = new_Send((Optr)VAR_class_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14927 = new_Send((Optr)PSend14926, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14928 = new_Send((Optr)PSend14927, SMB_asString, 0);
    // asString. 
    Send PSend14929 = new_Send((Optr)PSend14928, SMB_asString, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14930 = new_Send((Optr)PSend14925, SMB_parse_, 1, (Optr)PSend14929);
    Array PThreadedCode14923 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14924, (Optr)&t_send0, (Optr)PSend14925, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send0, (Optr)PSend14926, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend14927, (Optr)&t_send0, (Optr)PSend14928, (Optr)&t_send0, (Optr)PSend14929, (Optr)&t_send1, (Optr)PSend14930, (Optr)&t_method_return);
    Method PMethod14921 = new_Method_with(PArray14922, empty_Array, empty_Array, PThreadedCode14923, 1, PSend14930);
    
    MethodClosure MC_SMB_match_in_ = new_MethodClosure((Method)PMethod14921, HEADER(Smalltalk_Parser_SmalltalkParser_Class));
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