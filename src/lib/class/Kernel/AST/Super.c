#include <lib/class/Kernel/AST/Super.h>


Optr layout_Kernel_AST_Super_Class_class;
Optr layout_Kernel_AST_Super;


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4846 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitSuper_ = new_Symbol(L"visitSuper:");
    // visitSuper:. 
    Send PSend4848 = new_Send((Optr)VAR_visitor_0_0, SMB_visitSuper_, 1, (Optr)self);
    Array PThreadedCode4847 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4848, (Optr)&t_method_return);
    Method PMethod4845 = new_Method_with(PArray4846, empty_Array, empty_Array, PThreadedCode4847, 1, PSend4848);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4845, Super_Class);
    store_method(Super_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Kernel_AST_PSuper_layout() {
    layout_Kernel_AST_Super_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_Super_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_Super_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_Super_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_Super_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_Super_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Super = new_Symbol(L"Super");
    layout_Kernel_AST_Super = (Optr)create_layout_with_vars(ArrayLayout_Class, 2);
    ((Array)layout_Kernel_AST_Super)->values[0] = slot_Kernel_AST_AbstractSend_cache;
    ((Array)layout_Kernel_AST_Super)->values[1] = slot_Kernel_AST_AbstractSend_message;
    Super_Class = (Class)new_Class(Kernel_AST_AbstractSend_Class, layout_Kernel_AST_Super_Class_class);
    Super_Class->layout = layout_Kernel_AST_Super;
    Super_Class->name = SMB_Super;
    
}

void init_Kernel_AST_PSuper_methods() {
    init_SMB_accept_();
    
}