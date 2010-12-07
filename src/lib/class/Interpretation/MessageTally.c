#include <lib/class/Interpretation/MessageTally.h>


Optr layout_Interpretation_MessageTally_Class_class;
Optr slot_Interpretation_MessageTally_tally;
Optr layout_Interpretation_MessageTally;


static void init_SMB_interpret_() {
    Symbol SMB_interpret_ = new_Symbol(L"interpret:");
    Variable VAR_aClosure_0_0 = new_Variable_named(L"aClosure", 0);
    Array PArray17592 = new_Array_with(1, (Optr)VAR_aClosure_0_0);
    Super PSuper17594 = new_Super(SMB_interpret_, 1, (Optr)VAR_aClosure_0_0);
    Array PThreadedCode17593 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aClosure_0_0, (Optr)&t_super1, (Optr)PSuper17594, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Interpretation_MessageTally_tally, (Optr)&t_method_return);
    Method PMethod17591 = new_Method_with(PArray17592, empty_Array, empty_Array, PThreadedCode17593, 2, PSuper17594, slot_Interpretation_MessageTally_tally);
    
    MethodClosure MC_SMB_interpret_ = new_MethodClosure((Method)PMethod17591, Interpretation_MessageTally_Class);
    store_method(Interpretation_MessageTally_Class, SMB_interpret_, MC_SMB_interpret_);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_aMessage_1_2 = new_Variable_named(L"aMessage", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray17598 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_aMessage_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend17601 = new_Send((Optr)slot_Interpretation_MessageTally_tally, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17600 = new_Assign((Optr)slot_Interpretation_MessageTally_tally, (Optr)PSend17601);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17602 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode17599 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign17600, (Optr)&t_push_slot, (Optr)slot_Interpretation_MessageTally_tally, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17601, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend17602, (Optr)&t_method_return);
    Block PBlock17597 = new_Block_with(PArray17598, empty_Array, PThreadedCode17599, 2, PAssign17600, PSend17602);
    Array PThreadedCode17596 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock17597, (Optr)&t_method_return);
    Method PMethod17595 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17596, 1, PBlock17597);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod17595, Interpretation_MessageTally_Class);
    store_method(Interpretation_MessageTally_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper17605 = new_Super(SMB_initialize, 0);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17606 = new_Assign((Optr)slot_Interpretation_MessageTally_tally, (Optr)int_0_Const);
    Array PThreadedCode17604 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper17605, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17606, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17603 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17604, 3, PSuper17605, PAssign17606, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17603, Interpretation_MessageTally_Class);
    store_method(Interpretation_MessageTally_Class, SMB_initialize, MC_SMB_initialize);
}

void init_Interpretation_PMessageTally_layout() {
    layout_Interpretation_MessageTally_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_MessageTally_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_MessageTally_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_MessageTally_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_MessageTally_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_MessageTally_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_MessageTally = new_Symbol(L"MessageTally");
    slot_Interpretation_MessageTally_tally = (Optr)new_Slot(3, L"tally");
    layout_Interpretation_MessageTally = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Interpretation_MessageTally)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_MessageTally)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    ((Array)layout_Interpretation_MessageTally)->values[2] = slot_Interpretation_SteppingInterpreter_stepBlock; // stepBlock 
    ((Array)layout_Interpretation_MessageTally)->values[3] = slot_Interpretation_MessageTally_tally; // tally 
    Interpretation_MessageTally_Class = (Class)new_Class(Interpretation_SteppingInterpreter_Class, layout_Interpretation_MessageTally_Class_class);
    Interpretation_MessageTally_Class->layout = layout_Interpretation_MessageTally;
    Interpretation_MessageTally_Class->name = SMB_MessageTally;
    
}

void init_Interpretation_PMessageTally_methods() {
    init_SMB_interpret_();
    init_SMB_defaultStepBlock();
    init_SMB_initialize();
    
}