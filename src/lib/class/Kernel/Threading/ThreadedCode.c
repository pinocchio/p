#include <lib/class/Kernel/Threading/ThreadedCode.h>


Optr layout_Kernel_Threading_ThreadedCode_Class_class;


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray5686 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Array PThreadedCode5687 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod5685 = new_Method_with(PArray5686, empty_Array, empty_Array, PThreadedCode5687, 1, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod5685, ThreadedCode_Class);
    store_method(ThreadedCode_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}

void init_Kernel_Threading_PThreadedCode_layout() {
    layout_Kernel_Threading_ThreadedCode_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Threading_ThreadedCode_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Threading_ThreadedCode_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Threading_ThreadedCode_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Threading_ThreadedCode_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Threading_ThreadedCode_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ThreadedCode = new_Symbol(L"ThreadedCode");
    ThreadedCode_Class = (Class)new_Class(Array_Class, layout_Kernel_Threading_ThreadedCode_Class_class);
    ThreadedCode_Class->layout = empty_array_layout;
    ThreadedCode_Class->name = SMB_ThreadedCode;
    
}

void init_Kernel_Threading_PThreadedCode_methods() {
    init_SMB_inspectChildrenOn_();
    
}