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
    Array PArray11302 = new_Array_with(2, (Optr)VAR_aBool_0_0, (Optr)VAR_block_0_1);
    Assign PAssign11304 = new_Assign((Optr)slot_Testing_PexMatcher_fail, (Optr)VAR_block_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11305 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend11309 = new_Send((Optr)self, SMB_signal, 0);
    Array PThreadedCode11308 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11309, (Optr)&t_block_return);
    Block PBlock11307 = new_Block_with(empty_Array, empty_Array, PThreadedCode11308, 1, PSend11309);
    // ifFalse:. 
    Send PSend11306 = new_Send((Optr)PSend11305, SMB_ifFalse_, 1, (Optr)PBlock11307);
    Array PThreadedCode11303 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign11304, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend11305, (Optr)&t_send_ifFalse_, (Optr)PSend11306, (Optr)PBlock11307, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod11301 = new_Method_with(PArray11302, empty_Array, empty_Array, PThreadedCode11303, 3, PAssign11304, PSend11306, nil_Const);
    
    MethodClosure MC_SMB_check_ifFail_ = new_MethodClosure((Method)PMethod11301, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_check_ifFail_, MC_SMB_check_ifFail_);
}


static void init_SMB_false() {
    Symbol SMB_false = new_Symbol(L"false");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11312 = new_Send((Optr)self, SMB_be_, 1, (Optr)false_Const);
    Array PThreadedCode11311 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11312, (Optr)&t_method_return);
    Method PMethod11310 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11311, 1, PSend11312);
    
    MethodClosure MC_SMB_false = new_MethodClosure((Method)PMethod11310, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_false, MC_SMB_false);
}


static void init_SMB_beKindOf_() {
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray11314 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend11316 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_isKindOf_, 1, (Optr)VAR_aClass_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11318 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11320 = new_String(L" value of kind: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11320_Const = new_Constant((Optr)string_11320);
    // <<. 
    Send PSend11321 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11320_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11322 = new_Send((Optr)VAR_aClass_0_0, SMB_name, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11323 = new_Send((Optr)PSend11322, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11319 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11320, (Optr)&t_send1, (Optr)PSend11321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send0, (Optr)PSend11322, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11323, (Optr)&t_method_return);
    Block PBlock11317 = new_Block_with(PArray11318, empty_Array, PThreadedCode11319, 2, PSend11321, PSend11323);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11324 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11316, (Optr)PBlock11317);
    Array PThreadedCode11315 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend11316, (Optr)&t_push_closure, (Optr)PBlock11317, (Optr)&t_send2, (Optr)PSend11324, (Optr)&t_method_return);
    Method PMethod11313 = new_Method_with(PArray11314, empty_Array, empty_Array, PThreadedCode11315, 1, PSend11324);
    
    MethodClosure MC_SMB_beKindOf_ = new_MethodClosure((Method)PMethod11313, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beKindOf_, MC_SMB_beKindOf_);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11328 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_not, 0);
    Assign PAssign11327 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)PSend11328);
    Array PThreadedCode11326 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11327, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send0, (Optr)PSend11328, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11325 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11326, 2, PAssign11327, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod11325, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11330 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Assign PAssign11332 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)true_Const);
    Assign PAssign11333 = new_Assign((Optr)slot_Testing_PexMatcher_value, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11331 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign11332, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11333, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11329 = new_Method_with(PArray11330, empty_Array, empty_Array, PThreadedCode11331, 3, PAssign11332, PAssign11333, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod11329, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_be_() {
    Symbol SMB_be_ = new_Symbol(L"be:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11335 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11337 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__equals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11339 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11341 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11341_Const = new_Constant((Optr)string_11341);
    // <<. 
    Send PSend11342 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11341_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11343 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11340 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11341, (Optr)&t_send1, (Optr)PSend11342, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11343, (Optr)&t_method_return);
    Block PBlock11338 = new_Block_with(PArray11339, empty_Array, PThreadedCode11340, 2, PSend11342, PSend11343);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11344 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11337, (Optr)PBlock11338);
    Array PThreadedCode11336 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11337, (Optr)&t_push_closure, (Optr)PBlock11338, (Optr)&t_send2, (Optr)PSend11344, (Optr)&t_method_return);
    Method PMethod11334 = new_Method_with(PArray11335, empty_Array, empty_Array, PThreadedCode11336, 1, PSend11344);
    
    MethodClosure MC_SMB_be_ = new_MethodClosure((Method)PMethod11334, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be_, MC_SMB_be_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray11346 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    String string_11351 = new_String(L"Didn't expect");
    Array PThreadedCode11350 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11351, (Optr)&t_block_return);
    Constant string_11351_Const = new_Constant((Optr)string_11351);
    Block PBlock11349 = new_Block_with(empty_Array, empty_Array, PThreadedCode11350, 1, string_11351_Const);
    String string_11354 = new_String(L"Expected");
    Array PThreadedCode11353 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11354, (Optr)&t_block_return);
    Constant string_11354_Const = new_Constant((Optr)string_11354);
    Block PBlock11352 = new_Block_with(empty_Array, empty_Array, PThreadedCode11353, 1, string_11354_Const);
    // ifFalse:ifTrue:. 
    Send PSend11348 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock11349, (Optr)PBlock11352);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend11355 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend11348);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11356 = new_Send((Optr)slot_Testing_PexMatcher_fail, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    String string_11357 = new_String(L" but got: ");
    Constant string_11357_Const = new_Constant((Optr)string_11357);
    // <<. 
    Send PSend11358 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_11357_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11359 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode11347 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend11348, (Optr)PBlock11349, (Optr)PBlock11352, (Optr)&t_send1, (Optr)PSend11355, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_fail, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11356, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11357, (Optr)&t_send1, (Optr)PSend11358, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11359, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11345 = new_Method_with(PArray11346, empty_Array, empty_Array, PThreadedCode11347, 5, PSend11355, PSend11356, PSend11358, PSend11359, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod11345, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_beSameAs_() {
    Symbol SMB_beSameAs_ = new_Symbol(L"beSameAs:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11361 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11363 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__pequals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11365 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11367 = new_String(L" pointer-equal value to: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11367_Const = new_Constant((Optr)string_11367);
    // <<. 
    Send PSend11368 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11367_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11369 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11366 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11367, (Optr)&t_send1, (Optr)PSend11368, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11369, (Optr)&t_method_return);
    Block PBlock11364 = new_Block_with(PArray11365, empty_Array, PThreadedCode11366, 2, PSend11368, PSend11369);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11370 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11363, (Optr)PBlock11364);
    Array PThreadedCode11362 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11363, (Optr)&t_push_closure, (Optr)PBlock11364, (Optr)&t_send2, (Optr)PSend11370, (Optr)&t_method_return);
    Method PMethod11360 = new_Method_with(PArray11361, empty_Array, empty_Array, PThreadedCode11362, 1, PSend11370);
    
    MethodClosure MC_SMB_beSameAs_ = new_MethodClosure((Method)PMethod11360, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beSameAs_, MC_SMB_beSameAs_);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray11372 = new_Array_with(1, (Optr)VAR_message_0_0);
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    // sendTo:. 
    Send PSend11374 = new_Send((Optr)VAR_message_0_0, SMB_sendTo_, 1, (Optr)slot_Testing_PexMatcher_value);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11376 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11378 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11378_Const = new_Constant((Optr)string_11378);
    // <<. 
    Send PSend11379 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11378_Const);
    // <<. 
    Send PSend11380 = new_Send((Optr)PSend11379, SMB__shiftLeft_, 1, (Optr)VAR_message_0_0);
    Array PThreadedCode11377 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11378, (Optr)&t_send1, (Optr)PSend11379, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend11380, (Optr)&t_method_return);
    Block PBlock11375 = new_Block_with(PArray11376, empty_Array, PThreadedCode11377, 1, PSend11380);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11381 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11374, (Optr)PBlock11375);
    Array PThreadedCode11373 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_send1, (Optr)PSend11374, (Optr)&t_push_closure, (Optr)PBlock11375, (Optr)&t_send2, (Optr)PSend11381, (Optr)&t_method_return);
    Method PMethod11371 = new_Method_with(PArray11372, empty_Array, empty_Array, PThreadedCode11373, 1, PSend11381);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod11371, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_true() {
    Symbol SMB_true = new_Symbol(L"true");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11384 = new_Send((Optr)self, SMB_be_, 1, (Optr)true_Const);
    Array PThreadedCode11383 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend11384, (Optr)&t_method_return);
    Method PMethod11382 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11383, 1, PSend11384);
    
    MethodClosure MC_SMB_true = new_MethodClosure((Method)PMethod11382, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_true, MC_SMB_true);
}


static void init_SMB_expect_() {
    Symbol SMB_expect_ = new_Symbol(L"expect:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11386 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend11388 = new_Send((Optr)self, SMB_assert_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11387 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11388, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11385 = new_Method_with(PArray11386, empty_Array, empty_Array, PThreadedCode11387, 2, PSend11388, self);
    
    MethodClosure MC_SMB_expect_ = new_MethodClosure((Method)PMethod11385, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_expect_, MC_SMB_expect_);
}


static void init_SMB_be() {
    Symbol SMB_be = new_Symbol(L"be");
    Array PThreadedCode11390 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod11389 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11390, 1, self);
    
    MethodClosure MC_SMB_be = new_MethodClosure((Method)PMethod11389, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be, MC_SMB_be);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11392 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper11394 = new_Super(SMB_new, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend11395 = new_Send((Optr)PSuper11394, SMB_initialize_, 1, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11393 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11394, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_send1, (Optr)PSend11395, (Optr)&t_method_return);
    Method PMethod11391 = new_Method_with(PArray11392, empty_Array, empty_Array, PThreadedCode11393, 1, PSend11395);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod11391, HEADER(Testing_PexMatcher_Class));
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