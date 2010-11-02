#include <lib/class/PEG/ConsumingNotTerminalStrongTimes.h>


Optr layout_PEG_ConsumingNotTerminalStrongTimes_Class_class;
Optr layout_PEG_ConsumingNotTerminalStrongTimes;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19924 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_pushUntil_ = new_Symbol(L"pushUntil:");
    // pushUntil:. 
    Send PSend19926 = new_Send((Optr)VAR_input_0_0, SMB_pushUntil_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode19925 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19926, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19923 = new_Method_with(PArray19924, empty_Array, empty_Array, PThreadedCode19925, 2, PSend19926, true_Const);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19923, PEG_ConsumingNotTerminalStrongTimes_Class);
    store_method(PEG_ConsumingNotTerminalStrongTimes_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19928 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanUntil_ = new_Symbol(L"scanUntil:");
    // scanUntil:. 
    Send PSend19930 = new_Send((Optr)VAR_input_0_0, SMB_scanUntil_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode19929 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19930, (Optr)&t_zap, (Optr)&t_method_return_true);
    Method PMethod19927 = new_Method_with(PArray19928, empty_Array, empty_Array, PThreadedCode19929, 2, PSend19930, true_Const);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19927, PEG_ConsumingNotTerminalStrongTimes_Class);
    store_method(PEG_ConsumingNotTerminalStrongTimes_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGConsumingNotTerminalStrongTimes_layout() {
    layout_PEG_ConsumingNotTerminalStrongTimes_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_ConsumingNotTerminalStrongTimes_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_ConsumingNotTerminalStrongTimes_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_ConsumingNotTerminalStrongTimes_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_ConsumingNotTerminalStrongTimes_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_ConsumingNotTerminalStrongTimes_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ConsumingNotTerminalStrongTimes = new_Symbol(L"ConsumingNotTerminalStrongTimes");
    layout_PEG_ConsumingNotTerminalStrongTimes = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_ConsumingNotTerminalStrongTimes)->values[0] = slot_PEG_NotTerminal_char; // char 
    PEG_ConsumingNotTerminalStrongTimes_Class = (Class)new_Class(PEG_ConsumingNotTerminal_Class, layout_PEG_ConsumingNotTerminalStrongTimes_Class_class);
    PEG_ConsumingNotTerminalStrongTimes_Class->layout = layout_PEG_ConsumingNotTerminalStrongTimes;
    PEG_ConsumingNotTerminalStrongTimes_Class->name = SMB_ConsumingNotTerminalStrongTimes;
    
}

void init_PEG_PEGConsumingNotTerminalStrongTimes_methods() {
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}