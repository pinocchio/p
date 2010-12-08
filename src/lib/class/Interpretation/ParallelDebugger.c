#include <lib/class/Interpretation/ParallelDebugger.h>


Optr layout_Interpretation_ParallelDebugger_Class_class;
Optr slot_Interpretation_ParallelDebugger_localIndent;
Optr slot_Interpretation_ParallelDebugger_threads;
Optr slot_Interpretation_ParallelDebugger_states;
Optr layout_Interpretation_ParallelDebugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16781 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16784 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16790 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16789 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16790, (Optr)&t_block_return);
    Block PBlock16788 = new_Block_with(empty_Array, empty_Array, PThreadedCode16789, 1, PSend16790);
    // ifNil:. 
    Send PSend16787 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16788);
    Assign PAssign16786 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16787);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16794 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16793 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16794);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16795 = new_Send((Optr)PAssign16793, SMB_isNil, 0);
    Array PThreadedCode16792 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16793, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16794, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16795, (Optr)&t_block_return);
    Block PBlock16791 = new_Block_with(empty_Array, empty_Array, PThreadedCode16792, 1, PSend16795);
    String string_16798 = new_String(L"  ");
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Constant string_16798_Const = new_Constant((Optr)string_16798);
    // stderr:. 
    Send PSend16799 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16798_Const);
    Array PThreadedCode16797 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16798, (Optr)&t_send1, (Optr)PSend16799, (Optr)&t_block_return);
    Block PBlock16796 = new_Block_with(empty_Array, empty_Array, PThreadedCode16797, 1, PSend16799);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16800 = new_Send((Optr)PBlock16791, SMB_whileFalse_, 1, (Optr)PBlock16796);
    String string_16803 = new_String(L"  ");
    Constant string_16803_Const = new_Constant((Optr)string_16803);
    // stderr:. 
    Send PSend16804 = new_Send((Optr)PFile_classReference, SMB_stderr_, 1, (Optr)string_16803_Const);
    Array PThreadedCode16802 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_push1, (Optr)string_16803, (Optr)&t_send1, (Optr)PSend16804, (Optr)&t_block_return);
    Block PBlock16801 = new_Block_with(empty_Array, empty_Array, PThreadedCode16802, 1, PSend16804);
    Symbol SMB_doTimes_ = new_Symbol(L"doTimes:");
    // doTimes:. 
    Send PSend16805 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB_doTimes_, 1, (Optr)PBlock16801);
    Array PThreadedCode16785 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign16786, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16788, (Optr)&t_send1, (Optr)PSend16787, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16791, (Optr)&t_push_closure, (Optr)PBlock16796, (Optr)&t_send1, (Optr)PSend16800, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_closure, (Optr)PBlock16801, (Optr)&t_send1, (Optr)PSend16805, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16783 = new_Block_with(PArray16784, empty_Array, PThreadedCode16785, 4, PAssign16786, PSend16800, PSend16805, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16806 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16783);
    Array PThreadedCode16782 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16783, (Optr)&t_send1, (Optr)PSend16806, (Optr)&t_method_return);
    Method PMethod16780 = new_Method_with(empty_Array, PArray16781, empty_Array, PThreadedCode16782, 1, PSend16806);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16780, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_closures_0_0 = new_Variable_named(L"closures", 0);
    Array PArray16808 = new_Array_with(1, (Optr)VAR_closures_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16811 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16813 = new_Send((Optr)VAR_closures_0_0, SMB_size, 0);
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    // initialize:. 
    Send PSend16814 = new_Send((Optr)self, SMB_initialize_, 1, (Optr)PSend16813);
    Variable VAR_aClosure_2_0 = new_Variable_named(L"aClosure", 2);
    Array PArray16816 = new_Array_with(1, (Optr)VAR_aClosure_2_0);
    Variable VAR_startNext_3_0 = new_Variable_named(L"startNext", 3);
    Array PArray16819 = new_Array_with(1, (Optr)VAR_startNext_3_0);
    Variable VAR_thread_4_0 = new_Variable_named(L"thread", 4);
    Array PArray16822 = new_Array_with(1, (Optr)VAR_thread_4_0);
    Variable VAR__receiver__5_0 = new_Variable_named(L"_receiver_", 5);
    Array PArray16825 = new_Array_with(1, (Optr)VAR__receiver__5_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16827 = new_Send((Optr)VAR__receiver__5_0, SMB_continuation_, 1, (Optr)VAR_startNext_3_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16828 = new_Send((Optr)VAR__receiver__5_0, SMB_context_, 1, (Optr)nil_Const);
    Array PThreadedCode16826 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_variable, (Optr)VAR_startNext_3_0, (Optr)&t_send1, (Optr)PSend16827, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__5_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16828, (Optr)&t_method_return);
    Block PBlock16824 = new_Block_with(PArray16825, empty_Array, PThreadedCode16826, 2, PSend16827, PSend16828);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16829 = new_Send((Optr)PBlock16824, SMB_value_, 1, (Optr)VAR_thread_4_0);
    Array PThreadedCode16823 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock16824, (Optr)&t_push_variable, (Optr)VAR_thread_4_0, (Optr)&t_send1, (Optr)PSend16829, (Optr)&t_method_return);
    Block PBlock16821 = new_Block_with(PArray16822, empty_Array, PThreadedCode16823, 1, PSend16829);
    Symbol SMB_ifHasNext_ = new_Symbol(L"ifHasNext:");
    // ifHasNext:. 
    Send PSend16830 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifHasNext_, 1, (Optr)PBlock16821);
    Super PSuper16831 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16832 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper16831);
    Array PThreadedCode16820 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16821, (Optr)&t_send1, (Optr)PSend16830, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_2_0, (Optr)&t_super1, (Optr)PSuper16831, (Optr)&t_send1, (Optr)PSend16832, (Optr)&t_method_return);
    Block PBlock16818 = new_Block_with(PArray16819, empty_Array, PThreadedCode16820, 2, PSend16830, PSend16832);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16833 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16818);
    Array PThreadedCode16817 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16818, (Optr)&t_send1, (Optr)PSend16833, (Optr)&t_method_return);
    Block PBlock16815 = new_Block_with(PArray16816, empty_Array, PThreadedCode16817, 1, PSend16833);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16834 = new_Send((Optr)VAR_closures_0_0, SMB_do_, 1, (Optr)PBlock16815);
    Array PThreadedCode16812 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_send0, (Optr)PSend16813, (Optr)&t_send1, (Optr)PSend16814, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_closures_0_0, (Optr)&t_push_closure, (Optr)PBlock16815, (Optr)&t_send1, (Optr)PSend16834, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16810 = new_Block_with(PArray16811, empty_Array, PThreadedCode16812, 3, PSend16814, PSend16834, self);
    // on:. 
    Send PSend16835 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16810);
    Array PThreadedCode16809 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16810, (Optr)&t_send1, (Optr)PSend16835, (Optr)&t_method_return);
    Method PMethod16807 = new_Method_with(PArray16808, empty_Array, empty_Array, PThreadedCode16809, 1, PSend16835);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16807, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray16837 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16840 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16839 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)PSend16840);
    // new:. 
    Send PSend16842 = new_Send((Optr)PStatefulArray_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign16841 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_states, (Optr)PSend16842);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray16844 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16846 = new_Send((Optr)PFakeThread_classReference, SMB_new, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16847 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_at_put_, 2, (Optr)VAR_index_1_0, (Optr)PSend16846);
    Array PThreadedCode16845 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_push_class_reference, (Optr)PFakeThread_classReference, (Optr)&t_send0, (Optr)PSend16846, (Optr)&t_send2, (Optr)PSend16847, (Optr)&t_method_return);
    Block PBlock16843 = new_Block_with(PArray16844, empty_Array, PThreadedCode16845, 1, PSend16847);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend16848 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock16843);
    Array PThreadedCode16838 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign16839, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16840, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16841, (Optr)&t_push_class_reference, (Optr)PStatefulArray_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend16842, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock16843, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend16848, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16836 = new_Method_with(PArray16837, empty_Array, empty_Array, PThreadedCode16838, 4, PAssign16839, PAssign16841, PSend16848, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod16836, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16852 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__at_ = new_Symbol(L"@");
    // @. 
    Send PSend16854 = new_Send((Optr)VAR_receiver_1_0, SMB__at_, 1, (Optr)VAR_class_1_1);
    // @. 
    Send PSend16855 = new_Send((Optr)PSend16854, SMB__at_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_put_ = new_Symbol(L"put:");
    // put:. 
    Send PSend16856 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16855);
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    // showInvocation. 
    Send PSend16857 = new_Send((Optr)self, SMB_showInvocation, 0);
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    // switchThread. 
    Send PSend16858 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16859 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    // put:. 
    Send PSend16860 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_put_, 1, (Optr)PSend16859);
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    // showReturn. 
    Send PSend16861 = new_Send((Optr)self, SMB_showReturn, 0);
    // switchThread. 
    Send PSend16862 = new_Send((Optr)self, SMB_switchThread, 0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16863 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Array PThreadedCode16853 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_send1, (Optr)PSend16854, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend16855, (Optr)&t_send1, (Optr)PSend16856, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16857, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16858, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16859, (Optr)&t_send1, (Optr)PSend16860, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16861, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16862, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16863, (Optr)&t_method_return);
    Block PBlock16851 = new_Block_with(PArray16852, empty_Array, PThreadedCode16853, 7, PSend16856, PSend16857, PSend16858, PSend16860, PSend16861, PSend16862, PSend16863);
    Array PThreadedCode16850 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16851, (Optr)&t_method_return);
    Method PMethod16849 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16850, 1, PBlock16851);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16849, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16866 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16867 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)int_0_Const);
    Array PThreadedCode16865 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16866, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16867, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16864 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16865, 3, PSuper16866, PAssign16867, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16864, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_showReturn() {
    Symbol SMB_showReturn = new_Symbol(L"showReturn");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16869 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16872 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16871 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16872);
    String string_16873 = new_String(L"--> ");
    Constant string_16873_Const = new_Constant((Optr)string_16873);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16874 = new_Send((Optr)string_16873_Const, SMB__append_, 1, (Optr)VAR_current_0_0);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16875 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16874);
    Array PThreadedCode16870 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16871, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16872, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16873, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send1, (Optr)PSend16874, (Optr)&t_send1, (Optr)PSend16875, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16868 = new_Method_with(empty_Array, PArray16869, empty_Array, PThreadedCode16870, 3, PAssign16871, PSend16875, self);
    
    MethodClosure MC_SMB_showReturn = new_MethodClosure((Method)PMethod16868, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showReturn, MC_SMB_showReturn);
}


static void init_SMB_switchThread() {
    Symbol SMB_switchThread = new_Symbol(L"switchThread");
    Variable VAR_thread_0_0 = new_Variable_named(L"thread", 0);
    Array PArray16877 = new_Array_with(1, (Optr)VAR_thread_0_0);
    Variable VAR_aContinuation_1_0 = new_Variable_named(L"aContinuation", 1);
    Array PArray16880 = new_Array_with(1, (Optr)VAR_aContinuation_1_0);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16883 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_continuation_ = new_Symbol(L"continuation:");
    // continuation:. 
    Send PSend16885 = new_Send((Optr)VAR__receiver__2_0, SMB_continuation_, 1, (Optr)VAR_aContinuation_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16886 = new_Send((Optr)VAR__receiver__2_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16884 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aContinuation_1_0, (Optr)&t_send1, (Optr)PSend16885, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16886, (Optr)&t_method_return);
    Block PBlock16882 = new_Block_with(PArray16883, empty_Array, PThreadedCode16884, 2, PSend16885, PSend16886);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16887 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_current, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16888 = new_Send((Optr)PBlock16882, SMB_value_, 1, (Optr)PSend16887);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend16889 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_next, 0);
    // next. 
    Send PSend16891 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_next, 0);
    Assign PAssign16890 = new_Assign((Optr)VAR_thread_0_0, (Optr)PSend16891);
    Variable VAR_aState_2_0 = new_Variable_named(L"aState", 2);
    Array PArray16895 = new_Array_with(1, (Optr)VAR_aState_2_0);
    Symbol SMB_should = new_Symbol(L"should");
    // should. 
    Send PSend16897 = new_Send((Optr)VAR_aState_2_0, SMB_should, 0);
    // current. 
    Send PSend16898 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Symbol SMB_be_ = new_Symbol(L"be:");
    // be:. 
    Send PSend16899 = new_Send((Optr)PSend16897, SMB_be_, 1, (Optr)PSend16898);
    Array PThreadedCode16896 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aState_2_0, (Optr)&t_send0, (Optr)PSend16897, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16898, (Optr)&t_send1, (Optr)PSend16899, (Optr)&t_method_return);
    Block PBlock16894 = new_Block_with(PArray16895, empty_Array, PThreadedCode16896, 1, PSend16899);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend16900 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_do_, 1, (Optr)PBlock16894);
    Array PThreadedCode16893 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_push_closure, (Optr)PBlock16894, (Optr)&t_send1, (Optr)PSend16900, (Optr)&t_block_return);
    Block PBlock16892 = new_Block_with(empty_Array, empty_Array, PThreadedCode16893, 1, PSend16900);
    Symbol SMB_ifAtFirst_ = new_Symbol(L"ifAtFirst:");
    // ifAtFirst:. 
    Send PSend16901 = new_Send((Optr)slot_Interpretation_ParallelDebugger_threads, SMB_ifAtFirst_, 1, (Optr)PBlock16892);
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16903 = new_Send((Optr)VAR_thread_0_0, SMB_context, 0);
    Assign PAssign16902 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16903);
    Symbol SMB_continuation = new_Symbol(L"continuation");
    // continuation. 
    Send PSend16904 = new_Send((Optr)VAR_thread_0_0, SMB_continuation, 0);
    Symbol SMB_continue = new_Symbol(L"continue");
    // continue. 
    Send PSend16905 = new_Send((Optr)PSend16904, SMB_continue, 0);
    Array PThreadedCode16881 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_closure, (Optr)PBlock16882, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16887, (Optr)&t_send1, (Optr)PSend16888, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16889, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16890, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_send0, (Optr)PSend16891, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_threads, (Optr)&t_push_closure, (Optr)PBlock16892, (Optr)&t_send1, (Optr)PSend16901, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16902, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16903, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_thread_0_0, (Optr)&t_send0, (Optr)PSend16904, (Optr)&t_send0, (Optr)PSend16905, (Optr)&t_method_return);
    Block PBlock16879 = new_Block_with(PArray16880, empty_Array, PThreadedCode16881, 6, PSend16888, PSend16889, PAssign16890, PSend16901, PAssign16902, PSend16905);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16906 = new_Send((Optr)PContinuation_classReference, SMB_on_, 1, (Optr)PBlock16879);
    Array PThreadedCode16878 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_class_reference, (Optr)PContinuation_classReference, (Optr)&t_push_closure, (Optr)PBlock16879, (Optr)&t_send1, (Optr)PSend16906, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16876 = new_Method_with(empty_Array, PArray16877, empty_Array, PThreadedCode16878, 2, PSend16906, self);
    
    MethodClosure MC_SMB_switchThread = new_MethodClosure((Method)PMethod16876, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_switchThread, MC_SMB_switchThread);
}


static void init_SMB_showInvocation() {
    Symbol SMB_showInvocation = new_Symbol(L"showInvocation");
    Variable VAR_current_0_0 = new_Variable_named(L"current", 0);
    Array PArray16908 = new_Array_with(1, (Optr)VAR_current_0_0);
    Symbol SMB_current = new_Symbol(L"current");
    // current. 
    Send PSend16911 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_current, 0);
    Assign PAssign16910 = new_Assign((Optr)VAR_current_0_0, (Optr)PSend16911);
    Symbol SMB_x = new_Symbol(L"x");
    // x. 
    Send PSend16912 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    // x. 
    Send PSend16913 = new_Send((Optr)PSend16912, SMB_x, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16914 = new_Send((Optr)PSend16913, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16915 = new_Send((Optr)PSend16914, SMB_name, 0);
    String string_16916 = new_String(L"@");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_16916_Const = new_Constant((Optr)string_16916);
    // ,. 
    Send PSend16917 = new_Send((Optr)PSend16915, SMB__append_, 1, (Optr)string_16916_Const);
    // x. 
    Send PSend16918 = new_Send((Optr)VAR_current_0_0, SMB_x, 0);
    Symbol SMB_y = new_Symbol(L"y");
    // y. 
    Send PSend16919 = new_Send((Optr)PSend16918, SMB_y, 0);
    // name. 
    Send PSend16920 = new_Send((Optr)PSend16919, SMB_name, 0);
    // ,. 
    Send PSend16921 = new_Send((Optr)PSend16917, SMB__append_, 1, (Optr)PSend16920);
    String string_16922 = new_String(L">>");
    Constant string_16922_Const = new_Constant((Optr)string_16922);
    // ,. 
    Send PSend16923 = new_Send((Optr)PSend16921, SMB__append_, 1, (Optr)string_16922_Const);
    // y. 
    Send PSend16924 = new_Send((Optr)VAR_current_0_0, SMB_y, 0);
    // ,. 
    Send PSend16925 = new_Send((Optr)PSend16923, SMB__append_, 1, (Optr)PSend16924);
    Symbol SMB_show_ = new_Symbol(L"show:");
    // show:. 
    Send PSend16926 = new_Send((Optr)self, SMB_show_, 1, (Optr)PSend16925);
    Array PThreadedCode16909 = instantiate_Array_with(ThreadedCode_Class, 0, 47, (Optr)&t_push1, (Optr)PAssign16910, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16911, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16912, (Optr)&t_send0, (Optr)PSend16913, (Optr)&t_send0, (Optr)PSend16914, (Optr)&t_send0, (Optr)PSend16915, (Optr)&t_push1, (Optr)string_16916, (Optr)&t_send1, (Optr)PSend16917, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16918, (Optr)&t_send0, (Optr)PSend16919, (Optr)&t_send0, (Optr)PSend16920, (Optr)&t_send1, (Optr)PSend16921, (Optr)&t_push1, (Optr)string_16922, (Optr)&t_send1, (Optr)PSend16923, (Optr)&t_push_variable, (Optr)VAR_current_0_0, (Optr)&t_send0, (Optr)PSend16924, (Optr)&t_send1, (Optr)PSend16925, (Optr)&t_send1, (Optr)PSend16926, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16907 = new_Method_with(empty_Array, PArray16908, empty_Array, PThreadedCode16909, 3, PAssign16910, PSend16926, self);
    
    MethodClosure MC_SMB_showInvocation = new_MethodClosure((Method)PMethod16907, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_showInvocation, MC_SMB_showInvocation);
}


static void init_SMB_show_() {
    Symbol SMB_show_ = new_Symbol(L"show:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16928 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16930 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16932 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16934 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16935 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16933 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16935, (Optr)&t_method_return);
    Block PBlock16931 = new_Block_with(PArray16932, empty_Array, PThreadedCode16933, 2, PSend16934, PSend16935);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16936 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16937 = new_Send((Optr)PBlock16931, SMB_value_, 1, (Optr)PSend16936);
    Array PThreadedCode16929 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16930, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16931, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend16936, (Optr)&t_send1, (Optr)PSend16937, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16927 = new_Method_with(PArray16928, empty_Array, empty_Array, PThreadedCode16929, 3, PSend16930, PSend16937, self);
    
    MethodClosure MC_SMB_show_ = new_MethodClosure((Method)PMethod16927, Interpretation_ParallelDebugger_Class);
    store_method(Interpretation_ParallelDebugger_Class, SMB_show_, MC_SMB_show_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16939 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16940 = new_Array_with(1, (Optr)VAR_result_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16943 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16945 = new_Send((Optr)slot_Interpretation_ParallelDebugger_states, SMB_position, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend16946 = new_Send((Optr)PSend16945, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend16951 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16950 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16951);
    Super PSuper16953 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Assign PAssign16952 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16953);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend16955 = new_Send((Optr)slot_Interpretation_ParallelDebugger_localIndent, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign16954 = new_Assign((Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)PSend16955);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16956 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_0_1);
    Array PThreadedCode16949 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16950, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16951, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16952, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16953, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16954, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_localIndent, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16955, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16956, (Optr)&t_block_return);
    Block PBlock16948 = new_Block_with(empty_Array, empty_Array, PThreadedCode16949, 4, PAssign16950, PAssign16952, PAssign16954, PSend16956);
    // ifTrue:. 
    Send PSend16947 = new_Send((Optr)PSend16946, SMB_ifTrue_, 1, (Optr)PBlock16948);
    Super PSuper16957 = new_Super(SMB_visitSend_, 1, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16944 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Interpretation_ParallelDebugger_states, (Optr)&t_send0, (Optr)PSend16945, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16946, (Optr)&t_send_ifTrue_, (Optr)PSend16947, (Optr)PBlock16948, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_super1, (Optr)PSuper16957, (Optr)&t_method_return);
    Block PBlock16942 = new_Block_with(PArray16943, empty_Array, PThreadedCode16944, 2, PSend16947, PSuper16957);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16958 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16942);
    Array PThreadedCode16941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16942, (Optr)&t_send1, (Optr)PSend16958, (Optr)&t_method_return);
    Method PMethod16938 = new_Method_with(PArray16939, PArray16940, empty_Array, PThreadedCode16941, 1, PSend16958);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16938, Interpretation_ParallelDebugger_Class);
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