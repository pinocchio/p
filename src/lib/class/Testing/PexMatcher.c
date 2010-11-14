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
    Array PArray11540 = new_Array_with(2, (Optr)VAR_aBool_0_0, (Optr)VAR_block_0_1);
    Assign PAssign11542 = new_Assign((Optr)slot_Testing_PexMatcher_fail, (Optr)VAR_block_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11543 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend11547 = new_Send((Optr)self, SMB_signal, 0);
    Array PThreadedCode11546 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11547, (Optr)&t_block_return);
    Block PBlock11545 = new_Block_with(empty_Array, empty_Array, PThreadedCode11546, 1, PSend11547);
    // ifFalse:. 
    Send PSend11544 = new_Send((Optr)PSend11543, SMB_ifFalse_, 1, (Optr)PBlock11545);
    Array PThreadedCode11541 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign11542, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend11543, (Optr)&t_send_ifFalse_, (Optr)PSend11544, (Optr)PBlock11545, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod11539 = new_Method_with(PArray11540, empty_Array, empty_Array, PThreadedCode11541, 3, PAssign11542, PSend11544, nil_Const);
    
    MethodClosure MC_SMB_check_ifFail_ = new_MethodClosure((Method)PMethod11539, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_check_ifFail_, MC_SMB_check_ifFail_);
}


static void init_SMB_false() {
    Symbol SMB_false = new_Symbol(L"false");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11550 = new_Send((Optr)self, SMB_be_, 1, (Optr)false_Const);
    Array PThreadedCode11549 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11550, (Optr)&t_method_return);
    Method PMethod11548 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11549, 1, PSend11550);
    
    MethodClosure MC_SMB_false = new_MethodClosure((Method)PMethod11548, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_false, MC_SMB_false);
}


static void init_SMB_beKindOf_() {
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray11552 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend11554 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_isKindOf_, 1, (Optr)VAR_aClass_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11556 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11558 = new_String(L" value of kind: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11558_Const = new_Constant((Optr)string_11558);
    // <<. 
    Send PSend11559 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11558_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11560 = new_Send((Optr)VAR_aClass_0_0, SMB_name, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11561 = new_Send((Optr)PSend11560, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11557 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11558, (Optr)&t_send1, (Optr)PSend11559, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send0, (Optr)PSend11560, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11561, (Optr)&t_method_return);
    Block PBlock11555 = new_Block_with(PArray11556, empty_Array, PThreadedCode11557, 2, PSend11559, PSend11561);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11562 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11554, (Optr)PBlock11555);
    Array PThreadedCode11553 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend11554, (Optr)&t_push_closure, (Optr)PBlock11555, (Optr)&t_send2, (Optr)PSend11562, (Optr)&t_method_return);
    Method PMethod11551 = new_Method_with(PArray11552, empty_Array, empty_Array, PThreadedCode11553, 1, PSend11562);
    
    MethodClosure MC_SMB_beKindOf_ = new_MethodClosure((Method)PMethod11551, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beKindOf_, MC_SMB_beKindOf_);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11566 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_not, 0);
    Assign PAssign11565 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)PSend11566);
    Array PThreadedCode11564 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11565, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send0, (Optr)PSend11566, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11563 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11564, 2, PAssign11565, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod11563, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11568 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Assign PAssign11570 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)true_Const);
    Assign PAssign11571 = new_Assign((Optr)slot_Testing_PexMatcher_value, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11569 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign11570, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11571, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11567 = new_Method_with(PArray11568, empty_Array, empty_Array, PThreadedCode11569, 3, PAssign11570, PAssign11571, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod11567, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_be_() {
    Symbol SMB_be_ = new_Symbol(L"be:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11573 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11575 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__equals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11577 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11579 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11579_Const = new_Constant((Optr)string_11579);
    // <<. 
    Send PSend11580 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11579_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11581 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11578 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11579, (Optr)&t_send1, (Optr)PSend11580, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11581, (Optr)&t_method_return);
    Block PBlock11576 = new_Block_with(PArray11577, empty_Array, PThreadedCode11578, 2, PSend11580, PSend11581);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11582 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11575, (Optr)PBlock11576);
    Array PThreadedCode11574 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11575, (Optr)&t_push_closure, (Optr)PBlock11576, (Optr)&t_send2, (Optr)PSend11582, (Optr)&t_method_return);
    Method PMethod11572 = new_Method_with(PArray11573, empty_Array, empty_Array, PThreadedCode11574, 1, PSend11582);
    
    MethodClosure MC_SMB_be_ = new_MethodClosure((Method)PMethod11572, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be_, MC_SMB_be_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray11584 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    String string_11589 = new_String(L"Didn't expect");
    Array PThreadedCode11588 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11589, (Optr)&t_block_return);
    Constant string_11589_Const = new_Constant((Optr)string_11589);
    Block PBlock11587 = new_Block_with(empty_Array, empty_Array, PThreadedCode11588, 1, string_11589_Const);
    String string_11592 = new_String(L"Expected");
    Array PThreadedCode11591 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11592, (Optr)&t_block_return);
    Constant string_11592_Const = new_Constant((Optr)string_11592);
    Block PBlock11590 = new_Block_with(empty_Array, empty_Array, PThreadedCode11591, 1, string_11592_Const);
    // ifFalse:ifTrue:. 
    Send PSend11586 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock11587, (Optr)PBlock11590);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend11593 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend11586);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11594 = new_Send((Optr)slot_Testing_PexMatcher_fail, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    String string_11595 = new_String(L" but got: ");
    Constant string_11595_Const = new_Constant((Optr)string_11595);
    // <<. 
    Send PSend11596 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_11595_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11597 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode11585 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend11586, (Optr)PBlock11587, (Optr)PBlock11590, (Optr)&t_send1, (Optr)PSend11593, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_fail, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11594, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11595, (Optr)&t_send1, (Optr)PSend11596, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11597, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11583 = new_Method_with(PArray11584, empty_Array, empty_Array, PThreadedCode11585, 5, PSend11593, PSend11594, PSend11596, PSend11597, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod11583, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_beSameAs_() {
    Symbol SMB_beSameAs_ = new_Symbol(L"beSameAs:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11599 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11601 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__pequals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11603 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11605 = new_String(L" pointer-equal value to: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11605_Const = new_Constant((Optr)string_11605);
    // <<. 
    Send PSend11606 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11605_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11607 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11604 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11605, (Optr)&t_send1, (Optr)PSend11606, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11607, (Optr)&t_method_return);
    Block PBlock11602 = new_Block_with(PArray11603, empty_Array, PThreadedCode11604, 2, PSend11606, PSend11607);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11608 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11601, (Optr)PBlock11602);
    Array PThreadedCode11600 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11601, (Optr)&t_push_closure, (Optr)PBlock11602, (Optr)&t_send2, (Optr)PSend11608, (Optr)&t_method_return);
    Method PMethod11598 = new_Method_with(PArray11599, empty_Array, empty_Array, PThreadedCode11600, 1, PSend11608);
    
    MethodClosure MC_SMB_beSameAs_ = new_MethodClosure((Method)PMethod11598, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beSameAs_, MC_SMB_beSameAs_);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray11610 = new_Array_with(1, (Optr)VAR_message_0_0);
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    // sendTo:. 
    Send PSend11612 = new_Send((Optr)VAR_message_0_0, SMB_sendTo_, 1, (Optr)slot_Testing_PexMatcher_value);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11614 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11616 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11616_Const = new_Constant((Optr)string_11616);
    // <<. 
    Send PSend11617 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11616_Const);
    // <<. 
    Send PSend11618 = new_Send((Optr)PSend11617, SMB__shiftLeft_, 1, (Optr)VAR_message_0_0);
    Array PThreadedCode11615 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11616, (Optr)&t_send1, (Optr)PSend11617, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend11618, (Optr)&t_method_return);
    Block PBlock11613 = new_Block_with(PArray11614, empty_Array, PThreadedCode11615, 1, PSend11618);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11619 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11612, (Optr)PBlock11613);
    Array PThreadedCode11611 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_send1, (Optr)PSend11612, (Optr)&t_push_closure, (Optr)PBlock11613, (Optr)&t_send2, (Optr)PSend11619, (Optr)&t_method_return);
    Method PMethod11609 = new_Method_with(PArray11610, empty_Array, empty_Array, PThreadedCode11611, 1, PSend11619);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod11609, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_true() {
    Symbol SMB_true = new_Symbol(L"true");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11622 = new_Send((Optr)self, SMB_be_, 1, (Optr)true_Const);
    Array PThreadedCode11621 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend11622, (Optr)&t_method_return);
    Method PMethod11620 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11621, 1, PSend11622);
    
    MethodClosure MC_SMB_true = new_MethodClosure((Method)PMethod11620, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_true, MC_SMB_true);
}


static void init_SMB_expect_() {
    Symbol SMB_expect_ = new_Symbol(L"expect:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11624 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend11626 = new_Send((Optr)self, SMB_assert_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11625 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11626, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11623 = new_Method_with(PArray11624, empty_Array, empty_Array, PThreadedCode11625, 2, PSend11626, self);
    
    MethodClosure MC_SMB_expect_ = new_MethodClosure((Method)PMethod11623, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_expect_, MC_SMB_expect_);
}


static void init_SMB_be() {
    Symbol SMB_be = new_Symbol(L"be");
    Array PThreadedCode11628 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod11627 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11628, 1, self);
    
    MethodClosure MC_SMB_be = new_MethodClosure((Method)PMethod11627, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be, MC_SMB_be);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11630 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper11632 = new_Super(SMB_new, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend11633 = new_Send((Optr)PSuper11632, SMB_initialize_, 1, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11631 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11632, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_send1, (Optr)PSend11633, (Optr)&t_method_return);
    Method PMethod11629 = new_Method_with(PArray11630, empty_Array, empty_Array, PThreadedCode11631, 1, PSend11633);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod11629, HEADER(Testing_PexMatcher_Class));
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