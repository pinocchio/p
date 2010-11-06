#include <lib/class/Interpretation/AliasInterpreter.h>


Optr layout_Interpretation_AliasInterpreter_Class_class;
Optr layout_Interpretation_AliasInterpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray16953 = new_Array_with(3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    // aliasArguments:. 
    Send PSend16955 = new_Send((Optr)self, SMB_aliasArguments_, 1, (Optr)VAR_aMessage_0_0);
    Super PSuper16956 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode16954 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend16955, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper16956, (Optr)&t_method_return);
    Method PMethod16952 = new_Method_with(PArray16953, empty_Array, empty_Array, PThreadedCode16954, 2, PSend16955, PSuper16956);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16952, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_blockclosureValue_message_() {
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16958 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16960 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_value, 0);
    Super PSuper16961 = new_Super(SMB_blockclosureValue_message_, 2, (Optr)PSend16960, (Optr)VAR_aMessage_0_1);
    Array PThreadedCode16959 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16960, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_super2, (Optr)PSuper16961, (Optr)&t_method_return);
    Method PMethod16957 = new_Method_with(PArray16958, empty_Array, empty_Array, PThreadedCode16959, 1, PSuper16961);
    
    MethodClosure MC_SMB_blockclosureValue_message_ = new_MethodClosure((Method)PMethod16957, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_blockclosureValue_message_, MC_SMB_blockclosureValue_message_);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray16963 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16965 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
    Symbol  SMB_value = new_Symbol(L"value");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value_Const = new_Constant((Optr)SMB_value);
    // selector:. 
    Send PSend16966 = new_Send((Optr)PSend16965, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    // asAliased. 
    Send PSend16967 = new_Send((Optr)VAR_aClosure_0_0, SMB_asAliased, 0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16968 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend16966, (Optr)PSend16967);
    Array PThreadedCode16964 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend16965, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend16966, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend16967, (Optr)&t_send2, (Optr)PSend16968, (Optr)&t_method_return);
    Method PMethod16962 = new_Method_with(PArray16963, empty_Array, empty_Array, PThreadedCode16964, 1, PSend16968);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16962, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_continueEscape_message_() {
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16970 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16972 = new_Send((Optr)VAR_aContinuation_0_0, SMB_value, 0);
    Super PSuper16973 = new_Super(SMB_continueEscape_message_, 2, (Optr)PSend16972, (Optr)VAR_aMessage_0_1);
    Array PThreadedCode16971 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_send0, (Optr)PSend16972, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_super2, (Optr)PSuper16973, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16969 = new_Method_with(PArray16970, empty_Array, empty_Array, PThreadedCode16971, 2, PSuper16973, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod16969, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_continueEscape_message_, MC_SMB_continueEscape_message_);
}


static void init_SMB_invokeNativeMethod_on_message_() {
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16975 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_unwrappedMessage_0_3 = new_Variable_named(L"unwrappedMessage", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16976 = new_Array_with(2, (Optr)VAR_unwrappedMessage_0_3, (Optr)VAR_result_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16979 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16983 = new_Send((Optr)VAR_aMessage_0_2, SMB_size, 0);
    // new:. 
    Send PSend16982 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend16983);
    Assign PAssign16981 = new_Assign((Optr)VAR_unwrappedMessage_0_3, (Optr)PSend16982);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16984 = new_Send((Optr)VAR_aMessage_0_2, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16985 = new_Send((Optr)VAR_unwrappedMessage_0_3, SMB_selector_, 1, (Optr)PSend16984);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray16987 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16989 = new_Send((Optr)VAR_arg_2_0, SMB_value, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16990 = new_Send((Optr)VAR_unwrappedMessage_0_3, SMB_at_put_, 2, (Optr)VAR_index_2_1, (Optr)PSend16989);
    Array PThreadedCode16988 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_send0, (Optr)PSend16989, (Optr)&t_send2, (Optr)PSend16990, (Optr)&t_method_return);
    Block PBlock16986 = new_Block_with(PArray16987, empty_Array, PThreadedCode16988, 1, PSend16990);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16991 = new_Send((Optr)VAR_aMessage_0_2, SMB_withIndexDo_, 1, (Optr)PBlock16986);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16995 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16997 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend16998 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16999 = new_Send((Optr)VAR__receiver__2_0, SMB_closure_, 1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend17000 = new_Send((Optr)VAR__receiver__2_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16996 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16997, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send1, (Optr)PSend16998, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend16999, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17000, (Optr)&t_method_return);
    Block PBlock16994 = new_Block_with(PArray16995, empty_Array, PThreadedCode16996, 4, PSend16997, PSend16998, PSend16999, PSend17000);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17001 = new_Send((Optr)PNativeMethodContext_classReference, SMB_new, 0);
    // value:. 
    Send PSend16993 = new_Send((Optr)PBlock16994, SMB_value_, 1, (Optr)PSend17001);
    Assign PAssign16992 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16993);
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    // value. 
    Send PSend17004 = new_Send((Optr)VAR_receiver_0_1, SMB_value, 0);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend17008 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign17007 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17008);
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend17009 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17010 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17009);
    Array PThreadedCode17006 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign17007, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17008, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend17009, (Optr)&t_send1, (Optr)PSend17010, (Optr)&t_block_return);
    Block PBlock17005 = new_Block_with(empty_Array, empty_Array, PThreadedCode17006, 2, PAssign17007, PSend17010);
    Super PSuper17003 = new_Super(SMB_invokeNativeMethod_on_message_alternative_, 4, (Optr)VAR_aClosure_0_0, (Optr)PSend17004, (Optr)VAR_unwrappedMessage_0_3, (Optr)PBlock17005);
    Assign PAssign17002 = new_Assign((Optr)VAR_result_0_4, (Optr)PSuper17003);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend17012 = new_Send((Optr)VAR_result_0_4, SMB_asAllocationAlias_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Assign PAssign17011 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend17012);
    // returnContext. 
    Send PSend17014 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign17013 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17014);
    Array PThreadedCode16980 = instantiate_Array_with(ThreadedCode_Class, 0, 78, (Optr)&t_push1, (Optr)PAssign16981, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend16983, (Optr)&t_send1, (Optr)PSend16982, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend16984, (Optr)&t_send1, (Optr)PSend16985, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock16986, (Optr)&t_send1, (Optr)PSend16991, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16992, (Optr)&t_push_closure, (Optr)PBlock16994, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send0, (Optr)PSend17001, (Optr)&t_send1, (Optr)PSend16993, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17002, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send0, (Optr)PSend17004, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_closure, (Optr)PBlock17005, (Optr)&t_super4, (Optr)PSuper17003, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17011, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17012, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17013, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17014, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Block PBlock16978 = new_Block_with(PArray16979, empty_Array, PThreadedCode16980, 8, PAssign16981, PSend16985, PSend16991, PAssign16992, PAssign17002, PAssign17011, PAssign17013, VAR_result_0_4);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17015 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16978);
    Array PThreadedCode16977 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16978, (Optr)&t_send1, (Optr)PSend17015, (Optr)&t_method_return);
    Method PMethod16974 = new_Method_with(PArray16975, PArray16976, empty_Array, PThreadedCode16977, 1, PSend17015);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_ = new_MethodClosure((Method)PMethod16974, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_invokeNativeMethod_on_message_, MC_SMB_invokeNativeMethod_on_message_);
}


static void init_SMB_interpretMethod_() {
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray17017 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17018 = new_Array_with(1, (Optr)VAR_result_0_1);
    Super PSuper17021 = new_Super(SMB_interpretMethod_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign17020 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper17021);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17022 = new_Send((Optr)PReturnAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17023 = new_Send((Optr)PSend17022, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17019 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17020, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_super1, (Optr)PSuper17021, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17022, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17023, (Optr)&t_method_return);
    Method PMethod17016 = new_Method_with(PArray17017, PArray17018, empty_Array, PThreadedCode17019, 2, PAssign17020, PSend17023);
    
    MethodClosure MC_SMB_interpretMethod_ = new_MethodClosure((Method)PMethod17016, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpretMethod_, MC_SMB_interpretMethod_);
}


static void init_SMB_assignSlot_to_() {
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Variable VAR_anAlias_0_1 = new_Variable_named(L"anAlias", 0);
    Array PArray17025 = new_Array_with(2, (Optr)VAR_anSlot_0_0, (Optr)VAR_anAlias_0_1);
    Variable VAR_alias_0_2 = new_Variable_named(L"alias", 0);
    Array PArray17026 = new_Array_with(1, (Optr)VAR_alias_0_2);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17029 = new_Send((Optr)PFieldWriteAlias_classReference, SMB_alias_, 1, (Optr)VAR_anAlias_0_1);
    Assign PAssign17028 = new_Assign((Optr)VAR_alias_0_2, (Optr)PSend17029);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17030 = new_Send((Optr)VAR_alias_0_2, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17031 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend17032 = new_Send((Optr)VAR_anSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17031);
    Symbol SMB_predecessor_ = new_Symbol(L"predecessor:");
    // predecessor:. 
    Send PSend17033 = new_Send((Optr)VAR_alias_0_2, SMB_predecessor_, 1, (Optr)PSend17032);
    // currentUnwrappedSelf. 
    Send PSend17034 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend17035 = new_Send((Optr)VAR_anSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_alias_0_2, (Optr)PSend17034);
    Array PThreadedCode17027 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign17028, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_1, (Optr)&t_send1, (Optr)PSend17029, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17030, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17031, (Optr)&t_send1, (Optr)PSend17032, (Optr)&t_send1, (Optr)PSend17033, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17034, (Optr)&t_send2, (Optr)PSend17035, (Optr)&t_method_return);
    Method PMethod17024 = new_Method_with(PArray17025, PArray17026, empty_Array, PThreadedCode17027, 4, PAssign17028, PSend17030, PSend17033, PSend17035);
    
    MethodClosure MC_SMB_assignSlot_to_ = new_MethodClosure((Method)PMethod17024, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_assignSlot_to_, MC_SMB_assignSlot_to_);
}


static void init_SMB_interpretBlock_() {
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray17037 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17038 = new_Array_with(1, (Optr)VAR_result_0_1);
    Super PSuper17041 = new_Super(SMB_interpretBlock_, 1, (Optr)VAR_aBlock_0_0);
    Assign PAssign17040 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper17041);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17042 = new_Send((Optr)PReturnAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17043 = new_Send((Optr)PSend17042, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17039 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17040, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_super1, (Optr)PSuper17041, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17042, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17043, (Optr)&t_method_return);
    Method PMethod17036 = new_Method_with(PArray17037, PArray17038, empty_Array, PThreadedCode17039, 2, PAssign17040, PSend17043);
    
    MethodClosure MC_SMB_interpretBlock_ = new_MethodClosure((Method)PMethod17036, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpretBlock_, MC_SMB_interpretBlock_);
}


static void init_SMB_visitUnsintSlot_() {
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    Variable VAR_anUnsintSlot_0_0 = new_Variable_named(L"anUnsintSlot", 0);
    Array PArray17045 = new_Array_with(1, (Optr)VAR_anUnsintSlot_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17046 = new_Array_with(1, (Optr)VAR_result_0_1);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17050 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    // readFrom:. 
    Send PSend17049 = new_Send((Optr)VAR_anUnsintSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17050);
    Assign PAssign17048 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend17049);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend17051 = new_Send((Optr)VAR_result_0_1, SMB_asAllocationAlias_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17047 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17048, (Optr)&t_push_variable, (Optr)VAR_anUnsintSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17050, (Optr)&t_send1, (Optr)PSend17049, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17051, (Optr)&t_method_return);
    Method PMethod17044 = new_Method_with(PArray17045, PArray17046, empty_Array, PThreadedCode17047, 2, PAssign17048, PSend17051);
    
    MethodClosure MC_SMB_visitUnsintSlot_ = new_MethodClosure((Method)PMethod17044, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitUnsintSlot_, MC_SMB_visitUnsintSlot_);
}


static void init_SMB_continueOn_message_() {
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray17053 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray17054 = new_Array_with(1, (Optr)VAR_result_0_2);
    Super PSuper17057 = new_Super(SMB_continueOn_message_, 2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Assign PAssign17056 = new_Assign((Optr)VAR_result_0_2, (Optr)PSuper17057);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17059 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17061 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17062 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17060 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend17061, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17062, (Optr)&t_method_return);
    Block PBlock17058 = new_Block_with(PArray17059, empty_Array, PThreadedCode17060, 2, PSend17061, PSend17062);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17063 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17064 = new_Send((Optr)PBlock17058, SMB_value_, 1, (Optr)PSend17063);
    Array PThreadedCode17055 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17056, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_super2, (Optr)PSuper17057, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17058, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend17063, (Optr)&t_send1, (Optr)PSend17064, (Optr)&t_method_return);
    Method PMethod17052 = new_Method_with(PArray17053, PArray17054, empty_Array, PThreadedCode17055, 2, PAssign17056, PSend17064);
    
    MethodClosure MC_SMB_continueOn_message_ = new_MethodClosure((Method)PMethod17052, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_continueOn_message_, MC_SMB_continueOn_message_);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray17066 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_closure_0_1 = new_Variable_named(L"closure", 0);
    Array PArray17067 = new_Array_with(1, (Optr)VAR_closure_0_1);
    Super PSuper17070 = new_Super(SMB_visitBlock_, 1, (Optr)VAR_aBlock_0_0);
    Assign PAssign17069 = new_Assign((Optr)VAR_closure_0_1, (Optr)PSuper17070);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17072 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17074 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17075 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17073 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_1, (Optr)&t_send1, (Optr)PSend17074, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17075, (Optr)&t_method_return);
    Block PBlock17071 = new_Block_with(PArray17072, empty_Array, PThreadedCode17073, 2, PSend17074, PSend17075);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17076 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17077 = new_Send((Optr)PBlock17071, SMB_value_, 1, (Optr)PSend17076);
    Array PThreadedCode17068 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17069, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_super1, (Optr)PSuper17070, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17071, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend17076, (Optr)&t_send1, (Optr)PSend17077, (Optr)&t_method_return);
    Method PMethod17065 = new_Method_with(PArray17066, PArray17067, empty_Array, PThreadedCode17068, 2, PAssign17069, PSend17077);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod17065, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Array PArray17079 = new_Array_with(1, (Optr)VAR_anSlot_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17080 = new_Array_with(1, (Optr)VAR_result_0_1);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17084 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    // readFrom:. 
    Send PSend17083 = new_Send((Optr)VAR_anSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17084);
    Assign PAssign17082 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend17083);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17085 = new_Send((Optr)PFieldReadAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17086 = new_Send((Optr)PSend17085, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17081 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign17082, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17084, (Optr)&t_send1, (Optr)PSend17083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFieldReadAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17085, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17086, (Optr)&t_method_return);
    Method PMethod17078 = new_Method_with(PArray17079, PArray17080, empty_Array, PThreadedCode17081, 2, PAssign17082, PSend17086);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod17078, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_classOf_() {
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray17088 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17090 = new_Send((Optr)VAR_anAlias_0_0, SMB_value, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17091 = new_Send((Optr)PSend17090, SMB_class, 0);
    Array PThreadedCode17089 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send0, (Optr)PSend17090, (Optr)&t_send0, (Optr)PSend17091, (Optr)&t_method_return);
    Method PMethod17087 = new_Method_with(PArray17088, empty_Array, empty_Array, PThreadedCode17089, 1, PSend17091);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod17087, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_classOf_, MC_SMB_classOf_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray17093 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17096 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend17098 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17099 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)PSend17098);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17100 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17097 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend17098, (Optr)&t_send1, (Optr)PSend17099, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17100, (Optr)&t_method_return);
    Block PBlock17095 = new_Block_with(PArray17096, empty_Array, PThreadedCode17097, 2, PSend17099, PSend17100);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17101 = new_Send((Optr)PLiteralAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17102 = new_Send((Optr)PBlock17095, SMB_value_, 1, (Optr)PSend17101);
    Array PThreadedCode17094 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock17095, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send0, (Optr)PSend17101, (Optr)&t_send1, (Optr)PSend17102, (Optr)&t_method_return);
    Method PMethod17092 = new_Method_with(PArray17093, empty_Array, empty_Array, PThreadedCode17094, 1, PSend17102);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod17092, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_aliasArguments_() {
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Array PArray17104 = new_Array_with(1, (Optr)VAR_aMessage_0_0);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray17107 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17109 = new_Send((Optr)PParameterAlias_classReference, SMB_alias_, 1, (Optr)VAR_arg_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17110 = new_Send((Optr)PSend17109, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend17111 = new_Send((Optr)VAR_aMessage_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend17110);
    Array PThreadedCode17108 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send1, (Optr)PSend17109, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17110, (Optr)&t_send2, (Optr)PSend17111, (Optr)&t_method_return);
    Block PBlock17106 = new_Block_with(PArray17107, empty_Array, PThreadedCode17108, 1, PSend17111);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend17112 = new_Send((Optr)VAR_aMessage_0_0, SMB_withIndexDo_, 1, (Optr)PBlock17106);
    Array PThreadedCode17105 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_closure, (Optr)PBlock17106, (Optr)&t_send1, (Optr)PSend17112, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17103 = new_Method_with(PArray17104, empty_Array, empty_Array, PThreadedCode17105, 2, PSend17112, self);
    
    MethodClosure MC_SMB_aliasArguments_ = new_MethodClosure((Method)PMethod17103, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_aliasArguments_, MC_SMB_aliasArguments_);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray17114 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17117 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend17119 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17120 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)PSend17119);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17121 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17118 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend17119, (Optr)&t_send1, (Optr)PSend17120, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17121, (Optr)&t_method_return);
    Block PBlock17116 = new_Block_with(PArray17117, empty_Array, PThreadedCode17118, 2, PSend17120, PSend17121);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17122 = new_Send((Optr)PLiteralAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17123 = new_Send((Optr)PBlock17116, SMB_value_, 1, (Optr)PSend17122);
    Array PThreadedCode17115 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock17116, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send0, (Optr)PSend17122, (Optr)&t_send1, (Optr)PSend17123, (Optr)&t_method_return);
    Method PMethod17113 = new_Method_with(PArray17114, empty_Array, empty_Array, PThreadedCode17115, 1, PSend17123);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod17113, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_recursiveDoesNotUnderstand_on_() {
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray17125 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    String string_17127 = new_String(L"Recursive doesNotUnderstand: ");
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend17128 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend17129 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)PSend17128);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend17130 = new_Send((Optr)PSend17129, SMB_name, 0);
    Constant string_17127_Const = new_Constant((Optr)string_17127);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend17131 = new_Send((Optr)string_17127_Const, SMB__append_, 1, (Optr)PSend17130);
    String string_17132 = new_String(L">>");
    Constant string_17132_Const = new_Constant((Optr)string_17132);
    // ,. 
    Send PSend17133 = new_Send((Optr)PSend17131, SMB__append_, 1, (Optr)string_17132_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend17134 = new_Send((Optr)VAR_aMessage_0_0, SMB_asString, 0);
    // ,. 
    Send PSend17135 = new_Send((Optr)PSend17133, SMB__append_, 1, (Optr)PSend17134);
    String string_17136 = new_String(L" in ");
    Constant string_17136_Const = new_Constant((Optr)string_17136);
    // ,. 
    Send PSend17137 = new_Send((Optr)PSend17135, SMB__append_, 1, (Optr)string_17136_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17138 = new_Send((Optr)self, SMB_class, 0);
    // name. 
    Send PSend17139 = new_Send((Optr)PSend17138, SMB_name, 0);
    // ,. 
    Send PSend17140 = new_Send((Optr)PSend17137, SMB__append_, 1, (Optr)PSend17139);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend17141 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend17140);
    Array PThreadedCode17126 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_17127, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17128, (Optr)&t_send1, (Optr)PSend17129, (Optr)&t_send0, (Optr)PSend17130, (Optr)&t_send1, (Optr)PSend17131, (Optr)&t_push1, (Optr)string_17132, (Optr)&t_send1, (Optr)PSend17133, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend17134, (Optr)&t_send1, (Optr)PSend17135, (Optr)&t_push1, (Optr)string_17136, (Optr)&t_send1, (Optr)PSend17137, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17138, (Optr)&t_send0, (Optr)PSend17139, (Optr)&t_send1, (Optr)PSend17140, (Optr)&t_send1, (Optr)PSend17141, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17124 = new_Method_with(PArray17125, empty_Array, empty_Array, PThreadedCode17126, 2, PSend17141, self);
    
    MethodClosure MC_SMB_recursiveDoesNotUnderstand_on_ = new_MethodClosure((Method)PMethod17124, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_recursiveDoesNotUnderstand_on_, MC_SMB_recursiveDoesNotUnderstand_on_);
}


static void init_SMB_currentUnwrappedSelf() {
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17144 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend17145 = new_Send((Optr)PSend17144, SMB_receiver, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17146 = new_Send((Optr)PSend17145, SMB_value, 0);
    Array PThreadedCode17143 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17144, (Optr)&t_send0, (Optr)PSend17145, (Optr)&t_send0, (Optr)PSend17146, (Optr)&t_method_return);
    Method PMethod17142 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17143, 1, PSend17146);
    
    MethodClosure MC_SMB_currentUnwrappedSelf = new_MethodClosure((Method)PMethod17142, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_currentUnwrappedSelf, MC_SMB_currentUnwrappedSelf);
}


static void init_SMB_assignUnsintSlot_to_() {
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Variable VAR_anAlias_0_1 = new_Variable_named(L"anAlias", 0);
    Array PArray17148 = new_Array_with(2, (Optr)VAR_anSlot_0_0, (Optr)VAR_anAlias_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17150 = new_Send((Optr)VAR_anAlias_0_1, SMB_value, 0);
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17151 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend17152 = new_Send((Optr)VAR_anSlot_0_0, SMB_assign_on_, 2, (Optr)PSend17150, (Optr)PSend17151);
    Array PThreadedCode17149 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_1, (Optr)&t_send0, (Optr)PSend17150, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17151, (Optr)&t_send2, (Optr)PSend17152, (Optr)&t_method_return);
    Method PMethod17147 = new_Method_with(PArray17148, empty_Array, empty_Array, PThreadedCode17149, 1, PSend17152);
    
    MethodClosure MC_SMB_assignUnsintSlot_to_ = new_MethodClosure((Method)PMethod17147, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_assignUnsintSlot_to_, MC_SMB_assignUnsintSlot_to_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_aSend_0_3 = new_Variable_named(L"aSend", 0);
    Array PArray17154 = new_Array_with(4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    // aliasArguments:. 
    Send PSend17156 = new_Send((Optr)self, SMB_aliasArguments_, 1, (Optr)VAR_aMessage_0_0);
    Super PSuper17157 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Array PThreadedCode17155 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend17156, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_super4, (Optr)PSuper17157, (Optr)&t_method_return);
    Method PMethod17153 = new_Method_with(PArray17154, empty_Array, empty_Array, PThreadedCode17155, 2, PSend17156, PSuper17157);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod17153, Interpretation_AliasInterpreter_Class);
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