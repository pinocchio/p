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
    Array PArray11340 = new_Array_with(2, (Optr)VAR_aBool_0_0, (Optr)VAR_block_0_1);
    Assign PAssign11342 = new_Assign((Optr)slot_Testing_PexMatcher_fail, (Optr)VAR_block_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11343 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend11347 = new_Send((Optr)self, SMB_signal, 0);
    Array PThreadedCode11346 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11347, (Optr)&t_block_return);
    Block PBlock11345 = new_Block_with(empty_Array, empty_Array, PThreadedCode11346, 1, PSend11347);
    // ifFalse:. 
    Send PSend11344 = new_Send((Optr)PSend11343, SMB_ifFalse_, 1, (Optr)PBlock11345);
    Array PThreadedCode11341 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign11342, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend11343, (Optr)&t_send_ifFalse_, (Optr)PSend11344, (Optr)PBlock11345, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod11339 = new_Method_with(PArray11340, empty_Array, empty_Array, PThreadedCode11341, 3, PAssign11342, PSend11344, nil_Const);
    
    MethodClosure MC_SMB_check_ifFail_ = new_MethodClosure((Method)PMethod11339, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_check_ifFail_, MC_SMB_check_ifFail_);
}


static void init_SMB_false() {
    Symbol SMB_false = new_Symbol(L"false");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11350 = new_Send((Optr)self, SMB_be_, 1, (Optr)false_Const);
    Array PThreadedCode11349 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11350, (Optr)&t_method_return);
    Method PMethod11348 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11349, 1, PSend11350);
    
    MethodClosure MC_SMB_false = new_MethodClosure((Method)PMethod11348, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_false, MC_SMB_false);
}


static void init_SMB_beKindOf_() {
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray11352 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend11354 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_isKindOf_, 1, (Optr)VAR_aClass_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11356 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11358 = new_String(L" value of kind: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11358_Const = new_Constant((Optr)string_11358);
    // <<. 
    Send PSend11359 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11358_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11360 = new_Send((Optr)VAR_aClass_0_0, SMB_name, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11361 = new_Send((Optr)PSend11360, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11357 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11358, (Optr)&t_send1, (Optr)PSend11359, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send0, (Optr)PSend11360, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11361, (Optr)&t_method_return);
    Block PBlock11355 = new_Block_with(PArray11356, empty_Array, PThreadedCode11357, 2, PSend11359, PSend11361);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11362 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11354, (Optr)PBlock11355);
    Array PThreadedCode11353 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend11354, (Optr)&t_push_closure, (Optr)PBlock11355, (Optr)&t_send2, (Optr)PSend11362, (Optr)&t_method_return);
    Method PMethod11351 = new_Method_with(PArray11352, empty_Array, empty_Array, PThreadedCode11353, 1, PSend11362);
    
    MethodClosure MC_SMB_beKindOf_ = new_MethodClosure((Method)PMethod11351, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beKindOf_, MC_SMB_beKindOf_);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11366 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_not, 0);
    Assign PAssign11365 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)PSend11366);
    Array PThreadedCode11364 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11365, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send0, (Optr)PSend11366, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11364, 2, PAssign11365, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod11363, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11368 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Assign PAssign11370 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)true_Const);
    Assign PAssign11371 = new_Assign((Optr)slot_Testing_PexMatcher_value, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11369 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign11370, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11371, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11367 = new_Method_with(PArray11368, empty_Array, empty_Array, PThreadedCode11369, 3, PAssign11370, PAssign11371, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod11367, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_be_() {
    Symbol SMB_be_ = new_Symbol(L"be:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11373 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11375 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__equals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11377 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11379 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11379_Const = new_Constant((Optr)string_11379);
    // <<. 
    Send PSend11380 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11379_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11381 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11378 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11379, (Optr)&t_send1, (Optr)PSend11380, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11381, (Optr)&t_method_return);
    Block PBlock11376 = new_Block_with(PArray11377, empty_Array, PThreadedCode11378, 2, PSend11380, PSend11381);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11382 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11375, (Optr)PBlock11376);
    Array PThreadedCode11374 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11375, (Optr)&t_push_closure, (Optr)PBlock11376, (Optr)&t_send2, (Optr)PSend11382, (Optr)&t_method_return);
    Method PMethod11372 = new_Method_with(PArray11373, empty_Array, empty_Array, PThreadedCode11374, 1, PSend11382);
    
    MethodClosure MC_SMB_be_ = new_MethodClosure((Method)PMethod11372, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be_, MC_SMB_be_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray11384 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    String string_11389 = new_String(L"Didn't expect");
    Array PThreadedCode11388 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11389, (Optr)&t_block_return);
    Constant string_11389_Const = new_Constant((Optr)string_11389);
    Block PBlock11387 = new_Block_with(empty_Array, empty_Array, PThreadedCode11388, 1, string_11389_Const);
    String string_11392 = new_String(L"Expected");
    Array PThreadedCode11391 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11392, (Optr)&t_block_return);
    Constant string_11392_Const = new_Constant((Optr)string_11392);
    Block PBlock11390 = new_Block_with(empty_Array, empty_Array, PThreadedCode11391, 1, string_11392_Const);
    // ifFalse:ifTrue:. 
    Send PSend11386 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock11387, (Optr)PBlock11390);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend11393 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend11386);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11394 = new_Send((Optr)slot_Testing_PexMatcher_fail, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    String string_11395 = new_String(L" but got: ");
    Constant string_11395_Const = new_Constant((Optr)string_11395);
    // <<. 
    Send PSend11396 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_11395_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11397 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode11385 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend11386, (Optr)PBlock11387, (Optr)PBlock11390, (Optr)&t_send1, (Optr)PSend11393, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_fail, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11395, (Optr)&t_send1, (Optr)PSend11396, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11397, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11383 = new_Method_with(PArray11384, empty_Array, empty_Array, PThreadedCode11385, 5, PSend11393, PSend11394, PSend11396, PSend11397, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod11383, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_beSameAs_() {
    Symbol SMB_beSameAs_ = new_Symbol(L"beSameAs:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11399 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11401 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__pequals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11403 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11405 = new_String(L" pointer-equal value to: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11405_Const = new_Constant((Optr)string_11405);
    // <<. 
    Send PSend11406 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11405_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11407 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11404 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11405, (Optr)&t_send1, (Optr)PSend11406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11407, (Optr)&t_method_return);
    Block PBlock11402 = new_Block_with(PArray11403, empty_Array, PThreadedCode11404, 2, PSend11406, PSend11407);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11408 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11401, (Optr)PBlock11402);
    Array PThreadedCode11400 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11401, (Optr)&t_push_closure, (Optr)PBlock11402, (Optr)&t_send2, (Optr)PSend11408, (Optr)&t_method_return);
    Method PMethod11398 = new_Method_with(PArray11399, empty_Array, empty_Array, PThreadedCode11400, 1, PSend11408);
    
    MethodClosure MC_SMB_beSameAs_ = new_MethodClosure((Method)PMethod11398, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beSameAs_, MC_SMB_beSameAs_);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray11410 = new_Array_with(1, (Optr)VAR_message_0_0);
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    // sendTo:. 
    Send PSend11412 = new_Send((Optr)VAR_message_0_0, SMB_sendTo_, 1, (Optr)slot_Testing_PexMatcher_value);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11414 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11416 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11416_Const = new_Constant((Optr)string_11416);
    // <<. 
    Send PSend11417 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11416_Const);
    // <<. 
    Send PSend11418 = new_Send((Optr)PSend11417, SMB__shiftLeft_, 1, (Optr)VAR_message_0_0);
    Array PThreadedCode11415 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11416, (Optr)&t_send1, (Optr)PSend11417, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend11418, (Optr)&t_method_return);
    Block PBlock11413 = new_Block_with(PArray11414, empty_Array, PThreadedCode11415, 1, PSend11418);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11419 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11412, (Optr)PBlock11413);
    Array PThreadedCode11411 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_send1, (Optr)PSend11412, (Optr)&t_push_closure, (Optr)PBlock11413, (Optr)&t_send2, (Optr)PSend11419, (Optr)&t_method_return);
    Method PMethod11409 = new_Method_with(PArray11410, empty_Array, empty_Array, PThreadedCode11411, 1, PSend11419);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod11409, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_true() {
    Symbol SMB_true = new_Symbol(L"true");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11422 = new_Send((Optr)self, SMB_be_, 1, (Optr)true_Const);
    Array PThreadedCode11421 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend11422, (Optr)&t_method_return);
    Method PMethod11420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11421, 1, PSend11422);
    
    MethodClosure MC_SMB_true = new_MethodClosure((Method)PMethod11420, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_true, MC_SMB_true);
}


static void init_SMB_expect_() {
    Symbol SMB_expect_ = new_Symbol(L"expect:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11424 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend11426 = new_Send((Optr)self, SMB_assert_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11425 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11426, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11423 = new_Method_with(PArray11424, empty_Array, empty_Array, PThreadedCode11425, 2, PSend11426, self);
    
    MethodClosure MC_SMB_expect_ = new_MethodClosure((Method)PMethod11423, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_expect_, MC_SMB_expect_);
}


static void init_SMB_be() {
    Symbol SMB_be = new_Symbol(L"be");
    Array PThreadedCode11428 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod11427 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11428, 1, self);
    
    MethodClosure MC_SMB_be = new_MethodClosure((Method)PMethod11427, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be, MC_SMB_be);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11430 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper11432 = new_Super(SMB_new, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend11433 = new_Send((Optr)PSuper11432, SMB_initialize_, 1, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11431 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11432, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_send1, (Optr)PSend11433, (Optr)&t_method_return);
    Method PMethod11429 = new_Method_with(PArray11430, empty_Array, empty_Array, PThreadedCode11431, 1, PSend11433);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod11429, HEADER(Testing_PexMatcher_Class));
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