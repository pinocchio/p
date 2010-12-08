#include <lib/class/Kernel/Threading/FunctionPointer.h>


Optr layout_Kernel_Threading_FunctionPointer_Class_class;
Optr slot_Kernel_Threading_FunctionPointer_name;
Optr layout_Kernel_Threading_FunctionPointer;


static void init_SMB__equals_() {
    Symbol SMB__equals_ = new_Symbol(L"=");
    Variable VAR_other_0_0 = new_Variable_named(L"other", 0);
    Array PArray5689 = new_Array_with(1, (Optr)VAR_other_0_0);
    // =. 
    Send PSend5691 = new_Send((Optr)slot_Kernel_Threading_FunctionPointer_name, SMB__equals_, 1, (Optr)VAR_other_0_0);
    Array PThreadedCode5690 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_FunctionPointer_name, (Optr)&t_push_variable, (Optr)VAR_other_0_0, (Optr)&t_send1, (Optr)PSend5691, (Optr)&t_method_return);
    Method PMethod5688 = new_Method_with(PArray5689, empty_Array, empty_Array, PThreadedCode5690, 1, PSend5691);
    
    MethodClosure MC_SMB__equals_ = new_MethodClosure((Method)PMethod5688, Kernel_Threading_FunctionPointer_Class);
    store_method(Kernel_Threading_FunctionPointer_Class, SMB__equals_, MC_SMB__equals_);
}


static void init_SMB_name_() {
    Symbol SMB_name_ = new_Symbol(L"name:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray5693 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign5695 = new_Assign((Optr)slot_Kernel_Threading_FunctionPointer_name, (Optr)VAR_anObject_0_0);
    Array PThreadedCode5694 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign5695, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod5692 = new_Method_with(PArray5693, empty_Array, empty_Array, PThreadedCode5694, 2, PAssign5695, self);
    
    MethodClosure MC_SMB_name_ = new_MethodClosure((Method)PMethod5692, Kernel_Threading_FunctionPointer_Class);
    store_method(Kernel_Threading_FunctionPointer_Class, SMB_name_, MC_SMB_name_);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_aVisitor_0_0 = new_Variable_named(L"aVisitor", 0);
    Array PArray5697 = new_Array_with(1, (Optr)VAR_aVisitor_0_0);
    Symbol SMB_visitFunctionPointer_ = new_Symbol(L"visitFunctionPointer:");
    // visitFunctionPointer:. 
    Send PSend5699 = new_Send((Optr)VAR_aVisitor_0_0, SMB_visitFunctionPointer_, 1, (Optr)self);
    Array PThreadedCode5698 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_aVisitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend5699, (Optr)&t_method_return);
    Method PMethod5696 = new_Method_with(PArray5697, empty_Array, empty_Array, PThreadedCode5698, 1, PSend5699);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod5696, Kernel_Threading_FunctionPointer_Class);
    store_method(Kernel_Threading_FunctionPointer_Class, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    Array PThreadedCode5701 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Threading_FunctionPointer_name, (Optr)&t_method_return);
    Method PMethod5700 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode5701, 1, slot_Kernel_Threading_FunctionPointer_name);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod5700, Kernel_Threading_FunctionPointer_Class);
    store_method(Kernel_Threading_FunctionPointer_Class, SMB_name, MC_SMB_name);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_aSymbol_0_0 = new_Variable_named(L"aSymbol", 0);
    Array PArray5703 = new_Array_with(1, (Optr)VAR_aSymbol_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend5705 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend5706 = new_Send((Optr)PSend5705, SMB_name_, 1, (Optr)VAR_aSymbol_0_0);
    Array PThreadedCode5704 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend5705, (Optr)&t_push_variable, (Optr)VAR_aSymbol_0_0, (Optr)&t_send1, (Optr)PSend5706, (Optr)&t_method_return);
    Method PMethod5702 = new_Method_with(PArray5703, empty_Array, empty_Array, PThreadedCode5704, 1, PSend5706);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod5702, HEADER(Kernel_Threading_FunctionPointer_Class));
    store_method(HEADER(Kernel_Threading_FunctionPointer_Class), SMB_named_, MC_SMB_named_);
}

void init_Kernel_Threading_PFunctionPointer_layout() {
    layout_Kernel_Threading_FunctionPointer_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Threading_FunctionPointer_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Threading_FunctionPointer_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Threading_FunctionPointer_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Threading_FunctionPointer_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Threading_FunctionPointer_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_FunctionPointer = new_Symbol(L"FunctionPointer");
    slot_Kernel_Threading_FunctionPointer_name = (Optr)new_Slot(0, L"name");
    layout_Kernel_Threading_FunctionPointer = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Kernel_Threading_FunctionPointer)->values[0] = slot_Kernel_Threading_FunctionPointer_name; // name 
    Kernel_Threading_FunctionPointer_Class = (Class)new_Class(Object_Class, layout_Kernel_Threading_FunctionPointer_Class_class);
    Kernel_Threading_FunctionPointer_Class->layout = layout_Kernel_Threading_FunctionPointer;
    Kernel_Threading_FunctionPointer_Class->name = SMB_FunctionPointer;
    
}

void init_Kernel_Threading_PFunctionPointer_methods() {
    init_SMB__equals_();
    init_SMB_name_();
    init_SMB_accept_();
    init_SMB_name();
    init_class_SMB_named_();
    
}