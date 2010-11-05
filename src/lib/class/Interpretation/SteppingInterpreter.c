#include <lib/class/Interpretation/SteppingInterpreter.h>


Optr layout_Interpretation_SteppingInterpreter_Class_class;
Optr slot_Interpretation_SteppingInterpreter_stepBlock;
Optr layout_Interpretation_SteppingInterpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray16357 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Super PSuper16361 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode16360 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper16361, (Optr)&t_block_return);
    Block PBlock16359 = new_Block_with(empty_Array, empty_Array, PThreadedCode16360, 1, PSuper16361);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16362 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16359);
    Array PThreadedCode16358 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16359, (Optr)&t_send4, (Optr)PSend16362, (Optr)&t_method_return);
    Method PMethod16356 = new_Method_with(PArray16357, empty_Array, empty_Array, PThreadedCode16358, 1, PSend16362);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16356, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_stepBlock() {
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    Array PThreadedCode16364 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_method_return);
    Method PMethod16363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16364, 1, slot_Interpretation_SteppingInterpreter_stepBlock);
    
    MethodClosure MC_SMB_stepBlock = new_MethodClosure((Method)PMethod16363, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_stepBlock, MC_SMB_stepBlock);
}


static void init_SMB_checkStep_class_message_do_() {
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray16366 = new_Array_with(4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    // value:value:value:value:. 
    Send PSend16368 = new_Send((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, SMB_value_value_value_value_, 4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Array PThreadedCode16367 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send4, (Optr)PSend16368, (Optr)&t_method_return);
    Method PMethod16365 = new_Method_with(PArray16366, empty_Array, empty_Array, PThreadedCode16367, 1, PSend16368);
    
    MethodClosure MC_SMB_checkStep_class_message_do_ = new_MethodClosure((Method)PMethod16365, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_checkStep_class_message_do_, MC_SMB_checkStep_class_message_do_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_aMessage_1_2 = new_Variable_named(L"aMessage", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16372 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_aMessage_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16374 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16373 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16374, (Optr)&t_method_return);
    Block PBlock16371 = new_Block_with(PArray16372, empty_Array, PThreadedCode16373, 1, PSend16374);
    Array PThreadedCode16370 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16371, (Optr)&t_method_return);
    Method PMethod16369 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16370, 1, PBlock16371);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16369, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16377 = new_Super(SMB_initialize, 0);
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    // defaultStepBlock. 
    Send PSend16379 = new_Send((Optr)self, SMB_defaultStepBlock, 0);
    Assign PAssign16378 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16379);
    Array PThreadedCode16376 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16377, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16378, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16379, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16375 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16376, 3, PSuper16377, PAssign16378, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16375, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_stepBlock_() {
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray16381 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign16383 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16382 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16383, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16380 = new_Method_with(PArray16381, empty_Array, empty_Array, PThreadedCode16382, 2, PAssign16383, self);
    
    MethodClosure MC_SMB_stepBlock_ = new_MethodClosure((Method)PMethod16380, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_stepBlock_, MC_SMB_stepBlock_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray16385 = new_Array_with(4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Super PSuper16389 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Array PThreadedCode16388 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_super4, (Optr)PSuper16389, (Optr)&t_block_return);
    Block PBlock16387 = new_Block_with(empty_Array, empty_Array, PThreadedCode16388, 1, PSuper16389);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16390 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16387);
    Array PThreadedCode16386 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16387, (Optr)&t_send4, (Optr)PSend16390, (Optr)&t_method_return);
    Method PMethod16384 = new_Method_with(PArray16385, empty_Array, empty_Array, PThreadedCode16386, 1, PSend16390);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16384, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_send_to_class_for_, MC_SMB_send_to_class_for_);
}

void init_Interpretation_PSteppingInterpreter_layout() {
    layout_Interpretation_SteppingInterpreter_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_SteppingInterpreter_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_SteppingInterpreter_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_SteppingInterpreter_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_SteppingInterpreter_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_SteppingInterpreter_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_SteppingInterpreter = new_Symbol(L"SteppingInterpreter");
    slot_Interpretation_SteppingInterpreter_stepBlock = (Optr)new_Slot(2, L"stepBlock");
    layout_Interpretation_SteppingInterpreter = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Interpretation_SteppingInterpreter)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_SteppingInterpreter)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    ((Array)layout_Interpretation_SteppingInterpreter)->values[2] = slot_Interpretation_SteppingInterpreter_stepBlock; // stepBlock 
    Interpretation_SteppingInterpreter_Class = (Class)new_Class(Interpretation_Interpreter_Class, layout_Interpretation_SteppingInterpreter_Class_class);
    Interpretation_SteppingInterpreter_Class->layout = layout_Interpretation_SteppingInterpreter;
    Interpretation_SteppingInterpreter_Class->name = SMB_SteppingInterpreter;
    
}

void init_Interpretation_PSteppingInterpreter_methods() {
    init_SMB_send_to_class_();
    init_SMB_stepBlock();
    init_SMB_checkStep_class_message_do_();
    init_SMB_defaultStepBlock();
    init_SMB_initialize();
    init_SMB_stepBlock_();
    init_SMB_send_to_class_for_();
    
}