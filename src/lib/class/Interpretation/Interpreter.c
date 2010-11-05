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
    Array PArray15809 = new_Array_with(3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Variable VAR_method_0_3 = new_Variable_named(L"method", 0);
    Array PArray15810 = new_Array_with(1, (Optr)VAR_method_0_3);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray15813 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend15817 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    // lookupSelector:in:. 
    Send PSend15816 = new_Send((Optr)self, SMB_lookupSelector_in_, 2, (Optr)PSend15817, (Optr)VAR_class_0_2);
    Assign PAssign15815 = new_Assign((Optr)VAR_method_0_3, (Optr)PSend15816);
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    // sendDoesNotUnderstandFor:to:. 
    Send PSend15820 = new_Send((Optr)self, SMB_sendDoesNotUnderstandFor_to_, 2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15821 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend15820);
    Array PThreadedCode15819 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend15820, (Optr)&t_send1, (Optr)PSend15821, (Optr)&t_block_return);
    Block PBlock15818 = new_Block_with(empty_Array, empty_Array, PThreadedCode15819, 1, PSend15821);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend15822 = new_Send((Optr)VAR_method_0_3, SMB_ifNil_, 1, (Optr)PBlock15818);
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    // accept:on:message:. 
    Send PSend15823 = new_Send((Optr)VAR_method_0_3, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode15814 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign15815, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend15817, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend15816, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_push_closure, (Optr)PBlock15818, (Optr)&t_send1, (Optr)PSend15822, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend15823, (Optr)&t_method_return);
    Block PBlock15812 = new_Block_with(PArray15813, empty_Array, PThreadedCode15814, 3, PAssign15815, PSend15822, PSend15823);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend15824 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock15812);
    Array PThreadedCode15811 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock15812, (Optr)&t_send1, (Optr)PSend15824, (Optr)&t_method_return);
    Method PMethod15808 = new_Method_with(PArray15809, PArray15810, empty_Array, PThreadedCode15811, 1, PSend15824);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod15808, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_interpret_() {
    /*
    interpret: aClosure
// 	^ self new interpret: aClosure
    */
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray15826 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15828 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
    Symbol  SMB_value = new_Symbol(L"value");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value_Const = new_Constant((Optr)SMB_value);
    // selector:. 
    Send PSend15829 = new_Send((Optr)PSend15828, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend15830 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend15829, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode15827 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend15828, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend15829, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send2, (Optr)PSend15830, (Optr)&t_method_return);
    Method PMethod15825 = new_Method_with(PArray15826, empty_Array, empty_Array, PThreadedCode15827, 1, PSend15830);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod15825, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_continueEscape_message_() {
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray15832 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend15834 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend15835 = new_Send((Optr)VAR_aContinuation_0_0, SMB_escape_, 1, (Optr)PSend15834);
    Array PThreadedCode15833 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15834, (Optr)&t_send1, (Optr)PSend15835, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15831 = new_Method_with(PArray15832, empty_Array, empty_Array, PThreadedCode15833, 2, PSend15835, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod15831, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_continueEscape_message_, MC_SMB_continueEscape_message_);
}


static void init_SMB_invokeNativeMethod_on_message_() {
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray15837 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Array PArray15838 = new_Array_with(1, (Optr)VAR_result_0_3);
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    // swapInvokeNative. 
    Send PSend15840 = new_Send((Optr)self, SMB_swapInvokeNative, 0);
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend15845 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Array PThreadedCode15844 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend15845, (Optr)&t_block_return);
    Block PBlock15843 = new_Block_with(empty_Array, empty_Array, PThreadedCode15844, 1, PSend15845);
    // invokeNativeMethod:on:message:alternative:. 
    Send PSend15842 = new_Send((Optr)self, SMB_invokeNativeMethod_on_message_alternative_, 4, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2, (Optr)PBlock15843);
    Assign PAssign15841 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend15842);
    // swapInvokeNative. 
    Send PSend15846 = new_Send((Optr)nil_Const, SMB_swapInvokeNative, 0);
    Array PThreadedCode15839 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15840, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15841, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock15843, (Optr)&t_send4, (Optr)PSend15842, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_nil, (Optr)&t_send0, (Optr)PSend15846, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Method PMethod15836 = new_Method_with(PArray15837, PArray15838, empty_Array, PThreadedCode15839, 4, PSend15840, PAssign15841, PSend15846, VAR_result_0_3);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_ = new_MethodClosure((Method)PMethod15836, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeNativeMethod_on_message_, MC_SMB_invokeNativeMethod_on_message_);
}


static void init_SMB_interpretMethod_() {
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    Variable VAR_method_0_0 = new_Variable_named(L"method", 0);
    Array PArray15848 = new_Array_with(1, (Optr)VAR_method_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray15849 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign15851 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend15855 = new_Send((Optr)VAR_pc_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign15854 = new_Assign((Optr)VAR_pc_0_1, (Optr)PSend15855);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15856 = new_Send((Optr)VAR_method_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend15857 = new_Send((Optr)PAssign15854, SMB__lt_, 1, (Optr)PSend15856);
    Array PThreadedCode15853 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign15854, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15855, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_send0, (Optr)PSend15856, (Optr)&t_send1, (Optr)PSend15857, (Optr)&t_block_return);
    Block PBlock15852 = new_Block_with(empty_Array, empty_Array, PThreadedCode15853, 1, PSend15857);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15860 = new_Send((Optr)VAR_method_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend15861 = new_Send((Optr)PSend15860, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode15859 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend15860, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15861, (Optr)&t_block_return);
    Block PBlock15858 = new_Block_with(empty_Array, empty_Array, PThreadedCode15859, 1, PSend15861);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend15862 = new_Send((Optr)PBlock15852, SMB_whileTrue_, 1, (Optr)PBlock15858);
    // at:. 
    Send PSend15863 = new_Send((Optr)VAR_method_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    // accept:. 
    Send PSend15864 = new_Send((Optr)PSend15863, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode15850 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign15851, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15852, (Optr)&t_push_closure, (Optr)PBlock15858, (Optr)&t_send1, (Optr)PSend15862, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend15863, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15864, (Optr)&t_method_return);
    Method PMethod15847 = new_Method_with(PArray15848, PArray15849, empty_Array, PThreadedCode15850, 3, PAssign15851, PSend15862, PSend15864);
    
    MethodClosure MC_SMB_interpretMethod_ = new_MethodClosure((Method)PMethod15847, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpretMethod_, MC_SMB_interpretMethod_);
}


static void init_SMB_interpretBlock_() {
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray15866 = new_Array_with(1, (Optr)VAR_block_0_0);
    Variable VAR_pc_0_1 = new_Variable_named(L"pc", 0);
    Array PArray15867 = new_Array_with(1, (Optr)VAR_pc_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign15869 = new_Assign((Optr)VAR_pc_0_1, (Optr)int_0_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend15873 = new_Send((Optr)VAR_pc_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign15872 = new_Assign((Optr)VAR_pc_0_1, (Optr)PSend15873);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15874 = new_Send((Optr)VAR_block_0_0, SMB_size, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend15875 = new_Send((Optr)PAssign15872, SMB__lt_, 1, (Optr)PSend15874);
    Array PThreadedCode15871 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign15872, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15873, (Optr)&t_assign, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send0, (Optr)PSend15874, (Optr)&t_send1, (Optr)PSend15875, (Optr)&t_block_return);
    Block PBlock15870 = new_Block_with(empty_Array, empty_Array, PThreadedCode15871, 1, PSend15875);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend15878 = new_Send((Optr)VAR_block_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend15879 = new_Send((Optr)PSend15878, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode15877 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend15878, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15879, (Optr)&t_block_return);
    Block PBlock15876 = new_Block_with(empty_Array, empty_Array, PThreadedCode15877, 1, PSend15879);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend15880 = new_Send((Optr)PBlock15870, SMB_whileTrue_, 1, (Optr)PBlock15876);
    // at:. 
    Send PSend15881 = new_Send((Optr)VAR_block_0_0, SMB_at_, 1, (Optr)VAR_pc_0_1);
    // accept:. 
    Send PSend15882 = new_Send((Optr)PSend15881, SMB_accept_, 1, (Optr)self);
    Array PThreadedCode15868 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign15869, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock15870, (Optr)&t_push_closure, (Optr)PBlock15876, (Optr)&t_send1, (Optr)PSend15880, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_pc_0_1, (Optr)&t_send1, (Optr)PSend15881, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15882, (Optr)&t_method_return);
    Method PMethod15865 = new_Method_with(PArray15866, PArray15867, empty_Array, PThreadedCode15868, 3, PAssign15869, PSend15880, PSend15882);
    
    MethodClosure MC_SMB_interpretBlock_ = new_MethodClosure((Method)PMethod15865, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_interpretBlock_, MC_SMB_interpretBlock_);
}


static void init_SMB_visitDirectVariable_() {
    Symbol SMB_visitDirectVariable_ = new_Symbol(L"visitDirectVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray15884 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend15886 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)nil_Const);
    Array PThreadedCode15885 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend15886, (Optr)&t_method_return);
    Method PMethod15883 = new_Method_with(PArray15884, empty_Array, empty_Array, PThreadedCode15885, 1, PSend15886);
    
    MethodClosure MC_SMB_visitDirectVariable_ = new_MethodClosure((Method)PMethod15883, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitDirectVariable_, MC_SMB_visitDirectVariable_);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Array PArray15888 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend15890 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend15891 = new_Send((Optr)VAR_aSlot_0_0, SMB_readFrom_, 1, (Optr)PSend15890);
    Array PThreadedCode15889 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15890, (Optr)&t_send1, (Optr)PSend15891, (Optr)&t_method_return);
    Method PMethod15887 = new_Method_with(PArray15888, empty_Array, empty_Array, PThreadedCode15889, 1, PSend15891);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod15887, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_classOf_() {
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray15893 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend15895 = new_Send((Optr)VAR_anObject_0_0, SMB_class, 0);
    Array PThreadedCode15894 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_send0, (Optr)PSend15895, (Optr)&t_method_return);
    Method PMethod15892 = new_Method_with(PArray15893, empty_Array, empty_Array, PThreadedCode15894, 1, PSend15895);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod15892, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_classOf_, MC_SMB_classOf_);
}


static void init_SMB_visitAssign_() {
    Symbol SMB_visitAssign_ = new_Symbol(L"visitAssign:");
    Variable VAR_anAssign_0_0 = new_Variable_named(L"anAssign", 0);
    Array PArray15897 = new_Array_with(1, (Optr)VAR_anAssign_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray15898 = new_Array_with(1, (Optr)VAR_value_0_1);
    Symbol SMB_expression = new_Symbol(L"expression");
    // expression. 
    Send PSend15902 = new_Send((Optr)VAR_anAssign_0_0, SMB_expression, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend15901 = new_Send((Optr)PSend15902, SMB_accept_, 1, (Optr)self);
    Assign PAssign15900 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend15901);
    Symbol SMB_variable = new_Symbol(L"variable");
    // variable. 
    Send PSend15903 = new_Send((Optr)VAR_anAssign_0_0, SMB_variable, 0);
    Symbol SMB_assignFor_to_ = new_Symbol(L"assignFor:to:");
    // assignFor:to:. 
    Send PSend15904 = new_Send((Optr)PSend15903, SMB_assignFor_to_, 2, (Optr)self, (Optr)VAR_value_0_1);
    Array PThreadedCode15899 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign15900, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend15902, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15901, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anAssign_0_0, (Optr)&t_send0, (Optr)PSend15903, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send2, (Optr)PSend15904, (Optr)&t_method_return);
    Method PMethod15896 = new_Method_with(PArray15897, PArray15898, empty_Array, PThreadedCode15899, 2, PAssign15900, PSend15904);
    
    MethodClosure MC_SMB_visitAssign_ = new_MethodClosure((Method)PMethod15896, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitAssign_, MC_SMB_visitAssign_);
}


static void init_SMB_visitSelf_() {
    Symbol SMB_visitSelf_ = new_Symbol(L"visitSelf:");
    Variable VAR_aSelf_0_0 = new_Variable_named(L"aSelf", 0);
    Array PArray15906 = new_Array_with(1, (Optr)VAR_aSelf_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend15908 = new_Send((Optr)self, SMB_currentSelf, 0);
    Array PThreadedCode15907 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15908, (Optr)&t_method_return);
    Method PMethod15905 = new_Method_with(PArray15906, empty_Array, empty_Array, PThreadedCode15907, 1, PSend15908);
    
    MethodClosure MC_SMB_visitSelf_ = new_MethodClosure((Method)PMethod15905, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSelf_, MC_SMB_visitSelf_);
}


static void init_SMB_blockContextFor_message_() {
    Symbol SMB_blockContextFor_message_ = new_Symbol(L"blockContextFor:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray15910 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_size_0_3 = new_Variable_named(L"size", 0);
    Array PArray15911 = new_Array_with(2, (Optr)VAR_block_0_2, (Optr)VAR_size_0_3);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend15914 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_code, 0);
    Assign PAssign15913 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend15914);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend15918 = new_Send((Optr)VAR_block_0_2, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15917 = new_Send((Optr)PSend15918, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend15920 = new_Send((Optr)VAR_block_0_2, SMB_locals, 0);
    // size. 
    Send PSend15919 = new_Send((Optr)PSend15920, SMB_size, 0);
    // +. 
    Send PSend15916 = new_Send((Optr)PSend15917, SMB__plus_, 1, (Optr)PSend15919);
    Assign PAssign15915 = new_Assign((Optr)VAR_size_0_3, (Optr)PSend15916);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend15921 = new_Send((Optr)VAR_size_0_3, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_context = new_Symbol(L"context");
    // context. 
    Send PSend15926 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Assign PAssign15925 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend15926);
    Array PThreadedCode15924 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign15925, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend15926, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock15923 = new_Block_with(empty_Array, empty_Array, PThreadedCode15924, 1, PAssign15925);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray15932 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend15934 = new_Send((Optr)VAR__receiver__1_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    // context. 
    Send PSend15935 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Symbol SMB_outerScope_ = new_Symbol(L"outerScope:");
    // outerScope:. 
    Send PSend15936 = new_Send((Optr)VAR__receiver__1_0, SMB_outerScope_, 1, (Optr)PSend15935);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend15937 = new_Send((Optr)VAR__receiver__1_0, SMB_closure_, 1, (Optr)VAR_aBlockClosure_0_0);
    // context. 
    Send PSend15938 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_context, 0);
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend15939 = new_Send((Optr)PSend15938, SMB_homeContext, 0);
    Symbol SMB_homeContext_ = new_Symbol(L"homeContext:");
    // homeContext:. 
    Send PSend15940 = new_Send((Optr)VAR__receiver__1_0, SMB_homeContext_, 1, (Optr)PSend15939);
    Array PThreadedCode15933 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend15934, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend15935, (Optr)&t_send1, (Optr)PSend15936, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send1, (Optr)PSend15937, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend15938, (Optr)&t_send0, (Optr)PSend15939, (Optr)&t_send1, (Optr)PSend15940, (Optr)&t_method_return);
    Block PBlock15931 = new_Block_with(PArray15932, empty_Array, PThreadedCode15933, 4, PSend15934, PSend15936, PSend15937, PSend15940);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend15941 = new_Send((Optr)PBlockContext_classReference, SMB_new_, 1, (Optr)VAR_size_0_3);
    // value:. 
    Send PSend15930 = new_Send((Optr)PBlock15931, SMB_value_, 1, (Optr)PSend15941);
    Assign PAssign15929 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend15930);
    Array PThreadedCode15928 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign15929, (Optr)&t_push_closure, (Optr)PBlock15931, (Optr)&t_push_class_reference, (Optr)PBlockContext_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_send1, (Optr)PSend15941, (Optr)&t_send1, (Optr)PSend15930, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock15927 = new_Block_with(empty_Array, empty_Array, PThreadedCode15928, 1, PAssign15929);
    // ifTrue:ifFalse:. 
    Send PSend15922 = new_Send((Optr)PSend15921, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock15923, (Optr)PBlock15927);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray15943 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend15945 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_value_1_0);
    Array PThreadedCode15944 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_send2, (Optr)PSend15945, (Optr)&t_method_return);
    Block PBlock15942 = new_Block_with(PArray15943, empty_Array, PThreadedCode15944, 1, PSend15945);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend15946 = new_Send((Optr)VAR_aMessage_0_1, SMB_withIndexDo_, 1, (Optr)PBlock15942);
    Array PThreadedCode15912 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push1, (Optr)PAssign15913, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend15914, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15915, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend15918, (Optr)&t_send0, (Optr)PSend15917, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend15920, (Optr)&t_send0, (Optr)PSend15919, (Optr)&t_send1, (Optr)PSend15916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_size_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend15921, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend15922, (Optr)PBlock15923, (Optr)PBlock15927, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_closure, (Optr)PBlock15942, (Optr)&t_send1, (Optr)PSend15946, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod15909 = new_Method_with(PArray15910, PArray15911, empty_Array, PThreadedCode15912, 5, PAssign15913, PAssign15915, PSend15922, PSend15946, self);
    
    MethodClosure MC_SMB_blockContextFor_message_ = new_MethodClosure((Method)PMethod15909, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockContextFor_message_, MC_SMB_blockContextFor_message_);
}


static void init_SMB_recursiveDoesNotUnderstand_on_() {
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray15948 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray15951 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend15953 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend15954 = new_Send((Optr)VAR_receiver_0_1, SMB_class, 0);
    Symbol SMB_cls_ = new_Symbol(L"cls:");
    // cls:. 
    Send PSend15955 = new_Send((Optr)VAR__receiver__1_0, SMB_cls_, 1, (Optr)PSend15954);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend15956 = new_Send((Optr)VAR__receiver__1_0, SMB_message_, 1, (Optr)VAR_aMessage_0_0);
    Symbol SMB_signal = new_Symbol(L"signal");
    // signal. 
    Send PSend15957 = new_Send((Optr)VAR__receiver__1_0, SMB_signal, 0);
    Array PThreadedCode15952 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend15953, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send0, (Optr)PSend15954, (Optr)&t_send1, (Optr)PSend15955, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend15956, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend15957, (Optr)&t_method_return);
    Block PBlock15950 = new_Block_with(PArray15951, empty_Array, PThreadedCode15952, 4, PSend15953, PSend15955, PSend15956, PSend15957);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend15958 = new_Send((Optr)PRecursiveDoesNotUnderstand_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend15959 = new_Send((Optr)PBlock15950, SMB_value_, 1, (Optr)PSend15958);
    Array PThreadedCode15949 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock15950, (Optr)&t_push_class_reference, (Optr)PRecursiveDoesNotUnderstand_classReference, (Optr)&t_send0, (Optr)PSend15958, (Optr)&t_send1, (Optr)PSend15959, (Optr)&t_method_return);
    Method PMethod15947 = new_Method_with(PArray15948, empty_Array, empty_Array, PThreadedCode15949, 1, PSend15959);
    
    MethodClosure MC_SMB_recursiveDoesNotUnderstand_on_ = new_MethodClosure((Method)PMethod15947, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_recursiveDoesNotUnderstand_on_, MC_SMB_recursiveDoesNotUnderstand_on_);
}


static void init_SMB_currentClass() {
    Symbol SMB_currentClass = new_Symbol(L"currentClass");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend15962 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_methodClass = new_Symbol(L"methodClass");
    // methodClass. 
    Send PSend15963 = new_Send((Optr)PSend15962, SMB_methodClass, 0);
    Array PThreadedCode15961 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend15962, (Optr)&t_send0, (Optr)PSend15963, (Optr)&t_method_return);
    Method PMethod15960 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode15961, 1, PSend15963);
    
    MethodClosure MC_SMB_currentClass = new_MethodClosure((Method)PMethod15960, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_currentClass, MC_SMB_currentClass);
}


static void init_SMB_blockclosureValueWithArguments_message_() {
    Symbol SMB_blockclosureValueWithArguments_message_ = new_Symbol(L"blockclosureValueWithArguments:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray15965 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend15967 = new_Send((Optr)VAR_aMessage_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    // blockclosureValue:message:. 
    Send PSend15968 = new_Send((Optr)self, SMB_blockclosureValue_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)PSend15967);
    Array PThreadedCode15966 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend15967, (Optr)&t_send2, (Optr)PSend15968, (Optr)&t_method_return);
    Method PMethod15964 = new_Method_with(PArray15965, empty_Array, empty_Array, PThreadedCode15966, 1, PSend15968);
    
    MethodClosure MC_SMB_blockclosureValueWithArguments_message_ = new_MethodClosure((Method)PMethod15964, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockclosureValueWithArguments_message_, MC_SMB_blockclosureValueWithArguments_message_);
}


static void init_SMB_visitSuper_() {
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    Variable VAR_aSuper_0_0 = new_Variable_named(L"aSuper", 0);
    Array PArray15970 = new_Array_with(1, (Optr)VAR_aSuper_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray15971 = new_Array_with(2, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend15974 = new_Send((Optr)self, SMB_currentSelf, 0);
    Assign PAssign15973 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend15974);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15977 = new_Send((Optr)VAR_aSuper_0_0, SMB_size, 0);
    // new:. 
    Send PSend15976 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend15977);
    Assign PAssign15975 = new_Assign((Optr)VAR_message_0_2, (Optr)PSend15976);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15978 = new_Send((Optr)VAR_aSuper_0_0, SMB_message, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend15979 = new_Send((Optr)VAR_message_0_2, SMB_selector_, 1, (Optr)PSend15978);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray15981 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend15983 = new_Send((Optr)VAR_arg_1_0, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend15984 = new_Send((Optr)VAR_message_0_2, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend15983);
    Array PThreadedCode15982 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15983, (Optr)&t_send2, (Optr)PSend15984, (Optr)&t_method_return);
    Block PBlock15980 = new_Block_with(PArray15981, empty_Array, PThreadedCode15982, 1, PSend15984);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend15985 = new_Send((Optr)VAR_aSuper_0_0, SMB_withIndexDo_, 1, (Optr)PBlock15980);
    Symbol SMB_currentClass = new_Symbol(L"currentClass");
    // currentClass. 
    Send PSend15986 = new_Send((Optr)self, SMB_currentClass, 0);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend15987 = new_Send((Optr)PSend15986, SMB_superclass, 0);
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    // send:to:class:for:. 
    Send PSend15988 = new_Send((Optr)self, SMB_send_to_class_for_, 4, (Optr)VAR_message_0_2, (Optr)VAR_receiver_0_1, (Optr)PSend15987, (Optr)VAR_aSuper_0_0);
    Array PThreadedCode15972 = instantiate_Array_with(ThreadedCode_Class, 0, 50, (Optr)&t_push1, (Optr)PAssign15973, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15974, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15975, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend15977, (Optr)&t_send1, (Optr)PSend15976, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send0, (Optr)PSend15978, (Optr)&t_send1, (Optr)PSend15979, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_push_closure, (Optr)PBlock15980, (Optr)&t_send1, (Optr)PSend15985, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend15986, (Optr)&t_send0, (Optr)PSend15987, (Optr)&t_push_variable, (Optr)VAR_aSuper_0_0, (Optr)&t_send4, (Optr)PSend15988, (Optr)&t_method_return);
    Method PMethod15969 = new_Method_with(PArray15970, PArray15971, empty_Array, PThreadedCode15972, 5, PAssign15973, PAssign15975, PSend15979, PSend15985, PSend15988);
    
    MethodClosure MC_SMB_visitSuper_ = new_MethodClosure((Method)PMethod15969, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSuper_, MC_SMB_visitSuper_);
}


static void init_SMB_visitSend_() {
    Symbol SMB_visitSend_ = new_Symbol(L"visitSend:");
    Variable VAR_aSend_0_0 = new_Variable_named(L"aSend", 0);
    Array PArray15990 = new_Array_with(1, (Optr)VAR_aSend_0_0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Array PArray15991 = new_Array_with(2, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend15995 = new_Send((Optr)VAR_aSend_0_0, SMB_receiver, 0);
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    // accept:. 
    Send PSend15994 = new_Send((Optr)PSend15995, SMB_accept_, 1, (Optr)self);
    Assign PAssign15993 = new_Assign((Optr)VAR_receiver_0_1, (Optr)PSend15994);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend15998 = new_Send((Optr)VAR_aSend_0_0, SMB_size, 0);
    // new:. 
    Send PSend15997 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend15998);
    Assign PAssign15996 = new_Assign((Optr)VAR_message_0_2, (Optr)PSend15997);
    Symbol SMB_message = new_Symbol(L"message");
    // message. 
    Send PSend15999 = new_Send((Optr)VAR_aSend_0_0, SMB_message, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16000 = new_Send((Optr)VAR_message_0_2, SMB_selector_, 1, (Optr)PSend15999);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16002 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    // accept:. 
    Send PSend16004 = new_Send((Optr)VAR_arg_1_0, SMB_accept_, 1, (Optr)self);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16005 = new_Send((Optr)VAR_message_0_2, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend16004);
    Array PThreadedCode16003 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16004, (Optr)&t_send2, (Optr)PSend16005, (Optr)&t_method_return);
    Block PBlock16001 = new_Block_with(PArray16002, empty_Array, PThreadedCode16003, 1, PSend16005);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16006 = new_Send((Optr)VAR_aSend_0_0, SMB_withIndexDo_, 1, (Optr)PBlock16001);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16007 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    // send:to:class:for:. 
    Send PSend16008 = new_Send((Optr)self, SMB_send_to_class_for_, 4, (Optr)VAR_message_0_2, (Optr)VAR_receiver_0_1, (Optr)PSend16007, (Optr)VAR_aSend_0_0);
    Array PThreadedCode15992 = instantiate_Array_with(ThreadedCode_Class, 0, 54, (Optr)&t_push1, (Optr)PAssign15993, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend15995, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend15994, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign15996, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend15998, (Optr)&t_send1, (Optr)PSend15997, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send0, (Optr)PSend15999, (Optr)&t_send1, (Optr)PSend16000, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_push_closure, (Optr)PBlock16001, (Optr)&t_send1, (Optr)PSend16006, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16007, (Optr)&t_push_variable, (Optr)VAR_aSend_0_0, (Optr)&t_send4, (Optr)PSend16008, (Optr)&t_method_return);
    Method PMethod15989 = new_Method_with(PArray15990, PArray15991, empty_Array, PThreadedCode15992, 5, PAssign15993, PAssign15996, PSend16000, PSend16006, PSend16008);
    
    MethodClosure MC_SMB_visitSend_ = new_MethodClosure((Method)PMethod15989, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitSend_, MC_SMB_visitSend_);
}


static void init_SMB_invokeReflectionMethod_on_message_() {
    Symbol SMB_invokeReflectionMethod_on_message_ = new_Symbol(L"invokeReflectionMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16010 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_annotation_0_3 = new_Variable_named(L"annotation", 0);
    Variable VAR_selector_0_4 = new_Variable_named(L"selector", 0);
    Array PArray16011 = new_Array_with(2, (Optr)VAR_annotation_0_3, (Optr)VAR_selector_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16014 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_annotationAt_ = new_Symbol(L"annotationAt:");
    Symbol  SMB_pinocchioReflective_ = new_Symbol(L"pinocchioReflective:");
    Constant SMB_pinocchioReflective__Const = new_Constant((Optr)SMB_pinocchioReflective_);
    // annotationAt:. 
    Send PSend16017 = new_Send((Optr)VAR_aClosure_0_0, SMB_annotationAt_, 1, (Optr)SMB_pinocchioReflective__Const);
    Assign PAssign16016 = new_Assign((Optr)VAR_annotation_0_3, (Optr)PSend16017);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16019 = new_Send((Optr)VAR_annotation_0_3, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16018 = new_Assign((Optr)VAR_selector_0_4, (Optr)PSend16019);
    Symbol SMB_respondsTo_ = new_Symbol(L"respondsTo:");
    // respondsTo:. 
    Send PSend16020 = new_Send((Optr)self, SMB_respondsTo_, 1, (Optr)VAR_selector_0_4);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_with_with_ = new_Symbol(L"with:with:");
    // with:with:. 
    Send PSend16024 = new_Send((Optr)Array_classReference, SMB_with_with_, 2, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_perform_withArguments_ = new_Symbol(L"perform:withArguments:");
    // perform:withArguments:. 
    Send PSend16025 = new_Send((Optr)self, SMB_perform_withArguments_, 2, (Optr)VAR_selector_0_4, (Optr)PSend16024);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16026 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16025);
    Array PThreadedCode16023 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_4, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send2, (Optr)PSend16024, (Optr)&t_send2, (Optr)PSend16025, (Optr)&t_send1, (Optr)PSend16026, (Optr)&t_block_return);
    Block PBlock16022 = new_Block_with(empty_Array, empty_Array, PThreadedCode16023, 1, PSend16026);
    // ifTrue:. 
    Send PSend16021 = new_Send((Optr)PSend16020, SMB_ifTrue_, 1, (Optr)PBlock16022);
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend16027 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Array PThreadedCode16015 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign16016, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push1, (Optr)SMB_pinocchioReflective_, (Optr)&t_send1, (Optr)PSend16017, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16018, (Optr)&t_push_variable, (Optr)VAR_annotation_0_3, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16019, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_selector_0_4, (Optr)&t_send1, (Optr)PSend16020, (Optr)&t_send_ifTrue_, (Optr)PSend16021, (Optr)PBlock16022, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16027, (Optr)&t_method_return);
    Block PBlock16013 = new_Block_with(PArray16014, empty_Array, PThreadedCode16015, 4, PAssign16016, PAssign16018, PSend16021, PSend16027);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16028 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16013);
    Array PThreadedCode16012 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16013, (Optr)&t_send1, (Optr)PSend16028, (Optr)&t_method_return);
    Method PMethod16009 = new_Method_with(PArray16010, PArray16011, empty_Array, PThreadedCode16012, 1, PSend16028);
    
    MethodClosure MC_SMB_invokeReflectionMethod_on_message_ = new_MethodClosure((Method)PMethod16009, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeReflectionMethod_on_message_, MC_SMB_invokeReflectionMethod_on_message_);
}


static void init_SMB_blockclosureValue_message_() {
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray16030 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Variable VAR_block_0_2 = new_Variable_named(L"block", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_returnContext_0_4 = new_Variable_named(L"returnContext", 0);
    Array PArray16031 = new_Array_with(3, (Optr)VAR_block_0_2, (Optr)VAR_result_0_3, (Optr)VAR_returnContext_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16034 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16037 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_code, 0);
    Assign PAssign16036 = new_Assign((Optr)VAR_block_0_2, (Optr)PSend16037);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16038 = new_Send((Optr)VAR_block_0_2, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16039 = new_Send((Optr)PSend16038, SMB_size, 0);
    // size. 
    Send PSend16040 = new_Send((Optr)VAR_aMessage_0_1, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend16041 = new_Send((Optr)PSend16039, SMB__equals_, 1, (Optr)PSend16040);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend16042 = new_Send((Optr)self, SMB_assert_, 1, (Optr)PSend16041);
    // size. 
    Send PSend16043 = new_Send((Optr)VAR_block_0_2, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16044 = new_Send((Optr)PSend16043, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16048 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)nil_Const);
    Array PThreadedCode16047 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_nil, (Optr)&t_send1, (Optr)PSend16048, (Optr)&t_block_return);
    Block PBlock16046 = new_Block_with(empty_Array, empty_Array, PThreadedCode16047, 1, PSend16048);
    // ifTrue:. 
    Send PSend16045 = new_Send((Optr)PSend16044, SMB_ifTrue_, 1, (Optr)PBlock16046);
    Assign PAssign16049 = new_Assign((Optr)VAR_returnContext_0_4, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_blockContextFor_message_ = new_Symbol(L"blockContextFor:message:");
    // blockContextFor:message:. 
    Send PSend16050 = new_Send((Optr)self, SMB_blockContextFor_message_, 2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    // interpretBlock:. 
    Send PSend16052 = new_Send((Optr)self, SMB_interpretBlock_, 1, (Optr)VAR_block_0_2);
    Assign PAssign16051 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16052);
    Assign PAssign16053 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)VAR_returnContext_0_4);
    Array PThreadedCode16035 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign16036, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend16037, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16038, (Optr)&t_send0, (Optr)PSend16039, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_send0, (Optr)PSend16040, (Optr)&t_send1, (Optr)PSend16041, (Optr)&t_send1, (Optr)PSend16042, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send0, (Optr)PSend16043, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16044, (Optr)&t_send_ifTrue_, (Optr)PSend16045, (Optr)PBlock16046, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16049, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_send2, (Optr)PSend16050, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16051, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_block_0_2, (Optr)&t_send1, (Optr)PSend16052, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16053, (Optr)&t_push_variable, (Optr)VAR_returnContext_0_4, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Block PBlock16033 = new_Block_with(PArray16034, empty_Array, PThreadedCode16035, 8, PAssign16036, PSend16042, PSend16045, PAssign16049, PSend16050, PAssign16051, PAssign16053, VAR_result_0_3);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16054 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16033);
    Array PThreadedCode16032 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16033, (Optr)&t_send1, (Optr)PSend16054, (Optr)&t_method_return);
    Method PMethod16029 = new_Method_with(PArray16030, PArray16031, empty_Array, PThreadedCode16032, 1, PSend16054);
    
    MethodClosure MC_SMB_blockclosureValue_message_ = new_MethodClosure((Method)PMethod16029, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_blockclosureValue_message_, MC_SMB_blockclosureValue_message_);
}


static void init_SMB_visitVariable_() {
    Symbol SMB_visitVariable_ = new_Symbol(L"visitVariable:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Array PArray16056 = new_Array_with(1, (Optr)VAR_aVariable_0_0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16058 = new_Send((Optr)VAR_aVariable_0_0, SMB_readFrom_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16057 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16058, (Optr)&t_method_return);
    Method PMethod16055 = new_Method_with(PArray16056, empty_Array, empty_Array, PThreadedCode16057, 1, PSend16058);
    
    MethodClosure MC_SMB_visitVariable_ = new_MethodClosure((Method)PMethod16055, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitVariable_, MC_SMB_visitVariable_);
}


static void init_SMB_currentSelf() {
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend16061 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend16062 = new_Send((Optr)PSend16061, SMB_receiver, 0);
    Array PThreadedCode16060 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16061, (Optr)&t_send0, (Optr)PSend16062, (Optr)&t_method_return);
    Method PMethod16059 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16060, 1, PSend16062);
    
    MethodClosure MC_SMB_currentSelf = new_MethodClosure((Method)PMethod16059, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_currentSelf, MC_SMB_currentSelf);
}


static void init_SMB_visitUnsintSlot_() {
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Array PArray16064 = new_Array_with(1, (Optr)VAR_aSlot_0_0);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16066 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend16067 = new_Send((Optr)VAR_aSlot_0_0, SMB_readFrom_, 1, (Optr)PSend16066);
    Array PThreadedCode16065 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16066, (Optr)&t_send1, (Optr)PSend16067, (Optr)&t_method_return);
    Method PMethod16063 = new_Method_with(PArray16064, empty_Array, empty_Array, PThreadedCode16065, 1, PSend16067);
    
    MethodClosure MC_SMB_visitUnsintSlot_ = new_MethodClosure((Method)PMethod16063, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitUnsintSlot_, MC_SMB_visitUnsintSlot_);
}


static void init_SMB_assignSlot_to_() {
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16069 = new_Array_with(2, (Optr)VAR_aSlot_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16071 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16072 = new_Send((Optr)VAR_aSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)PSend16071);
    Array PThreadedCode16070 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16071, (Optr)&t_send2, (Optr)PSend16072, (Optr)&t_method_return);
    Method PMethod16068 = new_Method_with(PArray16069, empty_Array, empty_Array, PThreadedCode16070, 1, PSend16072);
    
    MethodClosure MC_SMB_assignSlot_to_ = new_MethodClosure((Method)PMethod16068, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignSlot_to_, MC_SMB_assignSlot_to_);
}


static void init_SMB_continueOn_message_() {
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray16074 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_saveContext_0_2 = new_Variable_named(L"saveContext", 0);
    Variable VAR_result_0_3 = new_Variable_named(L"result", 0);
    Variable VAR_aBlock_0_4 = new_Variable_named(L"aBlock", 0);
    Array PArray16075 = new_Array_with(3, (Optr)VAR_saveContext_0_2, (Optr)VAR_result_0_3, (Optr)VAR_aBlock_0_4);
    Assign PAssign16077 = new_Assign((Optr)VAR_saveContext_0_2, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16079 = new_Send((Optr)VAR_message_0_1, SMB_at_, 1, (Optr)int_1_Const);
    Assign PAssign16078 = new_Assign((Optr)VAR_aBlock_0_4, (Optr)PSend16079);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Variable VAR_metaCont_1_0 = new_Variable_named(L"metaCont", 1);
    Array PArray16083 = new_Array_with(1, (Optr)VAR_metaCont_1_0);
    Symbol  SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value__Const = new_Constant((Optr)SMB_value_);
    // selector:. 
    Send PSend16085 = new_Send((Optr)VAR_message_0_1, SMB_selector_, 1, (Optr)SMB_value__Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16086 = new_Send((Optr)VAR_message_0_1, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_metaCont_1_0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16087 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_message_0_1, (Optr)VAR_aBlock_0_4);
    Array PThreadedCode16084 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push1, (Optr)SMB_value_, (Optr)&t_send1, (Optr)PSend16085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_metaCont_1_0, (Optr)&t_send2, (Optr)PSend16086, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_4, (Optr)&t_send2, (Optr)PSend16087, (Optr)&t_method_return);
    Block PBlock16082 = new_Block_with(PArray16083, empty_Array, PThreadedCode16084, 3, PSend16085, PSend16086, PSend16087);
    // on:. 
    Send PSend16081 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16082);
    Assign PAssign16080 = new_Assign((Optr)VAR_result_0_3, (Optr)PSend16081);
    Assign PAssign16088 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)VAR_saveContext_0_2);
    Array PThreadedCode16076 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign16077, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16078, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16079, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16080, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16082, (Optr)&t_send1, (Optr)PSend16081, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16088, (Optr)&t_push_variable, (Optr)VAR_saveContext_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_3, (Optr)&t_method_return);
    Method PMethod16073 = new_Method_with(PArray16074, PArray16075, empty_Array, PThreadedCode16076, 5, PAssign16077, PAssign16078, PAssign16080, PAssign16088, VAR_result_0_3);
    
    MethodClosure MC_SMB_continueOn_message_ = new_MethodClosure((Method)PMethod16073, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_continueOn_message_, MC_SMB_continueOn_message_);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray16090 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16093 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend16095 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_code_ = new_Symbol(L"code:");
    // code:. 
    Send PSend16096 = new_Send((Optr)VAR__receiver__1_0, SMB_code_, 1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16094 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16095, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_send1, (Optr)PSend16096, (Optr)&t_method_return);
    Block PBlock16092 = new_Block_with(PArray16093, empty_Array, PThreadedCode16094, 2, PSend16095, PSend16096);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16097 = new_Send((Optr)PBlockClosure_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16098 = new_Send((Optr)PBlock16092, SMB_value_, 1, (Optr)PSend16097);
    Array PThreadedCode16091 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock16092, (Optr)&t_push_class_reference, (Optr)PBlockClosure_classReference, (Optr)&t_send0, (Optr)PSend16097, (Optr)&t_send1, (Optr)PSend16098, (Optr)&t_method_return);
    Method PMethod16089 = new_Method_with(PArray16090, empty_Array, empty_Array, PThreadedCode16091, 1, PSend16098);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod16089, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_send_to_() {
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16100 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend16102 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    // send:to:class:. 
    Send PSend16103 = new_Send((Optr)self, SMB_send_to_class_, 3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)PSend16102);
    Array PThreadedCode16101 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16102, (Optr)&t_send3, (Optr)PSend16103, (Optr)&t_method_return);
    Method PMethod16099 = new_Method_with(PArray16100, empty_Array, empty_Array, PThreadedCode16101, 1, PSend16103);
    
    MethodClosure MC_SMB_send_to_ = new_MethodClosure((Method)PMethod16099, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_, MC_SMB_send_to_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray16105 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend16107 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Array PThreadedCode16106 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend16107, (Optr)&t_method_return);
    Method PMethod16104 = new_Method_with(PArray16105, empty_Array, empty_Array, PThreadedCode16106, 1, PSend16107);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod16104, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_invokeNativeMethod_on_message_alternative_() {
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Variable VAR_aBlock_0_3 = new_Variable_named(L"aBlock", 0);
    Array PArray16109 = new_Array_with(4, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_aBlock_0_3);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_Interpretation_minus_Interpreter = new_Symbol(L"Interpretation.Interpreter");
    Annotation PAnnotation16111 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_invokeNativeMethod_on_message_alternative_, (Optr)SMB_Interpretation_minus_Interpreter);
    Array PArray16110 = new_Array_with(1, (Optr)PAnnotation16111);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16113 = new_Send((Optr)VAR_aBlock_0_3, SMB_value, 0);
    Array PThreadedCode16112 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_3, (Optr)&t_send0, (Optr)PSend16113, (Optr)&t_method_return);
    NativeMethod PNativeMethod16108 = new_NativeMethod_with(PArray16109, empty_Array, PArray16110, PThreadedCode16112, 1, PSend16113);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_alternative_ = new_MethodClosure((Method)PNativeMethod16108, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeNativeMethod_on_message_alternative_, MC_SMB_invokeNativeMethod_on_message_alternative_);
}


static void init_SMB_sendNext_to_class_() {
    Symbol SMB_sendNext_to_class_ = new_Symbol(L"sendNext:to:class:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_cls_0_2 = new_Variable_named(L"cls", 0);
    Array PArray16115 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_cls_0_2);
    Variable VAR_msg_0_3 = new_Variable_named(L"msg", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16116 = new_Array_with(2, (Optr)VAR_msg_0_3, (Optr)VAR_result_0_4);
    Symbol SMB_ifNil_ifNotNil_ = new_Symbol(L"ifNil:ifNotNil:");
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    // send:to:class:. 
    Send PSend16122 = new_Send((Optr)self, SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_cls_0_2);
    Array PThreadedCode16121 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send3, (Optr)PSend16122, (Optr)&t_block_return);
    Block PBlock16120 = new_Block_with(empty_Array, empty_Array, PThreadedCode16121, 1, PSend16122);
    Variable VAR_next_1_0 = new_Variable_named(L"next", 1);
    Array PArray16124 = new_Array_with(1, (Optr)VAR_next_1_0);
    Assign PAssign16126 = new_Assign((Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)nil_Const);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray16130 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol  SMB_sendNext_to_ = new_Symbol(L"sendNext:to:");
    Constant SMB_sendNext_to__Const = new_Constant((Optr)SMB_sendNext_to_);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend16132 = new_Send((Optr)SMB_sendNext_to__Const, SMB_class, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16133 = new_Send((Optr)VAR__receiver__2_0, SMB_selector_, 1, (Optr)PSend16132);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend16134 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_message_0_0);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend16135 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)VAR_receiver_0_1);
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend16136 = new_Send((Optr)VAR__receiver__2_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)VAR_cls_0_2);
    Array PThreadedCode16131 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)SMB_sendNext_to_, (Optr)&t_send0, (Optr)PSend16132, (Optr)&t_send1, (Optr)PSend16133, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_send2, (Optr)PSend16134, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16135, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_variable, (Optr)VAR_cls_0_2, (Optr)&t_send2, (Optr)PSend16136, (Optr)&t_method_return);
    Block PBlock16129 = new_Block_with(PArray16130, empty_Array, PThreadedCode16131, 4, PSend16133, PSend16134, PSend16135, PSend16136);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16137 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)int_3_Const);
    // value:. 
    Send PSend16128 = new_Send((Optr)PBlock16129, SMB_value_, 1, (Optr)PSend16137);
    Assign PAssign16127 = new_Assign((Optr)VAR_msg_0_3, (Optr)PSend16128);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16138 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_msg_0_3, (Optr)VAR_next_1_0);
    Array PThreadedCode16125 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign16126, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16127, (Optr)&t_push_closure, (Optr)PBlock16129, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend16137, (Optr)&t_send1, (Optr)PSend16128, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_3, (Optr)&t_push_variable, (Optr)VAR_next_1_0, (Optr)&t_send2, (Optr)PSend16138, (Optr)&t_method_return);
    Block PBlock16123 = new_Block_with(PArray16124, empty_Array, PThreadedCode16125, 3, PAssign16126, PAssign16127, PSend16138);
    // ifNil:ifNotNil:. 
    Send PSend16119 = new_Send((Optr)slot_Interpretation_Interpreter_nextInterpreter, SMB_ifNil_ifNotNil_, 2, (Optr)PBlock16120, (Optr)PBlock16123);
    Assign PAssign16118 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16119);
    Symbol SMB_swapInvokeNative = new_Symbol(L"swapInvokeNative");
    // swapInvokeNative. 
    Send PSend16139 = new_Send((Optr)self, SMB_swapInvokeNative, 0);
    Array PThreadedCode16117 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push1, (Optr)PAssign16118, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)&t_push_closure, (Optr)PBlock16120, (Optr)&t_push_closure, (Optr)PBlock16123, (Optr)&t_send2, (Optr)PSend16119, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16139, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Method PMethod16114 = new_Method_with(PArray16115, PArray16116, empty_Array, PThreadedCode16117, 3, PAssign16118, PSend16139, VAR_result_0_4);
    
    MethodClosure MC_SMB_sendNext_to_class_ = new_MethodClosure((Method)PMethod16114, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_sendNext_to_class_, MC_SMB_sendNext_to_class_);
}


static void init_SMB_lookupSelector_in_() {
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Variable VAR_selector_0_0 = new_Variable_named(L"selector", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Array PArray16141 = new_Array_with(2, (Optr)VAR_selector_0_0, (Optr)VAR_class_0_1);
    Variable VAR_currentClass_0_2 = new_Variable_named(L"currentClass", 0);
    Array PArray16142 = new_Array_with(1, (Optr)VAR_currentClass_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16145 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign16147 = new_Assign((Optr)VAR_currentClass_0_2, (Optr)VAR_class_0_1);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16150 = new_Send((Optr)VAR_currentClass_0_2, SMB_isNil, 0);
    Array PThreadedCode16149 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16150, (Optr)&t_block_return);
    Block PBlock16148 = new_Block_with(empty_Array, empty_Array, PThreadedCode16149, 1, PSend16150);
    Symbol SMB_methodDict = new_Symbol(L"methodDict");
    // methodDict. 
    Send PSend16153 = new_Send((Optr)VAR_currentClass_0_2, SMB_methodDict, 0);
    Variable VAR_method_2_0 = new_Variable_named(L"method", 2);
    Array PArray16155 = new_Array_with(1, (Optr)VAR_method_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16157 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_method_2_0);
    Array PThreadedCode16156 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_method_2_0, (Optr)&t_send1, (Optr)PSend16157, (Optr)&t_method_return);
    Block PBlock16154 = new_Block_with(PArray16155, empty_Array, PThreadedCode16156, 1, PSend16157);
    Symbol SMB_at_ifPresent_ = new_Symbol(L"at:ifPresent:");
    // at:ifPresent:. 
    Send PSend16158 = new_Send((Optr)PSend16153, SMB_at_ifPresent_, 2, (Optr)VAR_selector_0_0, (Optr)PBlock16154);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend16160 = new_Send((Optr)VAR_currentClass_0_2, SMB_superclass, 0);
    Assign PAssign16159 = new_Assign((Optr)VAR_currentClass_0_2, (Optr)PSend16160);
    Array PThreadedCode16152 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16153, (Optr)&t_push_variable, (Optr)VAR_selector_0_0, (Optr)&t_push_closure, (Optr)PBlock16154, (Optr)&t_send2, (Optr)PSend16158, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16159, (Optr)&t_push_variable, (Optr)VAR_currentClass_0_2, (Optr)&t_send0, (Optr)PSend16160, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock16151 = new_Block_with(empty_Array, empty_Array, PThreadedCode16152, 2, PSend16158, PAssign16159);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16161 = new_Send((Optr)PBlock16148, SMB_whileFalse_, 1, (Optr)PBlock16151);
    Array PThreadedCode16146 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign16147, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16148, (Optr)&t_push_closure, (Optr)PBlock16151, (Optr)&t_send1, (Optr)PSend16161, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16144 = new_Block_with(PArray16145, empty_Array, PThreadedCode16146, 3, PAssign16147, PSend16161, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16162 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16144);
    Array PThreadedCode16143 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16144, (Optr)&t_send1, (Optr)PSend16162, (Optr)&t_method_return);
    Method PMethod16140 = new_Method_with(PArray16141, PArray16142, empty_Array, PThreadedCode16143, 1, PSend16162);
    
    MethodClosure MC_SMB_lookupSelector_in_ = new_MethodClosure((Method)PMethod16140, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_lookupSelector_in_, MC_SMB_lookupSelector_in_);
}


static void init_SMB_methodContextFor_receiver_message_() {
    Symbol SMB_methodContextFor_receiver_message_ = new_Symbol(L"methodContextFor:receiver:message:");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16164 = new_Array_with(3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16169 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend16171 = new_Send((Optr)VAR__receiver__1_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend16172 = new_Send((Optr)VAR__receiver__1_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend16173 = new_Send((Optr)VAR__receiver__1_0, SMB_closure_, 1, (Optr)VAR_closure_0_0);
    Array PThreadedCode16170 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend16171, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16172, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send1, (Optr)PSend16173, (Optr)&t_method_return);
    Block PBlock16168 = new_Block_with(PArray16169, empty_Array, PThreadedCode16170, 3, PSend16171, PSend16172, PSend16173);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16178 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16177 = new_Send((Optr)PSend16178, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16176 = new_Send((Optr)PSend16177, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // code. 
    Send PSend16181 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Symbol SMB_locals = new_Symbol(L"locals");
    // locals. 
    Send PSend16180 = new_Send((Optr)PSend16181, SMB_locals, 0);
    // size. 
    Send PSend16179 = new_Send((Optr)PSend16180, SMB_size, 0);
    // +. 
    Send PSend16175 = new_Send((Optr)PSend16176, SMB__plus_, 1, (Optr)PSend16179);
    // new:. 
    Send PSend16174 = new_Send((Optr)PMethodContext_classReference, SMB_new_, 1, (Optr)PSend16175);
    // value:. 
    Send PSend16167 = new_Send((Optr)PBlock16168, SMB_value_, 1, (Optr)PSend16174);
    Assign PAssign16166 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16167);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray16183 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16185 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)VAR_arg_1_0);
    Array PThreadedCode16184 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send2, (Optr)PSend16185, (Optr)&t_method_return);
    Block PBlock16182 = new_Block_with(PArray16183, empty_Array, PThreadedCode16184, 1, PSend16185);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend16186 = new_Send((Optr)VAR_aMessage_0_2, SMB_withIndexDo_, 1, (Optr)PBlock16182);
    Array PThreadedCode16165 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push1, (Optr)PAssign16166, (Optr)&t_push_closure, (Optr)PBlock16168, (Optr)&t_push_class_reference, (Optr)PMethodContext_classReference, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16178, (Optr)&t_send0, (Optr)PSend16177, (Optr)&t_send0, (Optr)PSend16176, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16181, (Optr)&t_send0, (Optr)PSend16180, (Optr)&t_send0, (Optr)PSend16179, (Optr)&t_send1, (Optr)PSend16175, (Optr)&t_send1, (Optr)PSend16174, (Optr)&t_send1, (Optr)PSend16167, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock16182, (Optr)&t_send1, (Optr)PSend16186, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16163 = new_Method_with(PArray16164, empty_Array, empty_Array, PThreadedCode16165, 3, PAssign16166, PSend16186, self);
    
    MethodClosure MC_SMB_methodContextFor_receiver_message_ = new_MethodClosure((Method)PMethod16163, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_methodContextFor_receiver_message_, MC_SMB_methodContextFor_receiver_message_);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray16188 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend16190 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Array PThreadedCode16189 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend16190, (Optr)&t_method_return);
    Method PMethod16187 = new_Method_with(PArray16188, empty_Array, empty_Array, PThreadedCode16189, 1, PSend16190);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod16187, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_assignVariable_to_() {
    Symbol SMB_assignVariable_to_ = new_Symbol(L"assignVariable:to:");
    Variable VAR_aVariable_0_0 = new_Variable_named(L"aVariable", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16192 = new_Array_with(2, (Optr)VAR_aVariable_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16194 = new_Send((Optr)VAR_aVariable_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode16193 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_aVariable_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send2, (Optr)PSend16194, (Optr)&t_method_return);
    Method PMethod16191 = new_Method_with(PArray16192, empty_Array, empty_Array, PThreadedCode16193, 1, PSend16194);
    
    MethodClosure MC_SMB_assignVariable_to_ = new_MethodClosure((Method)PMethod16191, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignVariable_to_, MC_SMB_assignVariable_to_);
}


static void init_SMB_assignUnsintSlot_to_() {
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    Variable VAR_aSlot_0_0 = new_Variable_named(L"aSlot", 0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray16196 = new_Array_with(2, (Optr)VAR_aSlot_0_0, (Optr)VAR_value_0_1);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend16198 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend16199 = new_Send((Optr)VAR_aSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_value_0_1, (Optr)PSend16198);
    Array PThreadedCode16197 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16198, (Optr)&t_send2, (Optr)PSend16199, (Optr)&t_method_return);
    Method PMethod16195 = new_Method_with(PArray16196, empty_Array, empty_Array, PThreadedCode16197, 1, PSend16199);
    
    MethodClosure MC_SMB_assignUnsintSlot_to_ = new_MethodClosure((Method)PMethod16195, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_assignUnsintSlot_to_, MC_SMB_assignUnsintSlot_to_);
}


static void init_SMB_invokeMethod_on_message_() {
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    Variable VAR_closure_0_0 = new_Variable_named(L"closure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray16201 = new_Array_with(3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_method_0_3 = new_Variable_named(L"method", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray16202 = new_Array_with(2, (Optr)VAR_method_0_3, (Optr)VAR_result_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16205 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_code = new_Symbol(L"code");
    // code. 
    Send PSend16208 = new_Send((Optr)VAR_closure_0_0, SMB_code, 0);
    Assign PAssign16207 = new_Assign((Optr)VAR_method_0_3, (Optr)PSend16208);
    Symbol SMB_params = new_Symbol(L"params");
    // params. 
    Send PSend16209 = new_Send((Optr)VAR_method_0_3, SMB_params, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend16210 = new_Send((Optr)PSend16209, SMB_size, 0);
    // size. 
    Send PSend16211 = new_Send((Optr)VAR_aMessage_0_2, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend16212 = new_Send((Optr)PSend16210, SMB__equals_, 1, (Optr)PSend16211);
    Symbol SMB_assert_ = new_Symbol(L"assert:");
    // assert:. 
    Send PSend16213 = new_Send((Optr)self, SMB_assert_, 1, (Optr)PSend16212);
    // size. 
    Send PSend16214 = new_Send((Optr)VAR_method_0_3, SMB_size, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend16215 = new_Send((Optr)PSend16214, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16219 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_receiver_0_1);
    Array PThreadedCode16218 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend16219, (Optr)&t_block_return);
    Block PBlock16217 = new_Block_with(empty_Array, empty_Array, PThreadedCode16218, 1, PSend16219);
    // ifTrue:. 
    Send PSend16216 = new_Send((Optr)PSend16215, SMB_ifTrue_, 1, (Optr)PBlock16217);
    Symbol SMB_methodContextFor_receiver_message_ = new_Symbol(L"methodContextFor:receiver:message:");
    // methodContextFor:receiver:message:. 
    Send PSend16220 = new_Send((Optr)self, SMB_methodContextFor_receiver_message_, 3, (Optr)VAR_closure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    // interpretMethod:. 
    Send PSend16222 = new_Send((Optr)self, SMB_interpretMethod_, 1, (Optr)VAR_method_0_3);
    Assign PAssign16221 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend16222);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16224 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign16223 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend16224);
    Array PThreadedCode16206 = instantiate_Array_with(ThreadedCode_Class, 0, 65, (Optr)&t_push1, (Optr)PAssign16207, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_send0, (Optr)PSend16208, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send0, (Optr)PSend16209, (Optr)&t_send0, (Optr)PSend16210, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend16211, (Optr)&t_send1, (Optr)PSend16212, (Optr)&t_send1, (Optr)PSend16213, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send0, (Optr)PSend16214, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend16215, (Optr)&t_send_ifTrue_, (Optr)PSend16216, (Optr)PBlock16217, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_closure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend16220, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16221, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_method_0_3, (Optr)&t_send1, (Optr)PSend16222, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16223, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend16224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Block PBlock16204 = new_Block_with(PArray16205, empty_Array, PThreadedCode16206, 7, PAssign16207, PSend16213, PSend16216, PSend16220, PAssign16221, PAssign16223, VAR_result_0_4);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16225 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16204);
    Array PThreadedCode16203 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16204, (Optr)&t_send1, (Optr)PSend16225, (Optr)&t_method_return);
    Method PMethod16200 = new_Method_with(PArray16201, PArray16202, empty_Array, PThreadedCode16203, 1, PSend16225);
    
    MethodClosure MC_SMB_invokeMethod_on_message_ = new_MethodClosure((Method)PMethod16200, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_invokeMethod_on_message_, MC_SMB_invokeMethod_on_message_);
}


static void init_SMB_sendDoesNotUnderstandFor_to_() {
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray16227 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    Variable VAR_dnu_0_2 = new_Variable_named(L"dnu", 0);
    Array PArray16228 = new_Array_with(1, (Optr)VAR_dnu_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16231 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16233 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    Symbol  SMB_doesNotUnderstand_ = new_Symbol(L"doesNotUnderstand:");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_doesNotUnderstand__Const = new_Constant((Optr)SMB_doesNotUnderstand_);
    // =. 
    Send PSend16234 = new_Send((Optr)PSend16233, SMB__equals_, 1, (Optr)SMB_doesNotUnderstand__Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_at_ = new_Symbol(L"at:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:. 
    Send PSend16238 = new_Send((Optr)VAR_aMessage_0_0, SMB_at_, 1, (Optr)int_1_Const);
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    // recursiveDoesNotUnderstand:on:. 
    Send PSend16239 = new_Send((Optr)self, SMB_recursiveDoesNotUnderstand_on_, 2, (Optr)PSend16238, (Optr)VAR_receiver_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16240 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16239);
    Array PThreadedCode16237 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16238, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16239, (Optr)&t_send1, (Optr)PSend16240, (Optr)&t_block_return);
    Block PBlock16236 = new_Block_with(empty_Array, empty_Array, PThreadedCode16237, 1, PSend16240);
    // ifTrue:. 
    Send PSend16235 = new_Send((Optr)PSend16234, SMB_ifTrue_, 1, (Optr)PBlock16236);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend16242 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)int_1_Const);
    Assign PAssign16241 = new_Assign((Optr)VAR_dnu_0_2, (Optr)PSend16242);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend16243 = new_Send((Optr)VAR_dnu_0_2, SMB_selector_, 1, (Optr)SMB_doesNotUnderstand__Const);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend16244 = new_Send((Optr)VAR_dnu_0_2, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)VAR_aMessage_0_0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend16245 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)VAR_dnu_0_2, (Optr)VAR_receiver_0_1);
    Array PThreadedCode16232 = instantiate_Array_with(ThreadedCode_Class, 0, 44, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16233, (Optr)&t_push1, (Optr)SMB_doesNotUnderstand_, (Optr)&t_send1, (Optr)PSend16234, (Optr)&t_send_ifTrue_, (Optr)PSend16235, (Optr)PBlock16236, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16241, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend16242, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push1, (Optr)SMB_doesNotUnderstand_, (Optr)&t_send1, (Optr)PSend16243, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send2, (Optr)PSend16244, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_dnu_0_2, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16245, (Optr)&t_method_return);
    Block PBlock16230 = new_Block_with(PArray16231, empty_Array, PThreadedCode16232, 5, PSend16235, PAssign16241, PSend16243, PSend16244, PSend16245);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16246 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16230);
    Array PThreadedCode16229 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16230, (Optr)&t_send1, (Optr)PSend16246, (Optr)&t_method_return);
    Method PMethod16226 = new_Method_with(PArray16227, PArray16228, empty_Array, PThreadedCode16229, 1, PSend16246);
    
    MethodClosure MC_SMB_sendDoesNotUnderstandFor_to_ = new_MethodClosure((Method)PMethod16226, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_sendDoesNotUnderstandFor_to_, MC_SMB_sendDoesNotUnderstandFor_to_);
}


static void init_SMB_swapInvokeNativeOn_message_() {
    Symbol SMB_swapInvokeNativeOn_message_ = new_Symbol(L"swapInvokeNativeOn:message:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray16248 = new_Array_with(2, (Optr)VAR_receiver_0_0, (Optr)VAR_message_0_1);
    Assign PAssign16250 = new_Assign((Optr)slot_Interpretation_Interpreter_nextInterpreter, (Optr)VAR_receiver_0_0);
    Array PThreadedCode16249 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16250, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16247 = new_Method_with(PArray16248, empty_Array, empty_Array, PThreadedCode16249, 2, PAssign16250, self);
    
    MethodClosure MC_SMB_swapInvokeNativeOn_message_ = new_MethodClosure((Method)PMethod16247, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_swapInvokeNativeOn_message_, MC_SMB_swapInvokeNativeOn_message_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_aSend_0_3 = new_Variable_named(L"aSend", 0);
    Array PArray16252 = new_Array_with(4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Variable VAR_method_0_4 = new_Variable_named(L"method", 0);
    Array PArray16253 = new_Array_with(1, (Optr)VAR_method_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16256 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_inlineCache = new_Symbol(L"inlineCache");
    // inlineCache. 
    Send PSend16260 = new_Send((Optr)VAR_aSend_0_3, SMB_inlineCache, 0);
    Symbol SMB_checkCached_ = new_Symbol(L"checkCached:");
    // checkCached:. 
    Send PSend16259 = new_Send((Optr)PSend16260, SMB_checkCached_, 1, (Optr)VAR_class_0_2);
    Assign PAssign16258 = new_Assign((Optr)VAR_method_0_4, (Optr)PSend16259);
    Symbol SMB_accept_on_message_ = new_Symbol(L"accept:on:message:");
    // accept:on:message:. 
    Send PSend16263 = new_Send((Optr)VAR_method_0_4, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16264 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16263);
    Array PThreadedCode16262 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16263, (Optr)&t_send1, (Optr)PSend16264, (Optr)&t_block_return);
    Block PBlock16261 = new_Block_with(empty_Array, empty_Array, PThreadedCode16262, 1, PSend16264);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend16265 = new_Send((Optr)VAR_method_0_4, SMB_ifNotNil_, 1, (Optr)PBlock16261);
    Symbol SMB_lookupSelector_in_ = new_Symbol(L"lookupSelector:in:");
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend16268 = new_Send((Optr)VAR_aMessage_0_0, SMB_selector, 0);
    // lookupSelector:in:. 
    Send PSend16267 = new_Send((Optr)self, SMB_lookupSelector_in_, 2, (Optr)PSend16268, (Optr)VAR_class_0_2);
    Assign PAssign16266 = new_Assign((Optr)VAR_method_0_4, (Optr)PSend16267);
    Symbol SMB_sendDoesNotUnderstandFor_to_ = new_Symbol(L"sendDoesNotUnderstandFor:to:");
    // sendDoesNotUnderstandFor:to:. 
    Send PSend16271 = new_Send((Optr)self, SMB_sendDoesNotUnderstandFor_to_, 2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    // escape:. 
    Send PSend16272 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16271);
    Array PThreadedCode16270 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send2, (Optr)PSend16271, (Optr)&t_send1, (Optr)PSend16272, (Optr)&t_block_return);
    Block PBlock16269 = new_Block_with(empty_Array, empty_Array, PThreadedCode16270, 1, PSend16272);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend16273 = new_Send((Optr)VAR_method_0_4, SMB_ifNil_, 1, (Optr)PBlock16269);
    // inlineCache. 
    Send PSend16274 = new_Send((Optr)VAR_aSend_0_3, SMB_inlineCache, 0);
    Symbol SMB_cache_at_ = new_Symbol(L"cache:at:");
    // cache:at:. 
    Send PSend16275 = new_Send((Optr)PSend16274, SMB_cache_at_, 2, (Optr)VAR_method_0_4, (Optr)VAR_class_0_2);
    // accept:on:message:. 
    Send PSend16276 = new_Send((Optr)VAR_method_0_4, SMB_accept_on_message_, 3, (Optr)self, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_0);
    Array PThreadedCode16257 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign16258, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_send0, (Optr)PSend16260, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send1, (Optr)PSend16259, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_closure, (Optr)PBlock16261, (Optr)&t_send1, (Optr)PSend16265, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16266, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend16268, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16267, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_closure, (Optr)PBlock16269, (Optr)&t_send1, (Optr)PSend16273, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_send0, (Optr)PSend16274, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_send2, (Optr)PSend16275, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_method_0_4, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send3, (Optr)PSend16276, (Optr)&t_method_return);
    Block PBlock16255 = new_Block_with(PArray16256, empty_Array, PThreadedCode16257, 6, PAssign16258, PSend16265, PAssign16266, PSend16273, PSend16275, PSend16276);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16277 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16255);
    Array PThreadedCode16254 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16255, (Optr)&t_send1, (Optr)PSend16277, (Optr)&t_method_return);
    Method PMethod16251 = new_Method_with(PArray16252, PArray16253, empty_Array, PThreadedCode16254, 1, PSend16277);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16251, Interpretation_Interpreter_Class);
    store_method(Interpretation_Interpreter_Class, SMB_send_to_class_for_, MC_SMB_send_to_class_for_);
}


static void init_class_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray16279 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend16281 = new_Send((Optr)self, SMB_new, 0);
    // interpret:. 
    Send PSend16282 = new_Send((Optr)PSend16281, SMB_interpret_, 1, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode16280 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16281, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend16282, (Optr)&t_method_return);
    Method PMethod16278 = new_Method_with(PArray16279, empty_Array, empty_Array, PThreadedCode16280, 1, PSend16282);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod16278, HEADER(Interpretation_Interpreter_Class));
    store_method(HEADER(Interpretation_Interpreter_Class), SMB_interpret_, MC_SMB_interpret_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_Interpretation_minus_Interpreter = new_Symbol(L"Interpretation.Interpreter");
    String string_16285 = new_String(L"plugin/interpretation/Interpreter.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_Interpretation_minus_Interpreter_Const = new_Constant((Optr)SMB_Interpretation_minus_Interpreter);
    Constant string_16285_Const = new_Constant((Optr)string_16285);
    // require:at:. 
    Send PSend16286 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_Interpretation_minus_Interpreter_Const, (Optr)string_16285_Const);
    Array PThreadedCode16284 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_Interpretation_minus_Interpreter, (Optr)&t_push1, (Optr)string_16285, (Optr)&t_send2, (Optr)PSend16286, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16283 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16284, 2, PSend16286, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16283, HEADER(Interpretation_Interpreter_Class));
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