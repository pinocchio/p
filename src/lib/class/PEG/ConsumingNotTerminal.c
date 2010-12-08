#include <lib/class/PEG/ConsumingNotTerminal.h>


Optr layout_PEG_ConsumingNotTerminal_Class_class;
Optr layout_PEG_ConsumingNotTerminal;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20375 = new_Send((Optr)PEGConsumingNotTerminalStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode20374 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminalStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20375, (Optr)&t_method_return);
    Method PMethod20373 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20374, 1, PSend20375);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod20373, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20377 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_next_0_1 = new_Variable_named(L"next", 0);
    Array PArray20378 = new_Array_with(1, (Optr)VAR_next_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20381 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20384 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign20383 = new_Assign((Optr)VAR_next_0_1, (Optr)PSend20384);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend20385 = new_Send((Optr)VAR_next_0_1, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20389 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20388 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20389, (Optr)&t_block_return);
    Block PBlock20387 = new_Block_with(empty_Array, empty_Array, PThreadedCode20388, 1, PSend20389);
    // ifTrue:. 
    Send PSend20386 = new_Send((Optr)PSend20385, SMB_ifTrue_, 1, (Optr)PBlock20387);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20390 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)VAR_next_0_1);
    // escape:. 
    Send PSend20394 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20393 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20394, (Optr)&t_block_return);
    Block PBlock20392 = new_Block_with(empty_Array, empty_Array, PThreadedCode20393, 1, PSend20394);
    // ifTrue:. 
    Send PSend20391 = new_Send((Optr)PSend20390, SMB_ifTrue_, 1, (Optr)PBlock20392);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend20395 = new_Send((Optr)VAR_input_0_0, SMB_push_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20396 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20382 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign20383, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send0, (Optr)PSend20385, (Optr)&t_send_ifTrue_, (Optr)PSend20386, (Optr)PBlock20387, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send1, (Optr)PSend20390, (Optr)&t_send_ifTrue_, (Optr)PSend20391, (Optr)PBlock20392, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20395, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20396, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20380 = new_Block_with(PArray20381, empty_Array, PThreadedCode20382, 6, PAssign20383, PSend20386, PSend20391, PSend20395, PSend20396, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20397 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20380);
    Array PThreadedCode20379 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20380, (Optr)&t_send1, (Optr)PSend20397, (Optr)&t_method_return);
    Method PMethod20376 = new_Method_with(PArray20377, PArray20378, empty_Array, PThreadedCode20379, 1, PSend20397);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod20376, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20399 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20402 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20404 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20405 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)PSend20404);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20409 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20408 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20409, (Optr)&t_block_return);
    Block PBlock20407 = new_Block_with(empty_Array, empty_Array, PThreadedCode20408, 1, PSend20409);
    // ifTrue:. 
    Send PSend20406 = new_Send((Optr)PSend20405, SMB_ifTrue_, 1, (Optr)PBlock20407);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20410 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20403 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20404, (Optr)&t_send1, (Optr)PSend20405, (Optr)&t_send_ifTrue_, (Optr)PSend20406, (Optr)PBlock20407, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20410, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20401 = new_Block_with(PArray20402, empty_Array, PThreadedCode20403, 3, PSend20406, PSend20410, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20411 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20401);
    Array PThreadedCode20400 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20401, (Optr)&t_send1, (Optr)PSend20411, (Optr)&t_method_return);
    Method PMethod20398 = new_Method_with(PArray20399, empty_Array, empty_Array, PThreadedCode20400, 1, PSend20411);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod20398, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGConsumingNotTerminal_layout() {
    layout_PEG_ConsumingNotTerminal_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_ConsumingNotTerminal_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ConsumingNotTerminal = new_Symbol(L"ConsumingNotTerminal");
    layout_PEG_ConsumingNotTerminal = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_ConsumingNotTerminal)->values[0] = slot_PEG_NotTerminal_char; // char 
    PEG_ConsumingNotTerminal_Class = (Class)new_Class(PEG_NotTerminal_Class, layout_PEG_ConsumingNotTerminal_Class_class);
    PEG_ConsumingNotTerminal_Class->layout = layout_PEG_ConsumingNotTerminal;
    PEG_ConsumingNotTerminal_Class->name = SMB_ConsumingNotTerminal;
    
}

void init_PEG_PEGConsumingNotTerminal_methods() {
    init_SMB_strongTimes();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}