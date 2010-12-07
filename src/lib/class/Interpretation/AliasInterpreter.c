#include <lib/class/Interpretation/AliasInterpreter.h>


Optr layout_Interpretation_AliasInterpreter_Class_class;
Optr layout_Interpretation_AliasInterpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray17174 = new_Array_with(3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    // aliasArguments:. 
    Send PSend17176 = new_Send((Optr)self, SMB_aliasArguments_, 1, (Optr)VAR_aMessage_0_0);
    Super PSuper17177 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode17175 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend17176, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper17177, (Optr)&t_method_return);
    Method PMethod17173 = new_Method_with(PArray17174, empty_Array, empty_Array, PThreadedCode17175, 2, PSend17176, PSuper17177);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod17173, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_blockclosureValue_message_() {
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray17179 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17181 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_value, 0);
    Super PSuper17182 = new_Super(SMB_blockclosureValue_message_, 2, (Optr)PSend17181, (Optr)VAR_aMessage_0_1);
    Array PThreadedCode17180 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend17181, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_super2, (Optr)PSuper17182, (Optr)&t_method_return);
    Method PMethod17178 = new_Method_with(PArray17179, empty_Array, empty_Array, PThreadedCode17180, 1, PSuper17182);
    
    MethodClosure MC_SMB_blockclosureValue_message_ = new_MethodClosure((Method)PMethod17178, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_blockclosureValue_message_, MC_SMB_blockclosureValue_message_);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray17184 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17186 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
    Symbol  SMB_value = new_Symbol(L"value");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value_Const = new_Constant((Optr)SMB_value);
    // selector:. 
    Send PSend17187 = new_Send((Optr)PSend17186, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    // asAliased. 
    Send PSend17188 = new_Send((Optr)VAR_aClosure_0_0, SMB_asAliased, 0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend17189 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend17187, (Optr)PSend17188);
    Array PThreadedCode17185 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend17186, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend17187, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend17188, (Optr)&t_send2, (Optr)PSend17189, (Optr)&t_method_return);
    Method PMethod17183 = new_Method_with(PArray17184, empty_Array, empty_Array, PThreadedCode17185, 1, PSend17189);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod17183, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_continueEscape_message_() {
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray17191 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17193 = new_Send((Optr)VAR_aContinuation_0_0, SMB_value, 0);
    Super PSuper17194 = new_Super(SMB_continueEscape_message_, 2, (Optr)PSend17193, (Optr)VAR_aMessage_0_1);
    Array PThreadedCode17192 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_send0, (Optr)PSend17193, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_super2, (Optr)PSuper17194, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17190 = new_Method_with(PArray17191, empty_Array, empty_Array, PThreadedCode17192, 2, PSuper17194, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod17190, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_continueEscape_message_, MC_SMB_continueEscape_message_);
}


static void init_SMB_invokeNativeMethod_on_message_() {
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray17196 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_unwrappedMessage_0_3 = new_Variable_named(L"unwrappedMessage", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray17197 = new_Array_with(2, (Optr)VAR_unwrappedMessage_0_3, (Optr)VAR_result_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17200 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17204 = new_Send((Optr)VAR_aMessage_0_2, SMB_size, 0);
    // new:. 
    Send PSend17203 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend17204);
    Assign PAssign17202 = new_Assign((Optr)VAR_unwrappedMessage_0_3, (Optr)PSend17203);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17205 = new_Send((Optr)VAR_aMessage_0_2, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend17206 = new_Send((Optr)VAR_unwrappedMessage_0_3, SMB_selector_, 1, (Optr)PSend17205);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray17208 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17210 = new_Send((Optr)VAR_arg_2_0, SMB_value, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend17211 = new_Send((Optr)VAR_unwrappedMessage_0_3, SMB_at_put_, 2, (Optr)VAR_index_2_1, (Optr)PSend17210);
    Array PThreadedCode17209 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_send0, (Optr)PSend17210, (Optr)&t_send2, (Optr)PSend17211, (Optr)&t_method_return);
    Block PBlock17207 = new_Block_with(PArray17208, empty_Array, PThreadedCode17209, 1, PSend17211);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend17212 = new_Send((Optr)VAR_aMessage_0_2, SMB_withIndexDo_, 1, (Optr)PBlock17207);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray17216 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend17218 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend17219 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend17220 = new_Send((Optr)VAR__receiver__2_0, SMB_closure_, 1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend17221 = new_Send((Optr)VAR__receiver__2_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17217 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend17218, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send1, (Optr)PSend17219, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend17220, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17221, (Optr)&t_method_return);
    Block PBlock17215 = new_Block_with(PArray17216, empty_Array, PThreadedCode17217, 4, PSend17218, PSend17219, PSend17220, PSend17221);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17222 = new_Send((Optr)PNativeMethodContext_classReference, SMB_new, 0);
    // value:. 
    Send PSend17214 = new_Send((Optr)PBlock17215, SMB_value_, 1, (Optr)PSend17222);
    Assign PAssign17213 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17214);
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    // value. 
    Send PSend17225 = new_Send((Optr)VAR_receiver_0_1, SMB_value, 0);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend17229 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign17228 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17229);
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend17230 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17231 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17230);
    Array PThreadedCode17227 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign17228, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17229, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend17230, (Optr)&t_send1, (Optr)PSend17231, (Optr)&t_block_return);
    Block PBlock17226 = new_Block_with(empty_Array, empty_Array, PThreadedCode17227, 2, PAssign17228, PSend17231);
    Super PSuper17224 = new_Super(SMB_invokeNativeMethod_on_message_alternative_, 4, (Optr)VAR_aClosure_0_0, (Optr)PSend17225, (Optr)VAR_unwrappedMessage_0_3, (Optr)PBlock17226);
    Assign PAssign17223 = new_Assign((Optr)VAR_result_0_4, (Optr)PSuper17224);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend17233 = new_Send((Optr)VAR_result_0_4, SMB_asAllocationAlias_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Assign PAssign17232 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend17233);
    // returnContext. 
    Send PSend17235 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign17234 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17235);
    Array PThreadedCode17201 = instantiate_Array_with(ThreadedCode_Class, 0, 78, (Optr)&t_push1, (Optr)PAssign17202, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend17204, (Optr)&t_send1, (Optr)PSend17203, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend17205, (Optr)&t_send1, (Optr)PSend17206, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock17207, (Optr)&t_send1, (Optr)PSend17212, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17213, (Optr)&t_push_closure, (Optr)PBlock17215, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send0, (Optr)PSend17222, (Optr)&t_send1, (Optr)PSend17214, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17223, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send0, (Optr)PSend17225, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_closure, (Optr)PBlock17226, (Optr)&t_super4, (Optr)PSuper17224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17232, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17233, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17234, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17235, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Block PBlock17199 = new_Block_with(PArray17200, empty_Array, PThreadedCode17201, 8, PAssign17202, PSend17206, PSend17212, PAssign17213, PAssign17223, PAssign17232, PAssign17234, VAR_result_0_4);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17236 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17199);
    Array PThreadedCode17198 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17199, (Optr)&t_send1, (Optr)PSend17236, (Optr)&t_method_return);
    Method PMethod17195 = new_Method_with(PArray17196, PArray17197, empty_Array, PThreadedCode17198, 1, PSend17236);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_ = new_MethodClosure((Method)PMethod17195, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_invokeNativeMethod_on_message_, MC_SMB_invokeNativeMethod_on_message_);
}


static void init_SMB_interpretMethod_() {
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray17238 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17239 = new_Array_with(1, (Optr)VAR_result_0_1);
    Super PSuper17242 = new_Super(SMB_interpretMethod_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign17241 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper17242);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17243 = new_Send((Optr)PReturnAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17244 = new_Send((Optr)PSend17243, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17240 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17241, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_super1, (Optr)PSuper17242, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17243, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17244, (Optr)&t_method_return);
    Method PMethod17237 = new_Method_with(PArray17238, PArray17239, empty_Array, PThreadedCode17240, 2, PAssign17241, PSend17244);
    
    MethodClosure MC_SMB_interpretMethod_ = new_MethodClosure((Method)PMethod17237, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpretMethod_, MC_SMB_interpretMethod_);
}


static void init_SMB_assignSlot_to_() {
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Variable VAR_anAlias_0_1 = new_Variable_named(L"anAlias", 0);
    Array PArray17246 = new_Array_with(2, (Optr)VAR_anSlot_0_0, (Optr)VAR_anAlias_0_1);
    Variable VAR_alias_0_2 = new_Variable_named(L"alias", 0);
    Array PArray17247 = new_Array_with(1, (Optr)VAR_alias_0_2);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17250 = new_Send((Optr)PFieldWriteAlias_classReference, SMB_alias_, 1, (Optr)VAR_anAlias_0_1);
    Assign PAssign17249 = new_Assign((Optr)VAR_alias_0_2, (Optr)PSend17250);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17251 = new_Send((Optr)VAR_alias_0_2, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17252 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend17253 = new_Send((Optr)VAR_anSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17252);
    Symbol SMB_predecessor_ = new_Symbol(L"predecessor:");
    // predecessor:. 
    Send PSend17254 = new_Send((Optr)VAR_alias_0_2, SMB_predecessor_, 1, (Optr)PSend17253);
    // currentUnwrappedSelf. 
    Send PSend17255 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend17256 = new_Send((Optr)VAR_anSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_alias_0_2, (Optr)PSend17255);
    Array PThreadedCode17248 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign17249, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_1, (Optr)&t_send1, (Optr)PSend17250, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17251, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17252, (Optr)&t_send1, (Optr)PSend17253, (Optr)&t_send1, (Optr)PSend17254, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17255, (Optr)&t_send2, (Optr)PSend17256, (Optr)&t_method_return);
    Method PMethod17245 = new_Method_with(PArray17246, PArray17247, empty_Array, PThreadedCode17248, 4, PAssign17249, PSend17251, PSend17254, PSend17256);
    
    MethodClosure MC_SMB_assignSlot_to_ = new_MethodClosure((Method)PMethod17245, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_assignSlot_to_, MC_SMB_assignSlot_to_);
}


static void init_SMB_interpretBlock_() {
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray17258 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17259 = new_Array_with(1, (Optr)VAR_result_0_1);
    Super PSuper17262 = new_Super(SMB_interpretBlock_, 1, (Optr)VAR_aBlock_0_0);
    Assign PAssign17261 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper17262);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17263 = new_Send((Optr)PReturnAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17264 = new_Send((Optr)PSend17263, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17260 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17261, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_super1, (Optr)PSuper17262, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17263, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17264, (Optr)&t_method_return);
    Method PMethod17257 = new_Method_with(PArray17258, PArray17259, empty_Array, PThreadedCode17260, 2, PAssign17261, PSend17264);
    
    MethodClosure MC_SMB_interpretBlock_ = new_MethodClosure((Method)PMethod17257, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpretBlock_, MC_SMB_interpretBlock_);
}


static void init_SMB_visitUnsintSlot_() {
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    Variable VAR_anUnsintSlot_0_0 = new_Variable_named(L"anUnsintSlot", 0);
    Array PArray17266 = new_Array_with(1, (Optr)VAR_anUnsintSlot_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17267 = new_Array_with(1, (Optr)VAR_result_0_1);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17271 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    // readFrom:. 
    Send PSend17270 = new_Send((Optr)VAR_anUnsintSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17271);
    Assign PAssign17269 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend17270);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend17272 = new_Send((Optr)VAR_result_0_1, SMB_asAllocationAlias_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17268 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17269, (Optr)&t_push_variable, (Optr)VAR_anUnsintSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17271, (Optr)&t_send1, (Optr)PSend17270, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17272, (Optr)&t_method_return);
    Method PMethod17265 = new_Method_with(PArray17266, PArray17267, empty_Array, PThreadedCode17268, 2, PAssign17269, PSend17272);
    
    MethodClosure MC_SMB_visitUnsintSlot_ = new_MethodClosure((Method)PMethod17265, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitUnsintSlot_, MC_SMB_visitUnsintSlot_);
}


static void init_SMB_continueOn_message_() {
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray17274 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray17275 = new_Array_with(1, (Optr)VAR_result_0_2);
    Super PSuper17278 = new_Super(SMB_continueOn_message_, 2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Assign PAssign17277 = new_Assign((Optr)VAR_result_0_2, (Optr)PSuper17278);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17280 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17282 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17283 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17281 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend17282, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17283, (Optr)&t_method_return);
    Block PBlock17279 = new_Block_with(PArray17280, empty_Array, PThreadedCode17281, 2, PSend17282, PSend17283);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17284 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17285 = new_Send((Optr)PBlock17279, SMB_value_, 1, (Optr)PSend17284);
    Array PThreadedCode17276 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17277, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_super2, (Optr)PSuper17278, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17279, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend17284, (Optr)&t_send1, (Optr)PSend17285, (Optr)&t_method_return);
    Method PMethod17273 = new_Method_with(PArray17274, PArray17275, empty_Array, PThreadedCode17276, 2, PAssign17277, PSend17285);
    
    MethodClosure MC_SMB_continueOn_message_ = new_MethodClosure((Method)PMethod17273, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_continueOn_message_, MC_SMB_continueOn_message_);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray17287 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_closure_0_1 = new_Variable_named(L"closure", 0);
    Array PArray17288 = new_Array_with(1, (Optr)VAR_closure_0_1);
    Super PSuper17291 = new_Super(SMB_visitBlock_, 1, (Optr)VAR_aBlock_0_0);
    Assign PAssign17290 = new_Assign((Optr)VAR_closure_0_1, (Optr)PSuper17291);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17293 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17295 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17296 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17294 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_1, (Optr)&t_send1, (Optr)PSend17295, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17296, (Optr)&t_method_return);
    Block PBlock17292 = new_Block_with(PArray17293, empty_Array, PThreadedCode17294, 2, PSend17295, PSend17296);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17297 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17298 = new_Send((Optr)PBlock17292, SMB_value_, 1, (Optr)PSend17297);
    Array PThreadedCode17289 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17290, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_super1, (Optr)PSuper17291, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17292, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend17297, (Optr)&t_send1, (Optr)PSend17298, (Optr)&t_method_return);
    Method PMethod17286 = new_Method_with(PArray17287, PArray17288, empty_Array, PThreadedCode17289, 2, PAssign17290, PSend17298);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod17286, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Array PArray17300 = new_Array_with(1, (Optr)VAR_anSlot_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17301 = new_Array_with(1, (Optr)VAR_result_0_1);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17305 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    // readFrom:. 
    Send PSend17304 = new_Send((Optr)VAR_anSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17305);
    Assign PAssign17303 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend17304);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17306 = new_Send((Optr)PFieldReadAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17307 = new_Send((Optr)PSend17306, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17302 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign17303, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17305, (Optr)&t_send1, (Optr)PSend17304, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFieldReadAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17306, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17307, (Optr)&t_method_return);
    Method PMethod17299 = new_Method_with(PArray17300, PArray17301, empty_Array, PThreadedCode17302, 2, PAssign17303, PSend17307);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod17299, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_classOf_() {
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray17309 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17311 = new_Send((Optr)VAR_anAlias_0_0, SMB_value, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17312 = new_Send((Optr)PSend17311, SMB_class, 0);
    Array PThreadedCode17310 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send0, (Optr)PSend17311, (Optr)&t_send0, (Optr)PSend17312, (Optr)&t_method_return);
    Method PMethod17308 = new_Method_with(PArray17309, empty_Array, empty_Array, PThreadedCode17310, 1, PSend17312);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod17308, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_classOf_, MC_SMB_classOf_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray17314 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17317 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend17319 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17320 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)PSend17319);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17321 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17318 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend17319, (Optr)&t_send1, (Optr)PSend17320, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17321, (Optr)&t_method_return);
    Block PBlock17316 = new_Block_with(PArray17317, empty_Array, PThreadedCode17318, 2, PSend17320, PSend17321);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17322 = new_Send((Optr)PLiteralAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17323 = new_Send((Optr)PBlock17316, SMB_value_, 1, (Optr)PSend17322);
    Array PThreadedCode17315 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock17316, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send0, (Optr)PSend17322, (Optr)&t_send1, (Optr)PSend17323, (Optr)&t_method_return);
    Method PMethod17313 = new_Method_with(PArray17314, empty_Array, empty_Array, PThreadedCode17315, 1, PSend17323);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod17313, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_aliasArguments_() {
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Array PArray17325 = new_Array_with(1, (Optr)VAR_aMessage_0_0);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray17328 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17330 = new_Send((Optr)PParameterAlias_classReference, SMB_alias_, 1, (Optr)VAR_arg_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17331 = new_Send((Optr)PSend17330, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend17332 = new_Send((Optr)VAR_aMessage_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend17331);
    Array PThreadedCode17329 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send1, (Optr)PSend17330, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17331, (Optr)&t_send2, (Optr)PSend17332, (Optr)&t_method_return);
    Block PBlock17327 = new_Block_with(PArray17328, empty_Array, PThreadedCode17329, 1, PSend17332);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend17333 = new_Send((Optr)VAR_aMessage_0_0, SMB_withIndexDo_, 1, (Optr)PBlock17327);
    Array PThreadedCode17326 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_closure, (Optr)PBlock17327, (Optr)&t_send1, (Optr)PSend17333, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17324 = new_Method_with(PArray17325, empty_Array, empty_Array, PThreadedCode17326, 2, PSend17333, self);
    
    MethodClosure MC_SMB_aliasArguments_ = new_MethodClosure((Method)PMethod17324, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_aliasArguments_, MC_SMB_aliasArguments_);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray17335 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17338 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend17340 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17341 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)PSend17340);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17342 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17339 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend17340, (Optr)&t_send1, (Optr)PSend17341, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17342, (Optr)&t_method_return);
    Block PBlock17337 = new_Block_with(PArray17338, empty_Array, PThreadedCode17339, 2, PSend17341, PSend17342);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17343 = new_Send((Optr)PLiteralAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17344 = new_Send((Optr)PBlock17337, SMB_value_, 1, (Optr)PSend17343);
    Array PThreadedCode17336 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock17337, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send0, (Optr)PSend17343, (Optr)&t_send1, (Optr)PSend17344, (Optr)&t_method_return);
    Method PMethod17334 = new_Method_with(PArray17335, empty_Array, empty_Array, PThreadedCode17336, 1, PSend17344);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod17334, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_recursiveDoesNotUnderstand_on_() {
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray17346 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    String string_17348 = new_String(L"Recursive doesNotUnderstand: ");
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend17349 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend17350 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)PSend17349);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend17351 = new_Send((Optr)PSend17350, SMB_name, 0);
    Constant string_17348_Const = new_Constant((Optr)string_17348);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend17352 = new_Send((Optr)string_17348_Const, SMB__append_, 1, (Optr)PSend17351);
    String string_17353 = new_String(L">>");
    Constant string_17353_Const = new_Constant((Optr)string_17353);
    // ,. 
    Send PSend17354 = new_Send((Optr)PSend17352, SMB__append_, 1, (Optr)string_17353_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend17355 = new_Send((Optr)VAR_aMessage_0_0, SMB_asString, 0);
    // ,. 
    Send PSend17356 = new_Send((Optr)PSend17354, SMB__append_, 1, (Optr)PSend17355);
    String string_17357 = new_String(L" in ");
    Constant string_17357_Const = new_Constant((Optr)string_17357);
    // ,. 
    Send PSend17358 = new_Send((Optr)PSend17356, SMB__append_, 1, (Optr)string_17357_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17359 = new_Send((Optr)self, SMB_class, 0);
    // name. 
    Send PSend17360 = new_Send((Optr)PSend17359, SMB_name, 0);
    // ,. 
    Send PSend17361 = new_Send((Optr)PSend17358, SMB__append_, 1, (Optr)PSend17360);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend17362 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend17361);
    Array PThreadedCode17347 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_17348, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17349, (Optr)&t_send1, (Optr)PSend17350, (Optr)&t_send0, (Optr)PSend17351, (Optr)&t_send1, (Optr)PSend17352, (Optr)&t_push1, (Optr)string_17353, (Optr)&t_send1, (Optr)PSend17354, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend17355, (Optr)&t_send1, (Optr)PSend17356, (Optr)&t_push1, (Optr)string_17357, (Optr)&t_send1, (Optr)PSend17358, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17359, (Optr)&t_send0, (Optr)PSend17360, (Optr)&t_send1, (Optr)PSend17361, (Optr)&t_send1, (Optr)PSend17362, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17345 = new_Method_with(PArray17346, empty_Array, empty_Array, PThreadedCode17347, 2, PSend17362, self);
    
    MethodClosure MC_SMB_recursiveDoesNotUnderstand_on_ = new_MethodClosure((Method)PMethod17345, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_recursiveDoesNotUnderstand_on_, MC_SMB_recursiveDoesNotUnderstand_on_);
}


static void init_SMB_currentUnwrappedSelf() {
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17365 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend17366 = new_Send((Optr)PSend17365, SMB_receiver, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17367 = new_Send((Optr)PSend17366, SMB_value, 0);
    Array PThreadedCode17364 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17365, (Optr)&t_send0, (Optr)PSend17366, (Optr)&t_send0, (Optr)PSend17367, (Optr)&t_method_return);
    Method PMethod17363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17364, 1, PSend17367);
    
    MethodClosure MC_SMB_currentUnwrappedSelf = new_MethodClosure((Method)PMethod17363, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_currentUnwrappedSelf, MC_SMB_currentUnwrappedSelf);
}


static void init_SMB_assignUnsintSlot_to_() {
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Variable VAR_anAlias_0_1 = new_Variable_named(L"anAlias", 0);
    Array PArray17369 = new_Array_with(2, (Optr)VAR_anSlot_0_0, (Optr)VAR_anAlias_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17371 = new_Send((Optr)VAR_anAlias_0_1, SMB_value, 0);
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17372 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend17373 = new_Send((Optr)VAR_anSlot_0_0, SMB_assign_on_, 2, (Optr)PSend17371, (Optr)PSend17372);
    Array PThreadedCode17370 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_1, (Optr)&t_send0, (Optr)PSend17371, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17372, (Optr)&t_send2, (Optr)PSend17373, (Optr)&t_method_return);
    Method PMethod17368 = new_Method_with(PArray17369, empty_Array, empty_Array, PThreadedCode17370, 1, PSend17373);
    
    MethodClosure MC_SMB_assignUnsintSlot_to_ = new_MethodClosure((Method)PMethod17368, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_assignUnsintSlot_to_, MC_SMB_assignUnsintSlot_to_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_aSend_0_3 = new_Variable_named(L"aSend", 0);
    Array PArray17375 = new_Array_with(4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    // aliasArguments:. 
    Send PSend17377 = new_Send((Optr)self, SMB_aliasArguments_, 1, (Optr)VAR_aMessage_0_0);
    Super PSuper17378 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Array PThreadedCode17376 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend17377, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_super4, (Optr)PSuper17378, (Optr)&t_method_return);
    Method PMethod17374 = new_Method_with(PArray17375, empty_Array, empty_Array, PThreadedCode17376, 2, PSend17377, PSuper17378);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod17374, Interpretation_AliasInterpreter_Class);
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