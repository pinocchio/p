#include <lib/class/Interpretation/Interpreter.h>


Optr layout_Interpretation_Interpreter_Class_class;
Optr slot_Interpretation_Interpreter_context;
Optr slot_Interpretation_Interpreter_nextInterpreter;
Optr layout_Interpretation_Interpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray15950 = new_Array_with(3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Variable VAR_method_0_3 = new_Variable_named(L"method", 0);
    Array PArray15951 = new_Array_with(1, (Optr)VAR_method_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15954 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15958 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    // lookupSelector:in:. 
    Send PSend15957 = new_Send((Optr)self, SMB_lookupSelector_in_, 2, (Optr)PSend15958, (Optr)VAR_class_0_2);
    Assign PAssign15956 = new_Assign((Optr)VAR_method_0_3, (Optr)PSend15957);
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    // sendDoesNotUnderstandFor:to:. 
    Send PSend15961 = new_Send((Optr)self, SMB_sendDoesNotUnderstandFor_to_, 2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15962 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend15961);
    Array PThreadedCode15960 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend15961, (Optr)&t_send1, (Optr)PSend15962, (Optr)&t_block_return);
    Block PBlock15959 = new_Block_with(empty_Array, empty_Array, PThreadedCode15960, 1, PSend15962);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend15963 = new_Send((Optr)VAR_method_0_3, SMB_ifNil_, 1, (Optr)PBlock15959);
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    // accept:on:message:. 
    Send PSend15964 = new_Send((Optr)VAR_method_0_3, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode15955 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign15956, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend15958, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend15957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_push_closure, (Optr)PBlock15959, (Optr)&t_send1, (Optr)PSend15963, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend15964, (Optr)&t_method_return);
    Block PBlock15953 = new_Block_with(PArray15954, empty_Array, PThreadedCode15955, 3, PAssign15956, PSend15963, PSend15964);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15965 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15953);
    Array PThreadedCode15952 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15953, (Optr)&t_send1, (Optr)PSend15965, (Optr)&t_method_return);
    Method PMethod15949 = new_Method_with(PArray15950, PArray15951, empty_Array, PThreadedCode15952, 1, PSend15965);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod15949, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_interpret_() {
    /*
    interpret: aClosure
// 	^ self new interpret: aClosure
    */
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray15967 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15969 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
    Symbol  SMB_value = new_Symbol(L"value");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value_Const = new_Constant((Optr)SMB_value);
    // selector:. 
    Send PSend15970 = new_Send((Optr)PSend15969, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend15971 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend15970, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode15968 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend15969, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend15970, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send2, (Optr)PSend15971, (Optr)&t_method_return);
    Method PMethod15966 = new_Method_with(PArray15967, empty_Array, empty_Array, PThreadedCode15968, 1, PSend15971);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod15966, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_continueEscape_message_() {
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray15973 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend15975 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15976 = new_Send((Optr)VAR_aContinuation_0_0, SMB_escape_, 1, (Optr)PSend15975);
    Array PThreadedCode15974 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15975, (Optr)&t_send1, (Optr)PSend15976, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15972 = new_Method_with(PArray15973, empty_Array, empty_Array, PThreadedCode15974, 2, PSend15976, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod15972, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_continueEscape_message_, MC_SMB_continueEscape_message_);
}


static void init_SMB_invokeNativeMethod_on_message_() {
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray15978 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray15979 = new_Array_with(1, (Optr)VAR_result_0_3);
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    // swapInvokeNative. 
    Send PSend15981 = new_Send((Optr)self, SMB_swapInvokeNative, 0);
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend15986 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Array PThreadedCode15985 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend15986, (Optr)&t_block_return);
    Block PBlock15984 = new_Block_with(empty_Array, empty_Array, PThreadedCode15985, 1, PSend15986);
    // invokeNativeMethod:on:message:alternative:. 
    Send PSend15983 = new_Send((Optr)self, SMB_invokeNativeMethod_on_message_alternative_, 4, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2, (Optr)PBlock15984);
    Assign PAssign15982 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend15983);
    // swapInvokeNative. 
    Send PSend15987 = new_Send((Optr)nil_Const, SMB_swapInvokeNative, 0);
    Array PThreadedCode15980 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15981, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15982, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock15984, (Optr)&t_send4, (Optr)PSend15983, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_nil, (Optr)&t_send0, (Optr)PSend15987, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Method PMethod15977 = new_Method_with(PArray15978, PArray15979, empty_Array, PThreadedCode15980, 4, PSend15981, PAssign15982, PSend15987, VAR_result_0_3);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_ = new_MethodClosure((Method)PMethod15977, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeNativeMethod_on_message_, MC_SMB_invokeNativeMethod_on_message_);
}


static void init_SMB_interpretMethod_() {
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray15989 = new_Array_with(1, (Optr)VAR_method_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray15990 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign15992 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend15996 = new_Send((Optr)VAR_pc_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign15995 = new_Assign((Optr)VAR_pc_0_1, (Optr)PSend15996);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15997 = new_Send((Optr)VAR_method_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend15998 = new_Send((Optr)PAssign15995, SMB__lt_, 1, (Optr)PSend15997);
    Array PThreadedCode15994 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign15995, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15996, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_send0, (Optr)PSend15997, (Optr)&t_send1, (Optr)PSend15998, (Optr)&t_block_return);
    Block PBlock15993 = new_Block_with(empty_Array, empty_Array, PThreadedCode15994, 1, PSend15998);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend16001 = new_Send((Optr)VAR_method_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16002 = new_Send((Optr)PSend16001, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16000 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16001, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16002, (Optr)&t_block_return);
    Block PBlock15999 = new_Block_with(empty_Array, empty_Array, PThreadedCode16000, 1, PSend16002);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16003 = new_Send((Optr)PBlock15993, SMB_whileTrue_, 1, (Optr)PBlock15999);
    // at:. 
    Send PSend16004 = new_Send((Optr)VAR_method_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    // accept:. 
    Send PSend16005 = new_Send((Optr)PSend16004, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode15991 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign15992, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15993, (Optr)&t_push_closure, (Optr)PBlock15999, (Optr)&t_send1, (Optr)PSend16003, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16004, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16005, (Optr)&t_method_return);
    Method PMethod15988 = new_Method_with(PArray15989, PArray15990, empty_Array, PThreadedCode15991, 3, PAssign15992, PSend16003, PSend16005);
    
    MethodClosure MC_SMB_interpretMethod_ = new_MethodClosure((Method)PMethod15988, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpretMethod_, MC_SMB_interpretMethod_);
}


static void init_SMB_interpretBlock_() {
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray16007 = new_Array_with(1, (Optr)VAR_block_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray16008 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign16010 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend16014 = new_Send((Optr)VAR_pc_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign16013 = new_Assign((Optr)VAR_pc_0_1, (Optr)PSend16014);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16015 = new_Send((Optr)VAR_block_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend16016 = new_Send((Optr)PAssign16013, SMB__lt_, 1, (Optr)PSend16015);
    Array PThreadedCode16012 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign16013, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16014, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend16015, (Optr)&t_send1, (Optr)PSend16016, (Optr)&t_block_return);
    Block PBlock16011 = new_Block_with(empty_Array, empty_Array, PThreadedCode16012, 1, PSend16016);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend16019 = new_Send((Optr)VAR_block_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16020 = new_Send((Optr)PSend16019, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16018 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16019, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16020, (Optr)&t_block_return);
    Block PBlock16017 = new_Block_with(empty_Array, empty_Array, PThreadedCode16018, 1, PSend16020);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16021 = new_Send((Optr)PBlock16011, SMB_whileTrue_, 1, (Optr)PBlock16017);
    // at:. 
    Send PSend16022 = new_Send((Optr)VAR_block_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    // accept:. 
    Send PSend16023 = new_Send((Optr)PSend16022, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode16009 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign16010, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16011, (Optr)&t_push_closure, (Optr)PBlock16017, (Optr)&t_send1, (Optr)PSend16021, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend16022, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16023, (Optr)&t_method_return);
    Method PMethod16006 = new_Method_with(PArray16007, PArray16008, empty_Array, PThreadedCode16009, 3, PAssign16010, PSend16021, PSend16023);
    
    MethodClosure MC_SMB_interpretBlock_ = new_MethodClosure((Method)PMethod16006, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpretBlock_, MC_SMB_interpretBlock_);
}


static void init_SMB_visitDirectVariable_() {
    Symbol SMB_visitDirectVariable_ = new_Symbol(L"visitDirectVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray16025 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16027 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)nil_Const);
    Array PThreadedCode16026 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16027, (Optr)&t_method_return);
    Method PMethod16024 = new_Method_with(PArray16025, empty_Array, empty_Array, PThreadedCode16026, 1, PSend16027);
    
    MethodClosure MC_SMB_visitDirectVariable_ = new_MethodClosure((Method)PMethod16024, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitDirectVariable_, MC_SMB_visitDirectVariable_);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Array PArray16029 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16031 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16032 = new_Send((Optr)VAR_aSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16031);
    Array PThreadedCode16030 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16031, (Optr)&t_send1, (Optr)PSend16032, (Optr)&t_method_return);
    Method PMethod16028 = new_Method_with(PArray16029, empty_Array, empty_Array, PThreadedCode16030, 1, PSend16032);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod16028, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_classOf_() {
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray16034 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16036 = new_Send((Optr)VAR_anObject_0_0, SMB_class, 0);
    Array PThreadedCode16035 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend16036, (Optr)&t_method_return);
    Method PMethod16033 = new_Method_with(PArray16034, empty_Array, empty_Array, PThreadedCode16035, 1, PSend16036);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod16033, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_classOf_, MC_SMB_classOf_);
}


static void init_SMB_visitAssign_() {
    Symbol SMB_visitAssign_ = new_Symbol(L"visitAssign:");
    Variable VAR_anAssign_0_0 = new_Variable_named(L"anAssign", 0);
    Array PArray16038 = new_Array_with(1, (Optr)VAR_anAssign_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16039 = new_Array_with(1, (Optr)VAR_value_0_1);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend16043 = new_Send((Optr)VAR_anAssign_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16042 = new_Send((Optr)PSend16043, SMB_accept_, 1, (Optr)self);
    Assign PAssign16041 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend16042);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend16044 = new_Send((Optr)VAR_anAssign_0_0, SMB_variable, 0);
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    // assignFor:to:. 
    Send PSend16045 = new_Send((Optr)PSend16044, SMB_assignFor_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode16040 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign16041, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend16043, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16042, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend16044, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend16045, (Optr)&t_method_return);
    Method PMethod16037 = new_Method_with(PArray16038, PArray16039, empty_Array, PThreadedCode16040, 2, PAssign16041, PSend16045);
    
    MethodClosure MC_SMB_visitAssign_ = new_MethodClosure((Method)PMethod16037, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitAssign_, MC_SMB_visitAssign_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray16047 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16049 = new_Send((Optr)self, SMB_currentSelf, 0);
    Array PThreadedCode16048 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16049, (Optr)&t_method_return);
    Method PMethod16046 = new_Method_with(PArray16047, empty_Array, empty_Array, PThreadedCode16048, 1, PSend16049);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod16046, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_blockContextFor_message_() {
    Symbol SMB_blockContextFor_message_ = new_Symbol(L"blockContextFor:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16051 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray16052 = new_Array_with(2, (Optr)VAR_block_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16055 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_code, 0);
    Assign PAssign16054 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend16055);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16059 = new_Send((Optr)VAR_block_0_2, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16058 = new_Send((Optr)PSend16059, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend16061 = new_Send((Optr)VAR_block_0_2, SMB_locals, 0);
    // size. 
    Send PSend16060 = new_Send((Optr)PSend16061, SMB_size, 0);
    // +. 
    Send PSend16057 = new_Send((Optr)PSend16058, SMB__plus_, 1, (Optr)PSend16060);
    Assign PAssign16056 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend16057);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16062 = new_Send((Optr)VAR_size_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend16067 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Assign PAssign16066 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16067);
    Array PThreadedCode16065 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign16066, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16067, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16064 = new_Block_with(empty_Array, empty_Array, PThreadedCode16065, 1, PAssign16066);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16073 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend16075 = new_Send((Optr)VAR__receiver__1_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    // context. 
    Send PSend16076 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    // outerScope:. 
    Send PSend16077 = new_Send((Optr)VAR__receiver__1_0, SMB_outerScope_, 1, (Optr)PSend16076);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16078 = new_Send((Optr)VAR__receiver__1_0, SMB_closure_, 1, (Optr)VAR_aBlockClosure_0_0);
    // context. 
    Send PSend16079 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16080 = new_Send((Optr)PSend16079, SMB_homeContext, 0);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend16081 = new_Send((Optr)VAR__receiver__1_0, SMB_homeContext_, 1, (Optr)PSend16080);
    Array PThreadedCode16074 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16075, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16076, (Optr)&t_send1, (Optr)PSend16077, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send1, (Optr)PSend16078, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16079, (Optr)&t_send0, (Optr)PSend16080, (Optr)&t_send1, (Optr)PSend16081, (Optr)&t_method_return);
    Block PBlock16072 = new_Block_with(PArray16073, empty_Array, PThreadedCode16074, 4, PSend16075, PSend16077, PSend16078, PSend16081);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16082 = new_Send((Optr)PBlockContext_classReference, SMB_new_, 1, (Optr)VAR_size_0_3);
    // value:. 
    Send PSend16071 = new_Send((Optr)PBlock16072, SMB_value_, 1, (Optr)PSend16082);
    Assign PAssign16070 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16071);
    Array PThreadedCode16069 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign16070, (Optr)&t_push_closure, (Optr)PBlock16072, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend16082, (Optr)&t_send1, (Optr)PSend16071, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16068 = new_Block_with(empty_Array, empty_Array, PThreadedCode16069, 1, PAssign16070);
    // ifTrue:ifFalse:. 
    Send PSend16063 = new_Send((Optr)PSend16062, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock16064, (Optr)PBlock16068);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16084 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16086 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_value_1_0);
    Array PThreadedCode16085 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send2, (Optr)PSend16086, (Optr)&t_method_return);
    Block PBlock16083 = new_Block_with(PArray16084, empty_Array, PThreadedCode16085, 1, PSend16086);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16087 = new_Send((Optr)VAR_aMessage_0_1, SMB_withIndexDo_, 1, (Optr)PBlock16083);
    Array PThreadedCode16053 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign16054, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16055, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16056, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16059, (Optr)&t_send0, (Optr)PSend16058, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16061, (Optr)&t_send0, (Optr)PSend16060, (Optr)&t_send1, (Optr)PSend16057, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16062, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend16063, (Optr)PBlock16064, (Optr)PBlock16068, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_closure, (Optr)PBlock16083, (Optr)&t_send1, (Optr)PSend16087, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16050 = new_Method_with(PArray16051, PArray16052, empty_Array, PThreadedCode16053, 5, PAssign16054, PAssign16056, PSend16063, PSend16087, self);
    
    MethodClosure MC_SMB_blockContextFor_message_ = new_MethodClosure((Method)PMethod16050, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockContextFor_message_, MC_SMB_blockContextFor_message_);
}


static void init_SMB_recursiveDoesNotUnderstand_on_() {
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16089 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16092 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16094 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16095 = new_Send((Optr)VAR_receiver_0_1, SMB_class, 0);
    Symbol SMB_cls_ = new_Symbol(L"cls:");
    // cls:. 
    Send PSend16096 = new_Send((Optr)VAR__receiver__1_0, SMB_cls_, 1, (Optr)PSend16095);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend16097 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_aMessage_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend16098 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode16093 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16094, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send0, (Optr)PSend16095, (Optr)&t_send1, (Optr)PSend16096, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend16097, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16098, (Optr)&t_method_return);
    Block PBlock16091 = new_Block_with(PArray16092, empty_Array, PThreadedCode16093, 4, PSend16094, PSend16096, PSend16097, PSend16098);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16099 = new_Send((Optr)PRecursiveDoesNotUnderstand_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16100 = new_Send((Optr)PBlock16091, SMB_value_, 1, (Optr)PSend16099);
    Array PThreadedCode16090 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16091, (Optr)&t_push_class_reference, (Optr)PRecursiveDoesNotUnderstand_classReference, (Optr)&t_send0, (Optr)PSend16099, (Optr)&t_send1, (Optr)PSend16100, (Optr)&t_method_return);
    Method PMethod16088 = new_Method_with(PArray16089, empty_Array, empty_Array, PThreadedCode16090, 1, PSend16100);
    
    MethodClosure MC_SMB_recursiveDoesNotUnderstand_on_ = new_MethodClosure((Method)PMethod16088, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_recursiveDoesNotUnderstand_on_, MC_SMB_recursiveDoesNotUnderstand_on_);
}


static void init_SMB_currentClass() {
    Symbol SMB_currentClass = new_Symbol(L"currentClass");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16103 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    // methodClass. 
    Send PSend16104 = new_Send((Optr)PSend16103, SMB_methodClass, 0);
    Array PThreadedCode16102 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16103, (Optr)&t_send0, (Optr)PSend16104, (Optr)&t_method_return);
    Method PMethod16101 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16102, 1, PSend16104);
    
    MethodClosure MC_SMB_currentClass = new_MethodClosure((Method)PMethod16101, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_currentClass, MC_SMB_currentClass);
}


static void init_SMB_blockclosureValueWithArguments_message_() {
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16106 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16108 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    // blockclosureValue:message:. 
    Send PSend16109 = new_Send((Optr)self, SMB_blockclosureValue_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)PSend16108);
    Array PThreadedCode16107 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16108, (Optr)&t_send2, (Optr)PSend16109, (Optr)&t_method_return);
    Method PMethod16105 = new_Method_with(PArray16106, empty_Array, empty_Array, PThreadedCode16107, 1, PSend16109);
    
    MethodClosure MC_SMB_blockclosureValueWithArguments_message_ = new_MethodClosure((Method)PMethod16105, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockclosureValueWithArguments_message_, MC_SMB_blockclosureValueWithArguments_message_);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_aSuper_0_0 = new_Variable_named(L"aSuper", 0);
    Array PArray16111 = new_Array_with(1, (Optr)VAR_aSuper_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray16112 = new_Array_with(2, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16115 = new_Send((Optr)self, SMB_currentSelf, 0);
    Assign PAssign16114 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend16115);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16118 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    // new:. 
    Send PSend16117 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend16118);
    Assign PAssign16116 = new_Assign((Optr)VAR_message_0_2, (Optr)PSend16117);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend16119 = new_Send((Optr)VAR_aSuper_0_0, SMB_message, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16120 = new_Send((Optr)VAR_message_0_2, SMB_selector_, 1, (Optr)PSend16119);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16122 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16124 = new_Send((Optr)VAR_arg_1_0, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16125 = new_Send((Optr)VAR_message_0_2, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend16124);
    Array PThreadedCode16123 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16124, (Optr)&t_send2, (Optr)PSend16125, (Optr)&t_method_return);
    Block PBlock16121 = new_Block_with(PArray16122, empty_Array, PThreadedCode16123, 1, PSend16125);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16126 = new_Send((Optr)VAR_aSuper_0_0, SMB_withIndexDo_, 1, (Optr)PBlock16121);
    Symbol SMB_currentClass = new_Symbol(L"currentClass");
    // currentClass. 
    Send PSend16127 = new_Send((Optr)self, SMB_currentClass, 0);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend16128 = new_Send((Optr)PSend16127, SMB_superclass, 0);
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    // send:to:class:for:. 
    Send PSend16129 = new_Send((Optr)self, SMB_send_to_class_for_, 4, (Optr)VAR_message_0_2, (Optr)VAR_receiver_0_1, (Optr)PSend16128, (Optr)VAR_aSuper_0_0);
    Array PThreadedCode16113 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push1, (Optr)PAssign16114, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16115, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16116, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend16118, (Optr)&t_send1, (Optr)PSend16117, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend16119, (Optr)&t_send1, (Optr)PSend16120, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_push_closure, (Optr)PBlock16121, (Optr)&t_send1, (Optr)PSend16126, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16127, (Optr)&t_send0, (Optr)PSend16128, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send4, (Optr)PSend16129, (Optr)&t_method_return);
    Method PMethod16110 = new_Method_with(PArray16111, PArray16112, empty_Array, PThreadedCode16113, 5, PAssign16114, PAssign16116, PSend16120, PSend16126, PSend16129);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod16110, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray16131 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray16132 = new_Array_with(2, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16136 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend16135 = new_Send((Optr)PSend16136, SMB_accept_, 1, (Optr)self);
    Assign PAssign16134 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend16135);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16139 = new_Send((Optr)VAR_aSend_0_0, SMB_size, 0);
    // new:. 
    Send PSend16138 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend16139);
    Assign PAssign16137 = new_Assign((Optr)VAR_message_0_2, (Optr)PSend16138);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend16140 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16141 = new_Send((Optr)VAR_message_0_2, SMB_selector_, 1, (Optr)PSend16140);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16143 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    // accept:. 
    Send PSend16145 = new_Send((Optr)VAR_arg_1_0, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16146 = new_Send((Optr)VAR_message_0_2, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend16145);
    Array PThreadedCode16144 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16145, (Optr)&t_send2, (Optr)PSend16146, (Optr)&t_method_return);
    Block PBlock16142 = new_Block_with(PArray16143, empty_Array, PThreadedCode16144, 1, PSend16146);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16147 = new_Send((Optr)VAR_aSend_0_0, SMB_withIndexDo_, 1, (Optr)PBlock16142);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16148 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    // send:to:class:for:. 
    Send PSend16149 = new_Send((Optr)self, SMB_send_to_class_for_, 4, (Optr)VAR_message_0_2, (Optr)VAR_receiver_0_1, (Optr)PSend16148, (Optr)VAR_aSend_0_0);
    Array PThreadedCode16133 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign16134, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16136, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16135, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16137, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16139, (Optr)&t_send1, (Optr)PSend16138, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend16140, (Optr)&t_send1, (Optr)PSend16141, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_closure, (Optr)PBlock16142, (Optr)&t_send1, (Optr)PSend16147, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16148, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send4, (Optr)PSend16149, (Optr)&t_method_return);
    Method PMethod16130 = new_Method_with(PArray16131, PArray16132, empty_Array, PThreadedCode16133, 5, PAssign16134, PAssign16137, PSend16141, PSend16147, PSend16149);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod16130, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSend_, MC_SMB_visitSend_);
}


static void init_SMB_invokeReflectionMethod_on_message_() {
    Symbol SMB_invokeReflectionMethod_on_message_ = new_Symbol(L"invokeReflectionMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16151 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_annotation_0_3 = new_Variable_named(L"annotation", 0);
    Variable VAR_selector_0_4 = new_Variable_named(L"selector", 0);
    Array PArray16152 = new_Array_with(2, (Optr)VAR_annotation_0_3, (Optr)VAR_selector_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16155 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotationAt:. 
    Send PSend16158 = new_Send((Optr)VAR_aClosure_0_0, SMB_annotationAt_, 1, (Optr)SMB_pinocchioReflective__Const);
    Assign PAssign16157 = new_Assign((Optr)VAR_annotation_0_3, (Optr)PSend16158);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16160 = new_Send((Optr)VAR_annotation_0_3, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16159 = new_Assign((Optr)VAR_selector_0_4, (Optr)PSend16160);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend16161 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)VAR_selector_0_4);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend16165 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    // perform:withArguments:. 
    Send PSend16166 = new_Send((Optr)self, SMB_perform_withArguments_, 2, (Optr)VAR_selector_0_4, (Optr)PSend16165);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16167 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16166);
    Array PThreadedCode16164 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_4, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send2, (Optr)PSend16165, (Optr)&t_send2, (Optr)PSend16166, (Optr)&t_send1, (Optr)PSend16167, (Optr)&t_block_return);
    Block PBlock16163 = new_Block_with(empty_Array, empty_Array, PThreadedCode16164, 1, PSend16167);
    // ifTrue:. 
    Send PSend16162 = new_Send((Optr)PSend16161, SMB_ifTrue_, 1, (Optr)PBlock16163);
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend16168 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Array PThreadedCode16156 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign16157, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend16158, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16159, (Optr)&t_push_variable, (Optr)VAR_annotation_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16160, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_4, (Optr)&t_send1, (Optr)PSend16161, (Optr)&t_send_ifTrue_, (Optr)PSend16162, (Optr)PBlock16163, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16168, (Optr)&t_method_return);
    Block PBlock16154 = new_Block_with(PArray16155, empty_Array, PThreadedCode16156, 4, PAssign16157, PAssign16159, PSend16162, PSend16168);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16169 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16154);
    Array PThreadedCode16153 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16154, (Optr)&t_send1, (Optr)PSend16169, (Optr)&t_method_return);
    Method PMethod16150 = new_Method_with(PArray16151, PArray16152, empty_Array, PThreadedCode16153, 1, PSend16169);
    
    MethodClosure MC_SMB_invokeReflectionMethod_on_message_ = new_MethodClosure((Method)PMethod16150, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeReflectionMethod_on_message_, MC_SMB_invokeReflectionMethod_on_message_);
}


static void init_SMB_blockclosureValue_message_() {
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16171 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_returnContext_0_4 = new_Variable_named(L"returnContext", 0);
    Array PArray16172 = new_Array_with(3, (Optr)VAR_block_0_2, (Optr)VAR_result_0_3, (Optr)VAR_returnContext_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16175 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16178 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_code, 0);
    Assign PAssign16177 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend16178);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16179 = new_Send((Optr)VAR_block_0_2, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16180 = new_Send((Optr)PSend16179, SMB_size, 0);
    // size. 
    Send PSend16181 = new_Send((Optr)VAR_aMessage_0_1, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend16182 = new_Send((Optr)PSend16180, SMB__equals_, 1, (Optr)PSend16181);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend16183 = new_Send((Optr)self, SMB_assert_, 1, (Optr)PSend16182);
    // size. 
    Send PSend16184 = new_Send((Optr)VAR_block_0_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16185 = new_Send((Optr)PSend16184, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16189 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode16188 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16189, (Optr)&t_block_return);
    Block PBlock16187 = new_Block_with(empty_Array, empty_Array, PThreadedCode16188, 1, PSend16189);
    // ifTrue:. 
    Send PSend16186 = new_Send((Optr)PSend16185, SMB_ifTrue_, 1, (Optr)PBlock16187);
    Assign PAssign16190 = new_Assign((Optr)VAR_returnContext_0_4, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_blockContextFor_message_ = new_Symbol(L"blockContextFor:message:");
    // blockContextFor:message:. 
    Send PSend16191 = new_Send((Optr)self, SMB_blockContextFor_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    // interpretBlock:. 
    Send PSend16193 = new_Send((Optr)self, SMB_interpretBlock_, 1, (Optr)VAR_block_0_2);
    Assign PAssign16192 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16193);
    Assign PAssign16194 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)VAR_returnContext_0_4);
    Array PThreadedCode16176 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign16177, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16178, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16179, (Optr)&t_send0, (Optr)PSend16180, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_send0, (Optr)PSend16181, (Optr)&t_send1, (Optr)PSend16182, (Optr)&t_send1, (Optr)PSend16183, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16184, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16185, (Optr)&t_send_ifTrue_, (Optr)PSend16186, (Optr)PBlock16187, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16190, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_send2, (Optr)PSend16191, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16192, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend16193, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16194, (Optr)&t_push_variable, (Optr)VAR_returnContext_0_4, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock16174 = new_Block_with(PArray16175, empty_Array, PThreadedCode16176, 8, PAssign16177, PSend16183, PSend16186, PAssign16190, PSend16191, PAssign16192, PAssign16194, VAR_result_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16195 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16174);
    Array PThreadedCode16173 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16174, (Optr)&t_send1, (Optr)PSend16195, (Optr)&t_method_return);
    Method PMethod16170 = new_Method_with(PArray16171, PArray16172, empty_Array, PThreadedCode16173, 1, PSend16195);
    
    MethodClosure MC_SMB_blockclosureValue_message_ = new_MethodClosure((Method)PMethod16170, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockclosureValue_message_, MC_SMB_blockclosureValue_message_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray16197 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16199 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16198 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16199, (Optr)&t_method_return);
    Method PMethod16196 = new_Method_with(PArray16197, empty_Array, empty_Array, PThreadedCode16198, 1, PSend16199);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod16196, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentSelf() {
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16202 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16203 = new_Send((Optr)PSend16202, SMB_receiver, 0);
    Array PThreadedCode16201 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16202, (Optr)&t_send0, (Optr)PSend16203, (Optr)&t_method_return);
    Method PMethod16200 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16201, 1, PSend16203);
    
    MethodClosure MC_SMB_currentSelf = new_MethodClosure((Method)PMethod16200, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_currentSelf, MC_SMB_currentSelf);
}


static void init_SMB_visitUnsintSlot_() {
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Array PArray16205 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16207 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16208 = new_Send((Optr)VAR_aSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16207);
    Array PThreadedCode16206 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16207, (Optr)&t_send1, (Optr)PSend16208, (Optr)&t_method_return);
    Method PMethod16204 = new_Method_with(PArray16205, empty_Array, empty_Array, PThreadedCode16206, 1, PSend16208);
    
    MethodClosure MC_SMB_visitUnsintSlot_ = new_MethodClosure((Method)PMethod16204, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitUnsintSlot_, MC_SMB_visitUnsintSlot_);
}


static void init_SMB_assignSlot_to_() {
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16210 = new_Array_with(2, (Optr)VAR_aSlot_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16212 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16213 = new_Send((Optr)VAR_aSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)PSend16212);
    Array PThreadedCode16211 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16212, (Optr)&t_send2, (Optr)PSend16213, (Optr)&t_method_return);
    Method PMethod16209 = new_Method_with(PArray16210, empty_Array, empty_Array, PThreadedCode16211, 1, PSend16213);
    
    MethodClosure MC_SMB_assignSlot_to_ = new_MethodClosure((Method)PMethod16209, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignSlot_to_, MC_SMB_assignSlot_to_);
}


static void init_SMB_continueOn_message_() {
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray16215 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_saveContext_0_2 = new_Variable_named(L"saveContext", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_aBlock_0_4 = new_Variable_named(L"aBlock", 0);
    Array PArray16216 = new_Array_with(3, (Optr)VAR_saveContext_0_2, (Optr)VAR_result_0_3, (Optr)VAR_aBlock_0_4);
    Assign PAssign16218 = new_Assign((Optr)VAR_saveContext_0_2, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16220 = new_Send((Optr)VAR_message_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16219 = new_Assign((Optr)VAR_aBlock_0_4, (Optr)PSend16220);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_metaCont_1_0 = new_Variable_named(L"metaCont", 1);
    Array PArray16224 = new_Array_with(1, (Optr)VAR_metaCont_1_0);
    Symbol  SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend16226 = new_Send((Optr)VAR_message_0_1, SMB_selector_, 1, (Optr)SMB_value__Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16227 = new_Send((Optr)VAR_message_0_1, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_metaCont_1_0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16228 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_message_0_1, (Optr)VAR_aBlock_0_4);
    Array PThreadedCode16225 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend16226, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_metaCont_1_0, (Optr)&t_send2, (Optr)PSend16227, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_4, (Optr)&t_send2, (Optr)PSend16228, (Optr)&t_method_return);
    Block PBlock16223 = new_Block_with(PArray16224, empty_Array, PThreadedCode16225, 3, PSend16226, PSend16227, PSend16228);
    // on:. 
    Send PSend16222 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16223);
    Assign PAssign16221 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16222);
    Assign PAssign16229 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)VAR_saveContext_0_2);
    Array PThreadedCode16217 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16218, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16219, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16220, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16221, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16223, (Optr)&t_send1, (Optr)PSend16222, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16229, (Optr)&t_push_variable, (Optr)VAR_saveContext_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Method PMethod16214 = new_Method_with(PArray16215, PArray16216, empty_Array, PThreadedCode16217, 5, PAssign16218, PAssign16219, PAssign16221, PAssign16229, VAR_result_0_3);
    
    MethodClosure MC_SMB_continueOn_message_ = new_MethodClosure((Method)PMethod16214, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_continueOn_message_, MC_SMB_continueOn_message_);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray16231 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16234 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16236 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend16237 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16235 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16236, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend16237, (Optr)&t_method_return);
    Block PBlock16233 = new_Block_with(PArray16234, empty_Array, PThreadedCode16235, 2, PSend16236, PSend16237);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16238 = new_Send((Optr)PBlockClosure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16239 = new_Send((Optr)PBlock16233, SMB_value_, 1, (Optr)PSend16238);
    Array PThreadedCode16232 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16233, (Optr)&t_push_class_reference, (Optr)PBlockClosure_classReference, (Optr)&t_send0, (Optr)PSend16238, (Optr)&t_send1, (Optr)PSend16239, (Optr)&t_method_return);
    Method PMethod16230 = new_Method_with(PArray16231, empty_Array, empty_Array, PThreadedCode16232, 1, PSend16239);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod16230, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_send_to_() {
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16241 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16243 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    // send:to:class:. 
    Send PSend16244 = new_Send((Optr)self, SMB_send_to_class_, 3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)PSend16243);
    Array PThreadedCode16242 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16243, (Optr)&t_send3, (Optr)PSend16244, (Optr)&t_method_return);
    Method PMethod16240 = new_Method_with(PArray16241, empty_Array, empty_Array, PThreadedCode16242, 1, PSend16244);
    
    MethodClosure MC_SMB_send_to_ = new_MethodClosure((Method)PMethod16240, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_, MC_SMB_send_to_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray16246 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend16248 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Array PThreadedCode16247 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend16248, (Optr)&t_method_return);
    Method PMethod16245 = new_Method_with(PArray16246, empty_Array, empty_Array, PThreadedCode16247, 1, PSend16248);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod16245, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_invokeNativeMethod_on_message_alternative_() {
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray16250 = new_Array_with(4, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_aBlock_0_3);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Interpretation_minus_Interpreter = new_Symbol(L"Interpretation.Interpreter");
    Annotation PAnnotation16252 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_invokeNativeMethod_on_message_alternative_, (Optr)SMB_Interpretation_minus_Interpreter);
    Array PArray16251 = new_Array_with(1, (Optr)PAnnotation16252);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16254 = new_Send((Optr)VAR_aBlock_0_3, SMB_value, 0);
    Array PThreadedCode16253 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_send0, (Optr)PSend16254, (Optr)&t_method_return);
    NativeMethod PNativeMethod16249 = new_NativeMethod_with(PArray16250, empty_Array, PArray16251, PThreadedCode16253, 1, PSend16254);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_alternative_ = new_MethodClosure((Method)PNativeMethod16249, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeNativeMethod_on_message_alternative_, MC_SMB_invokeNativeMethod_on_message_alternative_);
}


static void init_SMB_sendNext_to_class_() {
    Symbol SMB_sendNext_to_class_ = new_Symbol(L"sendNext:to:class:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Array PArray16256 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_cls_0_2);
    Variable VAR_msg_0_3 = new_Variable_named(L"msg", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16257 = new_Array_with(2, (Optr)VAR_msg_0_3, (Optr)VAR_result_0_4);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    // send:to:class:. 
    Send PSend16263 = new_Send((Optr)self, SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_cls_0_2);
    Array PThreadedCode16262 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send3, (Optr)PSend16263, (Optr)&t_block_return);
    Block PBlock16261 = new_Block_with(empty_Array, empty_Array, PThreadedCode16262, 1, PSend16263);
    Variable VAR_next_1_0 = new_Variable_named(L"next", 1);
    Array PArray16265 = new_Array_with(1, (Optr)VAR_next_1_0);
    Assign PAssign16267 = new_Assign((Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)nil_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16271 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol  SMB_sendNext_to_ = new_Symbol(L"sendNext:to:");
    Constant SMB_sendNext_to__Const = new_Constant((Optr)SMB_sendNext_to_);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16273 = new_Send((Optr)SMB_sendNext_to__Const, SMB_class, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16274 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend16273);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend16275 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_message_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend16276 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)VAR_receiver_0_1);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend16277 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)VAR_cls_0_2);
    Array PThreadedCode16272 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_sendNext_to_, (Optr)&t_send0, (Optr)PSend16273, (Optr)&t_send1, (Optr)PSend16274, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send2, (Optr)PSend16275, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16276, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend16277, (Optr)&t_method_return);
    Block PBlock16270 = new_Block_with(PArray16271, empty_Array, PThreadedCode16272, 4, PSend16274, PSend16275, PSend16276, PSend16277);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16278 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)int_3_Const);
    // value:. 
    Send PSend16269 = new_Send((Optr)PBlock16270, SMB_value_, 1, (Optr)PSend16278);
    Assign PAssign16268 = new_Assign((Optr)VAR_msg_0_3, (Optr)PSend16269);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16279 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_msg_0_3, (Optr)VAR_next_1_0);
    Array PThreadedCode16266 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign16267, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16268, (Optr)&t_push_closure, (Optr)PBlock16270, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend16278, (Optr)&t_send1, (Optr)PSend16269, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_3, (Optr)&t_push_variable, (Optr)VAR_next_1_0, (Optr)&t_send2, (Optr)PSend16279, (Optr)&t_method_return);
    Block PBlock16264 = new_Block_with(PArray16265, empty_Array, PThreadedCode16266, 3, PAssign16267, PAssign16268, PSend16279);
    // ifNil:ifNotNil:. 
    Send PSend16260 = new_Send((Optr)slot_Interpretation_Interpreter_nextInterpreter, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock16261, (Optr)PBlock16264);
    Assign PAssign16259 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16260);
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    // swapInvokeNative. 
    Send PSend16280 = new_Send((Optr)self, SMB_swapInvokeNative, 0);
    Array PThreadedCode16258 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16259, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)&t_push_closure, (Optr)PBlock16261, (Optr)&t_push_closure, (Optr)PBlock16264, (Optr)&t_send2, (Optr)PSend16260, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16280, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Method PMethod16255 = new_Method_with(PArray16256, PArray16257, empty_Array, PThreadedCode16258, 3, PAssign16259, PSend16280, VAR_result_0_4);
    
    MethodClosure MC_SMB_sendNext_to_class_ = new_MethodClosure((Method)PMethod16255, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_sendNext_to_class_, MC_SMB_sendNext_to_class_);
}


static void init_SMB_lookupSelector_in_() {
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray16282 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Variable VAR_currentClass_0_2 = new_Variable_named(L"currentClass", 0);
    Array PArray16283 = new_Array_with(1, (Optr)VAR_currentClass_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16286 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign16288 = new_Assign((Optr)VAR_currentClass_0_2, (Optr)VAR_class_0_1);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16291 = new_Send((Optr)VAR_currentClass_0_2, SMB_isNil, 0);
    Array PThreadedCode16290 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16291, (Optr)&t_block_return);
    Block PBlock16289 = new_Block_with(empty_Array, empty_Array, PThreadedCode16290, 1, PSend16291);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend16294 = new_Send((Optr)VAR_currentClass_0_2, SMB_methodDict, 0);
    Variable VAR_method_2_0 = new_Variable_named(L"method", 2);
    Array PArray16296 = new_Array_with(1, (Optr)VAR_method_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16298 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_method_2_0);
    Array PThreadedCode16297 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_method_2_0, (Optr)&t_send1, (Optr)PSend16298, (Optr)&t_method_return);
    Block PBlock16295 = new_Block_with(PArray16296, empty_Array, PThreadedCode16297, 1, PSend16298);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend16299 = new_Send((Optr)PSend16294, SMB_at_ifPresent_, 2, (Optr)VAR_selector_0_0, (Optr)PBlock16295);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend16301 = new_Send((Optr)VAR_currentClass_0_2, SMB_superclass, 0);
    Assign PAssign16300 = new_Assign((Optr)VAR_currentClass_0_2, (Optr)PSend16301);
    Array PThreadedCode16293 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16294, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_closure, (Optr)PBlock16295, (Optr)&t_send2, (Optr)PSend16299, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16300, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16301, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16292 = new_Block_with(empty_Array, empty_Array, PThreadedCode16293, 2, PSend16299, PAssign16300);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16302 = new_Send((Optr)PBlock16289, SMB_whileFalse_, 1, (Optr)PBlock16292);
    Array PThreadedCode16287 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign16288, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16289, (Optr)&t_push_closure, (Optr)PBlock16292, (Optr)&t_send1, (Optr)PSend16302, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16285 = new_Block_with(PArray16286, empty_Array, PThreadedCode16287, 3, PAssign16288, PSend16302, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16303 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16285);
    Array PThreadedCode16284 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16285, (Optr)&t_send1, (Optr)PSend16303, (Optr)&t_method_return);
    Method PMethod16281 = new_Method_with(PArray16282, PArray16283, empty_Array, PThreadedCode16284, 1, PSend16303);
    
    MethodClosure MC_SMB_lookupSelector_in_ = new_MethodClosure((Method)PMethod16281, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_lookupSelector_in_, MC_SMB_lookupSelector_in_);
}


static void init_SMB_methodContextFor_receiver_message_() {
    Symbol SMB_methodContextFor_receiver_message_ = new_Symbol(L"methodContextFor:receiver:message:");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16305 = new_Array_with(3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16310 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend16312 = new_Send((Optr)VAR__receiver__1_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16313 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16314 = new_Send((Optr)VAR__receiver__1_0, SMB_closure_, 1, (Optr)VAR_closure_0_0);
    Array PThreadedCode16311 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16312, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16313, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend16314, (Optr)&t_method_return);
    Block PBlock16309 = new_Block_with(PArray16310, empty_Array, PThreadedCode16311, 3, PSend16312, PSend16313, PSend16314);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16319 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16318 = new_Send((Optr)PSend16319, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16317 = new_Send((Optr)PSend16318, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // code. 
    Send PSend16322 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend16321 = new_Send((Optr)PSend16322, SMB_locals, 0);
    // size. 
    Send PSend16320 = new_Send((Optr)PSend16321, SMB_size, 0);
    // +. 
    Send PSend16316 = new_Send((Optr)PSend16317, SMB__plus_, 1, (Optr)PSend16320);
    // new:. 
    Send PSend16315 = new_Send((Optr)PMethodContext_classReference, SMB_new_, 1, (Optr)PSend16316);
    // value:. 
    Send PSend16308 = new_Send((Optr)PBlock16309, SMB_value_, 1, (Optr)PSend16315);
    Assign PAssign16307 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16308);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16324 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16326 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_arg_1_0);
    Array PThreadedCode16325 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send2, (Optr)PSend16326, (Optr)&t_method_return);
    Block PBlock16323 = new_Block_with(PArray16324, empty_Array, PThreadedCode16325, 1, PSend16326);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16327 = new_Send((Optr)VAR_aMessage_0_2, SMB_withIndexDo_, 1, (Optr)PBlock16323);
    Array PThreadedCode16306 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign16307, (Optr)&t_push_closure, (Optr)PBlock16309, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16319, (Optr)&t_send0, (Optr)PSend16318, (Optr)&t_send0, (Optr)PSend16317, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16322, (Optr)&t_send0, (Optr)PSend16321, (Optr)&t_send0, (Optr)PSend16320, (Optr)&t_send1, (Optr)PSend16316, (Optr)&t_send1, (Optr)PSend16315, (Optr)&t_send1, (Optr)PSend16308, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock16323, (Optr)&t_send1, (Optr)PSend16327, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16304 = new_Method_with(PArray16305, empty_Array, empty_Array, PThreadedCode16306, 3, PAssign16307, PSend16327, self);
    
    MethodClosure MC_SMB_methodContextFor_receiver_message_ = new_MethodClosure((Method)PMethod16304, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_methodContextFor_receiver_message_, MC_SMB_methodContextFor_receiver_message_);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray16329 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend16331 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode16330 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend16331, (Optr)&t_method_return);
    Method PMethod16328 = new_Method_with(PArray16329, empty_Array, empty_Array, PThreadedCode16330, 1, PSend16331);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod16328, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_assignVariable_to_() {
    Symbol SMB_assignVariable_to_ = new_Symbol(L"assignVariable:to:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16333 = new_Array_with(2, (Optr)VAR_aVariable_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16335 = new_Send((Optr)VAR_aVariable_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16334 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send2, (Optr)PSend16335, (Optr)&t_method_return);
    Method PMethod16332 = new_Method_with(PArray16333, empty_Array, empty_Array, PThreadedCode16334, 1, PSend16335);
    
    MethodClosure MC_SMB_assignVariable_to_ = new_MethodClosure((Method)PMethod16332, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignVariable_to_, MC_SMB_assignVariable_to_);
}


static void init_SMB_assignUnsintSlot_to_() {
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16337 = new_Array_with(2, (Optr)VAR_aSlot_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16339 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16340 = new_Send((Optr)VAR_aSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)PSend16339);
    Array PThreadedCode16338 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16339, (Optr)&t_send2, (Optr)PSend16340, (Optr)&t_method_return);
    Method PMethod16336 = new_Method_with(PArray16337, empty_Array, empty_Array, PThreadedCode16338, 1, PSend16340);
    
    MethodClosure MC_SMB_assignUnsintSlot_to_ = new_MethodClosure((Method)PMethod16336, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignUnsintSlot_to_, MC_SMB_assignUnsintSlot_to_);
}


static void init_SMB_invokeMethod_on_message_() {
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16342 = new_Array_with(3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_method_0_3 = new_Variable_named(L"method", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16343 = new_Array_with(2, (Optr)VAR_method_0_3, (Optr)VAR_result_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16346 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16349 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Assign PAssign16348 = new_Assign((Optr)VAR_method_0_3, (Optr)PSend16349);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16350 = new_Send((Optr)VAR_method_0_3, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16351 = new_Send((Optr)PSend16350, SMB_size, 0);
    // size. 
    Send PSend16352 = new_Send((Optr)VAR_aMessage_0_2, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend16353 = new_Send((Optr)PSend16351, SMB__equals_, 1, (Optr)PSend16352);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend16354 = new_Send((Optr)self, SMB_assert_, 1, (Optr)PSend16353);
    // size. 
    Send PSend16355 = new_Send((Optr)VAR_method_0_3, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16356 = new_Send((Optr)PSend16355, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16360 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode16359 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16360, (Optr)&t_block_return);
    Block PBlock16358 = new_Block_with(empty_Array, empty_Array, PThreadedCode16359, 1, PSend16360);
    // ifTrue:. 
    Send PSend16357 = new_Send((Optr)PSend16356, SMB_ifTrue_, 1, (Optr)PBlock16358);
    Symbol SMB_methodContextFor_receiver_message_ = new_Symbol(L"methodContextFor:receiver:message:");
    // methodContextFor:receiver:message:. 
    Send PSend16361 = new_Send((Optr)self, SMB_methodContextFor_receiver_message_, 3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    // interpretMethod:. 
    Send PSend16363 = new_Send((Optr)self, SMB_interpretMethod_, 1, (Optr)VAR_method_0_3);
    Assign PAssign16362 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16363);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16365 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign16364 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16365);
    Array PThreadedCode16347 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign16348, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send0, (Optr)PSend16350, (Optr)&t_send0, (Optr)PSend16351, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend16352, (Optr)&t_send1, (Optr)PSend16353, (Optr)&t_send1, (Optr)PSend16354, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send0, (Optr)PSend16355, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16356, (Optr)&t_send_ifTrue_, (Optr)PSend16357, (Optr)PBlock16358, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16361, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16362, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send1, (Optr)PSend16363, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16364, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16365, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Block PBlock16345 = new_Block_with(PArray16346, empty_Array, PThreadedCode16347, 7, PAssign16348, PSend16354, PSend16357, PSend16361, PAssign16362, PAssign16364, VAR_result_0_4);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16366 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16345);
    Array PThreadedCode16344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16345, (Optr)&t_send1, (Optr)PSend16366, (Optr)&t_method_return);
    Method PMethod16341 = new_Method_with(PArray16342, PArray16343, empty_Array, PThreadedCode16344, 1, PSend16366);
    
    MethodClosure MC_SMB_invokeMethod_on_message_ = new_MethodClosure((Method)PMethod16341, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeMethod_on_message_, MC_SMB_invokeMethod_on_message_);
}


static void init_SMB_sendDoesNotUnderstandFor_to_() {
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16368 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR_dnu_0_2 = new_Variable_named(L"dnu", 0);
    Array PArray16369 = new_Array_with(1, (Optr)VAR_dnu_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16372 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16374 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    Symbol  SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_doesNotUnderstand__Const = new_Constant((Optr)SMB_doesNotUnderstand_);
    // =. 
    Send PSend16375 = new_Send((Optr)PSend16374, SMB__equals_, 1, (Optr)SMB_doesNotUnderstand__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16379 = new_Send((Optr)VAR_aMessage_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    // recursiveDoesNotUnderstand:on:. 
    Send PSend16380 = new_Send((Optr)self, SMB_recursiveDoesNotUnderstand_on_, 2, (Optr)PSend16379, (Optr)VAR_receiver_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16381 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16380);
    Array PThreadedCode16378 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16379, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16380, (Optr)&t_send1, (Optr)PSend16381, (Optr)&t_block_return);
    Block PBlock16377 = new_Block_with(empty_Array, empty_Array, PThreadedCode16378, 1, PSend16381);
    // ifTrue:. 
    Send PSend16376 = new_Send((Optr)PSend16375, SMB_ifTrue_, 1, (Optr)PBlock16377);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16383 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Assign PAssign16382 = new_Assign((Optr)VAR_dnu_0_2, (Optr)PSend16383);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16384 = new_Send((Optr)VAR_dnu_0_2, SMB_selector_, 1, (Optr)SMB_doesNotUnderstand__Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16385 = new_Send((Optr)VAR_dnu_0_2, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_aMessage_0_0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16386 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_dnu_0_2, (Optr)VAR_receiver_0_1);
    Array PThreadedCode16373 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16374, (Optr)&t_push1, (Optr)SMB_doesNotUnderstand_, (Optr)&t_send1, (Optr)PSend16375, (Optr)&t_send_ifTrue_, (Optr)PSend16376, (Optr)PBlock16377, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16382, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16383, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push1, (Optr)SMB_doesNotUnderstand_, (Optr)&t_send1, (Optr)PSend16384, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send2, (Optr)PSend16385, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16386, (Optr)&t_method_return);
    Block PBlock16371 = new_Block_with(PArray16372, empty_Array, PThreadedCode16373, 5, PSend16376, PAssign16382, PSend16384, PSend16385, PSend16386);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16387 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16371);
    Array PThreadedCode16370 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16371, (Optr)&t_send1, (Optr)PSend16387, (Optr)&t_method_return);
    Method PMethod16367 = new_Method_with(PArray16368, PArray16369, empty_Array, PThreadedCode16370, 1, PSend16387);
    
    MethodClosure MC_SMB_sendDoesNotUnderstandFor_to_ = new_MethodClosure((Method)PMethod16367, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_sendDoesNotUnderstandFor_to_, MC_SMB_sendDoesNotUnderstandFor_to_);
}


static void init_SMB_swapInvokeNativeOn_message_() {
    Symbol SMB_swapInvokeNativeOn_message_ = new_Symbol(L"swapInvokeNativeOn:message:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray16389 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_message_0_1);
    Assign PAssign16391 = new_Assign((Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)VAR_receiver_0_0);
    Array PThreadedCode16390 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16391, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16388 = new_Method_with(PArray16389, empty_Array, empty_Array, PThreadedCode16390, 2, PAssign16391, self);
    
    MethodClosure MC_SMB_swapInvokeNativeOn_message_ = new_MethodClosure((Method)PMethod16388, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_swapInvokeNativeOn_message_, MC_SMB_swapInvokeNativeOn_message_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_aSend_0_3 = new_Variable_named(L"aSend", 0);
    Array PArray16393 = new_Array_with(4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Variable VAR_method_0_4 = new_Variable_named(L"method", 0);
    Array PArray16394 = new_Array_with(1, (Optr)VAR_method_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16397 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_inlineCache = new_Symbol(L"inlineCache");
    // inlineCache. 
    Send PSend16401 = new_Send((Optr)VAR_aSend_0_3, SMB_inlineCache, 0);
    Symbol SMB_checkCached_ = new_Symbol(L"checkCached:");
    // checkCached:. 
    Send PSend16400 = new_Send((Optr)PSend16401, SMB_checkCached_, 1, (Optr)VAR_class_0_2);
    Assign PAssign16399 = new_Assign((Optr)VAR_method_0_4, (Optr)PSend16400);
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    // accept:on:message:. 
    Send PSend16404 = new_Send((Optr)VAR_method_0_4, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16405 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16404);
    Array PThreadedCode16403 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16404, (Optr)&t_send1, (Optr)PSend16405, (Optr)&t_block_return);
    Block PBlock16402 = new_Block_with(empty_Array, empty_Array, PThreadedCode16403, 1, PSend16405);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend16406 = new_Send((Optr)VAR_method_0_4, SMB_ifNotNil_, 1, (Optr)PBlock16402);
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16409 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    // lookupSelector:in:. 
    Send PSend16408 = new_Send((Optr)self, SMB_lookupSelector_in_, 2, (Optr)PSend16409, (Optr)VAR_class_0_2);
    Assign PAssign16407 = new_Assign((Optr)VAR_method_0_4, (Optr)PSend16408);
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    // sendDoesNotUnderstandFor:to:. 
    Send PSend16412 = new_Send((Optr)self, SMB_sendDoesNotUnderstandFor_to_, 2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    // escape:. 
    Send PSend16413 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16412);
    Array PThreadedCode16411 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16412, (Optr)&t_send1, (Optr)PSend16413, (Optr)&t_block_return);
    Block PBlock16410 = new_Block_with(empty_Array, empty_Array, PThreadedCode16411, 1, PSend16413);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend16414 = new_Send((Optr)VAR_method_0_4, SMB_ifNil_, 1, (Optr)PBlock16410);
    // inlineCache. 
    Send PSend16415 = new_Send((Optr)VAR_aSend_0_3, SMB_inlineCache, 0);
    Symbol SMB_cache_at_ = new_Symbol(L"cache:at:");
    // cache:at:. 
    Send PSend16416 = new_Send((Optr)PSend16415, SMB_cache_at_, 2, (Optr)VAR_method_0_4, (Optr)VAR_class_0_2);
    // accept:on:message:. 
    Send PSend16417 = new_Send((Optr)VAR_method_0_4, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode16398 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign16399, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_send0, (Optr)PSend16401, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send1, (Optr)PSend16400, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_closure, (Optr)PBlock16402, (Optr)&t_send1, (Optr)PSend16406, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16407, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16409, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16408, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_closure, (Optr)PBlock16410, (Optr)&t_send1, (Optr)PSend16414, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_send0, (Optr)PSend16415, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16416, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16417, (Optr)&t_method_return);
    Block PBlock16396 = new_Block_with(PArray16397, empty_Array, PThreadedCode16398, 6, PAssign16399, PSend16406, PAssign16407, PSend16414, PSend16416, PSend16417);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16418 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16396);
    Array PThreadedCode16395 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16396, (Optr)&t_send1, (Optr)PSend16418, (Optr)&t_method_return);
    Method PMethod16392 = new_Method_with(PArray16393, PArray16394, empty_Array, PThreadedCode16395, 1, PSend16418);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16392, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_class_for_, MC_SMB_send_to_class_for_);
}


static void init_class_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray16420 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16422 = new_Send((Optr)self, SMB_new, 0);
    // interpret:. 
    Send PSend16423 = new_Send((Optr)PSend16422, SMB_interpret_, 1, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode16421 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16422, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend16423, (Optr)&t_method_return);
    Method PMethod16419 = new_Method_with(PArray16420, empty_Array, empty_Array, PThreadedCode16421, 1, PSend16423);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16419, HEADER(Interpretation_Interpreter_Class));
    store_method(HEADER(Interpretation_Interpreter_Class), SMB_interpret_, MC_SMB_interpret_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Interpretation_minus_Interpreter = new_Symbol(L"Interpretation.Interpreter");
    String string_16426 = new_String(L"plugin/interpretation/Interpreter.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Interpretation_minus_Interpreter_Const = new_Constant((Optr)SMB_Interpretation_minus_Interpreter);
    Constant string_16426_Const = new_Constant((Optr)string_16426);
    // require:at:. 
    Send PSend16427 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Interpretation_minus_Interpreter_Const, (Optr)string_16426_Const);
    Array PThreadedCode16425 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Interpretation_minus_Interpreter, (Optr)&t_push1, (Optr)string_16426, (Optr)&t_send2, (Optr)PSend16427, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16424 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16425, 2, PSend16427, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16424, HEADER(Interpretation_Interpreter_Class));
    store_method(HEADER(Interpretation_Interpreter_Class), SMB_initialize, MC_SMB_initialize);
}

void init_Interpretation_PInterpreter_layout() {
    layout_Interpretation_Interpreter_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_Interpreter_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_Interpreter_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_Interpreter_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_Interpreter_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_Interpreter_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Interpreter = new_Symbol(L"Interpreter");
    slot_Interpretation_Interpreter_context = (Optr)new_Slot(0, L"context");
    slot_Interpretation_Interpreter_nextInterpreter = (Optr)new_Slot(1, L"nextInterpreter");
    layout_Interpretation_Interpreter = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Interpretation_Interpreter)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_Interpreter)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    Interpretation_Interpreter_Class = (Class)new_Class(Object_Class, layout_Interpretation_Interpreter_Class_class);
    Interpretation_Interpreter_Class->layout = layout_Interpretation_Interpreter;
    Interpretation_Interpreter_Class->name = SMB_Interpreter;
    
}

void init_Interpretation_PInterpreter_methods() {
    init_SMB_send_to_class_();
    init_SMB_interpret_();
    init_SMB_continueEscape_message_();
    init_SMB_invokeNativeMethod_on_message_();
    init_SMB_interpretMethod_();
    init_SMB_interpretBlock_();
    init_SMB_visitDirectVariable_();
    init_SMB_visitSlot_();
    init_SMB_classOf_();
    init_SMB_visitAssign_();
    init_SMB_visitSelf_();
    init_SMB_blockContextFor_message_();
    init_SMB_recursiveDoesNotUnderstand_on_();
    init_SMB_currentClass();
    init_SMB_blockclosureValueWithArguments_message_();
    init_SMB_visitSuper_();
    init_SMB_visitSend_();
    init_SMB_invokeReflectionMethod_on_message_();
    init_SMB_blockclosureValue_message_();
    init_SMB_visitVariable_();
    init_SMB_currentSelf();
    init_SMB_visitUnsintSlot_();
    init_SMB_assignSlot_to_();
    init_SMB_continueOn_message_();
    init_SMB_visitBlock_();
    init_SMB_send_to_();
    init_SMB_visitClassReference_();
    init_SMB_invokeNativeMethod_on_message_alternative_();
    init_SMB_sendNext_to_class_();
    init_SMB_lookupSelector_in_();
    init_SMB_methodContextFor_receiver_message_();
    init_SMB_visitConstant_();
    init_SMB_assignVariable_to_();
    init_SMB_assignUnsintSlot_to_();
    init_SMB_invokeMethod_on_message_();
    init_SMB_sendDoesNotUnderstandFor_to_();
    init_SMB_swapInvokeNativeOn_message_();
    init_SMB_send_to_class_for_();
    init_class_SMB_interpret_();
    init_class_SMB_initialize();
    
}