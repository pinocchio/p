#include <lib/class/Kernel/AST/ReflectionMethod.h>


Optr layout_Kernel_AST_ReflectionMethod_Class_class;
Optr slot_Kernel_AST_ReflectionMethod_native;
Optr layout_Kernel_AST_ReflectionMethod;


static void init_SMB_accept_on_message_boundBy_() {
    Symbol SMB_accept_on_message_boundBy_ = new_Symbol(L"accept:on:message:boundBy:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Variable VAR_closure_0_3 = new_Variable_named(L"closure", 0);
    Array PArray4697 = new_Array_with(4, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2, (Optr)VAR_closure_0_3);
    Symbol SMB_invokeReflectionMethod_on_message_ = new_Symbol(L"invokeReflectionMethod:on:message:");
    // invokeReflectionMethod:on:message:. 
    Send PSend4699 = new_Send((Optr)VAR_visitor_0_0, SMB_invokeReflectionMethod_on_message_, 3, (Optr)VAR_closure_0_3, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Array PThreadedCode4698 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_3, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_send3, (Optr)PSend4699, (Optr)&t_method_return);
    Method PMethod4696 = new_Method_with(PArray4697, empty_Array, empty_Array, PThreadedCode4698, 1, PSend4699);
    
    MethodClosure MC_SMB_accept_on_message_boundBy_ = new_MethodClosure((Method)PMethod4696, ReflectionMethod_Class);
    store_method(ReflectionMethod_Class, SMB_accept_on_message_boundBy_, MC_SMB_accept_on_message_boundBy_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray4701 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend4703 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend4704 = new_Send((Optr)PSend4703, SMB_superclass, 0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend4705 = new_Send((Optr)PSend4704, SMB_layout, 0);
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    // inspectChildrenFrom:on:. 
    Send PSend4706 = new_Send((Optr)PSend4705, SMB_inspectChildrenFrom_on_, 2, (Optr)self, (Optr)VAR_inspector_0_0);
    Array PThreadedCode4702 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4703, (Optr)&t_send0, (Optr)PSend4704, (Optr)&t_send0, (Optr)PSend4705, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_send2, (Optr)PSend4706, (Optr)&t_method_return);
    Method PMethod4700 = new_Method_with(PArray4701, empty_Array, empty_Array, PThreadedCode4702, 1, PSend4706);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod4700, ReflectionMethod_Class);
    store_method(ReflectionMethod_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4708 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitReflectionMethod_ = new_Symbol(L"visitReflectionMethod:");
    // visitReflectionMethod:. 
    Send PSend4710 = new_Send((Optr)VAR_visitor_0_0, SMB_visitReflectionMethod_, 1, (Optr)self);
    Array PThreadedCode4709 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4710, (Optr)&t_method_return);
    Method PMethod4707 = new_Method_with(PArray4708, empty_Array, empty_Array, PThreadedCode4709, 1, PSend4710);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4707, ReflectionMethod_Class);
    store_method(ReflectionMethod_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Kernel_AST_PReflectionMethod_layout() {
    layout_Kernel_AST_ReflectionMethod_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_ReflectionMethod_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_ReflectionMethod_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_ReflectionMethod_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_ReflectionMethod_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_ReflectionMethod_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ReflectionMethod = new_Symbol(L"ReflectionMethod");
    slot_Kernel_AST_ReflectionMethod_native = (Optr)new_Slot(6, L"native");
    layout_Kernel_AST_ReflectionMethod = (Optr)create_layout_with_vars(ArrayLayout_Class, 7);
    ((Array)layout_Kernel_AST_ReflectionMethod)->values[0] = slot_Kernel_AST_AbstractMethod_params;
    ((Array)layout_Kernel_AST_ReflectionMethod)->values[1] = slot_Kernel_AST_AbstractMethod_locals;
    ((Array)layout_Kernel_AST_ReflectionMethod)->values[2] = slot_Kernel_AST_AbstractMethod_package;
    ((Array)layout_Kernel_AST_ReflectionMethod)->values[3] = slot_Kernel_AST_AbstractMethod_annotations;
    ((Array)layout_Kernel_AST_ReflectionMethod)->values[4] = slot_Kernel_AST_AbstractMethod_info;
    ((Array)layout_Kernel_AST_ReflectionMethod)->values[5] = slot_Kernel_AST_AbstractMethod_threaded;
    ((Array)layout_Kernel_AST_ReflectionMethod)->values[6] = slot_Kernel_AST_ReflectionMethod_native;
    ReflectionMethod_Class = (Class)new_Class(Kernel_AST_AbstractMethod_Class, layout_Kernel_AST_ReflectionMethod_Class_class);
    ReflectionMethod_Class->layout = layout_Kernel_AST_ReflectionMethod;
    ReflectionMethod_Class->name = SMB_ReflectionMethod;
    
}

void init_Kernel_AST_PReflectionMethod_methods() {
    init_SMB_accept_on_message_boundBy_();
    init_SMB_inspectChildrenOn_();
    init_SMB_accept_();
    
}