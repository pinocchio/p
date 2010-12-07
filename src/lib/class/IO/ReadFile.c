#include <lib/class/IO/ReadFile.h>


Optr layout_IO_ReadFile_Class_class;


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9803 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readLine, (Optr)SMB_IO_minus_File);
    Array PArray9802 = new_Array_with(1, (Optr)PAnnotation9803);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9805 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9804 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9805, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9801 = new_NativeMethod_with(empty_Array, empty_Array, PArray9802, PThreadedCode9804, 2, PSend9805, self);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PNativeMethod9801, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_readAll() {
    Symbol SMB_readAll = new_Symbol(L"readAll");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9808 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readAll, (Optr)SMB_IO_minus_File);
    Array PArray9807 = new_Array_with(1, (Optr)PAnnotation9808);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9810 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9809 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9810, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9806 = new_NativeMethod_with(empty_Array, empty_Array, PArray9807, PThreadedCode9809, 2, PSend9810, self);
    
    MethodClosure MC_SMB_readAll = new_MethodClosure((Method)PNativeMethod9806, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_readAll, MC_SMB_readAll);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9813 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_atEnd, (Optr)SMB_IO_minus_File);
    Array PArray9812 = new_Array_with(1, (Optr)PAnnotation9813);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9815 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9814 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9815, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9811 = new_NativeMethod_with(empty_Array, empty_Array, PArray9812, PThreadedCode9814, 2, PSend9815, self);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PNativeMethod9811, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9818 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_size, (Optr)SMB_IO_minus_File);
    Array PArray9817 = new_Array_with(1, (Optr)PAnnotation9818);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9820 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9819 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9820, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9816 = new_NativeMethod_with(empty_Array, empty_Array, PArray9817, PThreadedCode9819, 2, PSend9820, self);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PNativeMethod9816, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_immediate() {
    Symbol SMB_immediate = new_Symbol(L"immediate");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9823 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_immediate, (Optr)SMB_IO_minus_File);
    Array PArray9822 = new_Array_with(1, (Optr)PAnnotation9823);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9825 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9824 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9825, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9821 = new_NativeMethod_with(empty_Array, empty_Array, PArray9822, PThreadedCode9824, 2, PSend9825, self);
    
    MethodClosure MC_SMB_immediate = new_MethodClosure((Method)PNativeMethod9821, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_immediate, MC_SMB_immediate);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9828 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_read, (Optr)SMB_IO_minus_File);
    Array PArray9827 = new_Array_with(1, (Optr)PAnnotation9828);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9830 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9829 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9830, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9826 = new_NativeMethod_with(empty_Array, empty_Array, PArray9827, PThreadedCode9829, 2, PSend9830, self);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PNativeMethod9826, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_read, MC_SMB_read);
}


static void init_class_SMB_readAllFrom_() {
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9832 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Variable VAR_file_0_1 = new_Variable_named(L"file", 0);
    Variable VAR_contents_0_2 = new_Variable_named(L"contents", 0);
    Array PArray9833 = new_Array_with(2, (Optr)VAR_file_0_1, (Optr)VAR_contents_0_2);
    Symbol SMB_open_ = new_Symbol(L"open:");
    // open:. 
    Send PSend9838 = new_Send((Optr)self, SMB_open_, 1, (Optr)VAR_filename_0_0);
    Assign PAssign9837 = new_Assign((Optr)VAR_file_0_1, (Optr)PSend9838);
    Symbol SMB_readAll = new_Symbol(L"readAll");
    // readAll. 
    Send PSend9840 = new_Send((Optr)VAR_file_0_1, SMB_readAll, 0);
    Assign PAssign9839 = new_Assign((Optr)VAR_contents_0_2, (Optr)PSend9840);
    Array PThreadedCode9836 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9837, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend9838, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9839, (Optr)&t_push_variable, (Optr)VAR_file_0_1, (Optr)&t_send0, (Optr)PSend9840, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9835 = new_Block_with(empty_Array, empty_Array, PThreadedCode9836, 2, PAssign9837, PAssign9839);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend9843 = new_Send((Optr)VAR_file_0_1, SMB_close, 0);
    Array PThreadedCode9842 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_file_0_1, (Optr)&t_send0, (Optr)PSend9843, (Optr)&t_block_return);
    Block PBlock9841 = new_Block_with(empty_Array, empty_Array, PThreadedCode9842, 1, PSend9843);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend9844 = new_Send((Optr)PBlock9835, SMB_ensure_, 1, (Optr)PBlock9841);
    Array PThreadedCode9834 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock9835, (Optr)&t_push_closure, (Optr)PBlock9841, (Optr)&t_send1, (Optr)PSend9844, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contents_0_2, (Optr)&t_method_return);
    Method PMethod9831 = new_Method_with(PArray9832, PArray9833, empty_Array, PThreadedCode9834, 2, PSend9844, VAR_contents_0_2);
    
    MethodClosure MC_SMB_readAllFrom_ = new_MethodClosure((Method)PMethod9831, HEADER(IO_ReadFile_Class));
    store_method(HEADER(IO_ReadFile_Class), SMB_readAllFrom_, MC_SMB_readAllFrom_);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9846 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_readOpen_ = new_Symbol(L"readOpen:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9848 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readOpen_, (Optr)SMB_IO_minus_File);
    Array PArray9847 = new_Array_with(1, (Optr)PAnnotation9848);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9850 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9849 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9850, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9845 = new_NativeMethod_with(PArray9846, empty_Array, PArray9847, PThreadedCode9849, 2, PSend9850, self);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PNativeMethod9845, HEADER(IO_ReadFile_Class));
    store_method(HEADER(IO_ReadFile_Class), SMB_open_, MC_SMB_open_);
}

void init_IO_PReadFile_layout() {
    layout_IO_ReadFile_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_ReadFile_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_ReadFile_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_ReadFile_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_ReadFile_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_ReadFile_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ReadFile = new_Symbol(L"ReadFile");
    IO_ReadFile_Class = (Class)new_Class(IO_File_Class, layout_IO_ReadFile_Class_class);
    IO_ReadFile_Class->layout = empty_object_layout;
    IO_ReadFile_Class->name = SMB_ReadFile;
    
}

void init_IO_PReadFile_methods() {
    init_SMB_readLine();
    init_SMB_readAll();
    init_SMB_atEnd();
    init_SMB_size();
    init_SMB_immediate();
    init_SMB_read();
    init_class_SMB_readAllFrom_();
    init_class_SMB_open_();
    
}