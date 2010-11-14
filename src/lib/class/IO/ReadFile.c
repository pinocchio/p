#include <lib/class/IO/ReadFile.h>


Optr layout_IO_ReadFile_Class_class;


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9771 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readLine, (Optr)SMB_IO_minus_File);
    Array PArray9770 = new_Array_with(1, (Optr)PAnnotation9771);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9773 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9772 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9773, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9769 = new_NativeMethod_with(empty_Array, empty_Array, PArray9770, PThreadedCode9772, 2, PSend9773, self);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PNativeMethod9769, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_readAll() {
    Symbol SMB_readAll = new_Symbol(L"readAll");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9776 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readAll, (Optr)SMB_IO_minus_File);
    Array PArray9775 = new_Array_with(1, (Optr)PAnnotation9776);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9778 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9777 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9778, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9774 = new_NativeMethod_with(empty_Array, empty_Array, PArray9775, PThreadedCode9777, 2, PSend9778, self);
    
    MethodClosure MC_SMB_readAll = new_MethodClosure((Method)PNativeMethod9774, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_readAll, MC_SMB_readAll);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9781 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_atEnd, (Optr)SMB_IO_minus_File);
    Array PArray9780 = new_Array_with(1, (Optr)PAnnotation9781);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9783 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9782 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9783, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9779 = new_NativeMethod_with(empty_Array, empty_Array, PArray9780, PThreadedCode9782, 2, PSend9783, self);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PNativeMethod9779, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9786 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_size, (Optr)SMB_IO_minus_File);
    Array PArray9785 = new_Array_with(1, (Optr)PAnnotation9786);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9788 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9787 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9788, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9784 = new_NativeMethod_with(empty_Array, empty_Array, PArray9785, PThreadedCode9787, 2, PSend9788, self);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PNativeMethod9784, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_immediate() {
    Symbol SMB_immediate = new_Symbol(L"immediate");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9791 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_immediate, (Optr)SMB_IO_minus_File);
    Array PArray9790 = new_Array_with(1, (Optr)PAnnotation9791);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9793 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9792 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9793, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9789 = new_NativeMethod_with(empty_Array, empty_Array, PArray9790, PThreadedCode9792, 2, PSend9793, self);
    
    MethodClosure MC_SMB_immediate = new_MethodClosure((Method)PNativeMethod9789, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_immediate, MC_SMB_immediate);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9796 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_read, (Optr)SMB_IO_minus_File);
    Array PArray9795 = new_Array_with(1, (Optr)PAnnotation9796);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9798 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9797 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9798, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9794 = new_NativeMethod_with(empty_Array, empty_Array, PArray9795, PThreadedCode9797, 2, PSend9798, self);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PNativeMethod9794, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_read, MC_SMB_read);
}


static void init_class_SMB_readAllFrom_() {
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9800 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Variable VAR_file_0_1 = new_Variable_named(L"file", 0);
    Variable VAR_contents_0_2 = new_Variable_named(L"contents", 0);
    Array PArray9801 = new_Array_with(2, (Optr)VAR_file_0_1, (Optr)VAR_contents_0_2);
    Symbol SMB_open_ = new_Symbol(L"open:");
    // open:. 
    Send PSend9806 = new_Send((Optr)self, SMB_open_, 1, (Optr)VAR_filename_0_0);
    Assign PAssign9805 = new_Assign((Optr)VAR_file_0_1, (Optr)PSend9806);
    Symbol SMB_readAll = new_Symbol(L"readAll");
    // readAll. 
    Send PSend9808 = new_Send((Optr)VAR_file_0_1, SMB_readAll, 0);
    Assign PAssign9807 = new_Assign((Optr)VAR_contents_0_2, (Optr)PSend9808);
    Array PThreadedCode9804 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9805, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend9806, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9807, (Optr)&t_push_variable, (Optr)VAR_file_0_1, (Optr)&t_send0, (Optr)PSend9808, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9803 = new_Block_with(empty_Array, empty_Array, PThreadedCode9804, 2, PAssign9805, PAssign9807);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend9811 = new_Send((Optr)VAR_file_0_1, SMB_close, 0);
    Array PThreadedCode9810 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_file_0_1, (Optr)&t_send0, (Optr)PSend9811, (Optr)&t_block_return);
    Block PBlock9809 = new_Block_with(empty_Array, empty_Array, PThreadedCode9810, 1, PSend9811);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend9812 = new_Send((Optr)PBlock9803, SMB_ensure_, 1, (Optr)PBlock9809);
    Array PThreadedCode9802 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock9803, (Optr)&t_push_closure, (Optr)PBlock9809, (Optr)&t_send1, (Optr)PSend9812, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contents_0_2, (Optr)&t_method_return);
    Method PMethod9799 = new_Method_with(PArray9800, PArray9801, empty_Array, PThreadedCode9802, 2, PSend9812, VAR_contents_0_2);
    
    MethodClosure MC_SMB_readAllFrom_ = new_MethodClosure((Method)PMethod9799, HEADER(IO_ReadFile_Class));
    store_method(HEADER(IO_ReadFile_Class), SMB_readAllFrom_, MC_SMB_readAllFrom_);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9814 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_readOpen_ = new_Symbol(L"readOpen:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9816 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readOpen_, (Optr)SMB_IO_minus_File);
    Array PArray9815 = new_Array_with(1, (Optr)PAnnotation9816);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9818 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9817 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9818, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9813 = new_NativeMethod_with(PArray9814, empty_Array, PArray9815, PThreadedCode9817, 2, PSend9818, self);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PNativeMethod9813, HEADER(IO_ReadFile_Class));
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