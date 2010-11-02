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
    Send PSend8788 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8787 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8788, (Optr)&t_method_return);
    Method PMethod8786 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8787, 1, PSend8788);
    
    MethodClosure MC_SMB_canRead = new_MethodClosure((Method)PMethod8786, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canRead, MC_SMB_canRead);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8792 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    // isClosed. 
    Send PSend8794 = new_Send((Optr)self, SMB_isClosed, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8798 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8797 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8798, (Optr)&t_block_return);
    Block PBlock8796 = new_Block_with(empty_Array, empty_Array, PThreadedCode8797, 1, PSend8798);
    // ifTrue:. 
    Send PSend8795 = new_Send((Optr)PSend8794, SMB_ifTrue_, 1, (Optr)PBlock8796);
    Symbol SMB_pclose = new_Symbol(L"pclose");
    // pclose. 
    Send PSend8800 = new_Send((Optr)self, SMB_pclose, 0);
    Assign PAssign8799 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)PSend8800);
    Assign PAssign8801 = new_Assign((Optr)slot_IO_Term_Process_in, (Optr)nil_Const);
    Assign PAssign8802 = new_Assign((Optr)slot_IO_Term_Process_out, (Optr)nil_Const);
    Array PThreadedCode8793 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8794, (Optr)&t_send_ifTrue_, (Optr)PSend8795, (Optr)PBlock8796, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8799, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8800, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8801, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8802, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Block PBlock8791 = new_Block_with(PArray8792, empty_Array, PThreadedCode8793, 5, PSend8795, PAssign8799, PAssign8801, PAssign8802, slot_IO_Term_Process_returnStatus);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8803 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8791);
    Array PThreadedCode8790 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8791, (Optr)&t_send1, (Optr)PSend8803, (Optr)&t_method_return);
    Method PMethod8789 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8790, 1, PSend8803);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod8789, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_pclose() {
    Symbol SMB_pclose = new_Symbol(L"pclose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8807 = new_String(L"\n    IO_File stream  = (IO_File)${in};\n    if (!stream) {\n        stream = (IO_File)${out};\t\n    }\n    int returnValue = pclose(stream->file);\n    ^ new_SmallInt(returnValue);\n\t");
    Annotation PAnnotation8806 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_pclose, (Optr)SMB_IO_minus_Process, (Optr)string_8807);
    Array PArray8805 = new_Array_with(1, (Optr)PAnnotation8806);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8809 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8808 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8809, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8804 = new_NativeMethod_with(empty_Array, empty_Array, PArray8805, PThreadedCode8808, 2, PSend8809, self);
    
    MethodClosure MC_SMB_pclose = new_MethodClosure((Method)PNativeMethod8804, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_pclose, MC_SMB_pclose);
}


static void init_SMB_command() {
    Symbol SMB_command = new_Symbol(L"command");
    Array PThreadedCode8811 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_command, (Optr)&t_method_return);
    Method PMethod8810 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8811, 1, slot_IO_Term_Process_command);
    
    MethodClosure MC_SMB_command = new_MethodClosure((Method)PMethod8810, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command, MC_SMB_command);
}


static void init_SMB_mode_() {
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Variable VAR_readMode_0_0 = new_Variable_named(L"readMode", 0);
    Array PArray8813 = new_Array_with(1, (Optr)VAR_readMode_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8815 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8819 = new_String(L"Can't change the mode of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8819_Const = new_Constant((Optr)string_8819);
    // error:. 
    Send PSend8820 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8819_Const);
    Array PThreadedCode8818 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8819, (Optr)&t_send1, (Optr)PSend8820, (Optr)&t_block_return);
    Block PBlock8817 = new_Block_with(empty_Array, empty_Array, PThreadedCode8818, 1, PSend8820);
    // ifTrue:. 
    Send PSend8816 = new_Send((Optr)PSend8815, SMB_ifTrue_, 1, (Optr)PBlock8817);
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    // isValidMode:. 
    Send PSend8821 = new_Send((Optr)self, SMB_isValidMode_, 1, (Optr)VAR_readMode_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8825 = new_String(L"Invalid read/write mode: ");
    Constant string_8825_Const = new_Constant((Optr)string_8825);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8826 = new_Send((Optr)string_8825_Const, SMB__append_, 1, (Optr)VAR_readMode_0_0);
    // error:. 
    Send PSend8827 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8826);
    Array PThreadedCode8824 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8825, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8826, (Optr)&t_send1, (Optr)PSend8827, (Optr)&t_block_return);
    Block PBlock8823 = new_Block_with(empty_Array, empty_Array, PThreadedCode8824, 1, PSend8827);
    // ifFalse:. 
    Send PSend8822 = new_Send((Optr)PSend8821, SMB_ifFalse_, 1, (Optr)PBlock8823);
    Assign PAssign8828 = new_Assign((Optr)slot_IO_Term_Process_mode, (Optr)VAR_readMode_0_0);
    Array PThreadedCode8814 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8815, (Optr)&t_send_ifTrue_, (Optr)PSend8816, (Optr)PBlock8817, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8821, (Optr)&t_send_ifFalse_, (Optr)PSend8822, (Optr)PBlock8823, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8828, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8812 = new_Method_with(PArray8813, empty_Array, empty_Array, PThreadedCode8814, 4, PSend8816, PSend8822, PAssign8828, self);
    
    MethodClosure MC_SMB_mode_ = new_MethodClosure((Method)PMethod8812, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode_, MC_SMB_mode_);
}


static void init_SMB_in() {
    Symbol SMB_in = new_Symbol(L"in");
    Array PThreadedCode8830 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_in, (Optr)&t_method_return);
    Method PMethod8829 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8830, 1, slot_IO_Term_Process_in);
    
    MethodClosure MC_SMB_in = new_MethodClosure((Method)PMethod8829, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_in, MC_SMB_in);
}


static void init_SMB_canWrite() {
    Symbol SMB_canWrite = new_Symbol(L"canWrite");
    Symbol  SMB_w = new_Symbol(L"w");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8833 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8832 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8833, (Optr)&t_method_return);
    Method PMethod8831 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8832, 1, PSend8833);
    
    MethodClosure MC_SMB_canWrite = new_MethodClosure((Method)PMethod8831, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canWrite, MC_SMB_canWrite);
}


static void init_SMB_isOpened() {
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    Symbol SMB_in = new_Symbol(L"in");
    // in. 
    Send PSend8836 = new_Send((Optr)self, SMB_in, 0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend8837 = new_Send((Optr)PSend8836, SMB_isNil, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8838 = new_Send((Optr)PSend8837, SMB_not, 0);
    Symbol SMB_out = new_Symbol(L"out");
    // out. 
    Send PSend8841 = new_Send((Optr)self, SMB_out, 0);
    // isNil. 
    Send PSend8842 = new_Send((Optr)PSend8841, SMB_isNil, 0);
    // not. 
    Send PSend8843 = new_Send((Optr)PSend8842, SMB_not, 0);
    Array PThreadedCode8840 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8841, (Optr)&t_send0, (Optr)PSend8842, (Optr)&t_send0, (Optr)PSend8843, (Optr)&t_block_return);
    Block PBlock8839 = new_Block_with(empty_Array, empty_Array, PThreadedCode8840, 1, PSend8843);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8844 = new_Send((Optr)PSend8838, SMB_or_, 1, (Optr)PBlock8839);
    Array PThreadedCode8835 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8836, (Optr)&t_send0, (Optr)PSend8837, (Optr)&t_send0, (Optr)PSend8838, (Optr)&t_push_closure, (Optr)PBlock8839, (Optr)&t_send1, (Optr)PSend8844, (Optr)&t_method_return);
    Method PMethod8834 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8835, 1, PSend8844);
    
    MethodClosure MC_SMB_isOpened = new_MethodClosure((Method)PMethod8834, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isOpened, MC_SMB_isOpened);
}


static void init_SMB_out() {
    Symbol SMB_out = new_Symbol(L"out");
    Array PThreadedCode8846 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_out, (Optr)&t_method_return);
    Method PMethod8845 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8846, 1, slot_IO_Term_Process_out);
    
    MethodClosure MC_SMB_out = new_MethodClosure((Method)PMethod8845, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_out, MC_SMB_out);
}


static void init_SMB_popen() {
    Symbol SMB_popen = new_Symbol(L"popen");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8850 = new_String(L"\n    char * command      = unicode_to_ascii(((String)${command})->value);\n    char * mode         = unicode_to_ascii(((Symbol)${mode})->value);\n    FILE * stream       = popen(command, mode);\n    assert(stream, fwprintf(stderr,\n            \t\t\t\tL\"%s (program: '%s', mode: '%s')\\n\",\n            \t\t\t\tstrerror(errno), command, mode););\n    ${out}  = (Optr)new_IO_ReadFile_from(stream);\n    ${in}   = (Optr)new_IO_WriteFile_from(stream);\n    ^self;\n\t");
    Annotation PAnnotation8849 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_popen, (Optr)SMB_IO_minus_Process, (Optr)string_8850);
    Array PArray8848 = new_Array_with(1, (Optr)PAnnotation8849);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8852 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8851 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8852, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8847 = new_NativeMethod_with(empty_Array, empty_Array, PArray8848, PThreadedCode8851, 2, PSend8852, self);
    
    MethodClosure MC_SMB_popen = new_MethodClosure((Method)PNativeMethod8847, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_popen, MC_SMB_popen);
}


static void init_SMB_returnStatus() {
    Symbol SMB_returnStatus = new_Symbol(L"returnStatus");
    Array PThreadedCode8854 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Method PMethod8853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8854, 1, slot_IO_Term_Process_returnStatus);
    
    MethodClosure MC_SMB_returnStatus = new_MethodClosure((Method)PMethod8853, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_returnStatus, MC_SMB_returnStatus);
}


static void init_SMB_canReadAndWrite() {
    Symbol SMB_canReadAndWrite = new_Symbol(L"canReadAndWrite");
    Symbol SMB_mode = new_Symbol(L"mode");
    // mode. 
    Send PSend8857 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_rw = new_Symbol(L"rw");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_rw_Const = new_Constant((Optr)SMB_rw);
    // =. 
    Send PSend8858 = new_Send((Optr)PSend8857, SMB__equals_, 1, (Optr)SMB_rw_Const);
    // mode. 
    Send PSend8861 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_r_plus_ = new_Symbol(L"r+");
    Constant SMB_r_plus__Const = new_Constant((Optr)SMB_r_plus_);
    // =. 
    Send PSend8862 = new_Send((Optr)PSend8861, SMB__equals_, 1, (Optr)SMB_r_plus__Const);
    Array PThreadedCode8860 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8861, (Optr)&t_push1, (Optr)SMB_r_plus_, (Optr)&t_send1, (Optr)PSend8862, (Optr)&t_block_return);
    Block PBlock8859 = new_Block_with(empty_Array, empty_Array, PThreadedCode8860, 1, PSend8862);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8863 = new_Send((Optr)PSend8858, SMB_or_, 1, (Optr)PBlock8859);
    Array PThreadedCode8856 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8857, (Optr)&t_push1, (Optr)SMB_rw, (Optr)&t_send1, (Optr)PSend8858, (Optr)&t_push_closure, (Optr)PBlock8859, (Optr)&t_send1, (Optr)PSend8863, (Optr)&t_method_return);
    Method PMethod8855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8856, 1, PSend8863);
    
    MethodClosure MC_SMB_canReadAndWrite = new_MethodClosure((Method)PMethod8855, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canReadAndWrite, MC_SMB_canReadAndWrite);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8866 = new_Super(SMB_initialize, 0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // mode:. 
    Send PSend8867 = new_Send((Optr)self, SMB_mode_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8865 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8866, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8867, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8864 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8865, 3, PSuper8866, PSend8867, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8864, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_command_() {
    Symbol SMB_command_ = new_Symbol(L"command:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8869 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8871 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8875 = new_String(L"Can't change the command of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8875_Const = new_Constant((Optr)string_8875);
    // error:. 
    Send PSend8876 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8875_Const);
    Array PThreadedCode8874 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8875, (Optr)&t_send1, (Optr)PSend8876, (Optr)&t_block_return);
    Block PBlock8873 = new_Block_with(empty_Array, empty_Array, PThreadedCode8874, 1, PSend8876);
    // ifTrue:. 
    Send PSend8872 = new_Send((Optr)PSend8871, SMB_ifTrue_, 1, (Optr)PBlock8873);
    Assign PAssign8877 = new_Assign((Optr)slot_IO_Term_Process_command, (Optr)VAR_aCommandString_0_0);
    Array PThreadedCode8870 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8871, (Optr)&t_send_ifTrue_, (Optr)PSend8872, (Optr)PBlock8873, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8877, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8868 = new_Method_with(PArray8869, empty_Array, empty_Array, PThreadedCode8870, 3, PSend8872, PAssign8877, self);
    
    MethodClosure MC_SMB_command_ = new_MethodClosure((Method)PMethod8868, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command_, MC_SMB_command_);
}


static void init_SMB_open() {
    Symbol SMB_open = new_Symbol(L"open");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8881 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8883 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8887 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8886 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8887, (Optr)&t_block_return);
    Block PBlock8885 = new_Block_with(empty_Array, empty_Array, PThreadedCode8886, 1, PSend8887);
    // ifTrue:. 
    Send PSend8884 = new_Send((Optr)PSend8883, SMB_ifTrue_, 1, (Optr)PBlock8885);
    Symbol SMB_command = new_Symbol(L"command");
    // command. 
    Send PSend8888 = new_Send((Optr)self, SMB_command, 0);
    String string_8891 = new_String(L"Can't open with an empty command");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8891_Const = new_Constant((Optr)string_8891);
    // error:. 
    Send PSend8892 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8891_Const);
    Array PThreadedCode8890 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8891, (Optr)&t_send1, (Optr)PSend8892, (Optr)&t_block_return);
    Block PBlock8889 = new_Block_with(empty_Array, empty_Array, PThreadedCode8890, 1, PSend8892);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8893 = new_Send((Optr)PSend8888, SMB_ifNil_, 1, (Optr)PBlock8889);
    Assign PAssign8894 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)nil_Const);
    Symbol SMB_popen = new_Symbol(L"popen");
    // popen. 
    Send PSend8895 = new_Send((Optr)self, SMB_popen, 0);
    Array PThreadedCode8882 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8883, (Optr)&t_send_ifTrue_, (Optr)PSend8884, (Optr)PBlock8885, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8888, (Optr)&t_push_closure, (Optr)PBlock8889, (Optr)&t_send1, (Optr)PSend8893, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8894, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8895, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8880 = new_Block_with(PArray8881, empty_Array, PThreadedCode8882, 5, PSend8884, PSend8893, PAssign8894, PSend8895, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8896 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8880);
    Array PThreadedCode8879 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8880, (Optr)&t_send1, (Optr)PSend8896, (Optr)&t_method_return);
    Method PMethod8878 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8879, 1, PSend8896);
    
    MethodClosure MC_SMB_open = new_MethodClosure((Method)PMethod8878, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_open, MC_SMB_open);
}


static void init_SMB_isClosed() {
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8899 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8900 = new_Send((Optr)PSend8899, SMB_not, 0);
    Array PThreadedCode8898 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8899, (Optr)&t_send0, (Optr)PSend8900, (Optr)&t_method_return);
    Method PMethod8897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8898, 1, PSend8900);
    
    MethodClosure MC_SMB_isClosed = new_MethodClosure((Method)PMethod8897, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isClosed, MC_SMB_isClosed);
}


static void init_SMB_isValidMode_() {
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    Variable VAR_aModeString_0_0 = new_Variable_named(L"aModeString", 0);
    Array PArray8902 = new_Array_with(1, (Optr)VAR_aModeString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend8904 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_r_Const);
    Symbol  SMB_w = new_Symbol(L"w");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8907 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8906 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8907, (Optr)&t_block_return);
    Block PBlock8905 = new_Block_with(empty_Array, empty_Array, PThreadedCode8906, 1, PSend8907);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8908 = new_Send((Optr)PSend8904, SMB_or_, 1, (Optr)PBlock8905);
    Array PThreadedCode8903 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8904, (Optr)&t_push_closure, (Optr)PBlock8905, (Optr)&t_send1, (Optr)PSend8908, (Optr)&t_method_return);
    Method PMethod8901 = new_Method_with(PArray8902, empty_Array, empty_Array, PThreadedCode8903, 1, PSend8908);
    
    MethodClosure MC_SMB_isValidMode_ = new_MethodClosure((Method)PMethod8901, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isValidMode_, MC_SMB_isValidMode_);
}


static void init_SMB_mode() {
    Symbol SMB_mode = new_Symbol(L"mode");
    Array PThreadedCode8910 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_method_return);
    Method PMethod8909 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8910, 1, slot_IO_Term_Process_mode);
    
    MethodClosure MC_SMB_mode = new_MethodClosure((Method)PMethod8909, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode, MC_SMB_mode);
}


static void init_class_SMB_open_withMode_() {
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Variable VAR_readMode_0_1 = new_Variable_named(L"readMode", 0);
    Array PArray8912 = new_Array_with(2, (Optr)VAR_aCommandString_0_0, (Optr)VAR_readMode_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8915 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_command_ = new_Symbol(L"command:");
    // command:. 
    Send PSend8917 = new_Send((Optr)VAR__receiver__1_0, SMB_command_, 1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    // mode:. 
    Send PSend8918 = new_Send((Optr)VAR__receiver__1_0, SMB_mode_, 1, (Optr)VAR_readMode_0_1);
    Symbol SMB_open = new_Symbol(L"open");
    // open. 
    Send PSend8919 = new_Send((Optr)VAR__receiver__1_0, SMB_open, 0);
    Array PThreadedCode8916 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_send1, (Optr)PSend8917, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_readMode_0_1, (Optr)&t_send1, (Optr)PSend8918, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8919, (Optr)&t_method_return);
    Block PBlock8914 = new_Block_with(PArray8915, empty_Array, PThreadedCode8916, 3, PSend8917, PSend8918, PSend8919);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8920 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8921 = new_Send((Optr)PBlock8914, SMB_value_, 1, (Optr)PSend8920);
    Array PThreadedCode8913 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock8914, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8920, (Optr)&t_send1, (Optr)PSend8921, (Optr)&t_method_return);
    Method PMethod8911 = new_Method_with(PArray8912, empty_Array, empty_Array, PThreadedCode8913, 1, PSend8921);
    
    MethodClosure MC_SMB_open_withMode_ = new_MethodClosure((Method)PMethod8911, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_withMode_, MC_SMB_open_withMode_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8924 = new_String(L"plugin/io/Process.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Process_Const = new_Constant((Optr)SMB_IO_minus_Process);
    Constant string_8924_Const = new_Constant((Optr)string_8924);
    // require:at:. 
    Send PSend8925 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Process_Const, (Optr)string_8924_Const);
    Array PThreadedCode8923 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Process, (Optr)&t_push1, (Optr)string_8924, (Optr)&t_send2, (Optr)PSend8925, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8922 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8923, 2, PSend8925, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8922, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8927 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // open:withMode:. 
    Send PSend8929 = new_Send((Optr)self, SMB_open_withMode_, 2, (Optr)VAR_aCommandString_0_0, (Optr)SMB_r_Const);
    Array PThreadedCode8928 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send2, (Optr)PSend8929, (Optr)&t_method_return);
    Method PMethod8926 = new_Method_with(PArray8927, empty_Array, empty_Array, PThreadedCode8928, 1, PSend8929);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PMethod8926, HEADER(IO_Term_Process_Class));
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