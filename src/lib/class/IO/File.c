#include <lib/class/IO/File.h>


Optr layout_IO_File_Class_class;


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9464 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_close, (Optr)SMB_IO_minus_File);
    Array PArray9463 = new_Array_with(1, (Optr)PAnnotation9464);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9466 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9465 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9466, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9462 = new_NativeMethod_with(empty_Array, empty_Array, PArray9463, PThreadedCode9465, 2, PSend9466, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PNativeMethod9462, IO_File_Class);
    store_method(IO_File_Class, SMB_close, MC_SMB_close);
}


static void init_class_SMB_stderr() {
    Symbol SMB_stderr = new_Symbol(L"stderr");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9469 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stderr, (Optr)SMB_IO_minus_File);
    Array PArray9468 = new_Array_with(1, (Optr)PAnnotation9469);
    Array PThreadedCode9470 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9467 = new_NativeMethod_with(empty_Array, empty_Array, PArray9468, PThreadedCode9470, 1, self);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PNativeMethod9467, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stderr, MC_SMB_stderr);
}


static void init_class_SMB_stdin() {
    Symbol SMB_stdin = new_Symbol(L"stdin");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9473 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stdin, (Optr)SMB_IO_minus_File);
    Array PArray9472 = new_Array_with(1, (Optr)PAnnotation9473);
    Array PThreadedCode9474 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9471 = new_NativeMethod_with(empty_Array, empty_Array, PArray9472, PThreadedCode9474, 1, self);
    
    MethodClosure MC_SMB_stdin = new_MethodClosure((Method)PNativeMethod9471, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stdin, MC_SMB_stdin);
}


static void init_class_SMB_stdout_() {
    Symbol SMB_stdout_ = new_Symbol(L"stdout:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9476 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend9478 = new_Send((Optr)self, SMB_stdout, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9479 = new_Send((Optr)PSend9478, SMB_writeAll_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9477 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9478, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9479, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9475 = new_Method_with(PArray9476, empty_Array, empty_Array, PThreadedCode9477, 2, PSend9479, self);
    
    MethodClosure MC_SMB_stdout_ = new_MethodClosure((Method)PMethod9475, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stdout_, MC_SMB_stdout_);
}


static void init_class_SMB_stderr_() {
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9481 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend9483 = new_Send((Optr)self, SMB_stderr, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9484 = new_Send((Optr)PSend9483, SMB_writeAll_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9482 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9483, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9484, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9480 = new_Method_with(PArray9481, empty_Array, empty_Array, PThreadedCode9482, 2, PSend9484, self);
    
    MethodClosure MC_SMB_stderr_ = new_MethodClosure((Method)PMethod9480, HEADER(IO_File_Class));
    store_method(HEADER(IO_File_Class), SMB_stderr_, MC_SMB_stderr_);
}


static void init_class_SMB_stdout() {
    Symbol SMB_stdout = new_Symbol(L"stdout");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9487 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stdout, (Optr)SMB_IO_minus_File);
    Array PArray9486 = new_Array_with(1, (Optr)PAnnotation9487);
    Array PThreadedCode9488 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9485 = new_NativeMethod_with(empty_Array, empty_Array, PArray9486, PThreadedCode9488, 1, self);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PNativeMethod9485, HEADER(IO_File_Class));
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