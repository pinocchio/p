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
    Send PSend8846 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8845 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8846, (Optr)&t_method_return);
    Method PMethod8844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8845, 1, PSend8846);
    
    MethodClosure MC_SMB_canRead = new_MethodClosure((Method)PMethod8844, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canRead, MC_SMB_canRead);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8850 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    // isClosed. 
    Send PSend8852 = new_Send((Optr)self, SMB_isClosed, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8856 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8855 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8856, (Optr)&t_block_return);
    Block PBlock8854 = new_Block_with(empty_Array, empty_Array, PThreadedCode8855, 1, PSend8856);
    // ifTrue:. 
    Send PSend8853 = new_Send((Optr)PSend8852, SMB_ifTrue_, 1, (Optr)PBlock8854);
    Symbol SMB_pclose = new_Symbol(L"pclose");
    // pclose. 
    Send PSend8858 = new_Send((Optr)self, SMB_pclose, 0);
    Assign PAssign8857 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)PSend8858);
    Assign PAssign8859 = new_Assign((Optr)slot_IO_Term_Process_in, (Optr)nil_Const);
    Assign PAssign8860 = new_Assign((Optr)slot_IO_Term_Process_out, (Optr)nil_Const);
    Array PThreadedCode8851 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8852, (Optr)&t_send_ifTrue_, (Optr)PSend8853, (Optr)PBlock8854, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8857, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8858, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8859, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8860, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Block PBlock8849 = new_Block_with(PArray8850, empty_Array, PThreadedCode8851, 5, PSend8853, PAssign8857, PAssign8859, PAssign8860, slot_IO_Term_Process_returnStatus);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8861 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8849);
    Array PThreadedCode8848 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8849, (Optr)&t_send1, (Optr)PSend8861, (Optr)&t_method_return);
    Method PMethod8847 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8848, 1, PSend8861);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod8847, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_pclose() {
    Symbol SMB_pclose = new_Symbol(L"pclose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8865 = new_String(L"\n    IO_File stream  = (IO_File)${in};\n    if (!stream) {\n        stream = (IO_File)${out};\t\n    }\n    int returnValue = pclose(stream->file);\n    ^ new_SmallInt(returnValue);\n\t");
    Annotation PAnnotation8864 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_pclose, (Optr)SMB_IO_minus_Process, (Optr)string_8865);
    Array PArray8863 = new_Array_with(1, (Optr)PAnnotation8864);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8867 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8866 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8867, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8862 = new_NativeMethod_with(empty_Array, empty_Array, PArray8863, PThreadedCode8866, 2, PSend8867, self);
    
    MethodClosure MC_SMB_pclose = new_MethodClosure((Method)PNativeMethod8862, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_pclose, MC_SMB_pclose);
}


static void init_SMB_command() {
    Symbol SMB_command = new_Symbol(L"command");
    Array PThreadedCode8869 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_command, (Optr)&t_method_return);
    Method PMethod8868 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8869, 1, slot_IO_Term_Process_command);
    
    MethodClosure MC_SMB_command = new_MethodClosure((Method)PMethod8868, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command, MC_SMB_command);
}


static void init_SMB_mode_() {
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Variable VAR_readMode_0_0 = new_Variable_named(L"readMode", 0);
    Array PArray8871 = new_Array_with(1, (Optr)VAR_readMode_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8873 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8877 = new_String(L"Can't change the mode of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8877_Const = new_Constant((Optr)string_8877);
    // error:. 
    Send PSend8878 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8877_Const);
    Array PThreadedCode8876 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8877, (Optr)&t_send1, (Optr)PSend8878, (Optr)&t_block_return);
    Block PBlock8875 = new_Block_with(empty_Array, empty_Array, PThreadedCode8876, 1, PSend8878);
    // ifTrue:. 
    Send PSend8874 = new_Send((Optr)PSend8873, SMB_ifTrue_, 1, (Optr)PBlock8875);
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    // isValidMode:. 
    Send PSend8879 = new_Send((Optr)self, SMB_isValidMode_, 1, (Optr)VAR_readMode_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8883 = new_String(L"Invalid read/write mode: ");
    Constant string_8883_Const = new_Constant((Optr)string_8883);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8884 = new_Send((Optr)string_8883_Const, SMB__append_, 1, (Optr)VAR_readMode_0_0);
    // error:. 
    Send PSend8885 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8884);
    Array PThreadedCode8882 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8883, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8884, (Optr)&t_send1, (Optr)PSend8885, (Optr)&t_block_return);
    Block PBlock8881 = new_Block_with(empty_Array, empty_Array, PThreadedCode8882, 1, PSend8885);
    // ifFalse:. 
    Send PSend8880 = new_Send((Optr)PSend8879, SMB_ifFalse_, 1, (Optr)PBlock8881);
    Assign PAssign8886 = new_Assign((Optr)slot_IO_Term_Process_mode, (Optr)VAR_readMode_0_0);
    Array PThreadedCode8872 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8873, (Optr)&t_send_ifTrue_, (Optr)PSend8874, (Optr)PBlock8875, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8879, (Optr)&t_send_ifFalse_, (Optr)PSend8880, (Optr)PBlock8881, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8886, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8870 = new_Method_with(PArray8871, empty_Array, empty_Array, PThreadedCode8872, 4, PSend8874, PSend8880, PAssign8886, self);
    
    MethodClosure MC_SMB_mode_ = new_MethodClosure((Method)PMethod8870, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode_, MC_SMB_mode_);
}


static void init_SMB_in() {
    Symbol SMB_in = new_Symbol(L"in");
    Array PThreadedCode8888 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_in, (Optr)&t_method_return);
    Method PMethod8887 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8888, 1, slot_IO_Term_Process_in);
    
    MethodClosure MC_SMB_in = new_MethodClosure((Method)PMethod8887, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_in, MC_SMB_in);
}


static void init_SMB_canWrite() {
    Symbol SMB_canWrite = new_Symbol(L"canWrite");
    Symbol  SMB_w = new_Symbol(L"w");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8891 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8890 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8891, (Optr)&t_method_return);
    Method PMethod8889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8890, 1, PSend8891);
    
    MethodClosure MC_SMB_canWrite = new_MethodClosure((Method)PMethod8889, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canWrite, MC_SMB_canWrite);
}


static void init_SMB_isOpened() {
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    Symbol SMB_in = new_Symbol(L"in");
    // in. 
    Send PSend8894 = new_Send((Optr)self, SMB_in, 0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend8895 = new_Send((Optr)PSend8894, SMB_isNil, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8896 = new_Send((Optr)PSend8895, SMB_not, 0);
    Symbol SMB_out = new_Symbol(L"out");
    // out. 
    Send PSend8899 = new_Send((Optr)self, SMB_out, 0);
    // isNil. 
    Send PSend8900 = new_Send((Optr)PSend8899, SMB_isNil, 0);
    // not. 
    Send PSend8901 = new_Send((Optr)PSend8900, SMB_not, 0);
    Array PThreadedCode8898 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8899, (Optr)&t_send0, (Optr)PSend8900, (Optr)&t_send0, (Optr)PSend8901, (Optr)&t_block_return);
    Block PBlock8897 = new_Block_with(empty_Array, empty_Array, PThreadedCode8898, 1, PSend8901);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8902 = new_Send((Optr)PSend8896, SMB_or_, 1, (Optr)PBlock8897);
    Array PThreadedCode8893 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8894, (Optr)&t_send0, (Optr)PSend8895, (Optr)&t_send0, (Optr)PSend8896, (Optr)&t_push_closure, (Optr)PBlock8897, (Optr)&t_send1, (Optr)PSend8902, (Optr)&t_method_return);
    Method PMethod8892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8893, 1, PSend8902);
    
    MethodClosure MC_SMB_isOpened = new_MethodClosure((Method)PMethod8892, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isOpened, MC_SMB_isOpened);
}


static void init_SMB_out() {
    Symbol SMB_out = new_Symbol(L"out");
    Array PThreadedCode8904 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_out, (Optr)&t_method_return);
    Method PMethod8903 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8904, 1, slot_IO_Term_Process_out);
    
    MethodClosure MC_SMB_out = new_MethodClosure((Method)PMethod8903, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_out, MC_SMB_out);
}


static void init_SMB_popen() {
    Symbol SMB_popen = new_Symbol(L"popen");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8908 = new_String(L"\n    char * command      = unicode_to_ascii(((String)${command})->value);\n    char * mode         = unicode_to_ascii(((Symbol)${mode})->value);\n    FILE * stream       = popen(command, mode);\n    assert(stream, fwprintf(stderr,\n            \t\t\t\tL\"%s (program: '%s', mode: '%s')\\n\",\n            \t\t\t\tstrerror(errno), command, mode););\n    ${out}  = (Optr)new_IO_ReadFile_from(stream);\n    ${in}   = (Optr)new_IO_WriteFile_from(stream);\n    ^self;\n\t");
    Annotation PAnnotation8907 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_popen, (Optr)SMB_IO_minus_Process, (Optr)string_8908);
    Array PArray8906 = new_Array_with(1, (Optr)PAnnotation8907);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8910 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8909 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8910, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8905 = new_NativeMethod_with(empty_Array, empty_Array, PArray8906, PThreadedCode8909, 2, PSend8910, self);
    
    MethodClosure MC_SMB_popen = new_MethodClosure((Method)PNativeMethod8905, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_popen, MC_SMB_popen);
}


static void init_SMB_returnStatus() {
    Symbol SMB_returnStatus = new_Symbol(L"returnStatus");
    Array PThreadedCode8912 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Method PMethod8911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8912, 1, slot_IO_Term_Process_returnStatus);
    
    MethodClosure MC_SMB_returnStatus = new_MethodClosure((Method)PMethod8911, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_returnStatus, MC_SMB_returnStatus);
}


static void init_SMB_canReadAndWrite() {
    Symbol SMB_canReadAndWrite = new_Symbol(L"canReadAndWrite");
    Symbol SMB_mode = new_Symbol(L"mode");
    // mode. 
    Send PSend8915 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_rw = new_Symbol(L"rw");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_rw_Const = new_Constant((Optr)SMB_rw);
    // =. 
    Send PSend8916 = new_Send((Optr)PSend8915, SMB__equals_, 1, (Optr)SMB_rw_Const);
    // mode. 
    Send PSend8919 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_r_plus_ = new_Symbol(L"r+");
    Constant SMB_r_plus__Const = new_Constant((Optr)SMB_r_plus_);
    // =. 
    Send PSend8920 = new_Send((Optr)PSend8919, SMB__equals_, 1, (Optr)SMB_r_plus__Const);
    Array PThreadedCode8918 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8919, (Optr)&t_push1, (Optr)SMB_r_plus_, (Optr)&t_send1, (Optr)PSend8920, (Optr)&t_block_return);
    Block PBlock8917 = new_Block_with(empty_Array, empty_Array, PThreadedCode8918, 1, PSend8920);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8921 = new_Send((Optr)PSend8916, SMB_or_, 1, (Optr)PBlock8917);
    Array PThreadedCode8914 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8915, (Optr)&t_push1, (Optr)SMB_rw, (Optr)&t_send1, (Optr)PSend8916, (Optr)&t_push_closure, (Optr)PBlock8917, (Optr)&t_send1, (Optr)PSend8921, (Optr)&t_method_return);
    Method PMethod8913 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8914, 1, PSend8921);
    
    MethodClosure MC_SMB_canReadAndWrite = new_MethodClosure((Method)PMethod8913, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canReadAndWrite, MC_SMB_canReadAndWrite);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8924 = new_Super(SMB_initialize, 0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // mode:. 
    Send PSend8925 = new_Send((Optr)self, SMB_mode_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8923 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8924, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8925, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8922 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8923, 3, PSuper8924, PSend8925, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8922, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_command_() {
    Symbol SMB_command_ = new_Symbol(L"command:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8927 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8929 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8933 = new_String(L"Can't change the command of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8933_Const = new_Constant((Optr)string_8933);
    // error:. 
    Send PSend8934 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8933_Const);
    Array PThreadedCode8932 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8933, (Optr)&t_send1, (Optr)PSend8934, (Optr)&t_block_return);
    Block PBlock8931 = new_Block_with(empty_Array, empty_Array, PThreadedCode8932, 1, PSend8934);
    // ifTrue:. 
    Send PSend8930 = new_Send((Optr)PSend8929, SMB_ifTrue_, 1, (Optr)PBlock8931);
    Assign PAssign8935 = new_Assign((Optr)slot_IO_Term_Process_command, (Optr)VAR_aCommandString_0_0);
    Array PThreadedCode8928 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8929, (Optr)&t_send_ifTrue_, (Optr)PSend8930, (Optr)PBlock8931, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8935, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8926 = new_Method_with(PArray8927, empty_Array, empty_Array, PThreadedCode8928, 3, PSend8930, PAssign8935, self);
    
    MethodClosure MC_SMB_command_ = new_MethodClosure((Method)PMethod8926, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command_, MC_SMB_command_);
}


static void init_SMB_open() {
    Symbol SMB_open = new_Symbol(L"open");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8939 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8941 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8945 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8944 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8945, (Optr)&t_block_return);
    Block PBlock8943 = new_Block_with(empty_Array, empty_Array, PThreadedCode8944, 1, PSend8945);
    // ifTrue:. 
    Send PSend8942 = new_Send((Optr)PSend8941, SMB_ifTrue_, 1, (Optr)PBlock8943);
    Symbol SMB_command = new_Symbol(L"command");
    // command. 
    Send PSend8946 = new_Send((Optr)self, SMB_command, 0);
    String string_8949 = new_String(L"Can't open with an empty command");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8949_Const = new_Constant((Optr)string_8949);
    // error:. 
    Send PSend8950 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8949_Const);
    Array PThreadedCode8948 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8949, (Optr)&t_send1, (Optr)PSend8950, (Optr)&t_block_return);
    Block PBlock8947 = new_Block_with(empty_Array, empty_Array, PThreadedCode8948, 1, PSend8950);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8951 = new_Send((Optr)PSend8946, SMB_ifNil_, 1, (Optr)PBlock8947);
    Assign PAssign8952 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)nil_Const);
    Symbol SMB_popen = new_Symbol(L"popen");
    // popen. 
    Send PSend8953 = new_Send((Optr)self, SMB_popen, 0);
    Array PThreadedCode8940 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8941, (Optr)&t_send_ifTrue_, (Optr)PSend8942, (Optr)PBlock8943, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8946, (Optr)&t_push_closure, (Optr)PBlock8947, (Optr)&t_send1, (Optr)PSend8951, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8952, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8953, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8938 = new_Block_with(PArray8939, empty_Array, PThreadedCode8940, 5, PSend8942, PSend8951, PAssign8952, PSend8953, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8954 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8938);
    Array PThreadedCode8937 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8938, (Optr)&t_send1, (Optr)PSend8954, (Optr)&t_method_return);
    Method PMethod8936 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8937, 1, PSend8954);
    
    MethodClosure MC_SMB_open = new_MethodClosure((Method)PMethod8936, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_open, MC_SMB_open);
}


static void init_SMB_isClosed() {
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8957 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8958 = new_Send((Optr)PSend8957, SMB_not, 0);
    Array PThreadedCode8956 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8957, (Optr)&t_send0, (Optr)PSend8958, (Optr)&t_method_return);
    Method PMethod8955 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8956, 1, PSend8958);
    
    MethodClosure MC_SMB_isClosed = new_MethodClosure((Method)PMethod8955, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isClosed, MC_SMB_isClosed);
}


static void init_SMB_isValidMode_() {
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    Variable VAR_aModeString_0_0 = new_Variable_named(L"aModeString", 0);
    Array PArray8960 = new_Array_with(1, (Optr)VAR_aModeString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend8962 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_r_Const);
    Symbol  SMB_w = new_Symbol(L"w");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8965 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8964 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8965, (Optr)&t_block_return);
    Block PBlock8963 = new_Block_with(empty_Array, empty_Array, PThreadedCode8964, 1, PSend8965);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8966 = new_Send((Optr)PSend8962, SMB_or_, 1, (Optr)PBlock8963);
    Array PThreadedCode8961 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8962, (Optr)&t_push_closure, (Optr)PBlock8963, (Optr)&t_send1, (Optr)PSend8966, (Optr)&t_method_return);
    Method PMethod8959 = new_Method_with(PArray8960, empty_Array, empty_Array, PThreadedCode8961, 1, PSend8966);
    
    MethodClosure MC_SMB_isValidMode_ = new_MethodClosure((Method)PMethod8959, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isValidMode_, MC_SMB_isValidMode_);
}


static void init_SMB_mode() {
    Symbol SMB_mode = new_Symbol(L"mode");
    Array PThreadedCode8968 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_method_return);
    Method PMethod8967 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8968, 1, slot_IO_Term_Process_mode);
    
    MethodClosure MC_SMB_mode = new_MethodClosure((Method)PMethod8967, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode, MC_SMB_mode);
}


static void init_class_SMB_open_withMode_() {
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Variable VAR_readMode_0_1 = new_Variable_named(L"readMode", 0);
    Array PArray8970 = new_Array_with(2, (Optr)VAR_aCommandString_0_0, (Optr)VAR_readMode_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8973 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_command_ = new_Symbol(L"command:");
    // command:. 
    Send PSend8975 = new_Send((Optr)VAR__receiver__1_0, SMB_command_, 1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    // mode:. 
    Send PSend8976 = new_Send((Optr)VAR__receiver__1_0, SMB_mode_, 1, (Optr)VAR_readMode_0_1);
    Symbol SMB_open = new_Symbol(L"open");
    // open. 
    Send PSend8977 = new_Send((Optr)VAR__receiver__1_0, SMB_open, 0);
    Array PThreadedCode8974 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_send1, (Optr)PSend8975, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_readMode_0_1, (Optr)&t_send1, (Optr)PSend8976, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8977, (Optr)&t_method_return);
    Block PBlock8972 = new_Block_with(PArray8973, empty_Array, PThreadedCode8974, 3, PSend8975, PSend8976, PSend8977);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8978 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8979 = new_Send((Optr)PBlock8972, SMB_value_, 1, (Optr)PSend8978);
    Array PThreadedCode8971 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock8972, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8978, (Optr)&t_send1, (Optr)PSend8979, (Optr)&t_method_return);
    Method PMethod8969 = new_Method_with(PArray8970, empty_Array, empty_Array, PThreadedCode8971, 1, PSend8979);
    
    MethodClosure MC_SMB_open_withMode_ = new_MethodClosure((Method)PMethod8969, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_withMode_, MC_SMB_open_withMode_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8982 = new_String(L"plugin/io/Process.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Process_Const = new_Constant((Optr)SMB_IO_minus_Process);
    Constant string_8982_Const = new_Constant((Optr)string_8982);
    // require:at:. 
    Send PSend8983 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Process_Const, (Optr)string_8982_Const);
    Array PThreadedCode8981 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Process, (Optr)&t_push1, (Optr)string_8982, (Optr)&t_send2, (Optr)PSend8983, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8980 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8981, 2, PSend8983, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8980, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8985 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // open:withMode:. 
    Send PSend8987 = new_Send((Optr)self, SMB_open_withMode_, 2, (Optr)VAR_aCommandString_0_0, (Optr)SMB_r_Const);
    Array PThreadedCode8986 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send2, (Optr)PSend8987, (Optr)&t_method_return);
    Method PMethod8984 = new_Method_with(PArray8985, empty_Array, empty_Array, PThreadedCode8986, 1, PSend8987);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PMethod8984, HEADER(IO_Term_Process_Class));
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