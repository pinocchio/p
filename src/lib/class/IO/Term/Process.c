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
    Send PSend9078 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode9077 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9078, (Optr)&t_method_return);
    Method PMethod9076 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9077, 1, PSend9078);
    
    MethodClosure MC_SMB_canRead = new_MethodClosure((Method)PMethod9076, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canRead, MC_SMB_canRead);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9082 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    // isClosed. 
    Send PSend9084 = new_Send((Optr)self, SMB_isClosed, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9088 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode9087 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9088, (Optr)&t_block_return);
    Block PBlock9086 = new_Block_with(empty_Array, empty_Array, PThreadedCode9087, 1, PSend9088);
    // ifTrue:. 
    Send PSend9085 = new_Send((Optr)PSend9084, SMB_ifTrue_, 1, (Optr)PBlock9086);
    Symbol SMB_pclose = new_Symbol(L"pclose");
    // pclose. 
    Send PSend9090 = new_Send((Optr)self, SMB_pclose, 0);
    Assign PAssign9089 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)PSend9090);
    Assign PAssign9091 = new_Assign((Optr)slot_IO_Term_Process_in, (Optr)nil_Const);
    Assign PAssign9092 = new_Assign((Optr)slot_IO_Term_Process_out, (Optr)nil_Const);
    Array PThreadedCode9083 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9084, (Optr)&t_send_ifTrue_, (Optr)PSend9085, (Optr)PBlock9086, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9089, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9090, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9091, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9092, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Block PBlock9081 = new_Block_with(PArray9082, empty_Array, PThreadedCode9083, 5, PSend9085, PAssign9089, PAssign9091, PAssign9092, slot_IO_Term_Process_returnStatus);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9093 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9081);
    Array PThreadedCode9080 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9081, (Optr)&t_send1, (Optr)PSend9093, (Optr)&t_method_return);
    Method PMethod9079 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9080, 1, PSend9093);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod9079, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_pclose() {
    Symbol SMB_pclose = new_Symbol(L"pclose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9097 = new_String(L"\n    IO_File stream  = (IO_File)${in};\n    if (!stream) {\n        stream = (IO_File)${out};\t\n    }\n    int returnValue = pclose(stream->file);\n    ^ new_SmallInt(returnValue);\n\t");
    Annotation PAnnotation9096 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_pclose, (Optr)SMB_IO_minus_Process, (Optr)string_9097);
    Array PArray9095 = new_Array_with(1, (Optr)PAnnotation9096);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9099 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9098 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9099, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9094 = new_NativeMethod_with(empty_Array, empty_Array, PArray9095, PThreadedCode9098, 2, PSend9099, self);
    
    MethodClosure MC_SMB_pclose = new_MethodClosure((Method)PNativeMethod9094, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_pclose, MC_SMB_pclose);
}


static void init_SMB_command() {
    Symbol SMB_command = new_Symbol(L"command");
    Array PThreadedCode9101 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_command, (Optr)&t_method_return);
    Method PMethod9100 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9101, 1, slot_IO_Term_Process_command);
    
    MethodClosure MC_SMB_command = new_MethodClosure((Method)PMethod9100, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command, MC_SMB_command);
}


static void init_SMB_mode_() {
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Variable VAR_readMode_0_0 = new_Variable_named(L"readMode", 0);
    Array PArray9103 = new_Array_with(1, (Optr)VAR_readMode_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9105 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9109 = new_String(L"Can't change the mode of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9109_Const = new_Constant((Optr)string_9109);
    // error:. 
    Send PSend9110 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9109_Const);
    Array PThreadedCode9108 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9109, (Optr)&t_send1, (Optr)PSend9110, (Optr)&t_block_return);
    Block PBlock9107 = new_Block_with(empty_Array, empty_Array, PThreadedCode9108, 1, PSend9110);
    // ifTrue:. 
    Send PSend9106 = new_Send((Optr)PSend9105, SMB_ifTrue_, 1, (Optr)PBlock9107);
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    // isValidMode:. 
    Send PSend9111 = new_Send((Optr)self, SMB_isValidMode_, 1, (Optr)VAR_readMode_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9115 = new_String(L"Invalid read/write mode: ");
    Constant string_9115_Const = new_Constant((Optr)string_9115);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9116 = new_Send((Optr)string_9115_Const, SMB__append_, 1, (Optr)VAR_readMode_0_0);
    // error:. 
    Send PSend9117 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend9116);
    Array PThreadedCode9114 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9115, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend9116, (Optr)&t_send1, (Optr)PSend9117, (Optr)&t_block_return);
    Block PBlock9113 = new_Block_with(empty_Array, empty_Array, PThreadedCode9114, 1, PSend9117);
    // ifFalse:. 
    Send PSend9112 = new_Send((Optr)PSend9111, SMB_ifFalse_, 1, (Optr)PBlock9113);
    Assign PAssign9118 = new_Assign((Optr)slot_IO_Term_Process_mode, (Optr)VAR_readMode_0_0);
    Array PThreadedCode9104 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9105, (Optr)&t_send_ifTrue_, (Optr)PSend9106, (Optr)PBlock9107, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend9111, (Optr)&t_send_ifFalse_, (Optr)PSend9112, (Optr)PBlock9113, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9118, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9102 = new_Method_with(PArray9103, empty_Array, empty_Array, PThreadedCode9104, 4, PSend9106, PSend9112, PAssign9118, self);
    
    MethodClosure MC_SMB_mode_ = new_MethodClosure((Method)PMethod9102, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode_, MC_SMB_mode_);
}


static void init_SMB_in() {
    Symbol SMB_in = new_Symbol(L"in");
    Array PThreadedCode9120 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_in, (Optr)&t_method_return);
    Method PMethod9119 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9120, 1, slot_IO_Term_Process_in);
    
    MethodClosure MC_SMB_in = new_MethodClosure((Method)PMethod9119, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_in, MC_SMB_in);
}


static void init_SMB_canWrite() {
    Symbol SMB_canWrite = new_Symbol(L"canWrite");
    Symbol  SMB_w = new_Symbol(L"w");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend9123 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode9122 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend9123, (Optr)&t_method_return);
    Method PMethod9121 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9122, 1, PSend9123);
    
    MethodClosure MC_SMB_canWrite = new_MethodClosure((Method)PMethod9121, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canWrite, MC_SMB_canWrite);
}


static void init_SMB_isOpened() {
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    Symbol SMB_in = new_Symbol(L"in");
    // in. 
    Send PSend9126 = new_Send((Optr)self, SMB_in, 0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend9127 = new_Send((Optr)PSend9126, SMB_isNil, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9128 = new_Send((Optr)PSend9127, SMB_not, 0);
    Symbol SMB_out = new_Symbol(L"out");
    // out. 
    Send PSend9131 = new_Send((Optr)self, SMB_out, 0);
    // isNil. 
    Send PSend9132 = new_Send((Optr)PSend9131, SMB_isNil, 0);
    // not. 
    Send PSend9133 = new_Send((Optr)PSend9132, SMB_not, 0);
    Array PThreadedCode9130 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9131, (Optr)&t_send0, (Optr)PSend9132, (Optr)&t_send0, (Optr)PSend9133, (Optr)&t_block_return);
    Block PBlock9129 = new_Block_with(empty_Array, empty_Array, PThreadedCode9130, 1, PSend9133);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9134 = new_Send((Optr)PSend9128, SMB_or_, 1, (Optr)PBlock9129);
    Array PThreadedCode9125 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9126, (Optr)&t_send0, (Optr)PSend9127, (Optr)&t_send0, (Optr)PSend9128, (Optr)&t_push_closure, (Optr)PBlock9129, (Optr)&t_send1, (Optr)PSend9134, (Optr)&t_method_return);
    Method PMethod9124 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9125, 1, PSend9134);
    
    MethodClosure MC_SMB_isOpened = new_MethodClosure((Method)PMethod9124, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isOpened, MC_SMB_isOpened);
}


static void init_SMB_out() {
    Symbol SMB_out = new_Symbol(L"out");
    Array PThreadedCode9136 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_out, (Optr)&t_method_return);
    Method PMethod9135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9136, 1, slot_IO_Term_Process_out);
    
    MethodClosure MC_SMB_out = new_MethodClosure((Method)PMethod9135, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_out, MC_SMB_out);
}


static void init_SMB_popen() {
    Symbol SMB_popen = new_Symbol(L"popen");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9140 = new_String(L"\n    char * command      = unicode_to_ascii(((String)${command})->value);\n    char * mode         = unicode_to_ascii(((Symbol)${mode})->value);\n    FILE * stream       = popen(command, mode);\n    assert(stream, fwprintf(stderr,\n            \t\t\t\tL\"%s (program: '%s', mode: '%s')\\n\",\n            \t\t\t\tstrerror(errno), command, mode););\n    ${out}  = (Optr)new_IO_ReadFile_from(stream);\n    ${in}   = (Optr)new_IO_WriteFile_from(stream);\n    ^self;\n\t");
    Annotation PAnnotation9139 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_popen, (Optr)SMB_IO_minus_Process, (Optr)string_9140);
    Array PArray9138 = new_Array_with(1, (Optr)PAnnotation9139);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9142 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9141 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9142, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9137 = new_NativeMethod_with(empty_Array, empty_Array, PArray9138, PThreadedCode9141, 2, PSend9142, self);
    
    MethodClosure MC_SMB_popen = new_MethodClosure((Method)PNativeMethod9137, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_popen, MC_SMB_popen);
}


static void init_SMB_returnStatus() {
    Symbol SMB_returnStatus = new_Symbol(L"returnStatus");
    Array PThreadedCode9144 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Method PMethod9143 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9144, 1, slot_IO_Term_Process_returnStatus);
    
    MethodClosure MC_SMB_returnStatus = new_MethodClosure((Method)PMethod9143, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_returnStatus, MC_SMB_returnStatus);
}


static void init_SMB_canReadAndWrite() {
    Symbol SMB_canReadAndWrite = new_Symbol(L"canReadAndWrite");
    Symbol SMB_mode = new_Symbol(L"mode");
    // mode. 
    Send PSend9147 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_rw = new_Symbol(L"rw");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_rw_Const = new_Constant((Optr)SMB_rw);
    // =. 
    Send PSend9148 = new_Send((Optr)PSend9147, SMB__equals_, 1, (Optr)SMB_rw_Const);
    // mode. 
    Send PSend9151 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_r_plus_ = new_Symbol(L"r+");
    Constant SMB_r_plus__Const = new_Constant((Optr)SMB_r_plus_);
    // =. 
    Send PSend9152 = new_Send((Optr)PSend9151, SMB__equals_, 1, (Optr)SMB_r_plus__Const);
    Array PThreadedCode9150 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9151, (Optr)&t_push1, (Optr)SMB_r_plus_, (Optr)&t_send1, (Optr)PSend9152, (Optr)&t_block_return);
    Block PBlock9149 = new_Block_with(empty_Array, empty_Array, PThreadedCode9150, 1, PSend9152);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9153 = new_Send((Optr)PSend9148, SMB_or_, 1, (Optr)PBlock9149);
    Array PThreadedCode9146 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9147, (Optr)&t_push1, (Optr)SMB_rw, (Optr)&t_send1, (Optr)PSend9148, (Optr)&t_push_closure, (Optr)PBlock9149, (Optr)&t_send1, (Optr)PSend9153, (Optr)&t_method_return);
    Method PMethod9145 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9146, 1, PSend9153);
    
    MethodClosure MC_SMB_canReadAndWrite = new_MethodClosure((Method)PMethod9145, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canReadAndWrite, MC_SMB_canReadAndWrite);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper9156 = new_Super(SMB_initialize, 0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // mode:. 
    Send PSend9157 = new_Send((Optr)self, SMB_mode_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode9155 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9156, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9157, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9154 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9155, 3, PSuper9156, PSend9157, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9154, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_command_() {
    Symbol SMB_command_ = new_Symbol(L"command:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray9159 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9161 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9165 = new_String(L"Can't change the command of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9165_Const = new_Constant((Optr)string_9165);
    // error:. 
    Send PSend9166 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9165_Const);
    Array PThreadedCode9164 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9165, (Optr)&t_send1, (Optr)PSend9166, (Optr)&t_block_return);
    Block PBlock9163 = new_Block_with(empty_Array, empty_Array, PThreadedCode9164, 1, PSend9166);
    // ifTrue:. 
    Send PSend9162 = new_Send((Optr)PSend9161, SMB_ifTrue_, 1, (Optr)PBlock9163);
    Assign PAssign9167 = new_Assign((Optr)slot_IO_Term_Process_command, (Optr)VAR_aCommandString_0_0);
    Array PThreadedCode9160 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9161, (Optr)&t_send_ifTrue_, (Optr)PSend9162, (Optr)PBlock9163, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9167, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9158 = new_Method_with(PArray9159, empty_Array, empty_Array, PThreadedCode9160, 3, PSend9162, PAssign9167, self);
    
    MethodClosure MC_SMB_command_ = new_MethodClosure((Method)PMethod9158, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command_, MC_SMB_command_);
}


static void init_SMB_open() {
    Symbol SMB_open = new_Symbol(L"open");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9171 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9173 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9177 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode9176 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9177, (Optr)&t_block_return);
    Block PBlock9175 = new_Block_with(empty_Array, empty_Array, PThreadedCode9176, 1, PSend9177);
    // ifTrue:. 
    Send PSend9174 = new_Send((Optr)PSend9173, SMB_ifTrue_, 1, (Optr)PBlock9175);
    Symbol SMB_command = new_Symbol(L"command");
    // command. 
    Send PSend9178 = new_Send((Optr)self, SMB_command, 0);
    String string_9181 = new_String(L"Can't open with an empty command");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9181_Const = new_Constant((Optr)string_9181);
    // error:. 
    Send PSend9182 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9181_Const);
    Array PThreadedCode9180 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9181, (Optr)&t_send1, (Optr)PSend9182, (Optr)&t_block_return);
    Block PBlock9179 = new_Block_with(empty_Array, empty_Array, PThreadedCode9180, 1, PSend9182);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9183 = new_Send((Optr)PSend9178, SMB_ifNil_, 1, (Optr)PBlock9179);
    Assign PAssign9184 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)nil_Const);
    Symbol SMB_popen = new_Symbol(L"popen");
    // popen. 
    Send PSend9185 = new_Send((Optr)self, SMB_popen, 0);
    Array PThreadedCode9172 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9173, (Optr)&t_send_ifTrue_, (Optr)PSend9174, (Optr)PBlock9175, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9178, (Optr)&t_push_closure, (Optr)PBlock9179, (Optr)&t_send1, (Optr)PSend9183, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9184, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9185, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9170 = new_Block_with(PArray9171, empty_Array, PThreadedCode9172, 5, PSend9174, PSend9183, PAssign9184, PSend9185, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9186 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9170);
    Array PThreadedCode9169 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9170, (Optr)&t_send1, (Optr)PSend9186, (Optr)&t_method_return);
    Method PMethod9168 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9169, 1, PSend9186);
    
    MethodClosure MC_SMB_open = new_MethodClosure((Method)PMethod9168, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_open, MC_SMB_open);
}


static void init_SMB_isClosed() {
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9189 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9190 = new_Send((Optr)PSend9189, SMB_not, 0);
    Array PThreadedCode9188 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9189, (Optr)&t_send0, (Optr)PSend9190, (Optr)&t_method_return);
    Method PMethod9187 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9188, 1, PSend9190);
    
    MethodClosure MC_SMB_isClosed = new_MethodClosure((Method)PMethod9187, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isClosed, MC_SMB_isClosed);
}


static void init_SMB_isValidMode_() {
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    Variable VAR_aModeString_0_0 = new_Variable_named(L"aModeString", 0);
    Array PArray9192 = new_Array_with(1, (Optr)VAR_aModeString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend9194 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_r_Const);
    Symbol  SMB_w = new_Symbol(L"w");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend9197 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode9196 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend9197, (Optr)&t_block_return);
    Block PBlock9195 = new_Block_with(empty_Array, empty_Array, PThreadedCode9196, 1, PSend9197);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9198 = new_Send((Optr)PSend9194, SMB_or_, 1, (Optr)PBlock9195);
    Array PThreadedCode9193 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9194, (Optr)&t_push_closure, (Optr)PBlock9195, (Optr)&t_send1, (Optr)PSend9198, (Optr)&t_method_return);
    Method PMethod9191 = new_Method_with(PArray9192, empty_Array, empty_Array, PThreadedCode9193, 1, PSend9198);
    
    MethodClosure MC_SMB_isValidMode_ = new_MethodClosure((Method)PMethod9191, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isValidMode_, MC_SMB_isValidMode_);
}


static void init_SMB_mode() {
    Symbol SMB_mode = new_Symbol(L"mode");
    Array PThreadedCode9200 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_method_return);
    Method PMethod9199 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9200, 1, slot_IO_Term_Process_mode);
    
    MethodClosure MC_SMB_mode = new_MethodClosure((Method)PMethod9199, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode, MC_SMB_mode);
}


static void init_class_SMB_open_withMode_() {
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Variable VAR_readMode_0_1 = new_Variable_named(L"readMode", 0);
    Array PArray9202 = new_Array_with(2, (Optr)VAR_aCommandString_0_0, (Optr)VAR_readMode_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray9205 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_command_ = new_Symbol(L"command:");
    // command:. 
    Send PSend9207 = new_Send((Optr)VAR__receiver__1_0, SMB_command_, 1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    // mode:. 
    Send PSend9208 = new_Send((Optr)VAR__receiver__1_0, SMB_mode_, 1, (Optr)VAR_readMode_0_1);
    Symbol SMB_open = new_Symbol(L"open");
    // open. 
    Send PSend9209 = new_Send((Optr)VAR__receiver__1_0, SMB_open, 0);
    Array PThreadedCode9206 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_send1, (Optr)PSend9207, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_readMode_0_1, (Optr)&t_send1, (Optr)PSend9208, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9209, (Optr)&t_method_return);
    Block PBlock9204 = new_Block_with(PArray9205, empty_Array, PThreadedCode9206, 3, PSend9207, PSend9208, PSend9209);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9210 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9211 = new_Send((Optr)PBlock9204, SMB_value_, 1, (Optr)PSend9210);
    Array PThreadedCode9203 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock9204, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9210, (Optr)&t_send1, (Optr)PSend9211, (Optr)&t_method_return);
    Method PMethod9201 = new_Method_with(PArray9202, empty_Array, empty_Array, PThreadedCode9203, 1, PSend9211);
    
    MethodClosure MC_SMB_open_withMode_ = new_MethodClosure((Method)PMethod9201, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_withMode_, MC_SMB_open_withMode_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9214 = new_String(L"plugin/io/Process.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Process_Const = new_Constant((Optr)SMB_IO_minus_Process);
    Constant string_9214_Const = new_Constant((Optr)string_9214);
    // require:at:. 
    Send PSend9215 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Process_Const, (Optr)string_9214_Const);
    Array PThreadedCode9213 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Process, (Optr)&t_push1, (Optr)string_9214, (Optr)&t_send2, (Optr)PSend9215, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9212 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9213, 2, PSend9215, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9212, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray9217 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // open:withMode:. 
    Send PSend9219 = new_Send((Optr)self, SMB_open_withMode_, 2, (Optr)VAR_aCommandString_0_0, (Optr)SMB_r_Const);
    Array PThreadedCode9218 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send2, (Optr)PSend9219, (Optr)&t_method_return);
    Method PMethod9216 = new_Method_with(PArray9217, empty_Array, empty_Array, PThreadedCode9218, 1, PSend9219);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PMethod9216, HEADER(IO_Term_Process_Class));
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