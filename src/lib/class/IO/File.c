#include <lib/class/IO/File.h>


Optr layout_IO_File_Class_class;


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9702 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_close, (Optr)SMB_IO_minus_File);
    Array PArray9701 = new_Array_with(1, (Optr)PAnnotation9702);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9704 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9703 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9704, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9700 = new_NativeMethod_with(empty_Array, empty_Array, PArray9701, PThreadedCode9703, 2, PSend9704, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PNativeMethod9700, IO_File_Class);
    store_method(IO_File_Class, SMB_close, MC_SMB_close);
}


static void init_class_SMB_stderr() {
    Symbol SMB_stderr = new_Symbol(L"stderr");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9707 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stderr, (Optr)SMB_IO_minus_File);
    Array PArray9706 = new_Array_with(1, (Optr)PAnnotation9707);
    Array PThreadedCode9708 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9705 = new_NativeMethod_with(empty_Array, empty_Array, PArray9706, PThreadedCode9708, 1, self);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PNativeMethod9705, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stderr, MC_SMB_stderr);
}


static void init_class_SMB_stdin() {
    Symbol SMB_stdin = new_Symbol(L"stdin");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9711 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stdin, (Optr)SMB_IO_minus_File);
    Array PArray9710 = new_Array_with(1, (Optr)PAnnotation9711);
    Array PThreadedCode9712 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9709 = new_NativeMethod_with(empty_Array, empty_Array, PArray9710, PThreadedCode9712, 1, self);
    
    MethodClosure MC_SMB_stdin = new_MethodClosure((Method)PNativeMethod9709, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stdin, MC_SMB_stdin);
}


static void init_class_SMB_stdout_() {
    Symbol SMB_stdout_ = new_Symbol(L"stdout:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9714 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend9716 = new_Send((Optr)self, SMB_stdout, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9717 = new_Send((Optr)PSend9716, SMB_writeAll_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9715 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9716, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9717, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9713 = new_Method_with(PArray9714, empty_Array, empty_Array, PThreadedCode9715, 2, PSend9717, self);
    
    MethodClosure MC_SMB_stdout_ = new_MethodClosure((Method)PMethod9713, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stdout_, MC_SMB_stdout_);
}


static void init_class_SMB_stderr_() {
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9719 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend9721 = new_Send((Optr)self, SMB_stderr, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9722 = new_Send((Optr)PSend9721, SMB_writeAll_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9720 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9721, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9722, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9718 = new_Method_with(PArray9719, empty_Array, empty_Array, PThreadedCode9720, 2, PSend9722, self);
    
    MethodClosure MC_SMB_stderr_ = new_MethodClosure((Method)PMethod9718, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stderr_, MC_SMB_stderr_);
}


static void init_class_SMB_stdout() {
    Symbol SMB_stdout = new_Symbol(L"stdout");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9725 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stdout, (Optr)SMB_IO_minus_File);
    Array PArray9724 = new_Array_with(1, (Optr)PAnnotation9725);
    Array PThreadedCode9726 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9723 = new_NativeMethod_with(empty_Array, empty_Array, PArray9724, PThreadedCode9726, 1, self);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PNativeMethod9723, HEADER(IO_File_Class));
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