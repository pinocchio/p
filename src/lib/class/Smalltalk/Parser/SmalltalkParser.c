#include <lib/class/Smalltalk/Parser/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParser_stream;
Optr layout_Smalltalk_Parser_SmalltalkParser;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    Super PSuper14225 = new_Super(SMB_initializeUnaryMessageExpression, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14227 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14229 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14230 = new_Send((Optr)PSend14229, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14228 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14229, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14230, (Optr)&t_method_return);
    Block PBlock14226 = new_Block_with(PArray14227, empty_Array, PThreadedCode14228, 1, PSend14230);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14231 = new_Send((Optr)PSuper14225, SMB_semantics_, 1, (Optr)PBlock14226);
    Array PThreadedCode14224 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14225, (Optr)&t_push_closure, (Optr)PBlock14226, (Optr)&t_send1, (Optr)PSend14231, (Optr)&t_method_return);
    Method PMethod14223 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14224, 1, PSend14231);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod14223, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    Super PSuper14234 = new_Super(SMB_initializeUnarySelector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14236 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14237 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_method_return);
    Block PBlock14235 = new_Block_with(PArray14236, empty_Array, PThreadedCode14237, 1, VAR_selector_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14238 = new_Send((Optr)PSuper14234, SMB_semantics_, 1, (Optr)PBlock14235);
    Array PThreadedCode14233 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14234, (Optr)&t_push_closure, (Optr)PBlock14235, (Optr)&t_send1, (Optr)PSend14238, (Optr)&t_method_return);
    Method PMethod14232 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14233, 1, PSend14238);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod14232, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    Super PSuper14241 = new_Super(SMB_initializeNumber, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14243 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14246 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14248 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)VAR_result_1_0);
    String string_14249 = new_String(L"10");
    Symbol SMB_base_ = new_Symbol(L"base:");
    Constant string_14249_Const = new_Constant((Optr)string_14249);
    // base:. 
    Send PSend14250 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)string_14249_Const);
    Array PThreadedCode14247 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14248, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_14249, (Optr)&t_send1, (Optr)PSend14250, (Optr)&t_method_return);
    Block PBlock14245 = new_Block_with(PArray14246, empty_Array, PThreadedCode14247, 2, PSend14248, PSend14250);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14251 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14252 = new_Send((Optr)PBlock14245, SMB_value_, 1, (Optr)PSend14251);
    Array PThreadedCode14244 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14245, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14251, (Optr)&t_send1, (Optr)PSend14252, (Optr)&t_method_return);
    Block PBlock14242 = new_Block_with(PArray14243, empty_Array, PThreadedCode14244, 1, PSend14252);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14253 = new_Send((Optr)PSuper14241, SMB_semantics_, 1, (Optr)PBlock14242);
    Array PThreadedCode14240 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14241, (Optr)&t_push_closure, (Optr)PBlock14242, (Optr)&t_send1, (Optr)PSend14253, (Optr)&t_method_return);
    Method PMethod14239 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14240, 1, PSend14253);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod14239, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    Super PSuper14256 = new_Super(SMB_initializeIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14258 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14260 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14259 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14260, (Optr)&t_method_return);
    Block PBlock14257 = new_Block_with(PArray14258, empty_Array, PThreadedCode14259, 1, PSend14260);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14261 = new_Send((Optr)PSuper14256, SMB_semantics_, 1, (Optr)PBlock14257);
    Array PThreadedCode14255 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14256, (Optr)&t_push_closure, (Optr)PBlock14257, (Optr)&t_send1, (Optr)PSend14261, (Optr)&t_method_return);
    Method PMethod14254 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14255, 1, PSend14261);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod14254, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    Super PSuper14264 = new_Super(SMB_initializeRadix, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14266 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14269 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14271 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend14272 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)PSend14271);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14273 = new_Send((Optr)VAR_result_1_0, SMB_second, 0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14274 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)PSend14273);
    Array PThreadedCode14270 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14271, (Optr)&t_send1, (Optr)PSend14272, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14273, (Optr)&t_send1, (Optr)PSend14274, (Optr)&t_method_return);
    Block PBlock14268 = new_Block_with(PArray14269, empty_Array, PThreadedCode14270, 2, PSend14272, PSend14274);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14275 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14276 = new_Send((Optr)PBlock14268, SMB_value_, 1, (Optr)PSend14275);
    Array PThreadedCode14267 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14268, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14275, (Optr)&t_send1, (Optr)PSend14276, (Optr)&t_method_return);
    Block PBlock14265 = new_Block_with(PArray14266, empty_Array, PThreadedCode14267, 1, PSend14276);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14277 = new_Send((Optr)PSuper14264, SMB_semantics_, 1, (Optr)PBlock14265);
    Array PThreadedCode14263 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14264, (Optr)&t_push_closure, (Optr)PBlock14265, (Optr)&t_send1, (Optr)PSend14277, (Optr)&t_method_return);
    Method PMethod14262 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14263, 1, PSend14277);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14262, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    Super PSuper14280 = new_Super(SMB_initializeUnaryObjectDescription, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14282 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14283 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14286 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14285 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14286);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14287 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14289 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14294 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14296 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14297 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14298 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14297);
    Array PThreadedCode14295 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14296, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14297, (Optr)&t_send1, (Optr)PSend14298, (Optr)&t_method_return);
    Block PBlock14293 = new_Block_with(PArray14294, empty_Array, PThreadedCode14295, 2, PSend14296, PSend14298);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14299 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14292 = new_Send((Optr)PBlock14293, SMB_value_, 1, (Optr)PSend14299);
    Assign PAssign14291 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14292);
    Array PThreadedCode14290 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14291, (Optr)&t_push_closure, (Optr)PBlock14293, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14299, (Optr)&t_send1, (Optr)PSend14292, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14288 = new_Block_with(PArray14289, empty_Array, PThreadedCode14290, 1, PAssign14291);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14300 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14287, (Optr)PBlock14288);
    Array PThreadedCode14284 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14285, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14286, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14287, (Optr)&t_push_closure, (Optr)PBlock14288, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14300, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14281 = new_Block_with(PArray14282, PArray14283, PThreadedCode14284, 3, PAssign14285, PSend14300, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14301 = new_Send((Optr)PSuper14280, SMB_semantics_, 1, (Optr)PBlock14281);
    Array PThreadedCode14279 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14280, (Optr)&t_push_closure, (Optr)PBlock14281, (Optr)&t_send1, (Optr)PSend14301, (Optr)&t_method_return);
    Method PMethod14278 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14279, 1, PSend14301);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14278, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    Super PSuper14304 = new_Super(SMB_initializeVariableName, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14306 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14308 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14307 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14308, (Optr)&t_method_return);
    Block PBlock14305 = new_Block_with(PArray14306, empty_Array, PThreadedCode14307, 1, PSend14308);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14309 = new_Send((Optr)PSuper14304, SMB_semantics_, 1, (Optr)PBlock14305);
    Array PThreadedCode14303 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14304, (Optr)&t_push_closure, (Optr)PBlock14305, (Optr)&t_send1, (Optr)PSend14309, (Optr)&t_method_return);
    Method PMethod14302 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14303, 1, PSend14309);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod14302, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    Super PSuper14312 = new_Super(SMB_initializeSymbolInArray, 0);
    Variable VAR_symbol_1_0 = new_Variable_named(L"symbol", 1);
    Array PArray14314 = new_Array_with(1, (Optr)VAR_symbol_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14316 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_symbol_1_0);
    Array PThreadedCode14315 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_symbol_1_0, (Optr)&t_send1, (Optr)PSend14316, (Optr)&t_method_return);
    Block PBlock14313 = new_Block_with(PArray14314, empty_Array, PThreadedCode14315, 1, PSend14316);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14317 = new_Send((Optr)PSuper14312, SMB_semantics_, 1, (Optr)PBlock14313);
    Array PThreadedCode14311 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14312, (Optr)&t_push_closure, (Optr)PBlock14313, (Optr)&t_send1, (Optr)PSend14317, (Optr)&t_method_return);
    Method PMethod14310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14311, 1, PSend14317);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14310, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    Super PSuper14320 = new_Super(SMB_initializeStatements, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14322 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend14324 = new_Send((Optr)VAR_result_1_0, SMB_removeLast, 0);
    Variable VAR_exp_2_0 = new_Variable_named(L"exp", 2);
    Array PArray14326 = new_Array_with(1, (Optr)VAR_exp_2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14328 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)VAR_exp_2_0);
    Array PThreadedCode14327 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_variable, (Optr)VAR_exp_2_0, (Optr)&t_send1, (Optr)PSend14328, (Optr)&t_method_return);
    Block PBlock14325 = new_Block_with(PArray14326, empty_Array, PThreadedCode14327, 1, PSend14328);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14329 = new_Send((Optr)PSend14324, SMB_ifMatched_, 1, (Optr)PBlock14325);
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend14330 = new_Send((Optr)VAR_result_1_0, SMB_asOrderedCollection, 0);
    Array PThreadedCode14323 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14324, (Optr)&t_push_closure, (Optr)PBlock14325, (Optr)&t_send1, (Optr)PSend14329, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14330, (Optr)&t_method_return);
    Block PBlock14321 = new_Block_with(PArray14322, empty_Array, PThreadedCode14323, 2, PSend14329, PSend14330);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14331 = new_Send((Optr)PSuper14320, SMB_semantics_, 1, (Optr)PBlock14321);
    Array PThreadedCode14319 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14320, (Optr)&t_push_closure, (Optr)PBlock14321, (Optr)&t_send1, (Optr)PSend14331, (Optr)&t_method_return);
    Method PMethod14318 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14319, 1, PSend14331);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14318, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    Super PSuper14334 = new_Super(SMB_initializeCapitalIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14336 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14338 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14337 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14338, (Optr)&t_method_return);
    Block PBlock14335 = new_Block_with(PArray14336, empty_Array, PThreadedCode14337, 1, PSend14338);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14339 = new_Send((Optr)PSuper14334, SMB_semantics_, 1, (Optr)PBlock14335);
    Array PThreadedCode14333 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14334, (Optr)&t_push_closure, (Optr)PBlock14335, (Optr)&t_send1, (Optr)PSend14339, (Optr)&t_method_return);
    Method PMethod14332 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14333, 1, PSend14339);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod14332, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    Super PSuper14342 = new_Super(SMB_initializeSymbolConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14344 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14346 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14345 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14346, (Optr)&t_method_return);
    Block PBlock14343 = new_Block_with(PArray14344, empty_Array, PThreadedCode14345, 1, PSend14346);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14347 = new_Send((Optr)PSuper14342, SMB_semantics_, 1, (Optr)PBlock14343);
    Array PThreadedCode14341 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14342, (Optr)&t_push_closure, (Optr)PBlock14343, (Optr)&t_send1, (Optr)PSend14347, (Optr)&t_method_return);
    Method PMethod14340 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14341, 1, PSend14347);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14340, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Super PSuper14350 = new_Super(SMB_initializeArray, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14352 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14354 = new_Send((Optr)ASTArray_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14355 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    // literals:. 
    Send PSend14356 = new_Send((Optr)PSend14354, SMB_literals_, 1, (Optr)PSend14355);
    Array PThreadedCode14353 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)ASTArray_classReference, (Optr)&t_send0, (Optr)PSend14354, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14355, (Optr)&t_send1, (Optr)PSend14356, (Optr)&t_method_return);
    Block PBlock14351 = new_Block_with(PArray14352, empty_Array, PThreadedCode14353, 1, PSend14356);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14357 = new_Send((Optr)PSuper14350, SMB_semantics_, 1, (Optr)PBlock14351);
    Array PThreadedCode14349 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14350, (Optr)&t_push_closure, (Optr)PBlock14351, (Optr)&t_send1, (Optr)PSend14357, (Optr)&t_method_return);
    Method PMethod14348 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14349, 1, PSend14357);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14348, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    Super PSuper14360 = new_Super(SMB_initializeBinarySelector, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14362 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14364 = new_Send((Optr)VAR_result_1_0, SMB_asSymbol, 0);
    Array PThreadedCode14363 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14364, (Optr)&t_method_return);
    Block PBlock14361 = new_Block_with(PArray14362, empty_Array, PThreadedCode14363, 1, PSend14364);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14365 = new_Send((Optr)PSuper14360, SMB_semantics_, 1, (Optr)PBlock14361);
    Array PThreadedCode14359 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14360, (Optr)&t_push_closure, (Optr)PBlock14361, (Optr)&t_send1, (Optr)PSend14365, (Optr)&t_method_return);
    Method PMethod14358 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14359, 1, PSend14365);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod14358, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_createReference_() {
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    Variable VAR_path_0_0 = new_Variable_named(L"path", 0);
    Array PArray14367 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14368 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14371 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14373 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14374 = new_Send((Optr)PSend14373, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14379 = new_Send((Optr)VAR_path_0_0, SMB_first, 0);
    Assign PAssign14378 = new_Assign((Optr)VAR_name_0_1, (Optr)PSend14379);
    Symbol  SMB_self = new_Symbol(L"self");
    Constant SMB_self_Const = new_Constant((Optr)SMB_self);
    // =. 
    Send PSend14380 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_self_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14384 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14385 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14384);
    Array PThreadedCode14383 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend14384, (Optr)&t_send1, (Optr)PSend14385, (Optr)&t_block_return);
    Block PBlock14382 = new_Block_with(empty_Array, empty_Array, PThreadedCode14383, 1, PSend14385);
    // ifTrue:. 
    Send PSend14381 = new_Send((Optr)PSend14380, SMB_ifTrue_, 1, (Optr)PBlock14382);
    Symbol  SMB_super = new_Symbol(L"super");
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    // =. 
    Send PSend14386 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_super_Const);
    // new. 
    Send PSend14390 = new_Send((Optr)ASTSuper_classReference, SMB_new, 0);
    // escape:. 
    Send PSend14391 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14390);
    Array PThreadedCode14389 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send0, (Optr)PSend14390, (Optr)&t_send1, (Optr)PSend14391, (Optr)&t_block_return);
    Block PBlock14388 = new_Block_with(empty_Array, empty_Array, PThreadedCode14389, 1, PSend14391);
    // ifTrue:. 
    Send PSend14387 = new_Send((Optr)PSend14386, SMB_ifTrue_, 1, (Optr)PBlock14388);
    // new. 
    Send PSend14392 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14393 = new_Send((Optr)PSend14392, SMB_name_, 1, (Optr)VAR_name_0_1);
    // escape:. 
    Send PSend14394 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14393);
    Array PThreadedCode14377 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push1, (Optr)PAssign14378, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14379, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_self, (Optr)&t_send1, (Optr)PSend14380, (Optr)&t_send_ifTrue_, (Optr)PSend14381, (Optr)PBlock14382, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_send1, (Optr)PSend14386, (Optr)&t_send_ifTrue_, (Optr)PSend14387, (Optr)PBlock14388, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14392, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_send1, (Optr)PSend14393, (Optr)&t_send1, (Optr)PSend14394, (Optr)&t_block_return);
    Block PBlock14376 = new_Block_with(empty_Array, empty_Array, PThreadedCode14377, 4, PAssign14378, PSend14381, PSend14387, PSend14394);
    // ifTrue:. 
    Send PSend14375 = new_Send((Optr)PSend14374, SMB_ifTrue_, 1, (Optr)PBlock14376);
    // new. 
    Send PSend14395 = new_Send((Optr)ASTPath_classReference, SMB_new, 0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend14396 = new_Send((Optr)PSend14395, SMB_path_, 1, (Optr)VAR_path_0_0);
    Array PThreadedCode14372 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14373, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14374, (Optr)&t_send_ifTrue_, (Optr)PSend14375, (Optr)PBlock14376, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)ASTPath_classReference, (Optr)&t_send0, (Optr)PSend14395, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send1, (Optr)PSend14396, (Optr)&t_method_return);
    Block PBlock14370 = new_Block_with(PArray14371, empty_Array, PThreadedCode14372, 2, PSend14375, PSend14396);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14397 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14370);
    Array PThreadedCode14369 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14370, (Optr)&t_send1, (Optr)PSend14397, (Optr)&t_method_return);
    Method PMethod14366 = new_Method_with(PArray14367, PArray14368, empty_Array, PThreadedCode14369, 1, PSend14397);
    
    MethodClosure MC_SMB_createReference_ = new_MethodClosure((Method)PMethod14366, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createReference_, MC_SMB_createReference_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14400 = new_Super(SMB_initialize, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend14403 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14402 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14403);
    Assign PAssign14401 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14402);
    Array PThreadedCode14399 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14400, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14401, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14403, (Optr)&t_send1, (Optr)PSend14402, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14398 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14399, 3, PSuper14400, PAssign14401, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14398, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    Super PSuper14406 = new_Super(SMB_initializeStringConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14408 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14410 = new_Send((Optr)ASTString_classReference, SMB_new, 0);
    Symbol SMB_string_ = new_Symbol(L"string:");
    // string:. 
    Send PSend14411 = new_Send((Optr)PSend14410, SMB_string_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14409 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTString_classReference, (Optr)&t_send0, (Optr)PSend14410, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14411, (Optr)&t_method_return);
    Block PBlock14407 = new_Block_with(PArray14408, empty_Array, PThreadedCode14409, 1, PSend14411);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14412 = new_Send((Optr)PSuper14406, SMB_semantics_, 1, (Optr)PBlock14407);
    Array PThreadedCode14405 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14406, (Optr)&t_push_closure, (Optr)PBlock14407, (Optr)&t_send1, (Optr)PSend14412, (Optr)&t_method_return);
    Method PMethod14404 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14405, 1, PSend14412);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod14404, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    Super PSuper14415 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14417 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14419 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14420 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14421 = new_Send((Optr)PSend14419, SMB_receiver_, 1, (Optr)PSend14420);
    Array PThreadedCode14418 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14419, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14420, (Optr)&t_send1, (Optr)PSend14421, (Optr)&t_method_return);
    Block PBlock14416 = new_Block_with(PArray14417, empty_Array, PThreadedCode14418, 1, PSend14421);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14422 = new_Send((Optr)PSuper14415, SMB_semantics_, 1, (Optr)PBlock14416);
    Array PThreadedCode14414 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14415, (Optr)&t_push_closure, (Optr)PBlock14416, (Optr)&t_send1, (Optr)PSend14422, (Optr)&t_method_return);
    Method PMethod14413 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14414, 1, PSend14422);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod14413, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    Variable VAR_optionalAssignment_0_0 = new_Variable_named(L"optionalAssignment", 0);
    Variable VAR_isAssignment_0_1 = new_Variable_named(L"isAssignment", 0);
    Variable VAR_keywords_0_2 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_3 = new_Variable_named(L"arguments", 0);
    Array PArray14424 = new_Array_with(4, (Optr)VAR_optionalAssignment_0_0, (Optr)VAR_isAssignment_0_1, (Optr)VAR_keywords_0_2, (Optr)VAR_arguments_0_3);
    Super PSuper14426 = new_Super(SMB_initializeBracketIndexExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14428 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14431 = new_Send((Optr)VAR_parts_1_0, SMB_second, 0);
    Assign PAssign14430 = new_Assign((Optr)VAR_optionalAssignment_0_0, (Optr)PSend14431);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend14434 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend14433 = new_Send((Optr)PSend14434, SMB__pequals_, 1, (Optr)PEGSucceededOptionalResult_classReference);
    Assign PAssign14432 = new_Assign((Optr)VAR_isAssignment_0_1, (Optr)PSend14433);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol  SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_at__Const = new_Constant((Optr)SMB_at_);
    // with:. 
    Send PSend14439 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14438 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14439, (Optr)&t_block_return);
    Block PBlock14437 = new_Block_with(empty_Array, empty_Array, PThreadedCode14438, 1, PSend14439);
    Symbol  SMB_put_ = new_Symbol(L"put:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_put__Const = new_Constant((Optr)SMB_put_);
    // with:with:. 
    Send PSend14442 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_at__Const, (Optr)SMB_put__Const);
    Array PThreadedCode14441 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_push1, (Optr)SMB_put_, (Optr)&t_send2, (Optr)PSend14442, (Optr)&t_block_return);
    Block PBlock14440 = new_Block_with(empty_Array, empty_Array, PThreadedCode14441, 1, PSend14442);
    // ifFalse:ifTrue:. 
    Send PSend14436 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14437, (Optr)PBlock14440);
    Assign PAssign14435 = new_Assign((Optr)VAR_keywords_0_2, (Optr)PSend14436);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14447 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    // with:. 
    Send PSend14448 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend14447);
    Array PThreadedCode14446 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14447, (Optr)&t_send1, (Optr)PSend14448, (Optr)&t_block_return);
    Block PBlock14445 = new_Block_with(empty_Array, empty_Array, PThreadedCode14446, 1, PSend14448);
    // first. 
    Send PSend14451 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_result = new_Symbol(L"result");
    // result. 
    Send PSend14452 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_result, 0);
    // with:with:. 
    Send PSend14453 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend14451, (Optr)PSend14452);
    Array PThreadedCode14450 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14451, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14452, (Optr)&t_send2, (Optr)PSend14453, (Optr)&t_block_return);
    Block PBlock14449 = new_Block_with(empty_Array, empty_Array, PThreadedCode14450, 1, PSend14453);
    // ifFalse:ifTrue:. 
    Send PSend14444 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14445, (Optr)PBlock14449);
    Assign PAssign14443 = new_Assign((Optr)VAR_arguments_0_3, (Optr)PSend14444);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14455 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14457 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_2);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14458 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_3);
    Array PThreadedCode14456 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_2, (Optr)&t_send1, (Optr)PSend14457, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_3, (Optr)&t_send1, (Optr)PSend14458, (Optr)&t_method_return);
    Block PBlock14454 = new_Block_with(PArray14455, empty_Array, PThreadedCode14456, 2, PSend14457, PSend14458);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14459 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14460 = new_Send((Optr)PBlock14454, SMB_value_, 1, (Optr)PSend14459);
    Array PThreadedCode14429 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14430, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14431, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14432, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14434, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14433, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14435, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14436, (Optr)PBlock14437, (Optr)PBlock14440, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14443, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14444, (Optr)PBlock14445, (Optr)PBlock14449, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14454, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14459, (Optr)&t_send1, (Optr)PSend14460, (Optr)&t_method_return);
    Block PBlock14427 = new_Block_with(PArray14428, empty_Array, PThreadedCode14429, 5, PAssign14430, PAssign14432, PAssign14435, PAssign14443, PSend14460);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14461 = new_Send((Optr)PSuper14426, SMB_semantics_, 1, (Optr)PBlock14427);
    Array PThreadedCode14425 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14426, (Optr)&t_push_closure, (Optr)PBlock14427, (Optr)&t_send1, (Optr)PSend14461, (Optr)&t_method_return);
    Method PMethod14423 = new_Method_with(empty_Array, PArray14424, empty_Array, PThreadedCode14425, 1, PSend14461);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod14423, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Super PSuper14464 = new_Super(SMB_initializeBinaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14466 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14467 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14470 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14469 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14470);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14471 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14473 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14478 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14480 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14481 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14482 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14481);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend14483 = new_Send((Optr)VAR_i_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend14484 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14483);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14485 = new_Send((Optr)VAR__receiver__3_0, SMB_argument_, 1, (Optr)PSend14484);
    Array PThreadedCode14479 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14480, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14481, (Optr)&t_send1, (Optr)PSend14482, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14483, (Optr)&t_send1, (Optr)PSend14484, (Optr)&t_send1, (Optr)PSend14485, (Optr)&t_method_return);
    Block PBlock14477 = new_Block_with(PArray14478, empty_Array, PThreadedCode14479, 3, PSend14480, PSend14482, PSend14485);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14486 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14476 = new_Send((Optr)PBlock14477, SMB_value_, 1, (Optr)PSend14486);
    Assign PAssign14475 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14476);
    Array PThreadedCode14474 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14475, (Optr)&t_push_closure, (Optr)PBlock14477, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14486, (Optr)&t_send1, (Optr)PSend14476, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14472 = new_Block_with(PArray14473, empty_Array, PThreadedCode14474, 1, PAssign14475);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend14487 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14471, (Optr)int_2_Const, (Optr)PBlock14472);
    Array PThreadedCode14468 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14469, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14470, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14471, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14472, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14487, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14465 = new_Block_with(PArray14466, PArray14467, PThreadedCode14468, 3, PAssign14469, PSend14487, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14488 = new_Send((Optr)PSuper14464, SMB_semantics_, 1, (Optr)PBlock14465);
    Array PThreadedCode14463 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14464, (Optr)&t_push_closure, (Optr)PBlock14465, (Optr)&t_send1, (Optr)PSend14488, (Optr)&t_method_return);
    Method PMethod14462 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14463, 1, PSend14488);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14462, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    Super PSuper14491 = new_Super(SMB_initializeScopedExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14493 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_scoped = new_Symbol(L"scoped");
    // scoped. 
    Send PSend14495 = new_Send((Optr)VAR_result_1_0, SMB_scoped, 0);
    Array PThreadedCode14494 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14495, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_method_return);
    Block PBlock14492 = new_Block_with(PArray14493, empty_Array, PThreadedCode14494, 2, PSend14495, VAR_result_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14496 = new_Send((Optr)PSuper14491, SMB_semantics_, 1, (Optr)PBlock14492);
    Array PThreadedCode14490 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14491, (Optr)&t_push_closure, (Optr)PBlock14492, (Optr)&t_send1, (Optr)PSend14496, (Optr)&t_method_return);
    Method PMethod14489 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14490, 1, PSend14496);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod14489, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    Super PSuper14499 = new_Super(SMB_initializeCharacterConstant, 0);
    Variable VAR_char_1_0 = new_Variable_named(L"char", 1);
    Array PArray14501 = new_Array_with(1, (Optr)VAR_char_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14503 = new_Send((Optr)ASTCharacter_classReference, SMB_new, 0);
    Symbol SMB_char_ = new_Symbol(L"char:");
    // char:. 
    Send PSend14504 = new_Send((Optr)PSend14503, SMB_char_, 1, (Optr)VAR_char_1_0);
    Array PThreadedCode14502 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTCharacter_classReference, (Optr)&t_send0, (Optr)PSend14503, (Optr)&t_push_variable, (Optr)VAR_char_1_0, (Optr)&t_send1, (Optr)PSend14504, (Optr)&t_method_return);
    Block PBlock14500 = new_Block_with(PArray14501, empty_Array, PThreadedCode14502, 1, PSend14504);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14505 = new_Send((Optr)PSuper14499, SMB_semantics_, 1, (Optr)PBlock14500);
    Array PThreadedCode14498 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14499, (Optr)&t_push_closure, (Optr)PBlock14500, (Optr)&t_send1, (Optr)PSend14505, (Optr)&t_method_return);
    Method PMethod14497 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14498, 1, PSend14505);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod14497, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    Super PSuper14508 = new_Super(SMB_initializeNumberFormat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14510 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14512 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14511 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14512, (Optr)&t_method_return);
    Block PBlock14509 = new_Block_with(PArray14510, empty_Array, PThreadedCode14511, 1, PSend14512);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14513 = new_Send((Optr)PSuper14508, SMB_semantics_, 1, (Optr)PBlock14509);
    Array PThreadedCode14507 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14508, (Optr)&t_push_closure, (Optr)PBlock14509, (Optr)&t_send1, (Optr)PSend14513, (Optr)&t_method_return);
    Method PMethod14506 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14507, 1, PSend14513);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod14506, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    Super PSuper14516 = new_Super(SMB_initializeMethod, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14518 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14521 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14523 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend14524 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)PSend14523);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14525 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend14526 = new_Send((Optr)VAR__receiver__2_0, SMB_annotations_, 1, (Optr)PSend14525);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14527 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14530 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14529 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14530, (Optr)&t_block_return);
    Block PBlock14528 = new_Block_with(empty_Array, empty_Array, PThreadedCode14529, 1, PSend14530);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14531 = new_Send((Optr)PSend14527, SMB_resultIfFailed_, 1, (Optr)PBlock14528);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14532 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14531);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend14533 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14534 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14533);
    Array PThreadedCode14522 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14523, (Optr)&t_send1, (Optr)PSend14524, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14525, (Optr)&t_send1, (Optr)PSend14526, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14527, (Optr)&t_push_closure, (Optr)PBlock14528, (Optr)&t_send1, (Optr)PSend14531, (Optr)&t_send1, (Optr)PSend14532, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend14533, (Optr)&t_send1, (Optr)PSend14534, (Optr)&t_method_return);
    Block PBlock14520 = new_Block_with(PArray14521, empty_Array, PThreadedCode14522, 4, PSend14524, PSend14526, PSend14532, PSend14534);
    // new. 
    Send PSend14535 = new_Send((Optr)ASTMethod_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14536 = new_Send((Optr)PBlock14520, SMB_value_, 1, (Optr)PSend14535);
    Array PThreadedCode14519 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14520, (Optr)&t_push_class_reference, (Optr)ASTMethod_classReference, (Optr)&t_send0, (Optr)PSend14535, (Optr)&t_send1, (Optr)PSend14536, (Optr)&t_method_return);
    Block PBlock14517 = new_Block_with(PArray14518, empty_Array, PThreadedCode14519, 1, PSend14536);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14537 = new_Send((Optr)PSuper14516, SMB_semantics_, 1, (Optr)PBlock14517);
    Array PThreadedCode14515 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14516, (Optr)&t_push_closure, (Optr)PBlock14517, (Optr)&t_send1, (Optr)PSend14537, (Optr)&t_method_return);
    Method PMethod14514 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14515, 1, PSend14537);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod14514, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    Super PSuper14540 = new_Super(SMB_initializeUnaryMessageDefinition, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14542 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14544 = new_Send((Optr)ASTUnaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14545 = new_Send((Optr)PSend14544, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14543 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14544, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14545, (Optr)&t_method_return);
    Block PBlock14541 = new_Block_with(PArray14542, empty_Array, PThreadedCode14543, 1, PSend14545);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14546 = new_Send((Optr)PSuper14540, SMB_semantics_, 1, (Optr)PBlock14541);
    Array PThreadedCode14539 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14540, (Optr)&t_push_closure, (Optr)PBlock14541, (Optr)&t_send1, (Optr)PSend14546, (Optr)&t_method_return);
    Method PMethod14538 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14539, 1, PSend14546);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod14538, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14548 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14550 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14552 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14556 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14555 = new_Send((Optr)PSend14556, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14554 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14555);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14558 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14557 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14558);
    // new:. 
    Send PSend14560 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14559 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14560);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14562 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14564 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14565 = new_Send((Optr)PSend14564, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14566 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14565);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14567 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14566);
    // *. 
    Send PSend14568 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14569 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14568);
    // at:put:. 
    Send PSend14570 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14569);
    Array PThreadedCode14563 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14564, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14565, (Optr)&t_send1, (Optr)PSend14566, (Optr)&t_send2, (Optr)PSend14567, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14568, (Optr)&t_send1, (Optr)PSend14569, (Optr)&t_send2, (Optr)PSend14570, (Optr)&t_method_return);
    Block PBlock14561 = new_Block_with(PArray14562, empty_Array, PThreadedCode14563, 2, PSend14567, PSend14570);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14571 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14561);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14573 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14575 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14576 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14574 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14575, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14576, (Optr)&t_method_return);
    Block PBlock14572 = new_Block_with(PArray14573, empty_Array, PThreadedCode14574, 2, PSend14575, PSend14576);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14577 = new_Send((Optr)ASTKeywordAnnotation_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14578 = new_Send((Optr)PBlock14572, SMB_value_, 1, (Optr)PSend14577);
    Array PThreadedCode14553 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14554, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14556, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14555, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14557, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14558, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14559, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14560, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14561, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14571, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14572, (Optr)&t_push_class_reference, (Optr)ASTKeywordAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14577, (Optr)&t_send1, (Optr)PSend14578, (Optr)&t_method_return);
    Block PBlock14551 = new_Block_with(PArray14552, empty_Array, PThreadedCode14553, 5, PAssign14554, PAssign14557, PAssign14559, PSend14571, PSend14578);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14579 = new_Send((Optr)PSuper14550, SMB_semantics_, 1, (Optr)PBlock14551);
    Array PThreadedCode14549 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14550, (Optr)&t_push_closure, (Optr)PBlock14551, (Optr)&t_send1, (Optr)PSend14579, (Optr)&t_method_return);
    Method PMethod14547 = new_Method_with(empty_Array, PArray14548, empty_Array, PThreadedCode14549, 1, PSend14579);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14547, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    Super PSuper14582 = new_Super(SMB_initializeKeyword, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14584 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14586 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14585 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14586, (Optr)&t_method_return);
    Block PBlock14583 = new_Block_with(PArray14584, empty_Array, PThreadedCode14585, 1, PSend14586);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14587 = new_Send((Optr)PSuper14582, SMB_semantics_, 1, (Optr)PBlock14583);
    Array PThreadedCode14581 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14582, (Optr)&t_push_closure, (Optr)PBlock14583, (Optr)&t_send1, (Optr)PSend14587, (Optr)&t_method_return);
    Method PMethod14580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14581, 1, PSend14587);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod14580, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Variable VAR_vars_0_0 = new_Variable_named(L"vars", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray14589 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14591 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14593 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14596 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14595 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14596);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14598 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign14597 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14598);
    Variable VAR_variables_2_0 = new_Variable_named(L"variables", 2);
    Array PArray14600 = new_Array_with(1, (Optr)VAR_variables_2_0);
    Variable VAR_variable_3_0 = new_Variable_named(L"variable", 3);
    Array PArray14603 = new_Array_with(1, (Optr)VAR_variable_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray14608 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14610 = new_Send((Optr)VAR__receiver__4_0, SMB_expression_, 1, (Optr)VAR_expression_0_1);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend14611 = new_Send((Optr)VAR__receiver__4_0, SMB_variable_, 1, (Optr)VAR_variable_3_0);
    Array PThreadedCode14609 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend14610, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_variable_3_0, (Optr)&t_send1, (Optr)PSend14611, (Optr)&t_method_return);
    Block PBlock14607 = new_Block_with(PArray14608, empty_Array, PThreadedCode14609, 2, PSend14610, PSend14611);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14612 = new_Send((Optr)ASTAssignmentExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14606 = new_Send((Optr)PBlock14607, SMB_value_, 1, (Optr)PSend14612);
    Assign PAssign14605 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14606);
    Array PThreadedCode14604 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14605, (Optr)&t_push_closure, (Optr)PBlock14607, (Optr)&t_push_class_reference, (Optr)ASTAssignmentExpression_classReference, (Optr)&t_send0, (Optr)PSend14612, (Optr)&t_send1, (Optr)PSend14606, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14602 = new_Block_with(PArray14603, empty_Array, PThreadedCode14604, 1, PAssign14605);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend14613 = new_Send((Optr)VAR_variables_2_0, SMB_reverseDo_, 1, (Optr)PBlock14602);
    Array PThreadedCode14601 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_variables_2_0, (Optr)&t_push_closure, (Optr)PBlock14602, (Optr)&t_send1, (Optr)PSend14613, (Optr)&t_method_return);
    Block PBlock14599 = new_Block_with(PArray14600, empty_Array, PThreadedCode14601, 1, PSend14613);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14614 = new_Send((Optr)VAR_vars_0_0, SMB_ifMatched_, 1, (Optr)PBlock14599);
    Array PThreadedCode14594 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign14595, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14596, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14597, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14598, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_vars_0_0, (Optr)&t_push_closure, (Optr)PBlock14599, (Optr)&t_send1, (Optr)PSend14614, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_method_return);
    Block PBlock14592 = new_Block_with(PArray14593, empty_Array, PThreadedCode14594, 4, PAssign14595, PAssign14597, PSend14614, VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14615 = new_Send((Optr)PSuper14591, SMB_semantics_, 1, (Optr)PBlock14592);
    Array PThreadedCode14590 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14591, (Optr)&t_push_closure, (Optr)PBlock14592, (Optr)&t_send1, (Optr)PSend14615, (Optr)&t_method_return);
    Method PMethod14588 = new_Method_with(empty_Array, PArray14589, empty_Array, PThreadedCode14590, 1, PSend14615);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14588, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    Super PSuper14618 = new_Super(SMB_initializeFloat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14620 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14623 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14625 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_high_ = new_Symbol(L"high:");
    // high:. 
    Send PSend14626 = new_Send((Optr)VAR__receiver__2_0, SMB_high_, 1, (Optr)PSend14625);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14627 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Symbol SMB_low_ = new_Symbol(L"low:");
    // low:. 
    Send PSend14628 = new_Send((Optr)VAR__receiver__2_0, SMB_low_, 1, (Optr)PSend14627);
    Array PThreadedCode14624 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14625, (Optr)&t_send1, (Optr)PSend14626, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14627, (Optr)&t_send1, (Optr)PSend14628, (Optr)&t_method_return);
    Block PBlock14622 = new_Block_with(PArray14623, empty_Array, PThreadedCode14624, 2, PSend14626, PSend14628);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14629 = new_Send((Optr)ASTFloat_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14630 = new_Send((Optr)PBlock14622, SMB_value_, 1, (Optr)PSend14629);
    Array PThreadedCode14621 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14622, (Optr)&t_push_class_reference, (Optr)ASTFloat_classReference, (Optr)&t_send0, (Optr)PSend14629, (Optr)&t_send1, (Optr)PSend14630, (Optr)&t_method_return);
    Block PBlock14619 = new_Block_with(PArray14620, empty_Array, PThreadedCode14621, 1, PSend14630);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14631 = new_Send((Optr)PSuper14618, SMB_semantics_, 1, (Optr)PBlock14619);
    Array PThreadedCode14617 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14618, (Optr)&t_push_closure, (Optr)PBlock14619, (Optr)&t_send1, (Optr)PSend14631, (Optr)&t_method_return);
    Method PMethod14616 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14617, 1, PSend14631);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14616, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    Super PSuper14634 = new_Super(SMB_initializeBlockArguments, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14636 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR_variable_2_0 = new_Variable_named(L"variable", 2);
    Array PArray14639 = new_Array_with(1, (Optr)VAR_variable_2_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14641 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_variable_2_0);
    Array PThreadedCode14640 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_variable_2_0, (Optr)&t_send1, (Optr)PSend14641, (Optr)&t_method_return);
    Block PBlock14638 = new_Block_with(PArray14639, empty_Array, PThreadedCode14640, 1, PSend14641);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend14642 = new_Send((Optr)VAR_result_1_0, SMB_collect_, 1, (Optr)PBlock14638);
    Array PThreadedCode14637 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_closure, (Optr)PBlock14638, (Optr)&t_send1, (Optr)PSend14642, (Optr)&t_method_return);
    Block PBlock14635 = new_Block_with(PArray14636, empty_Array, PThreadedCode14637, 1, PSend14642);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14643 = new_Send((Optr)PSuper14634, SMB_semantics_, 1, (Optr)PBlock14635);
    Array PThreadedCode14633 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14634, (Optr)&t_push_closure, (Optr)PBlock14635, (Optr)&t_send1, (Optr)PSend14643, (Optr)&t_method_return);
    Method PMethod14632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14633, 1, PSend14643);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14632, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    Super PSuper14646 = new_Super(SMB_initializeBraceExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14648 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14650 = new_Send((Optr)ASTBraceExpression_classReference, SMB_new, 0);
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    // expressions:. 
    Send PSend14651 = new_Send((Optr)PSend14650, SMB_expressions_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14649 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTBraceExpression_classReference, (Optr)&t_send0, (Optr)PSend14650, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14651, (Optr)&t_method_return);
    Block PBlock14647 = new_Block_with(PArray14648, empty_Array, PThreadedCode14649, 1, PSend14651);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14652 = new_Send((Optr)PSuper14646, SMB_semantics_, 1, (Optr)PBlock14647);
    Array PThreadedCode14645 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14646, (Optr)&t_push_closure, (Optr)PBlock14647, (Optr)&t_send1, (Optr)PSend14652, (Optr)&t_method_return);
    Method PMethod14644 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14645, 1, PSend14652);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14644, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    Super PSuper14655 = new_Super(SMB_initializeBinaryMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14657 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14660 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14662 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14663 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14662);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14664 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14665 = new_Send((Optr)VAR__receiver__2_0, SMB_argument_, 1, (Optr)PSend14664);
    Array PThreadedCode14661 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14662, (Optr)&t_send1, (Optr)PSend14663, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14664, (Optr)&t_send1, (Optr)PSend14665, (Optr)&t_method_return);
    Block PBlock14659 = new_Block_with(PArray14660, empty_Array, PThreadedCode14661, 2, PSend14663, PSend14665);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14666 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14667 = new_Send((Optr)PBlock14659, SMB_value_, 1, (Optr)PSend14666);
    Array PThreadedCode14658 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14659, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14666, (Optr)&t_send1, (Optr)PSend14667, (Optr)&t_method_return);
    Block PBlock14656 = new_Block_with(PArray14657, empty_Array, PThreadedCode14658, 1, PSend14667);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14668 = new_Send((Optr)PSuper14655, SMB_semantics_, 1, (Optr)PBlock14656);
    Array PThreadedCode14654 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14655, (Optr)&t_push_closure, (Optr)PBlock14656, (Optr)&t_send1, (Optr)PSend14668, (Optr)&t_method_return);
    Method PMethod14653 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14654, 1, PSend14668);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14653, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    Super PSuper14671 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14673 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14675 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend14676 = new_Send((Optr)PSend14675, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_14680 = new_String(L"");
    Array PThreadedCode14679 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_14680, (Optr)&t_block_return);
    Constant string_14680_Const = new_Constant((Optr)string_14680);
    Block PBlock14678 = new_Block_with(empty_Array, empty_Array, PThreadedCode14679, 1, string_14680_Const);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14683 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend14684 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_with_, 1, (Optr)PSend14683);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Variable VAR_i_2_1 = new_Variable_named(L"i", 2);
    Array PArray14686 = new_Array_with(2, (Optr)VAR_s_2_0, (Optr)VAR_i_2_1);
    String string_14688 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_14688_Const = new_Constant((Optr)string_14688);
    // <<. 
    Send PSend14689 = new_Send((Optr)VAR_s_2_0, SMB__shiftLeft_, 1, (Optr)string_14688_Const);
    // <<. 
    Send PSend14690 = new_Send((Optr)PSend14689, SMB__shiftLeft_, 1, (Optr)VAR_i_2_1);
    Array PThreadedCode14687 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)string_14688, (Optr)&t_send1, (Optr)PSend14689, (Optr)&t_push_variable, (Optr)VAR_i_2_1, (Optr)&t_send1, (Optr)PSend14690, (Optr)&t_method_return);
    Block PBlock14685 = new_Block_with(PArray14686, empty_Array, PThreadedCode14687, 1, PSend14690);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14691 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14684, (Optr)PBlock14685);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14692 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14682 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14683, (Optr)&t_send1, (Optr)PSend14684, (Optr)&t_push_closure, (Optr)PBlock14685, (Optr)&t_send2, (Optr)PSend14691, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14692, (Optr)&t_block_return);
    Block PBlock14681 = new_Block_with(empty_Array, empty_Array, PThreadedCode14682, 2, PSend14691, PSend14692);
    // ifTrue:ifFalse:. 
    Send PSend14677 = new_Send((Optr)PSend14676, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock14678, (Optr)PBlock14681);
    Array PThreadedCode14674 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14675, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend14676, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend14677, (Optr)PBlock14678, (Optr)PBlock14681, (Optr)&t_method_return);
    Block PBlock14672 = new_Block_with(PArray14673, empty_Array, PThreadedCode14674, 1, PSend14677);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14693 = new_Send((Optr)PSuper14671, SMB_semantics_, 1, (Optr)PBlock14672);
    Array PThreadedCode14670 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14671, (Optr)&t_push_closure, (Optr)PBlock14672, (Optr)&t_send1, (Optr)PSend14693, (Optr)&t_method_return);
    Method PMethod14669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14670, 1, PSend14693);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14669, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_createVariable_() {
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
    Array PArray14695 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14697 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14698 = new_Send((Optr)PSend14697, SMB_name_, 1, (Optr)VAR_variable_0_0);
    Array PThreadedCode14696 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14697, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send1, (Optr)PSend14698, (Optr)&t_method_return);
    Method PMethod14694 = new_Method_with(PArray14695, empty_Array, empty_Array, PThreadedCode14696, 1, PSend14698);
    
    MethodClosure MC_SMB_createVariable_ = new_MethodClosure((Method)PMethod14694, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createVariable_, MC_SMB_createVariable_);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    Super PSuper14701 = new_Super(SMB_initializeUnaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14703 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14704 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14707 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14706 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14707);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14708 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14710 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14715 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14717 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14718 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14719 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14718);
    Array PThreadedCode14716 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14717, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14718, (Optr)&t_send1, (Optr)PSend14719, (Optr)&t_method_return);
    Block PBlock14714 = new_Block_with(PArray14715, empty_Array, PThreadedCode14716, 2, PSend14717, PSend14719);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14720 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14713 = new_Send((Optr)PBlock14714, SMB_value_, 1, (Optr)PSend14720);
    Assign PAssign14712 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14713);
    Array PThreadedCode14711 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14712, (Optr)&t_push_closure, (Optr)PBlock14714, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14720, (Optr)&t_send1, (Optr)PSend14713, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14709 = new_Block_with(PArray14710, empty_Array, PThreadedCode14711, 1, PAssign14712);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14721 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14708, (Optr)PBlock14709);
    Array PThreadedCode14705 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14706, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14707, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14708, (Optr)&t_push_closure, (Optr)PBlock14709, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14721, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14702 = new_Block_with(PArray14703, PArray14704, PThreadedCode14705, 3, PAssign14706, PSend14721, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14722 = new_Send((Optr)PSuper14701, SMB_semantics_, 1, (Optr)PBlock14702);
    Array PThreadedCode14700 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14701, (Optr)&t_push_closure, (Optr)PBlock14702, (Optr)&t_send1, (Optr)PSend14722, (Optr)&t_method_return);
    Method PMethod14699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14700, 1, PSend14722);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14699, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    Super PSuper14725 = new_Super(SMB_initializeAnnotations, 0);
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
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14723, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    Super PSuper14733 = new_Super(SMB_initializePrimaryVariable, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14735 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14737 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    // createReference:. 
    Send PSend14738 = new_Send((Optr)self, SMB_createReference_, 1, (Optr)PSend14737);
    Array PThreadedCode14736 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14737, (Optr)&t_send1, (Optr)PSend14738, (Optr)&t_method_return);
    Block PBlock14734 = new_Block_with(PArray14735, empty_Array, PThreadedCode14736, 1, PSend14738);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14739 = new_Send((Optr)PSuper14733, SMB_semantics_, 1, (Optr)PBlock14734);
    Array PThreadedCode14732 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14733, (Optr)&t_push_closure, (Optr)PBlock14734, (Optr)&t_send1, (Optr)PSend14739, (Optr)&t_method_return);
    Method PMethod14731 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14732, 1, PSend14739);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod14731, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Super PSuper14742 = new_Super(SMB_initializeStringSegment, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14744 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14746 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14745 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14746, (Optr)&t_method_return);
    Block PBlock14743 = new_Block_with(PArray14744, empty_Array, PThreadedCode14745, 1, PSend14746);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14747 = new_Send((Optr)PSuper14742, SMB_semantics_, 1, (Optr)PBlock14743);
    Array PThreadedCode14741 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14742, (Optr)&t_push_closure, (Optr)PBlock14743, (Optr)&t_send1, (Optr)PSend14747, (Optr)&t_method_return);
    Method PMethod14740 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14741, 1, PSend14747);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14740, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_parameters_0_2 = new_Variable_named(L"parameters", 0);
    Array PArray14749 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14751 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14753 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14757 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14756 = new_Send((Optr)PSend14757, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14755 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14756);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14759 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14758 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14759);
    // new:. 
    Send PSend14761 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14760 = new_Assign((Optr)VAR_parameters_0_2, (Optr)PSend14761);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14763 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14765 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14766 = new_Send((Optr)PSend14765, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14767 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14766);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14768 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14767);
    // *. 
    Send PSend14769 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14770 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14769);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14771 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14770);
    // at:put:. 
    Send PSend14772 = new_Send((Optr)VAR_parameters_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14771);
    Array PThreadedCode14764 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14765, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14766, (Optr)&t_send1, (Optr)PSend14767, (Optr)&t_send2, (Optr)PSend14768, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14769, (Optr)&t_send1, (Optr)PSend14770, (Optr)&t_send1, (Optr)PSend14771, (Optr)&t_send2, (Optr)PSend14772, (Optr)&t_method_return);
    Block PBlock14762 = new_Block_with(PArray14763, empty_Array, PThreadedCode14764, 2, PSend14768, PSend14772);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14773 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14762);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14775 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14777 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14778 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)VAR_parameters_0_2);
    Array PThreadedCode14776 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14777, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_send1, (Optr)PSend14778, (Optr)&t_method_return);
    Block PBlock14774 = new_Block_with(PArray14775, empty_Array, PThreadedCode14776, 2, PSend14777, PSend14778);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14779 = new_Send((Optr)ASTKeywordMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14780 = new_Send((Optr)PBlock14774, SMB_value_, 1, (Optr)PSend14779);
    Array PThreadedCode14754 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14755, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14757, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14756, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14758, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14759, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14760, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14761, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14762, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14773, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14774, (Optr)&t_push_class_reference, (Optr)ASTKeywordMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14779, (Optr)&t_send1, (Optr)PSend14780, (Optr)&t_method_return);
    Block PBlock14752 = new_Block_with(PArray14753, empty_Array, PThreadedCode14754, 5, PAssign14755, PAssign14758, PAssign14760, PSend14773, PSend14780);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14781 = new_Send((Optr)PSuper14751, SMB_semantics_, 1, (Optr)PBlock14752);
    Array PThreadedCode14750 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14751, (Optr)&t_push_closure, (Optr)PBlock14752, (Optr)&t_send1, (Optr)PSend14781, (Optr)&t_method_return);
    Method PMethod14748 = new_Method_with(empty_Array, PArray14749, empty_Array, PThreadedCode14750, 1, PSend14781);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod14748, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    Super PSuper14784 = new_Super(SMB_initializeBinaryMessageDefinition, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14786 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14789 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14791 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14792 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14791);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14793 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14794 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14793);
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    // parameter:. 
    Send PSend14795 = new_Send((Optr)VAR__receiver__2_0, SMB_parameter_, 1, (Optr)PSend14794);
    Array PThreadedCode14790 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14791, (Optr)&t_send1, (Optr)PSend14792, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14793, (Optr)&t_send1, (Optr)PSend14794, (Optr)&t_send1, (Optr)PSend14795, (Optr)&t_method_return);
    Block PBlock14788 = new_Block_with(PArray14789, empty_Array, PThreadedCode14790, 2, PSend14792, PSend14795);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14796 = new_Send((Optr)ASTBinaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14797 = new_Send((Optr)PBlock14788, SMB_value_, 1, (Optr)PSend14796);
    Array PThreadedCode14787 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14788, (Optr)&t_push_class_reference, (Optr)ASTBinaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14796, (Optr)&t_send1, (Optr)PSend14797, (Optr)&t_method_return);
    Block PBlock14785 = new_Block_with(PArray14786, empty_Array, PThreadedCode14787, 1, PSend14797);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14798 = new_Send((Optr)PSuper14784, SMB_semantics_, 1, (Optr)PBlock14785);
    Array PThreadedCode14783 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14784, (Optr)&t_push_closure, (Optr)PBlock14785, (Optr)&t_send1, (Optr)PSend14798, (Optr)&t_method_return);
    Method PMethod14782 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14783, 1, PSend14798);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14782, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    Super PSuper14801 = new_Super(SMB_initializeReturn, 0);
    Variable VAR_expression_1_0 = new_Variable_named(L"expression", 1);
    Array PArray14803 = new_Array_with(1, (Optr)VAR_expression_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14805 = new_Send((Optr)ASTReturnExpression_classReference, SMB_new, 0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14806 = new_Send((Optr)PSend14805, SMB_expression_, 1, (Optr)VAR_expression_1_0);
    Array PThreadedCode14804 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTReturnExpression_classReference, (Optr)&t_send0, (Optr)PSend14805, (Optr)&t_push_variable, (Optr)VAR_expression_1_0, (Optr)&t_send1, (Optr)PSend14806, (Optr)&t_method_return);
    Block PBlock14802 = new_Block_with(PArray14803, empty_Array, PThreadedCode14804, 1, PSend14806);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14807 = new_Send((Optr)PSuper14801, SMB_semantics_, 1, (Optr)PBlock14802);
    Array PThreadedCode14800 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14801, (Optr)&t_push_closure, (Optr)PBlock14802, (Optr)&t_send1, (Optr)PSend14807, (Optr)&t_method_return);
    Method PMethod14799 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14800, 1, PSend14807);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14799, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    Super PSuper14810 = new_Super(SMB_initializeTemporaries, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14812 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14814 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14813 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14814, (Optr)&t_method_return);
    Block PBlock14811 = new_Block_with(PArray14812, empty_Array, PThreadedCode14813, 1, PSend14814);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14815 = new_Send((Optr)PSuper14810, SMB_semantics_, 1, (Optr)PBlock14811);
    Array PThreadedCode14809 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14810, (Optr)&t_push_closure, (Optr)PBlock14811, (Optr)&t_send1, (Optr)PSend14815, (Optr)&t_method_return);
    Method PMethod14808 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14809, 1, PSend14815);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod14808, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14817 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14819 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14821 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14825 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14824 = new_Send((Optr)PSend14825, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14823 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14824);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14827 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14826 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14827);
    // new:. 
    Send PSend14829 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14828 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14829);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14831 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14833 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14834 = new_Send((Optr)PSend14833, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14835 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14834);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14836 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14835);
    // *. 
    Send PSend14837 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14838 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14837);
    // at:put:. 
    Send PSend14839 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14838);
    Array PThreadedCode14832 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14833, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14834, (Optr)&t_send1, (Optr)PSend14835, (Optr)&t_send2, (Optr)PSend14836, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14837, (Optr)&t_send1, (Optr)PSend14838, (Optr)&t_send2, (Optr)PSend14839, (Optr)&t_method_return);
    Block PBlock14830 = new_Block_with(PArray14831, empty_Array, PThreadedCode14832, 2, PSend14836, PSend14839);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14840 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14830);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14842 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14844 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14845 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14843 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14844, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14845, (Optr)&t_method_return);
    Block PBlock14841 = new_Block_with(PArray14842, empty_Array, PThreadedCode14843, 2, PSend14844, PSend14845);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14846 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14847 = new_Send((Optr)PBlock14841, SMB_value_, 1, (Optr)PSend14846);
    Array PThreadedCode14822 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14823, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14825, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14824, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14826, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14827, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14828, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14829, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14830, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14840, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14841, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14846, (Optr)&t_send1, (Optr)PSend14847, (Optr)&t_method_return);
    Block PBlock14820 = new_Block_with(PArray14821, empty_Array, PThreadedCode14822, 5, PAssign14823, PAssign14826, PAssign14828, PSend14840, PSend14847);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14848 = new_Send((Optr)PSuper14819, SMB_semantics_, 1, (Optr)PBlock14820);
    Array PThreadedCode14818 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14819, (Optr)&t_push_closure, (Optr)PBlock14820, (Optr)&t_send1, (Optr)PSend14848, (Optr)&t_method_return);
    Method PMethod14816 = new_Method_with(empty_Array, PArray14817, empty_Array, PThreadedCode14818, 1, PSend14848);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod14816, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    Super PSuper14851 = new_Super(SMB_initializeSymbolKeywords, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14853 = new_Array_with(1, (Optr)VAR_result_1_0);
    String string_14855 = new_String(L"");
    Symbol SMB_on_ = new_Symbol(L"on:");
    Constant string_14855_Const = new_Constant((Optr)string_14855);
    // on:. 
    Send PSend14856 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_on_, 1, (Optr)string_14855_Const);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Variable VAR_e_2_1 = new_Variable_named(L"e", 2);
    Array PArray14858 = new_Array_with(2, (Optr)VAR_c_2_0, (Optr)VAR_e_2_1);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend14860 = new_Send((Optr)VAR_c_2_0, SMB__shiftLeft_, 1, (Optr)VAR_e_2_1);
    Array PThreadedCode14859 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_push_variable, (Optr)VAR_e_2_1, (Optr)&t_send1, (Optr)PSend14860, (Optr)&t_method_return);
    Block PBlock14857 = new_Block_with(PArray14858, empty_Array, PThreadedCode14859, 1, PSend14860);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14861 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14856, (Optr)PBlock14857);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14862 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14854 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push1, (Optr)string_14855, (Optr)&t_send1, (Optr)PSend14856, (Optr)&t_push_closure, (Optr)PBlock14857, (Optr)&t_send2, (Optr)PSend14861, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14862, (Optr)&t_method_return);
    Block PBlock14852 = new_Block_with(PArray14853, empty_Array, PThreadedCode14854, 2, PSend14861, PSend14862);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14863 = new_Send((Optr)PSuper14851, SMB_semantics_, 1, (Optr)PBlock14852);
    Array PThreadedCode14850 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14851, (Optr)&t_push_closure, (Optr)PBlock14852, (Optr)&t_send1, (Optr)PSend14863, (Optr)&t_method_return);
    Method PMethod14849 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14850, 1, PSend14863);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod14849, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    Super PSuper14866 = new_Super(SMB_initializeAssignmentExpressions, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14868 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14870 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14869 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14870, (Optr)&t_method_return);
    Block PBlock14867 = new_Block_with(PArray14868, empty_Array, PThreadedCode14869, 1, PSend14870);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14871 = new_Send((Optr)PSuper14866, SMB_semantics_, 1, (Optr)PBlock14867);
    Array PThreadedCode14865 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14866, (Optr)&t_push_closure, (Optr)PBlock14867, (Optr)&t_send1, (Optr)PSend14871, (Optr)&t_method_return);
    Method PMethod14864 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14865, 1, PSend14871);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14864, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Super PSuper14874 = new_Super(SMB_preStoreCascadedMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14876 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14879 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14881 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend14882 = new_Send((Optr)PSend14881, SMB_receiver, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14883 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend14882);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14884 = new_Send((Optr)VAR_parts_1_0, SMB_asArray, 0);
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    // cascades:. 
    Send PSend14885 = new_Send((Optr)VAR__receiver__2_0, SMB_cascades_, 1, (Optr)PSend14884);
    Array PThreadedCode14880 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14881, (Optr)&t_send0, (Optr)PSend14882, (Optr)&t_send1, (Optr)PSend14883, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14884, (Optr)&t_send1, (Optr)PSend14885, (Optr)&t_method_return);
    Block PBlock14878 = new_Block_with(PArray14879, empty_Array, PThreadedCode14880, 2, PSend14883, PSend14885);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14886 = new_Send((Optr)ASTMessageCascadeExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14887 = new_Send((Optr)PBlock14878, SMB_value_, 1, (Optr)PSend14886);
    Array PThreadedCode14877 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14878, (Optr)&t_push_class_reference, (Optr)ASTMessageCascadeExpression_classReference, (Optr)&t_send0, (Optr)PSend14886, (Optr)&t_send1, (Optr)PSend14887, (Optr)&t_method_return);
    Block PBlock14875 = new_Block_with(PArray14876, empty_Array, PThreadedCode14877, 1, PSend14887);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14888 = new_Send((Optr)PSuper14874, SMB_semantics_, 1, (Optr)PBlock14875);
    Array PThreadedCode14873 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14874, (Optr)&t_push_closure, (Optr)PBlock14875, (Optr)&t_send1, (Optr)PSend14888, (Optr)&t_method_return);
    Method PMethod14872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14873, 1, PSend14888);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod14872, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    Super PSuper14891 = new_Super(SMB_initializeUnaryAnnotation, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14893 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14895 = new_Send((Optr)ASTUnaryAnnotation_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14896 = new_Send((Optr)PSend14895, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14894 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14895, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14896, (Optr)&t_method_return);
    Block PBlock14892 = new_Block_with(PArray14893, empty_Array, PThreadedCode14894, 1, PSend14896);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14897 = new_Send((Optr)PSuper14891, SMB_semantics_, 1, (Optr)PBlock14892);
    Array PThreadedCode14890 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14891, (Optr)&t_push_closure, (Optr)PBlock14892, (Optr)&t_send1, (Optr)PSend14897, (Optr)&t_method_return);
    Method PMethod14889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14890, 1, PSend14897);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14889, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    Super PSuper14900 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14902 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14904 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14905 = new_Send((Optr)PSend14904, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14909 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14910 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // add:. 
    Send PSend14911 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PSend14910);
    Array PThreadedCode14908 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14909, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend14910, (Optr)&t_send1, (Optr)PSend14911, (Optr)&t_block_return);
    Block PBlock14907 = new_Block_with(empty_Array, empty_Array, PThreadedCode14908, 2, PSend14909, PSend14911);
    // ifTrue:. 
    Send PSend14906 = new_Send((Optr)PSend14905, SMB_ifTrue_, 1, (Optr)PBlock14907);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14913 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14915 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    // new. 
    Send PSend14918 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14917 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14918, (Optr)&t_block_return);
    Block PBlock14916 = new_Block_with(empty_Array, empty_Array, PThreadedCode14917, 1, PSend14918);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14919 = new_Send((Optr)PSend14915, SMB_resultIfFailed_, 1, (Optr)PBlock14916);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14920 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)PSend14919);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14921 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    // new. 
    Send PSend14924 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14923 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14924, (Optr)&t_block_return);
    Block PBlock14922 = new_Block_with(empty_Array, empty_Array, PThreadedCode14923, 1, PSend14924);
    // resultIfFailed:. 
    Send PSend14925 = new_Send((Optr)PSend14921, SMB_resultIfFailed_, 1, (Optr)PBlock14922);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14926 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14925);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14927 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14928 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14927);
    Array PThreadedCode14914 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14915, (Optr)&t_push_closure, (Optr)PBlock14916, (Optr)&t_send1, (Optr)PSend14919, (Optr)&t_send1, (Optr)PSend14920, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14921, (Optr)&t_push_closure, (Optr)PBlock14922, (Optr)&t_send1, (Optr)PSend14925, (Optr)&t_send1, (Optr)PSend14926, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14927, (Optr)&t_send1, (Optr)PSend14928, (Optr)&t_method_return);
    Block PBlock14912 = new_Block_with(PArray14913, empty_Array, PThreadedCode14914, 3, PSend14920, PSend14926, PSend14928);
    // new. 
    Send PSend14929 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14930 = new_Send((Optr)PBlock14912, SMB_value_, 1, (Optr)PSend14929);
    Array PThreadedCode14903 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14904, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14905, (Optr)&t_send_ifTrue_, (Optr)PSend14906, (Optr)PBlock14907, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14912, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend14929, (Optr)&t_send1, (Optr)PSend14930, (Optr)&t_method_return);
    Block PBlock14901 = new_Block_with(PArray14902, empty_Array, PThreadedCode14903, 2, PSend14906, PSend14930);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14931 = new_Send((Optr)PSuper14900, SMB_semantics_, 1, (Optr)PBlock14901);
    Array PThreadedCode14899 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14900, (Optr)&t_push_closure, (Optr)PBlock14901, (Optr)&t_send1, (Optr)PSend14931, (Optr)&t_method_return);
    Method PMethod14898 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14899, 1, PSend14931);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod14898, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_class_SMB_match_in_() {
    Symbol SMB_match_in_ = new_Symbol(L"match:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray14933 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend14935 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14936 = new_Send((Optr)PSend14935, SMB_method, 0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend14937 = new_Send((Optr)VAR_class_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14938 = new_Send((Optr)PSend14937, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14939 = new_Send((Optr)PSend14938, SMB_asString, 0);
    // asString. 
    Send PSend14940 = new_Send((Optr)PSend14939, SMB_asString, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14941 = new_Send((Optr)PSend14936, SMB_parse_, 1, (Optr)PSend14940);
    Array PThreadedCode14934 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14935, (Optr)&t_send0, (Optr)PSend14936, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send0, (Optr)PSend14937, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend14938, (Optr)&t_send0, (Optr)PSend14939, (Optr)&t_send0, (Optr)PSend14940, (Optr)&t_send1, (Optr)PSend14941, (Optr)&t_method_return);
    Method PMethod14932 = new_Method_with(PArray14933, empty_Array, empty_Array, PThreadedCode14934, 1, PSend14941);
    
    MethodClosure MC_SMB_match_in_ = new_MethodClosure((Method)PMethod14932, HEADER(Smalltalk_Parser_SmalltalkParser_Class));
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