#include <lib/class/PEG/TerminalChoice.h>


Optr layout_PEG_TerminalChoice_Class_class;
Optr layout_PEG_TerminalChoice;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18979 = new_Send((Optr)PEGTerminalChoiceStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18978 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGTerminalChoiceStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18979, (Optr)&t_method_return);
    Method PMethod18977 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18978, 1, PSend18979);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18977, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18982 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18981 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18982, (Optr)&t_method_return);
    Method PMethod18980 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18981, 1, PSend18982);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18980, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend18985 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode18984 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18985, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18984, 2, PSend18985, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod18983, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18987 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Array PArray18988 = new_Array_with(1, (Optr)VAR_char_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18991 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18994 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18993 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18994);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18995 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_indexOf_, 1, (Optr)PAssign18993);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18996 = new_Send((Optr)PSend18995, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19000 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18999 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19000, (Optr)&t_block_return);
    Block PBlock18998 = new_Block_with(empty_Array, empty_Array, PThreadedCode18999, 1, PSend19000);
    // ifTrue:. 
    Send PSend18997 = new_Send((Optr)PSend18996, SMB_ifTrue_, 1, (Optr)PBlock18998);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend19001 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend19002 = new_Send((Optr)PSend19001, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend19003 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18992 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_push1, (Optr)PAssign18993, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18994, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend18995, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18996, (Optr)&t_send_ifTrue_, (Optr)PSend18997, (Optr)PBlock18998, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19001, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend19002, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19003, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18990 = new_Block_with(PArray18991, empty_Array, PThreadedCode18992, 4, PSend18997, PSend19002, PSend19003, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19004 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18990);
    Array PThreadedCode18989 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18990, (Optr)&t_send1, (Optr)PSend19004, (Optr)&t_method_return);
    Method PMethod18986 = new_Method_with(PArray18987, PArray18988, empty_Array, PThreadedCode18989, 1, PSend19004);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18986, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray19006 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray19009 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend19011 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend19012 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_indexOf_, 1, (Optr)PSend19011);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend19013 = new_Send((Optr)PSend19012, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend19017 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode19016 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend19017, (Optr)&t_block_return);
    Block PBlock19015 = new_Block_with(empty_Array, empty_Array, PThreadedCode19016, 1, PSend19017);
    // ifTrue:. 
    Send PSend19014 = new_Send((Optr)PSend19013, SMB_ifTrue_, 1, (Optr)PBlock19015);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend19018 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode19010 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19011, (Optr)&t_send1, (Optr)PSend19012, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend19013, (Optr)&t_send_ifTrue_, (Optr)PSend19014, (Optr)PBlock19015, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend19018, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock19008 = new_Block_with(PArray19009, empty_Array, PThreadedCode19010, 3, PSend19014, PSend19018, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend19019 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock19008);
    Array PThreadedCode19007 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock19008, (Optr)&t_send1, (Optr)PSend19019, (Optr)&t_method_return);
    Method PMethod19005 = new_Method_with(PArray19006, empty_Array, empty_Array, PThreadedCode19007, 1, PSend19019);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod19005, PEG_TerminalChoice_Class);
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