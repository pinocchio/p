#include <lib/class/PEG/TerminalChoice.h>


Optr layout_PEG_TerminalChoice_Class_class;
Optr layout_PEG_TerminalChoice;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18617 = new_Send((Optr)PEGTerminalChoiceStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGTerminalChoiceStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18617, (Optr)&t_method_return);
    Method PMethod18615 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18616, 1, PSend18617);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18615, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18620 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18619 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18620, (Optr)&t_method_return);
    Method PMethod18618 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18619, 1, PSend18620);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18618, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend18623 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode18622 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18623, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18621 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18622, 2, PSend18623, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod18621, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18625 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Array PArray18626 = new_Array_with(1, (Optr)VAR_char_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18629 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18632 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18631 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18632);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18633 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_indexOf_, 1, (Optr)PAssign18631);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18634 = new_Send((Optr)PSend18633, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18638 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18637 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18638, (Optr)&t_block_return);
    Block PBlock18636 = new_Block_with(empty_Array, empty_Array, PThreadedCode18637, 1, PSend18638);
    // ifTrue:. 
    Send PSend18635 = new_Send((Optr)PSend18634, SMB_ifTrue_, 1, (Optr)PBlock18636);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18639 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18640 = new_Send((Optr)PSend18639, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18641 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18630 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_push1, (Optr)PAssign18631, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18632, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend18633, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18634, (Optr)&t_send_ifTrue_, (Optr)PSend18635, (Optr)PBlock18636, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18639, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18640, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18641, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18628 = new_Block_with(PArray18629, empty_Array, PThreadedCode18630, 4, PSend18635, PSend18640, PSend18641, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18642 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18628);
    Array PThreadedCode18627 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18628, (Optr)&t_send1, (Optr)PSend18642, (Optr)&t_method_return);
    Method PMethod18624 = new_Method_with(PArray18625, PArray18626, empty_Array, PThreadedCode18627, 1, PSend18642);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18624, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18644 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18647 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18649 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18650 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_indexOf_, 1, (Optr)PSend18649);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18651 = new_Send((Optr)PSend18650, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18655 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18654 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18655, (Optr)&t_block_return);
    Block PBlock18653 = new_Block_with(empty_Array, empty_Array, PThreadedCode18654, 1, PSend18655);
    // ifTrue:. 
    Send PSend18652 = new_Send((Optr)PSend18651, SMB_ifTrue_, 1, (Optr)PBlock18653);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18656 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18648 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18649, (Optr)&t_send1, (Optr)PSend18650, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18651, (Optr)&t_send_ifTrue_, (Optr)PSend18652, (Optr)PBlock18653, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18656, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18646 = new_Block_with(PArray18647, empty_Array, PThreadedCode18648, 3, PSend18652, PSend18656, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18657 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18646);
    Array PThreadedCode18645 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18646, (Optr)&t_send1, (Optr)PSend18657, (Optr)&t_method_return);
    Method PMethod18643 = new_Method_with(PArray18644, empty_Array, empty_Array, PThreadedCode18645, 1, PSend18657);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18643, PEG_TerminalChoice_Class);
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