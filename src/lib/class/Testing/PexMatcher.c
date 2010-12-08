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
    Array PArray11599 = new_Array_with(2, (Optr)VAR_aBool_0_0, (Optr)VAR_block_0_1);
    Assign PAssign11601 = new_Assign((Optr)slot_Testing_PexMatcher_fail, (Optr)VAR_block_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11602 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend11606 = new_Send((Optr)self, SMB_signal, 0);
    Array PThreadedCode11605 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11606, (Optr)&t_block_return);
    Block PBlock11604 = new_Block_with(empty_Array, empty_Array, PThreadedCode11605, 1, PSend11606);
    // ifFalse:. 
    Send PSend11603 = new_Send((Optr)PSend11602, SMB_ifFalse_, 1, (Optr)PBlock11604);
    Array PThreadedCode11600 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign11601, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend11602, (Optr)&t_send_ifFalse_, (Optr)PSend11603, (Optr)PBlock11604, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod11598 = new_Method_with(PArray11599, empty_Array, empty_Array, PThreadedCode11600, 3, PAssign11601, PSend11603, nil_Const);
    
    MethodClosure MC_SMB_check_ifFail_ = new_MethodClosure((Method)PMethod11598, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_check_ifFail_, MC_SMB_check_ifFail_);
}


static void init_SMB_false() {
    Symbol SMB_false = new_Symbol(L"false");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11609 = new_Send((Optr)self, SMB_be_, 1, (Optr)false_Const);
    Array PThreadedCode11608 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11609, (Optr)&t_method_return);
    Method PMethod11607 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11608, 1, PSend11609);
    
    MethodClosure MC_SMB_false = new_MethodClosure((Method)PMethod11607, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_false, MC_SMB_false);
}


static void init_SMB_beKindOf_() {
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
    Array PArray11611 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend11613 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_isKindOf_, 1, (Optr)VAR_aClass_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11615 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11617 = new_String(L" value of kind: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11617_Const = new_Constant((Optr)string_11617);
    // <<. 
    Send PSend11618 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11617_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11619 = new_Send((Optr)VAR_aClass_0_0, SMB_name, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11620 = new_Send((Optr)PSend11619, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11616 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11617, (Optr)&t_send1, (Optr)PSend11618, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send0, (Optr)PSend11619, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11620, (Optr)&t_method_return);
    Block PBlock11614 = new_Block_with(PArray11615, empty_Array, PThreadedCode11616, 2, PSend11618, PSend11620);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11621 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11613, (Optr)PBlock11614);
    Array PThreadedCode11612 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend11613, (Optr)&t_push_closure, (Optr)PBlock11614, (Optr)&t_send2, (Optr)PSend11621, (Optr)&t_method_return);
    Method PMethod11610 = new_Method_with(PArray11611, empty_Array, empty_Array, PThreadedCode11612, 1, PSend11621);
    
    MethodClosure MC_SMB_beKindOf_ = new_MethodClosure((Method)PMethod11610, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beKindOf_, MC_SMB_beKindOf_);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend11625 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_not, 0);
    Assign PAssign11624 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)PSend11625);
    Array PThreadedCode11623 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11624, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send0, (Optr)PSend11625, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11622 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11623, 2, PAssign11624, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod11622, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11627 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Assign PAssign11629 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)true_Const);
    Assign PAssign11630 = new_Assign((Optr)slot_Testing_PexMatcher_value, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11628 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign11629, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11630, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11626 = new_Method_with(PArray11627, empty_Array, empty_Array, PThreadedCode11628, 3, PAssign11629, PAssign11630, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod11626, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_be_() {
    Symbol SMB_be_ = new_Symbol(L"be:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11632 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11634 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__equals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11636 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11638 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11638_Const = new_Constant((Optr)string_11638);
    // <<. 
    Send PSend11639 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11638_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11640 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11637 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11638, (Optr)&t_send1, (Optr)PSend11639, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11640, (Optr)&t_method_return);
    Block PBlock11635 = new_Block_with(PArray11636, empty_Array, PThreadedCode11637, 2, PSend11639, PSend11640);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11641 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11634, (Optr)PBlock11635);
    Array PThreadedCode11633 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11634, (Optr)&t_push_closure, (Optr)PBlock11635, (Optr)&t_send2, (Optr)PSend11641, (Optr)&t_method_return);
    Method PMethod11631 = new_Method_with(PArray11632, empty_Array, empty_Array, PThreadedCode11633, 1, PSend11641);
    
    MethodClosure MC_SMB_be_ = new_MethodClosure((Method)PMethod11631, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be_, MC_SMB_be_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray11643 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    String string_11648 = new_String(L"Didn't expect");
    Array PThreadedCode11647 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11648, (Optr)&t_block_return);
    Constant string_11648_Const = new_Constant((Optr)string_11648);
    Block PBlock11646 = new_Block_with(empty_Array, empty_Array, PThreadedCode11647, 1, string_11648_Const);
    String string_11651 = new_String(L"Expected");
    Array PThreadedCode11650 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11651, (Optr)&t_block_return);
    Constant string_11651_Const = new_Constant((Optr)string_11651);
    Block PBlock11649 = new_Block_with(empty_Array, empty_Array, PThreadedCode11650, 1, string_11651_Const);
    // ifFalse:ifTrue:. 
    Send PSend11645 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock11646, (Optr)PBlock11649);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend11652 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend11645);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11653 = new_Send((Optr)slot_Testing_PexMatcher_fail, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    String string_11654 = new_String(L" but got: ");
    Constant string_11654_Const = new_Constant((Optr)string_11654);
    // <<. 
    Send PSend11655 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_11654_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11656 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode11644 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend11645, (Optr)PBlock11646, (Optr)PBlock11649, (Optr)&t_send1, (Optr)PSend11652, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_fail, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11653, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11654, (Optr)&t_send1, (Optr)PSend11655, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11656, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11642 = new_Method_with(PArray11643, empty_Array, empty_Array, PThreadedCode11644, 5, PSend11652, PSend11653, PSend11655, PSend11656, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod11642, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_beSameAs_() {
    Symbol SMB_beSameAs_ = new_Symbol(L"beSameAs:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
    Array PArray11658 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11660 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__pequals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11662 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11664 = new_String(L" pointer-equal value to: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11664_Const = new_Constant((Optr)string_11664);
    // <<. 
    Send PSend11665 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11664_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11666 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11663 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11664, (Optr)&t_send1, (Optr)PSend11665, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11666, (Optr)&t_method_return);
    Block PBlock11661 = new_Block_with(PArray11662, empty_Array, PThreadedCode11663, 2, PSend11665, PSend11666);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11667 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11660, (Optr)PBlock11661);
    Array PThreadedCode11659 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11660, (Optr)&t_push_closure, (Optr)PBlock11661, (Optr)&t_send2, (Optr)PSend11667, (Optr)&t_method_return);
    Method PMethod11657 = new_Method_with(PArray11658, empty_Array, empty_Array, PThreadedCode11659, 1, PSend11667);
    
    MethodClosure MC_SMB_beSameAs_ = new_MethodClosure((Method)PMethod11657, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_beSameAs_, MC_SMB_beSameAs_);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Array PArray11669 = new_Array_with(1, (Optr)VAR_message_0_0);
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    // sendTo:. 
    Send PSend11671 = new_Send((Optr)VAR_message_0_0, SMB_sendTo_, 1, (Optr)slot_Testing_PexMatcher_value);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11673 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11675 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11675_Const = new_Constant((Optr)string_11675);
    // <<. 
    Send PSend11676 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11675_Const);
    // <<. 
    Send PSend11677 = new_Send((Optr)PSend11676, SMB__shiftLeft_, 1, (Optr)VAR_message_0_0);
    Array PThreadedCode11674 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11675, (Optr)&t_send1, (Optr)PSend11676, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend11677, (Optr)&t_method_return);
    Block PBlock11672 = new_Block_with(PArray11673, empty_Array, PThreadedCode11674, 1, PSend11677);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11678 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11671, (Optr)PBlock11672);
    Array PThreadedCode11670 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_send1, (Optr)PSend11671, (Optr)&t_push_closure, (Optr)PBlock11672, (Optr)&t_send2, (Optr)PSend11678, (Optr)&t_method_return);
    Method PMethod11668 = new_Method_with(PArray11669, empty_Array, empty_Array, PThreadedCode11670, 1, PSend11678);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod11668, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_true() {
    Symbol SMB_true = new_Symbol(L"true");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend11681 = new_Send((Optr)self, SMB_be_, 1, (Optr)true_Const);
    Array PThreadedCode11680 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend11681, (Optr)&t_method_return);
    Method PMethod11679 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11680, 1, PSend11681);
    
    MethodClosure MC_SMB_true = new_MethodClosure((Method)PMethod11679, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_true, MC_SMB_true);
}


static void init_SMB_expect_() {
    Symbol SMB_expect_ = new_Symbol(L"expect:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
    Array PArray11683 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend11685 = new_Send((Optr)self, SMB_assert_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11684 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11685, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11682 = new_Method_with(PArray11683, empty_Array, empty_Array, PThreadedCode11684, 2, PSend11685, self);
    
    MethodClosure MC_SMB_expect_ = new_MethodClosure((Method)PMethod11682, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_expect_, MC_SMB_expect_);
}


static void init_SMB_be() {
    Symbol SMB_be = new_Symbol(L"be");
    Array PThreadedCode11687 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod11686 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11687, 1, self);
    
    MethodClosure MC_SMB_be = new_MethodClosure((Method)PMethod11686, Testing_PexMatcher_Class);
    store_method(Testing_PexMatcher_Class, SMB_be, MC_SMB_be);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
    Array PArray11689 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper11691 = new_Super(SMB_new, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend11692 = new_Send((Optr)PSuper11691, SMB_initialize_, 1, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11690 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11691, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_send1, (Optr)PSend11692, (Optr)&t_method_return);
    Method PMethod11688 = new_Method_with(PArray11689, empty_Array, empty_Array, PThreadedCode11690, 1, PSend11692);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod11688, HEADER(Testing_PexMatcher_Class));
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