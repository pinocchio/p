#include <lib/class/Interpretation/SteppingInterpreter.h>


Optr layout_Interpretation_SteppingInterpreter_Class_class;
Optr slot_Interpretation_SteppingInterpreter_stepBlock;
Optr layout_Interpretation_SteppingInterpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray16327 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Super PSuper16331 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode16330 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper16331, (Optr)&t_block_return);
    Block PBlock16329 = new_Block_with(empty_Array, empty_Array, PThreadedCode16330, 1, PSuper16331);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16332 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16329);
    Array PThreadedCode16328 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16329, (Optr)&t_send4, (Optr)PSend16332, (Optr)&t_method_return);
    Method PMethod16326 = new_Method_with(PArray16327, empty_Array, empty_Array, PThreadedCode16328, 1, PSend16332);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16326, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_stepBlock() {
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    Array PThreadedCode16334 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_method_return);
    Method PMethod16333 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16334, 1, slot_Interpretation_SteppingInterpreter_stepBlock);
    
    MethodClosure MC_SMB_stepBlock = new_MethodClosure((Method)PMethod16333, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_stepBlock, MC_SMB_stepBlock);
}


static void init_SMB_checkStep_class_message_do_() {
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray16336 = new_Array_with(4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    // value:value:value:value:. 
    Send PSend16338 = new_Send((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, SMB_value_value_value_value_, 4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Array PThreadedCode16337 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send4, (Optr)PSend16338, (Optr)&t_method_return);
    Method PMethod16335 = new_Method_with(PArray16336, empty_Array, empty_Array, PThreadedCode16337, 1, PSend16338);
    
    MethodClosure MC_SMB_checkStep_class_message_do_ = new_MethodClosure((Method)PMethod16335, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_checkStep_class_message_do_, MC_SMB_checkStep_class_message_do_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_aMessage_1_2 = new_Variable_named(L"aMessage", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16342 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_aMessage_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16344 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16343 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16344, (Optr)&t_method_return);
    Block PBlock16341 = new_Block_with(PArray16342, empty_Array, PThreadedCode16343, 1, PSend16344);
    Array PThreadedCode16340 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16341, (Optr)&t_method_return);
    Method PMethod16339 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16340, 1, PBlock16341);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16339, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16347 = new_Super(SMB_initialize, 0);
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    // defaultStepBlock. 
    Send PSend16349 = new_Send((Optr)self, SMB_defaultStepBlock, 0);
    Assign PAssign16348 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16349);
    Array PThreadedCode16346 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16347, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16348, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16349, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16345 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16346, 3, PSuper16347, PAssign16348, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16345, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_stepBlock_() {
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray16351 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign16353 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16352 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16353, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16350 = new_Method_with(PArray16351, empty_Array, empty_Array, PThreadedCode16352, 2, PAssign16353, self);
    
    MethodClosure MC_SMB_stepBlock_ = new_MethodClosure((Method)PMethod16350, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_stepBlock_, MC_SMB_stepBlock_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray16355 = new_Array_with(4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Super PSuper16359 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Array PThreadedCode16358 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_super4, (Optr)PSuper16359, (Optr)&t_block_return);
    Block PBlock16357 = new_Block_with(empty_Array, empty_Array, PThreadedCode16358, 1, PSuper16359);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16360 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16357);
    Array PThreadedCode16356 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16357, (Optr)&t_send4, (Optr)PSend16360, (Optr)&t_method_return);
    Method PMethod16354 = new_Method_with(PArray16355, empty_Array, empty_Array, PThreadedCode16356, 1, PSend16360);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16354, Interpretation_SteppingInterpreter_Class);
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