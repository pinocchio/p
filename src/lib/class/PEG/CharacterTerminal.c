#include <lib/class/PEG/CharacterTerminal.h>


Optr layout_PEG_CharacterTerminal_Class_class;
Optr layout_PEG_CharacterTerminal;


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend19132 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_asCharacter, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19133 = new_Send((Optr)PEGNotTerminal_classReference, SMB_on_, 1, (Optr)PSend19132);
    Array PThreadedCode19131 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGNotTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send0, (Optr)PSend19132, (Optr)&t_send1, (Optr)PSend19133, (Optr)&t_method_return);
    Method PMethod19130 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19131, 1, PSend19133);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod19130, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray19135 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend19138 = new_Send((Optr)VAR_aString_0_0, SMB_asInteger, 0);
    Assign PAssign19137 = new_Assign((Optr)slot_PEG_Terminal_terminal, (Optr)PSend19138);
    Array PThreadedCode19136 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign19137, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend19138, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19134 = new_Method_with(PArray19135, empty_Array, empty_Array, PThreadedCode19136, 2, PAssign19137, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19134, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19140 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    // scanCharacter:. 
    Send PSend19142 = new_Send((Optr)VAR_input_0_0, SMB_scanCharacter_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode19141 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend19142, (Optr)&t_method_return);
    Method PMethod19139 = new_Method_with(PArray19140, empty_Array, empty_Array, PThreadedCode19141, 1, PSend19142);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19139, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19144 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    // scanCharacter:. 
    Send PSend19146 = new_Send((Optr)VAR_input_0_0, SMB_scanCharacter_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode19145 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend19146, (Optr)&t_method_return);
    Method PMethod19143 = new_Method_with(PArray19144, empty_Array, empty_Array, PThreadedCode19145, 1, PSend19146);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19143, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_consume() {
    Symbol SMB_consume = new_Symbol(L"consume");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19149 = new_Send((Optr)PEGPushCharacterTerminal_classReference, SMB_on_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode19148 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGPushCharacterTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend19149, (Optr)&t_method_return);
    Method PMethod19147 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19148, 1, PSend19149);
    
    MethodClosure MC_SMB_consume = new_MethodClosure((Method)PMethod19147, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_consume, MC_SMB_consume);
}

void init_PEG_PEGCharacterTerminal_layout() {
    layout_PEG_CharacterTerminal_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_CharacterTerminal_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_CharacterTerminal_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_CharacterTerminal_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_CharacterTerminal_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_CharacterTerminal_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_CharacterTerminal = new_Symbol(L"CharacterTerminal");
    layout_PEG_CharacterTerminal = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_CharacterTerminal)->values[0] = slot_PEG_Terminal_terminal; // terminal 
    PEG_CharacterTerminal_Class = (Class)new_Class(PEG_Terminal_Class, layout_PEG_CharacterTerminal_Class_class);
    PEG_CharacterTerminal_Class->layout = layout_PEG_CharacterTerminal;
    PEG_CharacterTerminal_Class->name = SMB_CharacterTerminal;
    
}

void init_PEG_PEGCharacterTerminal_methods() {
    init_SMB_not();
    init_SMB_initialize_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB_consume();
    
}