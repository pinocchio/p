#include <lib/class/Interpretation/AliasInterpreter.h>


Optr layout_Interpretation_AliasInterpreter_Class_class;
Optr layout_Interpretation_AliasInterpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray16812 = new_Array_with(3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    // aliasArguments:. 
    Send PSend16814 = new_Send((Optr)self, SMB_aliasArguments_, 1, (Optr)VAR_aMessage_0_0);
    Super PSuper16815 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode16813 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend16814, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper16815, (Optr)&t_method_return);
    Method PMethod16811 = new_Method_with(PArray16812, empty_Array, empty_Array, PThreadedCode16813, 2, PSend16814, PSuper16815);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16811, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_blockclosureValue_message_() {
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16817 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16819 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_value, 0);
    Super PSuper16820 = new_Super(SMB_blockclosureValue_message_, 2, (Optr)PSend16819, (Optr)VAR_aMessage_0_1);
    Array PThreadedCode16818 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16819, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_super2, (Optr)PSuper16820, (Optr)&t_method_return);
    Method PMethod16816 = new_Method_with(PArray16817, empty_Array, empty_Array, PThreadedCode16818, 1, PSuper16820);
    
    MethodClosure MC_SMB_blockclosureValue_message_ = new_MethodClosure((Method)PMethod16816, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_blockclosureValue_message_, MC_SMB_blockclosureValue_message_);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray16822 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16824 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
    Symbol  SMB_value = new_Symbol(L"value");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value_Const = new_Constant((Optr)SMB_value);
    // selector:. 
    Send PSend16825 = new_Send((Optr)PSend16824, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    // asAliased. 
    Send PSend16826 = new_Send((Optr)VAR_aClosure_0_0, SMB_asAliased, 0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16827 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend16825, (Optr)PSend16826);
    Array PThreadedCode16823 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend16824, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend16825, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend16826, (Optr)&t_send2, (Optr)PSend16827, (Optr)&t_method_return);
    Method PMethod16821 = new_Method_with(PArray16822, empty_Array, empty_Array, PThreadedCode16823, 1, PSend16827);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16821, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_continueEscape_message_() {
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16829 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16831 = new_Send((Optr)VAR_aContinuation_0_0, SMB_value, 0);
    Super PSuper16832 = new_Super(SMB_continueEscape_message_, 2, (Optr)PSend16831, (Optr)VAR_aMessage_0_1);
    Array PThreadedCode16830 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_send0, (Optr)PSend16831, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_super2, (Optr)PSuper16832, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16828 = new_Method_with(PArray16829, empty_Array, empty_Array, PThreadedCode16830, 2, PSuper16832, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod16828, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_continueEscape_message_, MC_SMB_continueEscape_message_);
}


static void init_SMB_invokeNativeMethod_on_message_() {
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16834 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_unwrappedMessage_0_3 = new_Variable_named(L"unwrappedMessage", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16835 = new_Array_with(2, (Optr)VAR_unwrappedMessage_0_3, (Optr)VAR_result_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16838 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16842 = new_Send((Optr)VAR_aMessage_0_2, SMB_size, 0);
    // new:. 
    Send PSend16841 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend16842);
    Assign PAssign16840 = new_Assign((Optr)VAR_unwrappedMessage_0_3, (Optr)PSend16841);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16843 = new_Send((Optr)VAR_aMessage_0_2, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16844 = new_Send((Optr)VAR_unwrappedMessage_0_3, SMB_selector_, 1, (Optr)PSend16843);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray16846 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16848 = new_Send((Optr)VAR_arg_2_0, SMB_value, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16849 = new_Send((Optr)VAR_unwrappedMessage_0_3, SMB_at_put_, 2, (Optr)VAR_index_2_1, (Optr)PSend16848);
    Array PThreadedCode16847 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_send0, (Optr)PSend16848, (Optr)&t_send2, (Optr)PSend16849, (Optr)&t_method_return);
    Block PBlock16845 = new_Block_with(PArray16846, empty_Array, PThreadedCode16847, 1, PSend16849);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16850 = new_Send((Optr)VAR_aMessage_0_2, SMB_withIndexDo_, 1, (Optr)PBlock16845);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16854 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16856 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend16857 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16858 = new_Send((Optr)VAR__receiver__2_0, SMB_closure_, 1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend16859 = new_Send((Optr)VAR__receiver__2_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16855 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16856, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send1, (Optr)PSend16857, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend16858, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16859, (Optr)&t_method_return);
    Block PBlock16853 = new_Block_with(PArray16854, empty_Array, PThreadedCode16855, 4, PSend16856, PSend16857, PSend16858, PSend16859);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16860 = new_Send((Optr)PNativeMethodContext_classReference, SMB_new, 0);
    // value:. 
    Send PSend16852 = new_Send((Optr)PBlock16853, SMB_value_, 1, (Optr)PSend16860);
    Assign PAssign16851 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16852);
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    // value. 
    Send PSend16863 = new_Send((Optr)VAR_receiver_0_1, SMB_value, 0);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16867 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign16866 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16867);
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend16868 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16869 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16868);
    Array PThreadedCode16865 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign16866, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16867, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16868, (Optr)&t_send1, (Optr)PSend16869, (Optr)&t_block_return);
    Block PBlock16864 = new_Block_with(empty_Array, empty_Array, PThreadedCode16865, 2, PAssign16866, PSend16869);
    Super PSuper16862 = new_Super(SMB_invokeNativeMethod_on_message_alternative_, 4, (Optr)VAR_aClosure_0_0, (Optr)PSend16863, (Optr)VAR_unwrappedMessage_0_3, (Optr)PBlock16864);
    Assign PAssign16861 = new_Assign((Optr)VAR_result_0_4, (Optr)PSuper16862);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend16871 = new_Send((Optr)VAR_result_0_4, SMB_asAllocationAlias_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Assign PAssign16870 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16871);
    // returnContext. 
    Send PSend16873 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign16872 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16873);
    Array PThreadedCode16839 = instantiate_Array_with(ThreadedCode_Class, 0, 78, (Optr)&t_push1, (Optr)PAssign16840, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend16842, (Optr)&t_send1, (Optr)PSend16841, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend16843, (Optr)&t_send1, (Optr)PSend16844, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock16845, (Optr)&t_send1, (Optr)PSend16850, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16851, (Optr)&t_push_closure, (Optr)PBlock16853, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send0, (Optr)PSend16860, (Optr)&t_send1, (Optr)PSend16852, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16861, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send0, (Optr)PSend16863, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_closure, (Optr)PBlock16864, (Optr)&t_super4, (Optr)PSuper16862, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16870, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16871, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16872, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16873, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Block PBlock16837 = new_Block_with(PArray16838, empty_Array, PThreadedCode16839, 8, PAssign16840, PSend16844, PSend16850, PAssign16851, PAssign16861, PAssign16870, PAssign16872, VAR_result_0_4);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16874 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16837);
    Array PThreadedCode16836 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16837, (Optr)&t_send1, (Optr)PSend16874, (Optr)&t_method_return);
    Method PMethod16833 = new_Method_with(PArray16834, PArray16835, empty_Array, PThreadedCode16836, 1, PSend16874);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_ = new_MethodClosure((Method)PMethod16833, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_invokeNativeMethod_on_message_, MC_SMB_invokeNativeMethod_on_message_);
}


static void init_SMB_interpretMethod_() {
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray16876 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16877 = new_Array_with(1, (Optr)VAR_result_0_1);
    Super PSuper16880 = new_Super(SMB_interpretMethod_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign16879 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16880);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend16881 = new_Send((Optr)PReturnAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16882 = new_Send((Optr)PSend16881, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16878 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign16879, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_super1, (Optr)PSuper16880, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16881, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16882, (Optr)&t_method_return);
    Method PMethod16875 = new_Method_with(PArray16876, PArray16877, empty_Array, PThreadedCode16878, 2, PAssign16879, PSend16882);
    
    MethodClosure MC_SMB_interpretMethod_ = new_MethodClosure((Method)PMethod16875, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpretMethod_, MC_SMB_interpretMethod_);
}


static void init_SMB_assignSlot_to_() {
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Variable VAR_anAlias_0_1 = new_Variable_named(L"anAlias", 0);
    Array PArray16884 = new_Array_with(2, (Optr)VAR_anSlot_0_0, (Optr)VAR_anAlias_0_1);
    Variable VAR_alias_0_2 = new_Variable_named(L"alias", 0);
    Array PArray16885 = new_Array_with(1, (Optr)VAR_alias_0_2);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend16888 = new_Send((Optr)PFieldWriteAlias_classReference, SMB_alias_, 1, (Optr)VAR_anAlias_0_1);
    Assign PAssign16887 = new_Assign((Optr)VAR_alias_0_2, (Optr)PSend16888);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16889 = new_Send((Optr)VAR_alias_0_2, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend16890 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16891 = new_Send((Optr)VAR_anSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16890);
    Symbol SMB_predecessor_ = new_Symbol(L"predecessor:");
    // predecessor:. 
    Send PSend16892 = new_Send((Optr)VAR_alias_0_2, SMB_predecessor_, 1, (Optr)PSend16891);
    // currentUnwrappedSelf. 
    Send PSend16893 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16894 = new_Send((Optr)VAR_anSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_alias_0_2, (Optr)PSend16893);
    Array PThreadedCode16886 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign16887, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_1, (Optr)&t_send1, (Optr)PSend16888, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16889, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16890, (Optr)&t_send1, (Optr)PSend16891, (Optr)&t_send1, (Optr)PSend16892, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16893, (Optr)&t_send2, (Optr)PSend16894, (Optr)&t_method_return);
    Method PMethod16883 = new_Method_with(PArray16884, PArray16885, empty_Array, PThreadedCode16886, 4, PAssign16887, PSend16889, PSend16892, PSend16894);
    
    MethodClosure MC_SMB_assignSlot_to_ = new_MethodClosure((Method)PMethod16883, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_assignSlot_to_, MC_SMB_assignSlot_to_);
}


static void init_SMB_interpretBlock_() {
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray16896 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16897 = new_Array_with(1, (Optr)VAR_result_0_1);
    Super PSuper16900 = new_Super(SMB_interpretBlock_, 1, (Optr)VAR_aBlock_0_0);
    Assign PAssign16899 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper16900);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend16901 = new_Send((Optr)PReturnAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16902 = new_Send((Optr)PSend16901, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16898 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign16899, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_super1, (Optr)PSuper16900, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16901, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16902, (Optr)&t_method_return);
    Method PMethod16895 = new_Method_with(PArray16896, PArray16897, empty_Array, PThreadedCode16898, 2, PAssign16899, PSend16902);
    
    MethodClosure MC_SMB_interpretBlock_ = new_MethodClosure((Method)PMethod16895, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpretBlock_, MC_SMB_interpretBlock_);
}


static void init_SMB_visitUnsintSlot_() {
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    Variable VAR_anUnsintSlot_0_0 = new_Variable_named(L"anUnsintSlot", 0);
    Array PArray16904 = new_Array_with(1, (Optr)VAR_anUnsintSlot_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16905 = new_Array_with(1, (Optr)VAR_result_0_1);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend16909 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    // readFrom:. 
    Send PSend16908 = new_Send((Optr)VAR_anUnsintSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16909);
    Assign PAssign16907 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend16908);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend16910 = new_Send((Optr)VAR_result_0_1, SMB_asAllocationAlias_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16906 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16907, (Optr)&t_push_variable, (Optr)VAR_anUnsintSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16909, (Optr)&t_send1, (Optr)PSend16908, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16910, (Optr)&t_method_return);
    Method PMethod16903 = new_Method_with(PArray16904, PArray16905, empty_Array, PThreadedCode16906, 2, PAssign16907, PSend16910);
    
    MethodClosure MC_SMB_visitUnsintSlot_ = new_MethodClosure((Method)PMethod16903, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitUnsintSlot_, MC_SMB_visitUnsintSlot_);
}


static void init_SMB_continueOn_message_() {
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray16912 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray16913 = new_Array_with(1, (Optr)VAR_result_0_2);
    Super PSuper16916 = new_Super(SMB_continueOn_message_, 2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Assign PAssign16915 = new_Assign((Optr)VAR_result_0_2, (Optr)PSuper16916);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16918 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16920 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16921 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16919 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend16920, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16921, (Optr)&t_method_return);
    Block PBlock16917 = new_Block_with(PArray16918, empty_Array, PThreadedCode16919, 2, PSend16920, PSend16921);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16922 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend16923 = new_Send((Optr)PBlock16917, SMB_value_, 1, (Optr)PSend16922);
    Array PThreadedCode16914 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign16915, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_super2, (Optr)PSuper16916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16917, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend16922, (Optr)&t_send1, (Optr)PSend16923, (Optr)&t_method_return);
    Method PMethod16911 = new_Method_with(PArray16912, PArray16913, empty_Array, PThreadedCode16914, 2, PAssign16915, PSend16923);
    
    MethodClosure MC_SMB_continueOn_message_ = new_MethodClosure((Method)PMethod16911, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_continueOn_message_, MC_SMB_continueOn_message_);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray16925 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_closure_0_1 = new_Variable_named(L"closure", 0);
    Array PArray16926 = new_Array_with(1, (Optr)VAR_closure_0_1);
    Super PSuper16929 = new_Super(SMB_visitBlock_, 1, (Optr)VAR_aBlock_0_0);
    Assign PAssign16928 = new_Assign((Optr)VAR_closure_0_1, (Optr)PSuper16929);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16931 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16933 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16934 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16932 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_1, (Optr)&t_send1, (Optr)PSend16933, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16934, (Optr)&t_method_return);
    Block PBlock16930 = new_Block_with(PArray16931, empty_Array, PThreadedCode16932, 2, PSend16933, PSend16934);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16935 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend16936 = new_Send((Optr)PBlock16930, SMB_value_, 1, (Optr)PSend16935);
    Array PThreadedCode16927 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16928, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_super1, (Optr)PSuper16929, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16930, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend16935, (Optr)&t_send1, (Optr)PSend16936, (Optr)&t_method_return);
    Method PMethod16924 = new_Method_with(PArray16925, PArray16926, empty_Array, PThreadedCode16927, 2, PAssign16928, PSend16936);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod16924, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Array PArray16938 = new_Array_with(1, (Optr)VAR_anSlot_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray16939 = new_Array_with(1, (Optr)VAR_result_0_1);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend16943 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    // readFrom:. 
    Send PSend16942 = new_Send((Optr)VAR_anSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16943);
    Assign PAssign16941 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend16942);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend16944 = new_Send((Optr)PFieldReadAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16945 = new_Send((Optr)PSend16944, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16940 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign16941, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16943, (Optr)&t_send1, (Optr)PSend16942, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFieldReadAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend16944, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16945, (Optr)&t_method_return);
    Method PMethod16937 = new_Method_with(PArray16938, PArray16939, empty_Array, PThreadedCode16940, 2, PAssign16941, PSend16945);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod16937, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_classOf_() {
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray16947 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16949 = new_Send((Optr)VAR_anAlias_0_0, SMB_value, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16950 = new_Send((Optr)PSend16949, SMB_class, 0);
    Array PThreadedCode16948 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send0, (Optr)PSend16949, (Optr)&t_send0, (Optr)PSend16950, (Optr)&t_method_return);
    Method PMethod16946 = new_Method_with(PArray16947, empty_Array, empty_Array, PThreadedCode16948, 1, PSend16950);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod16946, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_classOf_, MC_SMB_classOf_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray16952 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16955 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend16957 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16958 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)PSend16957);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16959 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16956 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend16957, (Optr)&t_send1, (Optr)PSend16958, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16959, (Optr)&t_method_return);
    Block PBlock16954 = new_Block_with(PArray16955, empty_Array, PThreadedCode16956, 2, PSend16958, PSend16959);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16960 = new_Send((Optr)PLiteralAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend16961 = new_Send((Optr)PBlock16954, SMB_value_, 1, (Optr)PSend16960);
    Array PThreadedCode16953 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16954, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send0, (Optr)PSend16960, (Optr)&t_send1, (Optr)PSend16961, (Optr)&t_method_return);
    Method PMethod16951 = new_Method_with(PArray16952, empty_Array, empty_Array, PThreadedCode16953, 1, PSend16961);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod16951, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_aliasArguments_() {
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Array PArray16963 = new_Array_with(1, (Optr)VAR_aMessage_0_0);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16966 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend16968 = new_Send((Optr)PParameterAlias_classReference, SMB_alias_, 1, (Optr)VAR_arg_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16969 = new_Send((Optr)PSend16968, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16970 = new_Send((Optr)VAR_aMessage_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend16969);
    Array PThreadedCode16967 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send1, (Optr)PSend16968, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16969, (Optr)&t_send2, (Optr)PSend16970, (Optr)&t_method_return);
    Block PBlock16965 = new_Block_with(PArray16966, empty_Array, PThreadedCode16967, 1, PSend16970);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16971 = new_Send((Optr)VAR_aMessage_0_0, SMB_withIndexDo_, 1, (Optr)PBlock16965);
    Array PThreadedCode16964 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_closure, (Optr)PBlock16965, (Optr)&t_send1, (Optr)PSend16971, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16962 = new_Method_with(PArray16963, empty_Array, empty_Array, PThreadedCode16964, 2, PSend16971, self);
    
    MethodClosure MC_SMB_aliasArguments_ = new_MethodClosure((Method)PMethod16962, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_aliasArguments_, MC_SMB_aliasArguments_);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray16973 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16976 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend16978 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16979 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)PSend16978);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16980 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16977 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend16978, (Optr)&t_send1, (Optr)PSend16979, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16980, (Optr)&t_method_return);
    Block PBlock16975 = new_Block_with(PArray16976, empty_Array, PThreadedCode16977, 2, PSend16979, PSend16980);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16981 = new_Send((Optr)PLiteralAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend16982 = new_Send((Optr)PBlock16975, SMB_value_, 1, (Optr)PSend16981);
    Array PThreadedCode16974 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16975, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send0, (Optr)PSend16981, (Optr)&t_send1, (Optr)PSend16982, (Optr)&t_method_return);
    Method PMethod16972 = new_Method_with(PArray16973, empty_Array, empty_Array, PThreadedCode16974, 1, PSend16982);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod16972, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_recursiveDoesNotUnderstand_on_() {
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16984 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    String string_16986 = new_String(L"Recursive doesNotUnderstand: ");
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16987 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16988 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)PSend16987);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend16989 = new_Send((Optr)PSend16988, SMB_name, 0);
    Constant string_16986_Const = new_Constant((Optr)string_16986);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend16990 = new_Send((Optr)string_16986_Const, SMB__append_, 1, (Optr)PSend16989);
    String string_16991 = new_String(L">>");
    Constant string_16991_Const = new_Constant((Optr)string_16991);
    // ,. 
    Send PSend16992 = new_Send((Optr)PSend16990, SMB__append_, 1, (Optr)string_16991_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend16993 = new_Send((Optr)VAR_aMessage_0_0, SMB_asString, 0);
    // ,. 
    Send PSend16994 = new_Send((Optr)PSend16992, SMB__append_, 1, (Optr)PSend16993);
    String string_16995 = new_String(L" in ");
    Constant string_16995_Const = new_Constant((Optr)string_16995);
    // ,. 
    Send PSend16996 = new_Send((Optr)PSend16994, SMB__append_, 1, (Optr)string_16995_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16997 = new_Send((Optr)self, SMB_class, 0);
    // name. 
    Send PSend16998 = new_Send((Optr)PSend16997, SMB_name, 0);
    // ,. 
    Send PSend16999 = new_Send((Optr)PSend16996, SMB__append_, 1, (Optr)PSend16998);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend17000 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend16999);
    Array PThreadedCode16985 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_16986, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16987, (Optr)&t_send1, (Optr)PSend16988, (Optr)&t_send0, (Optr)PSend16989, (Optr)&t_send1, (Optr)PSend16990, (Optr)&t_push1, (Optr)string_16991, (Optr)&t_send1, (Optr)PSend16992, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16993, (Optr)&t_send1, (Optr)PSend16994, (Optr)&t_push1, (Optr)string_16995, (Optr)&t_send1, (Optr)PSend16996, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16997, (Optr)&t_send0, (Optr)PSend16998, (Optr)&t_send1, (Optr)PSend16999, (Optr)&t_send1, (Optr)PSend17000, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16983 = new_Method_with(PArray16984, empty_Array, empty_Array, PThreadedCode16985, 2, PSend17000, self);
    
    MethodClosure MC_SMB_recursiveDoesNotUnderstand_on_ = new_MethodClosure((Method)PMethod16983, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_recursiveDoesNotUnderstand_on_, MC_SMB_recursiveDoesNotUnderstand_on_);
}


static void init_SMB_currentUnwrappedSelf() {
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17003 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend17004 = new_Send((Optr)PSend17003, SMB_receiver, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17005 = new_Send((Optr)PSend17004, SMB_value, 0);
    Array PThreadedCode17002 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17003, (Optr)&t_send0, (Optr)PSend17004, (Optr)&t_send0, (Optr)PSend17005, (Optr)&t_method_return);
    Method PMethod17001 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17002, 1, PSend17005);
    
    MethodClosure MC_SMB_currentUnwrappedSelf = new_MethodClosure((Method)PMethod17001, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_currentUnwrappedSelf, MC_SMB_currentUnwrappedSelf);
}


static void init_SMB_assignUnsintSlot_to_() {
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Variable VAR_anAlias_0_1 = new_Variable_named(L"anAlias", 0);
    Array PArray17007 = new_Array_with(2, (Optr)VAR_anSlot_0_0, (Optr)VAR_anAlias_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17009 = new_Send((Optr)VAR_anAlias_0_1, SMB_value, 0);
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17010 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend17011 = new_Send((Optr)VAR_anSlot_0_0, SMB_assign_on_, 2, (Optr)PSend17009, (Optr)PSend17010);
    Array PThreadedCode17008 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_1, (Optr)&t_send0, (Optr)PSend17009, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17010, (Optr)&t_send2, (Optr)PSend17011, (Optr)&t_method_return);
    Method PMethod17006 = new_Method_with(PArray17007, empty_Array, empty_Array, PThreadedCode17008, 1, PSend17011);
    
    MethodClosure MC_SMB_assignUnsintSlot_to_ = new_MethodClosure((Method)PMethod17006, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_assignUnsintSlot_to_, MC_SMB_assignUnsintSlot_to_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_aSend_0_3 = new_Variable_named(L"aSend", 0);
    Array PArray17013 = new_Array_with(4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    // aliasArguments:. 
    Send PSend17015 = new_Send((Optr)self, SMB_aliasArguments_, 1, (Optr)VAR_aMessage_0_0);
    Super PSuper17016 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Array PThreadedCode17014 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend17015, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_super4, (Optr)PSuper17016, (Optr)&t_method_return);
    Method PMethod17012 = new_Method_with(PArray17013, empty_Array, empty_Array, PThreadedCode17014, 2, PSend17015, PSuper17016);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod17012, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_send_to_class_for_, MC_SMB_send_to_class_for_);
}

void init_Interpretation_PAliasInterpreter_layout() {
    layout_Interpretation_AliasInterpreter_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_AliasInterpreter_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_AliasInterpreter_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_AliasInterpreter_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_AliasInterpreter_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_AliasInterpreter_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AliasInterpreter = new_Symbol(L"AliasInterpreter");
    layout_Interpretation_AliasInterpreter = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Interpretation_AliasInterpreter)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_AliasInterpreter)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    Interpretation_AliasInterpreter_Class = (Class)new_Class(Interpretation_Interpreter_Class, layout_Interpretation_AliasInterpreter_Class_class);
    Interpretation_AliasInterpreter_Class->layout = layout_Interpretation_AliasInterpreter;
    Interpretation_AliasInterpreter_Class->name = SMB_AliasInterpreter;
    
}

void init_Interpretation_PAliasInterpreter_methods() {
    init_SMB_send_to_class_();
    init_SMB_blockclosureValue_message_();
    init_SMB_interpret_();
    init_SMB_continueEscape_message_();
    init_SMB_invokeNativeMethod_on_message_();
    init_SMB_interpretMethod_();
    init_SMB_assignSlot_to_();
    init_SMB_interpretBlock_();
    init_SMB_visitUnsintSlot_();
    init_SMB_continueOn_message_();
    init_SMB_visitBlock_();
    init_SMB_visitSlot_();
    init_SMB_classOf_();
    init_SMB_visitClassReference_();
    init_SMB_aliasArguments_();
    init_SMB_visitConstant_();
    init_SMB_recursiveDoesNotUnderstand_on_();
    init_SMB_currentUnwrappedSelf();
    init_SMB_assignUnsintSlot_to_();
    init_SMB_send_to_class_for_();
    
}