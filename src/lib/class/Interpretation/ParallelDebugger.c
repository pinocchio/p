#include <lib/class/Interpretation/ParallelDebugger.h>


Optr layout_Interpretation_ParallelDebugger_Class_class;
Optr slot_Interpretation_ParallelDebugger_localIndent;
Optr slot_Interpretation_ParallelDebugger_threads;
Optr slot_Interpretation_ParallelDebugger_states;
Optr layout_Interpretation_ParallelDebugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16754 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16757 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16763 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16762 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16763, (Optr)&t_block_return);
    Block PBlock16761 = new_Block_with(empty_Array, empty_Array, PThreadedCode16762, 1, PSend16763);
    // ifNil:. 
    Send PSend16760 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16761);
    Assign PAssign16759 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16760);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16767 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16766 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16767);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16768 = new_Send((Optr)PAssign16766, SMB_isNil, 0);
    Array PThreadedCode16765 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16766, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16767, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16768, (Optr)&t_block_return);
    Block PBlock16764 = new_Block_with(empty_Array, empty_Array, PThreadedCode16765, 1, PSend16768);
    String string_16771 = new_String(L"  ");
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Constant string_16771_Const = new_Constant((Optr)string_16771);
    // stderr:. 
    Send PSend16772 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16771_Const);
    Array PThreadedCode16770 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16771, (Optr)&t_send1, (Optr)PSend16772, (Optr)&t_block_return);
    Block PBlock16769 = new_Block_with(empty_Array, empty_Array, PThreadedCode16770, 1, PSend16772);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16773 = new_Send((Optr)PBlock16764, SMB_whileFalse_, 1, (Optr)PBlock16769);
    String string_16776 = new_String(L"  ");
    Constant string_16776_Const = new_Constant((Optr)string_16776);
    // stderr:. 
    Send PSend16777 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16776_Const);
    Array PThreadedCode16775 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16776, (Optr)&t_send1, (Optr)PSend16777, (Optr)&t_block_return);
    Block PBlock16774 = new_Block_with(empty_Array, empty_Array, PThreadedCode16775, 1, PSend16777);
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    // doTimes:. 
    Send PSend16778 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB_doTimes_, 1, (Optr)PBlock16774);
    Array PThreadedCode16758 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16759, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16761, (Optr)&t_send1, (Optr)PSend16760, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16764, (Optr)&t_push_closure, (Optr)PBlock16769, (Optr)&t_send1, (Optr)PSend16773, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_closure, (Optr)PBlock16774, (Optr)&t_send1, (Optr)PSend16778, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16756 = new_Block_with(PArray16757, empty_Array, PThreadedCode16758, 4, PAssign16759, PSend16773, PSend16778, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16779 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16756);
    Array PThreadedCode16755 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16756, (Optr)&t_send1, (Optr)PSend16779, (Optr)&t_method_return);
    Method PMethod16753 = new_Method_with(empty_Array, PArray16754, empty_Array, PThreadedCode16755, 1, PSend16779);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16753, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_closures_0_0 = new_Variable_named(L"closures", 0);
    Array PArray16781 = new_Array_with(1, (Optr)VAR_closures_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16784 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16786 = new_Send((Optr)VAR_closures_0_0, SMB_size, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend16787 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend16786);
    Variable VAR_aClosure_2_0 = new_Variable_named(L"aClosure", 2);
    Array PArray16789 = new_Array_with(1, (Optr)VAR_aClosure_2_0);
    Variable VAR_startNext_3_0 = new_Variable_named(L"startNext", 3);
    Array PArray16792 = new_Array_with(1, (Optr)VAR_startNext_3_0);
    Variable VAR_thread_4_0 = new_Variable_named(L"thread", 4);
    Array PArray16795 = new_Array_with(1, (Optr)VAR_thread_4_0);
    Variable VAR__receiver__5_0 = new_Variable_named(L"_receiver_", 5);
    Array PArray16798 = new_Array_with(1, (Optr)VAR__receiver__5_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16800 = new_Send((Optr)VAR__receiver__5_0, SMB_continuation_, 1, (Optr)VAR_startNext_3_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16801 = new_Send((Optr)VAR__receiver__5_0, SMB_context_, 1, (Optr)nil_Const);
    Array PThreadedCode16799 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_variable, (Optr)VAR_startNext_3_0, (Optr)&t_send1, (Optr)PSend16800, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16801, (Optr)&t_method_return);
    Block PBlock16797 = new_Block_with(PArray16798, empty_Array, PThreadedCode16799, 2, PSend16800, PSend16801);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16802 = new_Send((Optr)PBlock16797, SMB_value_, 1, (Optr)VAR_thread_4_0);
    Array PThreadedCode16796 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock16797, (Optr)&t_push_variable, (Optr)VAR_thread_4_0, (Optr)&t_send1, (Optr)PSend16802, (Optr)&t_method_return);
    Block PBlock16794 = new_Block_with(PArray16795, empty_Array, PThreadedCode16796, 1, PSend16802);
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    // ifHasNext:. 
    Send PSend16803 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifHasNext_, 1, (Optr)PBlock16794);
    Super PSuper16804 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16805 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper16804);
    Array PThreadedCode16793 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16794, (Optr)&t_send1, (Optr)PSend16803, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_2_0, (Optr)&t_super1, (Optr)PSuper16804, (Optr)&t_send1, (Optr)PSend16805, (Optr)&t_method_return);
    Block PBlock16791 = new_Block_with(PArray16792, empty_Array, PThreadedCode16793, 2, PSend16803, PSend16805);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16806 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16791);
    Array PThreadedCode16790 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16791, (Optr)&t_send1, (Optr)PSend16806, (Optr)&t_method_return);
    Block PBlock16788 = new_Block_with(PArray16789, empty_Array, PThreadedCode16790, 1, PSend16806);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16807 = new_Send((Optr)VAR_closures_0_0, SMB_do_, 1, (Optr)PBlock16788);
    Array PThreadedCode16785 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_send0, (Optr)PSend16786, (Optr)&t_send1, (Optr)PSend16787, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_push_closure, (Optr)PBlock16788, (Optr)&t_send1, (Optr)PSend16807, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16783 = new_Block_with(PArray16784, empty_Array, PThreadedCode16785, 3, PSend16787, PSend16807, self);
    // on:. 
    Send PSend16808 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16783);
    Array PThreadedCode16782 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16783, (Optr)&t_send1, (Optr)PSend16808, (Optr)&t_method_return);
    Method PMethod16780 = new_Method_with(PArray16781, empty_Array, empty_Array, PThreadedCode16782, 1, PSend16808);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16780, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray16810 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16813 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16812 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)PSend16813);
    // new:. 
    Send PSend16815 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16814 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_states, (Optr)PSend16815);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray16817 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16819 = new_Send((Optr)PFakeThread_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16820 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend16819);
    Array PThreadedCode16818 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_class_reference, (Optr)PFakeThread_classReference, (Optr)&t_send0, (Optr)PSend16819, (Optr)&t_send2, (Optr)PSend16820, (Optr)&t_method_return);
    Block PBlock16816 = new_Block_with(PArray16817, empty_Array, PThreadedCode16818, 1, PSend16820);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend16821 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock16816);
    Array PThreadedCode16811 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16812, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16813, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16814, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16815, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock16816, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend16821, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16809 = new_Method_with(PArray16810, empty_Array, empty_Array, PThreadedCode16811, 4, PAssign16812, PAssign16814, PSend16821, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod16809, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16825 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend16827 = new_Send((Optr)VAR_receiver_1_0, SMB__at_, 1, (Optr)VAR_class_1_1);
    // @. 
    Send PSend16828 = new_Send((Optr)PSend16827, SMB__at_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_put_ = new_Symbol(L"put:");
    // put:. 
    Send PSend16829 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16828);
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    // showInvocation. 
    Send PSend16830 = new_Send((Optr)self, SMB_showInvocation, 0);
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    // switchThread. 
    Send PSend16831 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16832 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    // put:. 
    Send PSend16833 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16832);
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    // showReturn. 
    Send PSend16834 = new_Send((Optr)self, SMB_showReturn, 0);
    // switchThread. 
    Send PSend16835 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16836 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Array PThreadedCode16826 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_send1, (Optr)PSend16827, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16828, (Optr)&t_send1, (Optr)PSend16829, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16830, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16831, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16832, (Optr)&t_send1, (Optr)PSend16833, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16834, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16835, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16836, (Optr)&t_method_return);
    Block PBlock16824 = new_Block_with(PArray16825, empty_Array, PThreadedCode16826, 7, PSend16829, PSend16830, PSend16831, PSend16833, PSend16834, PSend16835, PSend16836);
    Array PThreadedCode16823 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16824, (Optr)&t_method_return);
    Method PMethod16822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16823, 1, PBlock16824);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16822, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16839 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16840 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)int_0_Const);
    Array PThreadedCode16838 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16839, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16840, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16838, 3, PSuper16839, PAssign16840, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16837, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_showReturn() {
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16842 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16845 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16844 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16845);
    String string_16846 = new_String(L"--> ");
    Constant string_16846_Const = new_Constant((Optr)string_16846);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16847 = new_Send((Optr)string_16846_Const, SMB__append_, 1, (Optr)VAR_current_0_0);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16848 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16847);
    Array PThreadedCode16843 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16844, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16845, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16846, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send1, (Optr)PSend16847, (Optr)&t_send1, (Optr)PSend16848, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16841 = new_Method_with(empty_Array, PArray16842, empty_Array, PThreadedCode16843, 3, PAssign16844, PSend16848, self);
    
    MethodClosure MC_SMB_showReturn = new_MethodClosure((Method)PMethod16841, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showReturn, MC_SMB_showReturn);
}


static void init_SMB_switchThread() {
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    Variable VAR_thread_0_0 = new_Variable_named(L"thread", 0);
    Array PArray16850 = new_Array_with(1, (Optr)VAR_thread_0_0);
    Variable VAR_aContinuation_1_0 = new_Variable_named(L"aContinuation", 1);
    Array PArray16853 = new_Array_with(1, (Optr)VAR_aContinuation_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16856 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16858 = new_Send((Optr)VAR__receiver__2_0, SMB_continuation_, 1, (Optr)VAR_aContinuation_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16859 = new_Send((Optr)VAR__receiver__2_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16857 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aContinuation_1_0, (Optr)&t_send1, (Optr)PSend16858, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16859, (Optr)&t_method_return);
    Block PBlock16855 = new_Block_with(PArray16856, empty_Array, PThreadedCode16857, 2, PSend16858, PSend16859);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16860 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_current, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16861 = new_Send((Optr)PBlock16855, SMB_value_, 1, (Optr)PSend16860);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend16862 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_next, 0);
    // next. 
    Send PSend16864 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_next, 0);
    Assign PAssign16863 = new_Assign((Optr)VAR_thread_0_0, (Optr)PSend16864);
    Variable VAR_aState_2_0 = new_Variable_named(L"aState", 2);
    Array PArray16868 = new_Array_with(1, (Optr)VAR_aState_2_0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16870 = new_Send((Optr)VAR_aState_2_0, SMB_should, 0);
    // current. 
    Send PSend16871 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend16872 = new_Send((Optr)PSend16870, SMB_be_, 1, (Optr)PSend16871);
    Array PThreadedCode16869 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aState_2_0, (Optr)&t_send0, (Optr)PSend16870, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16871, (Optr)&t_send1, (Optr)PSend16872, (Optr)&t_method_return);
    Block PBlock16867 = new_Block_with(PArray16868, empty_Array, PThreadedCode16869, 1, PSend16872);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16873 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_do_, 1, (Optr)PBlock16867);
    Array PThreadedCode16866 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_closure, (Optr)PBlock16867, (Optr)&t_send1, (Optr)PSend16873, (Optr)&t_block_return);
    Block PBlock16865 = new_Block_with(empty_Array, empty_Array, PThreadedCode16866, 1, PSend16873);
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    // ifAtFirst:. 
    Send PSend16874 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifAtFirst_, 1, (Optr)PBlock16865);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16876 = new_Send((Optr)VAR_thread_0_0, SMB_context, 0);
    Assign PAssign16875 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16876);
    Symbol SMB_continuation = new_Symbol(L"continuation");
    // continuation. 
    Send PSend16877 = new_Send((Optr)VAR_thread_0_0, SMB_continuation, 0);
    Symbol SMB_continue = new_Symbol(L"continue");
    // continue. 
    Send PSend16878 = new_Send((Optr)PSend16877, SMB_continue, 0);
    Array PThreadedCode16854 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_closure, (Optr)PBlock16855, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16860, (Optr)&t_send1, (Optr)PSend16861, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16862, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16863, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16864, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16865, (Optr)&t_send1, (Optr)PSend16874, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16875, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16876, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16877, (Optr)&t_send0, (Optr)PSend16878, (Optr)&t_method_return);
    Block PBlock16852 = new_Block_with(PArray16853, empty_Array, PThreadedCode16854, 6, PSend16861, PSend16862, PAssign16863, PSend16874, PAssign16875, PSend16878);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16879 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16852);
    Array PThreadedCode16851 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16852, (Optr)&t_send1, (Optr)PSend16879, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16849 = new_Method_with(empty_Array, PArray16850, empty_Array, PThreadedCode16851, 2, PSend16879, self);
    
    MethodClosure MC_SMB_switchThread = new_MethodClosure((Method)PMethod16849, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_switchThread, MC_SMB_switchThread);
}


static void init_SMB_showInvocation() {
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16881 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16884 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16883 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16884);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend16885 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    // x. 
    Send PSend16886 = new_Send((Optr)PSend16885, SMB_x, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16887 = new_Send((Optr)PSend16886, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16888 = new_Send((Optr)PSend16887, SMB_name, 0);
    String string_16889 = new_String(L"@");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16889_Const = new_Constant((Optr)string_16889);
    // ,. 
    Send PSend16890 = new_Send((Optr)PSend16888, SMB__append_, 1, (Optr)string_16889_Const);
    // x. 
    Send PSend16891 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend16892 = new_Send((Optr)PSend16891, SMB_y, 0);
    // name. 
    Send PSend16893 = new_Send((Optr)PSend16892, SMB_name, 0);
    // ,. 
    Send PSend16894 = new_Send((Optr)PSend16890, SMB__append_, 1, (Optr)PSend16893);
    String string_16895 = new_String(L">>");
    Constant string_16895_Const = new_Constant((Optr)string_16895);
    // ,. 
    Send PSend16896 = new_Send((Optr)PSend16894, SMB__append_, 1, (Optr)string_16895_Const);
    // y. 
    Send PSend16897 = new_Send((Optr)VAR_current_0_0, SMB_y, 0);
    // ,. 
    Send PSend16898 = new_Send((Optr)PSend16896, SMB__append_, 1, (Optr)PSend16897);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16899 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16898);
    Array PThreadedCode16882 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign16883, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16884, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16885, (Optr)&t_send0, (Optr)PSend16886, (Optr)&t_send0, (Optr)PSend16887, (Optr)&t_send0, (Optr)PSend16888, (Optr)&t_push1, (Optr)string_16889, (Optr)&t_send1, (Optr)PSend16890, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16891, (Optr)&t_send0, (Optr)PSend16892, (Optr)&t_send0, (Optr)PSend16893, (Optr)&t_send1, (Optr)PSend16894, (Optr)&t_push1, (Optr)string_16895, (Optr)&t_send1, (Optr)PSend16896, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16897, (Optr)&t_send1, (Optr)PSend16898, (Optr)&t_send1, (Optr)PSend16899, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16880 = new_Method_with(empty_Array, PArray16881, empty_Array, PThreadedCode16882, 3, PAssign16883, PSend16899, self);
    
    MethodClosure MC_SMB_showInvocation = new_MethodClosure((Method)PMethod16880, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showInvocation, MC_SMB_showInvocation);
}


static void init_SMB_show_() {
    Symbol SMB_show_ = new_Symbol(L"show:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16901 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16903 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16905 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16907 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16908 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16906 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16907, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16908, (Optr)&t_method_return);
    Block PBlock16904 = new_Block_with(PArray16905, empty_Array, PThreadedCode16906, 2, PSend16907, PSend16908);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16909 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16910 = new_Send((Optr)PBlock16904, SMB_value_, 1, (Optr)PSend16909);
    Array PThreadedCode16902 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16903, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16904, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16909, (Optr)&t_send1, (Optr)PSend16910, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16900 = new_Method_with(PArray16901, empty_Array, empty_Array, PThreadedCode16902, 3, PSend16903, PSend16910, self);
    
    MethodClosure MC_SMB_show_ = new_MethodClosure((Method)PMethod16900, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_show_, MC_SMB_show_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16912 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16913 = new_Array_with(1, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16916 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16918 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend16919 = new_Send((Optr)PSend16918, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend16924 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16923 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16924);
    Super PSuper16926 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Assign PAssign16925 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16926);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend16928 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign16927 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16928);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16929 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_1);
    Array PThreadedCode16922 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16923, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16924, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16925, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16926, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16927, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16928, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16929, (Optr)&t_block_return);
    Block PBlock16921 = new_Block_with(empty_Array, empty_Array, PThreadedCode16922, 4, PAssign16923, PAssign16925, PAssign16927, PSend16929);
    // ifTrue:. 
    Send PSend16920 = new_Send((Optr)PSend16919, SMB_ifTrue_, 1, (Optr)PBlock16921);
    Super PSuper16930 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16917 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16918, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16919, (Optr)&t_send_ifTrue_, (Optr)PSend16920, (Optr)PBlock16921, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16930, (Optr)&t_method_return);
    Block PBlock16915 = new_Block_with(PArray16916, empty_Array, PThreadedCode16917, 2, PSend16920, PSuper16930);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16931 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16915);
    Array PThreadedCode16914 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16915, (Optr)&t_send1, (Optr)PSend16931, (Optr)&t_method_return);
    Method PMethod16911 = new_Method_with(PArray16912, PArray16913, empty_Array, PThreadedCode16914, 1, PSend16931);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16911, Interpretation_ParallelDebugger_Class);
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