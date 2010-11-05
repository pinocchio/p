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
    Send PSend8812 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8811 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8812, (Optr)&t_method_return);
    Method PMethod8810 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8811, 1, PSend8812);
    
    MethodClosure MC_SMB_canRead = new_MethodClosure((Method)PMethod8810, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canRead, MC_SMB_canRead);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8816 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    // isClosed. 
    Send PSend8818 = new_Send((Optr)self, SMB_isClosed, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8822 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8821 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8822, (Optr)&t_block_return);
    Block PBlock8820 = new_Block_with(empty_Array, empty_Array, PThreadedCode8821, 1, PSend8822);
    // ifTrue:. 
    Send PSend8819 = new_Send((Optr)PSend8818, SMB_ifTrue_, 1, (Optr)PBlock8820);
    Symbol SMB_pclose = new_Symbol(L"pclose");
    // pclose. 
    Send PSend8824 = new_Send((Optr)self, SMB_pclose, 0);
    Assign PAssign8823 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)PSend8824);
    Assign PAssign8825 = new_Assign((Optr)slot_IO_Term_Process_in, (Optr)nil_Const);
    Assign PAssign8826 = new_Assign((Optr)slot_IO_Term_Process_out, (Optr)nil_Const);
    Array PThreadedCode8817 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8818, (Optr)&t_send_ifTrue_, (Optr)PSend8819, (Optr)PBlock8820, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8823, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8824, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8825, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8826, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Block PBlock8815 = new_Block_with(PArray8816, empty_Array, PThreadedCode8817, 5, PSend8819, PAssign8823, PAssign8825, PAssign8826, slot_IO_Term_Process_returnStatus);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8827 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8815);
    Array PThreadedCode8814 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8815, (Optr)&t_send1, (Optr)PSend8827, (Optr)&t_method_return);
    Method PMethod8813 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8814, 1, PSend8827);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod8813, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_pclose() {
    Symbol SMB_pclose = new_Symbol(L"pclose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8831 = new_String(L"\n    IO_File stream  = (IO_File)${in};\n    if (!stream) {\n        stream = (IO_File)${out};\t\n    }\n    int returnValue = pclose(stream->file);\n    ^ new_SmallInt(returnValue);\n\t");
    Annotation PAnnotation8830 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_pclose, (Optr)SMB_IO_minus_Process, (Optr)string_8831);
    Array PArray8829 = new_Array_with(1, (Optr)PAnnotation8830);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8833 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8832 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8833, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8828 = new_NativeMethod_with(empty_Array, empty_Array, PArray8829, PThreadedCode8832, 2, PSend8833, self);
    
    MethodClosure MC_SMB_pclose = new_MethodClosure((Method)PNativeMethod8828, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_pclose, MC_SMB_pclose);
}


static void init_SMB_command() {
    Symbol SMB_command = new_Symbol(L"command");
    Array PThreadedCode8835 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_command, (Optr)&t_method_return);
    Method PMethod8834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8835, 1, slot_IO_Term_Process_command);
    
    MethodClosure MC_SMB_command = new_MethodClosure((Method)PMethod8834, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command, MC_SMB_command);
}


static void init_SMB_mode_() {
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Variable VAR_readMode_0_0 = new_Variable_named(L"readMode", 0);
    Array PArray8837 = new_Array_with(1, (Optr)VAR_readMode_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8839 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8843 = new_String(L"Can't change the mode of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8843_Const = new_Constant((Optr)string_8843);
    // error:. 
    Send PSend8844 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8843_Const);
    Array PThreadedCode8842 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8843, (Optr)&t_send1, (Optr)PSend8844, (Optr)&t_block_return);
    Block PBlock8841 = new_Block_with(empty_Array, empty_Array, PThreadedCode8842, 1, PSend8844);
    // ifTrue:. 
    Send PSend8840 = new_Send((Optr)PSend8839, SMB_ifTrue_, 1, (Optr)PBlock8841);
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    // isValidMode:. 
    Send PSend8845 = new_Send((Optr)self, SMB_isValidMode_, 1, (Optr)VAR_readMode_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8849 = new_String(L"Invalid read/write mode: ");
    Constant string_8849_Const = new_Constant((Optr)string_8849);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8850 = new_Send((Optr)string_8849_Const, SMB__append_, 1, (Optr)VAR_readMode_0_0);
    // error:. 
    Send PSend8851 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8850);
    Array PThreadedCode8848 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8849, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8850, (Optr)&t_send1, (Optr)PSend8851, (Optr)&t_block_return);
    Block PBlock8847 = new_Block_with(empty_Array, empty_Array, PThreadedCode8848, 1, PSend8851);
    // ifFalse:. 
    Send PSend8846 = new_Send((Optr)PSend8845, SMB_ifFalse_, 1, (Optr)PBlock8847);
    Assign PAssign8852 = new_Assign((Optr)slot_IO_Term_Process_mode, (Optr)VAR_readMode_0_0);
    Array PThreadedCode8838 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8839, (Optr)&t_send_ifTrue_, (Optr)PSend8840, (Optr)PBlock8841, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8845, (Optr)&t_send_ifFalse_, (Optr)PSend8846, (Optr)PBlock8847, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8852, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8836 = new_Method_with(PArray8837, empty_Array, empty_Array, PThreadedCode8838, 4, PSend8840, PSend8846, PAssign8852, self);
    
    MethodClosure MC_SMB_mode_ = new_MethodClosure((Method)PMethod8836, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode_, MC_SMB_mode_);
}


static void init_SMB_in() {
    Symbol SMB_in = new_Symbol(L"in");
    Array PThreadedCode8854 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_in, (Optr)&t_method_return);
    Method PMethod8853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8854, 1, slot_IO_Term_Process_in);
    
    MethodClosure MC_SMB_in = new_MethodClosure((Method)PMethod8853, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_in, MC_SMB_in);
}


static void init_SMB_canWrite() {
    Symbol SMB_canWrite = new_Symbol(L"canWrite");
    Symbol  SMB_w = new_Symbol(L"w");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8857 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8856 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8857, (Optr)&t_method_return);
    Method PMethod8855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8856, 1, PSend8857);
    
    MethodClosure MC_SMB_canWrite = new_MethodClosure((Method)PMethod8855, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canWrite, MC_SMB_canWrite);
}


static void init_SMB_isOpened() {
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    Symbol SMB_in = new_Symbol(L"in");
    // in. 
    Send PSend8860 = new_Send((Optr)self, SMB_in, 0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend8861 = new_Send((Optr)PSend8860, SMB_isNil, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8862 = new_Send((Optr)PSend8861, SMB_not, 0);
    Symbol SMB_out = new_Symbol(L"out");
    // out. 
    Send PSend8865 = new_Send((Optr)self, SMB_out, 0);
    // isNil. 
    Send PSend8866 = new_Send((Optr)PSend8865, SMB_isNil, 0);
    // not. 
    Send PSend8867 = new_Send((Optr)PSend8866, SMB_not, 0);
    Array PThreadedCode8864 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8865, (Optr)&t_send0, (Optr)PSend8866, (Optr)&t_send0, (Optr)PSend8867, (Optr)&t_block_return);
    Block PBlock8863 = new_Block_with(empty_Array, empty_Array, PThreadedCode8864, 1, PSend8867);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8868 = new_Send((Optr)PSend8862, SMB_or_, 1, (Optr)PBlock8863);
    Array PThreadedCode8859 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8860, (Optr)&t_send0, (Optr)PSend8861, (Optr)&t_send0, (Optr)PSend8862, (Optr)&t_push_closure, (Optr)PBlock8863, (Optr)&t_send1, (Optr)PSend8868, (Optr)&t_method_return);
    Method PMethod8858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8859, 1, PSend8868);
    
    MethodClosure MC_SMB_isOpened = new_MethodClosure((Method)PMethod8858, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isOpened, MC_SMB_isOpened);
}


static void init_SMB_out() {
    Symbol SMB_out = new_Symbol(L"out");
    Array PThreadedCode8870 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_out, (Optr)&t_method_return);
    Method PMethod8869 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8870, 1, slot_IO_Term_Process_out);
    
    MethodClosure MC_SMB_out = new_MethodClosure((Method)PMethod8869, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_out, MC_SMB_out);
}


static void init_SMB_popen() {
    Symbol SMB_popen = new_Symbol(L"popen");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8874 = new_String(L"\n    char * command      = unicode_to_ascii(((String)${command})->value);\n    char * mode         = unicode_to_ascii(((Symbol)${mode})->value);\n    FILE * stream       = popen(command, mode);\n    assert(stream, fwprintf(stderr,\n            \t\t\t\tL\"%s (program: '%s', mode: '%s')\\n\",\n            \t\t\t\tstrerror(errno), command, mode););\n    ${out}  = (Optr)new_IO_ReadFile_from(stream);\n    ${in}   = (Optr)new_IO_WriteFile_from(stream);\n    ^self;\n\t");
    Annotation PAnnotation8873 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_popen, (Optr)SMB_IO_minus_Process, (Optr)string_8874);
    Array PArray8872 = new_Array_with(1, (Optr)PAnnotation8873);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8876 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8875 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8876, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8871 = new_NativeMethod_with(empty_Array, empty_Array, PArray8872, PThreadedCode8875, 2, PSend8876, self);
    
    MethodClosure MC_SMB_popen = new_MethodClosure((Method)PNativeMethod8871, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_popen, MC_SMB_popen);
}


static void init_SMB_returnStatus() {
    Symbol SMB_returnStatus = new_Symbol(L"returnStatus");
    Array PThreadedCode8878 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Method PMethod8877 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8878, 1, slot_IO_Term_Process_returnStatus);
    
    MethodClosure MC_SMB_returnStatus = new_MethodClosure((Method)PMethod8877, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_returnStatus, MC_SMB_returnStatus);
}


static void init_SMB_canReadAndWrite() {
    Symbol SMB_canReadAndWrite = new_Symbol(L"canReadAndWrite");
    Symbol SMB_mode = new_Symbol(L"mode");
    // mode. 
    Send PSend8881 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_rw = new_Symbol(L"rw");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_rw_Const = new_Constant((Optr)SMB_rw);
    // =. 
    Send PSend8882 = new_Send((Optr)PSend8881, SMB__equals_, 1, (Optr)SMB_rw_Const);
    // mode. 
    Send PSend8885 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_r_plus_ = new_Symbol(L"r+");
    Constant SMB_r_plus__Const = new_Constant((Optr)SMB_r_plus_);
    // =. 
    Send PSend8886 = new_Send((Optr)PSend8885, SMB__equals_, 1, (Optr)SMB_r_plus__Const);
    Array PThreadedCode8884 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8885, (Optr)&t_push1, (Optr)SMB_r_plus_, (Optr)&t_send1, (Optr)PSend8886, (Optr)&t_block_return);
    Block PBlock8883 = new_Block_with(empty_Array, empty_Array, PThreadedCode8884, 1, PSend8886);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8887 = new_Send((Optr)PSend8882, SMB_or_, 1, (Optr)PBlock8883);
    Array PThreadedCode8880 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8881, (Optr)&t_push1, (Optr)SMB_rw, (Optr)&t_send1, (Optr)PSend8882, (Optr)&t_push_closure, (Optr)PBlock8883, (Optr)&t_send1, (Optr)PSend8887, (Optr)&t_method_return);
    Method PMethod8879 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8880, 1, PSend8887);
    
    MethodClosure MC_SMB_canReadAndWrite = new_MethodClosure((Method)PMethod8879, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canReadAndWrite, MC_SMB_canReadAndWrite);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8890 = new_Super(SMB_initialize, 0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // mode:. 
    Send PSend8891 = new_Send((Optr)self, SMB_mode_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8889 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8890, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8891, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8888 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8889, 3, PSuper8890, PSend8891, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8888, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_command_() {
    Symbol SMB_command_ = new_Symbol(L"command:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8893 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8895 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8899 = new_String(L"Can't change the command of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8899_Const = new_Constant((Optr)string_8899);
    // error:. 
    Send PSend8900 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8899_Const);
    Array PThreadedCode8898 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8899, (Optr)&t_send1, (Optr)PSend8900, (Optr)&t_block_return);
    Block PBlock8897 = new_Block_with(empty_Array, empty_Array, PThreadedCode8898, 1, PSend8900);
    // ifTrue:. 
    Send PSend8896 = new_Send((Optr)PSend8895, SMB_ifTrue_, 1, (Optr)PBlock8897);
    Assign PAssign8901 = new_Assign((Optr)slot_IO_Term_Process_command, (Optr)VAR_aCommandString_0_0);
    Array PThreadedCode8894 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8895, (Optr)&t_send_ifTrue_, (Optr)PSend8896, (Optr)PBlock8897, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8901, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8892 = new_Method_with(PArray8893, empty_Array, empty_Array, PThreadedCode8894, 3, PSend8896, PAssign8901, self);
    
    MethodClosure MC_SMB_command_ = new_MethodClosure((Method)PMethod8892, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command_, MC_SMB_command_);
}


static void init_SMB_open() {
    Symbol SMB_open = new_Symbol(L"open");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8905 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8907 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8911 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8910 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8911, (Optr)&t_block_return);
    Block PBlock8909 = new_Block_with(empty_Array, empty_Array, PThreadedCode8910, 1, PSend8911);
    // ifTrue:. 
    Send PSend8908 = new_Send((Optr)PSend8907, SMB_ifTrue_, 1, (Optr)PBlock8909);
    Symbol SMB_command = new_Symbol(L"command");
    // command. 
    Send PSend8912 = new_Send((Optr)self, SMB_command, 0);
    String string_8915 = new_String(L"Can't open with an empty command");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8915_Const = new_Constant((Optr)string_8915);
    // error:. 
    Send PSend8916 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8915_Const);
    Array PThreadedCode8914 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8915, (Optr)&t_send1, (Optr)PSend8916, (Optr)&t_block_return);
    Block PBlock8913 = new_Block_with(empty_Array, empty_Array, PThreadedCode8914, 1, PSend8916);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8917 = new_Send((Optr)PSend8912, SMB_ifNil_, 1, (Optr)PBlock8913);
    Assign PAssign8918 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)nil_Const);
    Symbol SMB_popen = new_Symbol(L"popen");
    // popen. 
    Send PSend8919 = new_Send((Optr)self, SMB_popen, 0);
    Array PThreadedCode8906 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8907, (Optr)&t_send_ifTrue_, (Optr)PSend8908, (Optr)PBlock8909, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8912, (Optr)&t_push_closure, (Optr)PBlock8913, (Optr)&t_send1, (Optr)PSend8917, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8918, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8919, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8904 = new_Block_with(PArray8905, empty_Array, PThreadedCode8906, 5, PSend8908, PSend8917, PAssign8918, PSend8919, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8920 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8904);
    Array PThreadedCode8903 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8904, (Optr)&t_send1, (Optr)PSend8920, (Optr)&t_method_return);
    Method PMethod8902 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8903, 1, PSend8920);
    
    MethodClosure MC_SMB_open = new_MethodClosure((Method)PMethod8902, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_open, MC_SMB_open);
}


static void init_SMB_isClosed() {
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8923 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8924 = new_Send((Optr)PSend8923, SMB_not, 0);
    Array PThreadedCode8922 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8923, (Optr)&t_send0, (Optr)PSend8924, (Optr)&t_method_return);
    Method PMethod8921 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8922, 1, PSend8924);
    
    MethodClosure MC_SMB_isClosed = new_MethodClosure((Method)PMethod8921, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isClosed, MC_SMB_isClosed);
}


static void init_SMB_isValidMode_() {
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    Variable VAR_aModeString_0_0 = new_Variable_named(L"aModeString", 0);
    Array PArray8926 = new_Array_with(1, (Optr)VAR_aModeString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend8928 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_r_Const);
    Symbol  SMB_w = new_Symbol(L"w");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8931 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8930 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8931, (Optr)&t_block_return);
    Block PBlock8929 = new_Block_with(empty_Array, empty_Array, PThreadedCode8930, 1, PSend8931);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8932 = new_Send((Optr)PSend8928, SMB_or_, 1, (Optr)PBlock8929);
    Array PThreadedCode8927 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8928, (Optr)&t_push_closure, (Optr)PBlock8929, (Optr)&t_send1, (Optr)PSend8932, (Optr)&t_method_return);
    Method PMethod8925 = new_Method_with(PArray8926, empty_Array, empty_Array, PThreadedCode8927, 1, PSend8932);
    
    MethodClosure MC_SMB_isValidMode_ = new_MethodClosure((Method)PMethod8925, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isValidMode_, MC_SMB_isValidMode_);
}


static void init_SMB_mode() {
    Symbol SMB_mode = new_Symbol(L"mode");
    Array PThreadedCode8934 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_method_return);
    Method PMethod8933 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8934, 1, slot_IO_Term_Process_mode);
    
    MethodClosure MC_SMB_mode = new_MethodClosure((Method)PMethod8933, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode, MC_SMB_mode);
}


static void init_class_SMB_open_withMode_() {
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Variable VAR_readMode_0_1 = new_Variable_named(L"readMode", 0);
    Array PArray8936 = new_Array_with(2, (Optr)VAR_aCommandString_0_0, (Optr)VAR_readMode_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8939 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_command_ = new_Symbol(L"command:");
    // command:. 
    Send PSend8941 = new_Send((Optr)VAR__receiver__1_0, SMB_command_, 1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    // mode:. 
    Send PSend8942 = new_Send((Optr)VAR__receiver__1_0, SMB_mode_, 1, (Optr)VAR_readMode_0_1);
    Symbol SMB_open = new_Symbol(L"open");
    // open. 
    Send PSend8943 = new_Send((Optr)VAR__receiver__1_0, SMB_open, 0);
    Array PThreadedCode8940 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_send1, (Optr)PSend8941, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_readMode_0_1, (Optr)&t_send1, (Optr)PSend8942, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8943, (Optr)&t_method_return);
    Block PBlock8938 = new_Block_with(PArray8939, empty_Array, PThreadedCode8940, 3, PSend8941, PSend8942, PSend8943);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8944 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8945 = new_Send((Optr)PBlock8938, SMB_value_, 1, (Optr)PSend8944);
    Array PThreadedCode8937 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock8938, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8944, (Optr)&t_send1, (Optr)PSend8945, (Optr)&t_method_return);
    Method PMethod8935 = new_Method_with(PArray8936, empty_Array, empty_Array, PThreadedCode8937, 1, PSend8945);
    
    MethodClosure MC_SMB_open_withMode_ = new_MethodClosure((Method)PMethod8935, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_withMode_, MC_SMB_open_withMode_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8948 = new_String(L"plugin/io/Process.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Process_Const = new_Constant((Optr)SMB_IO_minus_Process);
    Constant string_8948_Const = new_Constant((Optr)string_8948);
    // require:at:. 
    Send PSend8949 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Process_Const, (Optr)string_8948_Const);
    Array PThreadedCode8947 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Process, (Optr)&t_push1, (Optr)string_8948, (Optr)&t_send2, (Optr)PSend8949, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8946 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8947, 2, PSend8949, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8946, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8951 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // open:withMode:. 
    Send PSend8953 = new_Send((Optr)self, SMB_open_withMode_, 2, (Optr)VAR_aCommandString_0_0, (Optr)SMB_r_Const);
    Array PThreadedCode8952 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send2, (Optr)PSend8953, (Optr)&t_method_return);
    Method PMethod8950 = new_Method_with(PArray8951, empty_Array, empty_Array, PThreadedCode8952, 1, PSend8953);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PMethod8950, HEADER(IO_Term_Process_Class));
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