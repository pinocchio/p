#include <lib/class/PEG/ConsumingNotTerminal.h>


Optr layout_PEG_ConsumingNotTerminal_Class_class;
Optr layout_PEG_ConsumingNotTerminal;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20046 = new_Send((Optr)PEGConsumingNotTerminalStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode20045 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminalStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20046, (Optr)&t_method_return);
    Method PMethod20044 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20045, 1, PSend20046);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod20044, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20048 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_next_0_1 = new_Variable_named(L"next", 0);
    Array PArray20049 = new_Array_with(1, (Optr)VAR_next_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20052 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20055 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign20054 = new_Assign((Optr)VAR_next_0_1, (Optr)PSend20055);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend20056 = new_Send((Optr)VAR_next_0_1, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20060 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20059 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20060, (Optr)&t_block_return);
    Block PBlock20058 = new_Block_with(empty_Array, empty_Array, PThreadedCode20059, 1, PSend20060);
    // ifTrue:. 
    Send PSend20057 = new_Send((Optr)PSend20056, SMB_ifTrue_, 1, (Optr)PBlock20058);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20061 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)VAR_next_0_1);
    // escape:. 
    Send PSend20065 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20064 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20065, (Optr)&t_block_return);
    Block PBlock20063 = new_Block_with(empty_Array, empty_Array, PThreadedCode20064, 1, PSend20065);
    // ifTrue:. 
    Send PSend20062 = new_Send((Optr)PSend20061, SMB_ifTrue_, 1, (Optr)PBlock20063);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend20066 = new_Send((Optr)VAR_input_0_0, SMB_push_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20067 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20053 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign20054, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20055, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send0, (Optr)PSend20056, (Optr)&t_send_ifTrue_, (Optr)PSend20057, (Optr)PBlock20058, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send1, (Optr)PSend20061, (Optr)&t_send_ifTrue_, (Optr)PSend20062, (Optr)PBlock20063, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20066, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20067, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20051 = new_Block_with(PArray20052, empty_Array, PThreadedCode20053, 6, PAssign20054, PSend20057, PSend20062, PSend20066, PSend20067, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20068 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20051);
    Array PThreadedCode20050 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20051, (Optr)&t_send1, (Optr)PSend20068, (Optr)&t_method_return);
    Method PMethod20047 = new_Method_with(PArray20048, PArray20049, empty_Array, PThreadedCode20050, 1, PSend20068);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod20047, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20070 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20073 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20075 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20076 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)PSend20075);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20080 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20079 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20080, (Optr)&t_block_return);
    Block PBlock20078 = new_Block_with(empty_Array, empty_Array, PThreadedCode20079, 1, PSend20080);
    // ifTrue:. 
    Send PSend20077 = new_Send((Optr)PSend20076, SMB_ifTrue_, 1, (Optr)PBlock20078);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20081 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20074 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20075, (Optr)&t_send1, (Optr)PSend20076, (Optr)&t_send_ifTrue_, (Optr)PSend20077, (Optr)PBlock20078, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20081, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20072 = new_Block_with(PArray20073, empty_Array, PThreadedCode20074, 3, PSend20077, PSend20081, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20082 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20072);
    Array PThreadedCode20071 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20072, (Optr)&t_send1, (Optr)PSend20082, (Optr)&t_method_return);
    Method PMethod20069 = new_Method_with(PArray20070, empty_Array, empty_Array, PThreadedCode20071, 1, PSend20082);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod20069, PEG_ConsumingNotTerminal_Class);
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