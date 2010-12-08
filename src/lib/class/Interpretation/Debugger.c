#include <lib/class/Interpretation/Debugger.h>


Optr layout_Interpretation_Debugger_Class_class;
Optr slot_Interpretation_Debugger_escapeShell;
Optr layout_Interpretation_Debugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16960 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16963 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16969 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16968 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16969, (Optr)&t_block_return);
    Block PBlock16967 = new_Block_with(empty_Array, empty_Array, PThreadedCode16968, 1, PSend16969);
    // ifNil:. 
    Send PSend16966 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16967);
    Assign PAssign16965 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16966);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16973 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16972 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16973);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16974 = new_Send((Optr)PAssign16972, SMB_isNil, 0);
    Array PThreadedCode16971 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16972, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16973, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16974, (Optr)&t_block_return);
    Block PBlock16970 = new_Block_with(empty_Array, empty_Array, PThreadedCode16971, 1, PSend16974);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16977 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    String string_16978 = new_String(L"  ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16978_Const = new_Constant((Optr)string_16978);
    // <<. 
    Send PSend16979 = new_Send((Optr)PSend16977, SMB__shiftLeft_, 1, (Optr)string_16978_Const);
    Array PThreadedCode16976 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16977, (Optr)&t_push1, (Optr)string_16978, (Optr)&t_send1, (Optr)PSend16979, (Optr)&t_block_return);
    Block PBlock16975 = new_Block_with(empty_Array, empty_Array, PThreadedCode16976, 1, PSend16979);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16980 = new_Send((Optr)PBlock16970, SMB_whileFalse_, 1, (Optr)PBlock16975);
    Array PThreadedCode16964 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16965, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16967, (Optr)&t_send1, (Optr)PSend16966, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16970, (Optr)&t_push_closure, (Optr)PBlock16975, (Optr)&t_send1, (Optr)PSend16980, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16962 = new_Block_with(PArray16963, empty_Array, PThreadedCode16964, 3, PAssign16965, PSend16980, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16981 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16962);
    Array PThreadedCode16961 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16962, (Optr)&t_send1, (Optr)PSend16981, (Optr)&t_method_return);
    Method PMethod16959 = new_Method_with(empty_Array, PArray16960, empty_Array, PThreadedCode16961, 1, PSend16981);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16959, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16985 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_input_2_0 = new_Variable_named(L"input", 2);
    Array PArray16989 = new_Array_with(1, (Optr)VAR_input_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16991 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_input_2_0);
    Array PThreadedCode16990 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_input_2_0, (Optr)&t_send1, (Optr)PSend16991, (Optr)&t_method_return);
    Block PBlock16988 = new_Block_with(PArray16989, empty_Array, PThreadedCode16990, 1, PSend16991);
    Assign PAssign16987 = new_Assign((Optr)slot_Interpretation_Debugger_escapeShell, (Optr)PBlock16988);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend16994 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    // interpretFromStdin. 
    Send PSend16995 = new_Send((Optr)self, SMB_interpretFromStdin, 0);
    Array PThreadedCode16993 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16994, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16995, (Optr)&t_block_return);
    Block PBlock16992 = new_Block_with(empty_Array, empty_Array, PThreadedCode16993, 2, PSend16994, PSend16995);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16996 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock16992);
    Array PThreadedCode16986 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign16987, (Optr)&t_push_closure, (Optr)PBlock16988, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock16992, (Optr)&t_send1, (Optr)PSend16996, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16984 = new_Block_with(PArray16985, empty_Array, PThreadedCode16986, 3, PAssign16987, PSend16996, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16997 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16984);
    Array PThreadedCode16983 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16984, (Optr)&t_send1, (Optr)PSend16997, (Optr)&t_method_return);
    Method PMethod16982 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16983, 1, PSend16997);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod16982, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16999 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend17001 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend17002 = new_Send((Optr)self, SMB_printStacktrace, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend17003 = new_Send((Optr)self, SMB_shell, 0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend17004 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode17000 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend17001, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17002, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17003, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17004, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16998 = new_Method_with(PArray16999, empty_Array, empty_Array, PThreadedCode17000, 5, PSend17001, PSend17002, PSend17003, PSend17004, self);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod16998, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray17006 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend17008 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17010 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17012 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17013 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode17011 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend17012, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend17013, (Optr)&t_method_return);
    Block PBlock17009 = new_Block_with(PArray17010, empty_Array, PThreadedCode17011, 2, PSend17012, PSend17013);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend17014 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17015 = new_Send((Optr)PBlock17009, SMB_value_, 1, (Optr)PSend17014);
    Array PThreadedCode17007 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17008, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17009, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17014, (Optr)&t_send1, (Optr)PSend17015, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17005 = new_Method_with(PArray17006, empty_Array, empty_Array, PThreadedCode17007, 3, PSend17008, PSend17015, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod17005, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray17017 = new_Array_with(1, (Optr)VAR_code_0_0);
    Array PThreadedCode17018 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod17016 = new_Method_with(PArray17017, empty_Array, empty_Array, PThreadedCode17018, 1, true_Const);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod17016, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_classSetStepBlock_() {
    Symbol SMB_classSetStepBlock_ = new_Symbol(L"classSetStepBlock:");
    Variable VAR_testClasses_0_0 = new_Variable_named(L"testClasses", 0);
    Array PArray17020 = new_Array_with(1, (Optr)VAR_testClasses_0_0);
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray17023 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Variable VAR_testClass_2_0 = new_Variable_named(L"testClass", 2);
    Array PArray17026 = new_Array_with(1, (Optr)VAR_testClass_2_0);
    Symbol SMB_inheritsFrom_ = new_Symbol(L"inheritsFrom:");
    // inheritsFrom:. 
    Send PSend17028 = new_Send((Optr)VAR_class_1_1, SMB_inheritsFrom_, 1, (Optr)VAR_testClass_2_0);
    Array PThreadedCode17027 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_push_variable, (Optr)VAR_testClass_2_0, (Optr)&t_send1, (Optr)PSend17028, (Optr)&t_method_return);
    Block PBlock17025 = new_Block_with(PArray17026, empty_Array, PThreadedCode17027, 1, PSend17028);
    Symbol SMB_anySatisfy_ = new_Symbol(L"anySatisfy:");
    // anySatisfy:. 
    Send PSend17029 = new_Send((Optr)VAR_testClasses_0_0, SMB_anySatisfy_, 1, (Optr)PBlock17025);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17033 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend17034 = new_Send((Optr)PSend17033, SMB_name, 0);
    String string_17035 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_17035_Const = new_Constant((Optr)string_17035);
    // ,. 
    Send PSend17036 = new_Send((Optr)PSend17034, SMB__append_, 1, (Optr)string_17035_Const);
    // ,. 
    Send PSend17037 = new_Send((Optr)PSend17036, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend17038 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend17037);
    Array PThreadedCode17032 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend17033, (Optr)&t_send0, (Optr)PSend17034, (Optr)&t_push1, (Optr)string_17035, (Optr)&t_send1, (Optr)PSend17036, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend17037, (Optr)&t_send1, (Optr)PSend17038, (Optr)&t_block_return);
    Block PBlock17031 = new_Block_with(empty_Array, empty_Array, PThreadedCode17032, 1, PSend17038);
    // ifTrue:. 
    Send PSend17030 = new_Send((Optr)PSend17029, SMB_ifTrue_, 1, (Optr)PBlock17031);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17039 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode17024 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_testClasses_0_0, (Optr)&t_push_closure, (Optr)PBlock17025, (Optr)&t_send1, (Optr)PSend17029, (Optr)&t_send_ifTrue_, (Optr)PSend17030, (Optr)PBlock17031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend17039, (Optr)&t_method_return);
    Block PBlock17022 = new_Block_with(PArray17023, empty_Array, PThreadedCode17024, 2, PSend17030, PSend17039);
    Array PThreadedCode17021 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock17022, (Optr)&t_method_return);
    Method PMethod17019 = new_Method_with(PArray17020, empty_Array, empty_Array, PThreadedCode17021, 1, PBlock17022);
    
    MethodClosure MC_SMB_classSetStepBlock_ = new_MethodClosure((Method)PMethod17019, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_classSetStepBlock_, MC_SMB_classSetStepBlock_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend17042 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    String string_17043 = new_String(L"pidb> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_17043_Const = new_Constant((Optr)string_17043);
    // <<. 
    Send PSend17044 = new_Send((Optr)PSend17042, SMB__shiftLeft_, 1, (Optr)string_17043_Const);
    Array PThreadedCode17041 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17042, (Optr)&t_push1, (Optr)string_17043, (Optr)&t_send1, (Optr)PSend17044, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17041, 2, PSend17044, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod17040, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_executeAction_() {
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray17046 = new_Array_with(1, (Optr)VAR_action_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17048 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Array PThreadedCode17047 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17048, (Optr)&t_method_return);
    Method PMethod17045 = new_Method_with(PArray17046, empty_Array, empty_Array, PThreadedCode17047, 1, PSend17048);
    
    MethodClosure MC_SMB_executeAction_ = new_MethodClosure((Method)PMethod17045, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_executeAction_, MC_SMB_executeAction_);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray17050 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17053 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend17057 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend17058 = new_Send((Optr)PSend17057, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode17056 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend17057, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17058, (Optr)&t_block_return);
    Block PBlock17055 = new_Block_with(empty_Array, empty_Array, PThreadedCode17056, 1, PSend17058);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray17060 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend17062 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend17063 = new_Send((Optr)PSend17062, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend17067 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17068 = new_Send((Optr)PSend17067, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17069 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17068);
    Array PThreadedCode17066 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend17067, (Optr)&t_send0, (Optr)PSend17068, (Optr)&t_send1, (Optr)PSend17069, (Optr)&t_block_return);
    Block PBlock17065 = new_Block_with(empty_Array, empty_Array, PThreadedCode17066, 1, PSend17069);
    // ifFalse:. 
    Send PSend17064 = new_Send((Optr)PSend17063, SMB_ifFalse_, 1, (Optr)PBlock17065);
    Array PThreadedCode17061 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend17062, (Optr)&t_send0, (Optr)PSend17063, (Optr)&t_send_ifFalse_, (Optr)PSend17064, (Optr)PBlock17065, (Optr)&t_method_return);
    Block PBlock17059 = new_Block_with(PArray17060, empty_Array, PThreadedCode17061, 1, PSend17064);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend17070 = new_Send((Optr)PBlock17055, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock17059);
    Array PThreadedCode17054 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock17055, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock17059, (Optr)&t_send2, (Optr)PSend17070, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock17052 = new_Block_with(PArray17053, empty_Array, PThreadedCode17054, 2, PSend17070, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17071 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17052);
    Array PThreadedCode17051 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17052, (Optr)&t_send1, (Optr)PSend17071, (Optr)&t_method_return);
    Method PMethod17049 = new_Method_with(PArray17050, empty_Array, empty_Array, PThreadedCode17051, 1, PSend17071);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod17049, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_skipStepBlock() {
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray17075 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17077 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode17076 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend17077, (Optr)&t_method_return);
    Block PBlock17074 = new_Block_with(PArray17075, empty_Array, PThreadedCode17076, 1, PSend17077);
    Array PThreadedCode17073 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock17074, (Optr)&t_method_return);
    Method PMethod17072 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17073, 1, PBlock17074);
    
    MethodClosure MC_SMB_skipStepBlock = new_MethodClosure((Method)PMethod17072, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipStepBlock, MC_SMB_skipStepBlock);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray17081 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17083 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend17084 = new_Send((Optr)PSend17083, SMB_name, 0);
    String string_17085 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_17085_Const = new_Constant((Optr)string_17085);
    // ,. 
    Send PSend17086 = new_Send((Optr)PSend17084, SMB__append_, 1, (Optr)string_17085_Const);
    // ,. 
    Send PSend17087 = new_Send((Optr)PSend17086, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend17088 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend17087);
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    // debugShellWithAction:. 
    Send PSend17089 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode17082 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend17083, (Optr)&t_send0, (Optr)PSend17084, (Optr)&t_push1, (Optr)string_17085, (Optr)&t_send1, (Optr)PSend17086, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend17087, (Optr)&t_send1, (Optr)PSend17088, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend17089, (Optr)&t_method_return);
    Block PBlock17080 = new_Block_with(PArray17081, empty_Array, PThreadedCode17082, 2, PSend17088, PSend17089);
    Array PThreadedCode17079 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock17080, (Optr)&t_method_return);
    Method PMethod17078 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17079, 1, PBlock17080);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod17078, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_skipWith_() {
    Symbol SMB_skipWith_ = new_Symbol(L"skipWith:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray17091 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_oldBlock_0_1 = new_Variable_named(L"oldBlock", 0);
    Variable VAR_result_0_2 = new_Variable_named(L"result", 0);
    Array PArray17092 = new_Array_with(2, (Optr)VAR_oldBlock_0_1, (Optr)VAR_result_0_2);
    Assign PAssign17094 = new_Assign((Optr)VAR_oldBlock_0_1, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock);
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    // skipStepBlock. 
    Send PSend17096 = new_Send((Optr)self, SMB_skipStepBlock, 0);
    Assign PAssign17095 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend17096);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17098 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Assign PAssign17097 = new_Assign((Optr)VAR_result_0_2, (Optr)PSend17098);
    Assign PAssign17099 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_oldBlock_0_1);
    Array PThreadedCode17093 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign17094, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17095, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17097, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17098, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17099, (Optr)&t_push_variable, (Optr)VAR_oldBlock_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_result_0_2, (Optr)&t_method_return);
    Method PMethod17090 = new_Method_with(PArray17091, PArray17092, empty_Array, PThreadedCode17093, 5, PAssign17094, PAssign17095, PAssign17097, PAssign17099, VAR_result_0_2);
    
    MethodClosure MC_SMB_skipWith_ = new_MethodClosure((Method)PMethod17090, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipWith_, MC_SMB_skipWith_);
}


static void init_SMB_debugShellWithAction_() {
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray17101 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_input_0_1 = new_Variable_named(L"input", 0);
    Array PArray17102 = new_Array_with(1, (Optr)VAR_input_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17105 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend17108 = new_Send((Optr)self, SMB_shell, 0);
    Assign PAssign17107 = new_Assign((Optr)VAR_input_0_1, (Optr)PSend17108);
    String string_17109 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_17109_Const = new_Constant((Optr)string_17109);
    // =. 
    Send PSend17110 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17109_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17114 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17115 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17114);
    Array PThreadedCode17113 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17114, (Optr)&t_send1, (Optr)PSend17115, (Optr)&t_block_return);
    Block PBlock17112 = new_Block_with(empty_Array, empty_Array, PThreadedCode17113, 1, PSend17115);
    // ifTrue:. 
    Send PSend17111 = new_Send((Optr)PSend17110, SMB_ifTrue_, 1, (Optr)PBlock17112);
    String string_17116 = new_String(L"o");
    Constant string_17116_Const = new_Constant((Optr)string_17116);
    // =. 
    Send PSend17117 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17116_Const);
    Symbol SMB_skipWith_ = new_Symbol(L"skipWith:");
    // skipWith:. 
    Send PSend17121 = new_Send((Optr)self, SMB_skipWith_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend17122 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17121);
    Array PThreadedCode17120 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend17121, (Optr)&t_send1, (Optr)PSend17122, (Optr)&t_block_return);
    Block PBlock17119 = new_Block_with(empty_Array, empty_Array, PThreadedCode17120, 1, PSend17122);
    // ifTrue:. 
    Send PSend17118 = new_Send((Optr)PSend17117, SMB_ifTrue_, 1, (Optr)PBlock17119);
    String string_17123 = new_String(L"i");
    Constant string_17123_Const = new_Constant((Optr)string_17123);
    // =. 
    Send PSend17124 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17123_Const);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend17128 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend17129 = new_Send((Optr)PSend17128, SMB_inspect, 0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend17130 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17131 = new_Send((Optr)PSend17130, SMB_lf, 0);
    // debugShellWithAction:. 
    Send PSend17132 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend17133 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17132);
    Array PThreadedCode17127 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17128, (Optr)&t_send0, (Optr)PSend17129, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17130, (Optr)&t_send0, (Optr)PSend17131, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend17132, (Optr)&t_send1, (Optr)PSend17133, (Optr)&t_block_return);
    Block PBlock17126 = new_Block_with(empty_Array, empty_Array, PThreadedCode17127, 3, PSend17129, PSend17131, PSend17133);
    // ifTrue:. 
    Send PSend17125 = new_Send((Optr)PSend17124, SMB_ifTrue_, 1, (Optr)PBlock17126);
    String string_17134 = new_String(L"j");
    Constant string_17134_Const = new_Constant((Optr)string_17134);
    // =. 
    Send PSend17135 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17134_Const);
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skipBlock:. 
    Send PSend17140 = new_Send((Optr)self, SMB_skipBlock_, 1, (Optr)int_2_Const);
    Assign PAssign17139 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend17140);
    // value. 
    Send PSend17141 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    // escape:. 
    Send PSend17142 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17141);
    Array PThreadedCode17138 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17139, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17140, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17141, (Optr)&t_send1, (Optr)PSend17142, (Optr)&t_block_return);
    Block PBlock17137 = new_Block_with(empty_Array, empty_Array, PThreadedCode17138, 2, PAssign17139, PSend17142);
    // ifTrue:. 
    Send PSend17136 = new_Send((Optr)PSend17135, SMB_ifTrue_, 1, (Optr)PBlock17137);
    Array PThreadedCode17106 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign17107, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17109, (Optr)&t_send1, (Optr)PSend17110, (Optr)&t_send_ifTrue_, (Optr)PSend17111, (Optr)PBlock17112, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17116, (Optr)&t_send1, (Optr)PSend17117, (Optr)&t_send_ifTrue_, (Optr)PSend17118, (Optr)PBlock17119, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17123, (Optr)&t_send1, (Optr)PSend17124, (Optr)&t_send_ifTrue_, (Optr)PSend17125, (Optr)PBlock17126, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17134, (Optr)&t_send1, (Optr)PSend17135, (Optr)&t_send_ifTrue_, (Optr)PSend17136, (Optr)PBlock17137, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17104 = new_Block_with(PArray17105, empty_Array, PThreadedCode17106, 6, PAssign17107, PSend17111, PSend17118, PSend17125, PSend17136, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17143 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17104);
    Array PThreadedCode17103 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17104, (Optr)&t_send1, (Optr)PSend17143, (Optr)&t_method_return);
    Method PMethod17100 = new_Method_with(PArray17101, PArray17102, empty_Array, PThreadedCode17103, 1, PSend17143);
    
    MethodClosure MC_SMB_debugShellWithAction_ = new_MethodClosure((Method)PMethod17100, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_debugShellWithAction_, MC_SMB_debugShellWithAction_);
}


static void init_SMB_interpretFromStdin() {
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    Variable VAR_readline_0_0 = new_Variable_named(L"readline", 0);
    Array PArray17145 = new_Array_with(1, (Optr)VAR_readline_0_0);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend17149 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend17150 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    // from:to:for:. 
    Send PSend17148 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)PSend17149, (Optr)PSend17150, (Optr)self);
    Assign PAssign17147 = new_Assign((Optr)VAR_readline_0_0, (Optr)PSend17148);
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend17151 = new_Send((Optr)VAR_readline_0_0, SMB_readLine, 0);
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    // interpretLine:. 
    Send PSend17152 = new_Send((Optr)self, SMB_interpretLine_, 1, (Optr)PSend17151);
    Array PThreadedCode17146 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17147, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend17149, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17150, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend17148, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_0, (Optr)&t_send0, (Optr)PSend17151, (Optr)&t_send1, (Optr)PSend17152, (Optr)&t_method_return);
    Method PMethod17144 = new_Method_with(empty_Array, PArray17145, empty_Array, PThreadedCode17146, 2, PAssign17147, PSend17152);
    
    MethodClosure MC_SMB_interpretFromStdin = new_MethodClosure((Method)PMethod17144, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretFromStdin, MC_SMB_interpretFromStdin);
}


static void init_SMB_interpretLine_() {
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray17154 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Array PArray17155 = new_Array_with(1, (Optr)VAR_value_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17158 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_17160 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_17160_Const = new_Constant((Optr)string_17160);
    // =. 
    Send PSend17161 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17160_Const);
    String string_17164 = new_String(L"o");
    Constant string_17164_Const = new_Constant((Optr)string_17164);
    // =. 
    Send PSend17165 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17164_Const);
    String string_17168 = new_String(L"i");
    Constant string_17168_Const = new_Constant((Optr)string_17168);
    // =. 
    Send PSend17169 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17168_Const);
    String string_17172 = new_String(L"j");
    Constant string_17172_Const = new_Constant((Optr)string_17172);
    // =. 
    Send PSend17173 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17172_Const);
    Array PThreadedCode17171 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17172, (Optr)&t_send1, (Optr)PSend17173, (Optr)&t_block_return);
    Block PBlock17170 = new_Block_with(empty_Array, empty_Array, PThreadedCode17171, 1, PSend17173);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend17174 = new_Send((Optr)PSend17169, SMB_or_, 1, (Optr)PBlock17170);
    Array PThreadedCode17167 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17168, (Optr)&t_send1, (Optr)PSend17169, (Optr)&t_push_closure, (Optr)PBlock17170, (Optr)&t_send1, (Optr)PSend17174, (Optr)&t_block_return);
    Block PBlock17166 = new_Block_with(empty_Array, empty_Array, PThreadedCode17167, 1, PSend17174);
    // or:. 
    Send PSend17175 = new_Send((Optr)PSend17165, SMB_or_, 1, (Optr)PBlock17166);
    Array PThreadedCode17163 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17164, (Optr)&t_send1, (Optr)PSend17165, (Optr)&t_push_closure, (Optr)PBlock17166, (Optr)&t_send1, (Optr)PSend17175, (Optr)&t_block_return);
    Block PBlock17162 = new_Block_with(empty_Array, empty_Array, PThreadedCode17163, 1, PSend17175);
    // or:. 
    Send PSend17176 = new_Send((Optr)PSend17161, SMB_or_, 1, (Optr)PBlock17162);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17180 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17181 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17180);
    Array PThreadedCode17179 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17180, (Optr)&t_send1, (Optr)PSend17181, (Optr)&t_block_return);
    Block PBlock17178 = new_Block_with(empty_Array, empty_Array, PThreadedCode17179, 1, PSend17181);
    // ifTrue:. 
    Send PSend17177 = new_Send((Optr)PSend17176, SMB_ifTrue_, 1, (Optr)PBlock17178);
    String string_17182 = new_String(L"");
    Constant string_17182_Const = new_Constant((Optr)string_17182);
    // =. 
    Send PSend17183 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17182_Const);
    String string_17187 = new_String(L"s");
    Constant string_17187_Const = new_Constant((Optr)string_17187);
    // value:. 
    Send PSend17188 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)string_17187_Const);
    // escape:. 
    Send PSend17189 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17188);
    Array PThreadedCode17186 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push1, (Optr)string_17187, (Optr)&t_send1, (Optr)PSend17188, (Optr)&t_send1, (Optr)PSend17189, (Optr)&t_block_return);
    Block PBlock17185 = new_Block_with(empty_Array, empty_Array, PThreadedCode17186, 1, PSend17189);
    // ifTrue:. 
    Send PSend17184 = new_Send((Optr)PSend17183, SMB_ifTrue_, 1, (Optr)PBlock17185);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend17195 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17194 = new_Send((Optr)PSend17195, SMB_selector, 0);
    // perform:. 
    Send PSend17193 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend17194);
    Assign PAssign17192 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend17193);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend17196 = new_Send((Optr)VAR_value_0_1, SMB_inspect, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend17197 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17198 = new_Send((Optr)PSend17197, SMB_lf, 0);
    // escape:. 
    Send PSend17199 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_value_0_1);
    Array PThreadedCode17191 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign17192, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17195, (Optr)&t_send0, (Optr)PSend17194, (Optr)&t_send1, (Optr)PSend17193, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send0, (Optr)PSend17196, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17197, (Optr)&t_send0, (Optr)PSend17198, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_send1, (Optr)PSend17199, (Optr)&t_block_return);
    Block PBlock17190 = new_Block_with(empty_Array, empty_Array, PThreadedCode17191, 4, PAssign17192, PSend17196, PSend17198, PSend17199);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray17201 = new_Array_with(1, (Optr)VAR_ex_2_0);
    // stderr. 
    Send PSend17203 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend17204 = new_Send((Optr)PSend17203, SMB_red, 0);
    // stderr. 
    Send PSend17205 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    // warnOn:. 
    Send PSend17206 = new_Send((Optr)VAR_ex_2_0, SMB_warnOn_, 1, (Optr)PSend17205);
    // stderr. 
    Send PSend17207 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend17208 = new_Send((Optr)PSend17207, SMB_normal, 0);
    // stderr. 
    Send PSend17209 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    // lf. 
    Send PSend17210 = new_Send((Optr)PSend17209, SMB_lf, 0);
    Array PThreadedCode17202 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17203, (Optr)&t_send0, (Optr)PSend17204, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend17205, (Optr)&t_send1, (Optr)PSend17206, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17207, (Optr)&t_send0, (Optr)PSend17208, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend17209, (Optr)&t_send0, (Optr)PSend17210, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVoid_classReference, (Optr)&t_method_return);
    Block PBlock17200 = new_Block_with(PArray17201, empty_Array, PThreadedCode17202, 5, PSend17204, PSend17206, PSend17208, PSend17210, PVoid_classReference);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend17211 = new_Send((Optr)PBlock17190, SMB_on_do_, 2, (Optr)Object_classReference, (Optr)PBlock17200);
    Array PThreadedCode17159 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17160, (Optr)&t_send1, (Optr)PSend17161, (Optr)&t_push_closure, (Optr)PBlock17162, (Optr)&t_send1, (Optr)PSend17176, (Optr)&t_send_ifTrue_, (Optr)PSend17177, (Optr)PBlock17178, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17182, (Optr)&t_send1, (Optr)PSend17183, (Optr)&t_send_ifTrue_, (Optr)PSend17184, (Optr)PBlock17185, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17190, (Optr)&t_push_class_reference, (Optr)Object_classReference, (Optr)&t_push_closure, (Optr)PBlock17200, (Optr)&t_send2, (Optr)PSend17211, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17157 = new_Block_with(PArray17158, empty_Array, PThreadedCode17159, 4, PSend17177, PSend17184, PSend17211, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17212 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17157);
    Array PThreadedCode17156 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17157, (Optr)&t_send1, (Optr)PSend17212, (Optr)&t_method_return);
    Method PMethod17153 = new_Method_with(PArray17154, PArray17155, empty_Array, PThreadedCode17156, 1, PSend17212);
    
    MethodClosure MC_SMB_interpretLine_ = new_MethodClosure((Method)PMethod17153, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretLine_, MC_SMB_interpretLine_);
}


static void init_SMB_printStacktrace() {
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend17215 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_printStacktrace, 0);
    Array PThreadedCode17214 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17215, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17213 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17214, 2, PSend17215, self);
    
    MethodClosure MC_SMB_printStacktrace = new_MethodClosure((Method)PMethod17213, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_printStacktrace, MC_SMB_printStacktrace);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray17217 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_methodString_0_1 = new_Variable_named(L"methodString", 0);
    Variable VAR_method_0_2 = new_Variable_named(L"method", 0);
    Array PArray17218 = new_Array_with(2, (Optr)VAR_methodString_0_1, (Optr)VAR_method_0_2);
    String string_17224 = new_String(L"DoIt ^[");
    Constant string_17224_Const = new_Constant((Optr)string_17224);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17226 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend17225 = new_Send((Optr)PSend17226, SMB_asString, 0);
    // ,. 
    Send PSend17223 = new_Send((Optr)string_17224_Const, SMB__append_, 1, (Optr)PSend17225);
    // ,. 
    Send PSend17222 = new_Send((Optr)PSend17223, SMB__append_, 1, (Optr)VAR_code_0_0);
    String string_17227 = new_String(L"] value");
    Constant string_17227_Const = new_Constant((Optr)string_17227);
    // ,. 
    Send PSend17221 = new_Send((Optr)PSend17222, SMB__append_, 1, (Optr)string_17227_Const);
    Assign PAssign17220 = new_Assign((Optr)VAR_methodString_0_1, (Optr)PSend17221);
    Symbol SMB_compile_on_ = new_Symbol(L"compile:on:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17230 = new_Send((Optr)self, SMB_class, 0);
    // compile:on:. 
    Send PSend17229 = new_Send((Optr)PCompiler_classReference, SMB_compile_on_, 2, (Optr)VAR_methodString_0_1, (Optr)PSend17230);
    Assign PAssign17228 = new_Assign((Optr)VAR_method_0_2, (Optr)PSend17229);
    // class. 
    Send PSend17231 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_methods = new_Symbol(L"methods");
    // methods. 
    Send PSend17232 = new_Send((Optr)PSend17231, SMB_methods, 0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17233 = new_Send((Optr)VAR_method_0_2, SMB_selector, 0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend17234 = new_Send((Optr)PSend17232, SMB_at_put_, 2, (Optr)PSend17233, (Optr)VAR_method_0_2);
    Array PThreadedCode17219 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign17220, (Optr)&t_push1, (Optr)string_17224, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17226, (Optr)&t_send0, (Optr)PSend17225, (Optr)&t_send1, (Optr)PSend17223, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17222, (Optr)&t_push1, (Optr)string_17227, (Optr)&t_send1, (Optr)PSend17221, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17228, (Optr)&t_push_class_reference, (Optr)PCompiler_classReference, (Optr)&t_push_variable, (Optr)VAR_methodString_0_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17230, (Optr)&t_send2, (Optr)PSend17229, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17231, (Optr)&t_send0, (Optr)PSend17232, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send0, (Optr)PSend17233, (Optr)&t_push_variable, (Optr)VAR_method_0_2, (Optr)&t_send2, (Optr)PSend17234, (Optr)&t_method_return);
    Method PMethod17216 = new_Method_with(PArray17217, PArray17218, empty_Array, PThreadedCode17219, 3, PAssign17220, PAssign17228, PSend17234);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod17216, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_skipBlock_() {
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    Variable VAR_count_0_0 = new_Variable_named(L"count", 0);
    Array PArray17236 = new_Array_with(1, (Optr)VAR_count_0_0);
    Variable VAR_skips_0_1 = new_Variable_named(L"skips", 0);
    Variable VAR_previousBlock_0_2 = new_Variable_named(L"previousBlock", 0);
    Array PArray17237 = new_Array_with(2, (Optr)VAR_skips_0_1, (Optr)VAR_previousBlock_0_2);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17239 = new_Assign((Optr)VAR_skips_0_1, (Optr)int_0_Const);
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    // stepBlock. 
    Send PSend17241 = new_Send((Optr)self, SMB_stepBlock, 0);
    Assign PAssign17240 = new_Assign((Optr)VAR_previousBlock_0_2, (Optr)PSend17241);
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray17243 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend17246 = new_Send((Optr)VAR_skips_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17245 = new_Assign((Optr)VAR_skips_0_1, (Optr)PSend17246);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend17247 = new_Send((Optr)VAR_skips_0_1, SMB__gt__equals_, 1, (Optr)VAR_count_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    // stepBlock:. 
    Send PSend17251 = new_Send((Optr)self, SMB_stepBlock_, 1, (Optr)VAR_previousBlock_0_2);
    Array PThreadedCode17250 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_previousBlock_0_2, (Optr)&t_send1, (Optr)PSend17251, (Optr)&t_block_return);
    Block PBlock17249 = new_Block_with(empty_Array, empty_Array, PThreadedCode17250, 1, PSend17251);
    // ifTrue:. 
    Send PSend17248 = new_Send((Optr)PSend17247, SMB_ifTrue_, 1, (Optr)PBlock17249);
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    // executeAction:. 
    Send PSend17252 = new_Send((Optr)self, SMB_executeAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode17244 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17245, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17246, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_variable, (Optr)VAR_count_0_0, (Optr)&t_send1, (Optr)PSend17247, (Optr)&t_send_ifTrue_, (Optr)PSend17248, (Optr)PBlock17249, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend17252, (Optr)&t_method_return);
    Block PBlock17242 = new_Block_with(PArray17243, empty_Array, PThreadedCode17244, 3, PAssign17245, PSend17248, PSend17252);
    Array PThreadedCode17238 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign17239, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17240, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17241, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17242, (Optr)&t_method_return);
    Method PMethod17235 = new_Method_with(PArray17236, PArray17237, empty_Array, PThreadedCode17238, 3, PAssign17239, PAssign17240, PBlock17242);
    
    MethodClosure MC_SMB_skipBlock_ = new_MethodClosure((Method)PMethod17235, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipBlock_, MC_SMB_skipBlock_);
}


static void init_SMB_classStepBlock_() {
    Symbol SMB_classStepBlock_ = new_Symbol(L"classStepBlock:");
    Variable VAR_testClass_0_0 = new_Variable_named(L"testClass", 0);
    Array PArray17254 = new_Array_with(1, (Optr)VAR_testClass_0_0);
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray17257 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_inheritsFrom_ = new_Symbol(L"inheritsFrom:");
    // inheritsFrom:. 
    Send PSend17259 = new_Send((Optr)VAR_class_1_1, SMB_inheritsFrom_, 1, (Optr)VAR_testClass_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17263 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend17264 = new_Send((Optr)PSend17263, SMB_name, 0);
    String string_17265 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_17265_Const = new_Constant((Optr)string_17265);
    // ,. 
    Send PSend17266 = new_Send((Optr)PSend17264, SMB__append_, 1, (Optr)string_17265_Const);
    // ,. 
    Send PSend17267 = new_Send((Optr)PSend17266, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend17268 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend17267);
    Array PThreadedCode17262 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend17263, (Optr)&t_send0, (Optr)PSend17264, (Optr)&t_push1, (Optr)string_17265, (Optr)&t_send1, (Optr)PSend17266, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend17267, (Optr)&t_send1, (Optr)PSend17268, (Optr)&t_block_return);
    Block PBlock17261 = new_Block_with(empty_Array, empty_Array, PThreadedCode17262, 1, PSend17268);
    // ifTrue:. 
    Send PSend17260 = new_Send((Optr)PSend17259, SMB_ifTrue_, 1, (Optr)PBlock17261);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17269 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode17258 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_class_1_1, (Optr)&t_push_variable, (Optr)VAR_testClass_0_0, (Optr)&t_send1, (Optr)PSend17259, (Optr)&t_send_ifTrue_, (Optr)PSend17260, (Optr)PBlock17261, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend17269, (Optr)&t_method_return);
    Block PBlock17256 = new_Block_with(PArray17257, empty_Array, PThreadedCode17258, 2, PSend17260, PSend17269);
    Array PThreadedCode17255 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock17256, (Optr)&t_method_return);
    Method PMethod17253 = new_Method_with(PArray17254, empty_Array, empty_Array, PThreadedCode17255, 1, PBlock17256);
    
    MethodClosure MC_SMB_classStepBlock_ = new_MethodClosure((Method)PMethod17253, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_classStepBlock_, MC_SMB_classStepBlock_);
}

void init_Interpretation_PDebugger_layout() {
    layout_Interpretation_Debugger_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Interpretation_Debugger_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Interpretation_Debugger_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Interpretation_Debugger_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Interpretation_Debugger_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Interpretation_Debugger_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Debugger = new_Symbol(L"Debugger");
    slot_Interpretation_Debugger_escapeShell = (Optr)new_Slot(3, L"escapeShell");
    layout_Interpretation_Debugger = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Interpretation_Debugger)->values[0] = slot_Interpretation_Interpreter_context; // context 
    ((Array)layout_Interpretation_Debugger)->values[1] = slot_Interpretation_Interpreter_nextInterpreter; // nextInterpreter 
    ((Array)layout_Interpretation_Debugger)->values[2] = slot_Interpretation_SteppingInterpreter_stepBlock; // stepBlock 
    ((Array)layout_Interpretation_Debugger)->values[3] = slot_Interpretation_Debugger_escapeShell; // escapeShell 
    Interpretation_Debugger_Class = (Class)new_Class(Interpretation_SteppingInterpreter_Class, layout_Interpretation_Debugger_Class_class);
    Interpretation_Debugger_Class->layout = layout_Interpretation_Debugger;
    Interpretation_Debugger_Class->name = SMB_Debugger;
    
}

void init_Interpretation_PDebugger_methods() {
    init_SMB_indent();
    init_SMB_shell();
    init_SMB_error_();
    init_SMB_print_();
    init_SMB_isReady_();
    init_SMB_classSetStepBlock_();
    init_SMB_displayPrompt();
    init_SMB_executeAction_();
    init_SMB_parsesUntil_();
    init_SMB_skipStepBlock();
    init_SMB_defaultStepBlock();
    init_SMB_skipWith_();
    init_SMB_debugShellWithAction_();
    init_SMB_interpretFromStdin();
    init_SMB_interpretLine_();
    init_SMB_printStacktrace();
    init_SMB_compile_();
    init_SMB_skipBlock_();
    init_SMB_classStepBlock_();
    
}