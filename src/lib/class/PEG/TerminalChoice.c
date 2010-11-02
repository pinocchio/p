#include <lib/class/PEG/TerminalChoice.h>


Optr layout_PEG_TerminalChoice_Class_class;
Optr layout_PEG_TerminalChoice;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18587 = new_Send((Optr)PEGTerminalChoiceStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18586 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGTerminalChoiceStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18587, (Optr)&t_method_return);
    Method PMethod18585 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18586, 1, PSend18587);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18585, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18590 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18589 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18590, (Optr)&t_method_return);
    Method PMethod18588 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18589, 1, PSend18590);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18588, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend18593 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode18592 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18593, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18591 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18592, 2, PSend18593, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod18591, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18595 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Array PArray18596 = new_Array_with(1, (Optr)VAR_char_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18599 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18602 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18601 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18602);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18603 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_indexOf_, 1, (Optr)PAssign18601);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18604 = new_Send((Optr)PSend18603, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18608 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18607 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18608, (Optr)&t_block_return);
    Block PBlock18606 = new_Block_with(empty_Array, empty_Array, PThreadedCode18607, 1, PSend18608);
    // ifTrue:. 
    Send PSend18605 = new_Send((Optr)PSend18604, SMB_ifTrue_, 1, (Optr)PBlock18606);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18609 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18610 = new_Send((Optr)PSend18609, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18611 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18600 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_push1, (Optr)PAssign18601, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18602, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend18603, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18604, (Optr)&t_send_ifTrue_, (Optr)PSend18605, (Optr)PBlock18606, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18609, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18610, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18611, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18598 = new_Block_with(PArray18599, empty_Array, PThreadedCode18600, 4, PSend18605, PSend18610, PSend18611, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18612 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18598);
    Array PThreadedCode18597 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18598, (Optr)&t_send1, (Optr)PSend18612, (Optr)&t_method_return);
    Method PMethod18594 = new_Method_with(PArray18595, PArray18596, empty_Array, PThreadedCode18597, 1, PSend18612);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18594, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18614 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18617 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18619 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18620 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_indexOf_, 1, (Optr)PSend18619);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18621 = new_Send((Optr)PSend18620, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18625 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18624 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18625, (Optr)&t_block_return);
    Block PBlock18623 = new_Block_with(empty_Array, empty_Array, PThreadedCode18624, 1, PSend18625);
    // ifTrue:. 
    Send PSend18622 = new_Send((Optr)PSend18621, SMB_ifTrue_, 1, (Optr)PBlock18623);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18626 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18618 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18619, (Optr)&t_send1, (Optr)PSend18620, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18621, (Optr)&t_send_ifTrue_, (Optr)PSend18622, (Optr)PBlock18623, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18626, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18616 = new_Block_with(PArray18617, empty_Array, PThreadedCode18618, 3, PSend18622, PSend18626, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18627 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18616);
    Array PThreadedCode18615 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18616, (Optr)&t_send1, (Optr)PSend18627, (Optr)&t_method_return);
    Method PMethod18613 = new_Method_with(PArray18614, empty_Array, empty_Array, PThreadedCode18615, 1, PSend18627);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18613, PEG_TerminalChoice_Class);
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