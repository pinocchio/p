#include <lib/class/Kernel/Number/SmallInteger.h>


Optr layout_Kernel_Number_SmallInteger_Class_class;


static void init_SMB_isNumber() {
    Symbol SMB_isNumber = new_Symbol(L"isNumber");
    Array PThreadedCode3634 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod3633 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3634, 1, true_Const);
    
    MethodClosure MC_SMB_isNumber = new_MethodClosure((Method)PMethod3633, SmallInt_Class);
    store_method(SmallInt_Class, SMB_isNumber, MC_SMB_isNumber);
}


static void init_SMB_timesRepeat_() {
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3636 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_count_0_1 = new_Variable_named(L"count", 0);
    Array PArray3637 = new_Array_with(1, (Optr)VAR_count_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3639 = new_Assign((Optr)VAR_count_0_1, (Optr)int_1_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3642 = new_Send((Optr)VAR_count_0_1, SMB__lt__equals_, 1, (Optr)self);
    Array PThreadedCode3641 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_count_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3642, (Optr)&t_block_return);
    Block PBlock3640 = new_Block_with(empty_Array, empty_Array, PThreadedCode3641, 1, PSend3642);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3645 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3647 = new_Send((Optr)VAR_count_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3646 = new_Assign((Optr)VAR_count_0_1, (Optr)PSend3647);
    Array PThreadedCode3644 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend3645, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3646, (Optr)&t_push_variable, (Optr)VAR_count_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3647, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3643 = new_Block_with(empty_Array, empty_Array, PThreadedCode3644, 2, PSend3645, PAssign3646);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3648 = new_Send((Optr)PBlock3640, SMB_whileTrue_, 1, (Optr)PBlock3643);
    Array PThreadedCode3638 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign3639, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3640, (Optr)&t_push_closure, (Optr)PBlock3643, (Optr)&t_send1, (Optr)PSend3648, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3635 = new_Method_with(PArray3636, PArray3637, empty_Array, PThreadedCode3638, 3, PAssign3639, PSend3648, self);
    
    MethodClosure MC_SMB_timesRepeat_ = new_MethodClosure((Method)PMethod3635, SmallInt_Class);
    store_method(SmallInt_Class, SMB_timesRepeat_, MC_SMB_timesRepeat_);
}


static void init_SMB_rem_() {
    Symbol SMB_rem_ = new_Symbol(L"rem:");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3650 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    // quo:. 
    Send PSend3652 = new_Send((Optr)self, SMB_quo_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend3653 = new_Send((Optr)PSend3652, SMB__times_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3654 = new_Send((Optr)self, SMB__minus_, 1, (Optr)PSend3653);
    Array PThreadedCode3651 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3652, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3653, (Optr)&t_send1, (Optr)PSend3654, (Optr)&t_method_return);
    Method PMethod3649 = new_Method_with(PArray3650, empty_Array, empty_Array, PThreadedCode3651, 1, PSend3654);
    
    MethodClosure MC_SMB_rem_ = new_MethodClosure((Method)PMethod3649, SmallInt_Class);
    store_method(SmallInt_Class, SMB_rem_, MC_SMB_rem_);
}


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    // minutes:. 
    Send PSend3657 = new_Send((Optr)Duration_classReference, SMB_minutes_, 1, (Optr)self);
    Array PThreadedCode3656 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3657, (Optr)&t_method_return);
    Method PMethod3655 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3656, 1, PSend3657);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod3655, SmallInt_Class);
    store_method(SmallInt_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend3660 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)self);
    Array PThreadedCode3659 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3660, (Optr)&t_method_return);
    Method PMethod3658 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3659, 1, PSend3660);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod3658, SmallInt_Class);
    store_method(SmallInt_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3662 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3664 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3663 = new_Array_with(1, (Optr)PAnnotation3664);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3666 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3665 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3666, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3661 = new_NativeMethod_with(PArray3662, empty_Array, PArray3663, PThreadedCode3665, 2, PSend3666, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod3661, SmallInt_Class);
    store_method(SmallInt_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_doTimes_() {
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3668 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_nextValue_0_1 = new_Variable_named(L"nextValue", 0);
    Array PArray3669 = new_Array_with(1, (Optr)VAR_nextValue_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3671 = new_Assign((Optr)VAR_nextValue_0_1, (Optr)int_1_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3674 = new_Send((Optr)VAR_nextValue_0_1, SMB__lt__equals_, 1, (Optr)self);
    Array PThreadedCode3673 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3674, (Optr)&t_block_return);
    Block PBlock3672 = new_Block_with(empty_Array, empty_Array, PThreadedCode3673, 1, PSend3674);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3677 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3679 = new_Send((Optr)VAR_nextValue_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3678 = new_Assign((Optr)VAR_nextValue_0_1, (Optr)PSend3679);
    Array PThreadedCode3676 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend3677, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3678, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3679, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3675 = new_Block_with(empty_Array, empty_Array, PThreadedCode3676, 2, PSend3677, PAssign3678);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3680 = new_Send((Optr)PBlock3672, SMB_whileTrue_, 1, (Optr)PBlock3675);
    Array PThreadedCode3670 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign3671, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3672, (Optr)&t_push_closure, (Optr)PBlock3675, (Optr)&t_send1, (Optr)PSend3680, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3667 = new_Method_with(PArray3668, PArray3669, empty_Array, PThreadedCode3670, 3, PAssign3671, PSend3680, self);
    
    MethodClosure MC_SMB_doTimes_ = new_MethodClosure((Method)PMethod3667, SmallInt_Class);
    store_method(SmallInt_Class, SMB_doTimes_, MC_SMB_doTimes_);
}


static void init_SMB_to_by_do_() {
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Variable VAR_stop_0_0 = new_Variable_named(L"stop", 0);
    Variable VAR_step_0_1 = new_Variable_named(L"step", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray3682 = new_Array_with(3, (Optr)VAR_stop_0_0, (Optr)VAR_step_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_nextValue_0_3 = new_Variable_named(L"nextValue", 0);
    Array PArray3683 = new_Array_with(1, (Optr)VAR_nextValue_0_3);
    Assign PAssign3685 = new_Assign((Optr)VAR_nextValue_0_3, (Optr)self);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend3686 = new_Send((Optr)VAR_step_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_3690 = new_String(L"step must be non-zero");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_3690_Const = new_Constant((Optr)string_3690);
    // error:. 
    Send PSend3691 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_3690_Const);
    Array PThreadedCode3689 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_3690, (Optr)&t_send1, (Optr)PSend3691, (Optr)&t_block_return);
    Block PBlock3688 = new_Block_with(empty_Array, empty_Array, PThreadedCode3689, 1, PSend3691);
    // ifTrue:. 
    Send PSend3687 = new_Send((Optr)PSend3686, SMB_ifTrue_, 1, (Optr)PBlock3688);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3692 = new_Send((Optr)VAR_step_0_1, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3698 = new_Send((Optr)VAR_stop_0_0, SMB__lt__equals_, 1, (Optr)VAR_nextValue_0_3);
    Array PThreadedCode3697 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_stop_0_0, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3698, (Optr)&t_block_return);
    Block PBlock3696 = new_Block_with(empty_Array, empty_Array, PThreadedCode3697, 1, PSend3698);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3701 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_nextValue_0_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3703 = new_Send((Optr)VAR_nextValue_0_3, SMB__plus_, 1, (Optr)VAR_step_0_1);
    Assign PAssign3702 = new_Assign((Optr)VAR_nextValue_0_3, (Optr)PSend3703);
    Array PThreadedCode3700 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3701, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3702, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_send1, (Optr)PSend3703, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3699 = new_Block_with(empty_Array, empty_Array, PThreadedCode3700, 2, PSend3701, PAssign3702);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3704 = new_Send((Optr)PBlock3696, SMB_whileTrue_, 1, (Optr)PBlock3699);
    Array PThreadedCode3695 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock3696, (Optr)&t_push_closure, (Optr)PBlock3699, (Optr)&t_send1, (Optr)PSend3704, (Optr)&t_block_return);
    Block PBlock3694 = new_Block_with(empty_Array, empty_Array, PThreadedCode3695, 1, PSend3704);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend3709 = new_Send((Optr)VAR_stop_0_0, SMB__gt__equals_, 1, (Optr)VAR_nextValue_0_3);
    Array PThreadedCode3708 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_stop_0_0, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3709, (Optr)&t_block_return);
    Block PBlock3707 = new_Block_with(empty_Array, empty_Array, PThreadedCode3708, 1, PSend3709);
    // value:. 
    Send PSend3712 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_nextValue_0_3);
    // +. 
    Send PSend3714 = new_Send((Optr)VAR_nextValue_0_3, SMB__plus_, 1, (Optr)VAR_step_0_1);
    Assign PAssign3713 = new_Assign((Optr)VAR_nextValue_0_3, (Optr)PSend3714);
    Array PThreadedCode3711 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3712, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3713, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_send1, (Optr)PSend3714, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3710 = new_Block_with(empty_Array, empty_Array, PThreadedCode3711, 2, PSend3712, PAssign3713);
    // whileTrue:. 
    Send PSend3715 = new_Send((Optr)PBlock3707, SMB_whileTrue_, 1, (Optr)PBlock3710);
    Array PThreadedCode3706 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock3707, (Optr)&t_push_closure, (Optr)PBlock3710, (Optr)&t_send1, (Optr)PSend3715, (Optr)&t_block_return);
    Block PBlock3705 = new_Block_with(empty_Array, empty_Array, PThreadedCode3706, 1, PSend3715);
    // ifTrue:ifFalse:. 
    Send PSend3693 = new_Send((Optr)PSend3692, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3694, (Optr)PBlock3705);
    Array PThreadedCode3684 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign3685, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3686, (Optr)&t_send_ifTrue_, (Optr)PSend3687, (Optr)PBlock3688, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3692, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3693, (Optr)PBlock3694, (Optr)PBlock3705, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3681 = new_Method_with(PArray3682, PArray3683, empty_Array, PThreadedCode3684, 4, PAssign3685, PSend3687, PSend3693, self);
    
    MethodClosure MC_SMB_to_by_do_ = new_MethodClosure((Method)PMethod3681, SmallInt_Class);
    store_method(SmallInt_Class, SMB_to_by_do_, MC_SMB_to_by_do_);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend3718 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)self);
    Array PThreadedCode3717 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3718, (Optr)&t_method_return);
    Method PMethod3716 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3717, 1, PSend3718);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod3716, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB_quo_() {
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3720 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3723 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend3725 = new_Send((Optr)self, SMB_negative, 0);
    // negative. 
    Send PSend3726 = new_Send((Optr)VAR_aSmallInt_0_0, SMB_negative, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend3727 = new_Send((Optr)PSend3725, SMB__pequals_, 1, (Optr)PSend3726);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__quotient_ = new_Symbol(L"//");
    // //. 
    Send PSend3731 = new_Send((Optr)self, SMB__quotient_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3732 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3731);
    Array PThreadedCode3730 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3731, (Optr)&t_send1, (Optr)PSend3732, (Optr)&t_block_return);
    Block PBlock3729 = new_Block_with(empty_Array, empty_Array, PThreadedCode3730, 1, PSend3732);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend3735 = new_Send((Optr)self, SMB_negated, 0);
    // //. 
    Send PSend3736 = new_Send((Optr)PSend3735, SMB__quotient_, 1, (Optr)VAR_aSmallInt_0_0);
    // negated. 
    Send PSend3737 = new_Send((Optr)PSend3736, SMB_negated, 0);
    // escape:. 
    Send PSend3738 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3737);
    Array PThreadedCode3734 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3735, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3736, (Optr)&t_send0, (Optr)PSend3737, (Optr)&t_send1, (Optr)PSend3738, (Optr)&t_block_return);
    Block PBlock3733 = new_Block_with(empty_Array, empty_Array, PThreadedCode3734, 1, PSend3738);
    // ifTrue:ifFalse:. 
    Send PSend3728 = new_Send((Optr)PSend3727, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3729, (Optr)PBlock3733);
    Array PThreadedCode3724 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3725, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send0, (Optr)PSend3726, (Optr)&t_send1, (Optr)PSend3727, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3728, (Optr)PBlock3729, (Optr)PBlock3733, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock3722 = new_Block_with(PArray3723, empty_Array, PThreadedCode3724, 2, PSend3728, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3739 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3722);
    Array PThreadedCode3721 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3722, (Optr)&t_send1, (Optr)PSend3739, (Optr)&t_method_return);
    Method PMethod3719 = new_Method_with(PArray3720, empty_Array, empty_Array, PThreadedCode3721, 1, PSend3739);
    
    MethodClosure MC_SMB_quo_ = new_MethodClosure((Method)PMethod3719, SmallInt_Class);
    store_method(SmallInt_Class, SMB_quo_, MC_SMB_quo_);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3741 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3743 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__lt_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3742 = new_Array_with(1, (Optr)PAnnotation3743);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3745 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3744 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3745, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3740 = new_NativeMethod_with(PArray3741, empty_Array, PArray3742, PThreadedCode3744, 2, PSend3745, self);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PNativeMethod3740, SmallInt_Class);
    store_method(SmallInt_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3747 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend3749 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend3750 = new_Send((Optr)PSend3749, SMB_not, 0);
    Array PThreadedCode3748 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3749, (Optr)&t_send0, (Optr)PSend3750, (Optr)&t_method_return);
    Method PMethod3746 = new_Method_with(PArray3747, empty_Array, empty_Array, PThreadedCode3748, 1, PSend3750);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod3746, SmallInt_Class);
    store_method(SmallInt_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_SMB_identityHash() {
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    Array PThreadedCode3752 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3751 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3752, 1, self);
    
    MethodClosure MC_SMB_identityHash = new_MethodClosure((Method)PMethod3751, SmallInt_Class);
    store_method(SmallInt_Class, SMB_identityHash, MC_SMB_identityHash);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray3754 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend3756 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend3757 = new_Send((Optr)VAR_aStream_0_0, SMB_writeAll_, 1, (Optr)PSend3756);
    Array PThreadedCode3755 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3756, (Optr)&t_send1, (Optr)PSend3757, (Optr)&t_method_return);
    Method PMethod3753 = new_Method_with(PArray3754, empty_Array, empty_Array, PThreadedCode3755, 1, PSend3757);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod3753, SmallInt_Class);
    store_method(SmallInt_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3759 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3761 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__plus_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3760 = new_Array_with(1, (Optr)PAnnotation3761);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3763 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3762 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3763, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3758 = new_NativeMethod_with(PArray3759, empty_Array, PArray3760, PThreadedCode3762, 2, PSend3763, self);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PNativeMethod3758, SmallInt_Class);
    store_method(SmallInt_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__modulo_() {
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3765 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3767 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__modulo_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3766 = new_Array_with(1, (Optr)PAnnotation3767);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3769 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3768 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3769, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3764 = new_NativeMethod_with(PArray3765, empty_Array, PArray3766, PThreadedCode3768, 2, PSend3769, self);
    
    MethodClosure MC_SMB__modulo_ = new_MethodClosure((Method)PNativeMethod3764, SmallInt_Class);
    store_method(SmallInt_Class, SMB__modulo_, MC_SMB__modulo_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3771 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3773 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__minus_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3772 = new_Array_with(1, (Optr)PAnnotation3773);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3775 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3774 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3775, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3770 = new_NativeMethod_with(PArray3771, empty_Array, PArray3772, PThreadedCode3774, 2, PSend3775, self);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PNativeMethod3770, SmallInt_Class);
    store_method(SmallInt_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3777 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3779 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__shiftLeft_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3778 = new_Array_with(1, (Optr)PAnnotation3779);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3781 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3780 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3781, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3776 = new_NativeMethod_with(PArray3777, empty_Array, PArray3778, PThreadedCode3780, 2, PSend3781, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PNativeMethod3776, SmallInt_Class);
    store_method(SmallInt_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_asInteger() {
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    Array PThreadedCode3783 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3782 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3783, 1, self);
    
    MethodClosure MC_SMB_asInteger = new_MethodClosure((Method)PMethod3782, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asInteger, MC_SMB_asInteger);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray3785 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSmallInt_ = new_Symbol(L"visitSmallInt:");
    // visitSmallInt:. 
    Send PSend3787 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSmallInt_, 1, (Optr)self);
    Array PThreadedCode3786 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3787, (Optr)&t_method_return);
    Method PMethod3784 = new_Method_with(PArray3785, empty_Array, empty_Array, PThreadedCode3786, 1, PSend3787);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod3784, SmallInt_Class);
    store_method(SmallInt_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB__quotient_() {
    Symbol SMB__quotient_ = new_Symbol(L"//");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3789 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3791 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__quotient_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3790 = new_Array_with(1, (Optr)PAnnotation3791);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3793 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3792 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3793, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3788 = new_NativeMethod_with(PArray3789, empty_Array, PArray3790, PThreadedCode3792, 2, PSend3793, self);
    
    MethodClosure MC_SMB__quotient_ = new_MethodClosure((Method)PNativeMethod3788, SmallInt_Class);
    store_method(SmallInt_Class, SMB__quotient_, MC_SMB__quotient_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3795 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3797 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__and_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3796 = new_Array_with(1, (Optr)PAnnotation3797);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3799 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3798 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3799, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3794 = new_NativeMethod_with(PArray3795, empty_Array, PArray3796, PThreadedCode3798, 2, PSend3799, self);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PNativeMethod3794, SmallInt_Class);
    store_method(SmallInt_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_to_do_() {
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    Variable VAR_stop_0_0 = new_Variable_named(L"stop", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3801 = new_Array_with(2, (Optr)VAR_stop_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray3802 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign3804 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)self);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3807 = new_Send((Optr)VAR_nextValue_0_2, SMB__lt__equals_, 1, (Optr)VAR_stop_0_0);
    Array PThreadedCode3806 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_stop_0_0, (Optr)&t_send1, (Optr)PSend3807, (Optr)&t_block_return);
    Block PBlock3805 = new_Block_with(empty_Array, empty_Array, PThreadedCode3806, 1, PSend3807);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3810 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_nextValue_0_2);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3812 = new_Send((Optr)VAR_nextValue_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3811 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend3812);
    Array PThreadedCode3809 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_send1, (Optr)PSend3810, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3811, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3812, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3808 = new_Block_with(empty_Array, empty_Array, PThreadedCode3809, 2, PSend3810, PAssign3811);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3813 = new_Send((Optr)PBlock3805, SMB_whileTrue_, 1, (Optr)PBlock3808);
    Array PThreadedCode3803 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign3804, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3805, (Optr)&t_push_closure, (Optr)PBlock3808, (Optr)&t_send1, (Optr)PSend3813, (Optr)&t_method_return);
    Method PMethod3800 = new_Method_with(PArray3801, PArray3802, empty_Array, PThreadedCode3803, 2, PAssign3804, PSend3813);
    
    MethodClosure MC_SMB_to_do_ = new_MethodClosure((Method)PMethod3800, SmallInt_Class);
    store_method(SmallInt_Class, SMB_to_do_, MC_SMB_to_do_);
}


static void init_SMB_abs() {
    Symbol SMB_abs = new_Symbol(L"abs");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3817 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend3819 = new_Send((Optr)self, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend3823 = new_Send((Optr)self, SMB_negated, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3824 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3823);
    Array PThreadedCode3822 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3823, (Optr)&t_send1, (Optr)PSend3824, (Optr)&t_block_return);
    Block PBlock3821 = new_Block_with(empty_Array, empty_Array, PThreadedCode3822, 1, PSend3824);
    // escape:. 
    Send PSend3827 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode3826 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3827, (Optr)&t_block_return);
    Block PBlock3825 = new_Block_with(empty_Array, empty_Array, PThreadedCode3826, 1, PSend3827);
    // ifTrue:ifFalse:. 
    Send PSend3820 = new_Send((Optr)PSend3819, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3821, (Optr)PBlock3825);
    Array PThreadedCode3818 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3819, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3820, (Optr)PBlock3821, (Optr)PBlock3825, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock3816 = new_Block_with(PArray3817, empty_Array, PThreadedCode3818, 2, PSend3820, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3828 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3816);
    Array PThreadedCode3815 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3816, (Optr)&t_send1, (Optr)PSend3828, (Optr)&t_method_return);
    Method PMethod3814 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3815, 1, PSend3828);
    
    MethodClosure MC_SMB_abs = new_MethodClosure((Method)PMethod3814, SmallInt_Class);
    store_method(SmallInt_Class, SMB_abs, MC_SMB_abs);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    // hours:. 
    Send PSend3831 = new_Send((Optr)Duration_classReference, SMB_hours_, 1, (Optr)self);
    Array PThreadedCode3830 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3831, (Optr)&t_method_return);
    Method PMethod3829 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3830, 1, PSend3831);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod3829, SmallInt_Class);
    store_method(SmallInt_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray3833 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend3835 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend3836 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend3835);
    Array PThreadedCode3834 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3835, (Optr)&t_send1, (Optr)PSend3836, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3832 = new_Method_with(PArray3833, empty_Array, empty_Array, PThreadedCode3834, 2, PSend3836, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod3832, SmallInt_Class);
    store_method(SmallInt_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Array PThreadedCode3838 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3838, 1, self);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod3837, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_truncated() {
    Symbol SMB_truncated = new_Symbol(L"truncated");
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // quo:. 
    Send PSend3841 = new_Send((Optr)self, SMB_quo_, 1, (Optr)int_1_Const);
    Array PThreadedCode3840 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3841, (Optr)&t_method_return);
    Method PMethod3839 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3840, 1, PSend3841);
    
    MethodClosure MC_SMB_truncated = new_MethodClosure((Method)PMethod3839, SmallInt_Class);
    store_method(SmallInt_Class, SMB_truncated, MC_SMB_truncated);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_days_ = new_Symbol(L"days:");
    // days:. 
    Send PSend3844 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)self);
    Array PThreadedCode3843 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3844, (Optr)&t_method_return);
    Method PMethod3842 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3843, 1, PSend3844);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod3842, SmallInt_Class);
    store_method(SmallInt_Class, SMB_days, MC_SMB_days);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3847 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asString, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3846 = new_Array_with(1, (Optr)PAnnotation3847);
    Super PSuper3849 = new_Super(SMB_asString, 0);
    Array PThreadedCode3848 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3849, (Optr)&t_method_return);
    NativeMethod PNativeMethod3845 = new_NativeMethod_with(empty_Array, empty_Array, PArray3846, PThreadedCode3848, 1, PSuper3849);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PNativeMethod3845, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_asCharacter() {
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3852 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asCharacter, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3851 = new_Array_with(1, (Optr)PAnnotation3852);
    Super PSuper3854 = new_Super(SMB_asCharacter, 0);
    Array PThreadedCode3853 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3854, (Optr)&t_method_return);
    NativeMethod PNativeMethod3850 = new_NativeMethod_with(empty_Array, empty_Array, PArray3851, PThreadedCode3853, 1, PSuper3854);
    
    MethodClosure MC_SMB_asCharacter = new_MethodClosure((Method)PNativeMethod3850, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asCharacter, MC_SMB_asCharacter);
}


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3856 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3858 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__or_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3857 = new_Array_with(1, (Optr)PAnnotation3858);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3860 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3859 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3860, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3855 = new_NativeMethod_with(PArray3856, empty_Array, PArray3857, PThreadedCode3859, 2, PSend3860, self);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PNativeMethod3855, SmallInt_Class);
    store_method(SmallInt_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3862 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3864 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__gt_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3863 = new_Array_with(1, (Optr)PAnnotation3864);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3866 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3865 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3866, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3861 = new_NativeMethod_with(PArray3862, empty_Array, PArray3863, PThreadedCode3865, 2, PSend3866, self);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PNativeMethod3861, SmallInt_Class);
    store_method(SmallInt_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_fac() {
    Symbol SMB_fac = new_Symbol(L"fac");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3870 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend3872 = new_Send((Optr)self, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3876 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_1_Const);
    Array PThreadedCode3875 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3876, (Optr)&t_block_return);
    Block PBlock3874 = new_Block_with(empty_Array, empty_Array, PThreadedCode3875, 1, PSend3876);
    // ifFalse:. 
    Send PSend3873 = new_Send((Optr)PSend3872, SMB_ifFalse_, 1, (Optr)PBlock3874);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3877 = new_Send((Optr)self, SMB__minus_, 1, (Optr)int_1_Const);
    // fac. 
    Send PSend3878 = new_Send((Optr)PSend3877, SMB_fac, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend3879 = new_Send((Optr)self, SMB__times_, 1, (Optr)PSend3878);
    Array PThreadedCode3871 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3872, (Optr)&t_send_ifFalse_, (Optr)PSend3873, (Optr)PBlock3874, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3877, (Optr)&t_send0, (Optr)PSend3878, (Optr)&t_send1, (Optr)PSend3879, (Optr)&t_method_return);
    Block PBlock3869 = new_Block_with(PArray3870, empty_Array, PThreadedCode3871, 2, PSend3873, PSend3879);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3880 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3869);
    Array PThreadedCode3868 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3869, (Optr)&t_send1, (Optr)PSend3880, (Optr)&t_method_return);
    Method PMethod3867 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3868, 1, PSend3880);
    
    MethodClosure MC_SMB_fac = new_MethodClosure((Method)PMethod3867, SmallInt_Class);
    store_method(SmallInt_Class, SMB_fac, MC_SMB_fac);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Array PThreadedCode3882 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3881 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3882, 1, self);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod3881, SmallInt_Class);
    store_method(SmallInt_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_fib() {
    Symbol SMB_fib = new_Symbol(L"fib");
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend3885 = new_Send((Optr)self, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3888 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Block PBlock3887 = new_Block_with(empty_Array, empty_Array, PThreadedCode3888, 1, int_1_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3891 = new_Send((Optr)self, SMB__minus_, 1, (Optr)int_1_Const);
    // fib. 
    Send PSend3892 = new_Send((Optr)PSend3891, SMB_fib, 0);
    // -. 
    Send PSend3893 = new_Send((Optr)self, SMB__minus_, 1, (Optr)int_2_Const);
    // fib. 
    Send PSend3894 = new_Send((Optr)PSend3893, SMB_fib, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3895 = new_Send((Optr)PSend3892, SMB__plus_, 1, (Optr)PSend3894);
    Array PThreadedCode3890 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3891, (Optr)&t_send0, (Optr)PSend3892, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3893, (Optr)&t_send0, (Optr)PSend3894, (Optr)&t_send1, (Optr)PSend3895, (Optr)&t_block_return);
    Block PBlock3889 = new_Block_with(empty_Array, empty_Array, PThreadedCode3890, 1, PSend3895);
    // ifTrue:ifFalse:. 
    Send PSend3886 = new_Send((Optr)PSend3885, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3887, (Optr)PBlock3889);
    Array PThreadedCode3884 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3885, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3886, (Optr)PBlock3887, (Optr)PBlock3889, (Optr)&t_method_return);
    Method PMethod3883 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3884, 1, PSend3886);
    
    MethodClosure MC_SMB_fib = new_MethodClosure((Method)PMethod3883, SmallInt_Class);
    store_method(SmallInt_Class, SMB_fib, MC_SMB_fib);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3897 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3899 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend3900 = new_Send((Optr)PSend3899, SMB_not, 0);
    Array PThreadedCode3898 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3899, (Optr)&t_send0, (Optr)PSend3900, (Optr)&t_method_return);
    Method PMethod3896 = new_Method_with(PArray3897, empty_Array, empty_Array, PThreadedCode3898, 1, PSend3900);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod3896, SmallInt_Class);
    store_method(SmallInt_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3903 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)self);
    Array PThreadedCode3902 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3903, (Optr)&t_method_return);
    Method PMethod3901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3902, 1, PSend3903);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod3901, SmallInt_Class);
    store_method(SmallInt_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_min_() {
    Symbol SMB_min_ = new_Symbol(L"min:");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray3905 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3907 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3910 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock3909 = new_Block_with(empty_Array, empty_Array, PThreadedCode3910, 1, self);
    Array PThreadedCode3912 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_block_return);
    Block PBlock3911 = new_Block_with(empty_Array, empty_Array, PThreadedCode3912, 1, VAR_aMagnitude_0_0);
    // ifTrue:ifFalse:. 
    Send PSend3908 = new_Send((Optr)PSend3907, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3909, (Optr)PBlock3911);
    Array PThreadedCode3906 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend3907, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3908, (Optr)PBlock3909, (Optr)PBlock3911, (Optr)&t_method_return);
    Method PMethod3904 = new_Method_with(PArray3905, empty_Array, empty_Array, PThreadedCode3906, 1, PSend3908);
    
    MethodClosure MC_SMB_min_ = new_MethodClosure((Method)PMethod3904, SmallInt_Class);
    store_method(SmallInt_Class, SMB_min_, MC_SMB_min_);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend3915 = new_Send((Optr)self, SMB__lt_, 1, (Optr)int_0_Const);
    Array PThreadedCode3914 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3915, (Optr)&t_method_return);
    Method PMethod3913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3914, 1, PSend3915);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod3913, SmallInt_Class);
    store_method(SmallInt_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_max_() {
    Symbol SMB_max_ = new_Symbol(L"max:");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray3917 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend3919 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3922 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock3921 = new_Block_with(empty_Array, empty_Array, PThreadedCode3922, 1, self);
    Array PThreadedCode3924 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_block_return);
    Block PBlock3923 = new_Block_with(empty_Array, empty_Array, PThreadedCode3924, 1, VAR_aMagnitude_0_0);
    // ifTrue:ifFalse:. 
    Send PSend3920 = new_Send((Optr)PSend3919, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3921, (Optr)PBlock3923);
    Array PThreadedCode3918 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend3919, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3920, (Optr)PBlock3921, (Optr)PBlock3923, (Optr)&t_method_return);
    Method PMethod3916 = new_Method_with(PArray3917, empty_Array, empty_Array, PThreadedCode3918, 1, PSend3920);
    
    MethodClosure MC_SMB_max_ = new_MethodClosure((Method)PMethod3916, SmallInt_Class);
    store_method(SmallInt_Class, SMB_max_, MC_SMB_max_);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >=. 
    Send PSend3927 = new_Send((Optr)self, SMB__gt__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode3926 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3927, (Optr)&t_method_return);
    Method PMethod3925 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3926, 1, PSend3927);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod3925, SmallInt_Class);
    store_method(SmallInt_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB_asFloat() {
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3930 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asFloat, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3929 = new_Array_with(1, (Optr)PAnnotation3930);
    Super PSuper3932 = new_Super(SMB_asFloat, 0);
    Array PThreadedCode3931 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3932, (Optr)&t_method_return);
    NativeMethod PNativeMethod3928 = new_NativeMethod_with(empty_Array, empty_Array, PArray3929, PThreadedCode3931, 1, PSuper3932);
    
    MethodClosure MC_SMB_asFloat = new_MethodClosure((Method)PNativeMethod3928, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asFloat, MC_SMB_asFloat);
}


static void init_SMB__shiftRight_() {
    Symbol SMB__shiftRight_ = new_Symbol(L">>");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3934 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3936 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__shiftRight_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3935 = new_Array_with(1, (Optr)PAnnotation3936);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3938 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3937 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3938, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3933 = new_NativeMethod_with(PArray3934, empty_Array, PArray3935, PThreadedCode3937, 2, PSend3938, self);
    
    MethodClosure MC_SMB__shiftRight_ = new_MethodClosure((Method)PNativeMethod3933, SmallInt_Class);
    store_method(SmallInt_Class, SMB__shiftRight_, MC_SMB__shiftRight_);
}


static void init_SMB_adaptToNumber_andSend_() {
    Symbol SMB_adaptToNumber_andSend_ = new_Symbol(L"adaptToNumber:andSend:");
    Variable VAR_rcvr_0_0 = new_Variable_named(L"rcvr", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray3940 = new_Array_with(2, (Optr)VAR_rcvr_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend3942 = new_Send((Optr)self, SMB_asNumber, 0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend3943 = new_Send((Optr)VAR_rcvr_0_0, SMB_perform_with_, 2, (Optr)VAR_selector_0_1, (Optr)PSend3942);
    Array PThreadedCode3941 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_rcvr_0_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3942, (Optr)&t_send2, (Optr)PSend3943, (Optr)&t_method_return);
    Method PMethod3939 = new_Method_with(PArray3940, empty_Array, empty_Array, PThreadedCode3941, 1, PSend3943);
    
    MethodClosure MC_SMB_adaptToNumber_andSend_ = new_MethodClosure((Method)PMethod3939, SmallInt_Class);
    store_method(SmallInt_Class, SMB_adaptToNumber_andSend_, MC_SMB_adaptToNumber_andSend_);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3945 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3947 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__times_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3946 = new_Array_with(1, (Optr)PAnnotation3947);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3949 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3948 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3949, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3944 = new_NativeMethod_with(PArray3945, empty_Array, PArray3946, PThreadedCode3948, 2, PSend3949, self);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PNativeMethod3944, SmallInt_Class);
    store_method(SmallInt_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3951 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3953 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__divide_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3952 = new_Array_with(1, (Optr)PAnnotation3953);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3955 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3954 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3955, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3950 = new_NativeMethod_with(PArray3951, empty_Array, PArray3952, PThreadedCode3954, 2, PSend3955, self);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PNativeMethod3950, SmallInt_Class);
    store_method(SmallInt_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB__notEquals_() {
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3957 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3959 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__notEquals_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3958 = new_Array_with(1, (Optr)PAnnotation3959);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3961 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3960 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3961, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3956 = new_NativeMethod_with(PArray3957, empty_Array, PArray3958, PThreadedCode3960, 2, PSend3961, self);
    
    MethodClosure MC_SMB__notEquals_ = new_MethodClosure((Method)PNativeMethod3956, SmallInt_Class);
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