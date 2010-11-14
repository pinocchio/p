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
    Send PSend9046 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode9045 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9046, (Optr)&t_method_return);
    Method PMethod9044 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9045, 1, PSend9046);
    
    MethodClosure MC_SMB_canRead = new_MethodClosure((Method)PMethod9044, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canRead, MC_SMB_canRead);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9050 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    // isClosed. 
    Send PSend9052 = new_Send((Optr)self, SMB_isClosed, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9056 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode9055 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9056, (Optr)&t_block_return);
    Block PBlock9054 = new_Block_with(empty_Array, empty_Array, PThreadedCode9055, 1, PSend9056);
    // ifTrue:. 
    Send PSend9053 = new_Send((Optr)PSend9052, SMB_ifTrue_, 1, (Optr)PBlock9054);
    Symbol SMB_pclose = new_Symbol(L"pclose");
    // pclose. 
    Send PSend9058 = new_Send((Optr)self, SMB_pclose, 0);
    Assign PAssign9057 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)PSend9058);
    Assign PAssign9059 = new_Assign((Optr)slot_IO_Term_Process_in, (Optr)nil_Const);
    Assign PAssign9060 = new_Assign((Optr)slot_IO_Term_Process_out, (Optr)nil_Const);
    Array PThreadedCode9051 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9052, (Optr)&t_send_ifTrue_, (Optr)PSend9053, (Optr)PBlock9054, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9057, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9058, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9059, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9060, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Block PBlock9049 = new_Block_with(PArray9050, empty_Array, PThreadedCode9051, 5, PSend9053, PAssign9057, PAssign9059, PAssign9060, slot_IO_Term_Process_returnStatus);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9061 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9049);
    Array PThreadedCode9048 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9049, (Optr)&t_send1, (Optr)PSend9061, (Optr)&t_method_return);
    Method PMethod9047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9048, 1, PSend9061);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod9047, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_pclose() {
    Symbol SMB_pclose = new_Symbol(L"pclose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9065 = new_String(L"\n    IO_File stream  = (IO_File)${in};\n    if (!stream) {\n        stream = (IO_File)${out};\t\n    }\n    int returnValue = pclose(stream->file);\n    ^ new_SmallInt(returnValue);\n\t");
    Annotation PAnnotation9064 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_pclose, (Optr)SMB_IO_minus_Process, (Optr)string_9065);
    Array PArray9063 = new_Array_with(1, (Optr)PAnnotation9064);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9067 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9066 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9067, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9062 = new_NativeMethod_with(empty_Array, empty_Array, PArray9063, PThreadedCode9066, 2, PSend9067, self);
    
    MethodClosure MC_SMB_pclose = new_MethodClosure((Method)PNativeMethod9062, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_pclose, MC_SMB_pclose);
}


static void init_SMB_command() {
    Symbol SMB_command = new_Symbol(L"command");
    Array PThreadedCode9069 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_command, (Optr)&t_method_return);
    Method PMethod9068 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9069, 1, slot_IO_Term_Process_command);
    
    MethodClosure MC_SMB_command = new_MethodClosure((Method)PMethod9068, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command, MC_SMB_command);
}


static void init_SMB_mode_() {
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Variable VAR_readMode_0_0 = new_Variable_named(L"readMode", 0);
    Array PArray9071 = new_Array_with(1, (Optr)VAR_readMode_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9073 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9077 = new_String(L"Can't change the mode of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9077_Const = new_Constant((Optr)string_9077);
    // error:. 
    Send PSend9078 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9077_Const);
    Array PThreadedCode9076 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9077, (Optr)&t_send1, (Optr)PSend9078, (Optr)&t_block_return);
    Block PBlock9075 = new_Block_with(empty_Array, empty_Array, PThreadedCode9076, 1, PSend9078);
    // ifTrue:. 
    Send PSend9074 = new_Send((Optr)PSend9073, SMB_ifTrue_, 1, (Optr)PBlock9075);
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    // isValidMode:. 
    Send PSend9079 = new_Send((Optr)self, SMB_isValidMode_, 1, (Optr)VAR_readMode_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9083 = new_String(L"Invalid read/write mode: ");
    Constant string_9083_Const = new_Constant((Optr)string_9083);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9084 = new_Send((Optr)string_9083_Const, SMB__append_, 1, (Optr)VAR_readMode_0_0);
    // error:. 
    Send PSend9085 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend9084);
    Array PThreadedCode9082 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9083, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend9084, (Optr)&t_send1, (Optr)PSend9085, (Optr)&t_block_return);
    Block PBlock9081 = new_Block_with(empty_Array, empty_Array, PThreadedCode9082, 1, PSend9085);
    // ifFalse:. 
    Send PSend9080 = new_Send((Optr)PSend9079, SMB_ifFalse_, 1, (Optr)PBlock9081);
    Assign PAssign9086 = new_Assign((Optr)slot_IO_Term_Process_mode, (Optr)VAR_readMode_0_0);
    Array PThreadedCode9072 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9073, (Optr)&t_send_ifTrue_, (Optr)PSend9074, (Optr)PBlock9075, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend9079, (Optr)&t_send_ifFalse_, (Optr)PSend9080, (Optr)PBlock9081, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9086, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9070 = new_Method_with(PArray9071, empty_Array, empty_Array, PThreadedCode9072, 4, PSend9074, PSend9080, PAssign9086, self);
    
    MethodClosure MC_SMB_mode_ = new_MethodClosure((Method)PMethod9070, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode_, MC_SMB_mode_);
}


static void init_SMB_in() {
    Symbol SMB_in = new_Symbol(L"in");
    Array PThreadedCode9088 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_in, (Optr)&t_method_return);
    Method PMethod9087 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9088, 1, slot_IO_Term_Process_in);
    
    MethodClosure MC_SMB_in = new_MethodClosure((Method)PMethod9087, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_in, MC_SMB_in);
}


static void init_SMB_canWrite() {
    Symbol SMB_canWrite = new_Symbol(L"canWrite");
    Symbol  SMB_w = new_Symbol(L"w");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend9091 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode9090 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend9091, (Optr)&t_method_return);
    Method PMethod9089 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9090, 1, PSend9091);
    
    MethodClosure MC_SMB_canWrite = new_MethodClosure((Method)PMethod9089, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canWrite, MC_SMB_canWrite);
}


static void init_SMB_isOpened() {
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    Symbol SMB_in = new_Symbol(L"in");
    // in. 
    Send PSend9094 = new_Send((Optr)self, SMB_in, 0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend9095 = new_Send((Optr)PSend9094, SMB_isNil, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9096 = new_Send((Optr)PSend9095, SMB_not, 0);
    Symbol SMB_out = new_Symbol(L"out");
    // out. 
    Send PSend9099 = new_Send((Optr)self, SMB_out, 0);
    // isNil. 
    Send PSend9100 = new_Send((Optr)PSend9099, SMB_isNil, 0);
    // not. 
    Send PSend9101 = new_Send((Optr)PSend9100, SMB_not, 0);
    Array PThreadedCode9098 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9099, (Optr)&t_send0, (Optr)PSend9100, (Optr)&t_send0, (Optr)PSend9101, (Optr)&t_block_return);
    Block PBlock9097 = new_Block_with(empty_Array, empty_Array, PThreadedCode9098, 1, PSend9101);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9102 = new_Send((Optr)PSend9096, SMB_or_, 1, (Optr)PBlock9097);
    Array PThreadedCode9093 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9094, (Optr)&t_send0, (Optr)PSend9095, (Optr)&t_send0, (Optr)PSend9096, (Optr)&t_push_closure, (Optr)PBlock9097, (Optr)&t_send1, (Optr)PSend9102, (Optr)&t_method_return);
    Method PMethod9092 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9093, 1, PSend9102);
    
    MethodClosure MC_SMB_isOpened = new_MethodClosure((Method)PMethod9092, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isOpened, MC_SMB_isOpened);
}


static void init_SMB_out() {
    Symbol SMB_out = new_Symbol(L"out");
    Array PThreadedCode9104 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_out, (Optr)&t_method_return);
    Method PMethod9103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9104, 1, slot_IO_Term_Process_out);
    
    MethodClosure MC_SMB_out = new_MethodClosure((Method)PMethod9103, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_out, MC_SMB_out);
}


static void init_SMB_popen() {
    Symbol SMB_popen = new_Symbol(L"popen");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9108 = new_String(L"\n    char * command      = unicode_to_ascii(((String)${command})->value);\n    char * mode         = unicode_to_ascii(((Symbol)${mode})->value);\n    FILE * stream       = popen(command, mode);\n    assert(stream, fwprintf(stderr,\n            \t\t\t\tL\"%s (program: '%s', mode: '%s')\\n\",\n            \t\t\t\tstrerror(errno), command, mode););\n    ${out}  = (Optr)new_IO_ReadFile_from(stream);\n    ${in}   = (Optr)new_IO_WriteFile_from(stream);\n    ^self;\n\t");
    Annotation PAnnotation9107 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_popen, (Optr)SMB_IO_minus_Process, (Optr)string_9108);
    Array PArray9106 = new_Array_with(1, (Optr)PAnnotation9107);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9110 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9109 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9110, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9105 = new_NativeMethod_with(empty_Array, empty_Array, PArray9106, PThreadedCode9109, 2, PSend9110, self);
    
    MethodClosure MC_SMB_popen = new_MethodClosure((Method)PNativeMethod9105, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_popen, MC_SMB_popen);
}


static void init_SMB_returnStatus() {
    Symbol SMB_returnStatus = new_Symbol(L"returnStatus");
    Array PThreadedCode9112 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Method PMethod9111 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9112, 1, slot_IO_Term_Process_returnStatus);
    
    MethodClosure MC_SMB_returnStatus = new_MethodClosure((Method)PMethod9111, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_returnStatus, MC_SMB_returnStatus);
}


static void init_SMB_canReadAndWrite() {
    Symbol SMB_canReadAndWrite = new_Symbol(L"canReadAndWrite");
    Symbol SMB_mode = new_Symbol(L"mode");
    // mode. 
    Send PSend9115 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_rw = new_Symbol(L"rw");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_rw_Const = new_Constant((Optr)SMB_rw);
    // =. 
    Send PSend9116 = new_Send((Optr)PSend9115, SMB__equals_, 1, (Optr)SMB_rw_Const);
    // mode. 
    Send PSend9119 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_r_plus_ = new_Symbol(L"r+");
    Constant SMB_r_plus__Const = new_Constant((Optr)SMB_r_plus_);
    // =. 
    Send PSend9120 = new_Send((Optr)PSend9119, SMB__equals_, 1, (Optr)SMB_r_plus__Const);
    Array PThreadedCode9118 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9119, (Optr)&t_push1, (Optr)SMB_r_plus_, (Optr)&t_send1, (Optr)PSend9120, (Optr)&t_block_return);
    Block PBlock9117 = new_Block_with(empty_Array, empty_Array, PThreadedCode9118, 1, PSend9120);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9121 = new_Send((Optr)PSend9116, SMB_or_, 1, (Optr)PBlock9117);
    Array PThreadedCode9114 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9115, (Optr)&t_push1, (Optr)SMB_rw, (Optr)&t_send1, (Optr)PSend9116, (Optr)&t_push_closure, (Optr)PBlock9117, (Optr)&t_send1, (Optr)PSend9121, (Optr)&t_method_return);
    Method PMethod9113 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9114, 1, PSend9121);
    
    MethodClosure MC_SMB_canReadAndWrite = new_MethodClosure((Method)PMethod9113, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canReadAndWrite, MC_SMB_canReadAndWrite);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper9124 = new_Super(SMB_initialize, 0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // mode:. 
    Send PSend9125 = new_Send((Optr)self, SMB_mode_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode9123 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9124, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9125, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9122 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9123, 3, PSuper9124, PSend9125, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9122, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_command_() {
    Symbol SMB_command_ = new_Symbol(L"command:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray9127 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9129 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9133 = new_String(L"Can't change the command of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9133_Const = new_Constant((Optr)string_9133);
    // error:. 
    Send PSend9134 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9133_Const);
    Array PThreadedCode9132 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9133, (Optr)&t_send1, (Optr)PSend9134, (Optr)&t_block_return);
    Block PBlock9131 = new_Block_with(empty_Array, empty_Array, PThreadedCode9132, 1, PSend9134);
    // ifTrue:. 
    Send PSend9130 = new_Send((Optr)PSend9129, SMB_ifTrue_, 1, (Optr)PBlock9131);
    Assign PAssign9135 = new_Assign((Optr)slot_IO_Term_Process_command, (Optr)VAR_aCommandString_0_0);
    Array PThreadedCode9128 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9129, (Optr)&t_send_ifTrue_, (Optr)PSend9130, (Optr)PBlock9131, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9135, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9126 = new_Method_with(PArray9127, empty_Array, empty_Array, PThreadedCode9128, 3, PSend9130, PAssign9135, self);
    
    MethodClosure MC_SMB_command_ = new_MethodClosure((Method)PMethod9126, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command_, MC_SMB_command_);
}


static void init_SMB_open() {
    Symbol SMB_open = new_Symbol(L"open");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9139 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9141 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9145 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode9144 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9145, (Optr)&t_block_return);
    Block PBlock9143 = new_Block_with(empty_Array, empty_Array, PThreadedCode9144, 1, PSend9145);
    // ifTrue:. 
    Send PSend9142 = new_Send((Optr)PSend9141, SMB_ifTrue_, 1, (Optr)PBlock9143);
    Symbol SMB_command = new_Symbol(L"command");
    // command. 
    Send PSend9146 = new_Send((Optr)self, SMB_command, 0);
    String string_9149 = new_String(L"Can't open with an empty command");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9149_Const = new_Constant((Optr)string_9149);
    // error:. 
    Send PSend9150 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9149_Const);
    Array PThreadedCode9148 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9149, (Optr)&t_send1, (Optr)PSend9150, (Optr)&t_block_return);
    Block PBlock9147 = new_Block_with(empty_Array, empty_Array, PThreadedCode9148, 1, PSend9150);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9151 = new_Send((Optr)PSend9146, SMB_ifNil_, 1, (Optr)PBlock9147);
    Assign PAssign9152 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)nil_Const);
    Symbol SMB_popen = new_Symbol(L"popen");
    // popen. 
    Send PSend9153 = new_Send((Optr)self, SMB_popen, 0);
    Array PThreadedCode9140 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9141, (Optr)&t_send_ifTrue_, (Optr)PSend9142, (Optr)PBlock9143, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9146, (Optr)&t_push_closure, (Optr)PBlock9147, (Optr)&t_send1, (Optr)PSend9151, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9152, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9153, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9138 = new_Block_with(PArray9139, empty_Array, PThreadedCode9140, 5, PSend9142, PSend9151, PAssign9152, PSend9153, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9154 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9138);
    Array PThreadedCode9137 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9138, (Optr)&t_send1, (Optr)PSend9154, (Optr)&t_method_return);
    Method PMethod9136 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9137, 1, PSend9154);
    
    MethodClosure MC_SMB_open = new_MethodClosure((Method)PMethod9136, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_open, MC_SMB_open);
}


static void init_SMB_isClosed() {
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9157 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9158 = new_Send((Optr)PSend9157, SMB_not, 0);
    Array PThreadedCode9156 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9157, (Optr)&t_send0, (Optr)PSend9158, (Optr)&t_method_return);
    Method PMethod9155 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9156, 1, PSend9158);
    
    MethodClosure MC_SMB_isClosed = new_MethodClosure((Method)PMethod9155, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isClosed, MC_SMB_isClosed);
}


static void init_SMB_isValidMode_() {
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    Variable VAR_aModeString_0_0 = new_Variable_named(L"aModeString", 0);
    Array PArray9160 = new_Array_with(1, (Optr)VAR_aModeString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend9162 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_r_Const);
    Symbol  SMB_w = new_Symbol(L"w");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend9165 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode9164 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend9165, (Optr)&t_block_return);
    Block PBlock9163 = new_Block_with(empty_Array, empty_Array, PThreadedCode9164, 1, PSend9165);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9166 = new_Send((Optr)PSend9162, SMB_or_, 1, (Optr)PBlock9163);
    Array PThreadedCode9161 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9162, (Optr)&t_push_closure, (Optr)PBlock9163, (Optr)&t_send1, (Optr)PSend9166, (Optr)&t_method_return);
    Method PMethod9159 = new_Method_with(PArray9160, empty_Array, empty_Array, PThreadedCode9161, 1, PSend9166);
    
    MethodClosure MC_SMB_isValidMode_ = new_MethodClosure((Method)PMethod9159, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isValidMode_, MC_SMB_isValidMode_);
}


static void init_SMB_mode() {
    Symbol SMB_mode = new_Symbol(L"mode");
    Array PThreadedCode9168 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_method_return);
    Method PMethod9167 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9168, 1, slot_IO_Term_Process_mode);
    
    MethodClosure MC_SMB_mode = new_MethodClosure((Method)PMethod9167, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode, MC_SMB_mode);
}


static void init_class_SMB_open_withMode_() {
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Variable VAR_readMode_0_1 = new_Variable_named(L"readMode", 0);
    Array PArray9170 = new_Array_with(2, (Optr)VAR_aCommandString_0_0, (Optr)VAR_readMode_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray9173 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_command_ = new_Symbol(L"command:");
    // command:. 
    Send PSend9175 = new_Send((Optr)VAR__receiver__1_0, SMB_command_, 1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    // mode:. 
    Send PSend9176 = new_Send((Optr)VAR__receiver__1_0, SMB_mode_, 1, (Optr)VAR_readMode_0_1);
    Symbol SMB_open = new_Symbol(L"open");
    // open. 
    Send PSend9177 = new_Send((Optr)VAR__receiver__1_0, SMB_open, 0);
    Array PThreadedCode9174 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_send1, (Optr)PSend9175, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_readMode_0_1, (Optr)&t_send1, (Optr)PSend9176, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9177, (Optr)&t_method_return);
    Block PBlock9172 = new_Block_with(PArray9173, empty_Array, PThreadedCode9174, 3, PSend9175, PSend9176, PSend9177);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9178 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9179 = new_Send((Optr)PBlock9172, SMB_value_, 1, (Optr)PSend9178);
    Array PThreadedCode9171 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock9172, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9178, (Optr)&t_send1, (Optr)PSend9179, (Optr)&t_method_return);
    Method PMethod9169 = new_Method_with(PArray9170, empty_Array, empty_Array, PThreadedCode9171, 1, PSend9179);
    
    MethodClosure MC_SMB_open_withMode_ = new_MethodClosure((Method)PMethod9169, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_withMode_, MC_SMB_open_withMode_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9182 = new_String(L"plugin/io/Process.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Process_Const = new_Constant((Optr)SMB_IO_minus_Process);
    Constant string_9182_Const = new_Constant((Optr)string_9182);
    // require:at:. 
    Send PSend9183 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Process_Const, (Optr)string_9182_Const);
    Array PThreadedCode9181 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Process, (Optr)&t_push1, (Optr)string_9182, (Optr)&t_send2, (Optr)PSend9183, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9180 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9181, 2, PSend9183, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9180, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray9185 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // open:withMode:. 
    Send PSend9187 = new_Send((Optr)self, SMB_open_withMode_, 2, (Optr)VAR_aCommandString_0_0, (Optr)SMB_r_Const);
    Array PThreadedCode9186 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send2, (Optr)PSend9187, (Optr)&t_method_return);
    Method PMethod9184 = new_Method_with(PArray9185, empty_Array, empty_Array, PThreadedCode9186, 1, PSend9187);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PMethod9184, HEADER(IO_Term_Process_Class));
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