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
<<<<<<< HEAD
    Array PArray11572 = new_Array_with(2, (Optr)VAR_aBool_0_0, (Optr)VAR_block_0_1);
    Assign PAssign11574 = new_Assign((Optr)slot_Testing_PexMatcher_fail, (Optr)VAR_block_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11575 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend11579 = new_Send((Optr)self, SMB_signal, 0);
    Array PThreadedCode11578 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11579, (Optr)&t_block_return);
    Block PBlock11577 = new_Block_with(empty_Array, empty_Array, PThreadedCode11578, 1, PSend11579);
    // ifFalse:. 
    Send PSend11576 = new_Send((Optr)PSend11575, SMB_ifFalse_, 1, (Optr)PBlock11577);
    Array PThreadedCode11573 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign11574, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend11575, (Optr)&t_send_ifFalse_, (Optr)PSend11576, (Optr)PBlock11577, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod11571 = new_Method_with(PArray11572, empty_Array, empty_Array, PThreadedCode11573, 3, PAssign11574, PSend11576, nil_Const);
    
    MethodClosure MC_SMB_check_ifFail_ = new_MethodClosure((Method)PMethod11571, Testing_PexMatcher_Class);
=======
    Array PArray11538 = new_Array_with(2, (Optr)VAR_aBool_0_0, (Optr)VAR_block_0_1);
    Assign PAssign11540 = new_Assign((Optr)slot_Testing_PexMatcher_fail, (Optr)VAR_block_0_1);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11541 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend11545 = new_Send((Optr)self, SMB_signal, 0);
    Array PThreadedCode11544 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend11545, (Optr)&t_block_return);
    Block PBlock11543 = new_Block_with(empty_Array, empty_Array, PThreadedCode11544, 1, PSend11545);
    // ifFalse:. 
    Send PSend11542 = new_Send((Optr)PSend11541, SMB_ifFalse_, 1, (Optr)PBlock11543);
    Array PThreadedCode11539 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign11540, (Optr)&t_push_variable, (Optr)VAR_block_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend11541, (Optr)&t_send_ifFalse_, (Optr)PSend11542, (Optr)PBlock11543, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Method PMethod11537 = new_Method_with(PArray11538, empty_Array, empty_Array, PThreadedCode11539, 3, PAssign11540, PSend11542, nil_Const);
    
    MethodClosure MC_SMB_check_ifFail_ = new_MethodClosure((Method)PMethod11537, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_check_ifFail_, MC_SMB_check_ifFail_);
}


static void init_SMB_false() {
    Symbol SMB_false = new_Symbol(L"false");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
<<<<<<< HEAD
    Send PSend11582 = new_Send((Optr)self, SMB_be_, 1, (Optr)false_Const);
    Array PThreadedCode11581 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11582, (Optr)&t_method_return);
    Method PMethod11580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11581, 1, PSend11582);
    
    MethodClosure MC_SMB_false = new_MethodClosure((Method)PMethod11580, Testing_PexMatcher_Class);
=======
    Send PSend11548 = new_Send((Optr)self, SMB_be_, 1, (Optr)false_Const);
    Array PThreadedCode11547 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend11548, (Optr)&t_method_return);
    Method PMethod11546 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11547, 1, PSend11548);
    
    MethodClosure MC_SMB_false = new_MethodClosure((Method)PMethod11546, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_false, MC_SMB_false);
}


static void init_SMB_beKindOf_() {
    Symbol SMB_beKindOf_ = new_Symbol(L"beKindOf:");
    Variable VAR_aClass_0_0 = new_Variable_named(L"aClass", 0);
<<<<<<< HEAD
    Array PArray11584 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend11586 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_isKindOf_, 1, (Optr)VAR_aClass_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11588 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11590 = new_String(L" value of kind: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11590_Const = new_Constant((Optr)string_11590);
    // <<. 
    Send PSend11591 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11590_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11592 = new_Send((Optr)VAR_aClass_0_0, SMB_name, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11593 = new_Send((Optr)PSend11592, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11589 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11590, (Optr)&t_send1, (Optr)PSend11591, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send0, (Optr)PSend11592, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11593, (Optr)&t_method_return);
    Block PBlock11587 = new_Block_with(PArray11588, empty_Array, PThreadedCode11589, 2, PSend11591, PSend11593);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11594 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11586, (Optr)PBlock11587);
    Array PThreadedCode11585 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend11586, (Optr)&t_push_closure, (Optr)PBlock11587, (Optr)&t_send2, (Optr)PSend11594, (Optr)&t_method_return);
    Method PMethod11583 = new_Method_with(PArray11584, empty_Array, empty_Array, PThreadedCode11585, 1, PSend11594);
    
    MethodClosure MC_SMB_beKindOf_ = new_MethodClosure((Method)PMethod11583, Testing_PexMatcher_Class);
=======
    Array PArray11550 = new_Array_with(1, (Optr)VAR_aClass_0_0);
    Symbol SMB_isKindOf_ = new_Symbol(L"isKindOf:");
    // isKindOf:. 
    Send PSend11552 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_isKindOf_, 1, (Optr)VAR_aClass_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11554 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11556 = new_String(L" value of kind: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11556_Const = new_Constant((Optr)string_11556);
    // <<. 
    Send PSend11557 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11556_Const);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend11558 = new_Send((Optr)VAR_aClass_0_0, SMB_name, 0);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11559 = new_Send((Optr)PSend11558, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11555 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11556, (Optr)&t_send1, (Optr)PSend11557, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send0, (Optr)PSend11558, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11559, (Optr)&t_method_return);
    Block PBlock11553 = new_Block_with(PArray11554, empty_Array, PThreadedCode11555, 2, PSend11557, PSend11559);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11560 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11552, (Optr)PBlock11553);
    Array PThreadedCode11551 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aClass_0_0, (Optr)&t_send1, (Optr)PSend11552, (Optr)&t_push_closure, (Optr)PBlock11553, (Optr)&t_send2, (Optr)PSend11560, (Optr)&t_method_return);
    Method PMethod11549 = new_Method_with(PArray11550, empty_Array, empty_Array, PThreadedCode11551, 1, PSend11560);
    
    MethodClosure MC_SMB_beKindOf_ = new_MethodClosure((Method)PMethod11549, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_beKindOf_, MC_SMB_beKindOf_);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
<<<<<<< HEAD
    Send PSend11598 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_not, 0);
    Assign PAssign11597 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)PSend11598);
    Array PThreadedCode11596 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11597, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send0, (Optr)PSend11598, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11595 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11596, 2, PAssign11597, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod11595, Testing_PexMatcher_Class);
=======
    Send PSend11564 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_not, 0);
    Assign PAssign11563 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)PSend11564);
    Array PThreadedCode11562 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign11563, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send0, (Optr)PSend11564, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11561 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11562, 2, PAssign11563, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod11561, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
<<<<<<< HEAD
    Array PArray11600 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Assign PAssign11602 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)true_Const);
    Assign PAssign11603 = new_Assign((Optr)slot_Testing_PexMatcher_value, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11601 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign11602, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11603, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11599 = new_Method_with(PArray11600, empty_Array, empty_Array, PThreadedCode11601, 3, PAssign11602, PAssign11603, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod11599, Testing_PexMatcher_Class);
=======
    Array PArray11566 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Assign PAssign11568 = new_Assign((Optr)slot_Testing_PexMatcher_bool, (Optr)true_Const);
    Assign PAssign11569 = new_Assign((Optr)slot_Testing_PexMatcher_value, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11567 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign11568, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign11569, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11565 = new_Method_with(PArray11566, empty_Array, empty_Array, PThreadedCode11567, 3, PAssign11568, PAssign11569, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod11565, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_be_() {
    Symbol SMB_be_ = new_Symbol(L"be:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
<<<<<<< HEAD
    Array PArray11605 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11607 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__equals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11609 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11611 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11611_Const = new_Constant((Optr)string_11611);
    // <<. 
    Send PSend11612 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11611_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11613 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11610 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11611, (Optr)&t_send1, (Optr)PSend11612, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11613, (Optr)&t_method_return);
    Block PBlock11608 = new_Block_with(PArray11609, empty_Array, PThreadedCode11610, 2, PSend11612, PSend11613);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11614 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11607, (Optr)PBlock11608);
    Array PThreadedCode11606 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11607, (Optr)&t_push_closure, (Optr)PBlock11608, (Optr)&t_send2, (Optr)PSend11614, (Optr)&t_method_return);
    Method PMethod11604 = new_Method_with(PArray11605, empty_Array, empty_Array, PThreadedCode11606, 1, PSend11614);
    
    MethodClosure MC_SMB_be_ = new_MethodClosure((Method)PMethod11604, Testing_PexMatcher_Class);
=======
    Array PArray11571 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend11573 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__equals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11575 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11577 = new_String(L": ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11577_Const = new_Constant((Optr)string_11577);
    // <<. 
    Send PSend11578 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11577_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11579 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11576 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11577, (Optr)&t_send1, (Optr)PSend11578, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11579, (Optr)&t_method_return);
    Block PBlock11574 = new_Block_with(PArray11575, empty_Array, PThreadedCode11576, 2, PSend11578, PSend11579);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11580 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11573, (Optr)PBlock11574);
    Array PThreadedCode11572 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11573, (Optr)&t_push_closure, (Optr)PBlock11574, (Optr)&t_send2, (Optr)PSend11580, (Optr)&t_method_return);
    Method PMethod11570 = new_Method_with(PArray11571, empty_Array, empty_Array, PThreadedCode11572, 1, PSend11580);
    
    MethodClosure MC_SMB_be_ = new_MethodClosure((Method)PMethod11570, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_be_, MC_SMB_be_);
}


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
<<<<<<< HEAD
    Array PArray11616 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    String string_11621 = new_String(L"Didn't expect");
    Array PThreadedCode11620 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11621, (Optr)&t_block_return);
    Constant string_11621_Const = new_Constant((Optr)string_11621);
    Block PBlock11619 = new_Block_with(empty_Array, empty_Array, PThreadedCode11620, 1, string_11621_Const);
    String string_11624 = new_String(L"Expected");
    Array PThreadedCode11623 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11624, (Optr)&t_block_return);
    Constant string_11624_Const = new_Constant((Optr)string_11624);
    Block PBlock11622 = new_Block_with(empty_Array, empty_Array, PThreadedCode11623, 1, string_11624_Const);
    // ifFalse:ifTrue:. 
    Send PSend11618 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock11619, (Optr)PBlock11622);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend11625 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend11618);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11626 = new_Send((Optr)slot_Testing_PexMatcher_fail, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    String string_11627 = new_String(L" but got: ");
    Constant string_11627_Const = new_Constant((Optr)string_11627);
    // <<. 
    Send PSend11628 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_11627_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11629 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode11617 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend11618, (Optr)PBlock11619, (Optr)PBlock11622, (Optr)&t_send1, (Optr)PSend11625, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_fail, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11626, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11627, (Optr)&t_send1, (Optr)PSend11628, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11629, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11615 = new_Method_with(PArray11616, empty_Array, empty_Array, PThreadedCode11617, 5, PSend11625, PSend11626, PSend11628, PSend11629, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod11615, Testing_PexMatcher_Class);
=======
    Array PArray11582 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_ifFalse_ifTrue_ = new_Symbol(L"ifFalse:ifTrue:");
    String string_11587 = new_String(L"Didn't expect");
    Array PThreadedCode11586 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11587, (Optr)&t_block_return);
    Constant string_11587_Const = new_Constant((Optr)string_11587);
    Block PBlock11585 = new_Block_with(empty_Array, empty_Array, PThreadedCode11586, 1, string_11587_Const);
    String string_11590 = new_String(L"Expected");
    Array PThreadedCode11589 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push1, (Optr)string_11590, (Optr)&t_block_return);
    Constant string_11590_Const = new_Constant((Optr)string_11590);
    Block PBlock11588 = new_Block_with(empty_Array, empty_Array, PThreadedCode11589, 1, string_11590_Const);
    // ifFalse:ifTrue:. 
    Send PSend11584 = new_Send((Optr)slot_Testing_PexMatcher_bool, SMB_ifFalse_ifTrue_, 2, (Optr)PBlock11585, (Optr)PBlock11588);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend11591 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend11584);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend11592 = new_Send((Optr)slot_Testing_PexMatcher_fail, SMB_value_, 1, (Optr)VAR_aStream_0_0);
    String string_11593 = new_String(L" but got: ");
    Constant string_11593_Const = new_Constant((Optr)string_11593);
    // <<. 
    Send PSend11594 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_11593_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11595 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB_printOn_, 1, (Optr)VAR_aStream_0_0);
    Array PThreadedCode11583 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_bool, (Optr)&t_send_ifFalse_ifTrue_, (Optr)PSend11584, (Optr)PBlock11585, (Optr)PBlock11588, (Optr)&t_send1, (Optr)PSend11591, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_fail, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11592, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_11593, (Optr)&t_send1, (Optr)PSend11594, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_send1, (Optr)PSend11595, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11581 = new_Method_with(PArray11582, empty_Array, empty_Array, PThreadedCode11583, 5, PSend11591, PSend11592, PSend11594, PSend11595, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod11581, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_SMB_beSameAs_() {
    Symbol SMB_beSameAs_ = new_Symbol(L"beSameAs:");
    Variable VAR_expected_0_0 = new_Variable_named(L"expected", 0);
<<<<<<< HEAD
    Array PArray11631 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11633 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__pequals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11635 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11637 = new_String(L" pointer-equal value to: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11637_Const = new_Constant((Optr)string_11637);
    // <<. 
    Send PSend11638 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11637_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11639 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11636 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11637, (Optr)&t_send1, (Optr)PSend11638, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11639, (Optr)&t_method_return);
    Block PBlock11634 = new_Block_with(PArray11635, empty_Array, PThreadedCode11636, 2, PSend11638, PSend11639);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11640 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11633, (Optr)PBlock11634);
    Array PThreadedCode11632 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11633, (Optr)&t_push_closure, (Optr)PBlock11634, (Optr)&t_send2, (Optr)PSend11640, (Optr)&t_method_return);
    Method PMethod11630 = new_Method_with(PArray11631, empty_Array, empty_Array, PThreadedCode11632, 1, PSend11640);
    
    MethodClosure MC_SMB_beSameAs_ = new_MethodClosure((Method)PMethod11630, Testing_PexMatcher_Class);
=======
    Array PArray11597 = new_Array_with(1, (Optr)VAR_expected_0_0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend11599 = new_Send((Optr)slot_Testing_PexMatcher_value, SMB__pequals_, 1, (Optr)VAR_expected_0_0);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11601 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11603 = new_String(L" pointer-equal value to: ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11603_Const = new_Constant((Optr)string_11603);
    // <<. 
    Send PSend11604 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11603_Const);
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    // printOn:. 
    Send PSend11605 = new_Send((Optr)VAR_expected_0_0, SMB_printOn_, 1, (Optr)VAR_s_1_0);
    Array PThreadedCode11602 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11603, (Optr)&t_send1, (Optr)PSend11604, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_send1, (Optr)PSend11605, (Optr)&t_method_return);
    Block PBlock11600 = new_Block_with(PArray11601, empty_Array, PThreadedCode11602, 2, PSend11604, PSend11605);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11606 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11599, (Optr)PBlock11600);
    Array PThreadedCode11598 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_push_variable, (Optr)VAR_expected_0_0, (Optr)&t_send1, (Optr)PSend11599, (Optr)&t_push_closure, (Optr)PBlock11600, (Optr)&t_send2, (Optr)PSend11606, (Optr)&t_method_return);
    Method PMethod11596 = new_Method_with(PArray11597, empty_Array, empty_Array, PThreadedCode11598, 1, PSend11606);
    
    MethodClosure MC_SMB_beSameAs_ = new_MethodClosure((Method)PMethod11596, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_beSameAs_, MC_SMB_beSameAs_);
}


static void init_SMB_doesNotUnderstand_() {
    Symbol SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
<<<<<<< HEAD
    Array PArray11642 = new_Array_with(1, (Optr)VAR_message_0_0);
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    // sendTo:. 
    Send PSend11644 = new_Send((Optr)VAR_message_0_0, SMB_sendTo_, 1, (Optr)slot_Testing_PexMatcher_value);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11646 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11648 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11648_Const = new_Constant((Optr)string_11648);
    // <<. 
    Send PSend11649 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11648_Const);
    // <<. 
    Send PSend11650 = new_Send((Optr)PSend11649, SMB__shiftLeft_, 1, (Optr)VAR_message_0_0);
    Array PThreadedCode11647 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11648, (Optr)&t_send1, (Optr)PSend11649, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend11650, (Optr)&t_method_return);
    Block PBlock11645 = new_Block_with(PArray11646, empty_Array, PThreadedCode11647, 1, PSend11650);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11651 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11644, (Optr)PBlock11645);
    Array PThreadedCode11643 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_send1, (Optr)PSend11644, (Optr)&t_push_closure, (Optr)PBlock11645, (Optr)&t_send2, (Optr)PSend11651, (Optr)&t_method_return);
    Method PMethod11641 = new_Method_with(PArray11642, empty_Array, empty_Array, PThreadedCode11643, 1, PSend11651);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod11641, Testing_PexMatcher_Class);
=======
    Array PArray11608 = new_Array_with(1, (Optr)VAR_message_0_0);
    Symbol SMB_sendTo_ = new_Symbol(L"sendTo:");
    // sendTo:. 
    Send PSend11610 = new_Send((Optr)VAR_message_0_0, SMB_sendTo_, 1, (Optr)slot_Testing_PexMatcher_value);
    Variable VAR_s_1_0 = new_Variable_named(L"s", 1);
    Array PArray11612 = new_Array_with(1, (Optr)VAR_s_1_0);
    String string_11614 = new_String(L" ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_11614_Const = new_Constant((Optr)string_11614);
    // <<. 
    Send PSend11615 = new_Send((Optr)VAR_s_1_0, SMB__shiftLeft_, 1, (Optr)string_11614_Const);
    // <<. 
    Send PSend11616 = new_Send((Optr)PSend11615, SMB__shiftLeft_, 1, (Optr)VAR_message_0_0);
    Array PThreadedCode11613 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_s_1_0, (Optr)&t_push1, (Optr)string_11614, (Optr)&t_send1, (Optr)PSend11615, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send1, (Optr)PSend11616, (Optr)&t_method_return);
    Block PBlock11611 = new_Block_with(PArray11612, empty_Array, PThreadedCode11613, 1, PSend11616);
    Symbol SMB_check_ifFail_ = new_Symbol(L"check:ifFail:");
    // check:ifFail:. 
    Send PSend11617 = new_Send((Optr)self, SMB_check_ifFail_, 2, (Optr)PSend11610, (Optr)PBlock11611);
    Array PThreadedCode11609 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_slot, (Optr)slot_Testing_PexMatcher_value, (Optr)&t_send1, (Optr)PSend11610, (Optr)&t_push_closure, (Optr)PBlock11611, (Optr)&t_send2, (Optr)PSend11617, (Optr)&t_method_return);
    Method PMethod11607 = new_Method_with(PArray11608, empty_Array, empty_Array, PThreadedCode11609, 1, PSend11617);
    
    MethodClosure MC_SMB_doesNotUnderstand_ = new_MethodClosure((Method)PMethod11607, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_doesNotUnderstand_, MC_SMB_doesNotUnderstand_);
}


static void init_SMB_true() {
    Symbol SMB_true = new_Symbol(L"true");
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
<<<<<<< HEAD
    Send PSend11654 = new_Send((Optr)self, SMB_be_, 1, (Optr)true_Const);
    Array PThreadedCode11653 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend11654, (Optr)&t_method_return);
    Method PMethod11652 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11653, 1, PSend11654);
    
    MethodClosure MC_SMB_true = new_MethodClosure((Method)PMethod11652, Testing_PexMatcher_Class);
=======
    Send PSend11620 = new_Send((Optr)self, SMB_be_, 1, (Optr)true_Const);
    Array PThreadedCode11619 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend11620, (Optr)&t_method_return);
    Method PMethod11618 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11619, 1, PSend11620);
    
    MethodClosure MC_SMB_true = new_MethodClosure((Method)PMethod11618, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_true, MC_SMB_true);
}


static void init_SMB_expect_() {
    Symbol SMB_expect_ = new_Symbol(L"expect:");
    Variable VAR_aResult_0_0 = new_Variable_named(L"aResult", 0);
<<<<<<< HEAD
    Array PArray11656 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend11658 = new_Send((Optr)self, SMB_assert_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11657 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11658, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11655 = new_Method_with(PArray11656, empty_Array, empty_Array, PThreadedCode11657, 2, PSend11658, self);
    
    MethodClosure MC_SMB_expect_ = new_MethodClosure((Method)PMethod11655, Testing_PexMatcher_Class);
=======
    Array PArray11622 = new_Array_with(1, (Optr)VAR_aResult_0_0);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend11624 = new_Send((Optr)self, SMB_assert_, 1, (Optr)VAR_aResult_0_0);
    Array PThreadedCode11623 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aResult_0_0, (Optr)&t_send1, (Optr)PSend11624, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod11621 = new_Method_with(PArray11622, empty_Array, empty_Array, PThreadedCode11623, 2, PSend11624, self);
    
    MethodClosure MC_SMB_expect_ = new_MethodClosure((Method)PMethod11621, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_expect_, MC_SMB_expect_);
}


static void init_SMB_be() {
    Symbol SMB_be = new_Symbol(L"be");
<<<<<<< HEAD
    Array PThreadedCode11660 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod11659 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11660, 1, self);
    
    MethodClosure MC_SMB_be = new_MethodClosure((Method)PMethod11659, Testing_PexMatcher_Class);
=======
    Array PThreadedCode11626 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod11625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode11626, 1, self);
    
    MethodClosure MC_SMB_be = new_MethodClosure((Method)PMethod11625, Testing_PexMatcher_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Testing_PexMatcher_Class, SMB_be, MC_SMB_be);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_aValue_0_0 = new_Variable_named(L"aValue", 0);
<<<<<<< HEAD
    Array PArray11662 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper11664 = new_Super(SMB_new, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend11665 = new_Send((Optr)PSuper11664, SMB_initialize_, 1, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11663 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11664, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_send1, (Optr)PSend11665, (Optr)&t_method_return);
    Method PMethod11661 = new_Method_with(PArray11662, empty_Array, empty_Array, PThreadedCode11663, 1, PSend11665);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod11661, HEADER(Testing_PexMatcher_Class));
=======
    Array PArray11628 = new_Array_with(1, (Optr)VAR_aValue_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper11630 = new_Super(SMB_new, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend11631 = new_Send((Optr)PSuper11630, SMB_initialize_, 1, (Optr)VAR_aValue_0_0);
    Array PThreadedCode11629 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper11630, (Optr)&t_push_variable, (Optr)VAR_aValue_0_0, (Optr)&t_send1, (Optr)PSend11631, (Optr)&t_method_return);
    Method PMethod11627 = new_Method_with(PArray11628, empty_Array, empty_Array, PThreadedCode11629, 1, PSend11631);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod11627, HEADER(Testing_PexMatcher_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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