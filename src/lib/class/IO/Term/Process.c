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
    Send PSend8773 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8772 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8773, (Optr)&t_method_return);
    Method PMethod8771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8772, 1, PSend8773);
    
    MethodClosure MC_SMB_canRead = new_MethodClosure((Method)PMethod8771, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canRead, MC_SMB_canRead);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8777 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    // isClosed. 
    Send PSend8779 = new_Send((Optr)self, SMB_isClosed, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8783 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8782 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8783, (Optr)&t_block_return);
    Block PBlock8781 = new_Block_with(empty_Array, empty_Array, PThreadedCode8782, 1, PSend8783);
    // ifTrue:. 
    Send PSend8780 = new_Send((Optr)PSend8779, SMB_ifTrue_, 1, (Optr)PBlock8781);
    Symbol SMB_pclose = new_Symbol(L"pclose");
    // pclose. 
    Send PSend8785 = new_Send((Optr)self, SMB_pclose, 0);
    Assign PAssign8784 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)PSend8785);
    Assign PAssign8786 = new_Assign((Optr)slot_IO_Term_Process_in, (Optr)nil_Const);
    Assign PAssign8787 = new_Assign((Optr)slot_IO_Term_Process_out, (Optr)nil_Const);
    Array PThreadedCode8778 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8779, (Optr)&t_send_ifTrue_, (Optr)PSend8780, (Optr)PBlock8781, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8784, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8785, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8786, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8787, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Block PBlock8776 = new_Block_with(PArray8777, empty_Array, PThreadedCode8778, 5, PSend8780, PAssign8784, PAssign8786, PAssign8787, slot_IO_Term_Process_returnStatus);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8788 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8776);
    Array PThreadedCode8775 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8776, (Optr)&t_send1, (Optr)PSend8788, (Optr)&t_method_return);
    Method PMethod8774 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8775, 1, PSend8788);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod8774, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_pclose() {
    Symbol SMB_pclose = new_Symbol(L"pclose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8792 = new_String(L"\n    IO_File stream  = (IO_File)${in};\n    if (!stream) {\n        stream = (IO_File)${out};\t\n    }\n    int returnValue = pclose(stream->file);\n    ^ new_SmallInt(returnValue);\n\t");
    Annotation PAnnotation8791 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_pclose, (Optr)SMB_IO_minus_Process, (Optr)string_8792);
    Array PArray8790 = new_Array_with(1, (Optr)PAnnotation8791);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8794 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8793 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8794, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8789 = new_NativeMethod_with(empty_Array, empty_Array, PArray8790, PThreadedCode8793, 2, PSend8794, self);
    
    MethodClosure MC_SMB_pclose = new_MethodClosure((Method)PNativeMethod8789, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_pclose, MC_SMB_pclose);
}


static void init_SMB_command() {
    Symbol SMB_command = new_Symbol(L"command");
    Array PThreadedCode8796 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_command, (Optr)&t_method_return);
    Method PMethod8795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8796, 1, slot_IO_Term_Process_command);
    
    MethodClosure MC_SMB_command = new_MethodClosure((Method)PMethod8795, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command, MC_SMB_command);
}


static void init_SMB_mode_() {
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Variable VAR_readMode_0_0 = new_Variable_named(L"readMode", 0);
    Array PArray8798 = new_Array_with(1, (Optr)VAR_readMode_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8800 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8804 = new_String(L"Can't change the mode of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8804_Const = new_Constant((Optr)string_8804);
    // error:. 
    Send PSend8805 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8804_Const);
    Array PThreadedCode8803 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8804, (Optr)&t_send1, (Optr)PSend8805, (Optr)&t_block_return);
    Block PBlock8802 = new_Block_with(empty_Array, empty_Array, PThreadedCode8803, 1, PSend8805);
    // ifTrue:. 
    Send PSend8801 = new_Send((Optr)PSend8800, SMB_ifTrue_, 1, (Optr)PBlock8802);
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    // isValidMode:. 
    Send PSend8806 = new_Send((Optr)self, SMB_isValidMode_, 1, (Optr)VAR_readMode_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_8810 = new_String(L"Invalid read/write mode: ");
    Constant string_8810_Const = new_Constant((Optr)string_8810);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend8811 = new_Send((Optr)string_8810_Const, SMB__append_, 1, (Optr)VAR_readMode_0_0);
    // error:. 
    Send PSend8812 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend8811);
    Array PThreadedCode8809 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8810, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8811, (Optr)&t_send1, (Optr)PSend8812, (Optr)&t_block_return);
    Block PBlock8808 = new_Block_with(empty_Array, empty_Array, PThreadedCode8809, 1, PSend8812);
    // ifFalse:. 
    Send PSend8807 = new_Send((Optr)PSend8806, SMB_ifFalse_, 1, (Optr)PBlock8808);
    Assign PAssign8813 = new_Assign((Optr)slot_IO_Term_Process_mode, (Optr)VAR_readMode_0_0);
    Array PThreadedCode8799 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8800, (Optr)&t_send_ifTrue_, (Optr)PSend8801, (Optr)PBlock8802, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend8806, (Optr)&t_send_ifFalse_, (Optr)PSend8807, (Optr)PBlock8808, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8813, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8797 = new_Method_with(PArray8798, empty_Array, empty_Array, PThreadedCode8799, 4, PSend8801, PSend8807, PAssign8813, self);
    
    MethodClosure MC_SMB_mode_ = new_MethodClosure((Method)PMethod8797, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode_, MC_SMB_mode_);
}


static void init_SMB_in() {
    Symbol SMB_in = new_Symbol(L"in");
    Array PThreadedCode8815 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_in, (Optr)&t_method_return);
    Method PMethod8814 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8815, 1, slot_IO_Term_Process_in);
    
    MethodClosure MC_SMB_in = new_MethodClosure((Method)PMethod8814, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_in, MC_SMB_in);
}


static void init_SMB_canWrite() {
    Symbol SMB_canWrite = new_Symbol(L"canWrite");
    Symbol  SMB_w = new_Symbol(L"w");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8818 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8817 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8818, (Optr)&t_method_return);
    Method PMethod8816 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8817, 1, PSend8818);
    
    MethodClosure MC_SMB_canWrite = new_MethodClosure((Method)PMethod8816, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canWrite, MC_SMB_canWrite);
}


static void init_SMB_isOpened() {
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    Symbol SMB_in = new_Symbol(L"in");
    // in. 
    Send PSend8821 = new_Send((Optr)self, SMB_in, 0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend8822 = new_Send((Optr)PSend8821, SMB_isNil, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8823 = new_Send((Optr)PSend8822, SMB_not, 0);
    Symbol SMB_out = new_Symbol(L"out");
    // out. 
    Send PSend8826 = new_Send((Optr)self, SMB_out, 0);
    // isNil. 
    Send PSend8827 = new_Send((Optr)PSend8826, SMB_isNil, 0);
    // not. 
    Send PSend8828 = new_Send((Optr)PSend8827, SMB_not, 0);
    Array PThreadedCode8825 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8826, (Optr)&t_send0, (Optr)PSend8827, (Optr)&t_send0, (Optr)PSend8828, (Optr)&t_block_return);
    Block PBlock8824 = new_Block_with(empty_Array, empty_Array, PThreadedCode8825, 1, PSend8828);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8829 = new_Send((Optr)PSend8823, SMB_or_, 1, (Optr)PBlock8824);
    Array PThreadedCode8820 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8821, (Optr)&t_send0, (Optr)PSend8822, (Optr)&t_send0, (Optr)PSend8823, (Optr)&t_push_closure, (Optr)PBlock8824, (Optr)&t_send1, (Optr)PSend8829, (Optr)&t_method_return);
    Method PMethod8819 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8820, 1, PSend8829);
    
    MethodClosure MC_SMB_isOpened = new_MethodClosure((Method)PMethod8819, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isOpened, MC_SMB_isOpened);
}


static void init_SMB_out() {
    Symbol SMB_out = new_Symbol(L"out");
    Array PThreadedCode8831 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_out, (Optr)&t_method_return);
    Method PMethod8830 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8831, 1, slot_IO_Term_Process_out);
    
    MethodClosure MC_SMB_out = new_MethodClosure((Method)PMethod8830, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_out, MC_SMB_out);
}


static void init_SMB_popen() {
    Symbol SMB_popen = new_Symbol(L"popen");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8835 = new_String(L"\n    char * command      = unicode_to_ascii(((String)${command})->value);\n    char * mode         = unicode_to_ascii(((Symbol)${mode})->value);\n    FILE * stream       = popen(command, mode);\n    assert(stream, fwprintf(stderr,\n            \t\t\t\tL\"%s (program: '%s', mode: '%s')\\n\",\n            \t\t\t\tstrerror(errno), command, mode););\n    ${out}  = (Optr)new_IO_ReadFile_from(stream);\n    ${in}   = (Optr)new_IO_WriteFile_from(stream);\n    ^self;\n\t");
    Annotation PAnnotation8834 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_popen, (Optr)SMB_IO_minus_Process, (Optr)string_8835);
    Array PArray8833 = new_Array_with(1, (Optr)PAnnotation8834);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend8837 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode8836 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8837, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod8832 = new_NativeMethod_with(empty_Array, empty_Array, PArray8833, PThreadedCode8836, 2, PSend8837, self);
    
    MethodClosure MC_SMB_popen = new_MethodClosure((Method)PNativeMethod8832, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_popen, MC_SMB_popen);
}


static void init_SMB_returnStatus() {
    Symbol SMB_returnStatus = new_Symbol(L"returnStatus");
    Array PThreadedCode8839 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Method PMethod8838 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8839, 1, slot_IO_Term_Process_returnStatus);
    
    MethodClosure MC_SMB_returnStatus = new_MethodClosure((Method)PMethod8838, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_returnStatus, MC_SMB_returnStatus);
}


static void init_SMB_canReadAndWrite() {
    Symbol SMB_canReadAndWrite = new_Symbol(L"canReadAndWrite");
    Symbol SMB_mode = new_Symbol(L"mode");
    // mode. 
    Send PSend8842 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_rw = new_Symbol(L"rw");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_rw_Const = new_Constant((Optr)SMB_rw);
    // =. 
    Send PSend8843 = new_Send((Optr)PSend8842, SMB__equals_, 1, (Optr)SMB_rw_Const);
    // mode. 
    Send PSend8846 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_r_plus_ = new_Symbol(L"r+");
    Constant SMB_r_plus__Const = new_Constant((Optr)SMB_r_plus_);
    // =. 
    Send PSend8847 = new_Send((Optr)PSend8846, SMB__equals_, 1, (Optr)SMB_r_plus__Const);
    Array PThreadedCode8845 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8846, (Optr)&t_push1, (Optr)SMB_r_plus_, (Optr)&t_send1, (Optr)PSend8847, (Optr)&t_block_return);
    Block PBlock8844 = new_Block_with(empty_Array, empty_Array, PThreadedCode8845, 1, PSend8847);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8848 = new_Send((Optr)PSend8843, SMB_or_, 1, (Optr)PBlock8844);
    Array PThreadedCode8841 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8842, (Optr)&t_push1, (Optr)SMB_rw, (Optr)&t_send1, (Optr)PSend8843, (Optr)&t_push_closure, (Optr)PBlock8844, (Optr)&t_send1, (Optr)PSend8848, (Optr)&t_method_return);
    Method PMethod8840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8841, 1, PSend8848);
    
    MethodClosure MC_SMB_canReadAndWrite = new_MethodClosure((Method)PMethod8840, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canReadAndWrite, MC_SMB_canReadAndWrite);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8851 = new_Super(SMB_initialize, 0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // mode:. 
    Send PSend8852 = new_Send((Optr)self, SMB_mode_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode8850 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8851, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8852, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8849 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8850, 3, PSuper8851, PSend8852, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8849, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_command_() {
    Symbol SMB_command_ = new_Symbol(L"command:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8854 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8856 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8860 = new_String(L"Can't change the command of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8860_Const = new_Constant((Optr)string_8860);
    // error:. 
    Send PSend8861 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8860_Const);
    Array PThreadedCode8859 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8860, (Optr)&t_send1, (Optr)PSend8861, (Optr)&t_block_return);
    Block PBlock8858 = new_Block_with(empty_Array, empty_Array, PThreadedCode8859, 1, PSend8861);
    // ifTrue:. 
    Send PSend8857 = new_Send((Optr)PSend8856, SMB_ifTrue_, 1, (Optr)PBlock8858);
    Assign PAssign8862 = new_Assign((Optr)slot_IO_Term_Process_command, (Optr)VAR_aCommandString_0_0);
    Array PThreadedCode8855 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8856, (Optr)&t_send_ifTrue_, (Optr)PSend8857, (Optr)PBlock8858, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8862, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8853 = new_Method_with(PArray8854, empty_Array, empty_Array, PThreadedCode8855, 3, PSend8857, PAssign8862, self);
    
    MethodClosure MC_SMB_command_ = new_MethodClosure((Method)PMethod8853, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command_, MC_SMB_command_);
}


static void init_SMB_open() {
    Symbol SMB_open = new_Symbol(L"open");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8866 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8868 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8872 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8871 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8872, (Optr)&t_block_return);
    Block PBlock8870 = new_Block_with(empty_Array, empty_Array, PThreadedCode8871, 1, PSend8872);
    // ifTrue:. 
    Send PSend8869 = new_Send((Optr)PSend8868, SMB_ifTrue_, 1, (Optr)PBlock8870);
    Symbol SMB_command = new_Symbol(L"command");
    // command. 
    Send PSend8873 = new_Send((Optr)self, SMB_command, 0);
    String string_8876 = new_String(L"Can't open with an empty command");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_8876_Const = new_Constant((Optr)string_8876);
    // error:. 
    Send PSend8877 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_8876_Const);
    Array PThreadedCode8875 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_8876, (Optr)&t_send1, (Optr)PSend8877, (Optr)&t_block_return);
    Block PBlock8874 = new_Block_with(empty_Array, empty_Array, PThreadedCode8875, 1, PSend8877);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8878 = new_Send((Optr)PSend8873, SMB_ifNil_, 1, (Optr)PBlock8874);
    Assign PAssign8879 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)nil_Const);
    Symbol SMB_popen = new_Symbol(L"popen");
    // popen. 
    Send PSend8880 = new_Send((Optr)self, SMB_popen, 0);
    Array PThreadedCode8867 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8868, (Optr)&t_send_ifTrue_, (Optr)PSend8869, (Optr)PBlock8870, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8873, (Optr)&t_push_closure, (Optr)PBlock8874, (Optr)&t_send1, (Optr)PSend8878, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8879, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8880, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8865 = new_Block_with(PArray8866, empty_Array, PThreadedCode8867, 5, PSend8869, PSend8878, PAssign8879, PSend8880, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8881 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8865);
    Array PThreadedCode8864 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8865, (Optr)&t_send1, (Optr)PSend8881, (Optr)&t_method_return);
    Method PMethod8863 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8864, 1, PSend8881);
    
    MethodClosure MC_SMB_open = new_MethodClosure((Method)PMethod8863, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_open, MC_SMB_open);
}


static void init_SMB_isClosed() {
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend8884 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend8885 = new_Send((Optr)PSend8884, SMB_not, 0);
    Array PThreadedCode8883 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8884, (Optr)&t_send0, (Optr)PSend8885, (Optr)&t_method_return);
    Method PMethod8882 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8883, 1, PSend8885);
    
    MethodClosure MC_SMB_isClosed = new_MethodClosure((Method)PMethod8882, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isClosed, MC_SMB_isClosed);
}


static void init_SMB_isValidMode_() {
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    Variable VAR_aModeString_0_0 = new_Variable_named(L"aModeString", 0);
    Array PArray8887 = new_Array_with(1, (Optr)VAR_aModeString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend8889 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_r_Const);
    Symbol  SMB_w = new_Symbol(L"w");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend8892 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode8891 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend8892, (Optr)&t_block_return);
    Block PBlock8890 = new_Block_with(empty_Array, empty_Array, PThreadedCode8891, 1, PSend8892);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend8893 = new_Send((Optr)PSend8889, SMB_or_, 1, (Optr)PBlock8890);
    Array PThreadedCode8888 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend8889, (Optr)&t_push_closure, (Optr)PBlock8890, (Optr)&t_send1, (Optr)PSend8893, (Optr)&t_method_return);
    Method PMethod8886 = new_Method_with(PArray8887, empty_Array, empty_Array, PThreadedCode8888, 1, PSend8893);
    
    MethodClosure MC_SMB_isValidMode_ = new_MethodClosure((Method)PMethod8886, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isValidMode_, MC_SMB_isValidMode_);
}


static void init_SMB_mode() {
    Symbol SMB_mode = new_Symbol(L"mode");
    Array PThreadedCode8895 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_method_return);
    Method PMethod8894 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8895, 1, slot_IO_Term_Process_mode);
    
    MethodClosure MC_SMB_mode = new_MethodClosure((Method)PMethod8894, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode, MC_SMB_mode);
}


static void init_class_SMB_open_withMode_() {
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Variable VAR_readMode_0_1 = new_Variable_named(L"readMode", 0);
    Array PArray8897 = new_Array_with(2, (Optr)VAR_aCommandString_0_0, (Optr)VAR_readMode_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8900 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_command_ = new_Symbol(L"command:");
    // command:. 
    Send PSend8902 = new_Send((Optr)VAR__receiver__1_0, SMB_command_, 1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    // mode:. 
    Send PSend8903 = new_Send((Optr)VAR__receiver__1_0, SMB_mode_, 1, (Optr)VAR_readMode_0_1);
    Symbol SMB_open = new_Symbol(L"open");
    // open. 
    Send PSend8904 = new_Send((Optr)VAR__receiver__1_0, SMB_open, 0);
    Array PThreadedCode8901 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_send1, (Optr)PSend8902, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_readMode_0_1, (Optr)&t_send1, (Optr)PSend8903, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8904, (Optr)&t_method_return);
    Block PBlock8899 = new_Block_with(PArray8900, empty_Array, PThreadedCode8901, 3, PSend8902, PSend8903, PSend8904);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8905 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8906 = new_Send((Optr)PBlock8899, SMB_value_, 1, (Optr)PSend8905);
    Array PThreadedCode8898 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock8899, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8905, (Optr)&t_send1, (Optr)PSend8906, (Optr)&t_method_return);
    Method PMethod8896 = new_Method_with(PArray8897, empty_Array, empty_Array, PThreadedCode8898, 1, PSend8906);
    
    MethodClosure MC_SMB_open_withMode_ = new_MethodClosure((Method)PMethod8896, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_withMode_, MC_SMB_open_withMode_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_8909 = new_String(L"plugin/io/Process.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Process_Const = new_Constant((Optr)SMB_IO_minus_Process);
    Constant string_8909_Const = new_Constant((Optr)string_8909);
    // require:at:. 
    Send PSend8910 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Process_Const, (Optr)string_8909_Const);
    Array PThreadedCode8908 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Process, (Optr)&t_push1, (Optr)string_8909, (Optr)&t_send2, (Optr)PSend8910, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8907 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8908, 2, PSend8910, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8907, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray8912 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // open:withMode:. 
    Send PSend8914 = new_Send((Optr)self, SMB_open_withMode_, 2, (Optr)VAR_aCommandString_0_0, (Optr)SMB_r_Const);
    Array PThreadedCode8913 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send2, (Optr)PSend8914, (Optr)&t_method_return);
    Method PMethod8911 = new_Method_with(PArray8912, empty_Array, empty_Array, PThreadedCode8913, 1, PSend8914);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PMethod8911, HEADER(IO_Term_Process_Class));
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