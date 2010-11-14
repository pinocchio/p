#include <lib/class/Interpretation/ParallelDebugger.h>


Optr layout_Interpretation_ParallelDebugger_Class_class;
Optr slot_Interpretation_ParallelDebugger_localIndent;
Optr slot_Interpretation_ParallelDebugger_threads;
Optr slot_Interpretation_ParallelDebugger_states;
Optr layout_Interpretation_ParallelDebugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16722 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16725 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16731 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16730 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16731, (Optr)&t_block_return);
    Block PBlock16729 = new_Block_with(empty_Array, empty_Array, PThreadedCode16730, 1, PSend16731);
    // ifNil:. 
    Send PSend16728 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16729);
    Assign PAssign16727 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16728);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16735 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16734 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16735);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16736 = new_Send((Optr)PAssign16734, SMB_isNil, 0);
    Array PThreadedCode16733 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16734, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16735, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16736, (Optr)&t_block_return);
    Block PBlock16732 = new_Block_with(empty_Array, empty_Array, PThreadedCode16733, 1, PSend16736);
    String string_16739 = new_String(L"  ");
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Constant string_16739_Const = new_Constant((Optr)string_16739);
    // stderr:. 
    Send PSend16740 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16739_Const);
    Array PThreadedCode16738 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16739, (Optr)&t_send1, (Optr)PSend16740, (Optr)&t_block_return);
    Block PBlock16737 = new_Block_with(empty_Array, empty_Array, PThreadedCode16738, 1, PSend16740);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16741 = new_Send((Optr)PBlock16732, SMB_whileFalse_, 1, (Optr)PBlock16737);
    String string_16744 = new_String(L"  ");
    Constant string_16744_Const = new_Constant((Optr)string_16744);
    // stderr:. 
    Send PSend16745 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16744_Const);
    Array PThreadedCode16743 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16744, (Optr)&t_send1, (Optr)PSend16745, (Optr)&t_block_return);
    Block PBlock16742 = new_Block_with(empty_Array, empty_Array, PThreadedCode16743, 1, PSend16745);
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    // doTimes:. 
    Send PSend16746 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB_doTimes_, 1, (Optr)PBlock16742);
    Array PThreadedCode16726 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16727, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16729, (Optr)&t_send1, (Optr)PSend16728, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16732, (Optr)&t_push_closure, (Optr)PBlock16737, (Optr)&t_send1, (Optr)PSend16741, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_closure, (Optr)PBlock16742, (Optr)&t_send1, (Optr)PSend16746, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16724 = new_Block_with(PArray16725, empty_Array, PThreadedCode16726, 4, PAssign16727, PSend16741, PSend16746, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16747 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16724);
    Array PThreadedCode16723 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16724, (Optr)&t_send1, (Optr)PSend16747, (Optr)&t_method_return);
    Method PMethod16721 = new_Method_with(empty_Array, PArray16722, empty_Array, PThreadedCode16723, 1, PSend16747);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16721, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_closures_0_0 = new_Variable_named(L"closures", 0);
    Array PArray16749 = new_Array_with(1, (Optr)VAR_closures_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16752 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16754 = new_Send((Optr)VAR_closures_0_0, SMB_size, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend16755 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend16754);
    Variable VAR_aClosure_2_0 = new_Variable_named(L"aClosure", 2);
    Array PArray16757 = new_Array_with(1, (Optr)VAR_aClosure_2_0);
    Variable VAR_startNext_3_0 = new_Variable_named(L"startNext", 3);
    Array PArray16760 = new_Array_with(1, (Optr)VAR_startNext_3_0);
    Variable VAR_thread_4_0 = new_Variable_named(L"thread", 4);
    Array PArray16763 = new_Array_with(1, (Optr)VAR_thread_4_0);
    Variable VAR__receiver__5_0 = new_Variable_named(L"_receiver_", 5);
    Array PArray16766 = new_Array_with(1, (Optr)VAR__receiver__5_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16768 = new_Send((Optr)VAR__receiver__5_0, SMB_continuation_, 1, (Optr)VAR_startNext_3_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16769 = new_Send((Optr)VAR__receiver__5_0, SMB_context_, 1, (Optr)nil_Const);
    Array PThreadedCode16767 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_variable, (Optr)VAR_startNext_3_0, (Optr)&t_send1, (Optr)PSend16768, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16769, (Optr)&t_method_return);
    Block PBlock16765 = new_Block_with(PArray16766, empty_Array, PThreadedCode16767, 2, PSend16768, PSend16769);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16770 = new_Send((Optr)PBlock16765, SMB_value_, 1, (Optr)VAR_thread_4_0);
    Array PThreadedCode16764 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock16765, (Optr)&t_push_variable, (Optr)VAR_thread_4_0, (Optr)&t_send1, (Optr)PSend16770, (Optr)&t_method_return);
    Block PBlock16762 = new_Block_with(PArray16763, empty_Array, PThreadedCode16764, 1, PSend16770);
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    // ifHasNext:. 
    Send PSend16771 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifHasNext_, 1, (Optr)PBlock16762);
    Super PSuper16772 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16773 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper16772);
    Array PThreadedCode16761 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16762, (Optr)&t_send1, (Optr)PSend16771, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_2_0, (Optr)&t_super1, (Optr)PSuper16772, (Optr)&t_send1, (Optr)PSend16773, (Optr)&t_method_return);
    Block PBlock16759 = new_Block_with(PArray16760, empty_Array, PThreadedCode16761, 2, PSend16771, PSend16773);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16774 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16759);
    Array PThreadedCode16758 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16759, (Optr)&t_send1, (Optr)PSend16774, (Optr)&t_method_return);
    Block PBlock16756 = new_Block_with(PArray16757, empty_Array, PThreadedCode16758, 1, PSend16774);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16775 = new_Send((Optr)VAR_closures_0_0, SMB_do_, 1, (Optr)PBlock16756);
    Array PThreadedCode16753 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_send0, (Optr)PSend16754, (Optr)&t_send1, (Optr)PSend16755, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_push_closure, (Optr)PBlock16756, (Optr)&t_send1, (Optr)PSend16775, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16751 = new_Block_with(PArray16752, empty_Array, PThreadedCode16753, 3, PSend16755, PSend16775, self);
    // on:. 
    Send PSend16776 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16751);
    Array PThreadedCode16750 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16751, (Optr)&t_send1, (Optr)PSend16776, (Optr)&t_method_return);
    Method PMethod16748 = new_Method_with(PArray16749, empty_Array, empty_Array, PThreadedCode16750, 1, PSend16776);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16748, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray16778 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16781 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16780 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)PSend16781);
    // new:. 
    Send PSend16783 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16782 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_states, (Optr)PSend16783);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray16785 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16787 = new_Send((Optr)PFakeThread_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16788 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend16787);
    Array PThreadedCode16786 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_class_reference, (Optr)PFakeThread_classReference, (Optr)&t_send0, (Optr)PSend16787, (Optr)&t_send2, (Optr)PSend16788, (Optr)&t_method_return);
    Block PBlock16784 = new_Block_with(PArray16785, empty_Array, PThreadedCode16786, 1, PSend16788);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend16789 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock16784);
    Array PThreadedCode16779 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16780, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16781, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16782, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16783, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock16784, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend16789, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16777 = new_Method_with(PArray16778, empty_Array, empty_Array, PThreadedCode16779, 4, PAssign16780, PAssign16782, PSend16789, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod16777, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16793 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend16795 = new_Send((Optr)VAR_receiver_1_0, SMB__at_, 1, (Optr)VAR_class_1_1);
    // @. 
    Send PSend16796 = new_Send((Optr)PSend16795, SMB__at_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_put_ = new_Symbol(L"put:");
    // put:. 
    Send PSend16797 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16796);
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    // showInvocation. 
    Send PSend16798 = new_Send((Optr)self, SMB_showInvocation, 0);
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    // switchThread. 
    Send PSend16799 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16800 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    // put:. 
    Send PSend16801 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16800);
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    // showReturn. 
    Send PSend16802 = new_Send((Optr)self, SMB_showReturn, 0);
    // switchThread. 
    Send PSend16803 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16804 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Array PThreadedCode16794 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_send1, (Optr)PSend16795, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16796, (Optr)&t_send1, (Optr)PSend16797, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16798, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16799, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16800, (Optr)&t_send1, (Optr)PSend16801, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16802, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16803, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16804, (Optr)&t_method_return);
    Block PBlock16792 = new_Block_with(PArray16793, empty_Array, PThreadedCode16794, 7, PSend16797, PSend16798, PSend16799, PSend16801, PSend16802, PSend16803, PSend16804);
    Array PThreadedCode16791 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16792, (Optr)&t_method_return);
    Method PMethod16790 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16791, 1, PBlock16792);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16790, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16807 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16808 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)int_0_Const);
    Array PThreadedCode16806 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16807, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16808, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16805 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16806, 3, PSuper16807, PAssign16808, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16805, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_showReturn() {
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16810 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16813 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16812 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16813);
    String string_16814 = new_String(L"--> ");
    Constant string_16814_Const = new_Constant((Optr)string_16814);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16815 = new_Send((Optr)string_16814_Const, SMB__append_, 1, (Optr)VAR_current_0_0);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16816 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16815);
    Array PThreadedCode16811 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16812, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16813, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16814, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send1, (Optr)PSend16815, (Optr)&t_send1, (Optr)PSend16816, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16809 = new_Method_with(empty_Array, PArray16810, empty_Array, PThreadedCode16811, 3, PAssign16812, PSend16816, self);
    
    MethodClosure MC_SMB_showReturn = new_MethodClosure((Method)PMethod16809, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showReturn, MC_SMB_showReturn);
}


static void init_SMB_switchThread() {
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    Variable VAR_thread_0_0 = new_Variable_named(L"thread", 0);
    Array PArray16818 = new_Array_with(1, (Optr)VAR_thread_0_0);
    Variable VAR_aContinuation_1_0 = new_Variable_named(L"aContinuation", 1);
    Array PArray16821 = new_Array_with(1, (Optr)VAR_aContinuation_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16824 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16826 = new_Send((Optr)VAR__receiver__2_0, SMB_continuation_, 1, (Optr)VAR_aContinuation_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16827 = new_Send((Optr)VAR__receiver__2_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16825 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aContinuation_1_0, (Optr)&t_send1, (Optr)PSend16826, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16827, (Optr)&t_method_return);
    Block PBlock16823 = new_Block_with(PArray16824, empty_Array, PThreadedCode16825, 2, PSend16826, PSend16827);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16828 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_current, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16829 = new_Send((Optr)PBlock16823, SMB_value_, 1, (Optr)PSend16828);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend16830 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_next, 0);
    // next. 
    Send PSend16832 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_next, 0);
    Assign PAssign16831 = new_Assign((Optr)VAR_thread_0_0, (Optr)PSend16832);
    Variable VAR_aState_2_0 = new_Variable_named(L"aState", 2);
    Array PArray16836 = new_Array_with(1, (Optr)VAR_aState_2_0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16838 = new_Send((Optr)VAR_aState_2_0, SMB_should, 0);
    // current. 
    Send PSend16839 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend16840 = new_Send((Optr)PSend16838, SMB_be_, 1, (Optr)PSend16839);
    Array PThreadedCode16837 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aState_2_0, (Optr)&t_send0, (Optr)PSend16838, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16839, (Optr)&t_send1, (Optr)PSend16840, (Optr)&t_method_return);
    Block PBlock16835 = new_Block_with(PArray16836, empty_Array, PThreadedCode16837, 1, PSend16840);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16841 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_do_, 1, (Optr)PBlock16835);
    Array PThreadedCode16834 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_closure, (Optr)PBlock16835, (Optr)&t_send1, (Optr)PSend16841, (Optr)&t_block_return);
    Block PBlock16833 = new_Block_with(empty_Array, empty_Array, PThreadedCode16834, 1, PSend16841);
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    // ifAtFirst:. 
    Send PSend16842 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifAtFirst_, 1, (Optr)PBlock16833);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16844 = new_Send((Optr)VAR_thread_0_0, SMB_context, 0);
    Assign PAssign16843 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16844);
    Symbol SMB_continuation = new_Symbol(L"continuation");
    // continuation. 
    Send PSend16845 = new_Send((Optr)VAR_thread_0_0, SMB_continuation, 0);
    Symbol SMB_continue = new_Symbol(L"continue");
    // continue. 
    Send PSend16846 = new_Send((Optr)PSend16845, SMB_continue, 0);
    Array PThreadedCode16822 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_closure, (Optr)PBlock16823, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16828, (Optr)&t_send1, (Optr)PSend16829, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16830, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16831, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16832, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16833, (Optr)&t_send1, (Optr)PSend16842, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16843, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16844, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16845, (Optr)&t_send0, (Optr)PSend16846, (Optr)&t_method_return);
    Block PBlock16820 = new_Block_with(PArray16821, empty_Array, PThreadedCode16822, 6, PSend16829, PSend16830, PAssign16831, PSend16842, PAssign16843, PSend16846);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16847 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16820);
    Array PThreadedCode16819 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16820, (Optr)&t_send1, (Optr)PSend16847, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16817 = new_Method_with(empty_Array, PArray16818, empty_Array, PThreadedCode16819, 2, PSend16847, self);
    
    MethodClosure MC_SMB_switchThread = new_MethodClosure((Method)PMethod16817, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_switchThread, MC_SMB_switchThread);
}


static void init_SMB_showInvocation() {
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16849 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16852 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16851 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16852);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend16853 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    // x. 
    Send PSend16854 = new_Send((Optr)PSend16853, SMB_x, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16855 = new_Send((Optr)PSend16854, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16856 = new_Send((Optr)PSend16855, SMB_name, 0);
    String string_16857 = new_String(L"@");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16857_Const = new_Constant((Optr)string_16857);
    // ,. 
    Send PSend16858 = new_Send((Optr)PSend16856, SMB__append_, 1, (Optr)string_16857_Const);
    // x. 
    Send PSend16859 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend16860 = new_Send((Optr)PSend16859, SMB_y, 0);
    // name. 
    Send PSend16861 = new_Send((Optr)PSend16860, SMB_name, 0);
    // ,. 
    Send PSend16862 = new_Send((Optr)PSend16858, SMB__append_, 1, (Optr)PSend16861);
    String string_16863 = new_String(L">>");
    Constant string_16863_Const = new_Constant((Optr)string_16863);
    // ,. 
    Send PSend16864 = new_Send((Optr)PSend16862, SMB__append_, 1, (Optr)string_16863_Const);
    // y. 
    Send PSend16865 = new_Send((Optr)VAR_current_0_0, SMB_y, 0);
    // ,. 
    Send PSend16866 = new_Send((Optr)PSend16864, SMB__append_, 1, (Optr)PSend16865);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16867 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16866);
    Array PThreadedCode16850 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign16851, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16852, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16853, (Optr)&t_send0, (Optr)PSend16854, (Optr)&t_send0, (Optr)PSend16855, (Optr)&t_send0, (Optr)PSend16856, (Optr)&t_push1, (Optr)string_16857, (Optr)&t_send1, (Optr)PSend16858, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16859, (Optr)&t_send0, (Optr)PSend16860, (Optr)&t_send0, (Optr)PSend16861, (Optr)&t_send1, (Optr)PSend16862, (Optr)&t_push1, (Optr)string_16863, (Optr)&t_send1, (Optr)PSend16864, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16865, (Optr)&t_send1, (Optr)PSend16866, (Optr)&t_send1, (Optr)PSend16867, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16848 = new_Method_with(empty_Array, PArray16849, empty_Array, PThreadedCode16850, 3, PAssign16851, PSend16867, self);
    
    MethodClosure MC_SMB_showInvocation = new_MethodClosure((Method)PMethod16848, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showInvocation, MC_SMB_showInvocation);
}


static void init_SMB_show_() {
    Symbol SMB_show_ = new_Symbol(L"show:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16869 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16871 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16873 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16875 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16876 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16874 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16875, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16876, (Optr)&t_method_return);
    Block PBlock16872 = new_Block_with(PArray16873, empty_Array, PThreadedCode16874, 2, PSend16875, PSend16876);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16877 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16878 = new_Send((Optr)PBlock16872, SMB_value_, 1, (Optr)PSend16877);
    Array PThreadedCode16870 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16871, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16872, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16877, (Optr)&t_send1, (Optr)PSend16878, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16868 = new_Method_with(PArray16869, empty_Array, empty_Array, PThreadedCode16870, 3, PSend16871, PSend16878, self);
    
    MethodClosure MC_SMB_show_ = new_MethodClosure((Method)PMethod16868, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_show_, MC_SMB_show_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16880 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16881 = new_Array_with(1, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16884 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16886 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend16887 = new_Send((Optr)PSend16886, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend16892 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16891 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16892);
    Super PSuper16894 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Assign PAssign16893 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16894);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend16896 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign16895 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16896);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16897 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_1);
    Array PThreadedCode16890 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16891, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16892, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16893, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16894, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16895, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16896, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16897, (Optr)&t_block_return);
    Block PBlock16889 = new_Block_with(empty_Array, empty_Array, PThreadedCode16890, 4, PAssign16891, PAssign16893, PAssign16895, PSend16897);
    // ifTrue:. 
    Send PSend16888 = new_Send((Optr)PSend16887, SMB_ifTrue_, 1, (Optr)PBlock16889);
    Super PSuper16898 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16885 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16886, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16887, (Optr)&t_send_ifTrue_, (Optr)PSend16888, (Optr)PBlock16889, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16898, (Optr)&t_method_return);
    Block PBlock16883 = new_Block_with(PArray16884, empty_Array, PThreadedCode16885, 2, PSend16888, PSuper16898);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16899 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16883);
    Array PThreadedCode16882 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16883, (Optr)&t_send1, (Optr)PSend16899, (Optr)&t_method_return);
    Method PMethod16879 = new_Method_with(PArray16880, PArray16881, empty_Array, PThreadedCode16882, 1, PSend16899);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16879, Interpretation_ParallelDebugger_Class);
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