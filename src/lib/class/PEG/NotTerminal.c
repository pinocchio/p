#include <lib/class/PEG/NotTerminal.h>


Optr layout_PEG_NotTerminal_Class_class;
Optr slot_PEG_NotTerminal_char;
Optr layout_PEG_NotTerminal;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray19594 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Assign PAssign19596 = new_Assign((Optr)slot_PEG_NotTerminal_char, (Optr)VAR_aCharacter_0_0);
    Array PThreadedCode19595 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19596, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19593 = new_Method_with(PArray19594, empty_Array, empty_Array, PThreadedCode19595, 2, PAssign19596, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19593, PEG_NotTerminal_Class);
    store_method(PEG_NotTerminal_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19598 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19601 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19603 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19604 = new_Send((Optr)PSend19603, SMB__equals_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19608 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19607 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19608, (Optr)&t_block_return);
    Block PBlock19606 = new_Block_with(empty_Array, empty_Array, PThreadedCode19607, 1, PSend19608);
    // ifTrue:. 
    Send PSend19605 = new_Send((Optr)PSend19604, SMB_ifTrue_, 1, (Optr)PBlock19606);
    Array PThreadedCode19602 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19603, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19604, (Optr)&t_send_ifTrue_, (Optr)PSend19605, (Optr)PBlock19606, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19600 = new_Block_with(PArray19601, empty_Array, PThreadedCode19602, 2, PSend19605, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19609 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19600);
    Array PThreadedCode19599 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19600, (Optr)&t_send1, (Optr)PSend19609, (Optr)&t_method_return);
    Method PMethod19597 = new_Method_with(PArray19598, empty_Array, empty_Array, PThreadedCode19599, 1, PSend19609);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19597, PEG_NotTerminal_Class);
    store_method(PEG_NotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19611 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19614 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19616 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19617 = new_Send((Optr)PSend19616, SMB__equals_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19621 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19620 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19621, (Optr)&t_block_return);
    Block PBlock19619 = new_Block_with(empty_Array, empty_Array, PThreadedCode19620, 1, PSend19621);
    // ifTrue:. 
    Send PSend19618 = new_Send((Optr)PSend19617, SMB_ifTrue_, 1, (Optr)PBlock19619);
    Array PThreadedCode19615 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19616, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19617, (Optr)&t_send_ifTrue_, (Optr)PSend19618, (Optr)PBlock19619, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19613 = new_Block_with(PArray19614, empty_Array, PThreadedCode19615, 2, PSend19618, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19622 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19613);
    Array PThreadedCode19612 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19613, (Optr)&t_send1, (Optr)PSend19622, (Optr)&t_method_return);
    Method PMethod19610 = new_Method_with(PArray19611, empty_Array, empty_Array, PThreadedCode19612, 1, PSend19622);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19610, PEG_NotTerminal_Class);
    store_method(PEG_NotTerminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_consume() {
    Symbol SMB_consume = new_Symbol(L"consume");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19625 = new_Send((Optr)PEGConsumingNotTerminal_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode19624 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19625, (Optr)&t_method_return);
    Method PMethod19623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19624, 1, PSend19625);
    
    MethodClosure MC_SMB_consume = new_MethodClosure((Method)PMethod19623, PEG_NotTerminal_Class);
    store_method(PEG_NotTerminal_Class, SMB_consume, MC_SMB_consume);
}

void init_PEG_PEGNotTerminal_layout() {
    layout_PEG_NotTerminal_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_NotTerminal_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_NotTerminal_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_NotTerminal_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_NotTerminal_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_NotTerminal_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_NotTerminal = new_Symbol(L"NotTerminal");
    slot_PEG_NotTerminal_char = (Optr)new_Slot(0, L"char");
    layout_PEG_NotTerminal = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_NotTerminal)->values[0] = slot_PEG_NotTerminal_char; // char 
    PEG_NotTerminal_Class = (Class)new_Class(PEG_Expression_Class, layout_PEG_NotTerminal_Class_class);
    PEG_NotTerminal_Class->layout = layout_PEG_NotTerminal;
    PEG_NotTerminal_Class->name = SMB_NotTerminal;
    
}

void init_PEG_PEGNotTerminal_methods() {
    init_SMB_initialize_();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    init_SMB_consume();
    
}