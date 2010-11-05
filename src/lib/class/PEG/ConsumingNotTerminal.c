#include <lib/class/PEG/ConsumingNotTerminal.h>


Optr layout_PEG_ConsumingNotTerminal_Class_class;
Optr layout_PEG_ConsumingNotTerminal;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19973 = new_Send((Optr)PEGConsumingNotTerminalStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode19972 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminalStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19973, (Optr)&t_method_return);
    Method PMethod19971 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19972, 1, PSend19973);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod19971, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19975 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_next_0_1 = new_Variable_named(L"next", 0);
    Array PArray19976 = new_Array_with(1, (Optr)VAR_next_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19979 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19982 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign19981 = new_Assign((Optr)VAR_next_0_1, (Optr)PSend19982);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend19983 = new_Send((Optr)VAR_next_0_1, SMB_isNil, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19987 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19986 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19987, (Optr)&t_block_return);
    Block PBlock19985 = new_Block_with(empty_Array, empty_Array, PThreadedCode19986, 1, PSend19987);
    // ifTrue:. 
    Send PSend19984 = new_Send((Optr)PSend19983, SMB_ifTrue_, 1, (Optr)PBlock19985);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19988 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)VAR_next_0_1);
    // escape:. 
    Send PSend19992 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19991 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19992, (Optr)&t_block_return);
    Block PBlock19990 = new_Block_with(empty_Array, empty_Array, PThreadedCode19991, 1, PSend19992);
    // ifTrue:. 
    Send PSend19989 = new_Send((Optr)PSend19988, SMB_ifTrue_, 1, (Optr)PBlock19990);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19993 = new_Send((Optr)VAR_input_0_0, SMB_push_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend19994 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode19980 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push1, (Optr)PAssign19981, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19982, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send0, (Optr)PSend19983, (Optr)&t_send_ifTrue_, (Optr)PSend19984, (Optr)PBlock19985, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_next_0_1, (Optr)&t_send1, (Optr)PSend19988, (Optr)&t_send_ifTrue_, (Optr)PSend19989, (Optr)PBlock19990, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19993, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19994, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19978 = new_Block_with(PArray19979, empty_Array, PThreadedCode19980, 6, PAssign19981, PSend19984, PSend19989, PSend19993, PSend19994, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19995 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19978);
    Array PThreadedCode19977 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19978, (Optr)&t_send1, (Optr)PSend19995, (Optr)&t_method_return);
    Method PMethod19974 = new_Method_with(PArray19975, PArray19976, empty_Array, PThreadedCode19977, 1, PSend19995);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19974, PEG_ConsumingNotTerminal_Class);
    store_method(PEG_ConsumingNotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19997 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray20000 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend20002 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend20003 = new_Send((Optr)slot_PEG_NotTerminal_char, SMB__equals_, 1, (Optr)PSend20002);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend20007 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode20006 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend20007, (Optr)&t_block_return);
    Block PBlock20005 = new_Block_with(empty_Array, empty_Array, PThreadedCode20006, 1, PSend20007);
    // ifTrue:. 
    Send PSend20004 = new_Send((Optr)PSend20003, SMB_ifTrue_, 1, (Optr)PBlock20005);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend20008 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode20001 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20002, (Optr)&t_send1, (Optr)PSend20003, (Optr)&t_send_ifTrue_, (Optr)PSend20004, (Optr)PBlock20005, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend20008, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19999 = new_Block_with(PArray20000, empty_Array, PThreadedCode20001, 3, PSend20004, PSend20008, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend20009 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19999);
    Array PThreadedCode19998 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19999, (Optr)&t_send1, (Optr)PSend20009, (Optr)&t_method_return);
    Method PMethod19996 = new_Method_with(PArray19997, empty_Array, empty_Array, PThreadedCode19998, 1, PSend20009);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19996, PEG_ConsumingNotTerminal_Class);
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