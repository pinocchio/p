#include <lib/class/Shell/ReadLine/StartLink.h>


Optr layout_Shell_ReadLine_StartLink_Class_class;
Optr slot_Shell_ReadLine_StartLink_next;
Optr layout_Shell_ReadLine_StartLink;


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Array PThreadedCode18225 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_StartLink_next, (Optr)&t_method_return);
    Method PMethod18224 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18225, 1, slot_Shell_ReadLine_StartLink_next);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod18224, Shell_ReadLine_StartLink_Class);
    store_method(Shell_ReadLine_StartLink_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_next_() {
    Symbol SMB_next_ = new_Symbol(L"next:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray18227 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign18229 = new_Assign((Optr)slot_Shell_ReadLine_StartLink_next, (Optr)VAR_anObject_0_0);
    Symbol SMB_previous_ = new_Symbol(L"previous:");
    // previous:. 
    Send PSend18230 = new_Send((Optr)VAR_anObject_0_0, SMB_previous_, 1, (Optr)self);
    Array PThreadedCode18228 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign18229, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18230, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18226 = new_Method_with(PArray18227, empty_Array, empty_Array, PThreadedCode18228, 3, PAssign18229, PSend18230, self);
    
    MethodClosure MC_SMB_next_ = new_MethodClosure((Method)PMethod18226, Shell_ReadLine_StartLink_Class);
    store_method(Shell_ReadLine_StartLink_Class, SMB_next_, MC_SMB_next_);
}


static void init_SMB_previous() {
    Symbol SMB_previous = new_Symbol(L"previous");
    Array PThreadedCode18232 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18231 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18232, 1, self);
    
    MethodClosure MC_SMB_previous = new_MethodClosure((Method)PMethod18231, Shell_ReadLine_StartLink_Class);
    store_method(Shell_ReadLine_StartLink_Class, SMB_previous, MC_SMB_previous);
}

void init_Shell_ReadLine_PStartLink_layout() {
    layout_Shell_ReadLine_StartLink_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_StartLink_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_StartLink_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_StartLink_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_StartLink_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_StartLink_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_StartLink = new_Symbol(L"StartLink");
    slot_Shell_ReadLine_StartLink_next = (Optr)new_Slot(0, L"next");
    layout_Shell_ReadLine_StartLink = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Shell_ReadLine_StartLink)->values[0] = slot_Shell_ReadLine_StartLink_next; // next 
    Shell_ReadLine_StartLink_Class = (Class)new_Class(Shell_ReadLine_AbstractLink_Class, layout_Shell_ReadLine_StartLink_Class_class);
    Shell_ReadLine_StartLink_Class->layout = layout_Shell_ReadLine_StartLink;
    Shell_ReadLine_StartLink_Class->name = SMB_StartLink;
    
}

void init_Shell_ReadLine_PStartLink_methods() {
    init_SMB_next();
    init_SMB_next_();
    init_SMB_previous();
    
}