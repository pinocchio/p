#include <lib/class/Shell/ReadLine/EndLink.h>


Optr layout_Shell_ReadLine_EndLink_Class_class;
Optr slot_Shell_ReadLine_EndLink_previous;
Optr layout_Shell_ReadLine_EndLink;


static void init_SMB_previous_() {
    Symbol SMB_previous_ = new_Symbol(L"previous:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray18291 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign18293 = new_Assign((Optr)slot_Shell_ReadLine_EndLink_previous, (Optr)VAR_anObject_0_0);
    Array PThreadedCode18292 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign18293, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18290 = new_Method_with(PArray18291, empty_Array, empty_Array, PThreadedCode18292, 2, PAssign18293, self);
    
    MethodClosure MC_SMB_previous_ = new_MethodClosure((Method)PMethod18290, Shell_ReadLine_EndLink_Class);
    store_method(Shell_ReadLine_EndLink_Class, SMB_previous_, MC_SMB_previous_);
}


static void init_SMB_previous() {
    Symbol SMB_previous = new_Symbol(L"previous");
    Array PThreadedCode18295 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_EndLink_previous, (Optr)&t_method_return);
    Method PMethod18294 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18295, 1, slot_Shell_ReadLine_EndLink_previous);
    
    MethodClosure MC_SMB_previous = new_MethodClosure((Method)PMethod18294, Shell_ReadLine_EndLink_Class);
    store_method(Shell_ReadLine_EndLink_Class, SMB_previous, MC_SMB_previous);
}

void init_Shell_ReadLine_PEndLink_layout() {
    layout_Shell_ReadLine_EndLink_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_EndLink_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_EndLink_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_EndLink_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_EndLink_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_EndLink_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_EndLink = new_Symbol(L"EndLink");
    slot_Shell_ReadLine_EndLink_previous = (Optr)new_Slot(0, L"previous");
    layout_Shell_ReadLine_EndLink = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Shell_ReadLine_EndLink)->values[0] = slot_Shell_ReadLine_EndLink_previous; // previous 
    Shell_ReadLine_EndLink_Class = (Class)new_Class(Shell_ReadLine_AbstractLink_Class, layout_Shell_ReadLine_EndLink_Class_class);
    Shell_ReadLine_EndLink_Class->layout = layout_Shell_ReadLine_EndLink;
    Shell_ReadLine_EndLink_Class->name = SMB_EndLink;
    
}

void init_Shell_ReadLine_PEndLink_methods() {
    init_SMB_previous_();
    init_SMB_previous();
    
}