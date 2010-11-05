#include <lib/class/PEG/CharacterTerminal.h>


Optr layout_PEG_CharacterTerminal_Class_class;
Optr layout_PEG_CharacterTerminal;


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18839 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_asCharacter, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18840 = new_Send((Optr)PEGNotTerminal_classReference, SMB_on_, 1, (Optr)PSend18839);
    Array PThreadedCode18838 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGNotTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send0, (Optr)PSend18839, (Optr)&t_send1, (Optr)PSend18840, (Optr)&t_method_return);
    Method PMethod18837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18838, 1, PSend18840);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod18837, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray18842 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18845 = new_Send((Optr)VAR_aString_0_0, SMB_asInteger, 0);
    Assign PAssign18844 = new_Assign((Optr)slot_PEG_Terminal_terminal, (Optr)PSend18845);
    Array PThreadedCode18843 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18844, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend18845, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18841 = new_Method_with(PArray18842, empty_Array, empty_Array, PThreadedCode18843, 2, PAssign18844, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod18841, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18847 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    // scanCharacter:. 
    Send PSend18849 = new_Send((Optr)VAR_input_0_0, SMB_scanCharacter_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18848 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18849, (Optr)&t_method_return);
    Method PMethod18846 = new_Method_with(PArray18847, empty_Array, empty_Array, PThreadedCode18848, 1, PSend18849);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18846, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18851 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    // scanCharacter:. 
    Send PSend18853 = new_Send((Optr)VAR_input_0_0, SMB_scanCharacter_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18852 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18853, (Optr)&t_method_return);
    Method PMethod18850 = new_Method_with(PArray18851, empty_Array, empty_Array, PThreadedCode18852, 1, PSend18853);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18850, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_consume() {
    Symbol SMB_consume = new_Symbol(L"consume");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18856 = new_Send((Optr)PEGPushCharacterTerminal_classReference, SMB_on_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18855 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGPushCharacterTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18856, (Optr)&t_method_return);
    Method PMethod18854 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18855, 1, PSend18856);
    
    MethodClosure MC_SMB_consume = new_MethodClosure((Method)PMethod18854, PEG_CharacterTerminal_Class);
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