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
    Send PSend9105 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode9104 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9105, (Optr)&t_method_return);
    Method PMethod9103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9104, 1, PSend9105);
    
    MethodClosure MC_SMB_canRead = new_MethodClosure((Method)PMethod9103, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canRead, MC_SMB_canRead);
}


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9109 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    // isClosed. 
    Send PSend9111 = new_Send((Optr)self, SMB_isClosed, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9115 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode9114 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9115, (Optr)&t_block_return);
    Block PBlock9113 = new_Block_with(empty_Array, empty_Array, PThreadedCode9114, 1, PSend9115);
    // ifTrue:. 
    Send PSend9112 = new_Send((Optr)PSend9111, SMB_ifTrue_, 1, (Optr)PBlock9113);
    Symbol SMB_pclose = new_Symbol(L"pclose");
    // pclose. 
    Send PSend9117 = new_Send((Optr)self, SMB_pclose, 0);
    Assign PAssign9116 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)PSend9117);
    Assign PAssign9118 = new_Assign((Optr)slot_IO_Term_Process_in, (Optr)nil_Const);
    Assign PAssign9119 = new_Assign((Optr)slot_IO_Term_Process_out, (Optr)nil_Const);
    Array PThreadedCode9110 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9111, (Optr)&t_send_ifTrue_, (Optr)PSend9112, (Optr)PBlock9113, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9116, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9117, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9118, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9119, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Block PBlock9108 = new_Block_with(PArray9109, empty_Array, PThreadedCode9110, 5, PSend9112, PAssign9116, PAssign9118, PAssign9119, slot_IO_Term_Process_returnStatus);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9120 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9108);
    Array PThreadedCode9107 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9108, (Optr)&t_send1, (Optr)PSend9120, (Optr)&t_method_return);
    Method PMethod9106 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9107, 1, PSend9120);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PMethod9106, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_close, MC_SMB_close);
}


static void init_SMB_pclose() {
    Symbol SMB_pclose = new_Symbol(L"pclose");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9124 = new_String(L"\n    IO_File stream  = (IO_File)${in};\n    if (!stream) {\n        stream = (IO_File)${out};\t\n    }\n    int returnValue = pclose(stream->file);\n    ^ new_SmallInt(returnValue);\n\t");
    Annotation PAnnotation9123 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_pclose, (Optr)SMB_IO_minus_Process, (Optr)string_9124);
    Array PArray9122 = new_Array_with(1, (Optr)PAnnotation9123);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9126 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9125 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9126, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9121 = new_NativeMethod_with(empty_Array, empty_Array, PArray9122, PThreadedCode9125, 2, PSend9126, self);
    
    MethodClosure MC_SMB_pclose = new_MethodClosure((Method)PNativeMethod9121, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_pclose, MC_SMB_pclose);
}


static void init_SMB_command() {
    Symbol SMB_command = new_Symbol(L"command");
    Array PThreadedCode9128 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_command, (Optr)&t_method_return);
    Method PMethod9127 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9128, 1, slot_IO_Term_Process_command);
    
    MethodClosure MC_SMB_command = new_MethodClosure((Method)PMethod9127, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command, MC_SMB_command);
}


static void init_SMB_mode_() {
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Variable VAR_readMode_0_0 = new_Variable_named(L"readMode", 0);
    Array PArray9130 = new_Array_with(1, (Optr)VAR_readMode_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9132 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9136 = new_String(L"Can't change the mode of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9136_Const = new_Constant((Optr)string_9136);
    // error:. 
    Send PSend9137 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9136_Const);
    Array PThreadedCode9135 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9136, (Optr)&t_send1, (Optr)PSend9137, (Optr)&t_block_return);
    Block PBlock9134 = new_Block_with(empty_Array, empty_Array, PThreadedCode9135, 1, PSend9137);
    // ifTrue:. 
    Send PSend9133 = new_Send((Optr)PSend9132, SMB_ifTrue_, 1, (Optr)PBlock9134);
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    // isValidMode:. 
    Send PSend9138 = new_Send((Optr)self, SMB_isValidMode_, 1, (Optr)VAR_readMode_0_0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9142 = new_String(L"Invalid read/write mode: ");
    Constant string_9142_Const = new_Constant((Optr)string_9142);
    Symbol SMB__append_ = new_Symbol(L",");
    // ,. 
    Send PSend9143 = new_Send((Optr)string_9142_Const, SMB__append_, 1, (Optr)VAR_readMode_0_0);
    // error:. 
    Send PSend9144 = new_Send((Optr)self, SMB_error_, 1, (Optr)PSend9143);
    Array PThreadedCode9141 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9142, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend9143, (Optr)&t_send1, (Optr)PSend9144, (Optr)&t_block_return);
    Block PBlock9140 = new_Block_with(empty_Array, empty_Array, PThreadedCode9141, 1, PSend9144);
    // ifFalse:. 
    Send PSend9139 = new_Send((Optr)PSend9138, SMB_ifFalse_, 1, (Optr)PBlock9140);
    Assign PAssign9145 = new_Assign((Optr)slot_IO_Term_Process_mode, (Optr)VAR_readMode_0_0);
    Array PThreadedCode9131 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9132, (Optr)&t_send_ifTrue_, (Optr)PSend9133, (Optr)PBlock9134, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_send1, (Optr)PSend9138, (Optr)&t_send_ifFalse_, (Optr)PSend9139, (Optr)PBlock9140, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9145, (Optr)&t_push_variable, (Optr)VAR_readMode_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9129 = new_Method_with(PArray9130, empty_Array, empty_Array, PThreadedCode9131, 4, PSend9133, PSend9139, PAssign9145, self);
    
    MethodClosure MC_SMB_mode_ = new_MethodClosure((Method)PMethod9129, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode_, MC_SMB_mode_);
}


static void init_SMB_in() {
    Symbol SMB_in = new_Symbol(L"in");
    Array PThreadedCode9147 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_in, (Optr)&t_method_return);
    Method PMethod9146 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9147, 1, slot_IO_Term_Process_in);
    
    MethodClosure MC_SMB_in = new_MethodClosure((Method)PMethod9146, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_in, MC_SMB_in);
}


static void init_SMB_canWrite() {
    Symbol SMB_canWrite = new_Symbol(L"canWrite");
    Symbol  SMB_w = new_Symbol(L"w");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend9150 = new_Send((Optr)slot_IO_Term_Process_mode, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode9149 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend9150, (Optr)&t_method_return);
    Method PMethod9148 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9149, 1, PSend9150);
    
    MethodClosure MC_SMB_canWrite = new_MethodClosure((Method)PMethod9148, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canWrite, MC_SMB_canWrite);
}


static void init_SMB_isOpened() {
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    Symbol SMB_in = new_Symbol(L"in");
    // in. 
    Send PSend9153 = new_Send((Optr)self, SMB_in, 0);
    Symbol SMB_isNil = new_Symbol(L"isNil");
    // isNil. 
    Send PSend9154 = new_Send((Optr)PSend9153, SMB_isNil, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9155 = new_Send((Optr)PSend9154, SMB_not, 0);
    Symbol SMB_out = new_Symbol(L"out");
    // out. 
    Send PSend9158 = new_Send((Optr)self, SMB_out, 0);
    // isNil. 
    Send PSend9159 = new_Send((Optr)PSend9158, SMB_isNil, 0);
    // not. 
    Send PSend9160 = new_Send((Optr)PSend9159, SMB_not, 0);
    Array PThreadedCode9157 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9158, (Optr)&t_send0, (Optr)PSend9159, (Optr)&t_send0, (Optr)PSend9160, (Optr)&t_block_return);
    Block PBlock9156 = new_Block_with(empty_Array, empty_Array, PThreadedCode9157, 1, PSend9160);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9161 = new_Send((Optr)PSend9155, SMB_or_, 1, (Optr)PBlock9156);
    Array PThreadedCode9152 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9153, (Optr)&t_send0, (Optr)PSend9154, (Optr)&t_send0, (Optr)PSend9155, (Optr)&t_push_closure, (Optr)PBlock9156, (Optr)&t_send1, (Optr)PSend9161, (Optr)&t_method_return);
    Method PMethod9151 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9152, 1, PSend9161);
    
    MethodClosure MC_SMB_isOpened = new_MethodClosure((Method)PMethod9151, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isOpened, MC_SMB_isOpened);
}


static void init_SMB_out() {
    Symbol SMB_out = new_Symbol(L"out");
    Array PThreadedCode9163 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_out, (Optr)&t_method_return);
    Method PMethod9162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9163, 1, slot_IO_Term_Process_out);
    
    MethodClosure MC_SMB_out = new_MethodClosure((Method)PMethod9162, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_out, MC_SMB_out);
}


static void init_SMB_popen() {
    Symbol SMB_popen = new_Symbol(L"popen");
    Symbol SMB_pPrimitive_plugin_code_ = new_Symbol(L"pPrimitive:plugin:code:");
    Symbol SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9167 = new_String(L"\n    char * command      = unicode_to_ascii(((String)${command})->value);\n    char * mode         = unicode_to_ascii(((Symbol)${mode})->value);\n    FILE * stream       = popen(command, mode);\n    assert(stream, fwprintf(stderr,\n            \t\t\t\tL\"%s (program: '%s', mode: '%s')\\n\",\n            \t\t\t\tstrerror(errno), command, mode););\n    ${out}  = (Optr)new_IO_ReadFile_from(stream);\n    ${in}   = (Optr)new_IO_WriteFile_from(stream);\n    ^self;\n\t");
    Annotation PAnnotation9166 = new_Annotation((Optr)SMB_pPrimitive_plugin_code_, 3, (Optr)SMB_popen, (Optr)SMB_IO_minus_Process, (Optr)string_9167);
    Array PArray9165 = new_Array_with(1, (Optr)PAnnotation9166);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9169 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9168 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9169, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9164 = new_NativeMethod_with(empty_Array, empty_Array, PArray9165, PThreadedCode9168, 2, PSend9169, self);
    
    MethodClosure MC_SMB_popen = new_MethodClosure((Method)PNativeMethod9164, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_popen, MC_SMB_popen);
}


static void init_SMB_returnStatus() {
    Symbol SMB_returnStatus = new_Symbol(L"returnStatus");
    Array PThreadedCode9171 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_returnStatus, (Optr)&t_method_return);
    Method PMethod9170 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9171, 1, slot_IO_Term_Process_returnStatus);
    
    MethodClosure MC_SMB_returnStatus = new_MethodClosure((Method)PMethod9170, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_returnStatus, MC_SMB_returnStatus);
}


static void init_SMB_canReadAndWrite() {
    Symbol SMB_canReadAndWrite = new_Symbol(L"canReadAndWrite");
    Symbol SMB_mode = new_Symbol(L"mode");
    // mode. 
    Send PSend9174 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_rw = new_Symbol(L"rw");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_rw_Const = new_Constant((Optr)SMB_rw);
    // =. 
    Send PSend9175 = new_Send((Optr)PSend9174, SMB__equals_, 1, (Optr)SMB_rw_Const);
    // mode. 
    Send PSend9178 = new_Send((Optr)self, SMB_mode, 0);
    Symbol  SMB_r_plus_ = new_Symbol(L"r+");
    Constant SMB_r_plus__Const = new_Constant((Optr)SMB_r_plus_);
    // =. 
    Send PSend9179 = new_Send((Optr)PSend9178, SMB__equals_, 1, (Optr)SMB_r_plus__Const);
    Array PThreadedCode9177 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9178, (Optr)&t_push1, (Optr)SMB_r_plus_, (Optr)&t_send1, (Optr)PSend9179, (Optr)&t_block_return);
    Block PBlock9176 = new_Block_with(empty_Array, empty_Array, PThreadedCode9177, 1, PSend9179);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9180 = new_Send((Optr)PSend9175, SMB_or_, 1, (Optr)PBlock9176);
    Array PThreadedCode9173 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9174, (Optr)&t_push1, (Optr)SMB_rw, (Optr)&t_send1, (Optr)PSend9175, (Optr)&t_push_closure, (Optr)PBlock9176, (Optr)&t_send1, (Optr)PSend9180, (Optr)&t_method_return);
    Method PMethod9172 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9173, 1, PSend9180);
    
    MethodClosure MC_SMB_canReadAndWrite = new_MethodClosure((Method)PMethod9172, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_canReadAndWrite, MC_SMB_canReadAndWrite);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper9183 = new_Super(SMB_initialize, 0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // mode:. 
    Send PSend9184 = new_Send((Optr)self, SMB_mode_, 1, (Optr)SMB_r_Const);
    Array PThreadedCode9182 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9183, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9184, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9181 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9182, 3, PSuper9183, PSend9184, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9181, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_command_() {
    Symbol SMB_command_ = new_Symbol(L"command:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray9186 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9188 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_9192 = new_String(L"Can't change the command of a running process");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9192_Const = new_Constant((Optr)string_9192);
    // error:. 
    Send PSend9193 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9192_Const);
    Array PThreadedCode9191 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9192, (Optr)&t_send1, (Optr)PSend9193, (Optr)&t_block_return);
    Block PBlock9190 = new_Block_with(empty_Array, empty_Array, PThreadedCode9191, 1, PSend9193);
    // ifTrue:. 
    Send PSend9189 = new_Send((Optr)PSend9188, SMB_ifTrue_, 1, (Optr)PBlock9190);
    Assign PAssign9194 = new_Assign((Optr)slot_IO_Term_Process_command, (Optr)VAR_aCommandString_0_0);
    Array PThreadedCode9187 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9188, (Optr)&t_send_ifTrue_, (Optr)PSend9189, (Optr)PBlock9190, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9194, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9185 = new_Method_with(PArray9186, empty_Array, empty_Array, PThreadedCode9187, 3, PSend9189, PAssign9194, self);
    
    MethodClosure MC_SMB_command_ = new_MethodClosure((Method)PMethod9185, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_command_, MC_SMB_command_);
}


static void init_SMB_open() {
    Symbol SMB_open = new_Symbol(L"open");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9198 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9200 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9204 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode9203 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend9204, (Optr)&t_block_return);
    Block PBlock9202 = new_Block_with(empty_Array, empty_Array, PThreadedCode9203, 1, PSend9204);
    // ifTrue:. 
    Send PSend9201 = new_Send((Optr)PSend9200, SMB_ifTrue_, 1, (Optr)PBlock9202);
    Symbol SMB_command = new_Symbol(L"command");
    // command. 
    Send PSend9205 = new_Send((Optr)self, SMB_command, 0);
    String string_9208 = new_String(L"Can't open with an empty command");
    Symbol SMB_error_ = new_Symbol(L"error:");
    Constant string_9208_Const = new_Constant((Optr)string_9208);
    // error:. 
    Send PSend9209 = new_Send((Optr)self, SMB_error_, 1, (Optr)string_9208_Const);
    Array PThreadedCode9207 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)string_9208, (Optr)&t_send1, (Optr)PSend9209, (Optr)&t_block_return);
    Block PBlock9206 = new_Block_with(empty_Array, empty_Array, PThreadedCode9207, 1, PSend9209);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend9210 = new_Send((Optr)PSend9205, SMB_ifNil_, 1, (Optr)PBlock9206);
    Assign PAssign9211 = new_Assign((Optr)slot_IO_Term_Process_returnStatus, (Optr)nil_Const);
    Symbol SMB_popen = new_Symbol(L"popen");
    // popen. 
    Send PSend9212 = new_Send((Optr)self, SMB_popen, 0);
    Array PThreadedCode9199 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9200, (Optr)&t_send_ifTrue_, (Optr)PSend9201, (Optr)PBlock9202, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9205, (Optr)&t_push_closure, (Optr)PBlock9206, (Optr)&t_send1, (Optr)PSend9210, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9211, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9212, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9197 = new_Block_with(PArray9198, empty_Array, PThreadedCode9199, 5, PSend9201, PSend9210, PAssign9211, PSend9212, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9213 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9197);
    Array PThreadedCode9196 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9197, (Optr)&t_send1, (Optr)PSend9213, (Optr)&t_method_return);
    Method PMethod9195 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9196, 1, PSend9213);
    
    MethodClosure MC_SMB_open = new_MethodClosure((Method)PMethod9195, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_open, MC_SMB_open);
}


static void init_SMB_isClosed() {
    Symbol SMB_isClosed = new_Symbol(L"isClosed");
    Symbol SMB_isOpened = new_Symbol(L"isOpened");
    // isOpened. 
    Send PSend9216 = new_Send((Optr)self, SMB_isOpened, 0);
    Symbol SMB_not = new_Symbol(L"not");
    // not. 
    Send PSend9217 = new_Send((Optr)PSend9216, SMB_not, 0);
    Array PThreadedCode9215 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9216, (Optr)&t_send0, (Optr)PSend9217, (Optr)&t_method_return);
    Method PMethod9214 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9215, 1, PSend9217);
    
    MethodClosure MC_SMB_isClosed = new_MethodClosure((Method)PMethod9214, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isClosed, MC_SMB_isClosed);
}


static void init_SMB_isValidMode_() {
    Symbol SMB_isValidMode_ = new_Symbol(L"isValidMode:");
    Variable VAR_aModeString_0_0 = new_Variable_named(L"aModeString", 0);
    Array PArray9219 = new_Array_with(1, (Optr)VAR_aModeString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // =. 
    Send PSend9221 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_r_Const);
    Symbol  SMB_w = new_Symbol(L"w");
    Constant SMB_w_Const = new_Constant((Optr)SMB_w);
    // =. 
    Send PSend9224 = new_Send((Optr)VAR_aModeString_0_0, SMB__equals_, 1, (Optr)SMB_w_Const);
    Array PThreadedCode9223 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_w, (Optr)&t_send1, (Optr)PSend9224, (Optr)&t_block_return);
    Block PBlock9222 = new_Block_with(empty_Array, empty_Array, PThreadedCode9223, 1, PSend9224);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend9225 = new_Send((Optr)PSend9221, SMB_or_, 1, (Optr)PBlock9222);
    Array PThreadedCode9220 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aModeString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send1, (Optr)PSend9221, (Optr)&t_push_closure, (Optr)PBlock9222, (Optr)&t_send1, (Optr)PSend9225, (Optr)&t_method_return);
    Method PMethod9218 = new_Method_with(PArray9219, empty_Array, empty_Array, PThreadedCode9220, 1, PSend9225);
    
    MethodClosure MC_SMB_isValidMode_ = new_MethodClosure((Method)PMethod9218, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_isValidMode_, MC_SMB_isValidMode_);
}


static void init_SMB_mode() {
    Symbol SMB_mode = new_Symbol(L"mode");
    Array PThreadedCode9227 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_Process_mode, (Optr)&t_method_return);
    Method PMethod9226 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9227, 1, slot_IO_Term_Process_mode);
    
    MethodClosure MC_SMB_mode = new_MethodClosure((Method)PMethod9226, IO_Term_Process_Class);
    store_method(IO_Term_Process_Class, SMB_mode, MC_SMB_mode);
}


static void init_class_SMB_open_withMode_() {
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Variable VAR_readMode_0_1 = new_Variable_named(L"readMode", 0);
    Array PArray9229 = new_Array_with(2, (Optr)VAR_aCommandString_0_0, (Optr)VAR_readMode_0_1);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray9232 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_command_ = new_Symbol(L"command:");
    // command:. 
    Send PSend9234 = new_Send((Optr)VAR__receiver__1_0, SMB_command_, 1, (Optr)VAR_aCommandString_0_0);
    Symbol SMB_mode_ = new_Symbol(L"mode:");
    // mode:. 
    Send PSend9235 = new_Send((Optr)VAR__receiver__1_0, SMB_mode_, 1, (Optr)VAR_readMode_0_1);
    Symbol SMB_open = new_Symbol(L"open");
    // open. 
    Send PSend9236 = new_Send((Optr)VAR__receiver__1_0, SMB_open, 0);
    Array PThreadedCode9233 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_send1, (Optr)PSend9234, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_readMode_0_1, (Optr)&t_send1, (Optr)PSend9235, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend9236, (Optr)&t_method_return);
    Block PBlock9231 = new_Block_with(PArray9232, empty_Array, PThreadedCode9233, 3, PSend9234, PSend9235, PSend9236);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9237 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend9238 = new_Send((Optr)PBlock9231, SMB_value_, 1, (Optr)PSend9237);
    Array PThreadedCode9230 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_closure, (Optr)PBlock9231, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9237, (Optr)&t_send1, (Optr)PSend9238, (Optr)&t_method_return);
    Method PMethod9228 = new_Method_with(PArray9229, empty_Array, empty_Array, PThreadedCode9230, 1, PSend9238);
    
    MethodClosure MC_SMB_open_withMode_ = new_MethodClosure((Method)PMethod9228, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_open_withMode_, MC_SMB_open_withMode_);
}


static void init_class_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol  SMB_IO_minus_Process = new_Symbol(L"IO.Process");
    String string_9241 = new_String(L"plugin/io/Process.so");
    Symbol SMB_require_at_ = new_Symbol(L"require:at:");
    Constant SMB_IO_minus_Process_Const = new_Constant((Optr)SMB_IO_minus_Process);
    Constant string_9241_Const = new_Constant((Optr)string_9241);
    // require:at:. 
    Send PSend9242 = new_Send((Optr)PPlugin_classReference, SMB_require_at_, 2, (Optr)SMB_IO_minus_Process_Const, (Optr)string_9241_Const);
    Array PThreadedCode9240 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_class_reference, (Optr)PPlugin_classReference, (Optr)&t_push1, (Optr)SMB_IO_minus_Process, (Optr)&t_push1, (Optr)string_9241, (Optr)&t_send2, (Optr)PSend9242, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9239 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9240, 2, PSend9242, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9239, HEADER(IO_Term_Process_Class));
    store_method(HEADER(IO_Term_Process_Class), SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_aCommandString_0_0 = new_Variable_named(L"aCommandString", 0);
    Array PArray9244 = new_Array_with(1, (Optr)VAR_aCommandString_0_0);
    Symbol  SMB_r = new_Symbol(L"r");
    Symbol SMB_open_withMode_ = new_Symbol(L"open:withMode:");
    Constant SMB_r_Const = new_Constant((Optr)SMB_r);
    // open:withMode:. 
    Send PSend9246 = new_Send((Optr)self, SMB_open_withMode_, 2, (Optr)VAR_aCommandString_0_0, (Optr)SMB_r_Const);
    Array PThreadedCode9245 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCommandString_0_0, (Optr)&t_push1, (Optr)SMB_r, (Optr)&t_send2, (Optr)PSend9246, (Optr)&t_method_return);
    Method PMethod9243 = new_Method_with(PArray9244, empty_Array, empty_Array, PThreadedCode9245, 1, PSend9246);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PMethod9243, HEADER(IO_Term_Process_Class));
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