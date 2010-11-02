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
    Array PArray11278 = new_Array_with(2, (Optr)VAR_aBool_0_0, (Optr)VAR_block_0_1);
    Assign PAssign11280 = new_Assign((Optr)slot_Testing_PexMatcher_fail, (Optr)VAR_block_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11281 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend11285 = new_Send((Optr)self, SMB_signal, 0);
    Array PThreadedCode11284 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11285, (Optr)&t_block_return);
    Block PBlock11283 = new_Block_with(empty_Array, empty_Array, PThreadedCode11284, 1, PSend11285);
    // ifFalse:. 
    Send PSend11282 = new_Send((Optr)PSend11281, SMB_ifFalse_, 1, (Optr)PBlock11283);
    Array PThreadedCode11279 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign11280, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend11281, (Optr)&t_send_ifFalse_, (Optr)PSend11282, (Optr)PBlock11283, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod11277 = new_Method_with(PArray11278, empty_Array, empty_Array, PThreadedCode11279, 3, PAssign11280, PSend11282, nil_Const);
    
    MethodClosure MC_SMB_check_ifFail_ = new_MethodClosure((Method)PMethod11277, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_check_ifFail_, MC_SMB_check_ifFail_);
}


static void init_SMB_false() {
    Symbol SMB_false = new_Symbol(L"false");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11288 = new_Send((Optr)self, SMB_be_, 1, (Optr)false_Const);
    Array PThreadedCode11287 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11288, (Optr)&t_method_return);
    Method PMethod11286 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11287, 1, PSend11288);
    
    MethodClosure MC_SMB_false = new_MethodClosure((Method)PMethod11286, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_false, MC_SMB_false);
}


static void init_SMB_beKindOf_() {
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray11290 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend11292 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_isKindOf_, 1, (Optr)VAR_aClass_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11294 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11296 = new_String(L" value of kind: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11296_Const = new_Constant((Optr)string_11296);
    // <<. 
    Send PSend11297 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11296_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11298 = new_Send((Optr)VAR_aClass_0_0, SMB_name, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11299 = new_Send((Optr)PSend11298, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11295 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11296, (Optr)&t_send1, (Optr)PSend11297, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send0, (Optr)PSend11298, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11299, (Optr)&t_method_return);
    Block PBlock11293 = new_Block_with(PArray11294, empty_Array, PThreadedCode11295, 2, PSend11297, PSend11299);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11300 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11292, (Optr)PBlock11293);
    Array PThreadedCode11291 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend11292, (Optr)&t_push_closure, (Optr)PBlock11293, (Optr)&t_send2, (Optr)PSend11300, (Optr)&t_method_return);
    Method PMethod11289 = new_Method_with(PArray11290, empty_Array, empty_Array, PThreadedCode11291, 1, PSend11300);
    
    MethodClosure MC_SMB_beKindOf_ = new_MethodClosure((Method)PMethod11289, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beKindOf_, MC_SMB_beKindOf_);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11304 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_not, 0);
    Assign PAssign11303 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)PSend11304);
    Array PThreadedCode11302 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11303, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send0, (Optr)PSend11304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11301 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11302, 2, PAssign11303, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod11301, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11306 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Assign PAssign11308 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)true_Const);
    Assign PAssign11309 = new_Assign((Optr)slot_Testing_PexMatcher_value, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11307 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign11308, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11309, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11305 = new_Method_with(PArray11306, empty_Array, empty_Array, PThreadedCode11307, 3, PAssign11308, PAssign11309, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod11305, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_be_() {
    Symbol SMB_be_ = new_Symbol(L"be:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11311 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11313 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__equals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11315 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11317 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11317_Const = new_Constant((Optr)string_11317);
    // <<. 
    Send PSend11318 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11317_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11319 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11316 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11317, (Optr)&t_send1, (Optr)PSend11318, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11319, (Optr)&t_method_return);
    Block PBlock11314 = new_Block_with(PArray11315, empty_Array, PThreadedCode11316, 2, PSend11318, PSend11319);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11320 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11313, (Optr)PBlock11314);
    Array PThreadedCode11312 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11313, (Optr)&t_push_closure, (Optr)PBlock11314, (Optr)&t_send2, (Optr)PSend11320, (Optr)&t_method_return);
    Method PMethod11310 = new_Method_with(PArray11311, empty_Array, empty_Array, PThreadedCode11312, 1, PSend11320);
    
    MethodClosure MC_SMB_be_ = new_MethodClosure((Method)PMethod11310, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be_, MC_SMB_be_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray11322 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    String string_11327 = new_String(L"Didn't expect");
    Array PThreadedCode11326 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11327, (Optr)&t_block_return);
    Constant string_11327_Const = new_Constant((Optr)string_11327);
    Block PBlock11325 = new_Block_with(empty_Array, empty_Array, PThreadedCode11326, 1, string_11327_Const);
    String string_11330 = new_String(L"Expected");
    Array PThreadedCode11329 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11330, (Optr)&t_block_return);
    Constant string_11330_Const = new_Constant((Optr)string_11330);
    Block PBlock11328 = new_Block_with(empty_Array, empty_Array, PThreadedCode11329, 1, string_11330_Const);
    // ifFalse:ifTrue:. 
    Send PSend11324 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock11325, (Optr)PBlock11328);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend11331 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend11324);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11332 = new_Send((Optr)slot_Testing_PexMatcher_fail, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    String string_11333 = new_String(L" but got: ");
    Constant string_11333_Const = new_Constant((Optr)string_11333);
    // <<. 
    Send PSend11334 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_11333_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11335 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode11323 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend11324, (Optr)PBlock11325, (Optr)PBlock11328, (Optr)&t_send1, (Optr)PSend11331, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_fail, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11332, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11333, (Optr)&t_send1, (Optr)PSend11334, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11335, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11321 = new_Method_with(PArray11322, empty_Array, empty_Array, PThreadedCode11323, 5, PSend11331, PSend11332, PSend11334, PSend11335, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod11321, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_beSameAs_() {
    Symbol SMB_beSameAs_ = new_Symbol(L"beSameAs:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11337 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11339 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__pequals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11341 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11343 = new_String(L" pointer-equal value to: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11343_Const = new_Constant((Optr)string_11343);
    // <<. 
    Send PSend11344 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11343_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11345 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11342 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11343, (Optr)&t_send1, (Optr)PSend11344, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11345, (Optr)&t_method_return);
    Block PBlock11340 = new_Block_with(PArray11341, empty_Array, PThreadedCode11342, 2, PSend11344, PSend11345);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11346 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11339, (Optr)PBlock11340);
    Array PThreadedCode11338 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11339, (Optr)&t_push_closure, (Optr)PBlock11340, (Optr)&t_send2, (Optr)PSend11346, (Optr)&t_method_return);
    Method PMethod11336 = new_Method_with(PArray11337, empty_Array, empty_Array, PThreadedCode11338, 1, PSend11346);
    
    MethodClosure MC_SMB_beSameAs_ = new_MethodClosure((Method)PMethod11336, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beSameAs_, MC_SMB_beSameAs_);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray11348 = new_Array_with(1, (Optr)VAR_message_0_0);
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    // sendTo:. 
    Send PSend11350 = new_Send((Optr)VAR_message_0_0, SMB_sendTo_, 1, (Optr)slot_Testing_PexMatcher_value);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11352 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11354 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11354_Const = new_Constant((Optr)string_11354);
    // <<. 
    Send PSend11355 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11354_Const);
    // <<. 
    Send PSend11356 = new_Send((Optr)PSend11355, SMB__shiftLeft_, 1, (Optr)VAR_message_0_0);
    Array PThreadedCode11353 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11354, (Optr)&t_send1, (Optr)PSend11355, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend11356, (Optr)&t_method_return);
    Block PBlock11351 = new_Block_with(PArray11352, empty_Array, PThreadedCode11353, 1, PSend11356);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11357 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11350, (Optr)PBlock11351);
    Array PThreadedCode11349 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_send1, (Optr)PSend11350, (Optr)&t_push_closure, (Optr)PBlock11351, (Optr)&t_send2, (Optr)PSend11357, (Optr)&t_method_return);
    Method PMethod11347 = new_Method_with(PArray11348, empty_Array, empty_Array, PThreadedCode11349, 1, PSend11357);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod11347, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_true() {
    Symbol SMB_true = new_Symbol(L"true");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11360 = new_Send((Optr)self, SMB_be_, 1, (Optr)true_Const);
    Array PThreadedCode11359 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend11360, (Optr)&t_method_return);
    Method PMethod11358 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11359, 1, PSend11360);
    
    MethodClosure MC_SMB_true = new_MethodClosure((Method)PMethod11358, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_true, MC_SMB_true);
}


static void init_SMB_expect_() {
    Symbol SMB_expect_ = new_Symbol(L"expect:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11362 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend11364 = new_Send((Optr)self, SMB_assert_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11363 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11364, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11361 = new_Method_with(PArray11362, empty_Array, empty_Array, PThreadedCode11363, 2, PSend11364, self);
    
    MethodClosure MC_SMB_expect_ = new_MethodClosure((Method)PMethod11361, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_expect_, MC_SMB_expect_);
}


static void init_SMB_be() {
    Symbol SMB_be = new_Symbol(L"be");
    Array PThreadedCode11366 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod11365 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11366, 1, self);
    
    MethodClosure MC_SMB_be = new_MethodClosure((Method)PMethod11365, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be, MC_SMB_be);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11368 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper11370 = new_Super(SMB_new, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend11371 = new_Send((Optr)PSuper11370, SMB_initialize_, 1, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11369 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11370, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_send1, (Optr)PSend11371, (Optr)&t_method_return);
    Method PMethod11367 = new_Method_with(PArray11368, empty_Array, empty_Array, PThreadedCode11369, 1, PSend11371);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod11367, HEADER(Testing_PexMatcher_Class));
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