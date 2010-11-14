#include <lib/class/PEG/TerminalChoice.h>


Optr layout_PEG_TerminalChoice_Class_class;
Optr layout_PEG_TerminalChoice;


static void init_SMB_strongTimes() {
    Symbol SMB_strongTimes = new_Symbol(L"strongTimes");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18947 = new_Send((Optr)PEGTerminalChoiceStrongTimes_classReference, SMB_on_, 1, (Optr)slot_PEG_Terminal_terminal);
    Array PThreadedCode18946 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PEGTerminalChoiceStrongTimes_classReference, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_send1, (Optr)PSend18947, (Optr)&t_method_return);
    Method PMethod18945 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18946, 1, PSend18947);
    
    MethodClosure MC_SMB_strongTimes = new_MethodClosure((Method)PMethod18945, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_strongTimes, MC_SMB_strongTimes);
}


static void init_SMB_strongPlus() {
    Symbol SMB_strongPlus = new_Symbol(L"strongPlus");
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18950 = new_Send((Optr)PEGStrongOneOrMoreExpression_classReference, SMB_on_, 1, (Optr)self);
    Array PThreadedCode18949 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_class_reference, (Optr)PEGStrongOneOrMoreExpression_classReference, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18950, (Optr)&t_method_return);
    Method PMethod18948 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18949, 1, PSend18950);
    
    MethodClosure MC_SMB_strongPlus = new_MethodClosure((Method)PMethod18948, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_strongPlus, MC_SMB_strongPlus);
}


static void init_SMB_not() {
    Symbol SMB_not = new_Symbol(L"not");
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend18953 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode18952 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18953, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18952, 2, PSend18953, self);
    
    MethodClosure MC_SMB_not = new_MethodClosure((Method)PMethod18951, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_not, MC_SMB_not);
}


static void init_SMB_parseOn_() {
    Symbol SMB_parseOn_ = new_Symbol(L"parseOn:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18955 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR_char_0_1 = new_Variable_named(L"char", 0);
    Array PArray18956 = new_Array_with(1, (Optr)VAR_char_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18959 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18962 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Assign PAssign18961 = new_Assign((Optr)VAR_char_0_1, (Optr)PSend18962);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18963 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_indexOf_, 1, (Optr)PAssign18961);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18964 = new_Send((Optr)PSend18963, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18968 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18967 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18968, (Optr)&t_block_return);
    Block PBlock18966 = new_Block_with(empty_Array, empty_Array, PThreadedCode18967, 1, PSend18968);
    // ifTrue:. 
    Send PSend18965 = new_Send((Optr)PSend18964, SMB_ifTrue_, 1, (Optr)PBlock18966);
    Symbol SMB_stack = new_Symbol(L"stack");
    // stack. 
    Send PSend18969 = new_Send((Optr)VAR_input_0_0, SMB_stack, 0);
    Symbol SMB_push_ = new_Symbol(L"push:");
    // push:. 
    Send PSend18970 = new_Send((Optr)PSend18969, SMB_push_, 1, (Optr)VAR_char_0_1);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18971 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18960 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_push1, (Optr)PAssign18961, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18962, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend18963, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18964, (Optr)&t_send_ifTrue_, (Optr)PSend18965, (Optr)PBlock18966, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18969, (Optr)&t_push_variable, (Optr)VAR_char_0_1, (Optr)&t_send1, (Optr)PSend18970, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18971, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18958 = new_Block_with(PArray18959, empty_Array, PThreadedCode18960, 4, PSend18965, PSend18970, PSend18971, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18972 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18958);
    Array PThreadedCode18957 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18958, (Optr)&t_send1, (Optr)PSend18972, (Optr)&t_method_return);
    Method PMethod18954 = new_Method_with(PArray18955, PArray18956, empty_Array, PThreadedCode18957, 1, PSend18972);
    
    MethodClosure MC_SMB_parseOn_ = new_MethodClosure((Method)PMethod18954, PEG_TerminalChoice_Class);
    store_method(PEG_TerminalChoice_Class, SMB_parseOn_, MC_SMB_parseOn_);
}


static void init_SMB_omitMatch_() {
    Symbol SMB_omitMatch_ = new_Symbol(L"omitMatch:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Array PArray18974 = new_Array_with(1, (Optr)VAR_input_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18977 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_peek = new_Symbol(L"peek");
    // peek. 
    Send PSend18979 = new_Send((Optr)VAR_input_0_0, SMB_peek, 0);
    Symbol SMB_indexOf_ = new_Symbol(L"indexOf:");
    // indexOf:. 
    Send PSend18980 = new_Send((Optr)slot_PEG_Terminal_terminal, SMB_indexOf_, 1, (Optr)PSend18979);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18981 = new_Send((Optr)PSend18980, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18985 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18984 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18985, (Optr)&t_block_return);
    Block PBlock18983 = new_Block_with(empty_Array, empty_Array, PThreadedCode18984, 1, PSend18985);
    // ifTrue:. 
    Send PSend18982 = new_Send((Optr)PSend18981, SMB_ifTrue_, 1, (Optr)PBlock18983);
    Symbol SMB_forward = new_Symbol(L"forward");
    // forward. 
    Send PSend18986 = new_Send((Optr)VAR_input_0_0, SMB_forward, 0);
    Array PThreadedCode18978 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PEG_Terminal_terminal, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18979, (Optr)&t_send1, (Optr)PSend18980, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18981, (Optr)&t_send_ifTrue_, (Optr)PSend18982, (Optr)PBlock18983, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_send0, (Optr)PSend18986, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18976 = new_Block_with(PArray18977, empty_Array, PThreadedCode18978, 3, PSend18982, PSend18986, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18987 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18976);
    Array PThreadedCode18975 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18976, (Optr)&t_send1, (Optr)PSend18987, (Optr)&t_method_return);
    Method PMethod18973 = new_Method_with(PArray18974, empty_Array, empty_Array, PThreadedCode18975, 1, PSend18987);
    
    MethodClosure MC_SMB_omitMatch_ = new_MethodClosure((Method)PMethod18973, PEG_TerminalChoice_Class);
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