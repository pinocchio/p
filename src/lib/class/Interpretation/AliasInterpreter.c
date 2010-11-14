#include <lib/class/Interpretation/AliasInterpreter.h>


Optr layout_Interpretation_AliasInterpreter_Class_class;
Optr layout_Interpretation_AliasInterpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray17142 = new_Array_with(3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    // aliasArguments:. 
    Send PSend17144 = new_Send((Optr)self, SMB_aliasArguments_, 1, (Optr)VAR_aMessage_0_0);
    Super PSuper17145 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode17143 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend17144, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper17145, (Optr)&t_method_return);
    Method PMethod17141 = new_Method_with(PArray17142, empty_Array, empty_Array, PThreadedCode17143, 2, PSend17144, PSuper17145);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod17141, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_blockclosureValue_message_() {
    Symbol SMB_blockclosureValue_message_ = new_Symbol(L"blockclosureValue:message:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray17147 = new_Array_with(2, (Optr)VAR_aBlockClosure_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17149 = new_Send((Optr)VAR_aBlockClosure_0_0, SMB_value, 0);
    Super PSuper17150 = new_Super(SMB_blockclosureValue_message_, 2, (Optr)PSend17149, (Optr)VAR_aMessage_0_1);
    Array PThreadedCode17148 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlockClosure_0_0, (Optr)&t_send0, (Optr)PSend17149, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_super2, (Optr)PSuper17150, (Optr)&t_method_return);
    Method PMethod17146 = new_Method_with(PArray17147, empty_Array, empty_Array, PThreadedCode17148, 1, PSuper17150);
    
    MethodClosure MC_SMB_blockclosureValue_message_ = new_MethodClosure((Method)PMethod17146, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_blockclosureValue_message_, MC_SMB_blockclosureValue_message_);
}


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray17152 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17154 = new_Send((Optr)PMessage_classReference, SMB_new, 0);
    Symbol  SMB_value = new_Symbol(L"value");
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    Constant SMB_value_Const = new_Constant((Optr)SMB_value);
    // selector:. 
    Send PSend17155 = new_Send((Optr)PSend17154, SMB_selector_, 1, (Optr)SMB_value_Const);
    Symbol SMB_asAliased = new_Symbol(L"asAliased");
    // asAliased. 
    Send PSend17156 = new_Send((Optr)VAR_aClosure_0_0, SMB_asAliased, 0);
    Symbol SMB_send_to_ = new_Symbol(L"send:to:");
    // send:to:. 
    Send PSend17157 = new_Send((Optr)self, SMB_send_to_, 2, (Optr)PSend17155, (Optr)PSend17156);
    Array PThreadedCode17153 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_send0, (Optr)PSend17154, (Optr)&t_push1, (Optr)SMB_value, (Optr)&t_send1, (Optr)PSend17155, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send0, (Optr)PSend17156, (Optr)&t_send2, (Optr)PSend17157, (Optr)&t_method_return);
    Method PMethod17151 = new_Method_with(PArray17152, empty_Array, empty_Array, PThreadedCode17153, 1, PSend17157);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod17151, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_continueEscape_message_() {
    Symbol SMB_continueEscape_message_ = new_Symbol(L"continueEscape:message:");
    Variable VAR_aContinuation_0_0 = new_Variable_named(L"aContinuation", 0);
    Variable VAR_aMessage_0_1 = new_Variable_named(L"aMessage", 0);
    Array PArray17159 = new_Array_with(2, (Optr)VAR_aContinuation_0_0, (Optr)VAR_aMessage_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17161 = new_Send((Optr)VAR_aContinuation_0_0, SMB_value, 0);
    Super PSuper17162 = new_Super(SMB_continueEscape_message_, 2, (Optr)PSend17161, (Optr)VAR_aMessage_0_1);
    Array PThreadedCode17160 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aContinuation_0_0, (Optr)&t_send0, (Optr)PSend17161, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_1, (Optr)&t_super2, (Optr)PSuper17162, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17158 = new_Method_with(PArray17159, empty_Array, empty_Array, PThreadedCode17160, 2, PSuper17162, self);
    
    MethodClosure MC_SMB_continueEscape_message_ = new_MethodClosure((Method)PMethod17158, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_continueEscape_message_, MC_SMB_continueEscape_message_);
}


static void init_SMB_invokeNativeMethod_on_message_() {
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Array PArray17164 = new_Array_with(3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Variable VAR_unwrappedMessage_0_3 = new_Variable_named(L"unwrappedMessage", 0);
    Variable VAR_result_0_4 = new_Variable_named(L"result", 0);
    Array PArray17165 = new_Array_with(2, (Optr)VAR_unwrappedMessage_0_3, (Optr)VAR_result_0_4);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17168 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17172 = new_Send((Optr)VAR_aMessage_0_2, SMB_size, 0);
    // new:. 
    Send PSend17171 = new_Send((Optr)PMessage_classReference, SMB_new_, 1, (Optr)PSend17172);
    Assign PAssign17170 = new_Assign((Optr)VAR_unwrappedMessage_0_3, (Optr)PSend17171);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17173 = new_Send((Optr)VAR_aMessage_0_2, SMB_selector, 0);
    Symbol SMB_selector_ = new_Symbol(L"selector:");
    // selector:. 
    Send PSend17174 = new_Send((Optr)VAR_unwrappedMessage_0_3, SMB_selector_, 1, (Optr)PSend17173);
    Variable VAR_arg_2_0 = new_Variable_named(L"arg", 2);
    Variable VAR_index_2_1 = new_Variable_named(L"index", 2);
    Array PArray17176 = new_Array_with(2, (Optr)VAR_arg_2_0, (Optr)VAR_index_2_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17178 = new_Send((Optr)VAR_arg_2_0, SMB_value, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend17179 = new_Send((Optr)VAR_unwrappedMessage_0_3, SMB_at_put_, 2, (Optr)VAR_index_2_1, (Optr)PSend17178);
    Array PThreadedCode17177 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_variable, (Optr)VAR_index_2_1, (Optr)&t_push_variable, (Optr)VAR_arg_2_0, (Optr)&t_send0, (Optr)PSend17178, (Optr)&t_send2, (Optr)PSend17179, (Optr)&t_method_return);
    Block PBlock17175 = new_Block_with(PArray17176, empty_Array, PThreadedCode17177, 1, PSend17179);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend17180 = new_Send((Optr)VAR_aMessage_0_2, SMB_withIndexDo_, 1, (Optr)PBlock17175);
    Variable VAR__receiver__2_0 = new_Variable_named(L"_receiver_", 2);
    Array PArray17184 = new_Array_with(1, (Optr)VAR__receiver__2_0);
    Symbol SMB_receiver_ = new_Symbol(L"receiver:");
    // receiver:. 
    Send PSend17186 = new_Send((Optr)VAR__receiver__2_0, SMB_receiver_, 1, (Optr)VAR_receiver_0_1);
    Symbol SMB_message_ = new_Symbol(L"message:");
    // message:. 
    Send PSend17187 = new_Send((Optr)VAR__receiver__2_0, SMB_message_, 1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_closure_ = new_Symbol(L"closure:");
    // closure:. 
    Send PSend17188 = new_Send((Optr)VAR__receiver__2_0, SMB_closure_, 1, (Optr)VAR_aClosure_0_0);
    Symbol SMB_returnContext_ = new_Symbol(L"returnContext:");
    // returnContext:. 
    Send PSend17189 = new_Send((Optr)VAR__receiver__2_0, SMB_returnContext_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17185 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send1, (Optr)PSend17186, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send1, (Optr)PSend17187, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_send1, (Optr)PSend17188, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__2_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17189, (Optr)&t_method_return);
    Block PBlock17183 = new_Block_with(PArray17184, empty_Array, PThreadedCode17185, 4, PSend17186, PSend17187, PSend17188, PSend17189);
    Symbol SMB_value_ = new_Symbol(L"value:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17190 = new_Send((Optr)PNativeMethodContext_classReference, SMB_new, 0);
    // value:. 
    Send PSend17182 = new_Send((Optr)PBlock17183, SMB_value_, 1, (Optr)PSend17190);
    Assign PAssign17181 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17182);
    Symbol SMB_invokeNativeMethod_on_message_alternative_ = new_Symbol(L"invokeNativeMethod:on:message:alternative:");
    // value. 
    Send PSend17193 = new_Send((Optr)VAR_receiver_0_1, SMB_value, 0);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend17197 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign17196 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17197);
    Symbol SMB_invokeMethod_on_message_ = new_Symbol(L"invokeMethod:on:message:");
    // invokeMethod:on:message:. 
    Send PSend17198 = new_Send((Optr)self, SMB_invokeMethod_on_message_, 3, (Optr)VAR_aClosure_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_aMessage_0_2);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17199 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17198);
    Array PThreadedCode17195 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign17196, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17197, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send3, (Optr)PSend17198, (Optr)&t_send1, (Optr)PSend17199, (Optr)&t_block_return);
    Block PBlock17194 = new_Block_with(empty_Array, empty_Array, PThreadedCode17195, 2, PAssign17196, PSend17199);
    Super PSuper17192 = new_Super(SMB_invokeNativeMethod_on_message_alternative_, 4, (Optr)VAR_aClosure_0_0, (Optr)PSend17193, (Optr)VAR_unwrappedMessage_0_3, (Optr)PBlock17194);
    Assign PAssign17191 = new_Assign((Optr)VAR_result_0_4, (Optr)PSuper17192);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend17201 = new_Send((Optr)VAR_result_0_4, SMB_asAllocationAlias_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Assign PAssign17200 = new_Assign((Optr)VAR_result_0_4, (Optr)PSend17201);
    // returnContext. 
    Send PSend17203 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_returnContext, 0);
    Assign PAssign17202 = new_Assign((Optr)slot_Interpretation_Interpreter_context, (Optr)PSend17203);
    Array PThreadedCode17169 = instantiate_Array_with(ThreadedCode_Class, 0, 78, (Optr)&t_push1, (Optr)PAssign17170, (Optr)&t_push_class_reference, (Optr)PMessage_classReference, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend17172, (Optr)&t_send1, (Optr)PSend17171, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_send0, (Optr)PSend17173, (Optr)&t_send1, (Optr)PSend17174, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_closure, (Optr)PBlock17175, (Optr)&t_send1, (Optr)PSend17180, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17181, (Optr)&t_push_closure, (Optr)PBlock17183, (Optr)&t_push_class_reference, (Optr)PNativeMethodContext_classReference, (Optr)&t_send0, (Optr)PSend17190, (Optr)&t_send1, (Optr)PSend17182, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17191, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_send0, (Optr)PSend17193, (Optr)&t_push_variable, (Optr)VAR_unwrappedMessage_0_3, (Optr)&t_push_closure, (Optr)PBlock17194, (Optr)&t_super4, (Optr)PSuper17192, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17200, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17201, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17202, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17203, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_4, (Optr)&t_method_return);
    Block PBlock17167 = new_Block_with(PArray17168, empty_Array, PThreadedCode17169, 8, PAssign17170, PSend17174, PSend17180, PAssign17181, PAssign17191, PAssign17200, PAssign17202, VAR_result_0_4);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17204 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17167);
    Array PThreadedCode17166 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17167, (Optr)&t_send1, (Optr)PSend17204, (Optr)&t_method_return);
    Method PMethod17163 = new_Method_with(PArray17164, PArray17165, empty_Array, PThreadedCode17166, 1, PSend17204);
    
    MethodClosure MC_SMB_invokeNativeMethod_on_message_ = new_MethodClosure((Method)PMethod17163, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_invokeNativeMethod_on_message_, MC_SMB_invokeNativeMethod_on_message_);
}


static void init_SMB_interpretMethod_() {
    Symbol SMB_interpretMethod_ = new_Symbol(L"interpretMethod:");
    Variable VAR_aMethod_0_0 = new_Variable_named(L"aMethod", 0);
    Array PArray17206 = new_Array_with(1, (Optr)VAR_aMethod_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17207 = new_Array_with(1, (Optr)VAR_result_0_1);
    Super PSuper17210 = new_Super(SMB_interpretMethod_, 1, (Optr)VAR_aMethod_0_0);
    Assign PAssign17209 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper17210);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17211 = new_Send((Optr)PReturnAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17212 = new_Send((Optr)PSend17211, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17208 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17209, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMethod_0_0, (Optr)&t_super1, (Optr)PSuper17210, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17211, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17212, (Optr)&t_method_return);
    Method PMethod17205 = new_Method_with(PArray17206, PArray17207, empty_Array, PThreadedCode17208, 2, PAssign17209, PSend17212);
    
    MethodClosure MC_SMB_interpretMethod_ = new_MethodClosure((Method)PMethod17205, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpretMethod_, MC_SMB_interpretMethod_);
}


static void init_SMB_assignSlot_to_() {
    Symbol SMB_assignSlot_to_ = new_Symbol(L"assignSlot:to:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Variable VAR_anAlias_0_1 = new_Variable_named(L"anAlias", 0);
    Array PArray17214 = new_Array_with(2, (Optr)VAR_anSlot_0_0, (Optr)VAR_anAlias_0_1);
    Variable VAR_alias_0_2 = new_Variable_named(L"alias", 0);
    Array PArray17215 = new_Array_with(1, (Optr)VAR_alias_0_2);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17218 = new_Send((Optr)PFieldWriteAlias_classReference, SMB_alias_, 1, (Optr)VAR_anAlias_0_1);
    Assign PAssign17217 = new_Assign((Optr)VAR_alias_0_2, (Optr)PSend17218);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17219 = new_Send((Optr)VAR_alias_0_2, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17220 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    // readFrom:. 
    Send PSend17221 = new_Send((Optr)VAR_anSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17220);
    Symbol SMB_predecessor_ = new_Symbol(L"predecessor:");
    // predecessor:. 
    Send PSend17222 = new_Send((Optr)VAR_alias_0_2, SMB_predecessor_, 1, (Optr)PSend17221);
    // currentUnwrappedSelf. 
    Send PSend17223 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend17224 = new_Send((Optr)VAR_anSlot_0_0, SMB_assign_on_, 2, (Optr)VAR_alias_0_2, (Optr)PSend17223);
    Array PThreadedCode17216 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign17217, (Optr)&t_push_class_reference, (Optr)PFieldWriteAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_1, (Optr)&t_send1, (Optr)PSend17218, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17219, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17220, (Optr)&t_send1, (Optr)PSend17221, (Optr)&t_send1, (Optr)PSend17222, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_alias_0_2, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17223, (Optr)&t_send2, (Optr)PSend17224, (Optr)&t_method_return);
    Method PMethod17213 = new_Method_with(PArray17214, PArray17215, empty_Array, PThreadedCode17216, 4, PAssign17217, PSend17219, PSend17222, PSend17224);
    
    MethodClosure MC_SMB_assignSlot_to_ = new_MethodClosure((Method)PMethod17213, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_assignSlot_to_, MC_SMB_assignSlot_to_);
}


static void init_SMB_interpretBlock_() {
    Symbol SMB_interpretBlock_ = new_Symbol(L"interpretBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray17226 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17227 = new_Array_with(1, (Optr)VAR_result_0_1);
    Super PSuper17230 = new_Super(SMB_interpretBlock_, 1, (Optr)VAR_aBlock_0_0);
    Assign PAssign17229 = new_Assign((Optr)VAR_result_0_1, (Optr)PSuper17230);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17231 = new_Send((Optr)PReturnAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17232 = new_Send((Optr)PSend17231, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17228 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17229, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_super1, (Optr)PSuper17230, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PReturnAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17231, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17232, (Optr)&t_method_return);
    Method PMethod17225 = new_Method_with(PArray17226, PArray17227, empty_Array, PThreadedCode17228, 2, PAssign17229, PSend17232);
    
    MethodClosure MC_SMB_interpretBlock_ = new_MethodClosure((Method)PMethod17225, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_interpretBlock_, MC_SMB_interpretBlock_);
}


static void init_SMB_visitUnsintSlot_() {
    Symbol SMB_visitUnsintSlot_ = new_Symbol(L"visitUnsintSlot:");
    Variable VAR_anUnsintSlot_0_0 = new_Variable_named(L"anUnsintSlot", 0);
    Array PArray17234 = new_Array_with(1, (Optr)VAR_anUnsintSlot_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17235 = new_Array_with(1, (Optr)VAR_result_0_1);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17239 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    // readFrom:. 
    Send PSend17238 = new_Send((Optr)VAR_anUnsintSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17239);
    Assign PAssign17237 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend17238);
    Symbol SMB_asAllocationAlias_ = new_Symbol(L"asAllocationAlias:");
    // asAllocationAlias:. 
    Send PSend17240 = new_Send((Optr)VAR_result_0_1, SMB_asAllocationAlias_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17236 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17237, (Optr)&t_push_variable, (Optr)VAR_anUnsintSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17239, (Optr)&t_send1, (Optr)PSend17238, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17240, (Optr)&t_method_return);
    Method PMethod17233 = new_Method_with(PArray17234, PArray17235, empty_Array, PThreadedCode17236, 2, PAssign17237, PSend17240);
    
    MethodClosure MC_SMB_visitUnsintSlot_ = new_MethodClosure((Method)PMethod17233, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitUnsintSlot_, MC_SMB_visitUnsintSlot_);
}


static void init_SMB_continueOn_message_() {
    Symbol SMB_continueOn_message_ = new_Symbol(L"continueOn:message:");
    Variable VAR_class_0_0 = new_Variable_named(L"class", 0);
    Variable VAR_message_0_1 = new_Variable_named(L"message", 0);
    Array PArray17242 = new_Array_with(2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray17243 = new_Array_with(1, (Optr)VAR_result_0_2);
    Super PSuper17246 = new_Super(SMB_continueOn_message_, 2, (Optr)VAR_class_0_0, (Optr)VAR_message_0_1);
    Assign PAssign17245 = new_Assign((Optr)VAR_result_0_2, (Optr)PSuper17246);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17248 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17250 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_result_0_2);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17251 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17249 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_send1, (Optr)PSend17250, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17251, (Optr)&t_method_return);
    Block PBlock17247 = new_Block_with(PArray17248, empty_Array, PThreadedCode17249, 2, PSend17250, PSend17251);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17252 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17253 = new_Send((Optr)PBlock17247, SMB_value_, 1, (Optr)PSend17252);
    Array PThreadedCode17244 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17245, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_class_0_0, (Optr)&t_push_variable, (Optr)VAR_message_0_1, (Optr)&t_super2, (Optr)PSuper17246, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17247, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend17252, (Optr)&t_send1, (Optr)PSend17253, (Optr)&t_method_return);
    Method PMethod17241 = new_Method_with(PArray17242, PArray17243, empty_Array, PThreadedCode17244, 2, PAssign17245, PSend17253);
    
    MethodClosure MC_SMB_continueOn_message_ = new_MethodClosure((Method)PMethod17241, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_continueOn_message_, MC_SMB_continueOn_message_);
}


static void init_SMB_visitBlock_() {
    Symbol SMB_visitBlock_ = new_Symbol(L"visitBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray17255 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_closure_0_1 = new_Variable_named(L"closure", 0);
    Array PArray17256 = new_Array_with(1, (Optr)VAR_closure_0_1);
    Super PSuper17259 = new_Super(SMB_visitBlock_, 1, (Optr)VAR_aBlock_0_0);
    Assign PAssign17258 = new_Assign((Optr)VAR_closure_0_1, (Optr)PSuper17259);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17261 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17263 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)VAR_closure_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17264 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17262 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_1, (Optr)&t_send1, (Optr)PSend17263, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17264, (Optr)&t_method_return);
    Block PBlock17260 = new_Block_with(PArray17261, empty_Array, PThreadedCode17262, 2, PSend17263, PSend17264);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17265 = new_Send((Optr)PAllocationAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17266 = new_Send((Optr)PBlock17260, SMB_value_, 1, (Optr)PSend17265);
    Array PThreadedCode17257 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign17258, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_super1, (Optr)PSuper17259, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17260, (Optr)&t_push_class_reference, (Optr)PAllocationAlias_classReference, (Optr)&t_send0, (Optr)PSend17265, (Optr)&t_send1, (Optr)PSend17266, (Optr)&t_method_return);
    Method PMethod17254 = new_Method_with(PArray17255, PArray17256, empty_Array, PThreadedCode17257, 2, PAssign17258, PSend17266);
    
    MethodClosure MC_SMB_visitBlock_ = new_MethodClosure((Method)PMethod17254, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitBlock_, MC_SMB_visitBlock_);
}


static void init_SMB_visitSlot_() {
    Symbol SMB_visitSlot_ = new_Symbol(L"visitSlot:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Array PArray17268 = new_Array_with(1, (Optr)VAR_anSlot_0_0);
    Variable VAR_result_0_1 = new_Variable_named(L"result", 0);
    Array PArray17269 = new_Array_with(1, (Optr)VAR_result_0_1);
    Symbol SMB_readFrom_ = new_Symbol(L"readFrom:");
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17273 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    // readFrom:. 
    Send PSend17272 = new_Send((Optr)VAR_anSlot_0_0, SMB_readFrom_, 1, (Optr)PSend17273);
    Assign PAssign17271 = new_Assign((Optr)VAR_result_0_1, (Optr)PSend17272);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17274 = new_Send((Optr)PFieldReadAlias_classReference, SMB_alias_, 1, (Optr)VAR_result_0_1);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17275 = new_Send((Optr)PSend17274, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17270 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign17271, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17273, (Optr)&t_send1, (Optr)PSend17272, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFieldReadAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_result_0_1, (Optr)&t_send1, (Optr)PSend17274, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17275, (Optr)&t_method_return);
    Method PMethod17267 = new_Method_with(PArray17268, PArray17269, empty_Array, PThreadedCode17270, 2, PAssign17271, PSend17275);
    
    MethodClosure MC_SMB_visitSlot_ = new_MethodClosure((Method)PMethod17267, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitSlot_, MC_SMB_visitSlot_);
}


static void init_SMB_classOf_() {
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    Variable VAR_anAlias_0_0 = new_Variable_named(L"anAlias", 0);
    Array PArray17277 = new_Array_with(1, (Optr)VAR_anAlias_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17279 = new_Send((Optr)VAR_anAlias_0_0, SMB_value, 0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17280 = new_Send((Optr)PSend17279, SMB_class, 0);
    Array PThreadedCode17278 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_0, (Optr)&t_send0, (Optr)PSend17279, (Optr)&t_send0, (Optr)PSend17280, (Optr)&t_method_return);
    Method PMethod17276 = new_Method_with(PArray17277, empty_Array, empty_Array, PThreadedCode17278, 1, PSend17280);
    
    MethodClosure MC_SMB_classOf_ = new_MethodClosure((Method)PMethod17276, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_classOf_, MC_SMB_classOf_);
}


static void init_SMB_visitClassReference_() {
    Symbol SMB_visitClassReference_ = new_Symbol(L"visitClassReference:");
    Variable VAR_aClassReference_0_0 = new_Variable_named(L"aClassReference", 0);
    Array PArray17282 = new_Array_with(1, (Optr)VAR_aClassReference_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17285 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pclass = new_Symbol(L"pclass");
    // pclass. 
    Send PSend17287 = new_Send((Optr)VAR_aClassReference_0_0, SMB_pclass, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17288 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)PSend17287);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17289 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17286 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aClassReference_0_0, (Optr)&t_send0, (Optr)PSend17287, (Optr)&t_send1, (Optr)PSend17288, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17289, (Optr)&t_method_return);
    Block PBlock17284 = new_Block_with(PArray17285, empty_Array, PThreadedCode17286, 2, PSend17288, PSend17289);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17290 = new_Send((Optr)PLiteralAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17291 = new_Send((Optr)PBlock17284, SMB_value_, 1, (Optr)PSend17290);
    Array PThreadedCode17283 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock17284, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send0, (Optr)PSend17290, (Optr)&t_send1, (Optr)PSend17291, (Optr)&t_method_return);
    Method PMethod17281 = new_Method_with(PArray17282, empty_Array, empty_Array, PThreadedCode17283, 1, PSend17291);
    
    MethodClosure MC_SMB_visitClassReference_ = new_MethodClosure((Method)PMethod17281, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitClassReference_, MC_SMB_visitClassReference_);
}


static void init_SMB_aliasArguments_() {
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Array PArray17293 = new_Array_with(1, (Optr)VAR_aMessage_0_0);
    Variable VAR_arg_1_0 = new_Variable_named(L"arg", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray17296 = new_Array_with(2, (Optr)VAR_arg_1_0, (Optr)VAR_index_1_1);
    Symbol SMB_alias_ = new_Symbol(L"alias:");
    // alias:. 
    Send PSend17298 = new_Send((Optr)PParameterAlias_classReference, SMB_alias_, 1, (Optr)VAR_arg_1_0);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17299 = new_Send((Optr)PSend17298, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend17300 = new_Send((Optr)VAR_aMessage_0_0, SMB_at_put_, 2, (Optr)VAR_index_1_1, (Optr)PSend17299);
    Array PThreadedCode17297 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_class_reference, (Optr)PParameterAlias_classReference, (Optr)&t_push_variable, (Optr)VAR_arg_1_0, (Optr)&t_send1, (Optr)PSend17298, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17299, (Optr)&t_send2, (Optr)PSend17300, (Optr)&t_method_return);
    Block PBlock17295 = new_Block_with(PArray17296, empty_Array, PThreadedCode17297, 1, PSend17300);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend17301 = new_Send((Optr)VAR_aMessage_0_0, SMB_withIndexDo_, 1, (Optr)PBlock17295);
    Array PThreadedCode17294 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_closure, (Optr)PBlock17295, (Optr)&t_send1, (Optr)PSend17301, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17292 = new_Method_with(PArray17293, empty_Array, empty_Array, PThreadedCode17294, 2, PSend17301, self);
    
    MethodClosure MC_SMB_aliasArguments_ = new_MethodClosure((Method)PMethod17292, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_aliasArguments_, MC_SMB_aliasArguments_);
}


static void init_SMB_visitConstant_() {
    Symbol SMB_visitConstant_ = new_Symbol(L"visitConstant:");
    Variable VAR_aConstant_0_0 = new_Variable_named(L"aConstant", 0);
    Array PArray17303 = new_Array_with(1, (Optr)VAR_aConstant_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17306 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_constant = new_Symbol(L"constant");
    // constant. 
    Send PSend17308 = new_Send((Optr)VAR_aConstant_0_0, SMB_constant, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17309 = new_Send((Optr)VAR__receiver__1_0, SMB_value_, 1, (Optr)PSend17308);
    Symbol SMB_context_ = new_Symbol(L"context:");
    // context:. 
    Send PSend17310 = new_Send((Optr)VAR__receiver__1_0, SMB_context_, 1, (Optr)slot_Interpretation_Interpreter_context);
    Array PThreadedCode17307 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aConstant_0_0, (Optr)&t_send0, (Optr)PSend17308, (Optr)&t_send1, (Optr)PSend17309, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send1, (Optr)PSend17310, (Optr)&t_method_return);
    Block PBlock17305 = new_Block_with(PArray17306, empty_Array, PThreadedCode17307, 2, PSend17309, PSend17310);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17311 = new_Send((Optr)PLiteralAlias_classReference, SMB_new, 0);
    // value:. 
    Send PSend17312 = new_Send((Optr)PBlock17305, SMB_value_, 1, (Optr)PSend17311);
    Array PThreadedCode17304 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_closure, (Optr)PBlock17305, (Optr)&t_push_class_reference, (Optr)PLiteralAlias_classReference, (Optr)&t_send0, (Optr)PSend17311, (Optr)&t_send1, (Optr)PSend17312, (Optr)&t_method_return);
    Method PMethod17302 = new_Method_with(PArray17303, empty_Array, empty_Array, PThreadedCode17304, 1, PSend17312);
    
    MethodClosure MC_SMB_visitConstant_ = new_MethodClosure((Method)PMethod17302, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_visitConstant_, MC_SMB_visitConstant_);
}


static void init_SMB_recursiveDoesNotUnderstand_on_() {
    Symbol SMB_recursiveDoesNotUnderstand_on_ = new_Symbol(L"recursiveDoesNotUnderstand:on:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Array PArray17314 = new_Array_with(2, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1);
    String string_17316 = new_String(L"Recursive doesNotUnderstand: ");
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend17317 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_classOf_ = new_Symbol(L"classOf:");
    // classOf:. 
    Send PSend17318 = new_Send((Optr)self, SMB_classOf_, 1, (Optr)PSend17317);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend17319 = new_Send((Optr)PSend17318, SMB_name, 0);
    Constant string_17316_Const = new_Constant((Optr)string_17316);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend17320 = new_Send((Optr)string_17316_Const, SMB__append_, 1, (Optr)PSend17319);
    String string_17321 = new_String(L">>");
    Constant string_17321_Const = new_Constant((Optr)string_17321);
    // ,. 
    Send PSend17322 = new_Send((Optr)PSend17320, SMB__append_, 1, (Optr)string_17321_Const);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend17323 = new_Send((Optr)VAR_aMessage_0_0, SMB_asString, 0);
    // ,. 
    Send PSend17324 = new_Send((Optr)PSend17322, SMB__append_, 1, (Optr)PSend17323);
    String string_17325 = new_String(L" in ");
    Constant string_17325_Const = new_Constant((Optr)string_17325);
    // ,. 
    Send PSend17326 = new_Send((Optr)PSend17324, SMB__append_, 1, (Optr)string_17325_Const);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17327 = new_Send((Optr)self, SMB_class, 0);
    // name. 
    Send PSend17328 = new_Send((Optr)PSend17327, SMB_name, 0);
    // ,. 
    Send PSend17329 = new_Send((Optr)PSend17326, SMB__append_, 1, (Optr)PSend17328);
    Symbol SMB_error_ = new_Symbol(L"error:");
    // error:. 
    Send PSend17330 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend17329);
    Array PThreadedCode17315 = instantiate_Array_with(ThreadedCode_Class, 0, 38, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_17316, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17317, (Optr)&t_send1, (Optr)PSend17318, (Optr)&t_send0, (Optr)PSend17319, (Optr)&t_send1, (Optr)PSend17320, (Optr)&t_push1, (Optr)string_17321, (Optr)&t_send1, (Optr)PSend17322, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send0, (Optr)PSend17323, (Optr)&t_send1, (Optr)PSend17324, (Optr)&t_push1, (Optr)string_17325, (Optr)&t_send1, (Optr)PSend17326, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17327, (Optr)&t_send0, (Optr)PSend17328, (Optr)&t_send1, (Optr)PSend17329, (Optr)&t_send1, (Optr)PSend17330, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17313 = new_Method_with(PArray17314, empty_Array, empty_Array, PThreadedCode17315, 2, PSend17330, self);
    
    MethodClosure MC_SMB_recursiveDoesNotUnderstand_on_ = new_MethodClosure((Method)PMethod17313, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_recursiveDoesNotUnderstand_on_, MC_SMB_recursiveDoesNotUnderstand_on_);
}


static void init_SMB_currentUnwrappedSelf() {
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    Symbol SMB_homeContext = new_Symbol(L"homeContext");
    // homeContext. 
    Send PSend17333 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_homeContext, 0);
    Symbol SMB_receiver = new_Symbol(L"receiver");
    // receiver. 
    Send PSend17334 = new_Send((Optr)PSend17333, SMB_receiver, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17335 = new_Send((Optr)PSend17334, SMB_value, 0);
    Array PThreadedCode17332 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17333, (Optr)&t_send0, (Optr)PSend17334, (Optr)&t_send0, (Optr)PSend17335, (Optr)&t_method_return);
    Method PMethod17331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17332, 1, PSend17335);
    
    MethodClosure MC_SMB_currentUnwrappedSelf = new_MethodClosure((Method)PMethod17331, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_currentUnwrappedSelf, MC_SMB_currentUnwrappedSelf);
}


static void init_SMB_assignUnsintSlot_to_() {
    Symbol SMB_assignUnsintSlot_to_ = new_Symbol(L"assignUnsintSlot:to:");
    Variable VAR_anSlot_0_0 = new_Variable_named(L"anSlot", 0);
    Variable VAR_anAlias_0_1 = new_Variable_named(L"anAlias", 0);
    Array PArray17337 = new_Array_with(2, (Optr)VAR_anSlot_0_0, (Optr)VAR_anAlias_0_1);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17339 = new_Send((Optr)VAR_anAlias_0_1, SMB_value, 0);
    Symbol SMB_currentUnwrappedSelf = new_Symbol(L"currentUnwrappedSelf");
    // currentUnwrappedSelf. 
    Send PSend17340 = new_Send((Optr)self, SMB_currentUnwrappedSelf, 0);
    Symbol SMB_assign_on_ = new_Symbol(L"assign:on:");
    // assign:on:. 
    Send PSend17341 = new_Send((Optr)VAR_anSlot_0_0, SMB_assign_on_, 2, (Optr)PSend17339, (Optr)PSend17340);
    Array PThreadedCode17338 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR_anSlot_0_0, (Optr)&t_push_variable, (Optr)VAR_anAlias_0_1, (Optr)&t_send0, (Optr)PSend17339, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17340, (Optr)&t_send2, (Optr)PSend17341, (Optr)&t_method_return);
    Method PMethod17336 = new_Method_with(PArray17337, empty_Array, empty_Array, PThreadedCode17338, 1, PSend17341);
    
    MethodClosure MC_SMB_assignUnsintSlot_to_ = new_MethodClosure((Method)PMethod17336, Interpretation_AliasInterpreter_Class);
    store_method(Interpretation_AliasInterpreter_Class, SMB_assignUnsintSlot_to_, MC_SMB_assignUnsintSlot_to_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_aMessage_0_0 = new_Variable_named(L"aMessage", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_aSend_0_3 = new_Variable_named(L"aSend", 0);
    Array PArray17343 = new_Array_with(4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Symbol SMB_aliasArguments_ = new_Symbol(L"aliasArguments:");
    // aliasArguments:. 
    Send PSend17345 = new_Send((Optr)self, SMB_aliasArguments_, 1, (Optr)VAR_aMessage_0_0);
    Super PSuper17346 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_aMessage_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_aSend_0_3);
    Array PThreadedCode17344 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_send1, (Optr)PSend17345, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_aSend_0_3, (Optr)&t_super4, (Optr)PSuper17346, (Optr)&t_method_return);
    Method PMethod17342 = new_Method_with(PArray17343, empty_Array, empty_Array, PThreadedCode17344, 2, PSend17345, PSuper17346);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod17342, Interpretation_AliasInterpreter_Class);
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