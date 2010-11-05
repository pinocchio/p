#include <lib/class/PEG/CharacterTerminal.h>


Optr layout_PEG_CharacterTerminal_Class_class;
Optr layout_PEG_CharacterTerminal;


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Symbol SMB_asCharacter = new_Symbol(L"asCharacter");
    // asCharacter. 
    Send PSend18673 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_asCharacter, 0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18674 = new_Send((Optr)PEGNotTerminal_classReference, SMB_on_, 1, (Optr)PSend18673);
    Array PThreadedCode18672 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PEGNotTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send0, (Optr)PSend18673, (Optr)&t_send1, (Optr)PSend18674, (Optr)&t_method_return);
    Method PMethod18671 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18672, 1, PSend18674);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod18671, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray18676 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend18679 = new_Send((Optr)VAR_aString_0_0, SMB_asInteger, 0);
    Assign PAssign18678 = new_Assign((Optr)slot_PEG_Terminal_terminal, (Optr)PSend18679);
    Array PThreadedCode18677 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push1, (Optr)PAssign18678, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend18679, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18675 = new_Method_with(PArray18676, empty_Array, empty_Array, PThreadedCode18677, 2, PAssign18678, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod18675, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18681 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    // scanCharacter:. 
    Send PSend18683 = new_Send((Optr)VAR_input_0_0, SMB_scanCharacter_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18682 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18683, (Optr)&t_method_return);
    Method PMethod18680 = new_Method_with(PArray18681, empty_Array, empty_Array, PThreadedCode18682, 1, PSend18683);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18680, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18685 = new_Array_with(1, (Optr)VAR_input_0_0);
    Symbol SMB_scanCharacter_ = new_Symbol(L"scanCharacter:");
    // scanCharacter:. 
    Send PSend18687 = new_Send((Optr)VAR_input_0_0, SMB_scanCharacter_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18686 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18687, (Optr)&t_method_return);
    Method PMethod18684 = new_Method_with(PArray18685, empty_Array, empty_Array, PThreadedCode18686, 1, PSend18687);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18684, PEG_CharacterTerminal_Class);
    store_method(PEG_CharacterTerminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_consume() {
    Symbol SMB_consume = new_Symbol(L"consume");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18690 = new_Send((Optr)PEGPushCharacterTerminal_classReference, SMB_on_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18689 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGPushCharacterTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18690, (Optr)&t_method_return);
    Method PMethod18688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18689, 1, PSend18690);
    
    MethodClosure MC_SMB_consume = new_MethodClosure((Method)PMethod18688, PEG_CharacterTerminal_Class);
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