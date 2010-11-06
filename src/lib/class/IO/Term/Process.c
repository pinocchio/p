#include <lib/class/IO/Term/Process.h>


Optr layout_IO_Term_Process_Class_class;
Optr slot_IO_Term_Process_command;
Optr slot_IO_Term_Process_mode;
Optr slot_IO_Term_Process_in;
Optr slot_IO_Term_Process_out;
Optr slot_IO_Term_Process_returnStatus;
Optr layout_IO_Term_Process;


static void init_SMB_canRead() {
    Symbol SMB_canRead = new_Symbol(L"canRead");
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend8857 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8856 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8857, (Optr)&t_method_return);
    Method PMethod8855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8856, 1, PSend8857);
    
    MethodClosure MC_SMB_canRead = new_MethodClosure((Method)PMethod8855, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canRead, MC_SMB_canRead);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8861 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    // isClosed. 
    Send PSend8863 = new_Send((Optr)self, SMB_isClosed, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8867 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8866 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8867, (Optr)&t_block_return);
    Block PBlock8865 = new_Block_with(empty_Array, empty_Array, PThreadedCode8866, 1, PSend8867);
    // ifTrue:. 
    Send PSend8864 = new_Send((Optr)PSend8863, SMB_ifTrue_, 1, (Optr)PBlock8865);
    Symbol SMB_pclose = new_Symbol(L"pclose");
    // pclose. 
    Send PSend8869 = new_Send((Optr)self, SMB_pclose, 0);
    Assign PAssign8868 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)PSend8869);
    Assign PAssign8870 = new_Assign((Optr)slot_IO_Term_Process_in, (Optr)nil_Const);
    Assign PAssign8871 = new_Assign((Optr)slot_IO_Term_Process_out, (Optr)nil_Const);
    Array PThreadedCode8862 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8863, (Optr)&t_send_ifTrue_, (Optr)PSend8864, (Optr)PBlock8865, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8868, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8869, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8870, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8871, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Block PBlock8860 = new_Block_with(PArray8861, empty_Array, PThreadedCode8862, 5, PSend8864, PAssign8868, PAssign8870, PAssign8871, slot_IO_Term_Process_returnStatus);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8872 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8860);
    Array PThreadedCode8859 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8860, (Optr)&t_send1, (Optr)PSend8872, (Optr)&t_method_return);
    Method PMethod8858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8859, 1, PSend8872);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod8858, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_pclose() {
    Symbol SMB_pclose = new_Symbol(L"pclose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8876 = new_String(L"\n    IO_File stream  = (IO_File)${in};\n    if (!stream) {\n        stream = (IO_File)${out};\t\n    }\n    int returnValue = pclose(stream->file);\n    ^ new_SmallInt(returnValue);\n\t");
    Annotation PAnnotation8875 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_pclose, (Optr)SMB_IO_minus_Process, (Optr)string_8876);
    Array PArray8874 = new_Array_with(1, (Optr)PAnnotation8875);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8878 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8877 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8878, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8873 = new_NativeMethod_with(empty_Array, empty_Array, PArray8874, PThreadedCode8877, 2, PSend8878, self);
    
    MethodClosure MC_SMB_pclose = new_MethodClosure((Method)PNativeMethod8873, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_pclose, MC_SMB_pclose);
}


static void init_SMB_command() {
    Symbol SMB_command = new_Symbol(L"command");
    Array PThreadedCode8880 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_command, (Optr)&t_method_return);
    Method PMethod8879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8880, 1, slot_IO_Term_Process_command);
    
    MethodClosure MC_SMB_command = new_MethodClosure((Method)PMethod8879, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command, MC_SMB_command);
}


static void init_SMB_mode_() {
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Variable VAR_readMode_0_0 = new_Variable_named(L"readMode", 0);
    Array PArray8882 = new_Array_with(1, (Optr)VAR_readMode_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8884 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8888 = new_String(L"Can't change the mode of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8888_Const = new_Constant((Optr)string_8888);
    // error:. 
    Send PSend8889 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8888_Const);
    Array PThreadedCode8887 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8888, (Optr)&t_send1, (Optr)PSend8889, (Optr)&t_block_return);
    Block PBlock8886 = new_Block_with(empty_Array, empty_Array, PThreadedCode8887, 1, PSend8889);
    // ifTrue:. 
    Send PSend8885 = new_Send((Optr)PSend8884, SMB_ifTrue_, 1, (Optr)PBlock8886);
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    // isValidMode:. 
    Send PSend8890 = new_Send((Optr)self, SMB_isValidMode_, 1, (Optr)VAR_readMode_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8894 = new_String(L"Invalid read/write mode: ");
    Constant string_8894_Const = new_Constant((Optr)string_8894);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8895 = new_Send((Optr)string_8894_Const, SMB__append_, 1, (Optr)VAR_readMode_0_0);
    // error:. 
    Send PSend8896 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8895);
    Array PThreadedCode8893 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8894, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8895, (Optr)&t_send1, (Optr)PSend8896, (Optr)&t_block_return);
    Block PBlock8892 = new_Block_with(empty_Array, empty_Array, PThreadedCode8893, 1, PSend8896);
    // ifFalse:. 
    Send PSend8891 = new_Send((Optr)PSend8890, SMB_ifFalse_, 1, (Optr)PBlock8892);
    Assign PAssign8897 = new_Assign((Optr)slot_IO_Term_Process_mode, (Optr)VAR_readMode_0_0);
    Array PThreadedCode8883 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8884, (Optr)&t_send_ifTrue_, (Optr)PSend8885, (Optr)PBlock8886, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8890, (Optr)&t_send_ifFalse_, (Optr)PSend8891, (Optr)PBlock8892, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8897, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8881 = new_Method_with(PArray8882, empty_Array, empty_Array, PThreadedCode8883, 4, PSend8885, PSend8891, PAssign8897, self);
    
    MethodClosure MC_SMB_mode_ = new_MethodClosure((Method)PMethod8881, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode_, MC_SMB_mode_);
}


static void init_SMB_in() {
    Symbol SMB_in = new_Symbol(L"in");
    Array PThreadedCode8899 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_in, (Optr)&t_method_return);
    Method PMethod8898 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8899, 1, slot_IO_Term_Process_in);
    
    MethodClosure MC_SMB_in = new_MethodClosure((Method)PMethod8898, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_in, MC_SMB_in);
}


static void init_SMB_canWrite() {
    Symbol SMB_canWrite = new_Symbol(L"canWrite");
    Symbol  SMB_w = new_Symbol(L"w");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8902 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8901 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8902, (Optr)&t_method_return);
    Method PMethod8900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8901, 1, PSend8902);
    
    MethodClosure MC_SMB_canWrite = new_MethodClosure((Method)PMethod8900, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canWrite, MC_SMB_canWrite);
}


static void init_SMB_isOpened() {
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    Symbol SMB_in = new_Symbol(L"in");
    // in. 
    Send PSend8905 = new_Send((Optr)self, SMB_in, 0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend8906 = new_Send((Optr)PSend8905, SMB_isNil, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8907 = new_Send((Optr)PSend8906, SMB_not, 0);
    Symbol SMB_out = new_Symbol(L"out");
    // out. 
    Send PSend8910 = new_Send((Optr)self, SMB_out, 0);
    // isNil. 
    Send PSend8911 = new_Send((Optr)PSend8910, SMB_isNil, 0);
    // not. 
    Send PSend8912 = new_Send((Optr)PSend8911, SMB_not, 0);
    Array PThreadedCode8909 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8910, (Optr)&t_send0, (Optr)PSend8911, (Optr)&t_send0, (Optr)PSend8912, (Optr)&t_block_return);
    Block PBlock8908 = new_Block_with(empty_Array, empty_Array, PThreadedCode8909, 1, PSend8912);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8913 = new_Send((Optr)PSend8907, SMB_or_, 1, (Optr)PBlock8908);
    Array PThreadedCode8904 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8905, (Optr)&t_send0, (Optr)PSend8906, (Optr)&t_send0, (Optr)PSend8907, (Optr)&t_push_closure, (Optr)PBlock8908, (Optr)&t_send1, (Optr)PSend8913, (Optr)&t_method_return);
    Method PMethod8903 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8904, 1, PSend8913);
    
    MethodClosure MC_SMB_isOpened = new_MethodClosure((Method)PMethod8903, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isOpened, MC_SMB_isOpened);
}


static void init_SMB_out() {
    Symbol SMB_out = new_Symbol(L"out");
    Array PThreadedCode8915 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_out, (Optr)&t_method_return);
    Method PMethod8914 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8915, 1, slot_IO_Term_Process_out);
    
    MethodClosure MC_SMB_out = new_MethodClosure((Method)PMethod8914, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_out, MC_SMB_out);
}


static void init_SMB_popen() {
    Symbol SMB_popen = new_Symbol(L"popen");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8919 = new_String(L"\n    char * command      = unicode_to_ascii(((String)${command})->value);\n    char * mode         = unicode_to_ascii(((Symbol)${mode})->value);\n    FILE * stream       = popen(command, mode);\n    assert(stream, fwprintf(stderr,\n            \t\t\t\tL\"%s (program: '%s', mode: '%s')\\n\",\n            \t\t\t\tstrerror(errno), command, mode););\n    ${out}  = (Optr)new_IO_ReadFile_from(stream);\n    ${in}   = (Optr)new_IO_WriteFile_from(stream);\n    ^self;\n\t");
    Annotation PAnnotation8918 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_popen, (Optr)SMB_IO_minus_Process, (Optr)string_8919);
    Array PArray8917 = new_Array_with(1, (Optr)PAnnotation8918);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8921 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8920 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8921, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8916 = new_NativeMethod_with(empty_Array, empty_Array, PArray8917, PThreadedCode8920, 2, PSend8921, self);
    
    MethodClosure MC_SMB_popen = new_MethodClosure((Method)PNativeMethod8916, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_popen, MC_SMB_popen);
}


static void init_SMB_returnStatus() {
    Symbol SMB_returnStatus = new_Symbol(L"returnStatus");
    Array PThreadedCode8923 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Method PMethod8922 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8923, 1, slot_IO_Term_Process_returnStatus);
    
    MethodClosure MC_SMB_returnStatus = new_MethodClosure((Method)PMethod8922, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_returnStatus, MC_SMB_returnStatus);
}


static void init_SMB_canReadAndWrite() {
    Symbol SMB_canReadAndWrite = new_Symbol(L"canReadAndWrite");
    Symbol SMB_mode = new_Symbol(L"mode");
    // mode. 
    Send PSend8926 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_rw = new_Symbol(L"rw");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_rw_Const = new_Constant((Optr)SMB_rw);
    // =. 
    Send PSend8927 = new_Send((Optr)PSend8926, SMB__equals_, 1, (Optr)SMB_rw_Const);
    // mode. 
    Send PSend8930 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_r_plus_ = new_Symbol(L"r+");
    Constant SMB_r_plus__Const = new_Constant((Optr)SMB_r_plus_);
    // =. 
    Send PSend8931 = new_Send((Optr)PSend8930, SMB__equals_, 1, (Optr)SMB_r_plus__Const);
    Array PThreadedCode8929 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8930, (Optr)&t_push1, (Optr)SMB_r_plus_, (Optr)&t_send1, (Optr)PSend8931, (Optr)&t_block_return);
    Block PBlock8928 = new_Block_with(empty_Array, empty_Array, PThreadedCode8929, 1, PSend8931);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8932 = new_Send((Optr)PSend8927, SMB_or_, 1, (Optr)PBlock8928);
    Array PThreadedCode8925 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8926, (Optr)&t_push1, (Optr)SMB_rw, (Optr)&t_send1, (Optr)PSend8927, (Optr)&t_push_closure, (Optr)PBlock8928, (Optr)&t_send1, (Optr)PSend8932, (Optr)&t_method_return);
    Method PMethod8924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8925, 1, PSend8932);
    
    MethodClosure MC_SMB_canReadAndWrite = new_MethodClosure((Method)PMethod8924, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canReadAndWrite, MC_SMB_canReadAndWrite);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8935 = new_Super(SMB_initialize, 0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // mode:. 
    Send PSend8936 = new_Send((Optr)self, SMB_mode_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8934 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8935, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8936, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8933 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8934, 3, PSuper8935, PSend8936, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8933, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_command_() {
    Symbol SMB_command_ = new_Symbol(L"command:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8938 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8940 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8944 = new_String(L"Can't change the command of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8944_Const = new_Constant((Optr)string_8944);
    // error:. 
    Send PSend8945 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8944_Const);
    Array PThreadedCode8943 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8944, (Optr)&t_send1, (Optr)PSend8945, (Optr)&t_block_return);
    Block PBlock8942 = new_Block_with(empty_Array, empty_Array, PThreadedCode8943, 1, PSend8945);
    // ifTrue:. 
    Send PSend8941 = new_Send((Optr)PSend8940, SMB_ifTrue_, 1, (Optr)PBlock8942);
    Assign PAssign8946 = new_Assign((Optr)slot_IO_Term_Process_command, (Optr)VAR_aCommandString_0_0);
    Array PThreadedCode8939 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8940, (Optr)&t_send_ifTrue_, (Optr)PSend8941, (Optr)PBlock8942, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8946, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8937 = new_Method_with(PArray8938, empty_Array, empty_Array, PThreadedCode8939, 3, PSend8941, PAssign8946, self);
    
    MethodClosure MC_SMB_command_ = new_MethodClosure((Method)PMethod8937, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command_, MC_SMB_command_);
}


static void init_SMB_open() {
    Symbol SMB_open = new_Symbol(L"open");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8950 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8952 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8956 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8955 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8956, (Optr)&t_block_return);
    Block PBlock8954 = new_Block_with(empty_Array, empty_Array, PThreadedCode8955, 1, PSend8956);
    // ifTrue:. 
    Send PSend8953 = new_Send((Optr)PSend8952, SMB_ifTrue_, 1, (Optr)PBlock8954);
    Symbol SMB_command = new_Symbol(L"command");
    // command. 
    Send PSend8957 = new_Send((Optr)self, SMB_command, 0);
    String string_8960 = new_String(L"Can't open with an empty command");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8960_Const = new_Constant((Optr)string_8960);
    // error:. 
    Send PSend8961 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8960_Const);
    Array PThreadedCode8959 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8960, (Optr)&t_send1, (Optr)PSend8961, (Optr)&t_block_return);
    Block PBlock8958 = new_Block_with(empty_Array, empty_Array, PThreadedCode8959, 1, PSend8961);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8962 = new_Send((Optr)PSend8957, SMB_ifNil_, 1, (Optr)PBlock8958);
    Assign PAssign8963 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)nil_Const);
    Symbol SMB_popen = new_Symbol(L"popen");
    // popen. 
    Send PSend8964 = new_Send((Optr)self, SMB_popen, 0);
    Array PThreadedCode8951 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8952, (Optr)&t_send_ifTrue_, (Optr)PSend8953, (Optr)PBlock8954, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8957, (Optr)&t_push_closure, (Optr)PBlock8958, (Optr)&t_send1, (Optr)PSend8962, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8963, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8964, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8949 = new_Block_with(PArray8950, empty_Array, PThreadedCode8951, 5, PSend8953, PSend8962, PAssign8963, PSend8964, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8965 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8949);
    Array PThreadedCode8948 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8949, (Optr)&t_send1, (Optr)PSend8965, (Optr)&t_method_return);
    Method PMethod8947 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8948, 1, PSend8965);
    
    MethodClosure MC_SMB_open = new_MethodClosure((Method)PMethod8947, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_open, MC_SMB_open);
}


static void init_SMB_isClosed() {
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8968 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8969 = new_Send((Optr)PSend8968, SMB_not, 0);
    Array PThreadedCode8967 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8968, (Optr)&t_send0, (Optr)PSend8969, (Optr)&t_method_return);
    Method PMethod8966 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8967, 1, PSend8969);
    
    MethodClosure MC_SMB_isClosed = new_MethodClosure((Method)PMethod8966, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isClosed, MC_SMB_isClosed);
}


static void init_SMB_isValidMode_() {
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    Variable VAR_aModeString_0_0 = new_Variable_named(L"aModeString", 0);
    Array PArray8971 = new_Array_with(1, (Optr)VAR_aModeString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend8973 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_r_Const);
    Symbol  SMB_w = new_Symbol(L"w");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8976 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8975 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8976, (Optr)&t_block_return);
    Block PBlock8974 = new_Block_with(empty_Array, empty_Array, PThreadedCode8975, 1, PSend8976);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8977 = new_Send((Optr)PSend8973, SMB_or_, 1, (Optr)PBlock8974);
    Array PThreadedCode8972 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8973, (Optr)&t_push_closure, (Optr)PBlock8974, (Optr)&t_send1, (Optr)PSend8977, (Optr)&t_method_return);
    Method PMethod8970 = new_Method_with(PArray8971, empty_Array, empty_Array, PThreadedCode8972, 1, PSend8977);
    
    MethodClosure MC_SMB_isValidMode_ = new_MethodClosure((Method)PMethod8970, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isValidMode_, MC_SMB_isValidMode_);
}


static void init_SMB_mode() {
    Symbol SMB_mode = new_Symbol(L"mode");
    Array PThreadedCode8979 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_method_return);
    Method PMethod8978 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8979, 1, slot_IO_Term_Process_mode);
    
    MethodClosure MC_SMB_mode = new_MethodClosure((Method)PMethod8978, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode, MC_SMB_mode);
}


static void init_class_SMB_open_withMode_() {
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Variable VAR_readMode_0_1 = new_Variable_named(L"readMode", 0);
    Array PArray8981 = new_Array_with(2, (Optr)VAR_aCommandString_0_0, (Optr)VAR_readMode_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8984 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_command_ = new_Symbol(L"command:");
    // command:. 
    Send PSend8986 = new_Send((Optr)VAR__receiver__1_0, SMB_command_, 1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    // mode:. 
    Send PSend8987 = new_Send((Optr)VAR__receiver__1_0, SMB_mode_, 1, (Optr)VAR_readMode_0_1);
    Symbol SMB_open = new_Symbol(L"open");
    // open. 
    Send PSend8988 = new_Send((Optr)VAR__receiver__1_0, SMB_open, 0);
    Array PThreadedCode8985 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_send1, (Optr)PSend8986, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_readMode_0_1, (Optr)&t_send1, (Optr)PSend8987, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8988, (Optr)&t_method_return);
    Block PBlock8983 = new_Block_with(PArray8984, empty_Array, PThreadedCode8985, 3, PSend8986, PSend8987, PSend8988);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8989 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8990 = new_Send((Optr)PBlock8983, SMB_value_, 1, (Optr)PSend8989);
    Array PThreadedCode8982 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock8983, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8989, (Optr)&t_send1, (Optr)PSend8990, (Optr)&t_method_return);
    Method PMethod8980 = new_Method_with(PArray8981, empty_Array, empty_Array, PThreadedCode8982, 1, PSend8990);
    
    MethodClosure MC_SMB_open_withMode_ = new_MethodClosure((Method)PMethod8980, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_withMode_, MC_SMB_open_withMode_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8993 = new_String(L"plugin/io/Process.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Process_Const = new_Constant((Optr)SMB_IO_minus_Process);
    Constant string_8993_Const = new_Constant((Optr)string_8993);
    // require:at:. 
    Send PSend8994 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Process_Const, (Optr)string_8993_Const);
    Array PThreadedCode8992 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Process, (Optr)&t_push1, (Optr)string_8993, (Optr)&t_send2, (Optr)PSend8994, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8991 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8992, 2, PSend8994, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8991, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8996 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // open:withMode:. 
    Send PSend8998 = new_Send((Optr)self, SMB_open_withMode_, 2, (Optr)VAR_aCommandString_0_0, (Optr)SMB_r_Const);
    Array PThreadedCode8997 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send2, (Optr)PSend8998, (Optr)&t_method_return);
    Method PMethod8995 = new_Method_with(PArray8996, empty_Array, empty_Array, PThreadedCode8997, 1, PSend8998);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PMethod8995, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_, MC_SMB_open_);
}

void init_IO_Term_PProcess_layout() {
    layout_IO_Term_Process_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_Term_Process_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_Term_Process_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_Term_Process_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_Term_Process_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_Term_Process_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Process = new_Symbol(L"Process");
    slot_IO_Term_Process_command = (Optr)new_Slot(0, L"command");
    slot_IO_Term_Process_mode = (Optr)new_Slot(1, L"mode");
    slot_IO_Term_Process_in = (Optr)new_Slot(2, L"in");
    slot_IO_Term_Process_out = (Optr)new_Slot(3, L"out");
    slot_IO_Term_Process_returnStatus = (Optr)new_Slot(4, L"returnStatus");
    layout_IO_Term_Process = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_Term_Process)->values[0] = slot_IO_Term_Process_command; // command 
    ((Array)layout_IO_Term_Process)->values[1] = slot_IO_Term_Process_mode; // mode 
    ((Array)layout_IO_Term_Process)->values[2] = slot_IO_Term_Process_in; // in 
    ((Array)layout_IO_Term_Process)->values[3] = slot_IO_Term_Process_out; // out 
    ((Array)layout_IO_Term_Process)->values[4] = slot_IO_Term_Process_returnStatus; // returnStatus 
    IO_Term_Process_Class = (Class)new_Class(Object_Class, layout_IO_Term_Process_Class_class);
    IO_Term_Process_Class->layout = layout_IO_Term_Process;
    IO_Term_Process_Class->name = SMB_Process;
    
}

void init_IO_Term_PProcess_methods() {
    init_SMB_canRead();
    init_SMB_close();
    init_SMB_pclose();
    init_SMB_command();
    init_SMB_mode_();
    init_SMB_in();
    init_SMB_canWrite();
    init_SMB_isOpened();
    init_SMB_out();
    init_SMB_popen();
    init_SMB_returnStatus();
    init_SMB_canReadAndWrite();
    init_SMB_initialize();
    init_SMB_command_();
    init_SMB_open();
    init_SMB_isClosed();
    init_SMB_isValidMode_();
    init_SMB_mode();
    init_class_SMB_open_withMode_();
    init_class_SMB_initialize();
    init_class_SMB_open_();
    
}