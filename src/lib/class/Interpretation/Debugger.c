#include <lib/class/Interpretation/Debugger.h>


Optr layout_Interpretation_Debugger_Class_class;
Optr slot_Interpretation_Debugger_escapeShell;
Optr layout_Interpretation_Debugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
    Array PArray16901 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16904 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16910 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16909 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16910, (Optr)&t_block_return);
    Block PBlock16908 = new_Block_with(empty_Array, empty_Array, PThreadedCode16909, 1, PSend16910);
    // ifNil:. 
    Send PSend16907 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16908);
    Assign PAssign16906 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16907);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16914 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16913 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16914);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16915 = new_Send((Optr)PAssign16913, SMB_isNil, 0);
    Array PThreadedCode16912 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16913, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16914, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16915, (Optr)&t_block_return);
    Block PBlock16911 = new_Block_with(empty_Array, empty_Array, PThreadedCode16912, 1, PSend16915);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16918 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    String string_16919 = new_String(L"  ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16919_Const = new_Constant((Optr)string_16919);
    // <<. 
    Send PSend16920 = new_Send((Optr)PSend16918, SMB__shiftLeft_, 1, (Optr)string_16919_Const);
    Array PThreadedCode16917 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16918, (Optr)&t_push1, (Optr)string_16919, (Optr)&t_send1, (Optr)PSend16920, (Optr)&t_block_return);
    Block PBlock16916 = new_Block_with(empty_Array, empty_Array, PThreadedCode16917, 1, PSend16920);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16921 = new_Send((Optr)PBlock16911, SMB_whileFalse_, 1, (Optr)PBlock16916);
    Array PThreadedCode16905 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16906, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16908, (Optr)&t_send1, (Optr)PSend16907, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16911, (Optr)&t_push_closure, (Optr)PBlock16916, (Optr)&t_send1, (Optr)PSend16921, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16903 = new_Block_with(PArray16904, empty_Array, PThreadedCode16905, 3, PAssign16906, PSend16921, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16922 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16903);
    Array PThreadedCode16902 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16903, (Optr)&t_send1, (Optr)PSend16922, (Optr)&t_method_return);
    Method PMethod16900 = new_Method_with(empty_Array, PArray16901, empty_Array, PThreadedCode16902, 1, PSend16922);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16900, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16926 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_input_2_0 = new_Variable_named(L"input", 2);
    Array PArray16930 = new_Array_with(1, (Optr)VAR_input_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16932 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_input_2_0);
    Array PThreadedCode16931 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_input_2_0, (Optr)&t_send1, (Optr)PSend16932, (Optr)&t_method_return);
    Block PBlock16929 = new_Block_with(PArray16930, empty_Array, PThreadedCode16931, 1, PSend16932);
    Assign PAssign16928 = new_Assign((Optr)slot_Interpretation_Debugger_escapeShell, (Optr)PBlock16929);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend16935 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    // interpretFromStdin. 
    Send PSend16936 = new_Send((Optr)self, SMB_interpretFromStdin, 0);
    Array PThreadedCode16934 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16935, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16936, (Optr)&t_block_return);
    Block PBlock16933 = new_Block_with(empty_Array, empty_Array, PThreadedCode16934, 2, PSend16935, PSend16936);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16937 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock16933);
    Array PThreadedCode16927 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign16928, (Optr)&t_push_closure, (Optr)PBlock16929, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock16933, (Optr)&t_send1, (Optr)PSend16937, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16925 = new_Block_with(PArray16926, empty_Array, PThreadedCode16927, 3, PAssign16928, PSend16937, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16938 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16925);
    Array PThreadedCode16924 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16925, (Optr)&t_send1, (Optr)PSend16938, (Optr)&t_method_return);
    Method PMethod16923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16924, 1, PSend16938);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod16923, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16940 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend16942 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16943 = new_Send((Optr)self, SMB_printStacktrace, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16944 = new_Send((Optr)self, SMB_shell, 0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend16945 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode16941 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16942, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16943, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16944, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16945, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16939 = new_Method_with(PArray16940, empty_Array, empty_Array, PThreadedCode16941, 5, PSend16942, PSend16943, PSend16944, PSend16945, self);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod16939, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
    Array PArray16947 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16949 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16951 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16953 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16954 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16952 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16953, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16954, (Optr)&t_method_return);
    Block PBlock16950 = new_Block_with(PArray16951, empty_Array, PThreadedCode16952, 2, PSend16953, PSend16954);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16955 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16956 = new_Send((Optr)PBlock16950, SMB_value_, 1, (Optr)PSend16955);
    Array PThreadedCode16948 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16949, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16950, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16955, (Optr)&t_send1, (Optr)PSend16956, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16946 = new_Method_with(PArray16947, empty_Array, empty_Array, PThreadedCode16948, 3, PSend16949, PSend16956, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod16946, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16958 = new_Array_with(1, (Optr)VAR_code_0_0);
    Array PThreadedCode16959 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16957 = new_Method_with(PArray16958, empty_Array, empty_Array, PThreadedCode16959, 1, true_Const);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod16957, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend16962 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    String string_16963 = new_String(L"pidb> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16963_Const = new_Constant((Optr)string_16963);
    // <<. 
    Send PSend16964 = new_Send((Optr)PSend16962, SMB__shiftLeft_, 1, (Optr)string_16963_Const);
    Array PThreadedCode16961 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16962, (Optr)&t_push1, (Optr)string_16963, (Optr)&t_send1, (Optr)PSend16964, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16960 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16961, 2, PSend16964, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod16960, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_executeAction_() {
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray16966 = new_Array_with(1, (Optr)VAR_action_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16968 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Array PThreadedCode16967 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16968, (Optr)&t_method_return);
    Method PMethod16965 = new_Method_with(PArray16966, empty_Array, empty_Array, PThreadedCode16967, 1, PSend16968);
    
    MethodClosure MC_SMB_executeAction_ = new_MethodClosure((Method)PMethod16965, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_executeAction_, MC_SMB_executeAction_);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray16970 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16973 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend16977 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend16978 = new_Send((Optr)PSend16977, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode16976 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend16977, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16978, (Optr)&t_block_return);
    Block PBlock16975 = new_Block_with(empty_Array, empty_Array, PThreadedCode16976, 1, PSend16978);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray16980 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend16982 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend16983 = new_Send((Optr)PSend16982, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend16987 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16988 = new_Send((Optr)PSend16987, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16989 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16988);
    Array PThreadedCode16986 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16987, (Optr)&t_send0, (Optr)PSend16988, (Optr)&t_send1, (Optr)PSend16989, (Optr)&t_block_return);
    Block PBlock16985 = new_Block_with(empty_Array, empty_Array, PThreadedCode16986, 1, PSend16989);
    // ifFalse:. 
    Send PSend16984 = new_Send((Optr)PSend16983, SMB_ifFalse_, 1, (Optr)PBlock16985);
    Array PThreadedCode16981 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16982, (Optr)&t_send0, (Optr)PSend16983, (Optr)&t_send_ifFalse_, (Optr)PSend16984, (Optr)PBlock16985, (Optr)&t_method_return);
    Block PBlock16979 = new_Block_with(PArray16980, empty_Array, PThreadedCode16981, 1, PSend16984);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16990 = new_Send((Optr)PBlock16975, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock16979);
    Array PThreadedCode16974 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock16975, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock16979, (Optr)&t_send2, (Optr)PSend16990, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16972 = new_Block_with(PArray16973, empty_Array, PThreadedCode16974, 2, PSend16990, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16991 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16972);
    Array PThreadedCode16971 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16972, (Optr)&t_send1, (Optr)PSend16991, (Optr)&t_method_return);
    Method PMethod16969 = new_Method_with(PArray16970, empty_Array, empty_Array, PThreadedCode16971, 1, PSend16991);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod16969, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_skipStepBlock() {
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray16995 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16997 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16996 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16997, (Optr)&t_method_return);
    Block PBlock16994 = new_Block_with(PArray16995, empty_Array, PThreadedCode16996, 1, PSend16997);
    Array PThreadedCode16993 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16994, (Optr)&t_method_return);
    Method PMethod16992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16993, 1, PBlock16994);
    
    MethodClosure MC_SMB_skipStepBlock = new_MethodClosure((Method)PMethod16992, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipStepBlock, MC_SMB_skipStepBlock);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray17001 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17003 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend17004 = new_Send((Optr)PSend17003, SMB_name, 0);
    String string_17005 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_17005_Const = new_Constant((Optr)string_17005);
    // ,. 
    Send PSend17006 = new_Send((Optr)PSend17004, SMB__append_, 1, (Optr)string_17005_Const);
    // ,. 
    Send PSend17007 = new_Send((Optr)PSend17006, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend17008 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend17007);
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    // debugShellWithAction:. 
    Send PSend17009 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode17002 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend17003, (Optr)&t_send0, (Optr)PSend17004, (Optr)&t_push1, (Optr)string_17005, (Optr)&t_send1, (Optr)PSend17006, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend17007, (Optr)&t_send1, (Optr)PSend17008, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend17009, (Optr)&t_method_return);
    Block PBlock17000 = new_Block_with(PArray17001, empty_Array, PThreadedCode17002, 2, PSend17008, PSend17009);
    Array PThreadedCode16999 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock17000, (Optr)&t_method_return);
    Method PMethod16998 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16999, 1, PBlock17000);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16998, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_debugShellWithAction_() {
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
    Array PArray17011 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_input_0_1 = new_Variable_named(L"input", 0);
    Array PArray17012 = new_Array_with(1, (Optr)VAR_input_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17015 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend17018 = new_Send((Optr)self, SMB_shell, 0);
    Assign PAssign17017 = new_Assign((Optr)VAR_input_0_1, (Optr)PSend17018);
    String string_17019 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_17019_Const = new_Constant((Optr)string_17019);
    // =. 
    Send PSend17020 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17019_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17024 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17025 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17024);
    Array PThreadedCode17023 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17024, (Optr)&t_send1, (Optr)PSend17025, (Optr)&t_block_return);
    Block PBlock17022 = new_Block_with(empty_Array, empty_Array, PThreadedCode17023, 1, PSend17025);
    // ifTrue:. 
    Send PSend17021 = new_Send((Optr)PSend17020, SMB_ifTrue_, 1, (Optr)PBlock17022);
    String string_17026 = new_String(L"o");
    Constant string_17026_Const = new_Constant((Optr)string_17026);
    // =. 
    Send PSend17027 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17026_Const);
    Variable VAR_oldBlock_2_0 = new_Variable_named(L"oldBlock", 2);
    Variable VAR_result_2_1 = new_Variable_named(L"result", 2);
    Array PArray17029 = new_Array_with(2, (Optr)VAR_oldBlock_2_0, (Optr)VAR_result_2_1);
    Assign PAssign17031 = new_Assign((Optr)VAR_oldBlock_2_0, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock);
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    // skipStepBlock. 
    Send PSend17033 = new_Send((Optr)self, SMB_skipStepBlock, 0);
    Assign PAssign17032 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend17033);
    // value. 
    Send PSend17035 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Assign PAssign17034 = new_Assign((Optr)VAR_result_2_1, (Optr)PSend17035);
    Assign PAssign17036 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_oldBlock_2_0);
    // escape:. 
    Send PSend17037 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_2_1);
    Array PThreadedCode17030 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17031, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17032, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17033, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17034, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17035, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17036, (Optr)&t_push_variable, (Optr)VAR_oldBlock_2_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_2_1, (Optr)&t_send1, (Optr)PSend17037, (Optr)&t_method_return);
    Block PBlock17028 = new_Block_with(empty_Array, PArray17029, PThreadedCode17030, 5, PAssign17031, PAssign17032, PAssign17034, PAssign17036, PSend17037);
    // ifTrue:. 
    Send PSend17038 = new_Send((Optr)PSend17027, SMB_ifTrue_, 1, (Optr)PBlock17028);
    String string_17039 = new_String(L"i");
    Constant string_17039_Const = new_Constant((Optr)string_17039);
    // =. 
    Send PSend17040 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17039_Const);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend17044 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend17045 = new_Send((Optr)PSend17044, SMB_inspect, 0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend17046 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17047 = new_Send((Optr)PSend17046, SMB_lf, 0);
    // debugShellWithAction:. 
    Send PSend17048 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend17049 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17048);
    Array PThreadedCode17043 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17044, (Optr)&t_send0, (Optr)PSend17045, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17046, (Optr)&t_send0, (Optr)PSend17047, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend17048, (Optr)&t_send1, (Optr)PSend17049, (Optr)&t_block_return);
    Block PBlock17042 = new_Block_with(empty_Array, empty_Array, PThreadedCode17043, 3, PSend17045, PSend17047, PSend17049);
    // ifTrue:. 
    Send PSend17041 = new_Send((Optr)PSend17040, SMB_ifTrue_, 1, (Optr)PBlock17042);
    String string_17050 = new_String(L"j");
    Constant string_17050_Const = new_Constant((Optr)string_17050);
    // =. 
    Send PSend17051 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17050_Const);
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skipBlock:. 
    Send PSend17056 = new_Send((Optr)self, SMB_skipBlock_, 1, (Optr)int_2_Const);
    Assign PAssign17055 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend17056);
    // value. 
    Send PSend17057 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    // escape:. 
    Send PSend17058 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17057);
    Array PThreadedCode17054 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17055, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17056, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17057, (Optr)&t_send1, (Optr)PSend17058, (Optr)&t_block_return);
    Block PBlock17053 = new_Block_with(empty_Array, empty_Array, PThreadedCode17054, 2, PAssign17055, PSend17058);
    // ifTrue:. 
    Send PSend17052 = new_Send((Optr)PSend17051, SMB_ifTrue_, 1, (Optr)PBlock17053);
    Array PThreadedCode17016 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign17017, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17018, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17019, (Optr)&t_send1, (Optr)PSend17020, (Optr)&t_send_ifTrue_, (Optr)PSend17021, (Optr)PBlock17022, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17026, (Optr)&t_send1, (Optr)PSend17027, (Optr)&t_push_closure, (Optr)PBlock17028, (Optr)&t_send1, (Optr)PSend17038, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17039, (Optr)&t_send1, (Optr)PSend17040, (Optr)&t_send_ifTrue_, (Optr)PSend17041, (Optr)PBlock17042, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17050, (Optr)&t_send1, (Optr)PSend17051, (Optr)&t_send_ifTrue_, (Optr)PSend17052, (Optr)PBlock17053, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17014 = new_Block_with(PArray17015, empty_Array, PThreadedCode17016, 6, PAssign17017, PSend17021, PSend17038, PSend17041, PSend17052, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17059 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17014);
    Array PThreadedCode17013 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17014, (Optr)&t_send1, (Optr)PSend17059, (Optr)&t_method_return);
    Method PMethod17010 = new_Method_with(PArray17011, PArray17012, empty_Array, PThreadedCode17013, 1, PSend17059);
    
    MethodClosure MC_SMB_debugShellWithAction_ = new_MethodClosure((Method)PMethod17010, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_debugShellWithAction_, MC_SMB_debugShellWithAction_);
}


static void init_SMB_interpretFromStdin() {
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    Variable VAR_readline_0_0 = new_Variable_named(L"readline", 0);
    Array PArray17061 = new_Array_with(1, (Optr)VAR_readline_0_0);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend17065 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend17066 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    // from:to:for:. 
    Send PSend17064 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)PSend17065, (Optr)PSend17066, (Optr)self);
    Assign PAssign17063 = new_Assign((Optr)VAR_readline_0_0, (Optr)PSend17064);
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend17067 = new_Send((Optr)VAR_readline_0_0, SMB_readLine, 0);
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    // interpretLine:. 
    Send PSend17068 = new_Send((Optr)self, SMB_interpretLine_, 1, (Optr)PSend17067);
    Array PThreadedCode17062 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17063, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend17065, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17066, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend17064, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_0, (Optr)&t_send0, (Optr)PSend17067, (Optr)&t_send1, (Optr)PSend17068, (Optr)&t_method_return);
    Method PMethod17060 = new_Method_with(empty_Array, PArray17061, empty_Array, PThreadedCode17062, 2, PAssign17063, PSend17068);
    
    MethodClosure MC_SMB_interpretFromStdin = new_MethodClosure((Method)PMethod17060, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretFromStdin, MC_SMB_interpretFromStdin);
}


static void init_SMB_interpretLine_() {
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray17070 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17073 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_17075 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_17075_Const = new_Constant((Optr)string_17075);
    // =. 
    Send PSend17076 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17075_Const);
    String string_17079 = new_String(L"o");
    Constant string_17079_Const = new_Constant((Optr)string_17079);
    // =. 
    Send PSend17080 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17079_Const);
    String string_17083 = new_String(L"i");
    Constant string_17083_Const = new_Constant((Optr)string_17083);
    // =. 
    Send PSend17084 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17083_Const);
    String string_17087 = new_String(L"j");
    Constant string_17087_Const = new_Constant((Optr)string_17087);
    // =. 
    Send PSend17088 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17087_Const);
    Array PThreadedCode17086 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17087, (Optr)&t_send1, (Optr)PSend17088, (Optr)&t_block_return);
    Block PBlock17085 = new_Block_with(empty_Array, empty_Array, PThreadedCode17086, 1, PSend17088);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend17089 = new_Send((Optr)PSend17084, SMB_or_, 1, (Optr)PBlock17085);
    Array PThreadedCode17082 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17083, (Optr)&t_send1, (Optr)PSend17084, (Optr)&t_push_closure, (Optr)PBlock17085, (Optr)&t_send1, (Optr)PSend17089, (Optr)&t_block_return);
    Block PBlock17081 = new_Block_with(empty_Array, empty_Array, PThreadedCode17082, 1, PSend17089);
    // or:. 
    Send PSend17090 = new_Send((Optr)PSend17080, SMB_or_, 1, (Optr)PBlock17081);
    Array PThreadedCode17078 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17079, (Optr)&t_send1, (Optr)PSend17080, (Optr)&t_push_closure, (Optr)PBlock17081, (Optr)&t_send1, (Optr)PSend17090, (Optr)&t_block_return);
    Block PBlock17077 = new_Block_with(empty_Array, empty_Array, PThreadedCode17078, 1, PSend17090);
    // or:. 
    Send PSend17091 = new_Send((Optr)PSend17076, SMB_or_, 1, (Optr)PBlock17077);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17095 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17096 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17095);
    Array PThreadedCode17094 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17095, (Optr)&t_send1, (Optr)PSend17096, (Optr)&t_block_return);
    Block PBlock17093 = new_Block_with(empty_Array, empty_Array, PThreadedCode17094, 1, PSend17096);
    // ifTrue:. 
    Send PSend17092 = new_Send((Optr)PSend17091, SMB_ifTrue_, 1, (Optr)PBlock17093);
    String string_17097 = new_String(L"");
    Constant string_17097_Const = new_Constant((Optr)string_17097);
    // =. 
    Send PSend17098 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17097_Const);
    String string_17102 = new_String(L"s");
    Constant string_17102_Const = new_Constant((Optr)string_17102);
    // value:. 
    Send PSend17103 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)string_17102_Const);
    // escape:. 
    Send PSend17104 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17103);
    Array PThreadedCode17101 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push1, (Optr)string_17102, (Optr)&t_send1, (Optr)PSend17103, (Optr)&t_send1, (Optr)PSend17104, (Optr)&t_block_return);
    Block PBlock17100 = new_Block_with(empty_Array, empty_Array, PThreadedCode17101, 1, PSend17104);
    // ifTrue:. 
    Send PSend17099 = new_Send((Optr)PSend17098, SMB_ifTrue_, 1, (Optr)PBlock17100);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend17105 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17106 = new_Send((Optr)PSend17105, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend17107 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend17106);
    Array PThreadedCode17074 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17075, (Optr)&t_send1, (Optr)PSend17076, (Optr)&t_push_closure, (Optr)PBlock17077, (Optr)&t_send1, (Optr)PSend17091, (Optr)&t_send_ifTrue_, (Optr)PSend17092, (Optr)PBlock17093, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17097, (Optr)&t_send1, (Optr)PSend17098, (Optr)&t_send_ifTrue_, (Optr)PSend17099, (Optr)PBlock17100, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17105, (Optr)&t_send0, (Optr)PSend17106, (Optr)&t_send1, (Optr)PSend17107, (Optr)&t_method_return);
    Block PBlock17072 = new_Block_with(PArray17073, empty_Array, PThreadedCode17074, 3, PSend17092, PSend17099, PSend17107);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17108 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17072);
    Array PThreadedCode17071 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17072, (Optr)&t_send1, (Optr)PSend17108, (Optr)&t_method_return);
    Method PMethod17069 = new_Method_with(PArray17070, empty_Array, empty_Array, PThreadedCode17071, 1, PSend17108);
    
    MethodClosure MC_SMB_interpretLine_ = new_MethodClosure((Method)PMethod17069, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_interpretLine_, MC_SMB_interpretLine_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Array PArray17110 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray17111 = new_Array_with(1, (Optr)VAR_method_0_1);
    String string_17116 = new_String(L"method");
    Constant string_17116_Const = new_Constant((Optr)string_17116);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17117 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend17115 = new_Send((Optr)string_17116_Const, SMB__append_, 1, (Optr)PSend17117);
    // ,. 
    Send PSend17114 = new_Send((Optr)PSend17115, SMB__append_, 1, (Optr)VAR_code_0_0);
    Assign PAssign17113 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend17114);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17118 = new_Send((Optr)self, SMB_class, 0);
    // compile:. 
    Send PSend17119 = new_Send((Optr)PSend17118, SMB_compile_, 1, (Optr)VAR_method_0_1);
    Array PThreadedCode17112 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign17113, (Optr)&t_push1, (Optr)string_17116, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend17117, (Optr)&t_send1, (Optr)PSend17115, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17114, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17118, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send1, (Optr)PSend17119, (Optr)&t_method_return);
    Method PMethod17109 = new_Method_with(PArray17110, PArray17111, empty_Array, PThreadedCode17112, 2, PAssign17113, PSend17119);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod17109, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_printStacktrace() {
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend17122 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_printStacktrace, 0);
    Array PThreadedCode17121 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17122, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17120 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17121, 2, PSend17122, self);
    
    MethodClosure MC_SMB_printStacktrace = new_MethodClosure((Method)PMethod17120, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_printStacktrace, MC_SMB_printStacktrace);
}


static void init_SMB_skipBlock_() {
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    Variable VAR_count_0_0 = new_Variable_named(L"count", 0);
    Array PArray17124 = new_Array_with(1, (Optr)VAR_count_0_0);
    Variable VAR_skips_0_1 = new_Variable_named(L"skips", 0);
    Variable VAR_previousBlock_0_2 = new_Variable_named(L"previousBlock", 0);
    Array PArray17125 = new_Array_with(2, (Optr)VAR_skips_0_1, (Optr)VAR_previousBlock_0_2);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17127 = new_Assign((Optr)VAR_skips_0_1, (Optr)int_0_Const);
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    // stepBlock. 
    Send PSend17129 = new_Send((Optr)self, SMB_stepBlock, 0);
    Assign PAssign17128 = new_Assign((Optr)VAR_previousBlock_0_2, (Optr)PSend17129);
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
    Array PArray17131 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend17134 = new_Send((Optr)VAR_skips_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17133 = new_Assign((Optr)VAR_skips_0_1, (Optr)PSend17134);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend17135 = new_Send((Optr)VAR_skips_0_1, SMB__gt__equals_, 1, (Optr)VAR_count_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    // stepBlock:. 
    Send PSend17139 = new_Send((Optr)self, SMB_stepBlock_, 1, (Optr)VAR_previousBlock_0_2);
    Array PThreadedCode17138 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_previousBlock_0_2, (Optr)&t_send1, (Optr)PSend17139, (Optr)&t_block_return);
    Block PBlock17137 = new_Block_with(empty_Array, empty_Array, PThreadedCode17138, 1, PSend17139);
    // ifTrue:. 
    Send PSend17136 = new_Send((Optr)PSend17135, SMB_ifTrue_, 1, (Optr)PBlock17137);
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    // executeAction:. 
    Send PSend17140 = new_Send((Optr)self, SMB_executeAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode17132 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17133, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17134, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_variable, (Optr)VAR_count_0_0, (Optr)&t_send1, (Optr)PSend17135, (Optr)&t_send_ifTrue_, (Optr)PSend17136, (Optr)PBlock17137, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend17140, (Optr)&t_method_return);
    Block PBlock17130 = new_Block_with(PArray17131, empty_Array, PThreadedCode17132, 3, PAssign17133, PSend17136, PSend17140);
    Array PThreadedCode17126 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign17127, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17128, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17129, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17130, (Optr)&t_method_return);
    Method PMethod17123 = new_Method_with(PArray17124, PArray17125, empty_Array, PThreadedCode17126, 3, PAssign17127, PAssign17128, PBlock17130);
    
    MethodClosure MC_SMB_skipBlock_ = new_MethodClosure((Method)PMethod17123, Interpretation_Debugger_Class);
    store_method(Interpretation_Debugger_Class, SMB_skipBlock_, MC_SMB_skipBlock_);
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
    init_SMB_displayPrompt();
    init_SMB_executeAction_();
    init_SMB_parsesUntil_();
    init_SMB_skipStepBlock();
    init_SMB_defaultStepBlock();
    init_SMB_debugShellWithAction_();
    init_SMB_interpretFromStdin();
    init_SMB_interpretLine_();
    init_SMB_compile_();
    init_SMB_printStacktrace();
    init_SMB_skipBlock_();
    
}