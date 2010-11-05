#include <lib/class/PEG/ConsumingNotTerminal.h>


Optr layout_PEG_ConsumingNotTerminal_Class_class;
Optr layout_PEG_ConsumingNotTerminal;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20082 = new_Send((Optr)PEGConsumingNotTerminalStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode20081 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminalStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20082, (Optr)&t_method_return);
    Method PMethod20080 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode20081, 1, PSend20082);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod20080, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20084 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_next_0_1 = new_Variable_named(L"next", 0);
    Array PArray20085 = new_Array_with(1, (Optr)VAR_next_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20088 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20091 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign20090 = new_Assign((Optr)VAR_next_0_1, (Optr)PSend20091);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend20092 = new_Send((Optr)VAR_next_0_1, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20096 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20095 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20096, (Optr)&t_block_return);
    Block PBlock20094 = new_Block_with(empty_Array, empty_Array, PThreadedCode20095, 1, PSend20096);
    // ifTrue:. 
    Send PSend20093 = new_Send((Optr)PSend20092, SMB_ifTrue_, 1, (Optr)PBlock20094);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20097 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)VAR_next_0_1);
    // escape:. 
    Send PSend20101 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20100 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20101, (Optr)&t_block_return);
    Block PBlock20099 = new_Block_with(empty_Array, empty_Array, PThreadedCode20100, 1, PSend20101);
    // ifTrue:. 
    Send PSend20098 = new_Send((Optr)PSend20097, SMB_ifTrue_, 1, (Optr)PBlock20099);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend20102 = new_Send((Optr)VAR_input_0_0, SMB_push_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20103 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20089 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign20090, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20091, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send0, (Optr)PSend20092, (Optr)&t_send_ifTrue_, (Optr)PSend20093, (Optr)PBlock20094, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send1, (Optr)PSend20097, (Optr)&t_send_ifTrue_, (Optr)PSend20098, (Optr)PBlock20099, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend20102, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20103, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20087 = new_Block_with(PArray20088, empty_Array, PThreadedCode20089, 6, PAssign20090, PSend20093, PSend20098, PSend20102, PSend20103, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20104 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20087);
    Array PThreadedCode20086 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20087, (Optr)&t_send1, (Optr)PSend20104, (Optr)&t_method_return);
    Method PMethod20083 = new_Method_with(PArray20084, PArray20085, empty_Array, PThreadedCode20086, 1, PSend20104);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod20083, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray20106 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20109 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20111 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20112 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)PSend20111);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20116 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20115 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20116, (Optr)&t_block_return);
    Block PBlock20114 = new_Block_with(empty_Array, empty_Array, PThreadedCode20115, 1, PSend20116);
    // ifTrue:. 
    Send PSend20113 = new_Send((Optr)PSend20112, SMB_ifTrue_, 1, (Optr)PBlock20114);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20117 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20110 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20111, (Optr)&t_send1, (Optr)PSend20112, (Optr)&t_send_ifTrue_, (Optr)PSend20113, (Optr)PBlock20114, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20117, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock20108 = new_Block_with(PArray20109, empty_Array, PThreadedCode20110, 3, PSend20113, PSend20117, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20118 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock20108);
    Array PThreadedCode20107 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock20108, (Optr)&t_send1, (Optr)PSend20118, (Optr)&t_method_return);
    Method PMethod20105 = new_Method_with(PArray20106, empty_Array, empty_Array, PThreadedCode20107, 1, PSend20118);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod20105, PEG_ConsumingNotTerminal_Class);
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