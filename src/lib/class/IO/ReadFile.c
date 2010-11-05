#include <lib/class/IO/ReadFile.h>


Optr layout_IO_ReadFile_Class_class;


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9533 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readLine, (Optr)SMB_IO_minus_File);
    Array PArray9532 = new_Array_with(1, (Optr)PAnnotation9533);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9535 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9534 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9535, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9531 = new_NativeMethod_with(empty_Array, empty_Array, PArray9532, PThreadedCode9534, 2, PSend9535, self);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PNativeMethod9531, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_readAll() {
    Symbol SMB_readAll = new_Symbol(L"readAll");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9538 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readAll, (Optr)SMB_IO_minus_File);
    Array PArray9537 = new_Array_with(1, (Optr)PAnnotation9538);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9540 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9539 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9540, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9536 = new_NativeMethod_with(empty_Array, empty_Array, PArray9537, PThreadedCode9539, 2, PSend9540, self);
    
    MethodClosure MC_SMB_readAll = new_MethodClosure((Method)PNativeMethod9536, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_readAll, MC_SMB_readAll);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9543 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_atEnd, (Optr)SMB_IO_minus_File);
    Array PArray9542 = new_Array_with(1, (Optr)PAnnotation9543);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9545 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9544 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9545, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9541 = new_NativeMethod_with(empty_Array, empty_Array, PArray9542, PThreadedCode9544, 2, PSend9545, self);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PNativeMethod9541, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9548 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_size, (Optr)SMB_IO_minus_File);
    Array PArray9547 = new_Array_with(1, (Optr)PAnnotation9548);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9550 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9549 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9550, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9546 = new_NativeMethod_with(empty_Array, empty_Array, PArray9547, PThreadedCode9549, 2, PSend9550, self);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PNativeMethod9546, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_immediate() {
    Symbol SMB_immediate = new_Symbol(L"immediate");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9553 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_immediate, (Optr)SMB_IO_minus_File);
    Array PArray9552 = new_Array_with(1, (Optr)PAnnotation9553);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9555 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9554 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9555, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9551 = new_NativeMethod_with(empty_Array, empty_Array, PArray9552, PThreadedCode9554, 2, PSend9555, self);
    
    MethodClosure MC_SMB_immediate = new_MethodClosure((Method)PNativeMethod9551, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_immediate, MC_SMB_immediate);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9558 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_read, (Optr)SMB_IO_minus_File);
    Array PArray9557 = new_Array_with(1, (Optr)PAnnotation9558);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9560 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9559 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9560, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9556 = new_NativeMethod_with(empty_Array, empty_Array, PArray9557, PThreadedCode9559, 2, PSend9560, self);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PNativeMethod9556, IO_ReadFile_Class);
    store_method(IO_ReadFile_Class, SMB_read, MC_SMB_read);
}


static void init_class_SMB_readAllFrom_() {
    Symbol SMB_readAllFrom_ = new_Symbol(L"readAllFrom:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9562 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Variable VAR_file_0_1 = new_Variable_named(L"file", 0);
    Variable VAR_contents_0_2 = new_Variable_named(L"contents", 0);
    Array PArray9563 = new_Array_with(2, (Optr)VAR_file_0_1, (Optr)VAR_contents_0_2);
    Symbol SMB_open_ = new_Symbol(L"open:");
    // open:. 
    Send PSend9568 = new_Send((Optr)self, SMB_open_, 1, (Optr)VAR_filename_0_0);
    Assign PAssign9567 = new_Assign((Optr)VAR_file_0_1, (Optr)PSend9568);
    Symbol SMB_readAll = new_Symbol(L"readAll");
    // readAll. 
    Send PSend9570 = new_Send((Optr)VAR_file_0_1, SMB_readAll, 0);
    Assign PAssign9569 = new_Assign((Optr)VAR_contents_0_2, (Optr)PSend9570);
    Array PThreadedCode9566 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign9567, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_filename_0_0, (Optr)&t_send1, (Optr)PSend9568, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9569, (Optr)&t_push_variable, (Optr)VAR_file_0_1, (Optr)&t_send0, (Optr)PSend9570, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9565 = new_Block_with(empty_Array, empty_Array, PThreadedCode9566, 2, PAssign9567, PAssign9569);
    Symbol SMB_close = new_Symbol(L"close");
    // close. 
    Send PSend9573 = new_Send((Optr)VAR_file_0_1, SMB_close, 0);
    Array PThreadedCode9572 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_variable, (Optr)VAR_file_0_1, (Optr)&t_send0, (Optr)PSend9573, (Optr)&t_block_return);
    Block PBlock9571 = new_Block_with(empty_Array, empty_Array, PThreadedCode9572, 1, PSend9573);
    Symbol SMB_ensure_ = new_Symbol(L"ensure:");
    // ensure:. 
    Send PSend9574 = new_Send((Optr)PBlock9565, SMB_ensure_, 1, (Optr)PBlock9571);
    Array PThreadedCode9564 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_closure, (Optr)PBlock9565, (Optr)&t_push_closure, (Optr)PBlock9571, (Optr)&t_send1, (Optr)PSend9574, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_contents_0_2, (Optr)&t_method_return);
    Method PMethod9561 = new_Method_with(PArray9562, PArray9563, empty_Array, PThreadedCode9564, 2, PSend9574, VAR_contents_0_2);
    
    MethodClosure MC_SMB_readAllFrom_ = new_MethodClosure((Method)PMethod9561, HEADER(IO_ReadFile_Class));
    store_method(HEADER(IO_ReadFile_Class), SMB_readAllFrom_, MC_SMB_readAllFrom_);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9576 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_readOpen_ = new_Symbol(L"readOpen:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9578 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_readOpen_, (Optr)SMB_IO_minus_File);
    Array PArray9577 = new_Array_with(1, (Optr)PAnnotation9578);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9580 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9579 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9580, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9575 = new_NativeMethod_with(PArray9576, empty_Array, PArray9577, PThreadedCode9579, 2, PSend9580, self);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PNativeMethod9575, HEADER(IO_ReadFile_Class));
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