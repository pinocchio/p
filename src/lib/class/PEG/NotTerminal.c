#include <lib/class/PEG/NotTerminal.h>


Optr layout_PEG_NotTerminal_Class_class;
Optr slot_PEG_NotTerminal_char;
Optr layout_PEG_NotTerminal;


static void init_SMB_initialize_() {
    Symbol SMB_initialize_ = new_Symbol(L"initialize:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray19735 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Assign PAssign19737 = new_Assign((Optr)slot_PEG_NotTerminal_char, (Optr)VAR_aCharacter_0_0);
    Array PThreadedCode19736 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign19737, (Optr)&t_push_variable, (Optr)VAR_aCharacter_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod19734 = new_Method_with(PArray19735, empty_Array, empty_Array, PThreadedCode19736, 2, PAssign19737, self);
    
    MethodClosure MC_SMB_initialize_ = new_MethodClosure((Method)PMethod19734, PEG_NotTerminal_Class);
    store_method(PEG_NotTerminal_Class, SMB_initialize_, MC_SMB_initialize_);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19739 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19742 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19744 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19745 = new_Send((Optr)PSend19744, SMB__equals_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19749 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19748 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19749, (Optr)&t_block_return);
    Block PBlock19747 = new_Block_with(empty_Array, empty_Array, PThreadedCode19748, 1, PSend19749);
    // ifTrue:. 
    Send PSend19746 = new_Send((Optr)PSend19745, SMB_ifTrue_, 1, (Optr)PBlock19747);
    Array PThreadedCode19743 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19744, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19745, (Optr)&t_send_ifTrue_, (Optr)PSend19746, (Optr)PBlock19747, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19741 = new_Block_with(PArray19742, empty_Array, PThreadedCode19743, 2, PSend19746, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19750 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19741);
    Array PThreadedCode19740 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19741, (Optr)&t_send1, (Optr)PSend19750, (Optr)&t_method_return);
    Method PMethod19738 = new_Method_with(PArray19739, empty_Array, empty_Array, PThreadedCode19740, 1, PSend19750);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod19738, PEG_NotTerminal_Class);
    store_method(PEG_NotTerminal_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19752 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19755 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19757 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend19758 = new_Send((Optr)PSend19757, SMB__equals_, 1, (Optr)slot_PEG_NotTerminal_char);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19762 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19761 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19762, (Optr)&t_block_return);
    Block PBlock19760 = new_Block_with(empty_Array, empty_Array, PThreadedCode19761, 1, PSend19762);
    // ifTrue:. 
    Send PSend19759 = new_Send((Optr)PSend19758, SMB_ifTrue_, 1, (Optr)PBlock19760);
    Array PThreadedCode19756 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19757, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19758, (Optr)&t_send_ifTrue_, (Optr)PSend19759, (Optr)PBlock19760, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19754 = new_Block_with(PArray19755, empty_Array, PThreadedCode19756, 2, PSend19759, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19763 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19754);
    Array PThreadedCode19753 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19754, (Optr)&t_send1, (Optr)PSend19763, (Optr)&t_method_return);
    Method PMethod19751 = new_Method_with(PArray19752, empty_Array, empty_Array, PThreadedCode19753, 1, PSend19763);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19751, PEG_NotTerminal_Class);
    store_method(PEG_NotTerminal_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}


static void init_SMB_consume() {
    Symbol SMB_consume = new_Symbol(L"consume");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19766 = new_Send((Optr)PEGConsumingNotTerminal_classReference, SMB_on_, 1, (Optr)slot_PEG_NotTerminal_char);
    Array PThreadedCode19765 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGConsumingNotTerminal_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_NotTerminal_char, (Optr)&t_send1, (Optr)PSend19766, (Optr)&t_method_return);
    Method PMethod19764 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode19765, 1, PSend19766);
    
    MethodClosure MC_SMB_consume = new_MethodClosure((Method)PMethod19764, PEG_NotTerminal_Class);
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