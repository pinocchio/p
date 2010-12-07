#include <lib/class/Interpretation/SteppingInterpreter.h>


Optr layout_Interpretation_SteppingInterpreter_Class_class;
Optr slot_Interpretation_SteppingInterpreter_stepBlock;
Optr layout_Interpretation_SteppingInterpreter;


static void init_SMB_send_to_class_() {
    Symbol SMB_send_to_class_ = new_Symbol(L"send:to:class:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
<<<<<<< HEAD
    Array PArray16719 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Super PSuper16723 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode16722 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper16723, (Optr)&t_block_return);
    Block PBlock16721 = new_Block_with(empty_Array, empty_Array, PThreadedCode16722, 1, PSuper16723);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16724 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16721);
    Array PThreadedCode16720 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16721, (Optr)&t_send4, (Optr)PSend16724, (Optr)&t_method_return);
    Method PMethod16718 = new_Method_with(PArray16719, empty_Array, empty_Array, PThreadedCode16720, 1, PSend16724);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16718, Interpretation_SteppingInterpreter_Class);
=======
    Array PArray16685 = new_Array_with(3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Super PSuper16689 = new_Super(SMB_send_to_class_, 3, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2);
    Array PThreadedCode16688 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_super3, (Optr)PSuper16689, (Optr)&t_block_return);
    Block PBlock16687 = new_Block_with(empty_Array, empty_Array, PThreadedCode16688, 1, PSuper16689);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16690 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16687);
    Array PThreadedCode16686 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16687, (Optr)&t_send4, (Optr)PSend16690, (Optr)&t_method_return);
    Method PMethod16684 = new_Method_with(PArray16685, empty_Array, empty_Array, PThreadedCode16686, 1, PSend16690);
    
    MethodClosure MC_SMB_send_to_class_ = new_MethodClosure((Method)PMethod16684, Interpretation_SteppingInterpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_SteppingInterpreter_Class, SMB_send_to_class_, MC_SMB_send_to_class_);
}


static void init_SMB_stepBlock() {
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
<<<<<<< HEAD
    Array PThreadedCode16726 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_method_return);
    Method PMethod16725 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16726, 1, slot_Interpretation_SteppingInterpreter_stepBlock);
    
    MethodClosure MC_SMB_stepBlock = new_MethodClosure((Method)PMethod16725, Interpretation_SteppingInterpreter_Class);
=======
    Array PThreadedCode16692 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_method_return);
    Method PMethod16691 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16692, 1, slot_Interpretation_SteppingInterpreter_stepBlock);
    
    MethodClosure MC_SMB_stepBlock = new_MethodClosure((Method)PMethod16691, Interpretation_SteppingInterpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_SteppingInterpreter_Class, SMB_stepBlock, MC_SMB_stepBlock);
}


static void init_SMB_checkStep_class_message_do_() {
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    Variable VAR_receiver_0_0 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_1 = new_Variable_named(L"class", 0);
    Variable VAR_aMessage_0_2 = new_Variable_named(L"aMessage", 0);
    Variable VAR_action_0_3 = new_Variable_named(L"action", 0);
<<<<<<< HEAD
    Array PArray16728 = new_Array_with(4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    // value:value:value:value:. 
    Send PSend16730 = new_Send((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, SMB_value_value_value_value_, 4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Array PThreadedCode16729 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send4, (Optr)PSend16730, (Optr)&t_method_return);
    Method PMethod16727 = new_Method_with(PArray16728, empty_Array, empty_Array, PThreadedCode16729, 1, PSend16730);
    
    MethodClosure MC_SMB_checkStep_class_message_do_ = new_MethodClosure((Method)PMethod16727, Interpretation_SteppingInterpreter_Class);
=======
    Array PArray16694 = new_Array_with(4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Symbol SMB_value_value_value_value_ = new_Symbol(L"value:value:value:value:");
    // value:value:value:value:. 
    Send PSend16696 = new_Send((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, SMB_value_value_value_value_, 4, (Optr)VAR_receiver_0_0, (Optr)VAR_class_0_1, (Optr)VAR_aMessage_0_2, (Optr)VAR_action_0_3);
    Array PThreadedCode16695 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_push_variable, (Optr)VAR_receiver_0_0, (Optr)&t_push_variable, (Optr)VAR_class_0_1, (Optr)&t_push_variable, (Optr)VAR_aMessage_0_2, (Optr)&t_push_variable, (Optr)VAR_action_0_3, (Optr)&t_send4, (Optr)PSend16696, (Optr)&t_method_return);
    Method PMethod16693 = new_Method_with(PArray16694, empty_Array, empty_Array, PThreadedCode16695, 1, PSend16696);
    
    MethodClosure MC_SMB_checkStep_class_message_do_ = new_MethodClosure((Method)PMethod16693, Interpretation_SteppingInterpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_SteppingInterpreter_Class, SMB_checkStep_class_message_do_, MC_SMB_checkStep_class_message_do_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_aMessage_1_2 = new_Variable_named(L"aMessage", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
<<<<<<< HEAD
    Array PArray16734 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_aMessage_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16736 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16735 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16736, (Optr)&t_method_return);
    Block PBlock16733 = new_Block_with(PArray16734, empty_Array, PThreadedCode16735, 1, PSend16736);
    Array PThreadedCode16732 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16733, (Optr)&t_method_return);
    Method PMethod16731 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16732, 1, PBlock16733);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16731, Interpretation_SteppingInterpreter_Class);
=======
    Array PArray16700 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_aMessage_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16702 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16701 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16702, (Optr)&t_method_return);
    Block PBlock16699 = new_Block_with(PArray16700, empty_Array, PThreadedCode16701, 1, PSend16702);
    Array PThreadedCode16698 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16699, (Optr)&t_method_return);
    Method PMethod16697 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16698, 1, PBlock16699);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16697, Interpretation_SteppingInterpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_SteppingInterpreter_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
<<<<<<< HEAD
    Super PSuper16739 = new_Super(SMB_initialize, 0);
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    // defaultStepBlock. 
    Send PSend16741 = new_Send((Optr)self, SMB_defaultStepBlock, 0);
    Assign PAssign16740 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16741);
    Array PThreadedCode16738 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16739, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16740, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16741, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16738, 3, PSuper16739, PAssign16740, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16737, Interpretation_SteppingInterpreter_Class);
=======
    Super PSuper16705 = new_Super(SMB_initialize, 0);
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    // defaultStepBlock. 
    Send PSend16707 = new_Send((Optr)self, SMB_defaultStepBlock, 0);
    Assign PAssign16706 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend16707);
    Array PThreadedCode16704 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper16705, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign16706, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16707, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16704, 3, PSuper16705, PAssign16706, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod16703, Interpretation_SteppingInterpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_SteppingInterpreter_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_stepBlock_() {
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray16743 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign16745 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16744 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16745, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16742 = new_Method_with(PArray16743, empty_Array, empty_Array, PThreadedCode16744, 2, PAssign16745, self);
    
    MethodClosure MC_SMB_stepBlock_ = new_MethodClosure((Method)PMethod16742, Interpretation_SteppingInterpreter_Class);
=======
    Array PArray16709 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Assign PAssign16711 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode16710 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign16711, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16708 = new_Method_with(PArray16709, empty_Array, empty_Array, PThreadedCode16710, 2, PAssign16711, self);
    
    MethodClosure MC_SMB_stepBlock_ = new_MethodClosure((Method)PMethod16708, Interpretation_SteppingInterpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_SteppingInterpreter_Class, SMB_stepBlock_, MC_SMB_stepBlock_);
}


static void init_SMB_send_to_class_for_() {
    Symbol SMB_send_to_class_for_ = new_Symbol(L"send:to:class:for:");
    Variable VAR_message_0_0 = new_Variable_named(L"message", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_class_0_2 = new_Variable_named(L"class", 0);
    Variable VAR_send_0_3 = new_Variable_named(L"send", 0);
<<<<<<< HEAD
    Array PArray16747 = new_Array_with(4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Super PSuper16751 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Array PThreadedCode16750 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_super4, (Optr)PSuper16751, (Optr)&t_block_return);
    Block PBlock16749 = new_Block_with(empty_Array, empty_Array, PThreadedCode16750, 1, PSuper16751);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16752 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16749);
    Array PThreadedCode16748 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16749, (Optr)&t_send4, (Optr)PSend16752, (Optr)&t_method_return);
    Method PMethod16746 = new_Method_with(PArray16747, empty_Array, empty_Array, PThreadedCode16748, 1, PSend16752);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16746, Interpretation_SteppingInterpreter_Class);
=======
    Array PArray16713 = new_Array_with(4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Super PSuper16717 = new_Super(SMB_send_to_class_for_, 4, (Optr)VAR_message_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_send_0_3);
    Array PThreadedCode16716 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_send_0_3, (Optr)&t_super4, (Optr)PSuper16717, (Optr)&t_block_return);
    Block PBlock16715 = new_Block_with(empty_Array, empty_Array, PThreadedCode16716, 1, PSuper16717);
    Symbol SMB_checkStep_class_message_do_ = new_Symbol(L"checkStep:class:message:do:");
    // checkStep:class:message:do:. 
    Send PSend16718 = new_Send((Optr)self, SMB_checkStep_class_message_do_, 4, (Optr)VAR_receiver_0_1, (Optr)VAR_class_0_2, (Optr)VAR_message_0_0, (Optr)PBlock16715);
    Array PThreadedCode16714 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_class_0_2, (Optr)&t_push_variable, (Optr)VAR_message_0_0, (Optr)&t_push_closure, (Optr)PBlock16715, (Optr)&t_send4, (Optr)PSend16718, (Optr)&t_method_return);
    Method PMethod16712 = new_Method_with(PArray16713, empty_Array, empty_Array, PThreadedCode16714, 1, PSend16718);
    
    MethodClosure MC_SMB_send_to_class_for_ = new_MethodClosure((Method)PMethod16712, Interpretation_SteppingInterpreter_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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