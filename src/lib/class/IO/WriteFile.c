#include <lib/class/IO/WriteFile.h>


Optr layout_IO_WriteFile_Class_class;


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9491 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_lf, (Optr)SMB_IO_minus_File);
    Array PArray9490 = new_Array_with(1, (Optr)PAnnotation9491);
    // lf. 
    Send PSend9493 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9494 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9493);
    Array PThreadedCode9492 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9493, (Optr)&t_send1, (Optr)PSend9494, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9489 = new_NativeMethod_with(empty_Array, empty_Array, PArray9490, PThreadedCode9492, 2, PSend9494, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PNativeMethod9489, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray9496 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9498 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_write_, (Optr)SMB_IO_minus_File);
    Array PArray9497 = new_Array_with(1, (Optr)PAnnotation9498);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9500 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9499 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9500, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9495 = new_NativeMethod_with(PArray9496, empty_Array, PArray9497, PThreadedCode9499, 2, PSend9500, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PNativeMethod9495, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_writeAll_() {
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9502 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9504 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_writeAll_, (Optr)SMB_IO_minus_File);
    Array PArray9503 = new_Array_with(1, (Optr)PAnnotation9504);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9506 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9505 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9506, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9501 = new_NativeMethod_with(PArray9502, empty_Array, PArray9503, PThreadedCode9505, 2, PSend9506, self);
    
    MethodClosure MC_SMB_writeAll_ = new_MethodClosure((Method)PNativeMethod9501, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_writeAll_, MC_SMB_writeAll_);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend9509 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9510 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9509);
    Array PThreadedCode9508 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9509, (Optr)&t_send1, (Optr)PSend9510, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9507 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9508, 2, PSend9510, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod9507, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_space, MC_SMB_space);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9512 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9514 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9515 = new_Send((Optr)self, SMB_writeAll_, 1, (Optr)PSend9514);
    Array PThreadedCode9513 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend9514, (Optr)&t_send1, (Optr)PSend9515, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9511 = new_Method_with(PArray9512, empty_Array, empty_Array, PThreadedCode9513, 2, PSend9515, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod9511, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9518 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_flush, (Optr)SMB_IO_minus_File);
    Array PArray9517 = new_Array_with(1, (Optr)PAnnotation9518);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9520 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9519 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9520, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9516 = new_NativeMethod_with(empty_Array, empty_Array, PArray9517, PThreadedCode9519, 2, PSend9520, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PNativeMethod9516, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9523 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9524 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9523);
    Array PThreadedCode9522 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9523, (Optr)&t_send1, (Optr)PSend9524, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9521 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9522, 2, PSend9524, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod9521, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_tab, MC_SMB_tab);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9526 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_writeOpen_ = new_Symbol(L"writeOpen:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9528 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_writeOpen_, (Optr)SMB_IO_minus_File);
    Array PArray9527 = new_Array_with(1, (Optr)PAnnotation9528);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9530 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9529 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9530, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9525 = new_NativeMethod_with(PArray9526, empty_Array, PArray9527, PThreadedCode9529, 2, PSend9530, self);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PNativeMethod9525, HEADER(IO_WriteFile_Class));
    store_method(HEADER(IO_WriteFile_Class), SMB_open_, MC_SMB_open_);
}

void init_IO_PWriteFile_layout() {
    layout_IO_WriteFile_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_WriteFile_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_WriteFile_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_WriteFile_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_WriteFile_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_WriteFile_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_WriteFile = new_Symbol(L"WriteFile");
    IO_WriteFile_Class = (Class)new_Class(IO_File_Class, layout_IO_WriteFile_Class_class);
    IO_WriteFile_Class->layout = empty_object_layout;
    IO_WriteFile_Class->name = SMB_WriteFile;
    
}

void init_IO_PWriteFile_methods() {
    init_SMB_lf();
    init_SMB_write_();
    init_SMB_writeAll_();
    init_SMB_space();
    init_SMB__shiftLeft_();
    init_SMB_flush();
    init_SMB_tab();
    init_class_SMB_open_();
    
}