#include <lib/class/PEG/ConsumingNotTerminal.h>


Optr layout_PEG_ConsumingNotTerminal_Class_class;
Optr layout_PEG_ConsumingNotTerminal;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20057 = new_Send((Optr)PEGConsumingNotTerminalStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode20056 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminalStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20057, (Optr)&t_method_return);
    Method PMethod20055 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20056, 1, PSend20057);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod20055, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20059 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_next_0_1 = new_Variable_named(L"next", 0);
    Array PArray20060 = new_Array_with(1, (Optr)VAR_next_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20063 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20066 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign20065 = new_Assign((Optr)VAR_next_0_1, (Optr)PSend20066);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend20067 = new_Send((Optr)VAR_next_0_1, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20071 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20070 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20071, (Optr)&t_block_return);
    Block PBlock20069 = new_Block_with(empty_Array, empty_Array, PThreadedCode20070, 1, PSend20071);
    // ifTrue:. 
    Send PSend20068 = new_Send((Optr)PSend20067, SMB_ifTrue_, 1, (Optr)PBlock20069);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20072 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)VAR_next_0_1);
    // escape:. 
    Send PSend20076 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20075 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20076, (Optr)&t_block_return);
    Block PBlock20074 = new_Block_with(empty_Array, empty_Array, PThreadedCode20075, 1, PSend20076);
    // ifTrue:. 
    Send PSend20073 = new_Send((Optr)PSend20072, SMB_ifTrue_, 1, (Optr)PBlock20074);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend20077 = new_Send((Optr)VAR_input_0_0, SMB_push_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20078 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20064 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign20065, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20066, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send0, (Optr)PSend20067, (Optr)&t_send_ifTrue_, (Optr)PSend20068, (Optr)PBlock20069, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send1, (Optr)PSend20072, (Optr)&t_send_ifTrue_, (Optr)PSend20073, (Optr)PBlock20074, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20077, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20078, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20062 = new_Block_with(PArray20063, empty_Array, PThreadedCode20064, 6, PAssign20065, PSend20068, PSend20073, PSend20077, PSend20078, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20079 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20062);
    Array PThreadedCode20061 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20062, (Optr)&t_send1, (Optr)PSend20079, (Optr)&t_method_return);
    Method PMethod20058 = new_Method_with(PArray20059, PArray20060, empty_Array, PThreadedCode20061, 1, PSend20079);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod20058, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20081 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20084 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20086 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20087 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)PSend20086);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20091 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20090 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20091, (Optr)&t_block_return);
    Block PBlock20089 = new_Block_with(empty_Array, empty_Array, PThreadedCode20090, 1, PSend20091);
    // ifTrue:. 
    Send PSend20088 = new_Send((Optr)PSend20087, SMB_ifTrue_, 1, (Optr)PBlock20089);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20092 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20085 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20086, (Optr)&t_send1, (Optr)PSend20087, (Optr)&t_send_ifTrue_, (Optr)PSend20088, (Optr)PBlock20089, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20092, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20083 = new_Block_with(PArray20084, empty_Array, PThreadedCode20085, 3, PSend20088, PSend20092, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20093 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20083);
    Array PThreadedCode20082 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20083, (Optr)&t_send1, (Optr)PSend20093, (Optr)&t_method_return);
    Method PMethod20080 = new_Method_with(PArray20081, empty_Array, empty_Array, PThreadedCode20082, 1, PSend20093);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod20080, PEG_ConsumingNotTerminal_Class);
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