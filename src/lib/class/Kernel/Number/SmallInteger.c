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


static void init_SMB__notEquals_() {
    Symbol SMB__notEquals_ = new_Symbol(L"~=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3656 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3658 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__notEquals_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3657 = new_Array_with(1, (Optr)PAnnotation3658);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3660 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3659 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3660, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3655 = new_NativeMethod_with(PArray3656, empty_Array, PArray3657, PThreadedCode3659, 2, PSend3660, self);
    
    MethodClosure MC_SMB__notEquals_ = new_MethodClosure((Method)PNativeMethod3655, SmallInt_Class);
    store_method(SmallInt_Class, SMB__notEquals_, MC_SMB__notEquals_);
}


static void init_SMB_to_by_do_() {
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Variable VAR_stop_0_0 = new_Variable_named(L"stop", 0);
    Variable VAR_step_0_1 = new_Variable_named(L"step", 0);
    Variable VAR_aBlock_0_2 = new_Variable_named(L"aBlock", 0);
    Array PArray3662 = new_Array_with(3, (Optr)VAR_stop_0_0, (Optr)VAR_step_0_1, (Optr)VAR_aBlock_0_2);
    Variable VAR_nextValue_0_3 = new_Variable_named(L"nextValue", 0);
    Array PArray3663 = new_Array_with(1, (Optr)VAR_nextValue_0_3);
    Assign PAssign3665 = new_Assign((Optr)VAR_nextValue_0_3, (Optr)self);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend3666 = new_Send((Optr)VAR_step_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_3670 = new_String(L"step must be non-zero");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_3670_Const = new_Constant((Optr)string_3670);
    // error:. 
    Send PSend3671 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_3670_Const);
    Array PThreadedCode3669 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_3670, (Optr)&t_send1, (Optr)PSend3671, (Optr)&t_block_return);
    Block PBlock3668 = new_Block_with(empty_Array, empty_Array, PThreadedCode3669, 1, PSend3671);
    // ifTrue:. 
    Send PSend3667 = new_Send((Optr)PSend3666, SMB_ifTrue_, 1, (Optr)PBlock3668);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3672 = new_Send((Optr)VAR_step_0_1, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3678 = new_Send((Optr)VAR_stop_0_0, SMB__lt__equals_, 1, (Optr)VAR_nextValue_0_3);
    Array PThreadedCode3677 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_stop_0_0, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3678, (Optr)&t_block_return);
    Block PBlock3676 = new_Block_with(empty_Array, empty_Array, PThreadedCode3677, 1, PSend3678);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3681 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_nextValue_0_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3683 = new_Send((Optr)VAR_nextValue_0_3, SMB__plus_, 1, (Optr)VAR_step_0_1);
    Assign PAssign3682 = new_Assign((Optr)VAR_nextValue_0_3, (Optr)PSend3683);
    Array PThreadedCode3680 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3681, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3682, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_send1, (Optr)PSend3683, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3679 = new_Block_with(empty_Array, empty_Array, PThreadedCode3680, 2, PSend3681, PAssign3682);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3684 = new_Send((Optr)PBlock3676, SMB_whileTrue_, 1, (Optr)PBlock3679);
    Array PThreadedCode3675 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock3676, (Optr)&t_push_closure, (Optr)PBlock3679, (Optr)&t_send1, (Optr)PSend3684, (Optr)&t_block_return);
    Block PBlock3674 = new_Block_with(empty_Array, empty_Array, PThreadedCode3675, 1, PSend3684);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend3689 = new_Send((Optr)VAR_stop_0_0, SMB__gt__equals_, 1, (Optr)VAR_nextValue_0_3);
    Array PThreadedCode3688 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_stop_0_0, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3689, (Optr)&t_block_return);
    Block PBlock3687 = new_Block_with(empty_Array, empty_Array, PThreadedCode3688, 1, PSend3689);
    // value:. 
    Send PSend3692 = new_Send((Optr)VAR_aBlock_0_2, SMB_value_, 1, (Optr)VAR_nextValue_0_3);
    // +. 
    Send PSend3694 = new_Send((Optr)VAR_nextValue_0_3, SMB__plus_, 1, (Optr)VAR_step_0_1);
    Assign PAssign3693 = new_Assign((Optr)VAR_nextValue_0_3, (Optr)PSend3694);
    Array PThreadedCode3691 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_2, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_send1, (Optr)PSend3692, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3693, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_3, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_send1, (Optr)PSend3694, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3690 = new_Block_with(empty_Array, empty_Array, PThreadedCode3691, 2, PSend3692, PAssign3693);
    // whileTrue:. 
    Send PSend3695 = new_Send((Optr)PBlock3687, SMB_whileTrue_, 1, (Optr)PBlock3690);
    Array PThreadedCode3686 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock3687, (Optr)&t_push_closure, (Optr)PBlock3690, (Optr)&t_send1, (Optr)PSend3695, (Optr)&t_block_return);
    Block PBlock3685 = new_Block_with(empty_Array, empty_Array, PThreadedCode3686, 1, PSend3695);
    // ifTrue:ifFalse:. 
    Send PSend3673 = new_Send((Optr)PSend3672, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3674, (Optr)PBlock3685);
    Array PThreadedCode3664 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign3665, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3666, (Optr)&t_send_ifTrue_, (Optr)PSend3667, (Optr)PBlock3668, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_step_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3672, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3673, (Optr)PBlock3674, (Optr)PBlock3685, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3661 = new_Method_with(PArray3662, PArray3663, empty_Array, PThreadedCode3664, 4, PAssign3665, PSend3667, PSend3673, self);
    
    MethodClosure MC_SMB_to_by_do_ = new_MethodClosure((Method)PMethod3661, SmallInt_Class);
    store_method(SmallInt_Class, SMB_to_by_do_, MC_SMB_to_by_do_);
}


static void init_SMB_asDuration() {
    Symbol SMB_asDuration = new_Symbol(L"asDuration");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend3698 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)self);
    Array PThreadedCode3697 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3698, (Optr)&t_method_return);
    Method PMethod3696 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3697, 1, PSend3698);
    
    MethodClosure MC_SMB_asDuration = new_MethodClosure((Method)PMethod3696, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asDuration, MC_SMB_asDuration);
}


static void init_SMB__lt_() {
    Symbol SMB__lt_ = new_Symbol(L"<");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3700 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3702 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__lt_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3701 = new_Array_with(1, (Optr)PAnnotation3702);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3704 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3703 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3704, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3699 = new_NativeMethod_with(PArray3700, empty_Array, PArray3701, PThreadedCode3703, 2, PSend3704, self);
    
    MethodClosure MC_SMB__lt_ = new_MethodClosure((Method)PNativeMethod3699, SmallInt_Class);
    store_method(SmallInt_Class, SMB__lt_, MC_SMB__lt_);
}


static void init_SMB_putOn_() {
    Symbol SMB_putOn_ = new_Symbol(L"putOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray3706 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend3708 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend3709 = new_Send((Optr)VAR_aStream_0_0, SMB_writeAll_, 1, (Optr)PSend3708);
    Array PThreadedCode3707 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3708, (Optr)&t_send1, (Optr)PSend3709, (Optr)&t_method_return);
    Method PMethod3705 = new_Method_with(PArray3706, empty_Array, empty_Array, PThreadedCode3707, 1, PSend3709);
    
    MethodClosure MC_SMB_putOn_ = new_MethodClosure((Method)PMethod3705, SmallInt_Class);
    store_method(SmallInt_Class, SMB_putOn_, MC_SMB_putOn_);
}


static void init_SMB__modulo_() {
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3711 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3713 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__modulo_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3712 = new_Array_with(1, (Optr)PAnnotation3713);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3715 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3714 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3715, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3710 = new_NativeMethod_with(PArray3711, empty_Array, PArray3712, PThreadedCode3714, 2, PSend3715, self);
    
    MethodClosure MC_SMB__modulo_ = new_MethodClosure((Method)PNativeMethod3710, SmallInt_Class);
    store_method(SmallInt_Class, SMB__modulo_, MC_SMB__modulo_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray3717 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSmallInt_ = new_Symbol(L"visitSmallInt:");
    // visitSmallInt:. 
    Send PSend3719 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSmallInt_, 1, (Optr)self);
    Array PThreadedCode3718 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3719, (Optr)&t_method_return);
    Method PMethod3716 = new_Method_with(PArray3717, empty_Array, empty_Array, PThreadedCode3718, 1, PSend3719);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod3716, SmallInt_Class);
    store_method(SmallInt_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB__quotient_() {
    Symbol SMB__quotient_ = new_Symbol(L"//");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3721 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3723 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__quotient_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3722 = new_Array_with(1, (Optr)PAnnotation3723);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3725 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3724 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3725, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3720 = new_NativeMethod_with(PArray3721, empty_Array, PArray3722, PThreadedCode3724, 2, PSend3725, self);
    
    MethodClosure MC_SMB__quotient_ = new_MethodClosure((Method)PNativeMethod3720, SmallInt_Class);
    store_method(SmallInt_Class, SMB__quotient_, MC_SMB__quotient_);
}


static void init_SMB__and_() {
    Symbol SMB__and_ = new_Symbol(L"&");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3727 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3729 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__and_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3728 = new_Array_with(1, (Optr)PAnnotation3729);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3731 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3730 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3731, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3726 = new_NativeMethod_with(PArray3727, empty_Array, PArray3728, PThreadedCode3730, 2, PSend3731, self);
    
    MethodClosure MC_SMB__and_ = new_MethodClosure((Method)PNativeMethod3726, SmallInt_Class);
    store_method(SmallInt_Class, SMB__and_, MC_SMB__and_);
}


static void init_SMB_abs() {
    Symbol SMB_abs = new_Symbol(L"abs");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3735 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend3737 = new_Send((Optr)self, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend3741 = new_Send((Optr)self, SMB_negated, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3742 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3741);
    Array PThreadedCode3740 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3741, (Optr)&t_send1, (Optr)PSend3742, (Optr)&t_block_return);
    Block PBlock3739 = new_Block_with(empty_Array, empty_Array, PThreadedCode3740, 1, PSend3742);
    // escape:. 
    Send PSend3745 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode3744 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3745, (Optr)&t_block_return);
    Block PBlock3743 = new_Block_with(empty_Array, empty_Array, PThreadedCode3744, 1, PSend3745);
    // ifTrue:ifFalse:. 
    Send PSend3738 = new_Send((Optr)PSend3737, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3739, (Optr)PBlock3743);
    Array PThreadedCode3736 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3737, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3738, (Optr)PBlock3739, (Optr)PBlock3743, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock3734 = new_Block_with(PArray3735, empty_Array, PThreadedCode3736, 2, PSend3738, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3746 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3734);
    Array PThreadedCode3733 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3734, (Optr)&t_send1, (Optr)PSend3746, (Optr)&t_method_return);
    Method PMethod3732 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3733, 1, PSend3746);
    
    MethodClosure MC_SMB_abs = new_MethodClosure((Method)PMethod3732, SmallInt_Class);
    store_method(SmallInt_Class, SMB_abs, MC_SMB_abs);
}


static void init_SMB_hours() {
    Symbol SMB_hours = new_Symbol(L"hours");
    Symbol SMB_hours_ = new_Symbol(L"hours:");
    // hours:. 
    Send PSend3749 = new_Send((Optr)Duration_classReference, SMB_hours_, 1, (Optr)self);
    Array PThreadedCode3748 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3749, (Optr)&t_method_return);
    Method PMethod3747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3748, 1, PSend3749);
    
    MethodClosure MC_SMB_hours = new_MethodClosure((Method)PMethod3747, SmallInt_Class);
    store_method(SmallInt_Class, SMB_hours, MC_SMB_hours);
}


static void init_SMB_asString() {
    Symbol SMB_asString = new_Symbol(L"asString");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3752 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asString, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3751 = new_Array_with(1, (Optr)PAnnotation3752);
    Super PSuper3754 = new_Super(SMB_asString, 0);
    Array PThreadedCode3753 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3754, (Optr)&t_method_return);
    NativeMethod PNativeMethod3750 = new_NativeMethod_with(empty_Array, empty_Array, PArray3751, PThreadedCode3753, 1, PSuper3754);
    
    MethodClosure MC_SMB_asString = new_MethodClosure((Method)PNativeMethod3750, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asString, MC_SMB_asString);
}


static void init_SMB_asCharacter() {
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3757 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asCharacter, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3756 = new_Array_with(1, (Optr)PAnnotation3757);
    Super PSuper3759 = new_Super(SMB_asCharacter, 0);
    Array PThreadedCode3758 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3759, (Optr)&t_method_return);
    NativeMethod PNativeMethod3755 = new_NativeMethod_with(empty_Array, empty_Array, PArray3756, PThreadedCode3758, 1, PSuper3759);
    
    MethodClosure MC_SMB_asCharacter = new_MethodClosure((Method)PNativeMethod3755, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asCharacter, MC_SMB_asCharacter);
}


static void init_SMB_fac() {
    Symbol SMB_fac = new_Symbol(L"fac");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3763 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // >. 
    Send PSend3765 = new_Send((Optr)self, SMB__gt_, 1, (Optr)int_1_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3769 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)int_1_Const);
    Array PThreadedCode3768 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3769, (Optr)&t_block_return);
    Block PBlock3767 = new_Block_with(empty_Array, empty_Array, PThreadedCode3768, 1, PSend3769);
    // ifFalse:. 
    Send PSend3766 = new_Send((Optr)PSend3765, SMB_ifFalse_, 1, (Optr)PBlock3767);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3770 = new_Send((Optr)self, SMB__minus_, 1, (Optr)int_1_Const);
    // fac. 
    Send PSend3771 = new_Send((Optr)PSend3770, SMB_fac, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend3772 = new_Send((Optr)self, SMB__times_, 1, (Optr)PSend3771);
    Array PThreadedCode3764 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3765, (Optr)&t_send_ifFalse_, (Optr)PSend3766, (Optr)PBlock3767, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3770, (Optr)&t_send0, (Optr)PSend3771, (Optr)&t_send1, (Optr)PSend3772, (Optr)&t_method_return);
    Block PBlock3762 = new_Block_with(PArray3763, empty_Array, PThreadedCode3764, 2, PSend3766, PSend3772);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3773 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3762);
    Array PThreadedCode3761 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3762, (Optr)&t_send1, (Optr)PSend3773, (Optr)&t_method_return);
    Method PMethod3760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3761, 1, PSend3773);
    
    MethodClosure MC_SMB_fac = new_MethodClosure((Method)PMethod3760, SmallInt_Class);
    store_method(SmallInt_Class, SMB_fac, MC_SMB_fac);
}


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Array PThreadedCode3775 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3774 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3775, 1, self);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod3774, SmallInt_Class);
    store_method(SmallInt_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_fib() {
    Symbol SMB_fib = new_Symbol(L"fib");
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // <. 
    Send PSend3778 = new_Send((Optr)self, SMB__lt_, 1, (Optr)int_2_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3781 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Block PBlock3780 = new_Block_with(empty_Array, empty_Array, PThreadedCode3781, 1, int_1_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3784 = new_Send((Optr)self, SMB__minus_, 1, (Optr)int_1_Const);
    // fib. 
    Send PSend3785 = new_Send((Optr)PSend3784, SMB_fib, 0);
    // -. 
    Send PSend3786 = new_Send((Optr)self, SMB__minus_, 1, (Optr)int_2_Const);
    // fib. 
    Send PSend3787 = new_Send((Optr)PSend3786, SMB_fib, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3788 = new_Send((Optr)PSend3785, SMB__plus_, 1, (Optr)PSend3787);
    Array PThreadedCode3783 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3784, (Optr)&t_send0, (Optr)PSend3785, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3786, (Optr)&t_send0, (Optr)PSend3787, (Optr)&t_send1, (Optr)PSend3788, (Optr)&t_block_return);
    Block PBlock3782 = new_Block_with(empty_Array, empty_Array, PThreadedCode3783, 1, PSend3788);
    // ifTrue:ifFalse:. 
    Send PSend3779 = new_Send((Optr)PSend3778, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3780, (Optr)PBlock3782);
    Array PThreadedCode3777 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend3778, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3779, (Optr)PBlock3780, (Optr)PBlock3782, (Optr)&t_method_return);
    Method PMethod3776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3777, 1, PSend3779);
    
    MethodClosure MC_SMB_fib = new_MethodClosure((Method)PMethod3776, SmallInt_Class);
    store_method(SmallInt_Class, SMB_fib, MC_SMB_fib);
}


static void init_SMB__gt__equals_() {
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3790 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3792 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend3793 = new_Send((Optr)PSend3792, SMB_not, 0);
    Array PThreadedCode3791 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3792, (Optr)&t_send0, (Optr)PSend3793, (Optr)&t_method_return);
    Method PMethod3789 = new_Method_with(PArray3790, empty_Array, empty_Array, PThreadedCode3791, 1, PSend3793);
    
    MethodClosure MC_SMB__gt__equals_ = new_MethodClosure((Method)PMethod3789, SmallInt_Class);
    store_method(SmallInt_Class, SMB__gt__equals_, MC_SMB__gt__equals_);
}


static void init_SMB_negated() {
    Symbol SMB_negated = new_Symbol(L"negated");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend3796 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)self);
    Array PThreadedCode3795 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3796, (Optr)&t_method_return);
    Method PMethod3794 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3795, 1, PSend3796);
    
    MethodClosure MC_SMB_negated = new_MethodClosure((Method)PMethod3794, SmallInt_Class);
    store_method(SmallInt_Class, SMB_negated, MC_SMB_negated);
}


static void init_SMB_positive() {
    Symbol SMB_positive = new_Symbol(L"positive");
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >=. 
    Send PSend3799 = new_Send((Optr)self, SMB__gt__equals_, 1, (Optr)int_0_Const);
    Array PThreadedCode3798 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3799, (Optr)&t_method_return);
    Method PMethod3797 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3798, 1, PSend3799);
    
    MethodClosure MC_SMB_positive = new_MethodClosure((Method)PMethod3797, SmallInt_Class);
    store_method(SmallInt_Class, SMB_positive, MC_SMB_positive);
}


static void init_SMB_adaptToNumber_andSend_() {
    Symbol SMB_adaptToNumber_andSend_ = new_Symbol(L"adaptToNumber:andSend:");
    Variable VAR_rcvr_0_0 = new_Variable_named(L"rcvr", 0);
    Variable VAR_selector_0_1 = new_Variable_named(L"selector", 0);
    Array PArray3801 = new_Array_with(2, (Optr)VAR_rcvr_0_0, (Optr)VAR_selector_0_1);
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    // asNumber. 
    Send PSend3803 = new_Send((Optr)self, SMB_asNumber, 0);
    Symbol SMB_perform_with_ = new_Symbol(L"perform:with:");
    // perform:with:. 
    Send PSend3804 = new_Send((Optr)VAR_rcvr_0_0, SMB_perform_with_, 2, (Optr)VAR_selector_0_1, (Optr)PSend3803);
    Array PThreadedCode3802 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_rcvr_0_0, (Optr)&t_push_variable, (Optr)VAR_selector_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3803, (Optr)&t_send2, (Optr)PSend3804, (Optr)&t_method_return);
    Method PMethod3800 = new_Method_with(PArray3801, empty_Array, empty_Array, PThreadedCode3802, 1, PSend3804);
    
    MethodClosure MC_SMB_adaptToNumber_andSend_ = new_MethodClosure((Method)PMethod3800, SmallInt_Class);
    store_method(SmallInt_Class, SMB_adaptToNumber_andSend_, MC_SMB_adaptToNumber_andSend_);
}


static void init_SMB_rounded() {
    Symbol SMB_rounded = new_Symbol(L"rounded");
    Array PThreadedCode3806 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3805 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3806, 1, self);
    
    MethodClosure MC_SMB_rounded = new_MethodClosure((Method)PMethod3805, SmallInt_Class);
    store_method(SmallInt_Class, SMB_rounded, MC_SMB_rounded);
}


static void init_SMB__divide_() {
    Symbol SMB__divide_ = new_Symbol(L"/");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3808 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3810 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__divide_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3809 = new_Array_with(1, (Optr)PAnnotation3810);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3812 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3811 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3812, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3807 = new_NativeMethod_with(PArray3808, empty_Array, PArray3809, PThreadedCode3811, 2, PSend3812, self);
    
    MethodClosure MC_SMB__divide_ = new_MethodClosure((Method)PNativeMethod3807, SmallInt_Class);
    store_method(SmallInt_Class, SMB__divide_, MC_SMB__divide_);
}


static void init_SMB_minutes() {
    Symbol SMB_minutes = new_Symbol(L"minutes");
    Symbol SMB_minutes_ = new_Symbol(L"minutes:");
    // minutes:. 
    Send PSend3815 = new_Send((Optr)Duration_classReference, SMB_minutes_, 1, (Optr)self);
    Array PThreadedCode3814 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3815, (Optr)&t_method_return);
    Method PMethod3813 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3814, 1, PSend3815);
    
    MethodClosure MC_SMB_minutes = new_MethodClosure((Method)PMethod3813, SmallInt_Class);
    store_method(SmallInt_Class, SMB_minutes, MC_SMB_minutes);
}


static void init_SMB_seconds() {
    Symbol SMB_seconds = new_Symbol(L"seconds");
    Symbol SMB_seconds_ = new_Symbol(L"seconds:");
    // seconds:. 
    Send PSend3818 = new_Send((Optr)Duration_classReference, SMB_seconds_, 1, (Optr)self);
    Array PThreadedCode3817 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3818, (Optr)&t_method_return);
    Method PMethod3816 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3817, 1, PSend3818);
    
    MethodClosure MC_SMB_seconds = new_MethodClosure((Method)PMethod3816, SmallInt_Class);
    store_method(SmallInt_Class, SMB_seconds, MC_SMB_seconds);
}


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3820 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3822 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__equals_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3821 = new_Array_with(1, (Optr)PAnnotation3822);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3824 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3823 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3824, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3819 = new_NativeMethod_with(PArray3820, empty_Array, PArray3821, PThreadedCode3823, 2, PSend3824, self);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PNativeMethod3819, SmallInt_Class);
    store_method(SmallInt_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_doTimes_() {
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray3826 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_nextValue_0_1 = new_Variable_named(L"nextValue", 0);
    Array PArray3827 = new_Array_with(1, (Optr)VAR_nextValue_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Assign PAssign3829 = new_Assign((Optr)VAR_nextValue_0_1, (Optr)int_1_Const);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3832 = new_Send((Optr)VAR_nextValue_0_1, SMB__lt__equals_, 1, (Optr)self);
    Array PThreadedCode3831 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_1, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3832, (Optr)&t_block_return);
    Block PBlock3830 = new_Block_with(empty_Array, empty_Array, PThreadedCode3831, 1, PSend3832);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend3835 = new_Send((Optr)VAR_aBlock_0_0, SMB_value, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend3837 = new_Send((Optr)VAR_nextValue_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3836 = new_Assign((Optr)VAR_nextValue_0_1, (Optr)PSend3837);
    Array PThreadedCode3834 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send0, (Optr)PSend3835, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3836, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3837, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3833 = new_Block_with(empty_Array, empty_Array, PThreadedCode3834, 2, PSend3835, PAssign3836);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3838 = new_Send((Optr)PBlock3830, SMB_whileTrue_, 1, (Optr)PBlock3833);
    Array PThreadedCode3828 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign3829, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3830, (Optr)&t_push_closure, (Optr)PBlock3833, (Optr)&t_send1, (Optr)PSend3838, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3825 = new_Method_with(PArray3826, PArray3827, empty_Array, PThreadedCode3828, 3, PAssign3829, PSend3838, self);
    
    MethodClosure MC_SMB_doTimes_ = new_MethodClosure((Method)PMethod3825, SmallInt_Class);
    store_method(SmallInt_Class, SMB_doTimes_, MC_SMB_doTimes_);
}


static void init_SMB_quo_() {
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3840 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray3843 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_negative = new_Symbol(L"negative");
    // negative. 
    Send PSend3845 = new_Send((Optr)self, SMB_negative, 0);
    // negative. 
    Send PSend3846 = new_Send((Optr)VAR_aSmallInt_0_0, SMB_negative, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend3847 = new_Send((Optr)PSend3845, SMB__pequals_, 1, (Optr)PSend3846);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__quotient_ = new_Symbol(L"//");
    // //. 
    Send PSend3851 = new_Send((Optr)self, SMB__quotient_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend3852 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3851);
    Array PThreadedCode3850 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3851, (Optr)&t_send1, (Optr)PSend3852, (Optr)&t_block_return);
    Block PBlock3849 = new_Block_with(empty_Array, empty_Array, PThreadedCode3850, 1, PSend3852);
    Symbol SMB_negated = new_Symbol(L"negated");
    // negated. 
    Send PSend3855 = new_Send((Optr)self, SMB_negated, 0);
    // //. 
    Send PSend3856 = new_Send((Optr)PSend3855, SMB__quotient_, 1, (Optr)VAR_aSmallInt_0_0);
    // negated. 
    Send PSend3857 = new_Send((Optr)PSend3856, SMB_negated, 0);
    // escape:. 
    Send PSend3858 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend3857);
    Array PThreadedCode3854 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3855, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3856, (Optr)&t_send0, (Optr)PSend3857, (Optr)&t_send1, (Optr)PSend3858, (Optr)&t_block_return);
    Block PBlock3853 = new_Block_with(empty_Array, empty_Array, PThreadedCode3854, 1, PSend3858);
    // ifTrue:ifFalse:. 
    Send PSend3848 = new_Send((Optr)PSend3847, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3849, (Optr)PBlock3853);
    Array PThreadedCode3844 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3845, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send0, (Optr)PSend3846, (Optr)&t_send1, (Optr)PSend3847, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3848, (Optr)PBlock3849, (Optr)PBlock3853, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock3842 = new_Block_with(PArray3843, empty_Array, PThreadedCode3844, 2, PSend3848, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend3859 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock3842);
    Array PThreadedCode3841 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock3842, (Optr)&t_send1, (Optr)PSend3859, (Optr)&t_method_return);
    Method PMethod3839 = new_Method_with(PArray3840, empty_Array, empty_Array, PThreadedCode3841, 1, PSend3859);
    
    MethodClosure MC_SMB_quo_ = new_MethodClosure((Method)PMethod3839, SmallInt_Class);
    store_method(SmallInt_Class, SMB_quo_, MC_SMB_quo_);
}


static void init_SMB__plus_() {
    Symbol SMB__plus_ = new_Symbol(L"+");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3861 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3863 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__plus_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3862 = new_Array_with(1, (Optr)PAnnotation3863);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3865 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3864 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3865, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3860 = new_NativeMethod_with(PArray3861, empty_Array, PArray3862, PThreadedCode3864, 2, PSend3865, self);
    
    MethodClosure MC_SMB__plus_ = new_MethodClosure((Method)PNativeMethod3860, SmallInt_Class);
    store_method(SmallInt_Class, SMB__plus_, MC_SMB__plus_);
}


static void init_SMB__minus_() {
    Symbol SMB__minus_ = new_Symbol(L"-");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3867 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3869 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__minus_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3868 = new_Array_with(1, (Optr)PAnnotation3869);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3871 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3870 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3871, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3866 = new_NativeMethod_with(PArray3867, empty_Array, PArray3868, PThreadedCode3870, 2, PSend3871, self);
    
    MethodClosure MC_SMB__minus_ = new_MethodClosure((Method)PNativeMethod3866, SmallInt_Class);
    store_method(SmallInt_Class, SMB__minus_, MC_SMB__minus_);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3873 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3875 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__shiftLeft_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3874 = new_Array_with(1, (Optr)PAnnotation3875);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3877 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3876 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3877, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3872 = new_NativeMethod_with(PArray3873, empty_Array, PArray3874, PThreadedCode3876, 2, PSend3877, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PNativeMethod3872, SmallInt_Class);
    store_method(SmallInt_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_asInteger() {
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    Array PThreadedCode3879 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3878 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3879, 1, self);
    
    MethodClosure MC_SMB_asInteger = new_MethodClosure((Method)PMethod3878, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asInteger, MC_SMB_asInteger);
}


static void init_SMB_to_do_() {
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    Variable VAR_stop_0_0 = new_Variable_named(L"stop", 0);
    Variable VAR_aBlock_0_1 = new_Variable_named(L"aBlock", 0);
    Array PArray3881 = new_Array_with(2, (Optr)VAR_stop_0_0, (Optr)VAR_aBlock_0_1);
    Variable VAR_nextValue_0_2 = new_Variable_named(L"nextValue", 0);
    Array PArray3882 = new_Array_with(1, (Optr)VAR_nextValue_0_2);
    Assign PAssign3884 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)self);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend3887 = new_Send((Optr)VAR_nextValue_0_2, SMB__lt__equals_, 1, (Optr)VAR_stop_0_0);
    Array PThreadedCode3886 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_variable, (Optr)VAR_stop_0_0, (Optr)&t_send1, (Optr)PSend3887, (Optr)&t_block_return);
    Block PBlock3885 = new_Block_with(empty_Array, empty_Array, PThreadedCode3886, 1, PSend3887);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend3890 = new_Send((Optr)VAR_aBlock_0_1, SMB_value_, 1, (Optr)VAR_nextValue_0_2);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend3892 = new_Send((Optr)VAR_nextValue_0_2, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign3891 = new_Assign((Optr)VAR_nextValue_0_2, (Optr)PSend3892);
    Array PThreadedCode3889 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_1, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_send1, (Optr)PSend3890, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign3891, (Optr)&t_push_variable, (Optr)VAR_nextValue_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3892, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock3888 = new_Block_with(empty_Array, empty_Array, PThreadedCode3889, 2, PSend3890, PAssign3891);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend3893 = new_Send((Optr)PBlock3885, SMB_whileTrue_, 1, (Optr)PBlock3888);
    Array PThreadedCode3883 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign3884, (Optr)&t_push_self, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock3885, (Optr)&t_push_closure, (Optr)PBlock3888, (Optr)&t_send1, (Optr)PSend3893, (Optr)&t_method_return);
    Method PMethod3880 = new_Method_with(PArray3881, PArray3882, empty_Array, PThreadedCode3883, 2, PAssign3884, PSend3893);
    
    MethodClosure MC_SMB_to_do_ = new_MethodClosure((Method)PMethod3880, SmallInt_Class);
    store_method(SmallInt_Class, SMB_to_do_, MC_SMB_to_do_);
}


static void init_SMB_printOn_() {
    Symbol SMB_printOn_ = new_Symbol(L"printOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray3895 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend3897 = new_Send((Optr)self, SMB_asString, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend3898 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)PSend3897);
    Array PThreadedCode3896 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3897, (Optr)&t_send1, (Optr)PSend3898, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod3894 = new_Method_with(PArray3895, empty_Array, empty_Array, PThreadedCode3896, 2, PSend3898, self);
    
    MethodClosure MC_SMB_printOn_ = new_MethodClosure((Method)PMethod3894, SmallInt_Class);
    store_method(SmallInt_Class, SMB_printOn_, MC_SMB_printOn_);
}


static void init_SMB_asNumber() {
    Symbol SMB_asNumber = new_Symbol(L"asNumber");
    Array PThreadedCode3900 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3899 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3900, 1, self);
    
    MethodClosure MC_SMB_asNumber = new_MethodClosure((Method)PMethod3899, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asNumber, MC_SMB_asNumber);
}


static void init_SMB_truncated() {
    Symbol SMB_truncated = new_Symbol(L"truncated");
    Symbol SMB_quo_ = new_Symbol(L"quo:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // quo:. 
    Send PSend3903 = new_Send((Optr)self, SMB_quo_, 1, (Optr)int_1_Const);
    Array PThreadedCode3902 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend3903, (Optr)&t_method_return);
    Method PMethod3901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3902, 1, PSend3903);
    
    MethodClosure MC_SMB_truncated = new_MethodClosure((Method)PMethod3901, SmallInt_Class);
    store_method(SmallInt_Class, SMB_truncated, MC_SMB_truncated);
}


static void init_SMB_days() {
    Symbol SMB_days = new_Symbol(L"days");
    Symbol SMB_days_ = new_Symbol(L"days:");
    // days:. 
    Send PSend3906 = new_Send((Optr)Duration_classReference, SMB_days_, 1, (Optr)self);
    Array PThreadedCode3905 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)Duration_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend3906, (Optr)&t_method_return);
    Method PMethod3904 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3905, 1, PSend3906);
    
    MethodClosure MC_SMB_days = new_MethodClosure((Method)PMethod3904, SmallInt_Class);
    store_method(SmallInt_Class, SMB_days, MC_SMB_days);
}


static void init_SMB__or_() {
    Symbol SMB__or_ = new_Symbol(L"|");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3908 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3910 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__or_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3909 = new_Array_with(1, (Optr)PAnnotation3910);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3912 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3911 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3912, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3907 = new_NativeMethod_with(PArray3908, empty_Array, PArray3909, PThreadedCode3911, 2, PSend3912, self);
    
    MethodClosure MC_SMB__or_ = new_MethodClosure((Method)PNativeMethod3907, SmallInt_Class);
    store_method(SmallInt_Class, SMB__or_, MC_SMB__or_);
}


static void init_SMB__gt_() {
    Symbol SMB__gt_ = new_Symbol(L">");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3914 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3916 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__gt_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3915 = new_Array_with(1, (Optr)PAnnotation3916);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3918 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3917 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3918, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3913 = new_NativeMethod_with(PArray3914, empty_Array, PArray3915, PThreadedCode3917, 2, PSend3918, self);
    
    MethodClosure MC_SMB__gt_ = new_MethodClosure((Method)PNativeMethod3913, SmallInt_Class);
    store_method(SmallInt_Class, SMB__gt_, MC_SMB__gt_);
}


static void init_SMB_min_() {
    Symbol SMB_min_ = new_Symbol(L"min:");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray3920 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend3922 = new_Send((Optr)self, SMB__lt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3925 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock3924 = new_Block_with(empty_Array, empty_Array, PThreadedCode3925, 1, self);
    Array PThreadedCode3927 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_block_return);
    Block PBlock3926 = new_Block_with(empty_Array, empty_Array, PThreadedCode3927, 1, VAR_aMagnitude_0_0);
    // ifTrue:ifFalse:. 
    Send PSend3923 = new_Send((Optr)PSend3922, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3924, (Optr)PBlock3926);
    Array PThreadedCode3921 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend3922, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3923, (Optr)PBlock3924, (Optr)PBlock3926, (Optr)&t_method_return);
    Method PMethod3919 = new_Method_with(PArray3920, empty_Array, empty_Array, PThreadedCode3921, 1, PSend3923);
    
    MethodClosure MC_SMB_min_ = new_MethodClosure((Method)PMethod3919, SmallInt_Class);
    store_method(SmallInt_Class, SMB_min_, MC_SMB_min_);
}


static void init_SMB_negative() {
    Symbol SMB_negative = new_Symbol(L"negative");
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend3930 = new_Send((Optr)self, SMB__lt_, 1, (Optr)int_0_Const);
    Array PThreadedCode3929 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend3930, (Optr)&t_method_return);
    Method PMethod3928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3929, 1, PSend3930);
    
    MethodClosure MC_SMB_negative = new_MethodClosure((Method)PMethod3928, SmallInt_Class);
    store_method(SmallInt_Class, SMB_negative, MC_SMB_negative);
}


static void init_SMB_max_() {
    Symbol SMB_max_ = new_Symbol(L"max:");
    Variable VAR_aMagnitude_0_0 = new_Variable_named(L"aMagnitude", 0);
    Array PArray3932 = new_Array_with(1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend3934 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aMagnitude_0_0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Array PThreadedCode3937 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_self);
    Block PBlock3936 = new_Block_with(empty_Array, empty_Array, PThreadedCode3937, 1, self);
    Array PThreadedCode3939 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_block_return);
    Block PBlock3938 = new_Block_with(empty_Array, empty_Array, PThreadedCode3939, 1, VAR_aMagnitude_0_0);
    // ifTrue:ifFalse:. 
    Send PSend3935 = new_Send((Optr)PSend3934, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock3936, (Optr)PBlock3938);
    Array PThreadedCode3933 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMagnitude_0_0, (Optr)&t_send1, (Optr)PSend3934, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend3935, (Optr)PBlock3936, (Optr)PBlock3938, (Optr)&t_method_return);
    Method PMethod3931 = new_Method_with(PArray3932, empty_Array, empty_Array, PThreadedCode3933, 1, PSend3935);
    
    MethodClosure MC_SMB_max_ = new_MethodClosure((Method)PMethod3931, SmallInt_Class);
    store_method(SmallInt_Class, SMB_max_, MC_SMB_max_);
}


static void init_SMB_asFloat() {
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3942 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_asFloat, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3941 = new_Array_with(1, (Optr)PAnnotation3942);
    Super PSuper3944 = new_Super(SMB_asFloat, 0);
    Array PThreadedCode3943 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper3944, (Optr)&t_method_return);
    NativeMethod PNativeMethod3940 = new_NativeMethod_with(empty_Array, empty_Array, PArray3941, PThreadedCode3943, 1, PSuper3944);
    
    MethodClosure MC_SMB_asFloat = new_MethodClosure((Method)PNativeMethod3940, SmallInt_Class);
    store_method(SmallInt_Class, SMB_asFloat, MC_SMB_asFloat);
}


static void init_SMB__shiftRight_() {
    Symbol SMB__shiftRight_ = new_Symbol(L">>");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3946 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3948 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__shiftRight_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3947 = new_Array_with(1, (Optr)PAnnotation3948);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3950 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3949 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3950, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3945 = new_NativeMethod_with(PArray3946, empty_Array, PArray3947, PThreadedCode3949, 2, PSend3950, self);
    
    MethodClosure MC_SMB__shiftRight_ = new_MethodClosure((Method)PNativeMethod3945, SmallInt_Class);
    store_method(SmallInt_Class, SMB__shiftRight_, MC_SMB__shiftRight_);
}


static void init_SMB__times_() {
    Symbol SMB__times_ = new_Symbol(L"*");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray3952 = new_Array_with(1, (Optr)VAR_other_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Number_minus_SmallInt = new_Symbol(L"Number.SmallInt");
    Annotation PAnnotation3954 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB__times_, (Optr)SMB_Number_minus_SmallInt);
    Array PArray3953 = new_Array_with(1, (Optr)PAnnotation3954);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend3956 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode3955 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend3956, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod3951 = new_NativeMethod_with(PArray3952, empty_Array, PArray3953, PThreadedCode3955, 2, PSend3956, self);
    
    MethodClosure MC_SMB__times_ = new_MethodClosure((Method)PNativeMethod3951, SmallInt_Class);
    store_method(SmallInt_Class, SMB__times_, MC_SMB__times_);
}


static void init_SMB__lt__equals_() {
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    Variable VAR_aSmallInt_0_0 = new_Variable_named(L"aSmallInt", 0);
    Array PArray3958 = new_Array_with(1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend3960 = new_Send((Optr)self, SMB__gt_, 1, (Optr)VAR_aSmallInt_0_0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend3961 = new_Send((Optr)PSend3960, SMB_not, 0);
    Array PThreadedCode3959 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSmallInt_0_0, (Optr)&t_send1, (Optr)PSend3960, (Optr)&t_send0, (Optr)PSend3961, (Optr)&t_method_return);
    Method PMethod3957 = new_Method_with(PArray3958, empty_Array, empty_Array, PThreadedCode3959, 1, PSend3961);
    
    MethodClosure MC_SMB__lt__equals_ = new_MethodClosure((Method)PMethod3957, SmallInt_Class);
    store_method(SmallInt_Class, SMB__lt__equals_, MC_SMB__lt__equals_);
}


static void init_SMB_identityHash() {
    Symbol SMB_identityHash = new_Symbol(L"identityHash");
    Array PThreadedCode3963 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod3962 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode3963, 1, self);
    
    MethodClosure MC_SMB_identityHash = new_MethodClosure((Method)PMethod3962, SmallInt_Class);
    store_method(SmallInt_Class, SMB_identityHash, MC_SMB_identityHash);
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
    init_SMB__notEquals_();
    init_SMB_to_by_do_();
    init_SMB_asDuration();
    init_SMB__lt_();
    init_SMB_putOn_();
    init_SMB__modulo_();
    init_SMB_accept_();
    init_SMB__quotient_();
    init_SMB__and_();
    init_SMB_abs();
    init_SMB_hours();
    init_SMB_asString();
    init_SMB_asCharacter();
    init_SMB_fac();
    init_SMB_hash();
    init_SMB_fib();
    init_SMB__gt__equals_();
    init_SMB_negated();
    init_SMB_positive();
    init_SMB_adaptToNumber_andSend_();
    init_SMB_rounded();
    init_SMB__divide_();
    init_SMB_minutes();
    init_SMB_seconds();
    init_SMB__equals_();
    init_SMB_doTimes_();
    init_SMB_quo_();
    init_SMB__plus_();
    init_SMB__minus_();
    init_SMB__shiftLeft_();
    init_SMB_asInteger();
    init_SMB_to_do_();
    init_SMB_printOn_();
    init_SMB_asNumber();
    init_SMB_truncated();
    init_SMB_days();
    init_SMB__or_();
    init_SMB__gt_();
    init_SMB_min_();
    init_SMB_negative();
    init_SMB_max_();
    init_SMB_asFloat();
    init_SMB__shiftRight_();
    init_SMB__times_();
    init_SMB__lt__equals_();
    init_SMB_identityHash();
    
}