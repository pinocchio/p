#include <lib/class/Interpretation/Debugger.h>


Optr layout_Interpretation_Debugger_Class_class;
Optr slot_Interpretation_Debugger_escapeShell;
Optr layout_Interpretation_Debugger;


static void init_SMB_indent() {
    Symbol SMB_indent = new_Symbol(L"indent");
    Variable VAR_c_0_0 = new_Variable_named(L"c", 0);
<<<<<<< HEAD
    Array PArray16933 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16936 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16942 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16941 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16942, (Optr)&t_block_return);
    Block PBlock16940 = new_Block_with(empty_Array, empty_Array, PThreadedCode16941, 1, PSend16942);
    // ifNil:. 
    Send PSend16939 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16940);
    Assign PAssign16938 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16939);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16946 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16945 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16946);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16947 = new_Send((Optr)PAssign16945, SMB_isNil, 0);
    Array PThreadedCode16944 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16945, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16946, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16947, (Optr)&t_block_return);
    Block PBlock16943 = new_Block_with(empty_Array, empty_Array, PThreadedCode16944, 1, PSend16947);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16950 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    String string_16951 = new_String(L"  ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16951_Const = new_Constant((Optr)string_16951);
    // <<. 
    Send PSend16952 = new_Send((Optr)PSend16950, SMB__shiftLeft_, 1, (Optr)string_16951_Const);
    Array PThreadedCode16949 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16950, (Optr)&t_push1, (Optr)string_16951, (Optr)&t_send1, (Optr)PSend16952, (Optr)&t_block_return);
    Block PBlock16948 = new_Block_with(empty_Array, empty_Array, PThreadedCode16949, 1, PSend16952);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16953 = new_Send((Optr)PBlock16943, SMB_whileFalse_, 1, (Optr)PBlock16948);
    Array PThreadedCode16937 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16938, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16940, (Optr)&t_send1, (Optr)PSend16939, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16943, (Optr)&t_push_closure, (Optr)PBlock16948, (Optr)&t_send1, (Optr)PSend16953, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16935 = new_Block_with(PArray16936, empty_Array, PThreadedCode16937, 3, PAssign16938, PSend16953, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16954 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16935);
    Array PThreadedCode16934 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16935, (Optr)&t_send1, (Optr)PSend16954, (Optr)&t_method_return);
    Method PMethod16932 = new_Method_with(empty_Array, PArray16933, empty_Array, PThreadedCode16934, 1, PSend16954);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16932, Interpretation_Debugger_Class);
=======
    Array PArray16899 = new_Array_with(1, (Optr)VAR_c_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16902 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16908 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode16907 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend16908, (Optr)&t_block_return);
    Block PBlock16906 = new_Block_with(empty_Array, empty_Array, PThreadedCode16907, 1, PSend16908);
    // ifNil:. 
    Send PSend16905 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_ifNil_, 1, (Optr)PBlock16906);
    Assign PAssign16904 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16905);
    Symbol SMB_returnContext = new_Symbol(L"returnContext");
    // returnContext. 
    Send PSend16912 = new_Send((Optr)VAR_c_0_0, SMB_returnContext, 0);
    Assign PAssign16911 = new_Assign((Optr)VAR_c_0_0, (Optr)PSend16912);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend16913 = new_Send((Optr)PAssign16911, SMB_isNil, 0);
    Array PThreadedCode16910 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign16911, (Optr)&t_push_variable, (Optr)VAR_c_0_0, (Optr)&t_send0, (Optr)PSend16912, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend16913, (Optr)&t_block_return);
    Block PBlock16909 = new_Block_with(empty_Array, empty_Array, PThreadedCode16910, 1, PSend16913);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16916 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    String string_16917 = new_String(L"  ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16917_Const = new_Constant((Optr)string_16917);
    // <<. 
    Send PSend16918 = new_Send((Optr)PSend16916, SMB__shiftLeft_, 1, (Optr)string_16917_Const);
    Array PThreadedCode16915 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16916, (Optr)&t_push1, (Optr)string_16917, (Optr)&t_send1, (Optr)PSend16918, (Optr)&t_block_return);
    Block PBlock16914 = new_Block_with(empty_Array, empty_Array, PThreadedCode16915, 1, PSend16918);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend16919 = new_Send((Optr)PBlock16909, SMB_whileFalse_, 1, (Optr)PBlock16914);
    Array PThreadedCode16903 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign16904, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_push_closure, (Optr)PBlock16906, (Optr)&t_send1, (Optr)PSend16905, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16909, (Optr)&t_push_closure, (Optr)PBlock16914, (Optr)&t_send1, (Optr)PSend16919, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16901 = new_Block_with(PArray16902, empty_Array, PThreadedCode16903, 3, PAssign16904, PSend16919, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16920 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16901);
    Array PThreadedCode16900 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16901, (Optr)&t_send1, (Optr)PSend16920, (Optr)&t_method_return);
    Method PMethod16898 = new_Method_with(empty_Array, PArray16899, empty_Array, PThreadedCode16900, 1, PSend16920);
    
    MethodClosure MC_SMB_indent = new_MethodClosure((Method)PMethod16898, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_indent, MC_SMB_indent);
}


static void init_SMB_shell() {
    Symbol SMB_shell = new_Symbol(L"shell");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
<<<<<<< HEAD
    Array PArray16958 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_input_2_0 = new_Variable_named(L"input", 2);
    Array PArray16962 = new_Array_with(1, (Optr)VAR_input_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16964 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_input_2_0);
    Array PThreadedCode16963 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_input_2_0, (Optr)&t_send1, (Optr)PSend16964, (Optr)&t_method_return);
    Block PBlock16961 = new_Block_with(PArray16962, empty_Array, PThreadedCode16963, 1, PSend16964);
    Assign PAssign16960 = new_Assign((Optr)slot_Interpretation_Debugger_escapeShell, (Optr)PBlock16961);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend16967 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    // interpretFromStdin. 
    Send PSend16968 = new_Send((Optr)self, SMB_interpretFromStdin, 0);
    Array PThreadedCode16966 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16967, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16968, (Optr)&t_block_return);
    Block PBlock16965 = new_Block_with(empty_Array, empty_Array, PThreadedCode16966, 2, PSend16967, PSend16968);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16969 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock16965);
    Array PThreadedCode16959 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign16960, (Optr)&t_push_closure, (Optr)PBlock16961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock16965, (Optr)&t_send1, (Optr)PSend16969, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16957 = new_Block_with(PArray16958, empty_Array, PThreadedCode16959, 3, PAssign16960, PSend16969, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16970 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16957);
    Array PThreadedCode16956 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16957, (Optr)&t_send1, (Optr)PSend16970, (Optr)&t_method_return);
    Method PMethod16955 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16956, 1, PSend16970);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod16955, Interpretation_Debugger_Class);
=======
    Array PArray16924 = new_Array_with(1, (Optr)VAR__return__1_0);
    Variable VAR_input_2_0 = new_Variable_named(L"input", 2);
    Array PArray16928 = new_Array_with(1, (Optr)VAR_input_2_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16930 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_input_2_0);
    Array PThreadedCode16929 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_input_2_0, (Optr)&t_send1, (Optr)PSend16930, (Optr)&t_method_return);
    Block PBlock16927 = new_Block_with(PArray16928, empty_Array, PThreadedCode16929, 1, PSend16930);
    Assign PAssign16926 = new_Assign((Optr)slot_Interpretation_Debugger_escapeShell, (Optr)PBlock16927);
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    // displayPrompt. 
    Send PSend16933 = new_Send((Optr)self, SMB_displayPrompt, 0);
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    // interpretFromStdin. 
    Send PSend16934 = new_Send((Optr)self, SMB_interpretFromStdin, 0);
    Array PThreadedCode16932 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16933, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16934, (Optr)&t_block_return);
    Block PBlock16931 = new_Block_with(empty_Array, empty_Array, PThreadedCode16932, 2, PSend16933, PSend16934);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend16935 = new_Send((Optr)true_Const, SMB_whileTrue_, 1, (Optr)PBlock16931);
    Array PThreadedCode16925 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign16926, (Optr)&t_push_closure, (Optr)PBlock16927, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_true, (Optr)&t_push_closure, (Optr)PBlock16931, (Optr)&t_send1, (Optr)PSend16935, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock16923 = new_Block_with(PArray16924, empty_Array, PThreadedCode16925, 3, PAssign16926, PSend16935, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16936 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16923);
    Array PThreadedCode16922 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16923, (Optr)&t_send1, (Optr)PSend16936, (Optr)&t_method_return);
    Method PMethod16921 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16922, 1, PSend16936);
    
    MethodClosure MC_SMB_shell = new_MethodClosure((Method)PMethod16921, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_shell, MC_SMB_shell);
}


static void init_SMB_error_() {
    Symbol SMB_error_ = new_Symbol(L"error:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
<<<<<<< HEAD
    Array PArray16972 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend16974 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16975 = new_Send((Optr)self, SMB_printStacktrace, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16976 = new_Send((Optr)self, SMB_shell, 0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend16977 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode16973 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16974, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16975, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16976, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16977, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16971 = new_Method_with(PArray16972, empty_Array, empty_Array, PThreadedCode16973, 5, PSend16974, PSend16975, PSend16976, PSend16977, self);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod16971, Interpretation_Debugger_Class);
=======
    Array PArray16938 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend16940 = new_Send((Optr)self, SMB_warn_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
    Send PSend16941 = new_Send((Optr)self, SMB_printStacktrace, 0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend16942 = new_Send((Optr)self, SMB_shell, 0);
    Symbol SMB_halt = new_Symbol(L"halt");
    // halt. 
    Send PSend16943 = new_Send((Optr)self, SMB_halt, 0);
    Array PThreadedCode16939 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16940, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16941, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16942, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16943, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16937 = new_Method_with(PArray16938, empty_Array, empty_Array, PThreadedCode16939, 5, PSend16940, PSend16941, PSend16942, PSend16943, self);
    
    MethodClosure MC_SMB_error_ = new_MethodClosure((Method)PMethod16937, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_error_, MC_SMB_error_);
}


static void init_SMB_print_() {
    Symbol SMB_print_ = new_Symbol(L"print:");
    Variable VAR_msg_0_0 = new_Variable_named(L"msg", 0);
<<<<<<< HEAD
    Array PArray16979 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16981 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16983 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16985 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16986 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16984 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16985, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16986, (Optr)&t_method_return);
    Block PBlock16982 = new_Block_with(PArray16983, empty_Array, PThreadedCode16984, 2, PSend16985, PSend16986);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16987 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16988 = new_Send((Optr)PBlock16982, SMB_value_, 1, (Optr)PSend16987);
    Array PThreadedCode16980 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16981, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16982, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16987, (Optr)&t_send1, (Optr)PSend16988, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16978 = new_Method_with(PArray16979, empty_Array, empty_Array, PThreadedCode16980, 3, PSend16981, PSend16988, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod16978, Interpretation_Debugger_Class);
=======
    Array PArray16945 = new_Array_with(1, (Optr)VAR_msg_0_0);
    Symbol SMB_indent = new_Symbol(L"indent");
    // indent. 
    Send PSend16947 = new_Send((Optr)self, SMB_indent, 0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray16949 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend16951 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_msg_0_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend16952 = new_Send((Optr)VAR__receiver__1_0, SMB_lf, 0);
    Array PThreadedCode16950 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_msg_0_0, (Optr)&t_send1, (Optr)PSend16951, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend16952, (Optr)&t_method_return);
    Block PBlock16948 = new_Block_with(PArray16949, empty_Array, PThreadedCode16950, 2, PSend16951, PSend16952);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend16953 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend16954 = new_Send((Optr)PBlock16948, SMB_value_, 1, (Optr)PSend16953);
    Array PThreadedCode16946 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend16947, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock16948, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16953, (Optr)&t_send1, (Optr)PSend16954, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16944 = new_Method_with(PArray16945, empty_Array, empty_Array, PThreadedCode16946, 3, PSend16947, PSend16954, self);
    
    MethodClosure MC_SMB_print_ = new_MethodClosure((Method)PMethod16944, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_print_, MC_SMB_print_);
}


static void init_SMB_isReady_() {
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
<<<<<<< HEAD
    Array PArray16990 = new_Array_with(1, (Optr)VAR_code_0_0);
    Array PThreadedCode16991 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16989 = new_Method_with(PArray16990, empty_Array, empty_Array, PThreadedCode16991, 1, true_Const);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod16989, Interpretation_Debugger_Class);
=======
    Array PArray16956 = new_Array_with(1, (Optr)VAR_code_0_0);
    Array PThreadedCode16957 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_true);
    Method PMethod16955 = new_Method_with(PArray16956, empty_Array, empty_Array, PThreadedCode16957, 1, true_Const);
    
    MethodClosure MC_SMB_isReady_ = new_MethodClosure((Method)PMethod16955, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_isReady_, MC_SMB_isReady_);
}


static void init_SMB_displayPrompt() {
    Symbol SMB_displayPrompt = new_Symbol(L"displayPrompt");
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
<<<<<<< HEAD
    Send PSend16994 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    String string_16995 = new_String(L"pidb> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16995_Const = new_Constant((Optr)string_16995);
    // <<. 
    Send PSend16996 = new_Send((Optr)PSend16994, SMB__shiftLeft_, 1, (Optr)string_16995_Const);
    Array PThreadedCode16993 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16994, (Optr)&t_push1, (Optr)string_16995, (Optr)&t_send1, (Optr)PSend16996, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16992 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16993, 2, PSend16996, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod16992, Interpretation_Debugger_Class);
=======
    Send PSend16960 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    String string_16961 = new_String(L"pidb> ");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_16961_Const = new_Constant((Optr)string_16961);
    // <<. 
    Send PSend16962 = new_Send((Optr)PSend16960, SMB__shiftLeft_, 1, (Optr)string_16961_Const);
    Array PThreadedCode16959 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend16960, (Optr)&t_push1, (Optr)string_16961, (Optr)&t_send1, (Optr)PSend16962, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod16958 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16959, 2, PSend16962, self);
    
    MethodClosure MC_SMB_displayPrompt = new_MethodClosure((Method)PMethod16958, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_displayPrompt, MC_SMB_displayPrompt);
}


static void init_SMB_executeAction_() {
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
<<<<<<< HEAD
    Array PArray16998 = new_Array_with(1, (Optr)VAR_action_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17000 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Array PThreadedCode16999 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17000, (Optr)&t_method_return);
    Method PMethod16997 = new_Method_with(PArray16998, empty_Array, empty_Array, PThreadedCode16999, 1, PSend17000);
    
    MethodClosure MC_SMB_executeAction_ = new_MethodClosure((Method)PMethod16997, Interpretation_Debugger_Class);
=======
    Array PArray16964 = new_Array_with(1, (Optr)VAR_action_0_0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16966 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Array PThreadedCode16965 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend16966, (Optr)&t_method_return);
    Method PMethod16963 = new_Method_with(PArray16964, empty_Array, empty_Array, PThreadedCode16965, 1, PSend16966);
    
    MethodClosure MC_SMB_executeAction_ = new_MethodClosure((Method)PMethod16963, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_executeAction_, MC_SMB_executeAction_);
}


static void init_SMB_parsesUntil_() {
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
<<<<<<< HEAD
    Array PArray17002 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17005 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend17009 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend17010 = new_Send((Optr)PSend17009, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode17008 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend17009, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17010, (Optr)&t_block_return);
    Block PBlock17007 = new_Block_with(empty_Array, empty_Array, PThreadedCode17008, 1, PSend17010);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray17012 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend17014 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend17015 = new_Send((Optr)PSend17014, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend17019 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17020 = new_Send((Optr)PSend17019, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17021 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17020);
    Array PThreadedCode17018 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend17019, (Optr)&t_send0, (Optr)PSend17020, (Optr)&t_send1, (Optr)PSend17021, (Optr)&t_block_return);
    Block PBlock17017 = new_Block_with(empty_Array, empty_Array, PThreadedCode17018, 1, PSend17021);
    // ifFalse:. 
    Send PSend17016 = new_Send((Optr)PSend17015, SMB_ifFalse_, 1, (Optr)PBlock17017);
    Array PThreadedCode17013 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend17014, (Optr)&t_send0, (Optr)PSend17015, (Optr)&t_send_ifFalse_, (Optr)PSend17016, (Optr)PBlock17017, (Optr)&t_method_return);
    Block PBlock17011 = new_Block_with(PArray17012, empty_Array, PThreadedCode17013, 1, PSend17016);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend17022 = new_Send((Optr)PBlock17007, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock17011);
    Array PThreadedCode17006 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock17007, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock17011, (Optr)&t_send2, (Optr)PSend17022, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock17004 = new_Block_with(PArray17005, empty_Array, PThreadedCode17006, 2, PSend17022, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17023 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17004);
    Array PThreadedCode17003 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17004, (Optr)&t_send1, (Optr)PSend17023, (Optr)&t_method_return);
    Method PMethod17001 = new_Method_with(PArray17002, empty_Array, empty_Array, PThreadedCode17003, 1, PSend17023);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod17001, Interpretation_Debugger_Class);
=======
    Array PArray16968 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray16971 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend16975 = new_Send((Optr)PSmalltalkGrammar_classReference, SMB_instance, 0);
    Symbol SMB_parseStatements_ = new_Symbol(L"parseStatements:");
    // parseStatements:. 
    Send PSend16976 = new_Send((Optr)PSend16975, SMB_parseStatements_, 1, (Optr)VAR_code_0_0);
    Array PThreadedCode16974 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_class_reference, (Optr)PSmalltalkGrammar_classReference, (Optr)&t_send0, (Optr)PSend16975, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend16976, (Optr)&t_block_return);
    Block PBlock16973 = new_Block_with(empty_Array, empty_Array, PThreadedCode16974, 1, PSend16976);
    Variable VAR_ex_2_0 = new_Variable_named(L"ex", 2);
    Array PArray16978 = new_Array_with(1, (Optr)VAR_ex_2_0);
    Symbol SMB_input = new_Symbol(L"input");
    // input. 
    Send PSend16980 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend16981 = new_Send((Optr)PSend16980, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    // input. 
    Send PSend16985 = new_Send((Optr)VAR_ex_2_0, SMB_input, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend16986 = new_Send((Optr)PSend16985, SMB_position, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend16987 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend16986);
    Array PThreadedCode16984 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16985, (Optr)&t_send0, (Optr)PSend16986, (Optr)&t_send1, (Optr)PSend16987, (Optr)&t_block_return);
    Block PBlock16983 = new_Block_with(empty_Array, empty_Array, PThreadedCode16984, 1, PSend16987);
    // ifFalse:. 
    Send PSend16982 = new_Send((Optr)PSend16981, SMB_ifFalse_, 1, (Optr)PBlock16983);
    Array PThreadedCode16979 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_ex_2_0, (Optr)&t_send0, (Optr)PSend16980, (Optr)&t_send0, (Optr)PSend16981, (Optr)&t_send_ifFalse_, (Optr)PSend16982, (Optr)PBlock16983, (Optr)&t_method_return);
    Block PBlock16977 = new_Block_with(PArray16978, empty_Array, PThreadedCode16979, 1, PSend16982);
    Symbol SMB_on_do_ = new_Symbol(L"on:do:");
    // on:do:. 
    Send PSend16988 = new_Send((Optr)PBlock16973, SMB_on_do_, 2, (Optr)PEGParsingFailure_classReference, (Optr)PBlock16977);
    Array PThreadedCode16972 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock16973, (Optr)&t_push_class_reference, (Optr)PEGParsingFailure_classReference, (Optr)&t_push_closure, (Optr)PBlock16977, (Optr)&t_send2, (Optr)PSend16988, (Optr)&t_zap, (Optr)&t_method_return_nil);
    Block PBlock16970 = new_Block_with(PArray16971, empty_Array, PThreadedCode16972, 2, PSend16988, nil_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend16989 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock16970);
    Array PThreadedCode16969 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock16970, (Optr)&t_send1, (Optr)PSend16989, (Optr)&t_method_return);
    Method PMethod16967 = new_Method_with(PArray16968, empty_Array, empty_Array, PThreadedCode16969, 1, PSend16989);
    
    MethodClosure MC_SMB_parsesUntil_ = new_MethodClosure((Method)PMethod16967, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_parsesUntil_, MC_SMB_parsesUntil_);
}


static void init_SMB_skipStepBlock() {
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
<<<<<<< HEAD
    Array PArray17027 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17029 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode17028 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend17029, (Optr)&t_method_return);
    Block PBlock17026 = new_Block_with(PArray17027, empty_Array, PThreadedCode17028, 1, PSend17029);
    Array PThreadedCode17025 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock17026, (Optr)&t_method_return);
    Method PMethod17024 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17025, 1, PBlock17026);
    
    MethodClosure MC_SMB_skipStepBlock = new_MethodClosure((Method)PMethod17024, Interpretation_Debugger_Class);
=======
    Array PArray16993 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend16995 = new_Send((Optr)VAR_action_1_3, SMB_value, 0);
    Array PThreadedCode16994 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send0, (Optr)PSend16995, (Optr)&t_method_return);
    Block PBlock16992 = new_Block_with(PArray16993, empty_Array, PThreadedCode16994, 1, PSend16995);
    Array PThreadedCode16991 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16992, (Optr)&t_method_return);
    Method PMethod16990 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16991, 1, PBlock16992);
    
    MethodClosure MC_SMB_skipStepBlock = new_MethodClosure((Method)PMethod16990, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_skipStepBlock, MC_SMB_skipStepBlock);
}


static void init_SMB_defaultStepBlock() {
    Symbol SMB_defaultStepBlock = new_Symbol(L"defaultStepBlock");
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
<<<<<<< HEAD
    Array PArray17033 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17035 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend17036 = new_Send((Optr)PSend17035, SMB_name, 0);
    String string_17037 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_17037_Const = new_Constant((Optr)string_17037);
    // ,. 
    Send PSend17038 = new_Send((Optr)PSend17036, SMB__append_, 1, (Optr)string_17037_Const);
    // ,. 
    Send PSend17039 = new_Send((Optr)PSend17038, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend17040 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend17039);
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    // debugShellWithAction:. 
    Send PSend17041 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode17034 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend17035, (Optr)&t_send0, (Optr)PSend17036, (Optr)&t_push1, (Optr)string_17037, (Optr)&t_send1, (Optr)PSend17038, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend17039, (Optr)&t_send1, (Optr)PSend17040, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend17041, (Optr)&t_method_return);
    Block PBlock17032 = new_Block_with(PArray17033, empty_Array, PThreadedCode17034, 2, PSend17040, PSend17041);
    Array PThreadedCode17031 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock17032, (Optr)&t_method_return);
    Method PMethod17030 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17031, 1, PBlock17032);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod17030, Interpretation_Debugger_Class);
=======
    Array PArray16999 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17001 = new_Send((Optr)VAR_receiver_1_0, SMB_class, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend17002 = new_Send((Optr)PSend17001, SMB_name, 0);
    String string_17003 = new_String(L">>");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_17003_Const = new_Constant((Optr)string_17003);
    // ,. 
    Send PSend17004 = new_Send((Optr)PSend17002, SMB__append_, 1, (Optr)string_17003_Const);
    // ,. 
    Send PSend17005 = new_Send((Optr)PSend17004, SMB__append_, 1, (Optr)VAR_message_1_2);
    Symbol SMB_print_ = new_Symbol(L"print:");
    // print:. 
    Send PSend17006 = new_Send((Optr)self, SMB_print_, 1, (Optr)PSend17005);
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    // debugShellWithAction:. 
    Send PSend17007 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode17000 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_receiver_1_0, (Optr)&t_send0, (Optr)PSend17001, (Optr)&t_send0, (Optr)PSend17002, (Optr)&t_push1, (Optr)string_17003, (Optr)&t_send1, (Optr)PSend17004, (Optr)&t_push_variable, (Optr)VAR_message_1_2, (Optr)&t_send1, (Optr)PSend17005, (Optr)&t_send1, (Optr)PSend17006, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend17007, (Optr)&t_method_return);
    Block PBlock16998 = new_Block_with(PArray16999, empty_Array, PThreadedCode17000, 2, PSend17006, PSend17007);
    Array PThreadedCode16997 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_closure, (Optr)PBlock16998, (Optr)&t_method_return);
    Method PMethod16996 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode16997, 1, PBlock16998);
    
    MethodClosure MC_SMB_defaultStepBlock = new_MethodClosure((Method)PMethod16996, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_defaultStepBlock, MC_SMB_defaultStepBlock);
}


static void init_SMB_debugShellWithAction_() {
    Symbol SMB_debugShellWithAction_ = new_Symbol(L"debugShellWithAction:");
    Variable VAR_action_0_0 = new_Variable_named(L"action", 0);
<<<<<<< HEAD
    Array PArray17043 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_input_0_1 = new_Variable_named(L"input", 0);
    Array PArray17044 = new_Array_with(1, (Optr)VAR_input_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17047 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend17050 = new_Send((Optr)self, SMB_shell, 0);
    Assign PAssign17049 = new_Assign((Optr)VAR_input_0_1, (Optr)PSend17050);
    String string_17051 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_17051_Const = new_Constant((Optr)string_17051);
    // =. 
    Send PSend17052 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17051_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17056 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17057 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17056);
    Array PThreadedCode17055 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17056, (Optr)&t_send1, (Optr)PSend17057, (Optr)&t_block_return);
    Block PBlock17054 = new_Block_with(empty_Array, empty_Array, PThreadedCode17055, 1, PSend17057);
    // ifTrue:. 
    Send PSend17053 = new_Send((Optr)PSend17052, SMB_ifTrue_, 1, (Optr)PBlock17054);
    String string_17058 = new_String(L"o");
    Constant string_17058_Const = new_Constant((Optr)string_17058);
    // =. 
    Send PSend17059 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17058_Const);
    Variable VAR_oldBlock_2_0 = new_Variable_named(L"oldBlock", 2);
    Variable VAR_result_2_1 = new_Variable_named(L"result", 2);
    Array PArray17061 = new_Array_with(2, (Optr)VAR_oldBlock_2_0, (Optr)VAR_result_2_1);
    Assign PAssign17063 = new_Assign((Optr)VAR_oldBlock_2_0, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock);
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    // skipStepBlock. 
    Send PSend17065 = new_Send((Optr)self, SMB_skipStepBlock, 0);
    Assign PAssign17064 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend17065);
    // value. 
    Send PSend17067 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Assign PAssign17066 = new_Assign((Optr)VAR_result_2_1, (Optr)PSend17067);
    Assign PAssign17068 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_oldBlock_2_0);
    // escape:. 
    Send PSend17069 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_2_1);
    Array PThreadedCode17062 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17063, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17064, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17065, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17066, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17067, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17068, (Optr)&t_push_variable, (Optr)VAR_oldBlock_2_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_2_1, (Optr)&t_send1, (Optr)PSend17069, (Optr)&t_method_return);
    Block PBlock17060 = new_Block_with(empty_Array, PArray17061, PThreadedCode17062, 5, PAssign17063, PAssign17064, PAssign17066, PAssign17068, PSend17069);
    // ifTrue:. 
    Send PSend17070 = new_Send((Optr)PSend17059, SMB_ifTrue_, 1, (Optr)PBlock17060);
    String string_17071 = new_String(L"i");
    Constant string_17071_Const = new_Constant((Optr)string_17071);
    // =. 
    Send PSend17072 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17071_Const);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend17076 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend17077 = new_Send((Optr)PSend17076, SMB_inspect, 0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend17078 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17079 = new_Send((Optr)PSend17078, SMB_lf, 0);
    // debugShellWithAction:. 
    Send PSend17080 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend17081 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17080);
    Array PThreadedCode17075 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17076, (Optr)&t_send0, (Optr)PSend17077, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17078, (Optr)&t_send0, (Optr)PSend17079, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend17080, (Optr)&t_send1, (Optr)PSend17081, (Optr)&t_block_return);
    Block PBlock17074 = new_Block_with(empty_Array, empty_Array, PThreadedCode17075, 3, PSend17077, PSend17079, PSend17081);
    // ifTrue:. 
    Send PSend17073 = new_Send((Optr)PSend17072, SMB_ifTrue_, 1, (Optr)PBlock17074);
    String string_17082 = new_String(L"j");
    Constant string_17082_Const = new_Constant((Optr)string_17082);
    // =. 
    Send PSend17083 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17082_Const);
=======
    Array PArray17009 = new_Array_with(1, (Optr)VAR_action_0_0);
    Variable VAR_input_0_1 = new_Variable_named(L"input", 0);
    Array PArray17010 = new_Array_with(1, (Optr)VAR_input_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17013 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_shell = new_Symbol(L"shell");
    // shell. 
    Send PSend17016 = new_Send((Optr)self, SMB_shell, 0);
    Assign PAssign17015 = new_Assign((Optr)VAR_input_0_1, (Optr)PSend17016);
    String string_17017 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_17017_Const = new_Constant((Optr)string_17017);
    // =. 
    Send PSend17018 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17017_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17022 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17023 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17022);
    Array PThreadedCode17021 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17022, (Optr)&t_send1, (Optr)PSend17023, (Optr)&t_block_return);
    Block PBlock17020 = new_Block_with(empty_Array, empty_Array, PThreadedCode17021, 1, PSend17023);
    // ifTrue:. 
    Send PSend17019 = new_Send((Optr)PSend17018, SMB_ifTrue_, 1, (Optr)PBlock17020);
    String string_17024 = new_String(L"o");
    Constant string_17024_Const = new_Constant((Optr)string_17024);
    // =. 
    Send PSend17025 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17024_Const);
    Variable VAR_oldBlock_2_0 = new_Variable_named(L"oldBlock", 2);
    Variable VAR_result_2_1 = new_Variable_named(L"result", 2);
    Array PArray17027 = new_Array_with(2, (Optr)VAR_oldBlock_2_0, (Optr)VAR_result_2_1);
    Assign PAssign17029 = new_Assign((Optr)VAR_oldBlock_2_0, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock);
    Symbol SMB_skipStepBlock = new_Symbol(L"skipStepBlock");
    // skipStepBlock. 
    Send PSend17031 = new_Send((Optr)self, SMB_skipStepBlock, 0);
    Assign PAssign17030 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend17031);
    // value. 
    Send PSend17033 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    Assign PAssign17032 = new_Assign((Optr)VAR_result_2_1, (Optr)PSend17033);
    Assign PAssign17034 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)VAR_oldBlock_2_0);
    // escape:. 
    Send PSend17035 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_result_2_1);
    Array PThreadedCode17028 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17029, (Optr)&t_push_slot, (Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17030, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17031, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17032, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17033, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17034, (Optr)&t_push_variable, (Optr)VAR_oldBlock_2_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_result_2_1, (Optr)&t_send1, (Optr)PSend17035, (Optr)&t_method_return);
    Block PBlock17026 = new_Block_with(empty_Array, PArray17027, PThreadedCode17028, 5, PAssign17029, PAssign17030, PAssign17032, PAssign17034, PSend17035);
    // ifTrue:. 
    Send PSend17036 = new_Send((Optr)PSend17025, SMB_ifTrue_, 1, (Optr)PBlock17026);
    String string_17037 = new_String(L"i");
    Constant string_17037_Const = new_Constant((Optr)string_17037);
    // =. 
    Send PSend17038 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17037_Const);
    Symbol SMB_currentSelf = new_Symbol(L"currentSelf");
    // currentSelf. 
    Send PSend17042 = new_Send((Optr)self, SMB_currentSelf, 0);
    Symbol SMB_inspect = new_Symbol(L"inspect");
    // inspect. 
    Send PSend17043 = new_Send((Optr)PSend17042, SMB_inspect, 0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend17044 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stdout, 0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17045 = new_Send((Optr)PSend17044, SMB_lf, 0);
    // debugShellWithAction:. 
    Send PSend17046 = new_Send((Optr)self, SMB_debugShellWithAction_, 1, (Optr)VAR_action_0_0);
    // escape:. 
    Send PSend17047 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17046);
    Array PThreadedCode17041 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17042, (Optr)&t_send0, (Optr)PSend17043, (Optr)&t_zap, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17044, (Optr)&t_send0, (Optr)PSend17045, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send1, (Optr)PSend17046, (Optr)&t_send1, (Optr)PSend17047, (Optr)&t_block_return);
    Block PBlock17040 = new_Block_with(empty_Array, empty_Array, PThreadedCode17041, 3, PSend17043, PSend17045, PSend17047);
    // ifTrue:. 
    Send PSend17039 = new_Send((Optr)PSend17038, SMB_ifTrue_, 1, (Optr)PBlock17040);
    String string_17048 = new_String(L"j");
    Constant string_17048_Const = new_Constant((Optr)string_17048);
    // =. 
    Send PSend17049 = new_Send((Optr)VAR_input_0_1, SMB__equals_, 1, (Optr)string_17048_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // skipBlock:. 
<<<<<<< HEAD
    Send PSend17088 = new_Send((Optr)self, SMB_skipBlock_, 1, (Optr)int_2_Const);
    Assign PAssign17087 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend17088);
    // value. 
    Send PSend17089 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    // escape:. 
    Send PSend17090 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17089);
    Array PThreadedCode17086 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17087, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17088, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17089, (Optr)&t_send1, (Optr)PSend17090, (Optr)&t_block_return);
    Block PBlock17085 = new_Block_with(empty_Array, empty_Array, PThreadedCode17086, 2, PAssign17087, PSend17090);
    // ifTrue:. 
    Send PSend17084 = new_Send((Optr)PSend17083, SMB_ifTrue_, 1, (Optr)PBlock17085);
    Array PThreadedCode17048 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign17049, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17050, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17051, (Optr)&t_send1, (Optr)PSend17052, (Optr)&t_send_ifTrue_, (Optr)PSend17053, (Optr)PBlock17054, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17058, (Optr)&t_send1, (Optr)PSend17059, (Optr)&t_push_closure, (Optr)PBlock17060, (Optr)&t_send1, (Optr)PSend17070, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17071, (Optr)&t_send1, (Optr)PSend17072, (Optr)&t_send_ifTrue_, (Optr)PSend17073, (Optr)PBlock17074, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17082, (Optr)&t_send1, (Optr)PSend17083, (Optr)&t_send_ifTrue_, (Optr)PSend17084, (Optr)PBlock17085, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17046 = new_Block_with(PArray17047, empty_Array, PThreadedCode17048, 6, PAssign17049, PSend17053, PSend17070, PSend17073, PSend17084, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17091 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17046);
    Array PThreadedCode17045 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17046, (Optr)&t_send1, (Optr)PSend17091, (Optr)&t_method_return);
    Method PMethod17042 = new_Method_with(PArray17043, PArray17044, empty_Array, PThreadedCode17045, 1, PSend17091);
    
    MethodClosure MC_SMB_debugShellWithAction_ = new_MethodClosure((Method)PMethod17042, Interpretation_Debugger_Class);
=======
    Send PSend17054 = new_Send((Optr)self, SMB_skipBlock_, 1, (Optr)int_2_Const);
    Assign PAssign17053 = new_Assign((Optr)slot_Interpretation_SteppingInterpreter_stepBlock, (Optr)PSend17054);
    // value. 
    Send PSend17055 = new_Send((Optr)VAR_action_0_0, SMB_value, 0);
    // escape:. 
    Send PSend17056 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17055);
    Array PThreadedCode17052 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17053, (Optr)&t_push_self, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend17054, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_action_0_0, (Optr)&t_send0, (Optr)PSend17055, (Optr)&t_send1, (Optr)PSend17056, (Optr)&t_block_return);
    Block PBlock17051 = new_Block_with(empty_Array, empty_Array, PThreadedCode17052, 2, PAssign17053, PSend17056);
    // ifTrue:. 
    Send PSend17050 = new_Send((Optr)PSend17049, SMB_ifTrue_, 1, (Optr)PBlock17051);
    Array PThreadedCode17014 = instantiate_Array_with(ThreadedCode_Class, 0, 49, (Optr)&t_push1, (Optr)PAssign17015, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17016, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17017, (Optr)&t_send1, (Optr)PSend17018, (Optr)&t_send_ifTrue_, (Optr)PSend17019, (Optr)PBlock17020, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17024, (Optr)&t_send1, (Optr)PSend17025, (Optr)&t_push_closure, (Optr)PBlock17026, (Optr)&t_send1, (Optr)PSend17036, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17037, (Optr)&t_send1, (Optr)PSend17038, (Optr)&t_send_ifTrue_, (Optr)PSend17039, (Optr)PBlock17040, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_input_0_1, (Optr)&t_push1, (Optr)string_17048, (Optr)&t_send1, (Optr)PSend17049, (Optr)&t_send_ifTrue_, (Optr)PSend17050, (Optr)PBlock17051, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17012 = new_Block_with(PArray17013, empty_Array, PThreadedCode17014, 6, PAssign17015, PSend17019, PSend17036, PSend17039, PSend17050, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17057 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17012);
    Array PThreadedCode17011 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17012, (Optr)&t_send1, (Optr)PSend17057, (Optr)&t_method_return);
    Method PMethod17008 = new_Method_with(PArray17009, PArray17010, empty_Array, PThreadedCode17011, 1, PSend17057);
    
    MethodClosure MC_SMB_debugShellWithAction_ = new_MethodClosure((Method)PMethod17008, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_debugShellWithAction_, MC_SMB_debugShellWithAction_);
}


static void init_SMB_interpretFromStdin() {
    Symbol SMB_interpretFromStdin = new_Symbol(L"interpretFromStdin");
    Variable VAR_readline_0_0 = new_Variable_named(L"readline", 0);
<<<<<<< HEAD
    Array PArray17093 = new_Array_with(1, (Optr)VAR_readline_0_0);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend17097 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend17098 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    // from:to:for:. 
    Send PSend17096 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)PSend17097, (Optr)PSend17098, (Optr)self);
    Assign PAssign17095 = new_Assign((Optr)VAR_readline_0_0, (Optr)PSend17096);
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend17099 = new_Send((Optr)VAR_readline_0_0, SMB_readLine, 0);
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    // interpretLine:. 
    Send PSend17100 = new_Send((Optr)self, SMB_interpretLine_, 1, (Optr)PSend17099);
    Array PThreadedCode17094 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17095, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend17097, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17098, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend17096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_0, (Optr)&t_send0, (Optr)PSend17099, (Optr)&t_send1, (Optr)PSend17100, (Optr)&t_method_return);
    Method PMethod17092 = new_Method_with(empty_Array, PArray17093, empty_Array, PThreadedCode17094, 2, PAssign17095, PSend17100);
    
    MethodClosure MC_SMB_interpretFromStdin = new_MethodClosure((Method)PMethod17092, Interpretation_Debugger_Class);
=======
    Array PArray17059 = new_Array_with(1, (Optr)VAR_readline_0_0);
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Symbol SMB_stdin = new_Symbol(L"stdin");
    // stdin. 
    Send PSend17063 = new_Send((Optr)PFile_classReference, SMB_stdin, 0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend17064 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_stderr, 0);
    // from:to:for:. 
    Send PSend17062 = new_Send((Optr)PReadLine_classReference, SMB_from_to_for_, 3, (Optr)PSend17063, (Optr)PSend17064, (Optr)self);
    Assign PAssign17061 = new_Assign((Optr)VAR_readline_0_0, (Optr)PSend17062);
    Symbol SMB_readLine = new_Symbol(L"readLine");
    // readLine. 
    Send PSend17065 = new_Send((Optr)VAR_readline_0_0, SMB_readLine, 0);
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    // interpretLine:. 
    Send PSend17066 = new_Send((Optr)self, SMB_interpretLine_, 1, (Optr)PSend17065);
    Array PThreadedCode17060 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17061, (Optr)&t_push_class_reference, (Optr)PReadLine_classReference, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend17063, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend17064, (Optr)&t_push_self, (Optr)&t_send3, (Optr)PSend17062, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readline_0_0, (Optr)&t_send0, (Optr)PSend17065, (Optr)&t_send1, (Optr)PSend17066, (Optr)&t_method_return);
    Method PMethod17058 = new_Method_with(empty_Array, PArray17059, empty_Array, PThreadedCode17060, 2, PAssign17061, PSend17066);
    
    MethodClosure MC_SMB_interpretFromStdin = new_MethodClosure((Method)PMethod17058, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_interpretFromStdin, MC_SMB_interpretFromStdin);
}


static void init_SMB_interpretLine_() {
    Symbol SMB_interpretLine_ = new_Symbol(L"interpretLine:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
<<<<<<< HEAD
    Array PArray17102 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17105 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_17107 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_17107_Const = new_Constant((Optr)string_17107);
    // =. 
    Send PSend17108 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17107_Const);
    String string_17111 = new_String(L"o");
    Constant string_17111_Const = new_Constant((Optr)string_17111);
    // =. 
    Send PSend17112 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17111_Const);
    String string_17115 = new_String(L"i");
    Constant string_17115_Const = new_Constant((Optr)string_17115);
    // =. 
    Send PSend17116 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17115_Const);
    String string_17119 = new_String(L"j");
    Constant string_17119_Const = new_Constant((Optr)string_17119);
    // =. 
    Send PSend17120 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17119_Const);
    Array PThreadedCode17118 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17119, (Optr)&t_send1, (Optr)PSend17120, (Optr)&t_block_return);
    Block PBlock17117 = new_Block_with(empty_Array, empty_Array, PThreadedCode17118, 1, PSend17120);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend17121 = new_Send((Optr)PSend17116, SMB_or_, 1, (Optr)PBlock17117);
    Array PThreadedCode17114 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17115, (Optr)&t_send1, (Optr)PSend17116, (Optr)&t_push_closure, (Optr)PBlock17117, (Optr)&t_send1, (Optr)PSend17121, (Optr)&t_block_return);
    Block PBlock17113 = new_Block_with(empty_Array, empty_Array, PThreadedCode17114, 1, PSend17121);
    // or:. 
    Send PSend17122 = new_Send((Optr)PSend17112, SMB_or_, 1, (Optr)PBlock17113);
    Array PThreadedCode17110 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17111, (Optr)&t_send1, (Optr)PSend17112, (Optr)&t_push_closure, (Optr)PBlock17113, (Optr)&t_send1, (Optr)PSend17122, (Optr)&t_block_return);
    Block PBlock17109 = new_Block_with(empty_Array, empty_Array, PThreadedCode17110, 1, PSend17122);
    // or:. 
    Send PSend17123 = new_Send((Optr)PSend17108, SMB_or_, 1, (Optr)PBlock17109);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17127 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17128 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17127);
    Array PThreadedCode17126 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17127, (Optr)&t_send1, (Optr)PSend17128, (Optr)&t_block_return);
    Block PBlock17125 = new_Block_with(empty_Array, empty_Array, PThreadedCode17126, 1, PSend17128);
    // ifTrue:. 
    Send PSend17124 = new_Send((Optr)PSend17123, SMB_ifTrue_, 1, (Optr)PBlock17125);
    String string_17129 = new_String(L"");
    Constant string_17129_Const = new_Constant((Optr)string_17129);
    // =. 
    Send PSend17130 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17129_Const);
    String string_17134 = new_String(L"s");
    Constant string_17134_Const = new_Constant((Optr)string_17134);
    // value:. 
    Send PSend17135 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)string_17134_Const);
    // escape:. 
    Send PSend17136 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17135);
    Array PThreadedCode17133 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push1, (Optr)string_17134, (Optr)&t_send1, (Optr)PSend17135, (Optr)&t_send1, (Optr)PSend17136, (Optr)&t_block_return);
    Block PBlock17132 = new_Block_with(empty_Array, empty_Array, PThreadedCode17133, 1, PSend17136);
    // ifTrue:. 
    Send PSend17131 = new_Send((Optr)PSend17130, SMB_ifTrue_, 1, (Optr)PBlock17132);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend17137 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17138 = new_Send((Optr)PSend17137, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend17139 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend17138);
    Array PThreadedCode17106 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17107, (Optr)&t_send1, (Optr)PSend17108, (Optr)&t_push_closure, (Optr)PBlock17109, (Optr)&t_send1, (Optr)PSend17123, (Optr)&t_send_ifTrue_, (Optr)PSend17124, (Optr)PBlock17125, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17129, (Optr)&t_send1, (Optr)PSend17130, (Optr)&t_send_ifTrue_, (Optr)PSend17131, (Optr)PBlock17132, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17137, (Optr)&t_send0, (Optr)PSend17138, (Optr)&t_send1, (Optr)PSend17139, (Optr)&t_method_return);
    Block PBlock17104 = new_Block_with(PArray17105, empty_Array, PThreadedCode17106, 3, PSend17124, PSend17131, PSend17139);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17140 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17104);
    Array PThreadedCode17103 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17104, (Optr)&t_send1, (Optr)PSend17140, (Optr)&t_method_return);
    Method PMethod17101 = new_Method_with(PArray17102, empty_Array, empty_Array, PThreadedCode17103, 1, PSend17140);
    
    MethodClosure MC_SMB_interpretLine_ = new_MethodClosure((Method)PMethod17101, Interpretation_Debugger_Class);
=======
    Array PArray17068 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17071 = new_Array_with(1, (Optr)VAR__return__1_0);
    String string_17073 = new_String(L"s");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant string_17073_Const = new_Constant((Optr)string_17073);
    // =. 
    Send PSend17074 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17073_Const);
    String string_17077 = new_String(L"o");
    Constant string_17077_Const = new_Constant((Optr)string_17077);
    // =. 
    Send PSend17078 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17077_Const);
    String string_17081 = new_String(L"i");
    Constant string_17081_Const = new_Constant((Optr)string_17081);
    // =. 
    Send PSend17082 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17081_Const);
    String string_17085 = new_String(L"j");
    Constant string_17085_Const = new_Constant((Optr)string_17085);
    // =. 
    Send PSend17086 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17085_Const);
    Array PThreadedCode17084 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17085, (Optr)&t_send1, (Optr)PSend17086, (Optr)&t_block_return);
    Block PBlock17083 = new_Block_with(empty_Array, empty_Array, PThreadedCode17084, 1, PSend17086);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend17087 = new_Send((Optr)PSend17082, SMB_or_, 1, (Optr)PBlock17083);
    Array PThreadedCode17080 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17081, (Optr)&t_send1, (Optr)PSend17082, (Optr)&t_push_closure, (Optr)PBlock17083, (Optr)&t_send1, (Optr)PSend17087, (Optr)&t_block_return);
    Block PBlock17079 = new_Block_with(empty_Array, empty_Array, PThreadedCode17080, 1, PSend17087);
    // or:. 
    Send PSend17088 = new_Send((Optr)PSend17078, SMB_or_, 1, (Optr)PBlock17079);
    Array PThreadedCode17076 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17077, (Optr)&t_send1, (Optr)PSend17078, (Optr)&t_push_closure, (Optr)PBlock17079, (Optr)&t_send1, (Optr)PSend17088, (Optr)&t_block_return);
    Block PBlock17075 = new_Block_with(empty_Array, empty_Array, PThreadedCode17076, 1, PSend17088);
    // or:. 
    Send PSend17089 = new_Send((Optr)PSend17074, SMB_or_, 1, (Optr)PBlock17075);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend17093 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17094 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17093);
    Array PThreadedCode17092 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17093, (Optr)&t_send1, (Optr)PSend17094, (Optr)&t_block_return);
    Block PBlock17091 = new_Block_with(empty_Array, empty_Array, PThreadedCode17092, 1, PSend17094);
    // ifTrue:. 
    Send PSend17090 = new_Send((Optr)PSend17089, SMB_ifTrue_, 1, (Optr)PBlock17091);
    String string_17095 = new_String(L"");
    Constant string_17095_Const = new_Constant((Optr)string_17095);
    // =. 
    Send PSend17096 = new_Send((Optr)VAR_code_0_0, SMB__equals_, 1, (Optr)string_17095_Const);
    String string_17100 = new_String(L"s");
    Constant string_17100_Const = new_Constant((Optr)string_17100);
    // value:. 
    Send PSend17101 = new_Send((Optr)slot_Interpretation_Debugger_escapeShell, SMB_value_, 1, (Optr)string_17100_Const);
    // escape:. 
    Send PSend17102 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17101);
    Array PThreadedCode17099 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Interpretation_Debugger_escapeShell, (Optr)&t_push1, (Optr)string_17100, (Optr)&t_send1, (Optr)PSend17101, (Optr)&t_send1, (Optr)PSend17102, (Optr)&t_block_return);
    Block PBlock17098 = new_Block_with(empty_Array, empty_Array, PThreadedCode17099, 1, PSend17102);
    // ifTrue:. 
    Send PSend17097 = new_Send((Optr)PSend17096, SMB_ifTrue_, 1, (Optr)PBlock17098);
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    // compile:. 
    Send PSend17103 = new_Send((Optr)self, SMB_compile_, 1, (Optr)VAR_code_0_0);
    Symbol SMB_selector = new_Symbol(L"selector");
    // selector. 
    Send PSend17104 = new_Send((Optr)PSend17103, SMB_selector, 0);
    Symbol SMB_perform_ = new_Symbol(L"perform:");
    // perform:. 
    Send PSend17105 = new_Send((Optr)self, SMB_perform_, 1, (Optr)PSend17104);
    Array PThreadedCode17072 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17073, (Optr)&t_send1, (Optr)PSend17074, (Optr)&t_push_closure, (Optr)PBlock17075, (Optr)&t_send1, (Optr)PSend17089, (Optr)&t_send_ifTrue_, (Optr)PSend17090, (Optr)PBlock17091, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_push1, (Optr)string_17095, (Optr)&t_send1, (Optr)PSend17096, (Optr)&t_send_ifTrue_, (Optr)PSend17097, (Optr)PBlock17098, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17103, (Optr)&t_send0, (Optr)PSend17104, (Optr)&t_send1, (Optr)PSend17105, (Optr)&t_method_return);
    Block PBlock17070 = new_Block_with(PArray17071, empty_Array, PThreadedCode17072, 3, PSend17090, PSend17097, PSend17105);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17106 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17070);
    Array PThreadedCode17069 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17070, (Optr)&t_send1, (Optr)PSend17106, (Optr)&t_method_return);
    Method PMethod17067 = new_Method_with(PArray17068, empty_Array, empty_Array, PThreadedCode17069, 1, PSend17106);
    
    MethodClosure MC_SMB_interpretLine_ = new_MethodClosure((Method)PMethod17067, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_interpretLine_, MC_SMB_interpretLine_);
}


static void init_SMB_compile_() {
    Symbol SMB_compile_ = new_Symbol(L"compile:");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
<<<<<<< HEAD
    Array PArray17142 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray17143 = new_Array_with(1, (Optr)VAR_method_0_1);
    String string_17148 = new_String(L"method");
    Constant string_17148_Const = new_Constant((Optr)string_17148);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17149 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend17147 = new_Send((Optr)string_17148_Const, SMB__append_, 1, (Optr)PSend17149);
    // ,. 
    Send PSend17146 = new_Send((Optr)PSend17147, SMB__append_, 1, (Optr)VAR_code_0_0);
    Assign PAssign17145 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend17146);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17150 = new_Send((Optr)self, SMB_class, 0);
    // compile:. 
    Send PSend17151 = new_Send((Optr)PSend17150, SMB_compile_, 1, (Optr)VAR_method_0_1);
    Array PThreadedCode17144 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign17145, (Optr)&t_push1, (Optr)string_17148, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend17149, (Optr)&t_send1, (Optr)PSend17147, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17146, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17150, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send1, (Optr)PSend17151, (Optr)&t_method_return);
    Method PMethod17141 = new_Method_with(PArray17142, PArray17143, empty_Array, PThreadedCode17144, 2, PAssign17145, PSend17151);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod17141, Interpretation_Debugger_Class);
=======
    Array PArray17108 = new_Array_with(1, (Optr)VAR_code_0_0);
    Variable VAR_method_0_1 = new_Variable_named(L"method", 0);
    Array PArray17109 = new_Array_with(1, (Optr)VAR_method_0_1);
    String string_17114 = new_String(L"method");
    Constant string_17114_Const = new_Constant((Optr)string_17114);
    Symbol SMB__append_ = new_Symbol(L",");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17115 = new_Send((Optr)String_classReference, SMB_lf, 0);
    // ,. 
    Send PSend17113 = new_Send((Optr)string_17114_Const, SMB__append_, 1, (Optr)PSend17115);
    // ,. 
    Send PSend17112 = new_Send((Optr)PSend17113, SMB__append_, 1, (Optr)VAR_code_0_0);
    Assign PAssign17111 = new_Assign((Optr)VAR_method_0_1, (Optr)PSend17112);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend17116 = new_Send((Optr)self, SMB_class, 0);
    // compile:. 
    Send PSend17117 = new_Send((Optr)PSend17116, SMB_compile_, 1, (Optr)VAR_method_0_1);
    Array PThreadedCode17110 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign17111, (Optr)&t_push1, (Optr)string_17114, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_send0, (Optr)PSend17115, (Optr)&t_send1, (Optr)PSend17113, (Optr)&t_push_variable, (Optr)VAR_code_0_0, (Optr)&t_send1, (Optr)PSend17112, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17116, (Optr)&t_push_variable, (Optr)VAR_method_0_1, (Optr)&t_send1, (Optr)PSend17117, (Optr)&t_method_return);
    Method PMethod17107 = new_Method_with(PArray17108, PArray17109, empty_Array, PThreadedCode17110, 2, PAssign17111, PSend17117);
    
    MethodClosure MC_SMB_compile_ = new_MethodClosure((Method)PMethod17107, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_compile_, MC_SMB_compile_);
}


static void init_SMB_printStacktrace() {
    Symbol SMB_printStacktrace = new_Symbol(L"printStacktrace");
    // printStacktrace. 
<<<<<<< HEAD
    Send PSend17154 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_printStacktrace, 0);
    Array PThreadedCode17153 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17154, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17152 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17153, 2, PSend17154, self);
    
    MethodClosure MC_SMB_printStacktrace = new_MethodClosure((Method)PMethod17152, Interpretation_Debugger_Class);
=======
    Send PSend17120 = new_Send((Optr)slot_Interpretation_Interpreter_context, SMB_printStacktrace, 0);
    Array PThreadedCode17119 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_Interpretation_Interpreter_context, (Optr)&t_send0, (Optr)PSend17120, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17118 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17119, 2, PSend17120, self);
    
    MethodClosure MC_SMB_printStacktrace = new_MethodClosure((Method)PMethod17118, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Interpretation_Debugger_Class, SMB_printStacktrace, MC_SMB_printStacktrace);
}


static void init_SMB_skipBlock_() {
    Symbol SMB_skipBlock_ = new_Symbol(L"skipBlock:");
    Variable VAR_count_0_0 = new_Variable_named(L"count", 0);
<<<<<<< HEAD
    Array PArray17156 = new_Array_with(1, (Optr)VAR_count_0_0);
    Variable VAR_skips_0_1 = new_Variable_named(L"skips", 0);
    Variable VAR_previousBlock_0_2 = new_Variable_named(L"previousBlock", 0);
    Array PArray17157 = new_Array_with(2, (Optr)VAR_skips_0_1, (Optr)VAR_previousBlock_0_2);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17159 = new_Assign((Optr)VAR_skips_0_1, (Optr)int_0_Const);
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    // stepBlock. 
    Send PSend17161 = new_Send((Optr)self, SMB_stepBlock, 0);
    Assign PAssign17160 = new_Assign((Optr)VAR_previousBlock_0_2, (Optr)PSend17161);
=======
    Array PArray17122 = new_Array_with(1, (Optr)VAR_count_0_0);
    Variable VAR_skips_0_1 = new_Variable_named(L"skips", 0);
    Variable VAR_previousBlock_0_2 = new_Variable_named(L"previousBlock", 0);
    Array PArray17123 = new_Array_with(2, (Optr)VAR_skips_0_1, (Optr)VAR_previousBlock_0_2);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17125 = new_Assign((Optr)VAR_skips_0_1, (Optr)int_0_Const);
    Symbol SMB_stepBlock = new_Symbol(L"stepBlock");
    // stepBlock. 
    Send PSend17127 = new_Send((Optr)self, SMB_stepBlock, 0);
    Assign PAssign17126 = new_Assign((Optr)VAR_previousBlock_0_2, (Optr)PSend17127);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Variable VAR_receiver_1_0 = new_Variable_named(L"receiver", 1);
    Variable VAR_class_1_1 = new_Variable_named(L"class", 1);
    Variable VAR_message_1_2 = new_Variable_named(L"message", 1);
    Variable VAR_action_1_3 = new_Variable_named(L"action", 1);
<<<<<<< HEAD
    Array PArray17163 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
=======
    Array PArray17129 = new_Array_with(4, (Optr)VAR_receiver_1_0, (Optr)VAR_class_1_1, (Optr)VAR_message_1_2, (Optr)VAR_action_1_3);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend17166 = new_Send((Optr)VAR_skips_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17165 = new_Assign((Optr)VAR_skips_0_1, (Optr)PSend17166);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend17167 = new_Send((Optr)VAR_skips_0_1, SMB__gt__equals_, 1, (Optr)VAR_count_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    // stepBlock:. 
    Send PSend17171 = new_Send((Optr)self, SMB_stepBlock_, 1, (Optr)VAR_previousBlock_0_2);
    Array PThreadedCode17170 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_previousBlock_0_2, (Optr)&t_send1, (Optr)PSend17171, (Optr)&t_block_return);
    Block PBlock17169 = new_Block_with(empty_Array, empty_Array, PThreadedCode17170, 1, PSend17171);
    // ifTrue:. 
    Send PSend17168 = new_Send((Optr)PSend17167, SMB_ifTrue_, 1, (Optr)PBlock17169);
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    // executeAction:. 
    Send PSend17172 = new_Send((Optr)self, SMB_executeAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode17164 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17165, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17166, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_variable, (Optr)VAR_count_0_0, (Optr)&t_send1, (Optr)PSend17167, (Optr)&t_send_ifTrue_, (Optr)PSend17168, (Optr)PBlock17169, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend17172, (Optr)&t_method_return);
    Block PBlock17162 = new_Block_with(PArray17163, empty_Array, PThreadedCode17164, 3, PAssign17165, PSend17168, PSend17172);
    Array PThreadedCode17158 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign17159, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17160, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17161, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17162, (Optr)&t_method_return);
    Method PMethod17155 = new_Method_with(PArray17156, PArray17157, empty_Array, PThreadedCode17158, 3, PAssign17159, PAssign17160, PBlock17162);
    
    MethodClosure MC_SMB_skipBlock_ = new_MethodClosure((Method)PMethod17155, Interpretation_Debugger_Class);
=======
    Send PSend17132 = new_Send((Optr)VAR_skips_0_1, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17131 = new_Assign((Optr)VAR_skips_0_1, (Optr)PSend17132);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend17133 = new_Send((Optr)VAR_skips_0_1, SMB__gt__equals_, 1, (Optr)VAR_count_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_stepBlock_ = new_Symbol(L"stepBlock:");
    // stepBlock:. 
    Send PSend17137 = new_Send((Optr)self, SMB_stepBlock_, 1, (Optr)VAR_previousBlock_0_2);
    Array PThreadedCode17136 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_previousBlock_0_2, (Optr)&t_send1, (Optr)PSend17137, (Optr)&t_block_return);
    Block PBlock17135 = new_Block_with(empty_Array, empty_Array, PThreadedCode17136, 1, PSend17137);
    // ifTrue:. 
    Send PSend17134 = new_Send((Optr)PSend17133, SMB_ifTrue_, 1, (Optr)PBlock17135);
    Symbol SMB_executeAction_ = new_Symbol(L"executeAction:");
    // executeAction:. 
    Send PSend17138 = new_Send((Optr)self, SMB_executeAction_, 1, (Optr)VAR_action_1_3);
    Array PThreadedCode17130 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign17131, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17132, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_skips_0_1, (Optr)&t_push_variable, (Optr)VAR_count_0_0, (Optr)&t_send1, (Optr)PSend17133, (Optr)&t_send_ifTrue_, (Optr)PSend17134, (Optr)PBlock17135, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_action_1_3, (Optr)&t_send1, (Optr)PSend17138, (Optr)&t_method_return);
    Block PBlock17128 = new_Block_with(PArray17129, empty_Array, PThreadedCode17130, 3, PAssign17131, PSend17134, PSend17138);
    Array PThreadedCode17124 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign17125, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17126, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17127, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17128, (Optr)&t_method_return);
    Method PMethod17121 = new_Method_with(PArray17122, PArray17123, empty_Array, PThreadedCode17124, 3, PAssign17125, PAssign17126, PBlock17128);
    
    MethodClosure MC_SMB_skipBlock_ = new_MethodClosure((Method)PMethod17121, Interpretation_Debugger_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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