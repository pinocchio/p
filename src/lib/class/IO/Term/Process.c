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
    Send PSend8850 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8849 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8850, (Optr)&t_method_return);
    Method PMethod8848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8849, 1, PSend8850);
    
    MethodClosure MC_SMB_canRead = new_MethodClosure((Method)PMethod8848, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canRead, MC_SMB_canRead);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8854 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    // isClosed. 
    Send PSend8856 = new_Send((Optr)self, SMB_isClosed, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8860 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8859 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8860, (Optr)&t_block_return);
    Block PBlock8858 = new_Block_with(empty_Array, empty_Array, PThreadedCode8859, 1, PSend8860);
    // ifTrue:. 
    Send PSend8857 = new_Send((Optr)PSend8856, SMB_ifTrue_, 1, (Optr)PBlock8858);
    Symbol SMB_pclose = new_Symbol(L"pclose");
    // pclose. 
    Send PSend8862 = new_Send((Optr)self, SMB_pclose, 0);
    Assign PAssign8861 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)PSend8862);
    Assign PAssign8863 = new_Assign((Optr)slot_IO_Term_Process_in, (Optr)nil_Const);
    Assign PAssign8864 = new_Assign((Optr)slot_IO_Term_Process_out, (Optr)nil_Const);
    Array PThreadedCode8855 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8856, (Optr)&t_send_ifTrue_, (Optr)PSend8857, (Optr)PBlock8858, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8861, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8862, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8863, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8864, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Block PBlock8853 = new_Block_with(PArray8854, empty_Array, PThreadedCode8855, 5, PSend8857, PAssign8861, PAssign8863, PAssign8864, slot_IO_Term_Process_returnStatus);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8865 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8853);
    Array PThreadedCode8852 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8853, (Optr)&t_send1, (Optr)PSend8865, (Optr)&t_method_return);
    Method PMethod8851 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8852, 1, PSend8865);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod8851, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_pclose() {
    Symbol SMB_pclose = new_Symbol(L"pclose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8869 = new_String(L"\n    IO_File stream  = (IO_File)${in};\n    if (!stream) {\n        stream = (IO_File)${out};\t\n    }\n    int returnValue = pclose(stream->file);\n    ^ new_SmallInt(returnValue);\n\t");
    Annotation PAnnotation8868 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_pclose, (Optr)SMB_IO_minus_Process, (Optr)string_8869);
    Array PArray8867 = new_Array_with(1, (Optr)PAnnotation8868);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8871 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8870 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8871, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8866 = new_NativeMethod_with(empty_Array, empty_Array, PArray8867, PThreadedCode8870, 2, PSend8871, self);
    
    MethodClosure MC_SMB_pclose = new_MethodClosure((Method)PNativeMethod8866, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_pclose, MC_SMB_pclose);
}


static void init_SMB_command() {
    Symbol SMB_command = new_Symbol(L"command");
    Array PThreadedCode8873 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_command, (Optr)&t_method_return);
    Method PMethod8872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8873, 1, slot_IO_Term_Process_command);
    
    MethodClosure MC_SMB_command = new_MethodClosure((Method)PMethod8872, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command, MC_SMB_command);
}


static void init_SMB_mode_() {
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Variable VAR_readMode_0_0 = new_Variable_named(L"readMode", 0);
    Array PArray8875 = new_Array_with(1, (Optr)VAR_readMode_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8877 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8881 = new_String(L"Can't change the mode of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8881_Const = new_Constant((Optr)string_8881);
    // error:. 
    Send PSend8882 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8881_Const);
    Array PThreadedCode8880 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8881, (Optr)&t_send1, (Optr)PSend8882, (Optr)&t_block_return);
    Block PBlock8879 = new_Block_with(empty_Array, empty_Array, PThreadedCode8880, 1, PSend8882);
    // ifTrue:. 
    Send PSend8878 = new_Send((Optr)PSend8877, SMB_ifTrue_, 1, (Optr)PBlock8879);
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    // isValidMode:. 
    Send PSend8883 = new_Send((Optr)self, SMB_isValidMode_, 1, (Optr)VAR_readMode_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8887 = new_String(L"Invalid read/write mode: ");
    Constant string_8887_Const = new_Constant((Optr)string_8887);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8888 = new_Send((Optr)string_8887_Const, SMB__append_, 1, (Optr)VAR_readMode_0_0);
    // error:. 
    Send PSend8889 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8888);
    Array PThreadedCode8886 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8887, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8888, (Optr)&t_send1, (Optr)PSend8889, (Optr)&t_block_return);
    Block PBlock8885 = new_Block_with(empty_Array, empty_Array, PThreadedCode8886, 1, PSend8889);
    // ifFalse:. 
    Send PSend8884 = new_Send((Optr)PSend8883, SMB_ifFalse_, 1, (Optr)PBlock8885);
    Assign PAssign8890 = new_Assign((Optr)slot_IO_Term_Process_mode, (Optr)VAR_readMode_0_0);
    Array PThreadedCode8876 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8877, (Optr)&t_send_ifTrue_, (Optr)PSend8878, (Optr)PBlock8879, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8883, (Optr)&t_send_ifFalse_, (Optr)PSend8884, (Optr)PBlock8885, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8890, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8874 = new_Method_with(PArray8875, empty_Array, empty_Array, PThreadedCode8876, 4, PSend8878, PSend8884, PAssign8890, self);
    
    MethodClosure MC_SMB_mode_ = new_MethodClosure((Method)PMethod8874, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode_, MC_SMB_mode_);
}


static void init_SMB_in() {
    Symbol SMB_in = new_Symbol(L"in");
    Array PThreadedCode8892 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_in, (Optr)&t_method_return);
    Method PMethod8891 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8892, 1, slot_IO_Term_Process_in);
    
    MethodClosure MC_SMB_in = new_MethodClosure((Method)PMethod8891, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_in, MC_SMB_in);
}


static void init_SMB_canWrite() {
    Symbol SMB_canWrite = new_Symbol(L"canWrite");
    Symbol  SMB_w = new_Symbol(L"w");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8895 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8894 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8895, (Optr)&t_method_return);
    Method PMethod8893 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8894, 1, PSend8895);
    
    MethodClosure MC_SMB_canWrite = new_MethodClosure((Method)PMethod8893, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canWrite, MC_SMB_canWrite);
}


static void init_SMB_isOpened() {
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    Symbol SMB_in = new_Symbol(L"in");
    // in. 
    Send PSend8898 = new_Send((Optr)self, SMB_in, 0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend8899 = new_Send((Optr)PSend8898, SMB_isNil, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8900 = new_Send((Optr)PSend8899, SMB_not, 0);
    Symbol SMB_out = new_Symbol(L"out");
    // out. 
    Send PSend8903 = new_Send((Optr)self, SMB_out, 0);
    // isNil. 
    Send PSend8904 = new_Send((Optr)PSend8903, SMB_isNil, 0);
    // not. 
    Send PSend8905 = new_Send((Optr)PSend8904, SMB_not, 0);
    Array PThreadedCode8902 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8903, (Optr)&t_send0, (Optr)PSend8904, (Optr)&t_send0, (Optr)PSend8905, (Optr)&t_block_return);
    Block PBlock8901 = new_Block_with(empty_Array, empty_Array, PThreadedCode8902, 1, PSend8905);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8906 = new_Send((Optr)PSend8900, SMB_or_, 1, (Optr)PBlock8901);
    Array PThreadedCode8897 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8898, (Optr)&t_send0, (Optr)PSend8899, (Optr)&t_send0, (Optr)PSend8900, (Optr)&t_push_closure, (Optr)PBlock8901, (Optr)&t_send1, (Optr)PSend8906, (Optr)&t_method_return);
    Method PMethod8896 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8897, 1, PSend8906);
    
    MethodClosure MC_SMB_isOpened = new_MethodClosure((Method)PMethod8896, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isOpened, MC_SMB_isOpened);
}


static void init_SMB_out() {
    Symbol SMB_out = new_Symbol(L"out");
    Array PThreadedCode8908 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_out, (Optr)&t_method_return);
    Method PMethod8907 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8908, 1, slot_IO_Term_Process_out);
    
    MethodClosure MC_SMB_out = new_MethodClosure((Method)PMethod8907, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_out, MC_SMB_out);
}


static void init_SMB_popen() {
    Symbol SMB_popen = new_Symbol(L"popen");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8912 = new_String(L"\n    char * command      = unicode_to_ascii(((String)${command})->value);\n    char * mode         = unicode_to_ascii(((Symbol)${mode})->value);\n    FILE * stream       = popen(command, mode);\n    assert(stream, fwprintf(stderr,\n            \t\t\t\tL\"%s (program: '%s', mode: '%s')\\n\",\n            \t\t\t\tstrerror(errno), command, mode););\n    ${out}  = (Optr)new_IO_ReadFile_from(stream);\n    ${in}   = (Optr)new_IO_WriteFile_from(stream);\n    ^self;\n\t");
    Annotation PAnnotation8911 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_popen, (Optr)SMB_IO_minus_Process, (Optr)string_8912);
    Array PArray8910 = new_Array_with(1, (Optr)PAnnotation8911);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8914 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8913 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8914, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8909 = new_NativeMethod_with(empty_Array, empty_Array, PArray8910, PThreadedCode8913, 2, PSend8914, self);
    
    MethodClosure MC_SMB_popen = new_MethodClosure((Method)PNativeMethod8909, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_popen, MC_SMB_popen);
}


static void init_SMB_returnStatus() {
    Symbol SMB_returnStatus = new_Symbol(L"returnStatus");
    Array PThreadedCode8916 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Method PMethod8915 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8916, 1, slot_IO_Term_Process_returnStatus);
    
    MethodClosure MC_SMB_returnStatus = new_MethodClosure((Method)PMethod8915, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_returnStatus, MC_SMB_returnStatus);
}


static void init_SMB_canReadAndWrite() {
    Symbol SMB_canReadAndWrite = new_Symbol(L"canReadAndWrite");
    Symbol SMB_mode = new_Symbol(L"mode");
    // mode. 
    Send PSend8919 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_rw = new_Symbol(L"rw");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_rw_Const = new_Constant((Optr)SMB_rw);
    // =. 
    Send PSend8920 = new_Send((Optr)PSend8919, SMB__equals_, 1, (Optr)SMB_rw_Const);
    // mode. 
    Send PSend8923 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_r_plus_ = new_Symbol(L"r+");
    Constant SMB_r_plus__Const = new_Constant((Optr)SMB_r_plus_);
    // =. 
    Send PSend8924 = new_Send((Optr)PSend8923, SMB__equals_, 1, (Optr)SMB_r_plus__Const);
    Array PThreadedCode8922 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8923, (Optr)&t_push1, (Optr)SMB_r_plus_, (Optr)&t_send1, (Optr)PSend8924, (Optr)&t_block_return);
    Block PBlock8921 = new_Block_with(empty_Array, empty_Array, PThreadedCode8922, 1, PSend8924);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8925 = new_Send((Optr)PSend8920, SMB_or_, 1, (Optr)PBlock8921);
    Array PThreadedCode8918 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8919, (Optr)&t_push1, (Optr)SMB_rw, (Optr)&t_send1, (Optr)PSend8920, (Optr)&t_push_closure, (Optr)PBlock8921, (Optr)&t_send1, (Optr)PSend8925, (Optr)&t_method_return);
    Method PMethod8917 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8918, 1, PSend8925);
    
    MethodClosure MC_SMB_canReadAndWrite = new_MethodClosure((Method)PMethod8917, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canReadAndWrite, MC_SMB_canReadAndWrite);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8928 = new_Super(SMB_initialize, 0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // mode:. 
    Send PSend8929 = new_Send((Optr)self, SMB_mode_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8927 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8928, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8929, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8926 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8927, 3, PSuper8928, PSend8929, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8926, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_command_() {
    Symbol SMB_command_ = new_Symbol(L"command:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8931 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8933 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8937 = new_String(L"Can't change the command of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8937_Const = new_Constant((Optr)string_8937);
    // error:. 
    Send PSend8938 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8937_Const);
    Array PThreadedCode8936 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8937, (Optr)&t_send1, (Optr)PSend8938, (Optr)&t_block_return);
    Block PBlock8935 = new_Block_with(empty_Array, empty_Array, PThreadedCode8936, 1, PSend8938);
    // ifTrue:. 
    Send PSend8934 = new_Send((Optr)PSend8933, SMB_ifTrue_, 1, (Optr)PBlock8935);
    Assign PAssign8939 = new_Assign((Optr)slot_IO_Term_Process_command, (Optr)VAR_aCommandString_0_0);
    Array PThreadedCode8932 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8933, (Optr)&t_send_ifTrue_, (Optr)PSend8934, (Optr)PBlock8935, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8939, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8930 = new_Method_with(PArray8931, empty_Array, empty_Array, PThreadedCode8932, 3, PSend8934, PAssign8939, self);
    
    MethodClosure MC_SMB_command_ = new_MethodClosure((Method)PMethod8930, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command_, MC_SMB_command_);
}


static void init_SMB_open() {
    Symbol SMB_open = new_Symbol(L"open");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8943 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8945 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8949 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8948 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8949, (Optr)&t_block_return);
    Block PBlock8947 = new_Block_with(empty_Array, empty_Array, PThreadedCode8948, 1, PSend8949);
    // ifTrue:. 
    Send PSend8946 = new_Send((Optr)PSend8945, SMB_ifTrue_, 1, (Optr)PBlock8947);
    Symbol SMB_command = new_Symbol(L"command");
    // command. 
    Send PSend8950 = new_Send((Optr)self, SMB_command, 0);
    String string_8953 = new_String(L"Can't open with an empty command");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8953_Const = new_Constant((Optr)string_8953);
    // error:. 
    Send PSend8954 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8953_Const);
    Array PThreadedCode8952 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8953, (Optr)&t_send1, (Optr)PSend8954, (Optr)&t_block_return);
    Block PBlock8951 = new_Block_with(empty_Array, empty_Array, PThreadedCode8952, 1, PSend8954);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8955 = new_Send((Optr)PSend8950, SMB_ifNil_, 1, (Optr)PBlock8951);
    Assign PAssign8956 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)nil_Const);
    Symbol SMB_popen = new_Symbol(L"popen");
    // popen. 
    Send PSend8957 = new_Send((Optr)self, SMB_popen, 0);
    Array PThreadedCode8944 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8945, (Optr)&t_send_ifTrue_, (Optr)PSend8946, (Optr)PBlock8947, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8950, (Optr)&t_push_closure, (Optr)PBlock8951, (Optr)&t_send1, (Optr)PSend8955, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8956, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8957, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8942 = new_Block_with(PArray8943, empty_Array, PThreadedCode8944, 5, PSend8946, PSend8955, PAssign8956, PSend8957, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8958 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8942);
    Array PThreadedCode8941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8942, (Optr)&t_send1, (Optr)PSend8958, (Optr)&t_method_return);
    Method PMethod8940 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8941, 1, PSend8958);
    
    MethodClosure MC_SMB_open = new_MethodClosure((Method)PMethod8940, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_open, MC_SMB_open);
}


static void init_SMB_isClosed() {
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8961 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8962 = new_Send((Optr)PSend8961, SMB_not, 0);
    Array PThreadedCode8960 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8961, (Optr)&t_send0, (Optr)PSend8962, (Optr)&t_method_return);
    Method PMethod8959 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8960, 1, PSend8962);
    
    MethodClosure MC_SMB_isClosed = new_MethodClosure((Method)PMethod8959, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isClosed, MC_SMB_isClosed);
}


static void init_SMB_isValidMode_() {
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    Variable VAR_aModeString_0_0 = new_Variable_named(L"aModeString", 0);
    Array PArray8964 = new_Array_with(1, (Optr)VAR_aModeString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend8966 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_r_Const);
    Symbol  SMB_w = new_Symbol(L"w");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8969 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8968 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8969, (Optr)&t_block_return);
    Block PBlock8967 = new_Block_with(empty_Array, empty_Array, PThreadedCode8968, 1, PSend8969);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8970 = new_Send((Optr)PSend8966, SMB_or_, 1, (Optr)PBlock8967);
    Array PThreadedCode8965 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8966, (Optr)&t_push_closure, (Optr)PBlock8967, (Optr)&t_send1, (Optr)PSend8970, (Optr)&t_method_return);
    Method PMethod8963 = new_Method_with(PArray8964, empty_Array, empty_Array, PThreadedCode8965, 1, PSend8970);
    
    MethodClosure MC_SMB_isValidMode_ = new_MethodClosure((Method)PMethod8963, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isValidMode_, MC_SMB_isValidMode_);
}


static void init_SMB_mode() {
    Symbol SMB_mode = new_Symbol(L"mode");
    Array PThreadedCode8972 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_method_return);
    Method PMethod8971 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8972, 1, slot_IO_Term_Process_mode);
    
    MethodClosure MC_SMB_mode = new_MethodClosure((Method)PMethod8971, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode, MC_SMB_mode);
}


static void init_class_SMB_open_withMode_() {
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Variable VAR_readMode_0_1 = new_Variable_named(L"readMode", 0);
    Array PArray8974 = new_Array_with(2, (Optr)VAR_aCommandString_0_0, (Optr)VAR_readMode_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8977 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_command_ = new_Symbol(L"command:");
    // command:. 
    Send PSend8979 = new_Send((Optr)VAR__receiver__1_0, SMB_command_, 1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    // mode:. 
    Send PSend8980 = new_Send((Optr)VAR__receiver__1_0, SMB_mode_, 1, (Optr)VAR_readMode_0_1);
    Symbol SMB_open = new_Symbol(L"open");
    // open. 
    Send PSend8981 = new_Send((Optr)VAR__receiver__1_0, SMB_open, 0);
    Array PThreadedCode8978 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_send1, (Optr)PSend8979, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_readMode_0_1, (Optr)&t_send1, (Optr)PSend8980, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8981, (Optr)&t_method_return);
    Block PBlock8976 = new_Block_with(PArray8977, empty_Array, PThreadedCode8978, 3, PSend8979, PSend8980, PSend8981);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8982 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8983 = new_Send((Optr)PBlock8976, SMB_value_, 1, (Optr)PSend8982);
    Array PThreadedCode8975 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock8976, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8982, (Optr)&t_send1, (Optr)PSend8983, (Optr)&t_method_return);
    Method PMethod8973 = new_Method_with(PArray8974, empty_Array, empty_Array, PThreadedCode8975, 1, PSend8983);
    
    MethodClosure MC_SMB_open_withMode_ = new_MethodClosure((Method)PMethod8973, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_withMode_, MC_SMB_open_withMode_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8986 = new_String(L"plugin/io/Process.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Process_Const = new_Constant((Optr)SMB_IO_minus_Process);
    Constant string_8986_Const = new_Constant((Optr)string_8986);
    // require:at:. 
    Send PSend8987 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Process_Const, (Optr)string_8986_Const);
    Array PThreadedCode8985 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Process, (Optr)&t_push1, (Optr)string_8986, (Optr)&t_send2, (Optr)PSend8987, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8984 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8985, 2, PSend8987, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8984, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8989 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // open:withMode:. 
    Send PSend8991 = new_Send((Optr)self, SMB_open_withMode_, 2, (Optr)VAR_aCommandString_0_0, (Optr)SMB_r_Const);
    Array PThreadedCode8990 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send2, (Optr)PSend8991, (Optr)&t_method_return);
    Method PMethod8988 = new_Method_with(PArray8989, empty_Array, empty_Array, PThreadedCode8990, 1, PSend8991);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PMethod8988, HEADER(IO_Term_Process_Class));
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