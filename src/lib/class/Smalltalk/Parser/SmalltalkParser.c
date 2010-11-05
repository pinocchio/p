#include <lib/class/Smalltalk/Parser/SmalltalkParser.h>


Optr layout_Smalltalk_Parser_SmalltalkParser_Class_class;
Optr slot_Smalltalk_Parser_SmalltalkParser_stream;
Optr layout_Smalltalk_Parser_SmalltalkParser;


static void init_SMB_initializeUnaryMessageExpression() {
    Symbol SMB_initializeUnaryMessageExpression = new_Symbol(L"initializeUnaryMessageExpression");
    Super PSuper14250 = new_Super(SMB_initializeUnaryMessageExpression, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14252 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14254 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14255 = new_Send((Optr)PSend14254, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14253 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14254, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14255, (Optr)&t_method_return);
    Block PBlock14251 = new_Block_with(PArray14252, empty_Array, PThreadedCode14253, 1, PSend14255);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14256 = new_Send((Optr)PSuper14250, SMB_semantics_, 1, (Optr)PBlock14251);
    Array PThreadedCode14249 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14250, (Optr)&t_push_closure, (Optr)PBlock14251, (Optr)&t_send1, (Optr)PSend14256, (Optr)&t_method_return);
    Method PMethod14248 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14249, 1, PSend14256);
    
    MethodClosure MC_SMB_initializeUnaryMessageExpression = new_MethodClosure((Method)PMethod14248, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageExpression, MC_SMB_initializeUnaryMessageExpression);
}


static void init_SMB_initializeUnarySelector() {
    Symbol SMB_initializeUnarySelector = new_Symbol(L"initializeUnarySelector");
    Super PSuper14259 = new_Super(SMB_initializeUnarySelector, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14261 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14262 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_method_return);
    Block PBlock14260 = new_Block_with(PArray14261, empty_Array, PThreadedCode14262, 1, VAR_selector_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14263 = new_Send((Optr)PSuper14259, SMB_semantics_, 1, (Optr)PBlock14260);
    Array PThreadedCode14258 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14259, (Optr)&t_push_closure, (Optr)PBlock14260, (Optr)&t_send1, (Optr)PSend14263, (Optr)&t_method_return);
    Method PMethod14257 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14258, 1, PSend14263);
    
    MethodClosure MC_SMB_initializeUnarySelector = new_MethodClosure((Method)PMethod14257, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnarySelector, MC_SMB_initializeUnarySelector);
}


static void init_SMB_initializeNumber() {
    Symbol SMB_initializeNumber = new_Symbol(L"initializeNumber");
    Super PSuper14266 = new_Super(SMB_initializeNumber, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14268 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14271 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14273 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)VAR_result_1_0);
    String string_14274 = new_String(L"10");
    Symbol SMB_base_ = new_Symbol(L"base:");
    Constant string_14274_Const = new_Constant((Optr)string_14274);
    // base:. 
    Send PSend14275 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)string_14274_Const);
    Array PThreadedCode14272 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14273, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)string_14274, (Optr)&t_send1, (Optr)PSend14275, (Optr)&t_method_return);
    Block PBlock14270 = new_Block_with(PArray14271, empty_Array, PThreadedCode14272, 2, PSend14273, PSend14275);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14276 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14277 = new_Send((Optr)PBlock14270, SMB_value_, 1, (Optr)PSend14276);
    Array PThreadedCode14269 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14270, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14276, (Optr)&t_send1, (Optr)PSend14277, (Optr)&t_method_return);
    Block PBlock14267 = new_Block_with(PArray14268, empty_Array, PThreadedCode14269, 1, PSend14277);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14278 = new_Send((Optr)PSuper14266, SMB_semantics_, 1, (Optr)PBlock14267);
    Array PThreadedCode14265 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14266, (Optr)&t_push_closure, (Optr)PBlock14267, (Optr)&t_send1, (Optr)PSend14278, (Optr)&t_method_return);
    Method PMethod14264 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14265, 1, PSend14278);
    
    MethodClosure MC_SMB_initializeNumber = new_MethodClosure((Method)PMethod14264, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumber, MC_SMB_initializeNumber);
}


static void init_SMB_initializeIdentifier() {
    Symbol SMB_initializeIdentifier = new_Symbol(L"initializeIdentifier");
    Super PSuper14281 = new_Super(SMB_initializeIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14283 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14285 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14284 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14285, (Optr)&t_method_return);
    Block PBlock14282 = new_Block_with(PArray14283, empty_Array, PThreadedCode14284, 1, PSend14285);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14286 = new_Send((Optr)PSuper14281, SMB_semantics_, 1, (Optr)PBlock14282);
    Array PThreadedCode14280 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14281, (Optr)&t_push_closure, (Optr)PBlock14282, (Optr)&t_send1, (Optr)PSend14286, (Optr)&t_method_return);
    Method PMethod14279 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14280, 1, PSend14286);
    
    MethodClosure MC_SMB_initializeIdentifier = new_MethodClosure((Method)PMethod14279, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeIdentifier, MC_SMB_initializeIdentifier);
}


static void init_SMB_initializeRadix() {
    Symbol SMB_initializeRadix = new_Symbol(L"initializeRadix");
    Super PSuper14289 = new_Super(SMB_initializeRadix, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14291 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14294 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14296 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_base_ = new_Symbol(L"base:");
    // base:. 
    Send PSend14297 = new_Send((Optr)VAR__receiver__2_0, SMB_base_, 1, (Optr)PSend14296);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14298 = new_Send((Optr)VAR_result_1_0, SMB_second, 0);
    Symbol SMB_number_ = new_Symbol(L"number:");
    // number:. 
    Send PSend14299 = new_Send((Optr)VAR__receiver__2_0, SMB_number_, 1, (Optr)PSend14298);
    Array PThreadedCode14295 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14296, (Optr)&t_send1, (Optr)PSend14297, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14298, (Optr)&t_send1, (Optr)PSend14299, (Optr)&t_method_return);
    Block PBlock14293 = new_Block_with(PArray14294, empty_Array, PThreadedCode14295, 2, PSend14297, PSend14299);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14300 = new_Send((Optr)ASTNumber_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14301 = new_Send((Optr)PBlock14293, SMB_value_, 1, (Optr)PSend14300);
    Array PThreadedCode14292 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14293, (Optr)&t_push_class_reference, (Optr)ASTNumber_classReference, (Optr)&t_send0, (Optr)PSend14300, (Optr)&t_send1, (Optr)PSend14301, (Optr)&t_method_return);
    Block PBlock14290 = new_Block_with(PArray14291, empty_Array, PThreadedCode14292, 1, PSend14301);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14302 = new_Send((Optr)PSuper14289, SMB_semantics_, 1, (Optr)PBlock14290);
    Array PThreadedCode14288 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14289, (Optr)&t_push_closure, (Optr)PBlock14290, (Optr)&t_send1, (Optr)PSend14302, (Optr)&t_method_return);
    Method PMethod14287 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14288, 1, PSend14302);
    
    MethodClosure MC_SMB_initializeRadix = new_MethodClosure((Method)PMethod14287, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeRadix, MC_SMB_initializeRadix);
}


static void init_SMB_initializeUnaryObjectDescription() {
    Symbol SMB_initializeUnaryObjectDescription = new_Symbol(L"initializeUnaryObjectDescription");
    Super PSuper14305 = new_Super(SMB_initializeUnaryObjectDescription, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14307 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14308 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14311 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14310 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14311);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14312 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14314 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14319 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14321 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14322 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14323 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14322);
    Array PThreadedCode14320 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14322, (Optr)&t_send1, (Optr)PSend14323, (Optr)&t_method_return);
    Block PBlock14318 = new_Block_with(PArray14319, empty_Array, PThreadedCode14320, 2, PSend14321, PSend14323);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14324 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14317 = new_Send((Optr)PBlock14318, SMB_value_, 1, (Optr)PSend14324);
    Assign PAssign14316 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14317);
    Array PThreadedCode14315 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14316, (Optr)&t_push_closure, (Optr)PBlock14318, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14324, (Optr)&t_send1, (Optr)PSend14317, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14313 = new_Block_with(PArray14314, empty_Array, PThreadedCode14315, 1, PAssign14316);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14325 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14312, (Optr)PBlock14313);
    Array PThreadedCode14309 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14310, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14311, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14312, (Optr)&t_push_closure, (Optr)PBlock14313, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14325, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14306 = new_Block_with(PArray14307, PArray14308, PThreadedCode14309, 3, PAssign14310, PSend14325, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14326 = new_Send((Optr)PSuper14305, SMB_semantics_, 1, (Optr)PBlock14306);
    Array PThreadedCode14304 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14305, (Optr)&t_push_closure, (Optr)PBlock14306, (Optr)&t_send1, (Optr)PSend14326, (Optr)&t_method_return);
    Method PMethod14303 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14304, 1, PSend14326);
    
    MethodClosure MC_SMB_initializeUnaryObjectDescription = new_MethodClosure((Method)PMethod14303, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryObjectDescription, MC_SMB_initializeUnaryObjectDescription);
}


static void init_SMB_initializeVariableName() {
    Symbol SMB_initializeVariableName = new_Symbol(L"initializeVariableName");
    Super PSuper14329 = new_Super(SMB_initializeVariableName, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14331 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14333 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14332 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14333, (Optr)&t_method_return);
    Block PBlock14330 = new_Block_with(PArray14331, empty_Array, PThreadedCode14332, 1, PSend14333);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14334 = new_Send((Optr)PSuper14329, SMB_semantics_, 1, (Optr)PBlock14330);
    Array PThreadedCode14328 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14329, (Optr)&t_push_closure, (Optr)PBlock14330, (Optr)&t_send1, (Optr)PSend14334, (Optr)&t_method_return);
    Method PMethod14327 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14328, 1, PSend14334);
    
    MethodClosure MC_SMB_initializeVariableName = new_MethodClosure((Method)PMethod14327, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeVariableName, MC_SMB_initializeVariableName);
}


static void init_SMB_initializeSymbolInArray() {
    Symbol SMB_initializeSymbolInArray = new_Symbol(L"initializeSymbolInArray");
    Super PSuper14337 = new_Super(SMB_initializeSymbolInArray, 0);
    Variable VAR_symbol_1_0 = new_Variable_named(L"symbol", 1);
    Array PArray14339 = new_Array_with(1, (Optr)VAR_symbol_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14341 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_symbol_1_0);
    Array PThreadedCode14340 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_symbol_1_0, (Optr)&t_send1, (Optr)PSend14341, (Optr)&t_method_return);
    Block PBlock14338 = new_Block_with(PArray14339, empty_Array, PThreadedCode14340, 1, PSend14341);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14342 = new_Send((Optr)PSuper14337, SMB_semantics_, 1, (Optr)PBlock14338);
    Array PThreadedCode14336 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14337, (Optr)&t_push_closure, (Optr)PBlock14338, (Optr)&t_send1, (Optr)PSend14342, (Optr)&t_method_return);
    Method PMethod14335 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14336, 1, PSend14342);
    
    MethodClosure MC_SMB_initializeSymbolInArray = new_MethodClosure((Method)PMethod14335, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolInArray, MC_SMB_initializeSymbolInArray);
}


static void init_SMB_initializeStatements() {
    Symbol SMB_initializeStatements = new_Symbol(L"initializeStatements");
    Super PSuper14345 = new_Super(SMB_initializeStatements, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14347 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    // removeLast. 
    Send PSend14349 = new_Send((Optr)VAR_result_1_0, SMB_removeLast, 0);
    Variable VAR_exp_2_0 = new_Variable_named(L"exp", 2);
    Array PArray14351 = new_Array_with(1, (Optr)VAR_exp_2_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14353 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)VAR_exp_2_0);
    Array PThreadedCode14352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_variable, (Optr)VAR_exp_2_0, (Optr)&t_send1, (Optr)PSend14353, (Optr)&t_method_return);
    Block PBlock14350 = new_Block_with(PArray14351, empty_Array, PThreadedCode14352, 1, PSend14353);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14354 = new_Send((Optr)PSend14349, SMB_ifMatched_, 1, (Optr)PBlock14350);
    Symbol SMB_asOrderedCollection = new_Symbol(L"asOrderedCollection");
    // asOrderedCollection. 
    Send PSend14355 = new_Send((Optr)VAR_result_1_0, SMB_asOrderedCollection, 0);
    Array PThreadedCode14348 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14349, (Optr)&t_push_closure, (Optr)PBlock14350, (Optr)&t_send1, (Optr)PSend14354, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14355, (Optr)&t_method_return);
    Block PBlock14346 = new_Block_with(PArray14347, empty_Array, PThreadedCode14348, 2, PSend14354, PSend14355);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14356 = new_Send((Optr)PSuper14345, SMB_semantics_, 1, (Optr)PBlock14346);
    Array PThreadedCode14344 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14345, (Optr)&t_push_closure, (Optr)PBlock14346, (Optr)&t_send1, (Optr)PSend14356, (Optr)&t_method_return);
    Method PMethod14343 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14344, 1, PSend14356);
    
    MethodClosure MC_SMB_initializeStatements = new_MethodClosure((Method)PMethod14343, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStatements, MC_SMB_initializeStatements);
}


static void init_SMB_initializeCapitalIdentifier() {
    Symbol SMB_initializeCapitalIdentifier = new_Symbol(L"initializeCapitalIdentifier");
    Super PSuper14359 = new_Super(SMB_initializeCapitalIdentifier, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14361 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14363 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14362 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14363, (Optr)&t_method_return);
    Block PBlock14360 = new_Block_with(PArray14361, empty_Array, PThreadedCode14362, 1, PSend14363);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14364 = new_Send((Optr)PSuper14359, SMB_semantics_, 1, (Optr)PBlock14360);
    Array PThreadedCode14358 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14359, (Optr)&t_push_closure, (Optr)PBlock14360, (Optr)&t_send1, (Optr)PSend14364, (Optr)&t_method_return);
    Method PMethod14357 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14358, 1, PSend14364);
    
    MethodClosure MC_SMB_initializeCapitalIdentifier = new_MethodClosure((Method)PMethod14357, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCapitalIdentifier, MC_SMB_initializeCapitalIdentifier);
}


static void init_SMB_initializeSymbolConstant() {
    Symbol SMB_initializeSymbolConstant = new_Symbol(L"initializeSymbolConstant");
    Super PSuper14367 = new_Super(SMB_initializeSymbolConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14369 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_named_ = new_Symbol(L"named:");
    // named:. 
    Send PSend14371 = new_Send((Optr)ASTSymbol_classReference, SMB_named_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14370 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)ASTSymbol_classReference, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14371, (Optr)&t_method_return);
    Block PBlock14368 = new_Block_with(PArray14369, empty_Array, PThreadedCode14370, 1, PSend14371);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14372 = new_Send((Optr)PSuper14367, SMB_semantics_, 1, (Optr)PBlock14368);
    Array PThreadedCode14366 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14367, (Optr)&t_push_closure, (Optr)PBlock14368, (Optr)&t_send1, (Optr)PSend14372, (Optr)&t_method_return);
    Method PMethod14365 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14366, 1, PSend14372);
    
    MethodClosure MC_SMB_initializeSymbolConstant = new_MethodClosure((Method)PMethod14365, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolConstant, MC_SMB_initializeSymbolConstant);
}


static void init_SMB_initializeArray() {
    Symbol SMB_initializeArray = new_Symbol(L"initializeArray");
    Super PSuper14375 = new_Super(SMB_initializeArray, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14377 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14379 = new_Send((Optr)ASTArray_classReference, SMB_new, 0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14380 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_literals_ = new_Symbol(L"literals:");
    // literals:. 
    Send PSend14381 = new_Send((Optr)PSend14379, SMB_literals_, 1, (Optr)PSend14380);
    Array PThreadedCode14378 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_class_reference, (Optr)ASTArray_classReference, (Optr)&t_send0, (Optr)PSend14379, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14380, (Optr)&t_send1, (Optr)PSend14381, (Optr)&t_method_return);
    Block PBlock14376 = new_Block_with(PArray14377, empty_Array, PThreadedCode14378, 1, PSend14381);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14382 = new_Send((Optr)PSuper14375, SMB_semantics_, 1, (Optr)PBlock14376);
    Array PThreadedCode14374 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14375, (Optr)&t_push_closure, (Optr)PBlock14376, (Optr)&t_send1, (Optr)PSend14382, (Optr)&t_method_return);
    Method PMethod14373 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14374, 1, PSend14382);
    
    MethodClosure MC_SMB_initializeArray = new_MethodClosure((Method)PMethod14373, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeArray, MC_SMB_initializeArray);
}


static void init_SMB_initializeBinarySelector() {
    Symbol SMB_initializeBinarySelector = new_Symbol(L"initializeBinarySelector");
    Super PSuper14385 = new_Super(SMB_initializeBinarySelector, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14387 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asSymbol = new_Symbol(L"asSymbol");
    // asSymbol. 
    Send PSend14389 = new_Send((Optr)VAR_result_1_0, SMB_asSymbol, 0);
    Array PThreadedCode14388 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14389, (Optr)&t_method_return);
    Block PBlock14386 = new_Block_with(PArray14387, empty_Array, PThreadedCode14388, 1, PSend14389);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14390 = new_Send((Optr)PSuper14385, SMB_semantics_, 1, (Optr)PBlock14386);
    Array PThreadedCode14384 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14385, (Optr)&t_push_closure, (Optr)PBlock14386, (Optr)&t_send1, (Optr)PSend14390, (Optr)&t_method_return);
    Method PMethod14383 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14384, 1, PSend14390);
    
    MethodClosure MC_SMB_initializeBinarySelector = new_MethodClosure((Method)PMethod14383, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinarySelector, MC_SMB_initializeBinarySelector);
}


static void init_SMB_createReference_() {
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    Variable VAR_path_0_0 = new_Variable_named(L"path", 0);
    Array PArray14392 = new_Array_with(1, (Optr)VAR_path_0_0);
    Variable VAR_name_0_1 = new_Variable_named(L"name", 0);
    Array PArray14393 = new_Array_with(1, (Optr)VAR_name_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray14396 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14398 = new_Send((Optr)VAR_path_0_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14399 = new_Send((Optr)PSend14398, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14404 = new_Send((Optr)VAR_path_0_0, SMB_first, 0);
    Assign PAssign14403 = new_Assign((Optr)VAR_name_0_1, (Optr)PSend14404);
    Symbol  SMB_self = new_Symbol(L"self");
    Constant SMB_self_Const = new_Constant((Optr)SMB_self);
    // =. 
    Send PSend14405 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_self_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14409 = new_Send((Optr)ASTSelf_classReference, SMB_new, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend14410 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14409);
    Array PThreadedCode14408 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSelf_classReference, (Optr)&t_send0, (Optr)PSend14409, (Optr)&t_send1, (Optr)PSend14410, (Optr)&t_block_return);
    Block PBlock14407 = new_Block_with(empty_Array, empty_Array, PThreadedCode14408, 1, PSend14410);
    // ifTrue:. 
    Send PSend14406 = new_Send((Optr)PSend14405, SMB_ifTrue_, 1, (Optr)PBlock14407);
    Symbol  SMB_super = new_Symbol(L"super");
    Constant SMB_super_Const = new_Constant((Optr)SMB_super);
    // =. 
    Send PSend14411 = new_Send((Optr)VAR_name_0_1, SMB__equals_, 1, (Optr)SMB_super_Const);
    // new. 
    Send PSend14415 = new_Send((Optr)ASTSuper_classReference, SMB_new, 0);
    // escape:. 
    Send PSend14416 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14415);
    Array PThreadedCode14414 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTSuper_classReference, (Optr)&t_send0, (Optr)PSend14415, (Optr)&t_send1, (Optr)PSend14416, (Optr)&t_block_return);
    Block PBlock14413 = new_Block_with(empty_Array, empty_Array, PThreadedCode14414, 1, PSend14416);
    // ifTrue:. 
    Send PSend14412 = new_Send((Optr)PSend14411, SMB_ifTrue_, 1, (Optr)PBlock14413);
    // new. 
    Send PSend14417 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14418 = new_Send((Optr)PSend14417, SMB_name_, 1, (Optr)VAR_name_0_1);
    // escape:. 
    Send PSend14419 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend14418);
    Array PThreadedCode14402 = instantiate_Array_with(ThreadedCode_Class, 0, 41, (Optr)&t_push1, (Optr)PAssign14403, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14404, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_self, (Optr)&t_send1, (Optr)PSend14405, (Optr)&t_send_ifTrue_, (Optr)PSend14406, (Optr)PBlock14407, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_push1, (Optr)SMB_super, (Optr)&t_send1, (Optr)PSend14411, (Optr)&t_send_ifTrue_, (Optr)PSend14412, (Optr)PBlock14413, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14417, (Optr)&t_push_variable, (Optr)VAR_name_0_1, (Optr)&t_send1, (Optr)PSend14418, (Optr)&t_send1, (Optr)PSend14419, (Optr)&t_block_return);
    Block PBlock14401 = new_Block_with(empty_Array, empty_Array, PThreadedCode14402, 4, PAssign14403, PSend14406, PSend14412, PSend14419);
    // ifTrue:. 
    Send PSend14400 = new_Send((Optr)PSend14399, SMB_ifTrue_, 1, (Optr)PBlock14401);
    // new. 
    Send PSend14420 = new_Send((Optr)ASTPath_classReference, SMB_new, 0);
    Symbol SMB_path_ = new_Symbol(L"path:");
    // path:. 
    Send PSend14421 = new_Send((Optr)PSend14420, SMB_path_, 1, (Optr)VAR_path_0_0);
    Array PThreadedCode14397 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send0, (Optr)PSend14398, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14399, (Optr)&t_send_ifTrue_, (Optr)PSend14400, (Optr)PBlock14401, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)ASTPath_classReference, (Optr)&t_send0, (Optr)PSend14420, (Optr)&t_push_variable, (Optr)VAR_path_0_0, (Optr)&t_send1, (Optr)PSend14421, (Optr)&t_method_return);
    Block PBlock14395 = new_Block_with(PArray14396, empty_Array, PThreadedCode14397, 2, PSend14400, PSend14421);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend14422 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock14395);
    Array PThreadedCode14394 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock14395, (Optr)&t_send1, (Optr)PSend14422, (Optr)&t_method_return);
    Method PMethod14391 = new_Method_with(PArray14392, PArray14393, empty_Array, PThreadedCode14394, 1, PSend14422);
    
    MethodClosure MC_SMB_createReference_ = new_MethodClosure((Method)PMethod14391, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createReference_, MC_SMB_createReference_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper14425 = new_Super(SMB_initialize, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend14428 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend14427 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend14428);
    Assign PAssign14426 = new_Assign((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)PSend14427);
    Array PThreadedCode14424 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14425, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14426, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend14428, (Optr)&t_send1, (Optr)PSend14427, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod14423 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14424, 3, PSuper14425, PAssign14426, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod14423, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_initializeStringConstant() {
    Symbol SMB_initializeStringConstant = new_Symbol(L"initializeStringConstant");
    Super PSuper14431 = new_Super(SMB_initializeStringConstant, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14433 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14435 = new_Send((Optr)ASTString_classReference, SMB_new, 0);
    Symbol SMB_string_ = new_Symbol(L"string:");
    // string:. 
    Send PSend14436 = new_Send((Optr)PSend14435, SMB_string_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14434 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTString_classReference, (Optr)&t_send0, (Optr)PSend14435, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14436, (Optr)&t_method_return);
    Block PBlock14432 = new_Block_with(PArray14433, empty_Array, PThreadedCode14434, 1, PSend14436);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14437 = new_Send((Optr)PSuper14431, SMB_semantics_, 1, (Optr)PBlock14432);
    Array PThreadedCode14430 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14431, (Optr)&t_push_closure, (Optr)PBlock14432, (Optr)&t_send1, (Optr)PSend14437, (Optr)&t_method_return);
    Method PMethod14429 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14430, 1, PSend14437);
    
    MethodClosure MC_SMB_initializeStringConstant = new_MethodClosure((Method)PMethod14429, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringConstant, MC_SMB_initializeStringConstant);
}


static void init_SMB_initializeKeywordExpression() {
    Symbol SMB_initializeKeywordExpression = new_Symbol(L"initializeKeywordExpression");
    Super PSuper14440 = new_Super(SMB_initializeKeywordExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14442 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14444 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14445 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14446 = new_Send((Optr)PSend14444, SMB_receiver_, 1, (Optr)PSend14445);
    Array PThreadedCode14443 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14444, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14445, (Optr)&t_send1, (Optr)PSend14446, (Optr)&t_method_return);
    Block PBlock14441 = new_Block_with(PArray14442, empty_Array, PThreadedCode14443, 1, PSend14446);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14447 = new_Send((Optr)PSuper14440, SMB_semantics_, 1, (Optr)PBlock14441);
    Array PThreadedCode14439 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14440, (Optr)&t_push_closure, (Optr)PBlock14441, (Optr)&t_send1, (Optr)PSend14447, (Optr)&t_method_return);
    Method PMethod14438 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14439, 1, PSend14447);
    
    MethodClosure MC_SMB_initializeKeywordExpression = new_MethodClosure((Method)PMethod14438, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordExpression, MC_SMB_initializeKeywordExpression);
}


static void init_SMB_initializeBracketIndexExpression() {
    Symbol SMB_initializeBracketIndexExpression = new_Symbol(L"initializeBracketIndexExpression");
    Variable VAR_optionalAssignment_0_0 = new_Variable_named(L"optionalAssignment", 0);
    Variable VAR_isAssignment_0_1 = new_Variable_named(L"isAssignment", 0);
    Variable VAR_keywords_0_2 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_3 = new_Variable_named(L"arguments", 0);
    Array PArray14449 = new_Array_with(4, (Optr)VAR_optionalAssignment_0_0, (Optr)VAR_isAssignment_0_1, (Optr)VAR_keywords_0_2, (Optr)VAR_arguments_0_3);
    Super PSuper14451 = new_Super(SMB_initializeBracketIndexExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14453 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_second = new_Symbol(L"second");
    // second. 
    Send PSend14456 = new_Send((Optr)VAR_parts_1_0, SMB_second, 0);
    Assign PAssign14455 = new_Assign((Optr)VAR_optionalAssignment_0_0, (Optr)PSend14456);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend14459 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_class, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend14458 = new_Send((Optr)PSend14459, SMB__pequals_, 1, (Optr)PEGSucceededOptionalResult_classReference);
    Assign PAssign14457 = new_Assign((Optr)VAR_isAssignment_0_1, (Optr)PSend14458);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    Symbol  SMB_at_ = new_Symbol(L"at:");
    Symbol SMB_with_ = new_Symbol(L"with:");
    Constant SMB_at__Const = new_Constant((Optr)SMB_at_);
    // with:. 
    Send PSend14464 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)SMB_at__Const);
    Array PThreadedCode14463 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_send1, (Optr)PSend14464, (Optr)&t_block_return);
    Block PBlock14462 = new_Block_with(empty_Array, empty_Array, PThreadedCode14463, 1, PSend14464);
    Symbol  SMB_put_ = new_Symbol(L"put:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    Constant SMB_put__Const = new_Constant((Optr)SMB_put_);
    // with:with:. 
    Send PSend14467 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)SMB_at__Const, (Optr)SMB_put__Const);
    Array PThreadedCode14466 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push1, (Optr)SMB_at_, (Optr)&t_push1, (Optr)SMB_put_, (Optr)&t_send2, (Optr)PSend14467, (Optr)&t_block_return);
    Block PBlock14465 = new_Block_with(empty_Array, empty_Array, PThreadedCode14466, 1, PSend14467);
    // ifFalse:ifTrue:. 
    Send PSend14461 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14462, (Optr)PBlock14465);
    Assign PAssign14460 = new_Assign((Optr)VAR_keywords_0_2, (Optr)PSend14461);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14472 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    // with:. 
    Send PSend14473 = new_Send((Optr)Array_classReference, SMB_with_, 1, (Optr)PSend14472);
    Array PThreadedCode14471 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14472, (Optr)&t_send1, (Optr)PSend14473, (Optr)&t_block_return);
    Block PBlock14470 = new_Block_with(empty_Array, empty_Array, PThreadedCode14471, 1, PSend14473);
    // first. 
    Send PSend14476 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_result = new_Symbol(L"result");
    // result. 
    Send PSend14477 = new_Send((Optr)VAR_optionalAssignment_0_0, SMB_result, 0);
    // with:with:. 
    Send PSend14478 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)PSend14476, (Optr)PSend14477);
    Array PThreadedCode14475 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14476, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14477, (Optr)&t_send2, (Optr)PSend14478, (Optr)&t_block_return);
    Block PBlock14474 = new_Block_with(empty_Array, empty_Array, PThreadedCode14475, 1, PSend14478);
    // ifFalse:ifTrue:. 
    Send PSend14469 = new_Send((Optr)VAR_isAssignment_0_1, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock14470, (Optr)PBlock14474);
    Assign PAssign14468 = new_Assign((Optr)VAR_arguments_0_3, (Optr)PSend14469);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14480 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14482 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_2);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14483 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_3);
    Array PThreadedCode14481 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_2, (Optr)&t_send1, (Optr)PSend14482, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_3, (Optr)&t_send1, (Optr)PSend14483, (Optr)&t_method_return);
    Block PBlock14479 = new_Block_with(PArray14480, empty_Array, PThreadedCode14481, 2, PSend14482, PSend14483);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14484 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14485 = new_Send((Optr)PBlock14479, SMB_value_, 1, (Optr)PSend14484);
    Array PThreadedCode14454 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14455, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14456, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14457, (Optr)&t_push_variable, (Optr)VAR_optionalAssignment_0_0, (Optr)&t_send0, (Optr)PSend14459, (Optr)&t_push_class_reference, (Optr)PEGSucceededOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14458, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14460, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14461, (Optr)PBlock14462, (Optr)PBlock14465, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14468, (Optr)&t_push_variable, (Optr)VAR_isAssignment_0_1, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend14469, (Optr)PBlock14470, (Optr)PBlock14474, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14479, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14484, (Optr)&t_send1, (Optr)PSend14485, (Optr)&t_method_return);
    Block PBlock14452 = new_Block_with(PArray14453, empty_Array, PThreadedCode14454, 5, PAssign14455, PAssign14457, PAssign14460, PAssign14468, PSend14485);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14486 = new_Send((Optr)PSuper14451, SMB_semantics_, 1, (Optr)PBlock14452);
    Array PThreadedCode14450 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14451, (Optr)&t_push_closure, (Optr)PBlock14452, (Optr)&t_send1, (Optr)PSend14486, (Optr)&t_method_return);
    Method PMethod14448 = new_Method_with(empty_Array, PArray14449, empty_Array, PThreadedCode14450, 1, PSend14486);
    
    MethodClosure MC_SMB_initializeBracketIndexExpression = new_MethodClosure((Method)PMethod14448, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBracketIndexExpression, MC_SMB_initializeBracketIndexExpression);
}


static void init_SMB_initializeBinaryExpression() {
    Symbol SMB_initializeBinaryExpression = new_Symbol(L"initializeBinaryExpression");
    Super PSuper14489 = new_Super(SMB_initializeBinaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14491 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14492 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14495 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14494 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14495);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14496 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14498 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14503 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14505 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14506 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14507 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14506);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend14508 = new_Send((Optr)VAR_i_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend14509 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14508);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14510 = new_Send((Optr)VAR__receiver__3_0, SMB_argument_, 1, (Optr)PSend14509);
    Array PThreadedCode14504 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14505, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14506, (Optr)&t_send1, (Optr)PSend14507, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14508, (Optr)&t_send1, (Optr)PSend14509, (Optr)&t_send1, (Optr)PSend14510, (Optr)&t_method_return);
    Block PBlock14502 = new_Block_with(PArray14503, empty_Array, PThreadedCode14504, 3, PSend14505, PSend14507, PSend14510);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14511 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14501 = new_Send((Optr)PBlock14502, SMB_value_, 1, (Optr)PSend14511);
    Assign PAssign14500 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14501);
    Array PThreadedCode14499 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14500, (Optr)&t_push_closure, (Optr)PBlock14502, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14511, (Optr)&t_send1, (Optr)PSend14501, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14497 = new_Block_with(PArray14498, empty_Array, PThreadedCode14499, 1, PAssign14500);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    // to:by:do:. 
    Send PSend14512 = new_Send((Optr)int_2_Const, SMB_to_by_do_, 3, (Optr)PSend14496, (Optr)int_2_Const, (Optr)PBlock14497);
    Array PThreadedCode14493 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign14494, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14495, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14496, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock14497, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend14512, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14490 = new_Block_with(PArray14491, PArray14492, PThreadedCode14493, 3, PAssign14494, PSend14512, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14513 = new_Send((Optr)PSuper14489, SMB_semantics_, 1, (Optr)PBlock14490);
    Array PThreadedCode14488 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14489, (Optr)&t_push_closure, (Optr)PBlock14490, (Optr)&t_send1, (Optr)PSend14513, (Optr)&t_method_return);
    Method PMethod14487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14488, 1, PSend14513);
    
    MethodClosure MC_SMB_initializeBinaryExpression = new_MethodClosure((Method)PMethod14487, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryExpression, MC_SMB_initializeBinaryExpression);
}


static void init_SMB_initializeScopedExpression() {
    Symbol SMB_initializeScopedExpression = new_Symbol(L"initializeScopedExpression");
    Super PSuper14516 = new_Super(SMB_initializeScopedExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14518 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_scoped = new_Symbol(L"scoped");
    // scoped. 
    Send PSend14520 = new_Send((Optr)VAR_result_1_0, SMB_scoped, 0);
    Array PThreadedCode14519 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14520, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_method_return);
    Block PBlock14517 = new_Block_with(PArray14518, empty_Array, PThreadedCode14519, 2, PSend14520, VAR_result_1_0);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14521 = new_Send((Optr)PSuper14516, SMB_semantics_, 1, (Optr)PBlock14517);
    Array PThreadedCode14515 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14516, (Optr)&t_push_closure, (Optr)PBlock14517, (Optr)&t_send1, (Optr)PSend14521, (Optr)&t_method_return);
    Method PMethod14514 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14515, 1, PSend14521);
    
    MethodClosure MC_SMB_initializeScopedExpression = new_MethodClosure((Method)PMethod14514, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeScopedExpression, MC_SMB_initializeScopedExpression);
}


static void init_SMB_initializeCharacterConstant() {
    Symbol SMB_initializeCharacterConstant = new_Symbol(L"initializeCharacterConstant");
    Super PSuper14524 = new_Super(SMB_initializeCharacterConstant, 0);
    Variable VAR_char_1_0 = new_Variable_named(L"char", 1);
    Array PArray14526 = new_Array_with(1, (Optr)VAR_char_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14528 = new_Send((Optr)ASTCharacter_classReference, SMB_new, 0);
    Symbol SMB_char_ = new_Symbol(L"char:");
    // char:. 
    Send PSend14529 = new_Send((Optr)PSend14528, SMB_char_, 1, (Optr)VAR_char_1_0);
    Array PThreadedCode14527 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTCharacter_classReference, (Optr)&t_send0, (Optr)PSend14528, (Optr)&t_push_variable, (Optr)VAR_char_1_0, (Optr)&t_send1, (Optr)PSend14529, (Optr)&t_method_return);
    Block PBlock14525 = new_Block_with(PArray14526, empty_Array, PThreadedCode14527, 1, PSend14529);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14530 = new_Send((Optr)PSuper14524, SMB_semantics_, 1, (Optr)PBlock14525);
    Array PThreadedCode14523 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14524, (Optr)&t_push_closure, (Optr)PBlock14525, (Optr)&t_send1, (Optr)PSend14530, (Optr)&t_method_return);
    Method PMethod14522 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14523, 1, PSend14530);
    
    MethodClosure MC_SMB_initializeCharacterConstant = new_MethodClosure((Method)PMethod14522, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeCharacterConstant, MC_SMB_initializeCharacterConstant);
}


static void init_SMB_initializeNumberFormat() {
    Symbol SMB_initializeNumberFormat = new_Symbol(L"initializeNumberFormat");
    Super PSuper14533 = new_Super(SMB_initializeNumberFormat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14535 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14537 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14536 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14537, (Optr)&t_method_return);
    Block PBlock14534 = new_Block_with(PArray14535, empty_Array, PThreadedCode14536, 1, PSend14537);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14538 = new_Send((Optr)PSuper14533, SMB_semantics_, 1, (Optr)PBlock14534);
    Array PThreadedCode14532 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14533, (Optr)&t_push_closure, (Optr)PBlock14534, (Optr)&t_send1, (Optr)PSend14538, (Optr)&t_method_return);
    Method PMethod14531 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14532, 1, PSend14538);
    
    MethodClosure MC_SMB_initializeNumberFormat = new_MethodClosure((Method)PMethod14531, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeNumberFormat, MC_SMB_initializeNumberFormat);
}


static void init_SMB_initializeMethod() {
    Symbol SMB_initializeMethod = new_Symbol(L"initializeMethod");
    Super PSuper14541 = new_Super(SMB_initializeMethod, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14543 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14546 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14548 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend14549 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)PSend14548);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14550 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_annotations_ = new_Symbol(L"annotations:");
    // annotations:. 
    Send PSend14551 = new_Send((Optr)VAR__receiver__2_0, SMB_annotations_, 1, (Optr)PSend14550);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14552 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14555 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14554 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14555, (Optr)&t_block_return);
    Block PBlock14553 = new_Block_with(empty_Array, empty_Array, PThreadedCode14554, 1, PSend14555);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14556 = new_Send((Optr)PSend14552, SMB_resultIfFailed_, 1, (Optr)PBlock14553);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14557 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14556);
    SmallInt int_4 = new_SmallInt(4);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:. 
    Send PSend14558 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_4_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14559 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14558);
    Array PThreadedCode14547 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14548, (Optr)&t_send1, (Optr)PSend14549, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14550, (Optr)&t_send1, (Optr)PSend14551, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14552, (Optr)&t_push_closure, (Optr)PBlock14553, (Optr)&t_send1, (Optr)PSend14556, (Optr)&t_send1, (Optr)PSend14557, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_send1, (Optr)PSend14558, (Optr)&t_send1, (Optr)PSend14559, (Optr)&t_method_return);
    Block PBlock14545 = new_Block_with(PArray14546, empty_Array, PThreadedCode14547, 4, PSend14549, PSend14551, PSend14557, PSend14559);
    // new. 
    Send PSend14560 = new_Send((Optr)ASTMethod_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14561 = new_Send((Optr)PBlock14545, SMB_value_, 1, (Optr)PSend14560);
    Array PThreadedCode14544 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14545, (Optr)&t_push_class_reference, (Optr)ASTMethod_classReference, (Optr)&t_send0, (Optr)PSend14560, (Optr)&t_send1, (Optr)PSend14561, (Optr)&t_method_return);
    Block PBlock14542 = new_Block_with(PArray14543, empty_Array, PThreadedCode14544, 1, PSend14561);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14562 = new_Send((Optr)PSuper14541, SMB_semantics_, 1, (Optr)PBlock14542);
    Array PThreadedCode14540 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14541, (Optr)&t_push_closure, (Optr)PBlock14542, (Optr)&t_send1, (Optr)PSend14562, (Optr)&t_method_return);
    Method PMethod14539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14540, 1, PSend14562);
    
    MethodClosure MC_SMB_initializeMethod = new_MethodClosure((Method)PMethod14539, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeMethod, MC_SMB_initializeMethod);
}


static void init_SMB_initializeUnaryMessageDefinition() {
    Symbol SMB_initializeUnaryMessageDefinition = new_Symbol(L"initializeUnaryMessageDefinition");
    Super PSuper14565 = new_Super(SMB_initializeUnaryMessageDefinition, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14567 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14569 = new_Send((Optr)ASTUnaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14570 = new_Send((Optr)PSend14569, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14568 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14569, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14570, (Optr)&t_method_return);
    Block PBlock14566 = new_Block_with(PArray14567, empty_Array, PThreadedCode14568, 1, PSend14570);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14571 = new_Send((Optr)PSuper14565, SMB_semantics_, 1, (Optr)PBlock14566);
    Array PThreadedCode14564 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14565, (Optr)&t_push_closure, (Optr)PBlock14566, (Optr)&t_send1, (Optr)PSend14571, (Optr)&t_method_return);
    Method PMethod14563 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14564, 1, PSend14571);
    
    MethodClosure MC_SMB_initializeUnaryMessageDefinition = new_MethodClosure((Method)PMethod14563, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryMessageDefinition, MC_SMB_initializeUnaryMessageDefinition);
}


static void init_SMB_initializeKeywordAnnotation() {
    Symbol SMB_initializeKeywordAnnotation = new_Symbol(L"initializeKeywordAnnotation");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14573 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14575 = new_Super(SMB_initializeKeywordAnnotation, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14577 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14581 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14580 = new_Send((Optr)PSend14581, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14579 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14580);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14583 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14582 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14583);
    // new:. 
    Send PSend14585 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14584 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14585);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14587 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14589 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14590 = new_Send((Optr)PSend14589, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14591 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14590);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14592 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14591);
    // *. 
    Send PSend14593 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14594 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14593);
    // at:put:. 
    Send PSend14595 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14594);
    Array PThreadedCode14588 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14589, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14590, (Optr)&t_send1, (Optr)PSend14591, (Optr)&t_send2, (Optr)PSend14592, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14593, (Optr)&t_send1, (Optr)PSend14594, (Optr)&t_send2, (Optr)PSend14595, (Optr)&t_method_return);
    Block PBlock14586 = new_Block_with(PArray14587, empty_Array, PThreadedCode14588, 2, PSend14592, PSend14595);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14596 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14586);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14598 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14600 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14601 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14599 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14600, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14601, (Optr)&t_method_return);
    Block PBlock14597 = new_Block_with(PArray14598, empty_Array, PThreadedCode14599, 2, PSend14600, PSend14601);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14602 = new_Send((Optr)ASTKeywordAnnotation_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14603 = new_Send((Optr)PBlock14597, SMB_value_, 1, (Optr)PSend14602);
    Array PThreadedCode14578 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14579, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14581, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14580, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14582, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14583, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14584, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14585, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14586, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14596, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14597, (Optr)&t_push_class_reference, (Optr)ASTKeywordAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14602, (Optr)&t_send1, (Optr)PSend14603, (Optr)&t_method_return);
    Block PBlock14576 = new_Block_with(PArray14577, empty_Array, PThreadedCode14578, 5, PAssign14579, PAssign14582, PAssign14584, PSend14596, PSend14603);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14604 = new_Send((Optr)PSuper14575, SMB_semantics_, 1, (Optr)PBlock14576);
    Array PThreadedCode14574 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14575, (Optr)&t_push_closure, (Optr)PBlock14576, (Optr)&t_send1, (Optr)PSend14604, (Optr)&t_method_return);
    Method PMethod14572 = new_Method_with(empty_Array, PArray14573, empty_Array, PThreadedCode14574, 1, PSend14604);
    
    MethodClosure MC_SMB_initializeKeywordAnnotation = new_MethodClosure((Method)PMethod14572, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordAnnotation, MC_SMB_initializeKeywordAnnotation);
}


static void init_SMB_initializeKeyword() {
    Symbol SMB_initializeKeyword = new_Symbol(L"initializeKeyword");
    Super PSuper14607 = new_Super(SMB_initializeKeyword, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14609 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14611 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14610 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14611, (Optr)&t_method_return);
    Block PBlock14608 = new_Block_with(PArray14609, empty_Array, PThreadedCode14610, 1, PSend14611);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14612 = new_Send((Optr)PSuper14607, SMB_semantics_, 1, (Optr)PBlock14608);
    Array PThreadedCode14606 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14607, (Optr)&t_push_closure, (Optr)PBlock14608, (Optr)&t_send1, (Optr)PSend14612, (Optr)&t_method_return);
    Method PMethod14605 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14606, 1, PSend14612);
    
    MethodClosure MC_SMB_initializeKeyword = new_MethodClosure((Method)PMethod14605, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeyword, MC_SMB_initializeKeyword);
}


static void init_SMB_initializeExpression() {
    Symbol SMB_initializeExpression = new_Symbol(L"initializeExpression");
    Variable VAR_vars_0_0 = new_Variable_named(L"vars", 0);
    Variable VAR_expression_0_1 = new_Variable_named(L"expression", 0);
    Array PArray14614 = new_Array_with(2, (Optr)VAR_vars_0_0, (Optr)VAR_expression_0_1);
    Super PSuper14616 = new_Super(SMB_initializeExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14618 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14621 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Assign PAssign14620 = new_Assign((Optr)VAR_vars_0_0, (Optr)PSend14621);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14623 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Assign PAssign14622 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14623);
    Variable VAR_variables_2_0 = new_Variable_named(L"variables", 2);
    Array PArray14625 = new_Array_with(1, (Optr)VAR_variables_2_0);
    Variable VAR_variable_3_0 = new_Variable_named(L"variable", 3);
    Array PArray14628 = new_Array_with(1, (Optr)VAR_variable_3_0);
    Variable VAR__receiver__4_0 = new_Variable_named(L"_receiver_", 4);
    Array PArray14633 = new_Array_with(1, (Optr)VAR__receiver__4_0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14635 = new_Send((Optr)VAR__receiver__4_0, SMB_expression_, 1, (Optr)VAR_expression_0_1);
    Symbol SMB_variable_ = new_Symbol(L"variable:");
    // variable:. 
    Send PSend14636 = new_Send((Optr)VAR__receiver__4_0, SMB_variable_, 1, (Optr)VAR_variable_3_0);
    Array PThreadedCode14634 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_send1, (Optr)PSend14635, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__4_0, (Optr)&t_push_variable, (Optr)VAR_variable_3_0, (Optr)&t_send1, (Optr)PSend14636, (Optr)&t_method_return);
    Block PBlock14632 = new_Block_with(PArray14633, empty_Array, PThreadedCode14634, 2, PSend14635, PSend14636);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14637 = new_Send((Optr)ASTAssignmentExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14631 = new_Send((Optr)PBlock14632, SMB_value_, 1, (Optr)PSend14637);
    Assign PAssign14630 = new_Assign((Optr)VAR_expression_0_1, (Optr)PSend14631);
    Array PThreadedCode14629 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14630, (Optr)&t_push_closure, (Optr)PBlock14632, (Optr)&t_push_class_reference, (Optr)ASTAssignmentExpression_classReference, (Optr)&t_send0, (Optr)PSend14637, (Optr)&t_send1, (Optr)PSend14631, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14627 = new_Block_with(PArray14628, empty_Array, PThreadedCode14629, 1, PAssign14630);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend14638 = new_Send((Optr)VAR_variables_2_0, SMB_reverseDo_, 1, (Optr)PBlock14627);
    Array PThreadedCode14626 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_variables_2_0, (Optr)&t_push_closure, (Optr)PBlock14627, (Optr)&t_send1, (Optr)PSend14638, (Optr)&t_method_return);
    Block PBlock14624 = new_Block_with(PArray14625, empty_Array, PThreadedCode14626, 1, PSend14638);
    Symbol SMB_ifMatched_ = new_Symbol(L"ifMatched:");
    // ifMatched:. 
    Send PSend14639 = new_Send((Optr)VAR_vars_0_0, SMB_ifMatched_, 1, (Optr)PBlock14624);
    Array PThreadedCode14619 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign14620, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14621, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14622, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14623, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_vars_0_0, (Optr)&t_push_closure, (Optr)PBlock14624, (Optr)&t_send1, (Optr)PSend14639, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expression_0_1, (Optr)&t_method_return);
    Block PBlock14617 = new_Block_with(PArray14618, empty_Array, PThreadedCode14619, 4, PAssign14620, PAssign14622, PSend14639, VAR_expression_0_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14640 = new_Send((Optr)PSuper14616, SMB_semantics_, 1, (Optr)PBlock14617);
    Array PThreadedCode14615 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14616, (Optr)&t_push_closure, (Optr)PBlock14617, (Optr)&t_send1, (Optr)PSend14640, (Optr)&t_method_return);
    Method PMethod14613 = new_Method_with(empty_Array, PArray14614, empty_Array, PThreadedCode14615, 1, PSend14640);
    
    MethodClosure MC_SMB_initializeExpression = new_MethodClosure((Method)PMethod14613, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeExpression, MC_SMB_initializeExpression);
}


static void init_SMB_initializeFloat() {
    Symbol SMB_initializeFloat = new_Symbol(L"initializeFloat");
    Super PSuper14643 = new_Super(SMB_initializeFloat, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14645 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14648 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14650 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_high_ = new_Symbol(L"high:");
    // high:. 
    Send PSend14651 = new_Send((Optr)VAR__receiver__2_0, SMB_high_, 1, (Optr)PSend14650);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14652 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Symbol SMB_low_ = new_Symbol(L"low:");
    // low:. 
    Send PSend14653 = new_Send((Optr)VAR__receiver__2_0, SMB_low_, 1, (Optr)PSend14652);
    Array PThreadedCode14649 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14650, (Optr)&t_send1, (Optr)PSend14651, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14652, (Optr)&t_send1, (Optr)PSend14653, (Optr)&t_method_return);
    Block PBlock14647 = new_Block_with(PArray14648, empty_Array, PThreadedCode14649, 2, PSend14651, PSend14653);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14654 = new_Send((Optr)ASTFloat_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14655 = new_Send((Optr)PBlock14647, SMB_value_, 1, (Optr)PSend14654);
    Array PThreadedCode14646 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14647, (Optr)&t_push_class_reference, (Optr)ASTFloat_classReference, (Optr)&t_send0, (Optr)PSend14654, (Optr)&t_send1, (Optr)PSend14655, (Optr)&t_method_return);
    Block PBlock14644 = new_Block_with(PArray14645, empty_Array, PThreadedCode14646, 1, PSend14655);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14656 = new_Send((Optr)PSuper14643, SMB_semantics_, 1, (Optr)PBlock14644);
    Array PThreadedCode14642 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14643, (Optr)&t_push_closure, (Optr)PBlock14644, (Optr)&t_send1, (Optr)PSend14656, (Optr)&t_method_return);
    Method PMethod14641 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14642, 1, PSend14656);
    
    MethodClosure MC_SMB_initializeFloat = new_MethodClosure((Method)PMethod14641, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeFloat, MC_SMB_initializeFloat);
}


static void init_SMB_initializeBlockArguments() {
    Symbol SMB_initializeBlockArguments = new_Symbol(L"initializeBlockArguments");
    Super PSuper14659 = new_Super(SMB_initializeBlockArguments, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14661 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR_variable_2_0 = new_Variable_named(L"variable", 2);
    Array PArray14664 = new_Array_with(1, (Optr)VAR_variable_2_0);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14666 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)VAR_variable_2_0);
    Array PThreadedCode14665 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_variable_2_0, (Optr)&t_send1, (Optr)PSend14666, (Optr)&t_method_return);
    Block PBlock14663 = new_Block_with(PArray14664, empty_Array, PThreadedCode14665, 1, PSend14666);
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    // collect:. 
    Send PSend14667 = new_Send((Optr)VAR_result_1_0, SMB_collect_, 1, (Optr)PBlock14663);
    Array PThreadedCode14662 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_closure, (Optr)PBlock14663, (Optr)&t_send1, (Optr)PSend14667, (Optr)&t_method_return);
    Block PBlock14660 = new_Block_with(PArray14661, empty_Array, PThreadedCode14662, 1, PSend14667);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14668 = new_Send((Optr)PSuper14659, SMB_semantics_, 1, (Optr)PBlock14660);
    Array PThreadedCode14658 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14659, (Optr)&t_push_closure, (Optr)PBlock14660, (Optr)&t_send1, (Optr)PSend14668, (Optr)&t_method_return);
    Method PMethod14657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14658, 1, PSend14668);
    
    MethodClosure MC_SMB_initializeBlockArguments = new_MethodClosure((Method)PMethod14657, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlockArguments, MC_SMB_initializeBlockArguments);
}


static void init_SMB_initializeBraceExpression() {
    Symbol SMB_initializeBraceExpression = new_Symbol(L"initializeBraceExpression");
    Super PSuper14671 = new_Super(SMB_initializeBraceExpression, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14673 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14675 = new_Send((Optr)ASTBraceExpression_classReference, SMB_new, 0);
    Symbol SMB_expressions_ = new_Symbol(L"expressions:");
    // expressions:. 
    Send PSend14676 = new_Send((Optr)PSend14675, SMB_expressions_, 1, (Optr)VAR_result_1_0);
    Array PThreadedCode14674 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTBraceExpression_classReference, (Optr)&t_send0, (Optr)PSend14675, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send1, (Optr)PSend14676, (Optr)&t_method_return);
    Block PBlock14672 = new_Block_with(PArray14673, empty_Array, PThreadedCode14674, 1, PSend14676);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14677 = new_Send((Optr)PSuper14671, SMB_semantics_, 1, (Optr)PBlock14672);
    Array PThreadedCode14670 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14671, (Optr)&t_push_closure, (Optr)PBlock14672, (Optr)&t_send1, (Optr)PSend14677, (Optr)&t_method_return);
    Method PMethod14669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14670, 1, PSend14677);
    
    MethodClosure MC_SMB_initializeBraceExpression = new_MethodClosure((Method)PMethod14669, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBraceExpression, MC_SMB_initializeBraceExpression);
}


static void init_SMB_initializeBinaryMessageExpression() {
    Symbol SMB_initializeBinaryMessageExpression = new_Symbol(L"initializeBinaryMessageExpression");
    Super PSuper14680 = new_Super(SMB_initializeBinaryMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14682 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14685 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14687 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14688 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14687);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14689 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_argument_ = new_Symbol(L"argument:");
    // argument:. 
    Send PSend14690 = new_Send((Optr)VAR__receiver__2_0, SMB_argument_, 1, (Optr)PSend14689);
    Array PThreadedCode14686 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14687, (Optr)&t_send1, (Optr)PSend14688, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14689, (Optr)&t_send1, (Optr)PSend14690, (Optr)&t_method_return);
    Block PBlock14684 = new_Block_with(PArray14685, empty_Array, PThreadedCode14686, 2, PSend14688, PSend14690);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14691 = new_Send((Optr)ASTBinaryExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14692 = new_Send((Optr)PBlock14684, SMB_value_, 1, (Optr)PSend14691);
    Array PThreadedCode14683 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14684, (Optr)&t_push_class_reference, (Optr)ASTBinaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14691, (Optr)&t_send1, (Optr)PSend14692, (Optr)&t_method_return);
    Block PBlock14681 = new_Block_with(PArray14682, empty_Array, PThreadedCode14683, 1, PSend14692);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14693 = new_Send((Optr)PSuper14680, SMB_semantics_, 1, (Optr)PBlock14681);
    Array PThreadedCode14679 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14680, (Optr)&t_push_closure, (Optr)PBlock14681, (Optr)&t_send1, (Optr)PSend14693, (Optr)&t_method_return);
    Method PMethod14678 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14679, 1, PSend14693);
    
    MethodClosure MC_SMB_initializeBinaryMessageExpression = new_MethodClosure((Method)PMethod14678, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageExpression, MC_SMB_initializeBinaryMessageExpression);
}


static void init_SMB_initializeString() {
    Symbol SMB_initializeString = new_Symbol(L"initializeString");
    Super PSuper14696 = new_Super(SMB_initializeString, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14698 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14700 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend14701 = new_Send((Optr)PSend14700, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    String string_14705 = new_String(L"");
    Array PThreadedCode14704 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_14705, (Optr)&t_block_return);
    Constant string_14705_Const = new_Constant((Optr)string_14705);
    Block PBlock14703 = new_Block_with(empty_Array, empty_Array, PThreadedCode14704, 1, string_14705_Const);
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    // removeFirst. 
    Send PSend14708 = new_Send((Optr)VAR_result_1_0, SMB_removeFirst, 0);
    Symbol SMB_with_ = new_Symbol(L"with:");
    // with:. 
    Send PSend14709 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_with_, 1, (Optr)PSend14708);
    Variable VAR_s_2_0 = new_Variable_named(L"s", 2);
    Variable VAR_i_2_1 = new_Variable_named(L"i", 2);
    Array PArray14711 = new_Array_with(2, (Optr)VAR_s_2_0, (Optr)VAR_i_2_1);
    String string_14713 = new_String(L"'");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_14713_Const = new_Constant((Optr)string_14713);
    // <<. 
    Send PSend14714 = new_Send((Optr)VAR_s_2_0, SMB__shiftLeft_, 1, (Optr)string_14713_Const);
    // <<. 
    Send PSend14715 = new_Send((Optr)PSend14714, SMB__shiftLeft_, 1, (Optr)VAR_i_2_1);
    Array PThreadedCode14712 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_2_0, (Optr)&t_push1, (Optr)string_14713, (Optr)&t_send1, (Optr)PSend14714, (Optr)&t_push_variable, (Optr)VAR_i_2_1, (Optr)&t_send1, (Optr)PSend14715, (Optr)&t_method_return);
    Block PBlock14710 = new_Block_with(PArray14711, empty_Array, PThreadedCode14712, 1, PSend14715);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14716 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14709, (Optr)PBlock14710);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14717 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14707 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14708, (Optr)&t_send1, (Optr)PSend14709, (Optr)&t_push_closure, (Optr)PBlock14710, (Optr)&t_send2, (Optr)PSend14716, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14717, (Optr)&t_block_return);
    Block PBlock14706 = new_Block_with(empty_Array, empty_Array, PThreadedCode14707, 2, PSend14716, PSend14717);
    // ifTrue:ifFalse:. 
    Send PSend14702 = new_Send((Optr)PSend14701, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock14703, (Optr)PBlock14706);
    Array PThreadedCode14699 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14700, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend14701, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend14702, (Optr)PBlock14703, (Optr)PBlock14706, (Optr)&t_method_return);
    Block PBlock14697 = new_Block_with(PArray14698, empty_Array, PThreadedCode14699, 1, PSend14702);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14718 = new_Send((Optr)PSuper14696, SMB_semantics_, 1, (Optr)PBlock14697);
    Array PThreadedCode14695 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14696, (Optr)&t_push_closure, (Optr)PBlock14697, (Optr)&t_send1, (Optr)PSend14718, (Optr)&t_method_return);
    Method PMethod14694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14695, 1, PSend14718);
    
    MethodClosure MC_SMB_initializeString = new_MethodClosure((Method)PMethod14694, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeString, MC_SMB_initializeString);
}


static void init_SMB_createVariable_() {
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    Variable VAR_variable_0_0 = new_Variable_named(L"variable", 0);
    Array PArray14720 = new_Array_with(1, (Optr)VAR_variable_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14722 = new_Send((Optr)ASTVariable_classReference, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend14723 = new_Send((Optr)PSend14722, SMB_name_, 1, (Optr)VAR_variable_0_0);
    Array PThreadedCode14721 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTVariable_classReference, (Optr)&t_send0, (Optr)PSend14722, (Optr)&t_push_variable, (Optr)VAR_variable_0_0, (Optr)&t_send1, (Optr)PSend14723, (Optr)&t_method_return);
    Method PMethod14719 = new_Method_with(PArray14720, empty_Array, empty_Array, PThreadedCode14721, 1, PSend14723);
    
    MethodClosure MC_SMB_createVariable_ = new_MethodClosure((Method)PMethod14719, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_createVariable_, MC_SMB_createVariable_);
}


static void init_SMB_initializeUnaryExpression() {
    Symbol SMB_initializeUnaryExpression = new_Symbol(L"initializeUnaryExpression");
    Super PSuper14726 = new_Super(SMB_initializeUnaryExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14728 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR_result_1_1 = new_Variable_named(L"result", 1);
    Array PArray14729 = new_Array_with(1, (Optr)VAR_result_1_1);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14732 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Assign PAssign14731 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14732);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14733 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14735 = new_Array_with(1, (Optr)VAR_i_2_0);
    Variable VAR__receiver__3_0 = new_Variable_named(L"_receiver_", 3);
    Array PArray14740 = new_Array_with(1, (Optr)VAR__receiver__3_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14742 = new_Send((Optr)VAR__receiver__3_0, SMB_receiver_, 1, (Optr)VAR_result_1_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14743 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)VAR_i_2_0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14744 = new_Send((Optr)VAR__receiver__3_0, SMB_selector_, 1, (Optr)PSend14743);
    Array PThreadedCode14741 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_send1, (Optr)PSend14742, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__3_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_send1, (Optr)PSend14743, (Optr)&t_send1, (Optr)PSend14744, (Optr)&t_method_return);
    Block PBlock14739 = new_Block_with(PArray14740, empty_Array, PThreadedCode14741, 2, PSend14742, PSend14744);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14745 = new_Send((Optr)ASTUnaryExpression_classReference, SMB_new, 0);
    // value:. 
    Send PSend14738 = new_Send((Optr)PBlock14739, SMB_value_, 1, (Optr)PSend14745);
    Assign PAssign14737 = new_Assign((Optr)VAR_result_1_1, (Optr)PSend14738);
    Array PThreadedCode14736 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign14737, (Optr)&t_push_closure, (Optr)PBlock14739, (Optr)&t_push_class_reference, (Optr)ASTUnaryExpression_classReference, (Optr)&t_send0, (Optr)PSend14745, (Optr)&t_send1, (Optr)PSend14738, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock14734 = new_Block_with(PArray14735, empty_Array, PThreadedCode14736, 1, PAssign14737);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14746 = new_Send((Optr)int_2_Const, SMB_to_do_, 2, (Optr)PSend14733, (Optr)PBlock14734);
    Array PThreadedCode14730 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign14731, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14732, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14733, (Optr)&t_push_closure, (Optr)PBlock14734, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14746, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_1, (Optr)&t_method_return);
    Block PBlock14727 = new_Block_with(PArray14728, PArray14729, PThreadedCode14730, 3, PAssign14731, PSend14746, VAR_result_1_1);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14747 = new_Send((Optr)PSuper14726, SMB_semantics_, 1, (Optr)PBlock14727);
    Array PThreadedCode14725 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14726, (Optr)&t_push_closure, (Optr)PBlock14727, (Optr)&t_send1, (Optr)PSend14747, (Optr)&t_method_return);
    Method PMethod14724 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14725, 1, PSend14747);
    
    MethodClosure MC_SMB_initializeUnaryExpression = new_MethodClosure((Method)PMethod14724, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryExpression, MC_SMB_initializeUnaryExpression);
}


static void init_SMB_initializeAnnotations() {
    Symbol SMB_initializeAnnotations = new_Symbol(L"initializeAnnotations");
    Super PSuper14750 = new_Super(SMB_initializeAnnotations, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14752 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14754 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14753 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14754, (Optr)&t_method_return);
    Block PBlock14751 = new_Block_with(PArray14752, empty_Array, PThreadedCode14753, 1, PSend14754);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14755 = new_Send((Optr)PSuper14750, SMB_semantics_, 1, (Optr)PBlock14751);
    Array PThreadedCode14749 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14750, (Optr)&t_push_closure, (Optr)PBlock14751, (Optr)&t_send1, (Optr)PSend14755, (Optr)&t_method_return);
    Method PMethod14748 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14749, 1, PSend14755);
    
    MethodClosure MC_SMB_initializeAnnotations = new_MethodClosure((Method)PMethod14748, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAnnotations, MC_SMB_initializeAnnotations);
}


static void init_SMB_initializePrimaryVariable() {
    Symbol SMB_initializePrimaryVariable = new_Symbol(L"initializePrimaryVariable");
    Super PSuper14758 = new_Super(SMB_initializePrimaryVariable, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14760 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14762 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Symbol SMB_createReference_ = new_Symbol(L"createReference:");
    // createReference:. 
    Send PSend14763 = new_Send((Optr)self, SMB_createReference_, 1, (Optr)PSend14762);
    Array PThreadedCode14761 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14762, (Optr)&t_send1, (Optr)PSend14763, (Optr)&t_method_return);
    Block PBlock14759 = new_Block_with(PArray14760, empty_Array, PThreadedCode14761, 1, PSend14763);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14764 = new_Send((Optr)PSuper14758, SMB_semantics_, 1, (Optr)PBlock14759);
    Array PThreadedCode14757 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14758, (Optr)&t_push_closure, (Optr)PBlock14759, (Optr)&t_send1, (Optr)PSend14764, (Optr)&t_method_return);
    Method PMethod14756 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14757, 1, PSend14764);
    
    MethodClosure MC_SMB_initializePrimaryVariable = new_MethodClosure((Method)PMethod14756, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializePrimaryVariable, MC_SMB_initializePrimaryVariable);
}


static void init_SMB_initializeStringSegment() {
    Symbol SMB_initializeStringSegment = new_Symbol(L"initializeStringSegment");
    Super PSuper14767 = new_Super(SMB_initializeStringSegment, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14769 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14771 = new_Send((Optr)VAR_result_1_0, SMB_asString, 0);
    Array PThreadedCode14770 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14771, (Optr)&t_method_return);
    Block PBlock14768 = new_Block_with(PArray14769, empty_Array, PThreadedCode14770, 1, PSend14771);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14772 = new_Send((Optr)PSuper14767, SMB_semantics_, 1, (Optr)PBlock14768);
    Array PThreadedCode14766 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14767, (Optr)&t_push_closure, (Optr)PBlock14768, (Optr)&t_send1, (Optr)PSend14772, (Optr)&t_method_return);
    Method PMethod14765 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14766, 1, PSend14772);
    
    MethodClosure MC_SMB_initializeStringSegment = new_MethodClosure((Method)PMethod14765, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeStringSegment, MC_SMB_initializeStringSegment);
}


static void init_SMB_initializeKeywordsArguments() {
    Symbol SMB_initializeKeywordsArguments = new_Symbol(L"initializeKeywordsArguments");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_parameters_0_2 = new_Variable_named(L"parameters", 0);
    Array PArray14774 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_parameters_0_2);
    Super PSuper14776 = new_Super(SMB_initializeKeywordsArguments, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14778 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14782 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14781 = new_Send((Optr)PSend14782, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14780 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14781);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14784 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14783 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14784);
    // new:. 
    Send PSend14786 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14785 = new_Assign((Optr)VAR_parameters_0_2, (Optr)PSend14786);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14788 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14790 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14791 = new_Send((Optr)PSend14790, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14792 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14791);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14793 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14792);
    // *. 
    Send PSend14794 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14795 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14794);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14796 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14795);
    // at:put:. 
    Send PSend14797 = new_Send((Optr)VAR_parameters_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14796);
    Array PThreadedCode14789 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14790, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14791, (Optr)&t_send1, (Optr)PSend14792, (Optr)&t_send2, (Optr)PSend14793, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14794, (Optr)&t_send1, (Optr)PSend14795, (Optr)&t_send1, (Optr)PSend14796, (Optr)&t_send2, (Optr)PSend14797, (Optr)&t_method_return);
    Block PBlock14787 = new_Block_with(PArray14788, empty_Array, PThreadedCode14789, 2, PSend14793, PSend14797);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14798 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14787);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14800 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14802 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14803 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)VAR_parameters_0_2);
    Array PThreadedCode14801 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14802, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parameters_0_2, (Optr)&t_send1, (Optr)PSend14803, (Optr)&t_method_return);
    Block PBlock14799 = new_Block_with(PArray14800, empty_Array, PThreadedCode14801, 2, PSend14802, PSend14803);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14804 = new_Send((Optr)ASTKeywordMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14805 = new_Send((Optr)PBlock14799, SMB_value_, 1, (Optr)PSend14804);
    Array PThreadedCode14779 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14780, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14782, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14781, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14783, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14784, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14785, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14786, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14787, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14798, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14799, (Optr)&t_push_class_reference, (Optr)ASTKeywordMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14804, (Optr)&t_send1, (Optr)PSend14805, (Optr)&t_method_return);
    Block PBlock14777 = new_Block_with(PArray14778, empty_Array, PThreadedCode14779, 5, PAssign14780, PAssign14783, PAssign14785, PSend14798, PSend14805);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14806 = new_Send((Optr)PSuper14776, SMB_semantics_, 1, (Optr)PBlock14777);
    Array PThreadedCode14775 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14776, (Optr)&t_push_closure, (Optr)PBlock14777, (Optr)&t_send1, (Optr)PSend14806, (Optr)&t_method_return);
    Method PMethod14773 = new_Method_with(empty_Array, PArray14774, empty_Array, PThreadedCode14775, 1, PSend14806);
    
    MethodClosure MC_SMB_initializeKeywordsArguments = new_MethodClosure((Method)PMethod14773, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordsArguments, MC_SMB_initializeKeywordsArguments);
}


static void init_SMB_initializeBinaryMessageDefinition() {
    Symbol SMB_initializeBinaryMessageDefinition = new_Symbol(L"initializeBinaryMessageDefinition");
    Super PSuper14809 = new_Super(SMB_initializeBinaryMessageDefinition, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14811 = new_Array_with(1, (Optr)VAR_result_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14814 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14816 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14817 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend14816);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14818 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    Symbol SMB_createVariable_ = new_Symbol(L"createVariable:");
    // createVariable:. 
    Send PSend14819 = new_Send((Optr)self, SMB_createVariable_, 1, (Optr)PSend14818);
    Symbol SMB_parameter_ = new_Symbol(L"parameter:");
    // parameter:. 
    Send PSend14820 = new_Send((Optr)VAR__receiver__2_0, SMB_parameter_, 1, (Optr)PSend14819);
    Array PThreadedCode14815 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14816, (Optr)&t_send1, (Optr)PSend14817, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14818, (Optr)&t_send1, (Optr)PSend14819, (Optr)&t_send1, (Optr)PSend14820, (Optr)&t_method_return);
    Block PBlock14813 = new_Block_with(PArray14814, empty_Array, PThreadedCode14815, 2, PSend14817, PSend14820);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14821 = new_Send((Optr)ASTBinaryMessageDefinition_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14822 = new_Send((Optr)PBlock14813, SMB_value_, 1, (Optr)PSend14821);
    Array PThreadedCode14812 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14813, (Optr)&t_push_class_reference, (Optr)ASTBinaryMessageDefinition_classReference, (Optr)&t_send0, (Optr)PSend14821, (Optr)&t_send1, (Optr)PSend14822, (Optr)&t_method_return);
    Block PBlock14810 = new_Block_with(PArray14811, empty_Array, PThreadedCode14812, 1, PSend14822);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14823 = new_Send((Optr)PSuper14809, SMB_semantics_, 1, (Optr)PBlock14810);
    Array PThreadedCode14808 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14809, (Optr)&t_push_closure, (Optr)PBlock14810, (Optr)&t_send1, (Optr)PSend14823, (Optr)&t_method_return);
    Method PMethod14807 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14808, 1, PSend14823);
    
    MethodClosure MC_SMB_initializeBinaryMessageDefinition = new_MethodClosure((Method)PMethod14807, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBinaryMessageDefinition, MC_SMB_initializeBinaryMessageDefinition);
}


static void init_SMB_initializeReturn() {
    Symbol SMB_initializeReturn = new_Symbol(L"initializeReturn");
    Super PSuper14826 = new_Super(SMB_initializeReturn, 0);
    Variable VAR_expression_1_0 = new_Variable_named(L"expression", 1);
    Array PArray14828 = new_Array_with(1, (Optr)VAR_expression_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14830 = new_Send((Optr)ASTReturnExpression_classReference, SMB_new, 0);
    Symbol SMB_expression_ = new_Symbol(L"expression:");
    // expression:. 
    Send PSend14831 = new_Send((Optr)PSend14830, SMB_expression_, 1, (Optr)VAR_expression_1_0);
    Array PThreadedCode14829 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTReturnExpression_classReference, (Optr)&t_send0, (Optr)PSend14830, (Optr)&t_push_variable, (Optr)VAR_expression_1_0, (Optr)&t_send1, (Optr)PSend14831, (Optr)&t_method_return);
    Block PBlock14827 = new_Block_with(PArray14828, empty_Array, PThreadedCode14829, 1, PSend14831);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14832 = new_Send((Optr)PSuper14826, SMB_semantics_, 1, (Optr)PBlock14827);
    Array PThreadedCode14825 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14826, (Optr)&t_push_closure, (Optr)PBlock14827, (Optr)&t_send1, (Optr)PSend14832, (Optr)&t_method_return);
    Method PMethod14824 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14825, 1, PSend14832);
    
    MethodClosure MC_SMB_initializeReturn = new_MethodClosure((Method)PMethod14824, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeReturn, MC_SMB_initializeReturn);
}


static void init_SMB_initializeTemporaries() {
    Symbol SMB_initializeTemporaries = new_Symbol(L"initializeTemporaries");
    Super PSuper14835 = new_Super(SMB_initializeTemporaries, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14837 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14839 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14838 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14839, (Optr)&t_method_return);
    Block PBlock14836 = new_Block_with(PArray14837, empty_Array, PThreadedCode14838, 1, PSend14839);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14840 = new_Send((Optr)PSuper14835, SMB_semantics_, 1, (Optr)PBlock14836);
    Array PThreadedCode14834 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14835, (Optr)&t_push_closure, (Optr)PBlock14836, (Optr)&t_send1, (Optr)PSend14840, (Optr)&t_method_return);
    Method PMethod14833 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14834, 1, PSend14840);
    
    MethodClosure MC_SMB_initializeTemporaries = new_MethodClosure((Method)PMethod14833, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeTemporaries, MC_SMB_initializeTemporaries);
}


static void init_SMB_initializeKeywordMessageExpression() {
    Symbol SMB_initializeKeywordMessageExpression = new_Symbol(L"initializeKeywordMessageExpression");
    Variable VAR_halfsize_0_0 = new_Variable_named(L"halfsize", 0);
    Variable VAR_keywords_0_1 = new_Variable_named(L"keywords", 0);
    Variable VAR_arguments_0_2 = new_Variable_named(L"arguments", 0);
    Array PArray14842 = new_Array_with(3, (Optr)VAR_halfsize_0_0, (Optr)VAR_keywords_0_1, (Optr)VAR_arguments_0_2);
    Super PSuper14844 = new_Super(SMB_initializeKeywordMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14846 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14850 = new_Send((Optr)VAR_parts_1_0, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // //. 
    Send PSend14849 = new_Send((Optr)PSend14850, SMB__quotient_, 1, (Optr)int_2_Const);
    Assign PAssign14848 = new_Assign((Optr)VAR_halfsize_0_0, (Optr)PSend14849);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend14852 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14851 = new_Assign((Optr)VAR_keywords_0_1, (Optr)PSend14852);
    // new:. 
    Send PSend14854 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_halfsize_0_0);
    Assign PAssign14853 = new_Assign((Optr)VAR_arguments_0_2, (Optr)PSend14854);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray14856 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend14858 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend14859 = new_Send((Optr)PSend14858, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14860 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14859);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend14861 = new_Send((Optr)VAR_keywords_0_1, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14860);
    // *. 
    Send PSend14862 = new_Send((Optr)VAR_i_2_0, SMB__times_, 1, (Optr)int_2_Const);
    // at:. 
    Send PSend14863 = new_Send((Optr)VAR_parts_1_0, SMB_at_, 1, (Optr)PSend14862);
    // at:put:. 
    Send PSend14864 = new_Send((Optr)VAR_arguments_0_2, SMB_at_put_, 2, (Optr)VAR_i_2_0, (Optr)PSend14863);
    Array PThreadedCode14857 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14858, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14859, (Optr)&t_send1, (Optr)PSend14860, (Optr)&t_send2, (Optr)PSend14861, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_push_variable, (Optr)VAR_i_2_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14862, (Optr)&t_send1, (Optr)PSend14863, (Optr)&t_send2, (Optr)PSend14864, (Optr)&t_method_return);
    Block PBlock14855 = new_Block_with(PArray14856, empty_Array, PThreadedCode14857, 2, PSend14861, PSend14864);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend14865 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_halfsize_0_0, (Optr)PBlock14855);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14867 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_keywords_ = new_Symbol(L"keywords:");
    // keywords:. 
    Send PSend14869 = new_Send((Optr)VAR__receiver__2_0, SMB_keywords_, 1, (Optr)VAR_keywords_0_1);
    Symbol SMB_arguments_ = new_Symbol(L"arguments:");
    // arguments:. 
    Send PSend14870 = new_Send((Optr)VAR__receiver__2_0, SMB_arguments_, 1, (Optr)VAR_arguments_0_2);
    Array PThreadedCode14868 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_keywords_0_1, (Optr)&t_send1, (Optr)PSend14869, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_arguments_0_2, (Optr)&t_send1, (Optr)PSend14870, (Optr)&t_method_return);
    Block PBlock14866 = new_Block_with(PArray14867, empty_Array, PThreadedCode14868, 2, PSend14869, PSend14870);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14871 = new_Send((Optr)ASTMessageExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14872 = new_Send((Optr)PBlock14866, SMB_value_, 1, (Optr)PSend14871);
    Array PThreadedCode14847 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign14848, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14850, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14849, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14851, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14852, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign14853, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_send1, (Optr)PSend14854, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_halfsize_0_0, (Optr)&t_push_closure, (Optr)PBlock14855, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend14865, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14866, (Optr)&t_push_class_reference, (Optr)ASTMessageExpression_classReference, (Optr)&t_send0, (Optr)PSend14871, (Optr)&t_send1, (Optr)PSend14872, (Optr)&t_method_return);
    Block PBlock14845 = new_Block_with(PArray14846, empty_Array, PThreadedCode14847, 5, PAssign14848, PAssign14851, PAssign14853, PSend14865, PSend14872);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14873 = new_Send((Optr)PSuper14844, SMB_semantics_, 1, (Optr)PBlock14845);
    Array PThreadedCode14843 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14844, (Optr)&t_push_closure, (Optr)PBlock14845, (Optr)&t_send1, (Optr)PSend14873, (Optr)&t_method_return);
    Method PMethod14841 = new_Method_with(empty_Array, PArray14842, empty_Array, PThreadedCode14843, 1, PSend14873);
    
    MethodClosure MC_SMB_initializeKeywordMessageExpression = new_MethodClosure((Method)PMethod14841, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeKeywordMessageExpression, MC_SMB_initializeKeywordMessageExpression);
}


static void init_SMB_initializeSymbolKeywords() {
    Symbol SMB_initializeSymbolKeywords = new_Symbol(L"initializeSymbolKeywords");
    Super PSuper14876 = new_Super(SMB_initializeSymbolKeywords, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14878 = new_Array_with(1, (Optr)VAR_result_1_0);
    String string_14880 = new_String(L"");
    Symbol SMB_on_ = new_Symbol(L"on:");
    Constant string_14880_Const = new_Constant((Optr)string_14880);
    // on:. 
    Send PSend14881 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_on_, 1, (Optr)string_14880_Const);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Variable VAR_e_2_1 = new_Variable_named(L"e", 2);
    Array PArray14883 = new_Array_with(2, (Optr)VAR_c_2_0, (Optr)VAR_e_2_1);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend14885 = new_Send((Optr)VAR_c_2_0, SMB__shiftLeft_, 1, (Optr)VAR_e_2_1);
    Array PThreadedCode14884 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_push_variable, (Optr)VAR_e_2_1, (Optr)&t_send1, (Optr)PSend14885, (Optr)&t_method_return);
    Block PBlock14882 = new_Block_with(PArray14883, empty_Array, PThreadedCode14884, 1, PSend14885);
    Symbol SMB_inject_into_ = new_Symbol(L"inject:into:");
    // inject:into:. 
    Send PSend14886 = new_Send((Optr)VAR_result_1_0, SMB_inject_into_, 2, (Optr)PSend14881, (Optr)PBlock14882);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend14887 = new_Send((Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, SMB_contents, 0);
    Array PThreadedCode14879 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_push1, (Optr)string_14880, (Optr)&t_send1, (Optr)PSend14881, (Optr)&t_push_closure, (Optr)PBlock14882, (Optr)&t_send2, (Optr)PSend14886, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Smalltalk_Parser_SmalltalkParser_stream, (Optr)&t_send0, (Optr)PSend14887, (Optr)&t_method_return);
    Block PBlock14877 = new_Block_with(PArray14878, empty_Array, PThreadedCode14879, 2, PSend14886, PSend14887);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14888 = new_Send((Optr)PSuper14876, SMB_semantics_, 1, (Optr)PBlock14877);
    Array PThreadedCode14875 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14876, (Optr)&t_push_closure, (Optr)PBlock14877, (Optr)&t_send1, (Optr)PSend14888, (Optr)&t_method_return);
    Method PMethod14874 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14875, 1, PSend14888);
    
    MethodClosure MC_SMB_initializeSymbolKeywords = new_MethodClosure((Method)PMethod14874, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeSymbolKeywords, MC_SMB_initializeSymbolKeywords);
}


static void init_SMB_initializeAssignmentExpressions() {
    Symbol SMB_initializeAssignmentExpressions = new_Symbol(L"initializeAssignmentExpressions");
    Super PSuper14891 = new_Super(SMB_initializeAssignmentExpressions, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14893 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14895 = new_Send((Optr)VAR_result_1_0, SMB_asArray, 0);
    Array PThreadedCode14894 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14895, (Optr)&t_method_return);
    Block PBlock14892 = new_Block_with(PArray14893, empty_Array, PThreadedCode14894, 1, PSend14895);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14896 = new_Send((Optr)PSuper14891, SMB_semantics_, 1, (Optr)PBlock14892);
    Array PThreadedCode14890 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14891, (Optr)&t_push_closure, (Optr)PBlock14892, (Optr)&t_send1, (Optr)PSend14896, (Optr)&t_method_return);
    Method PMethod14889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14890, 1, PSend14896);
    
    MethodClosure MC_SMB_initializeAssignmentExpressions = new_MethodClosure((Method)PMethod14889, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeAssignmentExpressions, MC_SMB_initializeAssignmentExpressions);
}


static void init_SMB_preStoreCascadedMessageExpression() {
    Symbol SMB_preStoreCascadedMessageExpression = new_Symbol(L"preStoreCascadedMessageExpression");
    Super PSuper14899 = new_Super(SMB_preStoreCascadedMessageExpression, 0);
    Variable VAR_parts_1_0 = new_Variable_named(L"parts", 1);
    Array PArray14901 = new_Array_with(1, (Optr)VAR_parts_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14904 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14906 = new_Send((Optr)VAR_parts_1_0, SMB_first, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend14907 = new_Send((Optr)PSend14906, SMB_receiver, 0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend14908 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)PSend14907);
    Symbol SMB_asArray = new_Symbol(L"asArray");
    // asArray. 
    Send PSend14909 = new_Send((Optr)VAR_parts_1_0, SMB_asArray, 0);
    Symbol SMB_cascades_ = new_Symbol(L"cascades:");
    // cascades:. 
    Send PSend14910 = new_Send((Optr)VAR__receiver__2_0, SMB_cascades_, 1, (Optr)PSend14909);
    Array PThreadedCode14905 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14906, (Optr)&t_send0, (Optr)PSend14907, (Optr)&t_send1, (Optr)PSend14908, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_parts_1_0, (Optr)&t_send0, (Optr)PSend14909, (Optr)&t_send1, (Optr)PSend14910, (Optr)&t_method_return);
    Block PBlock14903 = new_Block_with(PArray14904, empty_Array, PThreadedCode14905, 2, PSend14908, PSend14910);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14911 = new_Send((Optr)ASTMessageCascadeExpression_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14912 = new_Send((Optr)PBlock14903, SMB_value_, 1, (Optr)PSend14911);
    Array PThreadedCode14902 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock14903, (Optr)&t_push_class_reference, (Optr)ASTMessageCascadeExpression_classReference, (Optr)&t_send0, (Optr)PSend14911, (Optr)&t_send1, (Optr)PSend14912, (Optr)&t_method_return);
    Block PBlock14900 = new_Block_with(PArray14901, empty_Array, PThreadedCode14902, 1, PSend14912);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14913 = new_Send((Optr)PSuper14899, SMB_semantics_, 1, (Optr)PBlock14900);
    Array PThreadedCode14898 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14899, (Optr)&t_push_closure, (Optr)PBlock14900, (Optr)&t_send1, (Optr)PSend14913, (Optr)&t_method_return);
    Method PMethod14897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14898, 1, PSend14913);
    
    MethodClosure MC_SMB_preStoreCascadedMessageExpression = new_MethodClosure((Method)PMethod14897, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_preStoreCascadedMessageExpression, MC_SMB_preStoreCascadedMessageExpression);
}


static void init_SMB_initializeUnaryAnnotation() {
    Symbol SMB_initializeUnaryAnnotation = new_Symbol(L"initializeUnaryAnnotation");
    Super PSuper14916 = new_Super(SMB_initializeUnaryAnnotation, 0);
    Variable VAR_selector_1_0 = new_Variable_named(L"selector", 1);
    Array PArray14918 = new_Array_with(1, (Optr)VAR_selector_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14920 = new_Send((Optr)ASTUnaryAnnotation_classReference, SMB_new, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend14921 = new_Send((Optr)PSend14920, SMB_selector_, 1, (Optr)VAR_selector_1_0);
    Array PThreadedCode14919 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)ASTUnaryAnnotation_classReference, (Optr)&t_send0, (Optr)PSend14920, (Optr)&t_push_variable, (Optr)VAR_selector_1_0, (Optr)&t_send1, (Optr)PSend14921, (Optr)&t_method_return);
    Block PBlock14917 = new_Block_with(PArray14918, empty_Array, PThreadedCode14919, 1, PSend14921);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14922 = new_Send((Optr)PSuper14916, SMB_semantics_, 1, (Optr)PBlock14917);
    Array PThreadedCode14915 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14916, (Optr)&t_push_closure, (Optr)PBlock14917, (Optr)&t_send1, (Optr)PSend14922, (Optr)&t_method_return);
    Method PMethod14914 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14915, 1, PSend14922);
    
    MethodClosure MC_SMB_initializeUnaryAnnotation = new_MethodClosure((Method)PMethod14914, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeUnaryAnnotation, MC_SMB_initializeUnaryAnnotation);
}


static void init_SMB_initializeBlock() {
    Symbol SMB_initializeBlock = new_Symbol(L"initializeBlock");
    Super PSuper14925 = new_Super(SMB_initializeBlock, 0);
    Variable VAR_result_1_0 = new_Variable_named(L"result", 1);
    Array PArray14927 = new_Array_with(1, (Optr)VAR_result_1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend14929 = new_Send((Optr)VAR_result_1_0, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend14930 = new_Send((Optr)PSend14929, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend14934 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PEGFailedOptionalResult_classReference);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend14935 = new_Send((Optr)OrderedCollection_classReference, SMB_new, 0);
    // add:. 
    Send PSend14936 = new_Send((Optr)VAR_result_1_0, SMB_add_, 1, (Optr)PSend14935);
    Array PThreadedCode14933 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)PEGFailedOptionalResult_classReference, (Optr)&t_send1, (Optr)PSend14934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_class_reference, (Optr)OrderedCollection_classReference, (Optr)&t_send0, (Optr)PSend14935, (Optr)&t_send1, (Optr)PSend14936, (Optr)&t_block_return);
    Block PBlock14932 = new_Block_with(empty_Array, empty_Array, PThreadedCode14933, 2, PSend14934, PSend14936);
    // ifTrue:. 
    Send PSend14931 = new_Send((Optr)PSend14930, SMB_ifTrue_, 1, (Optr)PBlock14932);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray14938 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_first = new_Symbol(L"first");
    // first. 
    Send PSend14940 = new_Send((Optr)VAR_result_1_0, SMB_first, 0);
    // new. 
    Send PSend14943 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14942 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14943, (Optr)&t_block_return);
    Block PBlock14941 = new_Block_with(empty_Array, empty_Array, PThreadedCode14942, 1, PSend14943);
    Symbol SMB_resultIfFailed_ = new_Symbol(L"resultIfFailed:");
    // resultIfFailed:. 
    Send PSend14944 = new_Send((Optr)PSend14940, SMB_resultIfFailed_, 1, (Optr)PBlock14941);
    Symbol SMB_parameters_ = new_Symbol(L"parameters:");
    // parameters:. 
    Send PSend14945 = new_Send((Optr)VAR__receiver__2_0, SMB_parameters_, 1, (Optr)PSend14944);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:. 
    Send PSend14946 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_2_Const);
    // new. 
    Send PSend14949 = new_Send((Optr)Array_classReference, SMB_new, 0);
    Array PThreadedCode14948 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_send0, (Optr)PSend14949, (Optr)&t_block_return);
    Block PBlock14947 = new_Block_with(empty_Array, empty_Array, PThreadedCode14948, 1, PSend14949);
    // resultIfFailed:. 
    Send PSend14950 = new_Send((Optr)PSend14946, SMB_resultIfFailed_, 1, (Optr)PBlock14947);
    Symbol SMB_temporaries_ = new_Symbol(L"temporaries:");
    // temporaries:. 
    Send PSend14951 = new_Send((Optr)VAR__receiver__2_0, SMB_temporaries_, 1, (Optr)PSend14950);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:. 
    Send PSend14952 = new_Send((Optr)VAR_result_1_0, SMB_at_, 1, (Optr)int_3_Const);
    Symbol SMB_statements_ = new_Symbol(L"statements:");
    // statements:. 
    Send PSend14953 = new_Send((Optr)VAR__receiver__2_0, SMB_statements_, 1, (Optr)PSend14952);
    Array PThreadedCode14939 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14940, (Optr)&t_push_closure, (Optr)PBlock14941, (Optr)&t_send1, (Optr)PSend14944, (Optr)&t_send1, (Optr)PSend14945, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend14946, (Optr)&t_push_closure, (Optr)PBlock14947, (Optr)&t_send1, (Optr)PSend14950, (Optr)&t_send1, (Optr)PSend14951, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend14952, (Optr)&t_send1, (Optr)PSend14953, (Optr)&t_method_return);
    Block PBlock14937 = new_Block_with(PArray14938, empty_Array, PThreadedCode14939, 3, PSend14945, PSend14951, PSend14953);
    // new. 
    Send PSend14954 = new_Send((Optr)ASTBlock_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend14955 = new_Send((Optr)PBlock14937, SMB_value_, 1, (Optr)PSend14954);
    Array PThreadedCode14928 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_result_1_0, (Optr)&t_send0, (Optr)PSend14929, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend14930, (Optr)&t_send_ifTrue_, (Optr)PSend14931, (Optr)PBlock14932, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock14937, (Optr)&t_push_class_reference, (Optr)ASTBlock_classReference, (Optr)&t_send0, (Optr)PSend14954, (Optr)&t_send1, (Optr)PSend14955, (Optr)&t_method_return);
    Block PBlock14926 = new_Block_with(PArray14927, empty_Array, PThreadedCode14928, 2, PSend14931, PSend14955);
    Symbol SMB_semantics_ = new_Symbol(L"semantics:");
    // semantics:. 
    Send PSend14956 = new_Send((Optr)PSuper14925, SMB_semantics_, 1, (Optr)PBlock14926);
    Array PThreadedCode14924 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper14925, (Optr)&t_push_closure, (Optr)PBlock14926, (Optr)&t_send1, (Optr)PSend14956, (Optr)&t_method_return);
    Method PMethod14923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode14924, 1, PSend14956);
    
    MethodClosure MC_SMB_initializeBlock = new_MethodClosure((Method)PMethod14923, Smalltalk_Parser_SmalltalkParser_Class);
    store_method(Smalltalk_Parser_SmalltalkParser_Class, SMB_initializeBlock, MC_SMB_initializeBlock);
}


static void init_class_SMB_match_in_() {
    Symbol SMB_match_in_ = new_Symbol(L"match:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray14958 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend14960 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_method = new_Symbol(L"method");
    // method. 
    Send PSend14961 = new_Send((Optr)PSend14960, SMB_method, 0);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend14962 = new_Send((Optr)VAR_class_0_1, SMB_methodDict, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend14963 = new_Send((Optr)PSend14962, SMB_at_, 1, (Optr)VAR_selector_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend14964 = new_Send((Optr)PSend14963, SMB_asString, 0);
    // asString. 
    Send PSend14965 = new_Send((Optr)PSend14964, SMB_asString, 0);
    Symbol SMB_parse_ = new_Symbol(L"parse:");
    // parse:. 
    Send PSend14966 = new_Send((Optr)PSend14961, SMB_parse_, 1, (Optr)PSend14965);
    Array PThreadedCode14959 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend14960, (Optr)&t_send0, (Optr)PSend14961, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_send0, (Optr)PSend14962, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_send1, (Optr)PSend14963, (Optr)&t_send0, (Optr)PSend14964, (Optr)&t_send0, (Optr)PSend14965, (Optr)&t_send1, (Optr)PSend14966, (Optr)&t_method_return);
    Method PMethod14957 = new_Method_with(PArray14958, empty_Array, empty_Array, PThreadedCode14959, 1, PSend14966);
    
    MethodClosure MC_SMB_match_in_ = new_MethodClosure((Method)PMethod14957, HEADER(Smalltalk_Parser_SmalltalkParser_Class));
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