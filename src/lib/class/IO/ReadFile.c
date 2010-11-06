#include <lib/class/IO/ReadFile.h>


Optr layout_IO_ReadFile_Class_class;


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9582 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readLine, (Optr)SMB_IO_minus_File);
    Array PArray9581 = new_Array_with(1, (Optr)PAnnotation9582);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9584 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9583 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9584, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9580 = new_NativeMethod_with(empty_Array, empty_Array, PArray9581, PThreadedCode9583, 2, PSend9584, self);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PNativeMethod9580, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_readAll() {
    Symbol SMB_readAll = new_Symbol(L"readAll");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9587 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readAll, (Optr)SMB_IO_minus_File);
    Array PArray9586 = new_Array_with(1, (Optr)PAnnotation9587);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9589 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9588 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9589, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9585 = new_NativeMethod_with(empty_Array, empty_Array, PArray9586, PThreadedCode9588, 2, PSend9589, self);
    
    MethodClosure MC_SMB_readAll = new_MethodClosure((Method)PNativeMethod9585, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_readAll, MC_SMB_readAll);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9592 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_atEnd, (Optr)SMB_IO_minus_File);
    Array PArray9591 = new_Array_with(1, (Optr)PAnnotation9592);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9594 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9593 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9594, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9590 = new_NativeMethod_with(empty_Array, empty_Array, PArray9591, PThreadedCode9593, 2, PSend9594, self);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PNativeMethod9590, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9597 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_size, (Optr)SMB_IO_minus_File);
    Array PArray9596 = new_Array_with(1, (Optr)PAnnotation9597);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9599 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9598 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9599, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9595 = new_NativeMethod_with(empty_Array, empty_Array, PArray9596, PThreadedCode9598, 2, PSend9599, self);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PNativeMethod9595, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_immediate() {
    Symbol SMB_immediate = new_Symbol(L"immediate");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9602 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_immediate, (Optr)SMB_IO_minus_File);
    Array PArray9601 = new_Array_with(1, (Optr)PAnnotation9602);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9604 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9603 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9604, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9600 = new_NativeMethod_with(empty_Array, empty_Array, PArray9601, PThreadedCode9603, 2, PSend9604, self);
    
    MethodClosure MC_SMB_immediate = new_MethodClosure((Method)PNativeMethod9600, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_immediate, MC_SMB_immediate);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9607 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_read, (Optr)SMB_IO_minus_File);
    Array PArray9606 = new_Array_with(1, (Optr)PAnnotation9607);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9609 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9608 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9609, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9605 = new_NativeMethod_with(empty_Array, empty_Array, PArray9606, PThreadedCode9608, 2, PSend9609, self);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PNativeMethod9605, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_read, MC_SMB_read);
}


static void init_class_SMB_readAllFrom_() {
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9611 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Variable VAR_file_0_1 = new_Variable_named(L"file", 0);
    Variable VAR_contents_0_2 = new_Variable_named(L"contents", 0);
    Array PArray9612 = new_Array_with(2, (Optr)VAR_file_0_1, (Optr)VAR_contents_0_2);
    Symbol SMB_open_ = new_Symbol(L"open:");
    // open:. 
    Send PSend9617 = new_Send((Optr)self, SMB_open_, 1, (Optr)VAR_filename_0_0);
    Assign PAssign9616 = new_Assign((Optr)VAR_file_0_1, (Optr)PSend9617);
    Symbol SMB_readAll = new_Symbol(L"readAll");
    // readAll. 
    Send PSend9619 = new_Send((Optr)VAR_file_0_1, SMB_readAll, 0);
    Assign PAssign9618 = new_Assign((Optr)VAR_contents_0_2, (Optr)PSend9619);
    Array PThreadedCode9615 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9616, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend9617, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9618, (Optr)&t_push_variable, (Optr)VAR_file_0_1, (Optr)&t_send0, (Optr)PSend9619, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9614 = new_Block_with(empty_Array, empty_Array, PThreadedCode9615, 2, PAssign9616, PAssign9618);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend9622 = new_Send((Optr)VAR_file_0_1, SMB_close, 0);
    Array PThreadedCode9621 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_file_0_1, (Optr)&t_send0, (Optr)PSend9622, (Optr)&t_block_return);
    Block PBlock9620 = new_Block_with(empty_Array, empty_Array, PThreadedCode9621, 1, PSend9622);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend9623 = new_Send((Optr)PBlock9614, SMB_ensure_, 1, (Optr)PBlock9620);
    Array PThreadedCode9613 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock9614, (Optr)&t_push_closure, (Optr)PBlock9620, (Optr)&t_send1, (Optr)PSend9623, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contents_0_2, (Optr)&t_method_return);
    Method PMethod9610 = new_Method_with(PArray9611, PArray9612, empty_Array, PThreadedCode9613, 2, PSend9623, VAR_contents_0_2);
    
    MethodClosure MC_SMB_readAllFrom_ = new_MethodClosure((Method)PMethod9610, HEADER(IO_ReadFile_Class));
    store_method(HEADER(IO_ReadFile_Class), SMB_readAllFrom_, MC_SMB_readAllFrom_);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9625 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_readOpen_ = new_Symbol(L"readOpen:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9627 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readOpen_, (Optr)SMB_IO_minus_File);
    Array PArray9626 = new_Array_with(1, (Optr)PAnnotation9627);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9629 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9628 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9629, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9624 = new_NativeMethod_with(PArray9625, empty_Array, PArray9626, PThreadedCode9628, 2, PSend9629, self);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PNativeMethod9624, HEADER(IO_ReadFile_Class));
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