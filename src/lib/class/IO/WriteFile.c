#include <lib/class/IO/WriteFile.h>


Optr layout_IO_WriteFile_Class_class;


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9540 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_lf, (Optr)SMB_IO_minus_File);
    Array PArray9539 = new_Array_with(1, (Optr)PAnnotation9540);
    // lf. 
    Send PSend9542 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9543 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9542);
    Array PThreadedCode9541 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9542, (Optr)&t_send1, (Optr)PSend9543, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9538 = new_NativeMethod_with(empty_Array, empty_Array, PArray9539, PThreadedCode9541, 2, PSend9543, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PNativeMethod9538, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray9545 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9547 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_write_, (Optr)SMB_IO_minus_File);
    Array PArray9546 = new_Array_with(1, (Optr)PAnnotation9547);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9549 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9548 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9549, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9544 = new_NativeMethod_with(PArray9545, empty_Array, PArray9546, PThreadedCode9548, 2, PSend9549, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PNativeMethod9544, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_writeAll_() {
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9551 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9553 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_writeAll_, (Optr)SMB_IO_minus_File);
    Array PArray9552 = new_Array_with(1, (Optr)PAnnotation9553);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9555 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9554 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9555, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9550 = new_NativeMethod_with(PArray9551, empty_Array, PArray9552, PThreadedCode9554, 2, PSend9555, self);
    
    MethodClosure MC_SMB_writeAll_ = new_MethodClosure((Method)PNativeMethod9550, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_writeAll_, MC_SMB_writeAll_);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend9558 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9559 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9558);
    Array PThreadedCode9557 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9558, (Optr)&t_send1, (Optr)PSend9559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9556 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9557, 2, PSend9559, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod9556, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_space, MC_SMB_space);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9561 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9563 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9564 = new_Send((Optr)self, SMB_writeAll_, 1, (Optr)PSend9563);
    Array PThreadedCode9562 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend9563, (Optr)&t_send1, (Optr)PSend9564, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9560 = new_Method_with(PArray9561, empty_Array, empty_Array, PThreadedCode9562, 2, PSend9564, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod9560, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9567 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_flush, (Optr)SMB_IO_minus_File);
    Array PArray9566 = new_Array_with(1, (Optr)PAnnotation9567);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9569 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9568 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9569, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9565 = new_NativeMethod_with(empty_Array, empty_Array, PArray9566, PThreadedCode9568, 2, PSend9569, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PNativeMethod9565, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9572 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9573 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9572);
    Array PThreadedCode9571 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9572, (Optr)&t_send1, (Optr)PSend9573, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9570 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9571, 2, PSend9573, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod9570, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_tab, MC_SMB_tab);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9575 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_writeOpen_ = new_Symbol(L"writeOpen:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9577 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_writeOpen_, (Optr)SMB_IO_minus_File);
    Array PArray9576 = new_Array_with(1, (Optr)PAnnotation9577);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9579 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9578 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9579, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9574 = new_NativeMethod_with(PArray9575, empty_Array, PArray9576, PThreadedCode9578, 2, PSend9579, self);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PNativeMethod9574, HEADER(IO_WriteFile_Class));
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