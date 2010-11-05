#include <lib/class/Kernel/AST/Info.h>


Optr layout_Kernel_AST_Info_Class_class;
Optr slot_Kernel_AST_Info_sourceFile;
Optr slot_Kernel_AST_Info_line;
Optr slot_Kernel_AST_Info_column;
Optr layout_Kernel_AST_Info;


static void init_SMB_sourceFile_() {
    Symbol SMB_sourceFile_ = new_Symbol(L"sourceFile:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4848 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4850 = new_Assign((Optr)slot_Kernel_AST_Info_sourceFile, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4849 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4850, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4847 = new_Method_with(PArray4848, empty_Array, empty_Array, PThreadedCode4849, 2, PAssign4850, self);
    
    MethodClosure MC_SMB_sourceFile_ = new_MethodClosure((Method)PMethod4847, Info_Class);
    store_method(Info_Class, SMB_sourceFile_, MC_SMB_sourceFile_);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4852 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4854 = new_Assign((Optr)slot_Kernel_AST_Info_column, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4853 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4854, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4851 = new_Method_with(PArray4852, empty_Array, empty_Array, PThreadedCode4853, 2, PAssign4854, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod4851, Info_Class);
    store_method(Info_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray4856 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign4858 = new_Assign((Optr)slot_Kernel_AST_Info_line, (Optr)VAR_anObject_0_0);
    Array PThreadedCode4857 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign4858, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod4855 = new_Method_with(PArray4856, empty_Array, empty_Array, PThreadedCode4857, 2, PAssign4858, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod4855, Info_Class);
    store_method(Info_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Array PThreadedCode4860 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Info_column, (Optr)&t_method_return);
    Method PMethod4859 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4860, 1, slot_Kernel_AST_Info_column);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod4859, Info_Class);
    store_method(Info_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Array PThreadedCode4862 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Info_line, (Optr)&t_method_return);
    Method PMethod4861 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4862, 1, slot_Kernel_AST_Info_line);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod4861, Info_Class);
    store_method(Info_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_sourceFile() {
    Symbol SMB_sourceFile = new_Symbol(L"sourceFile");
    Array PThreadedCode4864 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_AST_Info_sourceFile, (Optr)&t_method_return);
    Method PMethod4863 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode4864, 1, slot_Kernel_AST_Info_sourceFile);
    
    MethodClosure MC_SMB_sourceFile = new_MethodClosure((Method)PMethod4863, Info_Class);
    store_method(Info_Class, SMB_sourceFile, MC_SMB_sourceFile);
}

void init_Kernel_AST_PInfo_layout() {
    layout_Kernel_AST_Info_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_Info_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_Info_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_Info_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_Info_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_Info_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Info = new_Symbol(L"Info");
    slot_Kernel_AST_Info_sourceFile = (Optr)new_Slot(0, L"sourceFile");
    slot_Kernel_AST_Info_line = (Optr)new_Slot(1, L"line");
    slot_Kernel_AST_Info_column = (Optr)new_Slot(2, L"column");
    layout_Kernel_AST_Info = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Kernel_AST_Info)->values[0] = slot_Kernel_AST_Info_sourceFile; // sourceFile 
    ((Array)layout_Kernel_AST_Info)->values[1] = slot_Kernel_AST_Info_line; // line 
    ((Array)layout_Kernel_AST_Info)->values[2] = slot_Kernel_AST_Info_column; // column 
    Info_Class = (Class)new_Class(Object_Class, layout_Kernel_AST_Info_Class_class);
    Info_Class->layout = layout_Kernel_AST_Info;
    Info_Class->name = SMB_Info;
    
}

void init_Kernel_AST_PInfo_methods() {
    init_SMB_sourceFile_();
    init_SMB_column_();
    init_SMB_line_();
    init_SMB_column();
    init_SMB_line();
    init_SMB_sourceFile();
    
}