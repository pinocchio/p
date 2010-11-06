#include <lib/class/IO/File.h>


Optr layout_IO_File_Class_class;


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9513 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_close, (Optr)SMB_IO_minus_File);
    Array PArray9512 = new_Array_with(1, (Optr)PAnnotation9513);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9515 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9514 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9515, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9511 = new_NativeMethod_with(empty_Array, empty_Array, PArray9512, PThreadedCode9514, 2, PSend9515, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PNativeMethod9511, IO_File_Class);
    store_method(IO_File_Class, SMB_close, MC_SMB_close);
}


static void init_class_SMB_stderr() {
    Symbol SMB_stderr = new_Symbol(L"stderr");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9518 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stderr, (Optr)SMB_IO_minus_File);
    Array PArray9517 = new_Array_with(1, (Optr)PAnnotation9518);
    Array PThreadedCode9519 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9516 = new_NativeMethod_with(empty_Array, empty_Array, PArray9517, PThreadedCode9519, 1, self);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PNativeMethod9516, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stderr, MC_SMB_stderr);
}


static void init_class_SMB_stdin() {
    Symbol SMB_stdin = new_Symbol(L"stdin");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9522 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stdin, (Optr)SMB_IO_minus_File);
    Array PArray9521 = new_Array_with(1, (Optr)PAnnotation9522);
    Array PThreadedCode9523 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9520 = new_NativeMethod_with(empty_Array, empty_Array, PArray9521, PThreadedCode9523, 1, self);
    
    MethodClosure MC_SMB_stdin = new_MethodClosure((Method)PNativeMethod9520, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stdin, MC_SMB_stdin);
}


static void init_class_SMB_stdout_() {
    Symbol SMB_stdout_ = new_Symbol(L"stdout:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9525 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend9527 = new_Send((Optr)self, SMB_stdout, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9528 = new_Send((Optr)PSend9527, SMB_writeAll_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9526 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9527, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9528, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9524 = new_Method_with(PArray9525, empty_Array, empty_Array, PThreadedCode9526, 2, PSend9528, self);
    
    MethodClosure MC_SMB_stdout_ = new_MethodClosure((Method)PMethod9524, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stdout_, MC_SMB_stdout_);
}


static void init_class_SMB_stderr_() {
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9530 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend9532 = new_Send((Optr)self, SMB_stderr, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9533 = new_Send((Optr)PSend9532, SMB_writeAll_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9531 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9532, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9533, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9529 = new_Method_with(PArray9530, empty_Array, empty_Array, PThreadedCode9531, 2, PSend9533, self);
    
    MethodClosure MC_SMB_stderr_ = new_MethodClosure((Method)PMethod9529, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stderr_, MC_SMB_stderr_);
}


static void init_class_SMB_stdout() {
    Symbol SMB_stdout = new_Symbol(L"stdout");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9536 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stdout, (Optr)SMB_IO_minus_File);
    Array PArray9535 = new_Array_with(1, (Optr)PAnnotation9536);
    Array PThreadedCode9537 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9534 = new_NativeMethod_with(empty_Array, empty_Array, PArray9535, PThreadedCode9537, 1, self);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PNativeMethod9534, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stdout, MC_SMB_stdout);
}

void init_IO_PFile_layout() {
    layout_IO_File_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_File_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_File_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_File_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_File_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_File_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_File = new_Symbol(L"File");
    IO_File_Class = (Class)new_Class(Object_Class, layout_IO_File_Class_class);
    IO_File_Class->layout = empty_object_layout;
    IO_File_Class->name = SMB_File;
    
}

void init_IO_PFile_methods() {
    init_SMB_close();
    init_class_SMB_stderr();
    init_class_SMB_stdin();
    init_class_SMB_stdout_();
    init_class_SMB_stderr_();
    init_class_SMB_stdout();
    
}