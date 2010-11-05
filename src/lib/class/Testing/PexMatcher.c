#include <lib/class/Testing/PexMatcher.h>


Optr layout_Testing_PexMatcher_Class_class;
Optr slot_Testing_PexMatcher_value;
Optr slot_Testing_PexMatcher_fail;
Optr slot_Testing_PexMatcher_bool;
Optr layout_Testing_PexMatcher;


static void init_SMB_check_ifFail_() {
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    Variable VAR_aBool_0_0 = new_Variable_named(L"aBool", 0);
    Variable VAR_block_0_1 = new_Variable_named(L"block", 0);
    Array PArray11267 = new_Array_with(2, (Optr)VAR_aBool_0_0, (Optr)VAR_block_0_1);
    Assign PAssign11269 = new_Assign((Optr)slot_Testing_PexMatcher_fail, (Optr)VAR_block_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11270 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend11274 = new_Send((Optr)self, SMB_signal, 0);
    Array PThreadedCode11273 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11274, (Optr)&t_block_return);
    Block PBlock11272 = new_Block_with(empty_Array, empty_Array, PThreadedCode11273, 1, PSend11274);
    // ifFalse:. 
    Send PSend11271 = new_Send((Optr)PSend11270, SMB_ifFalse_, 1, (Optr)PBlock11272);
    Array PThreadedCode11268 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign11269, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend11270, (Optr)&t_send_ifFalse_, (Optr)PSend11271, (Optr)PBlock11272, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod11266 = new_Method_with(PArray11267, empty_Array, empty_Array, PThreadedCode11268, 3, PAssign11269, PSend11271, nil_Const);
    
    MethodClosure MC_SMB_check_ifFail_ = new_MethodClosure((Method)PMethod11266, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_check_ifFail_, MC_SMB_check_ifFail_);
}


static void init_SMB_false() {
    Symbol SMB_false = new_Symbol(L"false");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11277 = new_Send((Optr)self, SMB_be_, 1, (Optr)false_Const);
    Array PThreadedCode11276 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11277, (Optr)&t_method_return);
    Method PMethod11275 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11276, 1, PSend11277);
    
    MethodClosure MC_SMB_false = new_MethodClosure((Method)PMethod11275, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_false, MC_SMB_false);
}


static void init_SMB_beKindOf_() {
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray11279 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend11281 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_isKindOf_, 1, (Optr)VAR_aClass_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11283 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11285 = new_String(L" value of kind: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11285_Const = new_Constant((Optr)string_11285);
    // <<. 
    Send PSend11286 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11285_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11287 = new_Send((Optr)VAR_aClass_0_0, SMB_name, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11288 = new_Send((Optr)PSend11287, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11284 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11285, (Optr)&t_send1, (Optr)PSend11286, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send0, (Optr)PSend11287, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11288, (Optr)&t_method_return);
    Block PBlock11282 = new_Block_with(PArray11283, empty_Array, PThreadedCode11284, 2, PSend11286, PSend11288);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11289 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11281, (Optr)PBlock11282);
    Array PThreadedCode11280 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend11281, (Optr)&t_push_closure, (Optr)PBlock11282, (Optr)&t_send2, (Optr)PSend11289, (Optr)&t_method_return);
    Method PMethod11278 = new_Method_with(PArray11279, empty_Array, empty_Array, PThreadedCode11280, 1, PSend11289);
    
    MethodClosure MC_SMB_beKindOf_ = new_MethodClosure((Method)PMethod11278, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beKindOf_, MC_SMB_beKindOf_);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11293 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_not, 0);
    Assign PAssign11292 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)PSend11293);
    Array PThreadedCode11291 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11292, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send0, (Optr)PSend11293, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11290 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11291, 2, PAssign11292, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod11290, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11295 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Assign PAssign11297 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)true_Const);
    Assign PAssign11298 = new_Assign((Optr)slot_Testing_PexMatcher_value, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11296 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign11297, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11298, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11294 = new_Method_with(PArray11295, empty_Array, empty_Array, PThreadedCode11296, 3, PAssign11297, PAssign11298, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod11294, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_be_() {
    Symbol SMB_be_ = new_Symbol(L"be:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11300 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11302 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__equals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11304 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11306 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11306_Const = new_Constant((Optr)string_11306);
    // <<. 
    Send PSend11307 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11306_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11308 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11305 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11306, (Optr)&t_send1, (Optr)PSend11307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11308, (Optr)&t_method_return);
    Block PBlock11303 = new_Block_with(PArray11304, empty_Array, PThreadedCode11305, 2, PSend11307, PSend11308);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11309 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11302, (Optr)PBlock11303);
    Array PThreadedCode11301 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11302, (Optr)&t_push_closure, (Optr)PBlock11303, (Optr)&t_send2, (Optr)PSend11309, (Optr)&t_method_return);
    Method PMethod11299 = new_Method_with(PArray11300, empty_Array, empty_Array, PThreadedCode11301, 1, PSend11309);
    
    MethodClosure MC_SMB_be_ = new_MethodClosure((Method)PMethod11299, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be_, MC_SMB_be_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray11311 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    String string_11316 = new_String(L"Didn't expect");
    Array PThreadedCode11315 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11316, (Optr)&t_block_return);
    Constant string_11316_Const = new_Constant((Optr)string_11316);
    Block PBlock11314 = new_Block_with(empty_Array, empty_Array, PThreadedCode11315, 1, string_11316_Const);
    String string_11319 = new_String(L"Expected");
    Array PThreadedCode11318 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11319, (Optr)&t_block_return);
    Constant string_11319_Const = new_Constant((Optr)string_11319);
    Block PBlock11317 = new_Block_with(empty_Array, empty_Array, PThreadedCode11318, 1, string_11319_Const);
    // ifFalse:ifTrue:. 
    Send PSend11313 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock11314, (Optr)PBlock11317);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend11320 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend11313);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11321 = new_Send((Optr)slot_Testing_PexMatcher_fail, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    String string_11322 = new_String(L" but got: ");
    Constant string_11322_Const = new_Constant((Optr)string_11322);
    // <<. 
    Send PSend11323 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_11322_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11324 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode11312 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend11313, (Optr)PBlock11314, (Optr)PBlock11317, (Optr)&t_send1, (Optr)PSend11320, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_fail, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11322, (Optr)&t_send1, (Optr)PSend11323, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11324, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11310 = new_Method_with(PArray11311, empty_Array, empty_Array, PThreadedCode11312, 5, PSend11320, PSend11321, PSend11323, PSend11324, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod11310, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_beSameAs_() {
    Symbol SMB_beSameAs_ = new_Symbol(L"beSameAs:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11326 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11328 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__pequals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11330 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11332 = new_String(L" pointer-equal value to: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11332_Const = new_Constant((Optr)string_11332);
    // <<. 
    Send PSend11333 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11332_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11334 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11331 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11332, (Optr)&t_send1, (Optr)PSend11333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11334, (Optr)&t_method_return);
    Block PBlock11329 = new_Block_with(PArray11330, empty_Array, PThreadedCode11331, 2, PSend11333, PSend11334);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11335 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11328, (Optr)PBlock11329);
    Array PThreadedCode11327 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11328, (Optr)&t_push_closure, (Optr)PBlock11329, (Optr)&t_send2, (Optr)PSend11335, (Optr)&t_method_return);
    Method PMethod11325 = new_Method_with(PArray11326, empty_Array, empty_Array, PThreadedCode11327, 1, PSend11335);
    
    MethodClosure MC_SMB_beSameAs_ = new_MethodClosure((Method)PMethod11325, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beSameAs_, MC_SMB_beSameAs_);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray11337 = new_Array_with(1, (Optr)VAR_message_0_0);
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    // sendTo:. 
    Send PSend11339 = new_Send((Optr)VAR_message_0_0, SMB_sendTo_, 1, (Optr)slot_Testing_PexMatcher_value);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11341 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11343 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11343_Const = new_Constant((Optr)string_11343);
    // <<. 
    Send PSend11344 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11343_Const);
    // <<. 
    Send PSend11345 = new_Send((Optr)PSend11344, SMB__shiftLeft_, 1, (Optr)VAR_message_0_0);
    Array PThreadedCode11342 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11343, (Optr)&t_send1, (Optr)PSend11344, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend11345, (Optr)&t_method_return);
    Block PBlock11340 = new_Block_with(PArray11341, empty_Array, PThreadedCode11342, 1, PSend11345);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11346 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11339, (Optr)PBlock11340);
    Array PThreadedCode11338 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_send1, (Optr)PSend11339, (Optr)&t_push_closure, (Optr)PBlock11340, (Optr)&t_send2, (Optr)PSend11346, (Optr)&t_method_return);
    Method PMethod11336 = new_Method_with(PArray11337, empty_Array, empty_Array, PThreadedCode11338, 1, PSend11346);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod11336, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_true() {
    Symbol SMB_true = new_Symbol(L"true");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11349 = new_Send((Optr)self, SMB_be_, 1, (Optr)true_Const);
    Array PThreadedCode11348 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend11349, (Optr)&t_method_return);
    Method PMethod11347 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11348, 1, PSend11349);
    
    MethodClosure MC_SMB_true = new_MethodClosure((Method)PMethod11347, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_true, MC_SMB_true);
}


static void init_SMB_expect_() {
    Symbol SMB_expect_ = new_Symbol(L"expect:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11351 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend11353 = new_Send((Optr)self, SMB_assert_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11353, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11350 = new_Method_with(PArray11351, empty_Array, empty_Array, PThreadedCode11352, 2, PSend11353, self);
    
    MethodClosure MC_SMB_expect_ = new_MethodClosure((Method)PMethod11350, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_expect_, MC_SMB_expect_);
}


static void init_SMB_be() {
    Symbol SMB_be = new_Symbol(L"be");
    Array PThreadedCode11355 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod11354 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11355, 1, self);
    
    MethodClosure MC_SMB_be = new_MethodClosure((Method)PMethod11354, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be, MC_SMB_be);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11357 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper11359 = new_Super(SMB_new, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend11360 = new_Send((Optr)PSuper11359, SMB_initialize_, 1, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11358 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11359, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_send1, (Optr)PSend11360, (Optr)&t_method_return);
    Method PMethod11356 = new_Method_with(PArray11357, empty_Array, empty_Array, PThreadedCode11358, 1, PSend11360);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod11356, HEADER(Testing_PexMatcher_Class));
    store_method(HEADER(Testing_PexMatcher_Class), SMB_new_, MC_SMB_new_);
}

void init_Testing_PPexMatcher_layout() {
    layout_Testing_PexMatcher_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Testing_PexMatcher_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Testing_PexMatcher_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Testing_PexMatcher_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Testing_PexMatcher_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Testing_PexMatcher_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_PexMatcher = new_Symbol(L"PexMatcher");
    slot_Testing_PexMatcher_value = (Optr)new_Slot(1, L"value");
    slot_Testing_PexMatcher_fail = (Optr)new_Slot(2, L"fail");
    slot_Testing_PexMatcher_bool = (Optr)new_Slot(3, L"bool");
    layout_Testing_PexMatcher = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Testing_PexMatcher)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    ((Array)layout_Testing_PexMatcher)->values[1] = slot_Testing_PexMatcher_value; // value 
    ((Array)layout_Testing_PexMatcher)->values[2] = slot_Testing_PexMatcher_fail; // fail 
    ((Array)layout_Testing_PexMatcher)->values[3] = slot_Testing_PexMatcher_bool; // bool 
    Testing_PexMatcher_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Testing_PexMatcher_Class_class);
    Testing_PexMatcher_Class->layout = layout_Testing_PexMatcher;
    Testing_PexMatcher_Class->name = SMB_PexMatcher;
    
}

void init_Testing_PPexMatcher_methods() {
    init_SMB_check_ifFail_();
    init_SMB_false();
    init_SMB_beKindOf_();
    init_SMB_not();
    init_SMB_initialize_();
    init_SMB_be_();
    init_SMB_warnOn_();
    init_SMB_beSameAs_();
    init_SMB_doesNotUnderstand_();
    init_SMB_true();
    init_SMB_expect_();
    init_SMB_be();
    init_class_SMB_new_();
    
}