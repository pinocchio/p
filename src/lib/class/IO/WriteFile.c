#include <lib/class/IO/WriteFile.h>


Optr layout_IO_WriteFile_Class_class;


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9761 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_lf, (Optr)SMB_IO_minus_File);
    Array PArray9760 = new_Array_with(1, (Optr)PAnnotation9761);
    // lf. 
    Send PSend9763 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9764 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9763);
    Array PThreadedCode9762 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9763, (Optr)&t_send1, (Optr)PSend9764, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9759 = new_NativeMethod_with(empty_Array, empty_Array, PArray9760, PThreadedCode9762, 2, PSend9764, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PNativeMethod9759, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_aCharacter_0_0 = new_Variable_named(L"aCharacter", 0);
    Array PArray9766 = new_Array_with(1, (Optr)VAR_aCharacter_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9768 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_write_, (Optr)SMB_IO_minus_File);
    Array PArray9767 = new_Array_with(1, (Optr)PAnnotation9768);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9770 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9769 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9770, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9765 = new_NativeMethod_with(PArray9766, empty_Array, PArray9767, PThreadedCode9769, 2, PSend9770, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PNativeMethod9765, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_writeAll_() {
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9772 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9774 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_writeAll_, (Optr)SMB_IO_minus_File);
    Array PArray9773 = new_Array_with(1, (Optr)PAnnotation9774);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9776 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9775 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9776, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9771 = new_NativeMethod_with(PArray9772, empty_Array, PArray9773, PThreadedCode9775, 2, PSend9776, self);
    
    MethodClosure MC_SMB_writeAll_ = new_MethodClosure((Method)PNativeMethod9771, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_writeAll_, MC_SMB_writeAll_);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend9779 = new_Send((Optr)Character_classReference, SMB_space, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9780 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9779);
    Array PThreadedCode9778 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9779, (Optr)&t_send1, (Optr)PSend9780, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9778, 2, PSend9780, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod9777, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_space, MC_SMB_space);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray9782 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9784 = new_Send((Optr)VAR_aString_0_0, SMB_asString, 0);
    Symbol SMB_writeAll_ = new_Symbol(L"writeAll:");
    // writeAll:. 
    Send PSend9785 = new_Send((Optr)self, SMB_writeAll_, 1, (Optr)PSend9784);
    Array PThreadedCode9783 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send0, (Optr)PSend9784, (Optr)&t_send1, (Optr)PSend9785, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9781 = new_Method_with(PArray9782, empty_Array, empty_Array, PThreadedCode9783, 2, PSend9785, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod9781, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9788 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_flush, (Optr)SMB_IO_minus_File);
    Array PArray9787 = new_Array_with(1, (Optr)PAnnotation9788);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9790 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9789 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9790, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9786 = new_NativeMethod_with(empty_Array, empty_Array, PArray9787, PThreadedCode9789, 2, PSend9790, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PNativeMethod9786, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9793 = new_Send((Optr)Character_classReference, SMB_tab, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9794 = new_Send((Optr)self, SMB_write_, 1, (Optr)PSend9793);
    Array PThreadedCode9792 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend9793, (Optr)&t_send1, (Optr)PSend9794, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9791 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9792, 2, PSend9794, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod9791, IO_WriteFile_Class);
    store_method(IO_WriteFile_Class, SMB_tab, MC_SMB_tab);
}


static void init_class_SMB_open_() {
    Symbol SMB_open_ = new_Symbol(L"open:");
    Variable VAR_filename_0_0 = new_Variable_named(L"filename", 0);
    Array PArray9796 = new_Array_with(1, (Optr)VAR_filename_0_0);
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_writeOpen_ = new_Symbol(L"writeOpen:");
    Symbol SMB_IO_minus_File = new_Symbol(L"IO.File");
    Annotation PAnnotation9798 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_writeOpen_, (Optr)SMB_IO_minus_File);
    Array PArray9797 = new_Array_with(1, (Optr)PAnnotation9798);
    Symbol SMB_pinocchioPrimitiveFailed = new_Symbol(L"pinocchioPrimitiveFailed");
    // pinocchioPrimitiveFailed. 
    Send PSend9800 = new_Send((Optr)self, SMB_pinocchioPrimitiveFailed, 0);
    Array PThreadedCode9799 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9800, (Optr)&t_zap, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod9795 = new_NativeMethod_with(PArray9796, empty_Array, PArray9797, PThreadedCode9799, 2, PSend9800, self);
    
    MethodClosure MC_SMB_open_ = new_MethodClosure((Method)PNativeMethod9795, HEADER(IO_WriteFile_Class));
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