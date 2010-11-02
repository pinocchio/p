#include <lib/class/Kernel/Layout/IntLayout.h>


Optr layout_Kernel_Layout_IntLayout_Class_class;


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray5178 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode5179 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod5177 = new_Method_with(PArray5178, empty_Array, empty_Array, PThreadedCode5179, 1, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod5177, IntLayout_Class);
    store_method(IntLayout_Class, SMB_do_, MC_SMB_do_);
}

void init_Kernel_Layout_PIntLayout_layout() {
    layout_Kernel_Layout_IntLayout_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Layout_IntLayout_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Layout_IntLayout_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Layout_IntLayout_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Layout_IntLayout_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Layout_IntLayout_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_IntLayout = new_Symbol(L"IntLayout");
    Class_set_superclass(IntLayout_Class, Kernel_Layout_Layout_Class);
    IntLayout_Class->layout = empty_object_layout;
    HEADER(IntLayout_Class)->layout = layout_Kernel_Layout_IntLayout_Class_class;
    IntLayout_Class->name = SMB_IntLayout;
    
}

void init_Kernel_Layout_PIntLayout_methods() {
    init_SMB_do_();
    
}