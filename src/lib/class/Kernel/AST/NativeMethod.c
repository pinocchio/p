#include <lib/class/Kernel/AST/NativeMethod.h>


Optr layout_Kernel_AST_NativeMethod_Class_class;
Optr slot_Kernel_AST_NativeMethod_native;
Optr layout_Kernel_AST_NativeMethod;


static void init_SMB_clearNative() {
    Symbol SMB_clearNative = new_Symbol(L"clearNative");
    Symbol SMB_pPrimitive_plugin_ = new_Symbol(L"pPrimitive:plugin:");
    Symbol SMB_AST_minus_NativeMethod = new_Symbol(L"AST.NativeMethod");
    Annotation PAnnotation4679 = new_Annotation((Optr)SMB_pPrimitive_plugin_, 2, (Optr)SMB_clearNative, (Optr)SMB_AST_minus_NativeMethod);
    Array PArray4678 = new_Array_with(1, (Optr)PAnnotation4679);
    Array PThreadedCode4680 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    NativeMethod PNativeMethod4677 = new_NativeMethod_with(empty_Array, empty_Array, PArray4678, PThreadedCode4680, 1, self);
    
    MethodClosure MC_SMB_clearNative = new_MethodClosure((Method)PNativeMethod4677, NativeMethod_Class);
    store_method(NativeMethod_Class, SMB_clearNative, MC_SMB_clearNative);
}


static void init_SMB_accept_on_message_boundBy_() {
    Symbol SMB_accept_on_message_boundBy_ = new_Symbol(L"accept:on:message:boundBy:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Variable VAR_receiver_0_1 = new_Variable_named(L"receiver", 0);
    Variable VAR_message_0_2 = new_Variable_named(L"message", 0);
    Variable VAR_closure_0_3 = new_Variable_named(L"closure", 0);
    Array PArray4682 = new_Array_with(4, (Optr)VAR_visitor_0_0, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2, (Optr)VAR_closure_0_3);
    Symbol SMB_invokeNativeMethod_on_message_ = new_Symbol(L"invokeNativeMethod:on:message:");
    // invokeNativeMethod:on:message:. 
    Send PSend4684 = new_Send((Optr)VAR_visitor_0_0, SMB_invokeNativeMethod_on_message_, 3, (Optr)VAR_closure_0_3, (Optr)VAR_receiver_0_1, (Optr)VAR_message_0_2);
    Array PThreadedCode4683 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_variable, (Optr)VAR_closure_0_3, (Optr)&t_push_variable, (Optr)VAR_receiver_0_1, (Optr)&t_push_variable, (Optr)VAR_message_0_2, (Optr)&t_send3, (Optr)PSend4684, (Optr)&t_method_return);
    Method PMethod4681 = new_Method_with(PArray4682, empty_Array, empty_Array, PThreadedCode4683, 1, PSend4684);
    
    MethodClosure MC_SMB_accept_on_message_boundBy_ = new_MethodClosure((Method)PMethod4681, NativeMethod_Class);
    store_method(NativeMethod_Class, SMB_accept_on_message_boundBy_, MC_SMB_accept_on_message_boundBy_);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray4686 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Symbol SMB_class = new_Symbol(L"class");
    // class. 
    Send PSend4688 = new_Send((Optr)self, SMB_class, 0);
    Symbol SMB_superclass = new_Symbol(L"superclass");
    // superclass. 
    Send PSend4689 = new_Send((Optr)PSend4688, SMB_superclass, 0);
    Symbol SMB_layout = new_Symbol(L"layout");
    // layout. 
    Send PSend4690 = new_Send((Optr)PSend4689, SMB_layout, 0);
    Symbol SMB_inspectChildrenFrom_on_ = new_Symbol(L"inspectChildrenFrom:on:");
    // inspectChildrenFrom:on:. 
    Send PSend4691 = new_Send((Optr)PSend4690, SMB_inspectChildrenFrom_on_, 2, (Optr)self, (Optr)VAR_inspector_0_0);
    Array PThreadedCode4687 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend4688, (Optr)&t_send0, (Optr)PSend4689, (Optr)&t_send0, (Optr)PSend4690, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_send2, (Optr)PSend4691, (Optr)&t_method_return);
    Method PMethod4685 = new_Method_with(PArray4686, empty_Array, empty_Array, PThreadedCode4687, 1, PSend4691);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod4685, NativeMethod_Class);
    store_method(NativeMethod_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray4693 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitNativeMethod_ = new_Symbol(L"visitNativeMethod:");
    // visitNativeMethod:. 
    Send PSend4695 = new_Send((Optr)VAR_visitor_0_0, SMB_visitNativeMethod_, 1, (Optr)self);
    Array PThreadedCode4694 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend4695, (Optr)&t_method_return);
    Method PMethod4692 = new_Method_with(PArray4693, empty_Array, empty_Array, PThreadedCode4694, 1, PSend4695);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod4692, NativeMethod_Class);
    store_method(NativeMethod_Class, SMB_accept_, MC_SMB_accept_);
}

void init_Kernel_AST_PNativeMethod_layout() {
    layout_Kernel_AST_NativeMethod_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_AST_NativeMethod_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_AST_NativeMethod_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_AST_NativeMethod_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_AST_NativeMethod_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_AST_NativeMethod_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_NativeMethod = new_Symbol(L"NativeMethod");
    slot_Kernel_AST_NativeMethod_native = (Optr)new_Slot(6, L"native");
    layout_Kernel_AST_NativeMethod = (Optr)create_layout_with_vars(ArrayLayout_Class, 7);
    ((Array)layout_Kernel_AST_NativeMethod)->values[0] = slot_Kernel_AST_AbstractMethod_params;
    ((Array)layout_Kernel_AST_NativeMethod)->values[1] = slot_Kernel_AST_AbstractMethod_locals;
    ((Array)layout_Kernel_AST_NativeMethod)->values[2] = slot_Kernel_AST_AbstractMethod_package;
    ((Array)layout_Kernel_AST_NativeMethod)->values[3] = slot_Kernel_AST_AbstractMethod_annotations;
    ((Array)layout_Kernel_AST_NativeMethod)->values[4] = slot_Kernel_AST_AbstractMethod_info;
    ((Array)layout_Kernel_AST_NativeMethod)->values[5] = slot_Kernel_AST_AbstractMethod_threaded;
    ((Array)layout_Kernel_AST_NativeMethod)->values[6] = slot_Kernel_AST_NativeMethod_native;
    NativeMethod_Class = (Class)new_Class(Kernel_AST_AbstractMethod_Class, layout_Kernel_AST_NativeMethod_Class_class);
    NativeMethod_Class->layout = layout_Kernel_AST_NativeMethod;
    NativeMethod_Class->name = SMB_NativeMethod;
    
}

void init_Kernel_AST_PNativeMethod_methods() {
    init_SMB_clearNative();
    init_SMB_accept_on_message_boundBy_();
    init_SMB_inspectChildrenOn_();
    init_SMB_accept_();
    
}