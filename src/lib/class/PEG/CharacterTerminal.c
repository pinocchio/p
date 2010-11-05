#include <lib/class/PEG/CharacterTerminal.h>


Optr layout_PEG_CharacterTerminal_Class_class;
Optr layout_PEG_CharacterTerminal;


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18803 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_asCharacter, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18804 = new_Send((Optr)PEGNotTerminal_classReference, SMB_on_, 1, (Optr)PSend18803);
    Array PThreadedCode18802 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGNotTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send0, (Optr)PSend18803, (Optr)&t_send1, (Optr)PSend18804, (Optr)&t_method_return);
    Method PMethod18801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18802, 1, PSend18804);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod18801, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray18806 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18809 = new_Send((Optr)VAR_aString_0_0, SMB_asInteger, 0);
    Assign PAssign18808 = new_Assign((Optr)slot_PEG_Terminal_terminal, (Optr)PSend18809);
    Array PThreadedCode18807 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18808, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend18809, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18805 = new_Method_with(PArray18806, empty_Array, empty_Array, PThreadedCode18807, 2, PAssign18808, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod18805, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18811 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    // scanCharacter:. 
    Send PSend18813 = new_Send((Optr)VAR_input_0_0, SMB_scanCharacter_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18812 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18813, (Optr)&t_method_return);
    Method PMethod18810 = new_Method_with(PArray18811, empty_Array, empty_Array, PThreadedCode18812, 1, PSend18813);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18810, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18815 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    // scanCharacter:. 
    Send PSend18817 = new_Send((Optr)VAR_input_0_0, SMB_scanCharacter_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18816 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18817, (Optr)&t_method_return);
    Method PMethod18814 = new_Method_with(PArray18815, empty_Array, empty_Array, PThreadedCode18816, 1, PSend18817);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18814, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_consume() {
    Symbol SMB_consume = new_Symbol(L"consume");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18820 = new_Send((Optr)PEGPushCharacterTerminal_classReference, SMB_on_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18819 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGPushCharacterTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18820, (Optr)&t_method_return);
    Method PMethod18818 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18819, 1, PSend18820);
    
    MethodClosure MC_SMB_consume = new_MethodClosure((Method)PMethod18818, PEG_CharacterTerminal_Class);
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