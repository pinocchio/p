#include <lib/class/PEG/TerminalChoice.h>


Optr layout_PEG_TerminalChoice_Class_class;
Optr layout_PEG_TerminalChoice;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18758 = new_Send((Optr)PEGTerminalChoiceStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18757 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGTerminalChoiceStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18758, (Optr)&t_method_return);
    Method PMethod18756 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18757, 1, PSend18758);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18756, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18761 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18760 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18761, (Optr)&t_method_return);
    Method PMethod18759 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18760, 1, PSend18761);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18759, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend18764 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode18763 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18764, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18763, 2, PSend18764, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod18762, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18766 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Array PArray18767 = new_Array_with(1, (Optr)VAR_char_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18770 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18773 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18772 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18773);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18774 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_indexOf_, 1, (Optr)PAssign18772);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18775 = new_Send((Optr)PSend18774, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18779 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18778 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18779, (Optr)&t_block_return);
    Block PBlock18777 = new_Block_with(empty_Array, empty_Array, PThreadedCode18778, 1, PSend18779);
    // ifTrue:. 
    Send PSend18776 = new_Send((Optr)PSend18775, SMB_ifTrue_, 1, (Optr)PBlock18777);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18780 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18781 = new_Send((Optr)PSend18780, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18782 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18771 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_push1, (Optr)PAssign18772, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18773, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend18774, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18775, (Optr)&t_send_ifTrue_, (Optr)PSend18776, (Optr)PBlock18777, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18780, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18781, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18782, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18769 = new_Block_with(PArray18770, empty_Array, PThreadedCode18771, 4, PSend18776, PSend18781, PSend18782, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18783 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18769);
    Array PThreadedCode18768 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18769, (Optr)&t_send1, (Optr)PSend18783, (Optr)&t_method_return);
    Method PMethod18765 = new_Method_with(PArray18766, PArray18767, empty_Array, PThreadedCode18768, 1, PSend18783);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18765, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18785 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18788 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18790 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18791 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_indexOf_, 1, (Optr)PSend18790);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18792 = new_Send((Optr)PSend18791, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18796 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18795 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18796, (Optr)&t_block_return);
    Block PBlock18794 = new_Block_with(empty_Array, empty_Array, PThreadedCode18795, 1, PSend18796);
    // ifTrue:. 
    Send PSend18793 = new_Send((Optr)PSend18792, SMB_ifTrue_, 1, (Optr)PBlock18794);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18797 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18789 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18790, (Optr)&t_send1, (Optr)PSend18791, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18792, (Optr)&t_send_ifTrue_, (Optr)PSend18793, (Optr)PBlock18794, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18797, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18787 = new_Block_with(PArray18788, empty_Array, PThreadedCode18789, 3, PSend18793, PSend18797, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18798 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18787);
    Array PThreadedCode18786 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18787, (Optr)&t_send1, (Optr)PSend18798, (Optr)&t_method_return);
    Method PMethod18784 = new_Method_with(PArray18785, empty_Array, empty_Array, PThreadedCode18786, 1, PSend18798);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18784, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_omitMatch_, MC_SMB_omitMatch_);
}

void init_PEG_PEGTerminalChoice_layout() {
    layout_PEG_TerminalChoice_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PEG_TerminalChoice_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PEG_TerminalChoice_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PEG_TerminalChoice_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PEG_TerminalChoice_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PEG_TerminalChoice_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TerminalChoice = new_Symbol(L"TerminalChoice");
    layout_PEG_TerminalChoice = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PEG_TerminalChoice)->values[0] = slot_PEG_Terminal_terminal; // terminal 
    PEG_TerminalChoice_Class = (Class)new_Class(PEG_Terminal_Class, layout_PEG_TerminalChoice_Class_class);
    PEG_TerminalChoice_Class->layout = layout_PEG_TerminalChoice;
    PEG_TerminalChoice_Class->name = SMB_TerminalChoice;
    
}

void init_PEG_PEGTerminalChoice_methods() {
    init_SMB_strongTimes();
    init_SMB_strongPlus();
    init_SMB_not();
    init_SMB_parseOn_();
    init_SMB_omitMatch_();
    
}