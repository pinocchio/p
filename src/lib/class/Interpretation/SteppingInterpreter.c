#include <lib/class/Interpretation/SteppingInterpreter.h>


Optr layout_Interpretation_SteppingInterpreter_Class_class;
Optr slot_Interpretation_SteppingInterpreter_stepBlock;
Optr layout_Interpretation_SteppingInterpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray16487 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Super PSuper16491 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode16490 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper16491, (Optr)&t_block_return);
    Block PBlock16489 = new_Block_with(empty_Array, empty_Array, PThreadedCode16490, 1, PSuper16491);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16492 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16489);
    Array PThreadedCode16488 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16489, (Optr)&t_send4, (Optr)PSend16492, (Optr)&t_method_return);
    Method PMethod16486 = new_Method_with(PArray16487, empty_Array, empty_Array, PThreadedCode16488, 1, PSend16492);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16486, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_stepBlock() {
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    Array PThreadedCode16494 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_method_return);
    Method PMethod16493 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16494, 1, slot_Interpretation_SteppingInterpreter_stepBlock);
    
    MethodClosure MC_SMB_stepBlock = new_MethodClosure((Method)PMethod16493, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_stepBlock, MC_SMB_stepBlock);
}


static void init_SMB_checkStep_class_message_do_() {
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray16496 = new_Array_with(4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    // value:value:value:value:. 
    Send PSend16498 = new_Send((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, SMB_value_value_value_value_, 4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Array PThreadedCode16497 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send4, (Optr)PSend16498, (Optr)&t_method_return);
    Method PMethod16495 = new_Method_with(PArray16496, empty_Array, empty_Array, PThreadedCode16497, 1, PSend16498);
    
    MethodClosure MC_SMB_checkStep_class_message_do_ = new_MethodClosure((Method)PMethod16495, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_checkStep_class_message_do_, MC_SMB_checkStep_class_message_do_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_aMessage_1_2 = new_Variable_named(L"aMessage", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16502 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_aMessage_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16504 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16503 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16504, (Optr)&t_method_return);
    Block PBlock16501 = new_Block_with(PArray16502, empty_Array, PThreadedCode16503, 1, PSend16504);
    Array PThreadedCode16500 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16501, (Optr)&t_method_return);
    Method PMethod16499 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16500, 1, PBlock16501);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16499, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16507 = new_Super(SMB_initialize, 0);
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    // defaultStepBlock. 
    Send PSend16509 = new_Send((Optr)self, SMB_defaultStepBlock, 0);
    Assign PAssign16508 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16509);
    Array PThreadedCode16506 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16507, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16508, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16509, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16505 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16506, 3, PSuper16507, PAssign16508, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16505, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_stepBlock_() {
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray16511 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign16513 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16512 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16513, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16510 = new_Method_with(PArray16511, empty_Array, empty_Array, PThreadedCode16512, 2, PAssign16513, self);
    
    MethodClosure MC_SMB_stepBlock_ = new_MethodClosure((Method)PMethod16510, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_stepBlock_, MC_SMB_stepBlock_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray16515 = new_Array_with(4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Super PSuper16519 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Array PThreadedCode16518 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_super4, (Optr)PSuper16519, (Optr)&t_block_return);
    Block PBlock16517 = new_Block_with(empty_Array, empty_Array, PThreadedCode16518, 1, PSuper16519);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16520 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16517);
    Array PThreadedCode16516 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16517, (Optr)&t_send4, (Optr)PSend16520, (Optr)&t_method_return);
    Method PMethod16514 = new_Method_with(PArray16515, empty_Array, empty_Array, PThreadedCode16516, 1, PSend16520);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16514, Interpretation_SteppingInterpreter_Class);
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