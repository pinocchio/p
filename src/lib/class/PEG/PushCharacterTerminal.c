#include <lib/class/PEG/PushCharacterTerminal.h>


Optr layout_PEG_PushCharacterTerminal_Class_class;
Optr layout_PEG_PushCharacterTerminal;


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19955 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanPushCharacter_ = new_Symbol(L"scanPushCharacter:");
    // scanPushCharacter:. 
    Send PSend19957 = new_Send((Optr)VAR_input_0_0, SMB_scanPushCharacter_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode19956 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend19957, (Optr)&t_method_return);
    Method PMethod19954 = new_Method_with(PArray19955, empty_Array, empty_Array, PThreadedCode19956, 1, PSend19957);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19954, PEG_PushCharacterTerminal_Class);
    store_method(PEG_PushCharacterTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}

void init_PEG_PEGPushCharacterTerminal_layout() {
    layout_PEG_PushCharacterTerminal_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_PushCharacterTerminal_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_PushCharacterTerminal_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_PushCharacterTerminal_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_PushCharacterTerminal_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_PushCharacterTerminal_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_PushCharacterTerminal = new_Symbol(L"PushCharacterTerminal");
    layout_PEG_PushCharacterTerminal = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_PushCharacterTerminal)->values[0] = slot_PEG_Terminal_terminal; // terminal 
    PEG_PushCharacterTerminal_Class = (Class)new_Class(PEG_CharacterTerminal_Class, layout_PEG_PushCharacterTerminal_Class_class);
    PEG_PushCharacterTerminal_Class->layout = layout_PEG_PushCharacterTerminal;
    PEG_PushCharacterTerminal_Class->name = SMB_PushCharacterTerminal;
    
}

void init_PEG_PEGPushCharacterTerminal_methods() {
    init_SMB_parseOn_();
    
}