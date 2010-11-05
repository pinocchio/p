#include <lib/class/Kernel/Number/SmallInteger.h>


Optr layout_Kernel_Number_SmallInteger_Class_class;


static void init_SMB_isNumber() {
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    Array PThreadedCode3633 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod3632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3633, 1, true_Const);
    
    MethodClosure MC_SMB_isNumber = new_MethodClosure((Method)PMethod3632, SmallInt_Class);
    store_method(SmallInt_Class, SMB_isNumber, MC_SMB_isNumber);
}


static void init_SMB_timesRepeat_() {
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3635 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_count_0_1 = new_Variable_named(L"count", 0);
    Array PArray3636 = new_Array_with(1, (Optr)VAR_count_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3638 = new_Assign((Optr)VAR_count_0_1, (Optr)int_1_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3641 = new_Send((Optr)VAR_count_0_1, SMB__lt__equals_, 1, (Optr)self);
    Array PThreadedCode3640 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_count_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3641, (Optr)&t_block_return);
    Block PBlock3639 = new_Block_with(empty_Array, empty_Array, PThreadedCode3640, 1, PSend3641);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3644 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3646 = new_Send((Optr)VAR_count_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3645 = new_Assign((Optr)VAR_count_0_1, (Optr)PSend3646);
    Array PThreadedCode3643 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend3644, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3645, (Optr)&t_push_variable, (Optr)VAR_count_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3646, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3642 = new_Block_with(empty_Array, empty_Array, PThreadedCode3643, 2, PSend3644, PAssign3645);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3647 = new_Send((Optr)PBlock3639, SMB_whileTrue_, 1, (Optr)PBlock3642);
    Array PThreadedCode3637 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign3638, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3639, (Optr)&t_push_closure, (Optr)PBlock3642, (Optr)&t_send1, (Optr)PSend3647, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3634 = new_Method_with(PArray3635, PArray3636, empty_Array, PThreadedCode3637, 3, PAssign3638, PSend3647, self);
    
    MethodClosure MC_SMB_timesRepeat_ = new_MethodClosure((Method)PMethod3634, SmallInt_Class);
    store_method(SmallInt_Class, SMB_timesRepeat_, MC_SMB_timesRepeat_);
}


static void init_SMB_rem_() {
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3649 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend3651 = new_Send((Optr)self, SMB_quo_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend3652 = new_Send((Optr)PSend3651, SMB__times_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3653 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend3652);
    Array PThreadedCode3650 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3651, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3652, (Optr)&t_send1, (Optr)PSend3653, (Optr)&t_method_return);
    Method PMethod3648 = new_Method_with(PArray3649, empty_Array, empty_Array, PThreadedCode3650, 1, PSend3653);
    
    MethodClosure MC_SMB_rem_ = new_MethodClosure((Method)PMethod3648, SmallInt_Class);
    store_method(SmallInt_Class, SMB_rem_, MC_SMB_rem_);
}


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    // minutes:. 
    Send PSend3656 = new_Send((Optr)Duration_classReference, SMB_minutes_, 1, (Optr)self);
    Array PThreadedCode3655 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3656, (Optr)&t_method_return);
    Method PMethod3654 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3655, 1, PSend3656);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod3654, SmallInt_Class);
    store_method(SmallInt_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend3659 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)self);
    Array PThreadedCode3658 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3659, (Optr)&t_method_return);
    Method PMethod3657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3658, 1, PSend3659);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod3657, SmallInt_Class);
    store_method(SmallInt_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3661 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3663 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3662 = new_Array_with(1, (Optr)PAnnotation3663);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3665 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3664 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3665, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3660 = new_NativeMethod_with(PArray3661, empty_Array, PArray3662, PThreadedCode3664, 2, PSend3665, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod3660, SmallInt_Class);
    store_method(SmallInt_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_doTimes_() {
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3667 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_nextValue_0_1 = new_Variable_named(L"nextValue", 0);
    Array PArray3668 = new_Array_with(1, (Optr)VAR_nextValue_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3670 = new_Assign((Optr)VAR_nextValue_0_1, (Optr)int_1_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3673 = new_Send((Optr)VAR_nextValue_0_1, SMB__lt__equals_, 1, (Optr)self);
    Array PThreadedCode3672 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3673, (Optr)&t_block_return);
    Block PBlock3671 = new_Block_with(empty_Array, empty_Array, PThreadedCode3672, 1, PSend3673);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3676 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3678 = new_Send((Optr)VAR_nextValue_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3677 = new_Assign((Optr)VAR_nextValue_0_1, (Optr)PSend3678);
    Array PThreadedCode3675 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend3676, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3677, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3678, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3674 = new_Block_with(empty_Array, empty_Array, PThreadedCode3675, 2, PSend3676, PAssign3677);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3679 = new_Send((Optr)PBlock3671, SMB_whileTrue_, 1, (Optr)PBlock3674);
    Array PThreadedCode3669 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign3670, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3671, (Optr)&t_push_closure, (Optr)PBlock3674, (Optr)&t_send1, (Optr)PSend3679, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3666 = new_Method_with(PArray3667, PArray3668, empty_Array, PThreadedCode3669, 3, PAssign3670, PSend3679, self);
    
    MethodClosure MC_SMB_doTimes_ = new_MethodClosure((Method)PMethod3666, SmallInt_Class);
    store_method(SmallInt_Class, SMB_doTimes_, MC_SMB_doTimes_);
}


static void init_SMB_to_by_do_() {
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Variable VAR_stop_0_0 = new_Variable_named(L"stop", 0);
    Variable VAR_step_0_1 = new_Variable_named(L"step", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray3681 = new_Array_with(3, (Optr)VAR_stop_0_0, (Optr)VAR_step_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_nextValue_0_3 = new_Variable_named(L"nextValue", 0);
    Array PArray3682 = new_Array_with(1, (Optr)VAR_nextValue_0_3);
    Assign PAssign3684 = new_Assign((Optr)VAR_nextValue_0_3, (Optr)self);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend3685 = new_Send((Optr)VAR_step_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_3689 = new_String(L"step must be non-zero");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_3689_Const = new_Constant((Optr)string_3689);
    // error:. 
    Send PSend3690 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_3689_Const);
    Array PThreadedCode3688 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_3689, (Optr)&t_send1, (Optr)PSend3690, (Optr)&t_block_return);
    Block PBlock3687 = new_Block_with(empty_Array, empty_Array, PThreadedCode3688, 1, PSend3690);
    // ifTrue:. 
    Send PSend3686 = new_Send((Optr)PSend3685, SMB_ifTrue_, 1, (Optr)PBlock3687);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3691 = new_Send((Optr)VAR_step_0_1, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3697 = new_Send((Optr)VAR_stop_0_0, SMB__lt__equals_, 1, (Optr)VAR_nextValue_0_3);
    Array PThreadedCode3696 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_stop_0_0, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3697, (Optr)&t_block_return);
    Block PBlock3695 = new_Block_with(empty_Array, empty_Array, PThreadedCode3696, 1, PSend3697);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3700 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_nextValue_0_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3702 = new_Send((Optr)VAR_nextValue_0_3, SMB__plus_, 1, (Optr)VAR_step_0_1);
    Assign PAssign3701 = new_Assign((Optr)VAR_nextValue_0_3, (Optr)PSend3702);
    Array PThreadedCode3699 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3700, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3701, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_send1, (Optr)PSend3702, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3698 = new_Block_with(empty_Array, empty_Array, PThreadedCode3699, 2, PSend3700, PAssign3701);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3703 = new_Send((Optr)PBlock3695, SMB_whileTrue_, 1, (Optr)PBlock3698);
    Array PThreadedCode3694 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock3695, (Optr)&t_push_closure, (Optr)PBlock3698, (Optr)&t_send1, (Optr)PSend3703, (Optr)&t_block_return);
    Block PBlock3693 = new_Block_with(empty_Array, empty_Array, PThreadedCode3694, 1, PSend3703);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend3708 = new_Send((Optr)VAR_stop_0_0, SMB__gt__equals_, 1, (Optr)VAR_nextValue_0_3);
    Array PThreadedCode3707 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_stop_0_0, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3708, (Optr)&t_block_return);
    Block PBlock3706 = new_Block_with(empty_Array, empty_Array, PThreadedCode3707, 1, PSend3708);
    // value:. 
    Send PSend3711 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_nextValue_0_3);
    // +. 
    Send PSend3713 = new_Send((Optr)VAR_nextValue_0_3, SMB__plus_, 1, (Optr)VAR_step_0_1);
    Assign PAssign3712 = new_Assign((Optr)VAR_nextValue_0_3, (Optr)PSend3713);
    Array PThreadedCode3710 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3711, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3712, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_send1, (Optr)PSend3713, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3709 = new_Block_with(empty_Array, empty_Array, PThreadedCode3710, 2, PSend3711, PAssign3712);
    // whileTrue:. 
    Send PSend3714 = new_Send((Optr)PBlock3706, SMB_whileTrue_, 1, (Optr)PBlock3709);
    Array PThreadedCode3705 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock3706, (Optr)&t_push_closure, (Optr)PBlock3709, (Optr)&t_send1, (Optr)PSend3714, (Optr)&t_block_return);
    Block PBlock3704 = new_Block_with(empty_Array, empty_Array, PThreadedCode3705, 1, PSend3714);
    // ifTrue:ifFalse:. 
    Send PSend3692 = new_Send((Optr)PSend3691, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3693, (Optr)PBlock3704);
    Array PThreadedCode3683 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign3684, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3685, (Optr)&t_send_ifTrue_, (Optr)PSend3686, (Optr)PBlock3687, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3691, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3692, (Optr)PBlock3693, (Optr)PBlock3704, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3680 = new_Method_with(PArray3681, PArray3682, empty_Array, PThreadedCode3683, 4, PAssign3684, PSend3686, PSend3692, self);
    
    MethodClosure MC_SMB_to_by_do_ = new_MethodClosure((Method)PMethod3680, SmallInt_Class);
    store_method(SmallInt_Class, SMB_to_by_do_, MC_SMB_to_by_do_);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend3717 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)self);
    Array PThreadedCode3716 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3717, (Optr)&t_method_return);
    Method PMethod3715 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3716, 1, PSend3717);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod3715, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_quo_() {
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3719 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3722 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend3724 = new_Send((Optr)self, SMB_negative, 0);
    // negative. 
    Send PSend3725 = new_Send((Optr)VAR_aSmallInt_0_0, SMB_negative, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend3726 = new_Send((Optr)PSend3724, SMB__pequals_, 1, (Optr)PSend3725);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__quotient_ = new_Symbol(L"//");
    // //. 
    Send PSend3730 = new_Send((Optr)self, SMB__quotient_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3731 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3730);
    Array PThreadedCode3729 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3730, (Optr)&t_send1, (Optr)PSend3731, (Optr)&t_block_return);
    Block PBlock3728 = new_Block_with(empty_Array, empty_Array, PThreadedCode3729, 1, PSend3731);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend3734 = new_Send((Optr)self, SMB_negated, 0);
    // //. 
    Send PSend3735 = new_Send((Optr)PSend3734, SMB__quotient_, 1, (Optr)VAR_aSmallInt_0_0);
    // negated. 
    Send PSend3736 = new_Send((Optr)PSend3735, SMB_negated, 0);
    // escape:. 
    Send PSend3737 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3736);
    Array PThreadedCode3733 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3734, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3735, (Optr)&t_send0, (Optr)PSend3736, (Optr)&t_send1, (Optr)PSend3737, (Optr)&t_block_return);
    Block PBlock3732 = new_Block_with(empty_Array, empty_Array, PThreadedCode3733, 1, PSend3737);
    // ifTrue:ifFalse:. 
    Send PSend3727 = new_Send((Optr)PSend3726, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3728, (Optr)PBlock3732);
    Array PThreadedCode3723 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3724, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send0, (Optr)PSend3725, (Optr)&t_send1, (Optr)PSend3726, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3727, (Optr)PBlock3728, (Optr)PBlock3732, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock3721 = new_Block_with(PArray3722, empty_Array, PThreadedCode3723, 2, PSend3727, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3738 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3721);
    Array PThreadedCode3720 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3721, (Optr)&t_send1, (Optr)PSend3738, (Optr)&t_method_return);
    Method PMethod3718 = new_Method_with(PArray3719, empty_Array, empty_Array, PThreadedCode3720, 1, PSend3738);
    
    MethodClosure MC_SMB_quo_ = new_MethodClosure((Method)PMethod3718, SmallInt_Class);
    store_method(SmallInt_Class, SMB_quo_, MC_SMB_quo_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3740 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3742 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__lt_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3741 = new_Array_with(1, (Optr)PAnnotation3742);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3744 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3743 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3744, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3739 = new_NativeMethod_with(PArray3740, empty_Array, PArray3741, PThreadedCode3743, 2, PSend3744, self);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PNativeMethod3739, SmallInt_Class);
    store_method(SmallInt_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3746 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend3748 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend3749 = new_Send((Optr)PSend3748, SMB_not, 0);
    Array PThreadedCode3747 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3748, (Optr)&t_send0, (Optr)PSend3749, (Optr)&t_method_return);
    Method PMethod3745 = new_Method_with(PArray3746, empty_Array, empty_Array, PThreadedCode3747, 1, PSend3749);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod3745, SmallInt_Class);
    store_method(SmallInt_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_SMB_identityHash() {
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    Array PThreadedCode3751 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3750 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3751, 1, self);
    
    MethodClosure MC_SMB_identityHash = new_MethodClosure((Method)PMethod3750, SmallInt_Class);
    store_method(SmallInt_Class, SMB_identityHash, MC_SMB_identityHash);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray3753 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend3755 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend3756 = new_Send((Optr)VAR_aStream_0_0, SMB_writeAll_, 1, (Optr)PSend3755);
    Array PThreadedCode3754 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3755, (Optr)&t_send1, (Optr)PSend3756, (Optr)&t_method_return);
    Method PMethod3752 = new_Method_with(PArray3753, empty_Array, empty_Array, PThreadedCode3754, 1, PSend3756);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod3752, SmallInt_Class);
    store_method(SmallInt_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3758 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3760 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__plus_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3759 = new_Array_with(1, (Optr)PAnnotation3760);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3762 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3761 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3762, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3757 = new_NativeMethod_with(PArray3758, empty_Array, PArray3759, PThreadedCode3761, 2, PSend3762, self);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PNativeMethod3757, SmallInt_Class);
    store_method(SmallInt_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__modulo_() {
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3764 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3766 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__modulo_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3765 = new_Array_with(1, (Optr)PAnnotation3766);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3768 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3767 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3768, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3763 = new_NativeMethod_with(PArray3764, empty_Array, PArray3765, PThreadedCode3767, 2, PSend3768, self);
    
    MethodClosure MC_SMB__modulo_ = new_MethodClosure((Method)PNativeMethod3763, SmallInt_Class);
    store_method(SmallInt_Class, SMB__modulo_, MC_SMB__modulo_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3770 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3772 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__minus_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3771 = new_Array_with(1, (Optr)PAnnotation3772);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3774 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3773 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3774, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3769 = new_NativeMethod_with(PArray3770, empty_Array, PArray3771, PThreadedCode3773, 2, PSend3774, self);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PNativeMethod3769, SmallInt_Class);
    store_method(SmallInt_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3776 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3778 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__shiftLeft_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3777 = new_Array_with(1, (Optr)PAnnotation3778);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3780 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3779 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3780, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3775 = new_NativeMethod_with(PArray3776, empty_Array, PArray3777, PThreadedCode3779, 2, PSend3780, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PNativeMethod3775, SmallInt_Class);
    store_method(SmallInt_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_asInteger() {
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    Array PThreadedCode3782 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3781 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3782, 1, self);
    
    MethodClosure MC_SMB_asInteger = new_MethodClosure((Method)PMethod3781, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asInteger, MC_SMB_asInteger);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray3784 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSmallInt_ = new_Symbol(L"visitSmallInt:");
    // visitSmallInt:. 
    Send PSend3786 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSmallInt_, 1, (Optr)self);
    Array PThreadedCode3785 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3786, (Optr)&t_method_return);
    Method PMethod3783 = new_Method_with(PArray3784, empty_Array, empty_Array, PThreadedCode3785, 1, PSend3786);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod3783, SmallInt_Class);
    store_method(SmallInt_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB__quotient_() {
    Symbol SMB__quotient_ = new_Symbol(L"//");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3788 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3790 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__quotient_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3789 = new_Array_with(1, (Optr)PAnnotation3790);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3792 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3791 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3792, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3787 = new_NativeMethod_with(PArray3788, empty_Array, PArray3789, PThreadedCode3791, 2, PSend3792, self);
    
    MethodClosure MC_SMB__quotient_ = new_MethodClosure((Method)PNativeMethod3787, SmallInt_Class);
    store_method(SmallInt_Class, SMB__quotient_, MC_SMB__quotient_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3794 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3796 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__and_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3795 = new_Array_with(1, (Optr)PAnnotation3796);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3798 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3797 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3798, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3793 = new_NativeMethod_with(PArray3794, empty_Array, PArray3795, PThreadedCode3797, 2, PSend3798, self);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PNativeMethod3793, SmallInt_Class);
    store_method(SmallInt_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_to_do_() {
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    Variable VAR_stop_0_0 = new_Variable_named(L"stop", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3800 = new_Array_with(2, (Optr)VAR_stop_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray3801 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign3803 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)self);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3806 = new_Send((Optr)VAR_nextValue_0_2, SMB__lt__equals_, 1, (Optr)VAR_stop_0_0);
    Array PThreadedCode3805 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_stop_0_0, (Optr)&t_send1, (Optr)PSend3806, (Optr)&t_block_return);
    Block PBlock3804 = new_Block_with(empty_Array, empty_Array, PThreadedCode3805, 1, PSend3806);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3809 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_nextValue_0_2);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3811 = new_Send((Optr)VAR_nextValue_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3810 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend3811);
    Array PThreadedCode3808 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_send1, (Optr)PSend3809, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3810, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3811, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3807 = new_Block_with(empty_Array, empty_Array, PThreadedCode3808, 2, PSend3809, PAssign3810);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3812 = new_Send((Optr)PBlock3804, SMB_whileTrue_, 1, (Optr)PBlock3807);
    Array PThreadedCode3802 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign3803, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3804, (Optr)&t_push_closure, (Optr)PBlock3807, (Optr)&t_send1, (Optr)PSend3812, (Optr)&t_method_return);
    Method PMethod3799 = new_Method_with(PArray3800, PArray3801, empty_Array, PThreadedCode3802, 2, PAssign3803, PSend3812);
    
    MethodClosure MC_SMB_to_do_ = new_MethodClosure((Method)PMethod3799, SmallInt_Class);
    store_method(SmallInt_Class, SMB_to_do_, MC_SMB_to_do_);
}


static void init_SMB_abs() {
    Symbol SMB_abs = new_Symbol(L"abs");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3816 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend3818 = new_Send((Optr)self, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend3822 = new_Send((Optr)self, SMB_negated, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3823 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3822);
    Array PThreadedCode3821 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3822, (Optr)&t_send1, (Optr)PSend3823, (Optr)&t_block_return);
    Block PBlock3820 = new_Block_with(empty_Array, empty_Array, PThreadedCode3821, 1, PSend3823);
    // escape:. 
    Send PSend3826 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode3825 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3826, (Optr)&t_block_return);
    Block PBlock3824 = new_Block_with(empty_Array, empty_Array, PThreadedCode3825, 1, PSend3826);
    // ifTrue:ifFalse:. 
    Send PSend3819 = new_Send((Optr)PSend3818, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3820, (Optr)PBlock3824);
    Array PThreadedCode3817 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3818, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3819, (Optr)PBlock3820, (Optr)PBlock3824, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock3815 = new_Block_with(PArray3816, empty_Array, PThreadedCode3817, 2, PSend3819, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3827 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3815);
    Array PThreadedCode3814 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3815, (Optr)&t_send1, (Optr)PSend3827, (Optr)&t_method_return);
    Method PMethod3813 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3814, 1, PSend3827);
    
    MethodClosure MC_SMB_abs = new_MethodClosure((Method)PMethod3813, SmallInt_Class);
    store_method(SmallInt_Class, SMB_abs, MC_SMB_abs);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    // hours:. 
    Send PSend3830 = new_Send((Optr)Duration_classReference, SMB_hours_, 1, (Optr)self);
    Array PThreadedCode3829 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3830, (Optr)&t_method_return);
    Method PMethod3828 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3829, 1, PSend3830);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod3828, SmallInt_Class);
    store_method(SmallInt_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray3832 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend3834 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend3835 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend3834);
    Array PThreadedCode3833 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3834, (Optr)&t_send1, (Optr)PSend3835, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3831 = new_Method_with(PArray3832, empty_Array, empty_Array, PThreadedCode3833, 2, PSend3835, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod3831, SmallInt_Class);
    store_method(SmallInt_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Array PThreadedCode3837 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3836 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3837, 1, self);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod3836, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_truncated() {
    Symbol SMB_truncated = new_Symbol(L"truncated");
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // quo:. 
    Send PSend3840 = new_Send((Optr)self, SMB_quo_, 1, (Optr)int_1_Const);
    Array PThreadedCode3839 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3840, (Optr)&t_method_return);
    Method PMethod3838 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3839, 1, PSend3840);
    
    MethodClosure MC_SMB_truncated = new_MethodClosure((Method)PMethod3838, SmallInt_Class);
    store_method(SmallInt_Class, SMB_truncated, MC_SMB_truncated);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_days_ = new_Symbol(L"days:");
    // days:. 
    Send PSend3843 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)self);
    Array PThreadedCode3842 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3843, (Optr)&t_method_return);
    Method PMethod3841 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3842, 1, PSend3843);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod3841, SmallInt_Class);
    store_method(SmallInt_Class, SMB_days, MC_SMB_days);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3846 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asString, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3845 = new_Array_with(1, (Optr)PAnnotation3846);
    Super PSuper3848 = new_Super(SMB_asString, 0);
    Array PThreadedCode3847 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3848, (Optr)&t_method_return);
    NativeMethod PNativeMethod3844 = new_NativeMethod_with(empty_Array, empty_Array, PArray3845, PThreadedCode3847, 1, PSuper3848);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PNativeMethod3844, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_asCharacter() {
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3851 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asCharacter, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3850 = new_Array_with(1, (Optr)PAnnotation3851);
    Super PSuper3853 = new_Super(SMB_asCharacter, 0);
    Array PThreadedCode3852 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3853, (Optr)&t_method_return);
    NativeMethod PNativeMethod3849 = new_NativeMethod_with(empty_Array, empty_Array, PArray3850, PThreadedCode3852, 1, PSuper3853);
    
    MethodClosure MC_SMB_asCharacter = new_MethodClosure((Method)PNativeMethod3849, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asCharacter, MC_SMB_asCharacter);
}


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3855 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3857 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__or_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3856 = new_Array_with(1, (Optr)PAnnotation3857);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3859 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3858 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3859, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3854 = new_NativeMethod_with(PArray3855, empty_Array, PArray3856, PThreadedCode3858, 2, PSend3859, self);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PNativeMethod3854, SmallInt_Class);
    store_method(SmallInt_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3861 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3863 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__gt_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3862 = new_Array_with(1, (Optr)PAnnotation3863);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3865 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3864 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3865, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3860 = new_NativeMethod_with(PArray3861, empty_Array, PArray3862, PThreadedCode3864, 2, PSend3865, self);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PNativeMethod3860, SmallInt_Class);
    store_method(SmallInt_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_fac() {
    Symbol SMB_fac = new_Symbol(L"fac");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3869 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend3871 = new_Send((Optr)self, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3875 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_1_Const);
    Array PThreadedCode3874 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3875, (Optr)&t_block_return);
    Block PBlock3873 = new_Block_with(empty_Array, empty_Array, PThreadedCode3874, 1, PSend3875);
    // ifFalse:. 
    Send PSend3872 = new_Send((Optr)PSend3871, SMB_ifFalse_, 1, (Optr)PBlock3873);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3876 = new_Send((Optr)self, SMB__minus_, 1, (Optr)int_1_Const);
    // fac. 
    Send PSend3877 = new_Send((Optr)PSend3876, SMB_fac, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend3878 = new_Send((Optr)self, SMB__times_, 1, (Optr)PSend3877);
    Array PThreadedCode3870 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3871, (Optr)&t_send_ifFalse_, (Optr)PSend3872, (Optr)PBlock3873, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3876, (Optr)&t_send0, (Optr)PSend3877, (Optr)&t_send1, (Optr)PSend3878, (Optr)&t_method_return);
    Block PBlock3868 = new_Block_with(PArray3869, empty_Array, PThreadedCode3870, 2, PSend3872, PSend3878);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3879 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3868);
    Array PThreadedCode3867 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3868, (Optr)&t_send1, (Optr)PSend3879, (Optr)&t_method_return);
    Method PMethod3866 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3867, 1, PSend3879);
    
    MethodClosure MC_SMB_fac = new_MethodClosure((Method)PMethod3866, SmallInt_Class);
    store_method(SmallInt_Class, SMB_fac, MC_SMB_fac);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Array PThreadedCode3881 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3881, 1, self);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod3880, SmallInt_Class);
    store_method(SmallInt_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_fib() {
    Symbol SMB_fib = new_Symbol(L"fib");
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend3884 = new_Send((Optr)self, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3887 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Block PBlock3886 = new_Block_with(empty_Array, empty_Array, PThreadedCode3887, 1, int_1_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3890 = new_Send((Optr)self, SMB__minus_, 1, (Optr)int_1_Const);
    // fib. 
    Send PSend3891 = new_Send((Optr)PSend3890, SMB_fib, 0);
    // -. 
    Send PSend3892 = new_Send((Optr)self, SMB__minus_, 1, (Optr)int_2_Const);
    // fib. 
    Send PSend3893 = new_Send((Optr)PSend3892, SMB_fib, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3894 = new_Send((Optr)PSend3891, SMB__plus_, 1, (Optr)PSend3893);
    Array PThreadedCode3889 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3890, (Optr)&t_send0, (Optr)PSend3891, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3892, (Optr)&t_send0, (Optr)PSend3893, (Optr)&t_send1, (Optr)PSend3894, (Optr)&t_block_return);
    Block PBlock3888 = new_Block_with(empty_Array, empty_Array, PThreadedCode3889, 1, PSend3894);
    // ifTrue:ifFalse:. 
    Send PSend3885 = new_Send((Optr)PSend3884, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3886, (Optr)PBlock3888);
    Array PThreadedCode3883 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3884, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3885, (Optr)PBlock3886, (Optr)PBlock3888, (Optr)&t_method_return);
    Method PMethod3882 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3883, 1, PSend3885);
    
    MethodClosure MC_SMB_fib = new_MethodClosure((Method)PMethod3882, SmallInt_Class);
    store_method(SmallInt_Class, SMB_fib, MC_SMB_fib);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3896 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3898 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend3899 = new_Send((Optr)PSend3898, SMB_not, 0);
    Array PThreadedCode3897 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3898, (Optr)&t_send0, (Optr)PSend3899, (Optr)&t_method_return);
    Method PMethod3895 = new_Method_with(PArray3896, empty_Array, empty_Array, PThreadedCode3897, 1, PSend3899);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod3895, SmallInt_Class);
    store_method(SmallInt_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3902 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)self);
    Array PThreadedCode3901 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3902, (Optr)&t_method_return);
    Method PMethod3900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3901, 1, PSend3902);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod3900, SmallInt_Class);
    store_method(SmallInt_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_min_() {
    Symbol SMB_min_ = new_Symbol(L"min:");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray3904 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3906 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3909 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock3908 = new_Block_with(empty_Array, empty_Array, PThreadedCode3909, 1, self);
    Array PThreadedCode3911 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_block_return);
    Block PBlock3910 = new_Block_with(empty_Array, empty_Array, PThreadedCode3911, 1, VAR_aMagnitude_0_0);
    // ifTrue:ifFalse:. 
    Send PSend3907 = new_Send((Optr)PSend3906, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3908, (Optr)PBlock3910);
    Array PThreadedCode3905 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend3906, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3907, (Optr)PBlock3908, (Optr)PBlock3910, (Optr)&t_method_return);
    Method PMethod3903 = new_Method_with(PArray3904, empty_Array, empty_Array, PThreadedCode3905, 1, PSend3907);
    
    MethodClosure MC_SMB_min_ = new_MethodClosure((Method)PMethod3903, SmallInt_Class);
    store_method(SmallInt_Class, SMB_min_, MC_SMB_min_);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend3914 = new_Send((Optr)self, SMB__lt_, 1, (Optr)int_0_Const);
    Array PThreadedCode3913 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3914, (Optr)&t_method_return);
    Method PMethod3912 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3913, 1, PSend3914);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod3912, SmallInt_Class);
    store_method(SmallInt_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_max_() {
    Symbol SMB_max_ = new_Symbol(L"max:");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray3916 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend3918 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3921 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock3920 = new_Block_with(empty_Array, empty_Array, PThreadedCode3921, 1, self);
    Array PThreadedCode3923 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_block_return);
    Block PBlock3922 = new_Block_with(empty_Array, empty_Array, PThreadedCode3923, 1, VAR_aMagnitude_0_0);
    // ifTrue:ifFalse:. 
    Send PSend3919 = new_Send((Optr)PSend3918, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3920, (Optr)PBlock3922);
    Array PThreadedCode3917 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend3918, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3919, (Optr)PBlock3920, (Optr)PBlock3922, (Optr)&t_method_return);
    Method PMethod3915 = new_Method_with(PArray3916, empty_Array, empty_Array, PThreadedCode3917, 1, PSend3919);
    
    MethodClosure MC_SMB_max_ = new_MethodClosure((Method)PMethod3915, SmallInt_Class);
    store_method(SmallInt_Class, SMB_max_, MC_SMB_max_);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >=. 
    Send PSend3926 = new_Send((Optr)self, SMB__gt__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode3925 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3926, (Optr)&t_method_return);
    Method PMethod3924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3925, 1, PSend3926);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod3924, SmallInt_Class);
    store_method(SmallInt_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB_asFloat() {
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3929 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asFloat, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3928 = new_Array_with(1, (Optr)PAnnotation3929);
    Super PSuper3931 = new_Super(SMB_asFloat, 0);
    Array PThreadedCode3930 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3931, (Optr)&t_method_return);
    NativeMethod PNativeMethod3927 = new_NativeMethod_with(empty_Array, empty_Array, PArray3928, PThreadedCode3930, 1, PSuper3931);
    
    MethodClosure MC_SMB_asFloat = new_MethodClosure((Method)PNativeMethod3927, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asFloat, MC_SMB_asFloat);
}


static void init_SMB__shiftRight_() {
    Symbol SMB__shiftRight_ = new_Symbol(L">>");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3933 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3935 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__shiftRight_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3934 = new_Array_with(1, (Optr)PAnnotation3935);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3937 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3936 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3937, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3932 = new_NativeMethod_with(PArray3933, empty_Array, PArray3934, PThreadedCode3936, 2, PSend3937, self);
    
    MethodClosure MC_SMB__shiftRight_ = new_MethodClosure((Method)PNativeMethod3932, SmallInt_Class);
    store_method(SmallInt_Class, SMB__shiftRight_, MC_SMB__shiftRight_);
}


static void init_SMB_adaptToNumber_andSend_() {
    Symbol SMB_adaptToNumber_andSend_ = new_Symbol(L"adaptToNumber:andSend:");
    Variable VAR_rcvr_0_0 = new_Variable_named(L"rcvr", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray3939 = new_Array_with(2, (Optr)VAR_rcvr_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend3941 = new_Send((Optr)self, SMB_asNumber, 0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend3942 = new_Send((Optr)VAR_rcvr_0_0, SMB_perform_with_, 2, (Optr)VAR_selector_0_1, (Optr)PSend3941);
    Array PThreadedCode3940 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_rcvr_0_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3941, (Optr)&t_send2, (Optr)PSend3942, (Optr)&t_method_return);
    Method PMethod3938 = new_Method_with(PArray3939, empty_Array, empty_Array, PThreadedCode3940, 1, PSend3942);
    
    MethodClosure MC_SMB_adaptToNumber_andSend_ = new_MethodClosure((Method)PMethod3938, SmallInt_Class);
    store_method(SmallInt_Class, SMB_adaptToNumber_andSend_, MC_SMB_adaptToNumber_andSend_);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3944 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3946 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__times_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3945 = new_Array_with(1, (Optr)PAnnotation3946);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3948 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3947 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3948, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3943 = new_NativeMethod_with(PArray3944, empty_Array, PArray3945, PThreadedCode3947, 2, PSend3948, self);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PNativeMethod3943, SmallInt_Class);
    store_method(SmallInt_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3950 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3952 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__divide_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3951 = new_Array_with(1, (Optr)PAnnotation3952);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3954 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3953 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3954, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3949 = new_NativeMethod_with(PArray3950, empty_Array, PArray3951, PThreadedCode3953, 2, PSend3954, self);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PNativeMethod3949, SmallInt_Class);
    store_method(SmallInt_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB__notEquals_() {
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3956 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3958 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__notEquals_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3957 = new_Array_with(1, (Optr)PAnnotation3958);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3960 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3959 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3960, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3955 = new_NativeMethod_with(PArray3956, empty_Array, PArray3957, PThreadedCode3959, 2, PSend3960, self);
    
    MethodClosure MC_SMB__notEquals_ = new_MethodClosure((Method)PNativeMethod3955, SmallInt_Class);
    store_method(SmallInt_Class, SMB__notEquals_, MC_SMB__notEquals_);
}

void init_Kernel_Number_SmallInteger_layout() {
    layout_Kernel_Number_SmallInteger_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Number_SmallInteger_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Number_SmallInteger_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Number_SmallInteger_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Number_SmallInteger_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Number_SmallInteger_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SmallInteger = new_Symbol(L"SmallInteger");
    Class_set_superclass(SmallInt_Class, Object_Class);
    HEADER(SmallInt_Class)->layout = layout_Kernel_Number_SmallInteger_Class_class;
    SmallInt_Class->name = SMB_SmallInteger;
    
}

void init_Kernel_Number_SmallInteger_methods() {
    init_SMB_isNumber();
    init_SMB_timesRepeat_();
    init_SMB_rem_();
    init_SMB_minutes();
    init_SMB_seconds();
    init_SMB__equals_();
    init_SMB_doTimes_();
    init_SMB_to_by_do_();
    init_SMB_asDuration();
    init_SMB_quo_();
    init_SMB__lt_();
    init_SMB__lt__equals_();
    init_SMB_identityHash();
    init_SMB_putOn_();
    init_SMB__plus_();
    init_SMB__modulo_();
    init_SMB__minus_();
    init_SMB__shiftLeft_();
    init_SMB_asInteger();
    init_SMB_accept_();
    init_SMB__quotient_();
    init_SMB__and_();
    init_SMB_to_do_();
    init_SMB_abs();
    init_SMB_hours();
    init_SMB_printOn_();
    init_SMB_asNumber();
    init_SMB_truncated();
    init_SMB_days();
    init_SMB_asString();
    init_SMB_asCharacter();
    init_SMB__or_();
    init_SMB__gt_();
    init_SMB_fac();
    init_SMB_hash();
    init_SMB_fib();
    init_SMB__gt__equals_();
    init_SMB_negated();
    init_SMB_min_();
    init_SMB_negative();
    init_SMB_max_();
    init_SMB_positive();
    init_SMB_asFloat();
    init_SMB__shiftRight_();
    init_SMB_adaptToNumber_andSend_();
    init_SMB__times_();
    init_SMB__divide_();
    init_SMB__notEquals_();
    
}