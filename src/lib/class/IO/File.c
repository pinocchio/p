#include <lib/class/IO/File.h>


Optr layout_IO_File_Class_class;


static void init_SMB_close() {
    Symbol SMB_close = new_Symbol(L"close");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
<<<<<<< HEAD
    Annotation PAnnotation9734 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_close, (Optr)SMB_IO_minus_File);
    Array PArray9733 = new_Array_with(1, (Optr)PAnnotation9734);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9736 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9735 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9736, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9732 = new_NativeMethod_with(empty_Array, empty_Array, PArray9733, PThreadedCode9735, 2, PSend9736, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PNativeMethod9732, IO_File_Class);
=======
    Annotation PAnnotation9700 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_close, (Optr)SMB_IO_minus_File);
    Array PArray9699 = new_Array_with(1, (Optr)PAnnotation9700);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9702 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9701 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9702, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9698 = new_NativeMethod_with(empty_Array, empty_Array, PArray9699, PThreadedCode9701, 2, PSend9702, self);
    
    MethodClosure MC_SMB_close = new_MethodClosure((Method)PNativeMethod9698, IO_File_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(IO_File_Class, SMB_close, MC_SMB_close);
}


static void init_class_SMB_stderr() {
    Symbol SMB_stderr = new_Symbol(L"stderr");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
<<<<<<< HEAD
    Annotation PAnnotation9739 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stderr, (Optr)SMB_IO_minus_File);
    Array PArray9738 = new_Array_with(1, (Optr)PAnnotation9739);
    Array PThreadedCode9740 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9737 = new_NativeMethod_with(empty_Array, empty_Array, PArray9738, PThreadedCode9740, 1, self);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PNativeMethod9737, HEADER(IO_File_Class));
=======
    Annotation PAnnotation9705 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stderr, (Optr)SMB_IO_minus_File);
    Array PArray9704 = new_Array_with(1, (Optr)PAnnotation9705);
    Array PThreadedCode9706 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9703 = new_NativeMethod_with(empty_Array, empty_Array, PArray9704, PThreadedCode9706, 1, self);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PNativeMethod9703, HEADER(IO_File_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(IO_File_Class), SMB_stderr, MC_SMB_stderr);
}


static void init_class_SMB_stdin() {
    Symbol SMB_stdin = new_Symbol(L"stdin");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
<<<<<<< HEAD
    Annotation PAnnotation9743 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stdin, (Optr)SMB_IO_minus_File);
    Array PArray9742 = new_Array_with(1, (Optr)PAnnotation9743);
    Array PThreadedCode9744 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9741 = new_NativeMethod_with(empty_Array, empty_Array, PArray9742, PThreadedCode9744, 1, self);
    
    MethodClosure MC_SMB_stdin = new_MethodClosure((Method)PNativeMethod9741, HEADER(IO_File_Class));
=======
    Annotation PAnnotation9709 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stdin, (Optr)SMB_IO_minus_File);
    Array PArray9708 = new_Array_with(1, (Optr)PAnnotation9709);
    Array PThreadedCode9710 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9707 = new_NativeMethod_with(empty_Array, empty_Array, PArray9708, PThreadedCode9710, 1, self);
    
    MethodClosure MC_SMB_stdin = new_MethodClosure((Method)PNativeMethod9707, HEADER(IO_File_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(IO_File_Class), SMB_stdin, MC_SMB_stdin);
}


static void init_class_SMB_stdout_() {
    Symbol SMB_stdout_ = new_Symbol(L"stdout:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray9746 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend9748 = new_Send((Optr)self, SMB_stdout, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9749 = new_Send((Optr)PSend9748, SMB_writeAll_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9747 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9748, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9749, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9745 = new_Method_with(PArray9746, empty_Array, empty_Array, PThreadedCode9747, 2, PSend9749, self);
    
    MethodClosure MC_SMB_stdout_ = new_MethodClosure((Method)PMethod9745, HEADER(IO_File_Class));
=======
    Array PArray9712 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend9714 = new_Send((Optr)self, SMB_stdout, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9715 = new_Send((Optr)PSend9714, SMB_writeAll_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9713 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9714, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9715, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9711 = new_Method_with(PArray9712, empty_Array, empty_Array, PThreadedCode9713, 2, PSend9715, self);
    
    MethodClosure MC_SMB_stdout_ = new_MethodClosure((Method)PMethod9711, HEADER(IO_File_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(IO_File_Class), SMB_stdout_, MC_SMB_stdout_);
}


static void init_class_SMB_stderr_() {
    Symbol SMB_stderr_ = new_Symbol(L"stderr:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
<<<<<<< HEAD
    Array PArray9751 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend9753 = new_Send((Optr)self, SMB_stderr, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9754 = new_Send((Optr)PSend9753, SMB_writeAll_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9752 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9753, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9754, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9750 = new_Method_with(PArray9751, empty_Array, empty_Array, PThreadedCode9752, 2, PSend9754, self);
    
    MethodClosure MC_SMB_stderr_ = new_MethodClosure((Method)PMethod9750, HEADER(IO_File_Class));
=======
    Array PArray9717 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_stderr = new_Symbol(L"stderr");
    // stderr. 
    Send PSend9719 = new_Send((Optr)self, SMB_stderr, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9720 = new_Send((Optr)PSend9719, SMB_writeAll_, 1, (Optr)VAR_aString_0_0);
    Array PThreadedCode9718 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9719, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend9720, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9716 = new_Method_with(PArray9717, empty_Array, empty_Array, PThreadedCode9718, 2, PSend9720, self);
    
    MethodClosure MC_SMB_stderr_ = new_MethodClosure((Method)PMethod9716, HEADER(IO_File_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(IO_File_Class), SMB_stderr_, MC_SMB_stderr_);
}


static void init_class_SMB_stdout() {
    Symbol SMB_stdout = new_Symbol(L"stdout");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
<<<<<<< HEAD
    Annotation PAnnotation9757 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stdout, (Optr)SMB_IO_minus_File);
    Array PArray9756 = new_Array_with(1, (Optr)PAnnotation9757);
    Array PThreadedCode9758 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9755 = new_NativeMethod_with(empty_Array, empty_Array, PArray9756, PThreadedCode9758, 1, self);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PNativeMethod9755, HEADER(IO_File_Class));
=======
    Annotation PAnnotation9723 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_stdout, (Optr)SMB_IO_minus_File);
    Array PArray9722 = new_Array_with(1, (Optr)PAnnotation9723);
    Array PThreadedCode9724 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9721 = new_NativeMethod_with(empty_Array, empty_Array, PArray9722, PThreadedCode9724, 1, self);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PNativeMethod9721, HEADER(IO_File_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
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