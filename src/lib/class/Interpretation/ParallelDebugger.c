#include <lib/class/Interpretation/ParallelDebugger.h>


Optr layout_Interpretation_ParallelDebugger_Class_class;
Optr slot_Interpretation_ParallelDebugger_localIndent;
Optr slot_Interpretation_ParallelDebugger_threads;
Optr slot_Interpretation_ParallelDebugger_states;
Optr layout_Interpretation_ParallelDebugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16720 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16723 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16729 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16728 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16729, (Optr)&t_block_return);
    Block PBlock16727 = new_Block_with(empty_Array, empty_Array, PThreadedCode16728, 1, PSend16729);
    // ifNil:. 
    Send PSend16726 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16727);
    Assign PAssign16725 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16726);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16733 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16732 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16733);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16734 = new_Send((Optr)PAssign16732, SMB_isNil, 0);
    Array PThreadedCode16731 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16732, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16733, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16734, (Optr)&t_block_return);
    Block PBlock16730 = new_Block_with(empty_Array, empty_Array, PThreadedCode16731, 1, PSend16734);
    String string_16737 = new_String(L"  ");
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Constant string_16737_Const = new_Constant((Optr)string_16737);
    // stderr:. 
    Send PSend16738 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16737_Const);
    Array PThreadedCode16736 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16737, (Optr)&t_send1, (Optr)PSend16738, (Optr)&t_block_return);
    Block PBlock16735 = new_Block_with(empty_Array, empty_Array, PThreadedCode16736, 1, PSend16738);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16739 = new_Send((Optr)PBlock16730, SMB_whileFalse_, 1, (Optr)PBlock16735);
    String string_16742 = new_String(L"  ");
    Constant string_16742_Const = new_Constant((Optr)string_16742);
    // stderr:. 
    Send PSend16743 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16742_Const);
    Array PThreadedCode16741 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16742, (Optr)&t_send1, (Optr)PSend16743, (Optr)&t_block_return);
    Block PBlock16740 = new_Block_with(empty_Array, empty_Array, PThreadedCode16741, 1, PSend16743);
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    // doTimes:. 
    Send PSend16744 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB_doTimes_, 1, (Optr)PBlock16740);
    Array PThreadedCode16724 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16725, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16727, (Optr)&t_send1, (Optr)PSend16726, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16730, (Optr)&t_push_closure, (Optr)PBlock16735, (Optr)&t_send1, (Optr)PSend16739, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_closure, (Optr)PBlock16740, (Optr)&t_send1, (Optr)PSend16744, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16722 = new_Block_with(PArray16723, empty_Array, PThreadedCode16724, 4, PAssign16725, PSend16739, PSend16744, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16745 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16722);
    Array PThreadedCode16721 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16722, (Optr)&t_send1, (Optr)PSend16745, (Optr)&t_method_return);
    Method PMethod16719 = new_Method_with(empty_Array, PArray16720, empty_Array, PThreadedCode16721, 1, PSend16745);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16719, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_closures_0_0 = new_Variable_named(L"closures", 0);
    Array PArray16747 = new_Array_with(1, (Optr)VAR_closures_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16750 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16752 = new_Send((Optr)VAR_closures_0_0, SMB_size, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend16753 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend16752);
    Variable VAR_aClosure_2_0 = new_Variable_named(L"aClosure", 2);
    Array PArray16755 = new_Array_with(1, (Optr)VAR_aClosure_2_0);
    Variable VAR_startNext_3_0 = new_Variable_named(L"startNext", 3);
    Array PArray16758 = new_Array_with(1, (Optr)VAR_startNext_3_0);
    Variable VAR_thread_4_0 = new_Variable_named(L"thread", 4);
    Array PArray16761 = new_Array_with(1, (Optr)VAR_thread_4_0);
    Variable VAR__receiver__5_0 = new_Variable_named(L"_receiver_", 5);
    Array PArray16764 = new_Array_with(1, (Optr)VAR__receiver__5_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16766 = new_Send((Optr)VAR__receiver__5_0, SMB_continuation_, 1, (Optr)VAR_startNext_3_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16767 = new_Send((Optr)VAR__receiver__5_0, SMB_context_, 1, (Optr)nil_Const);
    Array PThreadedCode16765 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_variable, (Optr)VAR_startNext_3_0, (Optr)&t_send1, (Optr)PSend16766, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16767, (Optr)&t_method_return);
    Block PBlock16763 = new_Block_with(PArray16764, empty_Array, PThreadedCode16765, 2, PSend16766, PSend16767);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16768 = new_Send((Optr)PBlock16763, SMB_value_, 1, (Optr)VAR_thread_4_0);
    Array PThreadedCode16762 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock16763, (Optr)&t_push_variable, (Optr)VAR_thread_4_0, (Optr)&t_send1, (Optr)PSend16768, (Optr)&t_method_return);
    Block PBlock16760 = new_Block_with(PArray16761, empty_Array, PThreadedCode16762, 1, PSend16768);
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    // ifHasNext:. 
    Send PSend16769 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifHasNext_, 1, (Optr)PBlock16760);
    Super PSuper16770 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16771 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper16770);
    Array PThreadedCode16759 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16760, (Optr)&t_send1, (Optr)PSend16769, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_2_0, (Optr)&t_super1, (Optr)PSuper16770, (Optr)&t_send1, (Optr)PSend16771, (Optr)&t_method_return);
    Block PBlock16757 = new_Block_with(PArray16758, empty_Array, PThreadedCode16759, 2, PSend16769, PSend16771);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16772 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16757);
    Array PThreadedCode16756 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16757, (Optr)&t_send1, (Optr)PSend16772, (Optr)&t_method_return);
    Block PBlock16754 = new_Block_with(PArray16755, empty_Array, PThreadedCode16756, 1, PSend16772);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16773 = new_Send((Optr)VAR_closures_0_0, SMB_do_, 1, (Optr)PBlock16754);
    Array PThreadedCode16751 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_send0, (Optr)PSend16752, (Optr)&t_send1, (Optr)PSend16753, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_push_closure, (Optr)PBlock16754, (Optr)&t_send1, (Optr)PSend16773, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16749 = new_Block_with(PArray16750, empty_Array, PThreadedCode16751, 3, PSend16753, PSend16773, self);
    // on:. 
    Send PSend16774 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16749);
    Array PThreadedCode16748 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16749, (Optr)&t_send1, (Optr)PSend16774, (Optr)&t_method_return);
    Method PMethod16746 = new_Method_with(PArray16747, empty_Array, empty_Array, PThreadedCode16748, 1, PSend16774);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16746, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray16776 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16779 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16778 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)PSend16779);
    // new:. 
    Send PSend16781 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16780 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_states, (Optr)PSend16781);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray16783 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16785 = new_Send((Optr)PFakeThread_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16786 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend16785);
    Array PThreadedCode16784 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_class_reference, (Optr)PFakeThread_classReference, (Optr)&t_send0, (Optr)PSend16785, (Optr)&t_send2, (Optr)PSend16786, (Optr)&t_method_return);
    Block PBlock16782 = new_Block_with(PArray16783, empty_Array, PThreadedCode16784, 1, PSend16786);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend16787 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock16782);
    Array PThreadedCode16777 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16778, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16779, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16780, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16781, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock16782, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend16787, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16775 = new_Method_with(PArray16776, empty_Array, empty_Array, PThreadedCode16777, 4, PAssign16778, PAssign16780, PSend16787, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod16775, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16791 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend16793 = new_Send((Optr)VAR_receiver_1_0, SMB__at_, 1, (Optr)VAR_class_1_1);
    // @. 
    Send PSend16794 = new_Send((Optr)PSend16793, SMB__at_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_put_ = new_Symbol(L"put:");
    // put:. 
    Send PSend16795 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16794);
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    // showInvocation. 
    Send PSend16796 = new_Send((Optr)self, SMB_showInvocation, 0);
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    // switchThread. 
    Send PSend16797 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16798 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    // put:. 
    Send PSend16799 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16798);
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    // showReturn. 
    Send PSend16800 = new_Send((Optr)self, SMB_showReturn, 0);
    // switchThread. 
    Send PSend16801 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16802 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Array PThreadedCode16792 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_send1, (Optr)PSend16793, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16794, (Optr)&t_send1, (Optr)PSend16795, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16796, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16797, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16798, (Optr)&t_send1, (Optr)PSend16799, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16800, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16801, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16802, (Optr)&t_method_return);
    Block PBlock16790 = new_Block_with(PArray16791, empty_Array, PThreadedCode16792, 7, PSend16795, PSend16796, PSend16797, PSend16799, PSend16800, PSend16801, PSend16802);
    Array PThreadedCode16789 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16790, (Optr)&t_method_return);
    Method PMethod16788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16789, 1, PBlock16790);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16788, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16805 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16806 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)int_0_Const);
    Array PThreadedCode16804 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16805, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16806, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16803 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16804, 3, PSuper16805, PAssign16806, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16803, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_showReturn() {
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16808 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16811 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16810 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16811);
    String string_16812 = new_String(L"--> ");
    Constant string_16812_Const = new_Constant((Optr)string_16812);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16813 = new_Send((Optr)string_16812_Const, SMB__append_, 1, (Optr)VAR_current_0_0);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16814 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16813);
    Array PThreadedCode16809 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16810, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16811, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16812, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send1, (Optr)PSend16813, (Optr)&t_send1, (Optr)PSend16814, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16807 = new_Method_with(empty_Array, PArray16808, empty_Array, PThreadedCode16809, 3, PAssign16810, PSend16814, self);
    
    MethodClosure MC_SMB_showReturn = new_MethodClosure((Method)PMethod16807, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showReturn, MC_SMB_showReturn);
}


static void init_SMB_switchThread() {
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    Variable VAR_thread_0_0 = new_Variable_named(L"thread", 0);
    Array PArray16816 = new_Array_with(1, (Optr)VAR_thread_0_0);
    Variable VAR_aContinuation_1_0 = new_Variable_named(L"aContinuation", 1);
    Array PArray16819 = new_Array_with(1, (Optr)VAR_aContinuation_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16822 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16824 = new_Send((Optr)VAR__receiver__2_0, SMB_continuation_, 1, (Optr)VAR_aContinuation_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16825 = new_Send((Optr)VAR__receiver__2_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16823 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aContinuation_1_0, (Optr)&t_send1, (Optr)PSend16824, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16825, (Optr)&t_method_return);
    Block PBlock16821 = new_Block_with(PArray16822, empty_Array, PThreadedCode16823, 2, PSend16824, PSend16825);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16826 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_current, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16827 = new_Send((Optr)PBlock16821, SMB_value_, 1, (Optr)PSend16826);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend16828 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_next, 0);
    // next. 
    Send PSend16830 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_next, 0);
    Assign PAssign16829 = new_Assign((Optr)VAR_thread_0_0, (Optr)PSend16830);
    Variable VAR_aState_2_0 = new_Variable_named(L"aState", 2);
    Array PArray16834 = new_Array_with(1, (Optr)VAR_aState_2_0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16836 = new_Send((Optr)VAR_aState_2_0, SMB_should, 0);
    // current. 
    Send PSend16837 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend16838 = new_Send((Optr)PSend16836, SMB_be_, 1, (Optr)PSend16837);
    Array PThreadedCode16835 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aState_2_0, (Optr)&t_send0, (Optr)PSend16836, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16837, (Optr)&t_send1, (Optr)PSend16838, (Optr)&t_method_return);
    Block PBlock16833 = new_Block_with(PArray16834, empty_Array, PThreadedCode16835, 1, PSend16838);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16839 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_do_, 1, (Optr)PBlock16833);
    Array PThreadedCode16832 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_closure, (Optr)PBlock16833, (Optr)&t_send1, (Optr)PSend16839, (Optr)&t_block_return);
    Block PBlock16831 = new_Block_with(empty_Array, empty_Array, PThreadedCode16832, 1, PSend16839);
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    // ifAtFirst:. 
    Send PSend16840 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifAtFirst_, 1, (Optr)PBlock16831);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16842 = new_Send((Optr)VAR_thread_0_0, SMB_context, 0);
    Assign PAssign16841 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16842);
    Symbol SMB_continuation = new_Symbol(L"continuation");
    // continuation. 
    Send PSend16843 = new_Send((Optr)VAR_thread_0_0, SMB_continuation, 0);
    Symbol SMB_continue = new_Symbol(L"continue");
    // continue. 
    Send PSend16844 = new_Send((Optr)PSend16843, SMB_continue, 0);
    Array PThreadedCode16820 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_closure, (Optr)PBlock16821, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16826, (Optr)&t_send1, (Optr)PSend16827, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16828, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16829, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16830, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16831, (Optr)&t_send1, (Optr)PSend16840, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16841, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16842, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16843, (Optr)&t_send0, (Optr)PSend16844, (Optr)&t_method_return);
    Block PBlock16818 = new_Block_with(PArray16819, empty_Array, PThreadedCode16820, 6, PSend16827, PSend16828, PAssign16829, PSend16840, PAssign16841, PSend16844);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16845 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16818);
    Array PThreadedCode16817 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16818, (Optr)&t_send1, (Optr)PSend16845, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16815 = new_Method_with(empty_Array, PArray16816, empty_Array, PThreadedCode16817, 2, PSend16845, self);
    
    MethodClosure MC_SMB_switchThread = new_MethodClosure((Method)PMethod16815, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_switchThread, MC_SMB_switchThread);
}


static void init_SMB_showInvocation() {
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16847 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16850 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16849 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16850);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend16851 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    // x. 
    Send PSend16852 = new_Send((Optr)PSend16851, SMB_x, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16853 = new_Send((Optr)PSend16852, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16854 = new_Send((Optr)PSend16853, SMB_name, 0);
    String string_16855 = new_String(L"@");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16855_Const = new_Constant((Optr)string_16855);
    // ,. 
    Send PSend16856 = new_Send((Optr)PSend16854, SMB__append_, 1, (Optr)string_16855_Const);
    // x. 
    Send PSend16857 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend16858 = new_Send((Optr)PSend16857, SMB_y, 0);
    // name. 
    Send PSend16859 = new_Send((Optr)PSend16858, SMB_name, 0);
    // ,. 
    Send PSend16860 = new_Send((Optr)PSend16856, SMB__append_, 1, (Optr)PSend16859);
    String string_16861 = new_String(L">>");
    Constant string_16861_Const = new_Constant((Optr)string_16861);
    // ,. 
    Send PSend16862 = new_Send((Optr)PSend16860, SMB__append_, 1, (Optr)string_16861_Const);
    // y. 
    Send PSend16863 = new_Send((Optr)VAR_current_0_0, SMB_y, 0);
    // ,. 
    Send PSend16864 = new_Send((Optr)PSend16862, SMB__append_, 1, (Optr)PSend16863);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16865 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16864);
    Array PThreadedCode16848 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign16849, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16850, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16851, (Optr)&t_send0, (Optr)PSend16852, (Optr)&t_send0, (Optr)PSend16853, (Optr)&t_send0, (Optr)PSend16854, (Optr)&t_push1, (Optr)string_16855, (Optr)&t_send1, (Optr)PSend16856, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16857, (Optr)&t_send0, (Optr)PSend16858, (Optr)&t_send0, (Optr)PSend16859, (Optr)&t_send1, (Optr)PSend16860, (Optr)&t_push1, (Optr)string_16861, (Optr)&t_send1, (Optr)PSend16862, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16863, (Optr)&t_send1, (Optr)PSend16864, (Optr)&t_send1, (Optr)PSend16865, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16846 = new_Method_with(empty_Array, PArray16847, empty_Array, PThreadedCode16848, 3, PAssign16849, PSend16865, self);
    
    MethodClosure MC_SMB_showInvocation = new_MethodClosure((Method)PMethod16846, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showInvocation, MC_SMB_showInvocation);
}


static void init_SMB_show_() {
    Symbol SMB_show_ = new_Symbol(L"show:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16867 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16869 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16871 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16873 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16874 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16872 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16873, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16874, (Optr)&t_method_return);
    Block PBlock16870 = new_Block_with(PArray16871, empty_Array, PThreadedCode16872, 2, PSend16873, PSend16874);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16875 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16876 = new_Send((Optr)PBlock16870, SMB_value_, 1, (Optr)PSend16875);
    Array PThreadedCode16868 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16869, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16870, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16875, (Optr)&t_send1, (Optr)PSend16876, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16866 = new_Method_with(PArray16867, empty_Array, empty_Array, PThreadedCode16868, 3, PSend16869, PSend16876, self);
    
    MethodClosure MC_SMB_show_ = new_MethodClosure((Method)PMethod16866, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_show_, MC_SMB_show_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16878 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16879 = new_Array_with(1, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16882 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16884 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend16885 = new_Send((Optr)PSend16884, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend16890 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16889 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16890);
    Super PSuper16892 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Assign PAssign16891 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16892);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend16894 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign16893 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16894);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16895 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_1);
    Array PThreadedCode16888 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16889, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16890, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16891, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16892, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16893, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16894, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16895, (Optr)&t_block_return);
    Block PBlock16887 = new_Block_with(empty_Array, empty_Array, PThreadedCode16888, 4, PAssign16889, PAssign16891, PAssign16893, PSend16895);
    // ifTrue:. 
    Send PSend16886 = new_Send((Optr)PSend16885, SMB_ifTrue_, 1, (Optr)PBlock16887);
    Super PSuper16896 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16883 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16884, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16885, (Optr)&t_send_ifTrue_, (Optr)PSend16886, (Optr)PBlock16887, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16896, (Optr)&t_method_return);
    Block PBlock16881 = new_Block_with(PArray16882, empty_Array, PThreadedCode16883, 2, PSend16886, PSuper16896);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16897 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16881);
    Array PThreadedCode16880 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16881, (Optr)&t_send1, (Optr)PSend16897, (Optr)&t_method_return);
    Method PMethod16877 = new_Method_with(PArray16878, PArray16879, empty_Array, PThreadedCode16880, 1, PSend16897);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16877, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_visitSend_, MC_SMB_visitSend_);
}

void init_Interpretation_PParallelDebugger_layout() {
    layout_Interpretation_ParallelDebugger_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_ParallelDebugger_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_ParallelDebugger_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_ParallelDebugger_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_ParallelDebugger_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_ParallelDebugger_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ParallelDebugger = new_Symbol(L"ParallelDebugger");
    slot_Interpretation_ParallelDebugger_localIndent = (Optr)new_Slot(3, L"localIndent");
    slot_Interpretation_ParallelDebugger_threads = (Optr)new_Slot(4, L"threads");
    slot_Interpretation_ParallelDebugger_states = (Optr)new_Slot(5, L"states");
    layout_Interpretation_ParallelDebugger = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Interpretation_ParallelDebugger)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_ParallelDebugger)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    ((Array)layout_Interpretation_ParallelDebugger)->values[2] = slot_Interpretation_SteppingInterpreter_stepBlock; // stepBlock 
    ((Array)layout_Interpretation_ParallelDebugger)->values[3] = slot_Interpretation_ParallelDebugger_localIndent; // localIndent 
    ((Array)layout_Interpretation_ParallelDebugger)->values[4] = slot_Interpretation_ParallelDebugger_threads; // threads 
    ((Array)layout_Interpretation_ParallelDebugger)->values[5] = slot_Interpretation_ParallelDebugger_states; // states 
    Interpretation_ParallelDebugger_Class = (Class)new_Class(Interpretation_SteppingInterpreter_Class, layout_Interpretation_ParallelDebugger_Class_class);
    Interpretation_ParallelDebugger_Class->layout = layout_Interpretation_ParallelDebugger;
    Interpretation_ParallelDebugger_Class->name = SMB_ParallelDebugger;
    
}

void init_Interpretation_PParallelDebugger_methods() {
    init_SMB_indent();
    init_SMB_interpret_();
    init_SMB_initialize_();
    init_SMB_defaultStepBlock();
    init_SMB_initialize();
    init_SMB_showReturn();
    init_SMB_switchThread();
    init_SMB_showInvocation();
    init_SMB_show_();
    init_SMB_visitSend_();
    
}