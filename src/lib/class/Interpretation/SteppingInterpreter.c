#include <lib/class/Interpretation/SteppingInterpreter.h>


Optr layout_Interpretation_SteppingInterpreter_Class_class;
Optr slot_Interpretation_SteppingInterpreter_stepBlock;
Optr layout_Interpretation_SteppingInterpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Array PArray16414 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Super PSuper16418 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode16417 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper16418, (Optr)&t_block_return);
    Block PBlock16416 = new_Block_with(empty_Array, empty_Array, PThreadedCode16417, 1, PSuper16418);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16419 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16416);
    Array PThreadedCode16415 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16416, (Optr)&t_send4, (Optr)PSend16419, (Optr)&t_method_return);
    Method PMethod16413 = new_Method_with(PArray16414, empty_Array, empty_Array, PThreadedCode16415, 1, PSend16419);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16413, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_stepBlock() {
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    Array PThreadedCode16421 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_method_return);
    Method PMethod16420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16421, 1, slot_Interpretation_SteppingInterpreter_stepBlock);
    
    MethodClosure MC_SMB_stepBlock = new_MethodClosure((Method)PMethod16420, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_stepBlock, MC_SMB_stepBlock);
}


static void init_SMB_checkStep_class_message_do_() {
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
    Array PArray16423 = new_Array_with(4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    // value:value:value:value:. 
    Send PSend16425 = new_Send((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, SMB_value_value_value_value_, 4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Array PThreadedCode16424 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send4, (Optr)PSend16425, (Optr)&t_method_return);
    Method PMethod16422 = new_Method_with(PArray16423, empty_Array, empty_Array, PThreadedCode16424, 1, PSend16425);
    
    MethodClosure MC_SMB_checkStep_class_message_do_ = new_MethodClosure((Method)PMethod16422, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_checkStep_class_message_do_, MC_SMB_checkStep_class_message_do_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_aMessage_1_2 = new_Variable_named(L"aMessage", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16429 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_aMessage_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16431 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16430 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16431, (Optr)&t_method_return);
    Block PBlock16428 = new_Block_with(PArray16429, empty_Array, PThreadedCode16430, 1, PSend16431);
    Array PThreadedCode16427 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16428, (Optr)&t_method_return);
    Method PMethod16426 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16427, 1, PBlock16428);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16426, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper16434 = new_Super(SMB_initialize, 0);
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    // defaultStepBlock. 
    Send PSend16436 = new_Send((Optr)self, SMB_defaultStepBlock, 0);
    Assign PAssign16435 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16436);
    Array PThreadedCode16433 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16434, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16435, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16436, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16433, 3, PSuper16434, PAssign16435, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16432, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_stepBlock_() {
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray16438 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign16440 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16439 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16440, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16437 = new_Method_with(PArray16438, empty_Array, empty_Array, PThreadedCode16439, 2, PAssign16440, self);
    
    MethodClosure MC_SMB_stepBlock_ = new_MethodClosure((Method)PMethod16437, Interpretation_SteppingInterpreter_Class);
    store_method(Interpretation_SteppingInterpreter_Class, SMB_stepBlock_, MC_SMB_stepBlock_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
    Array PArray16442 = new_Array_with(4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Super PSuper16446 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Array PThreadedCode16445 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_super4, (Optr)PSuper16446, (Optr)&t_block_return);
    Block PBlock16444 = new_Block_with(empty_Array, empty_Array, PThreadedCode16445, 1, PSuper16446);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16447 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16444);
    Array PThreadedCode16443 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16444, (Optr)&t_send4, (Optr)PSend16447, (Optr)&t_method_return);
    Method PMethod16441 = new_Method_with(PArray16442, empty_Array, empty_Array, PThreadedCode16443, 1, PSend16447);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16441, Interpretation_SteppingInterpreter_Class);
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