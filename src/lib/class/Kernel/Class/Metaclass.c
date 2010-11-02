#include <lib/class/Kernel/Class/Metaclass.h>


Optr layout_Kernel_Class_Metaclass_Class_class;
Optr slot_Kernel_Class_Metaclass_instance;
Optr layout_Kernel_Class_Metaclass;


static void init_SMB_printString() {
    Symbol SMB_printString = new_Symbol(L"printString");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend2865 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend2866 = new_Send((Optr)PSend2865, SMB_name, 0);
    String string_2867 = new_String(L" class");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_2867_Const = new_Constant((Optr)string_2867);
    // ,. 
    Send PSend2868 = new_Send((Optr)PSend2866, SMB__append_, 1, (Optr)string_2867_Const);
    Array PThreadedCode2864 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend2865, (Optr)&t_send0, (Optr)PSend2866, (Optr)&t_push1, (Optr)string_2867, (Optr)&t_send1, (Optr)PSend2868, (Optr)&t_method_return);
    Method PMethod2863 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2864, 1, PSend2868);
    
    MethodClosure MC_SMB_printString = new_MethodClosure((Method)PMethod2863, metaclass);
    store_method(metaclass, SMB_printString, MC_SMB_printString);
}


static void init_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Array PThreadedCode2870 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Metaclass_instance, (Optr)&t_method_return);
    Method PMethod2869 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2870, 1, slot_Kernel_Class_Metaclass_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod2869, metaclass);
    store_method(metaclass, SMB_instance, MC_SMB_instance);
}


static void init_SMB_accept_() {
    Symbol SMB_accept_ = new_Symbol(L"accept:");
    Variable VAR_visitor_0_0 = new_Variable_named(L"visitor", 0);
    Array PArray2872 = new_Array_with(1, (Optr)VAR_visitor_0_0);
    Symbol SMB_visitMetaclass_ = new_Symbol(L"visitMetaclass:");
    // visitMetaclass:. 
    Send PSend2874 = new_Send((Optr)VAR_visitor_0_0, SMB_visitMetaclass_, 1, (Optr)self);
    Array PThreadedCode2873 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_visitor_0_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend2874, (Optr)&t_method_return);
    Method PMethod2871 = new_Method_with(PArray2872, empty_Array, empty_Array, PThreadedCode2873, 1, PSend2874);
    
    MethodClosure MC_SMB_accept_ = new_MethodClosure((Method)PMethod2871, metaclass);
    store_method(metaclass, SMB_accept_, MC_SMB_accept_);
}


static void init_SMB_name() {
    Symbol SMB_name = new_Symbol(L"name");
    // name. 
    Send PSend2877 = new_Send((Optr)slot_Kernel_Class_Metaclass_instance, SMB_name, 0);
    String string_2878 = new_String(L" class");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_2878_Const = new_Constant((Optr)string_2878);
    // ,. 
    Send PSend2879 = new_Send((Optr)PSend2877, SMB__append_, 1, (Optr)string_2878_Const);
    Array PThreadedCode2876 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Kernel_Class_Metaclass_instance, (Optr)&t_send0, (Optr)PSend2877, (Optr)&t_push1, (Optr)string_2878, (Optr)&t_send1, (Optr)PSend2879, (Optr)&t_method_return);
    Method PMethod2875 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode2876, 1, PSend2879);
    
    MethodClosure MC_SMB_name = new_MethodClosure((Method)PMethod2875, metaclass);
    store_method(metaclass, SMB_name, MC_SMB_name);
}

void init_Kernel_Class_Metaclass_layout() {
    layout_Kernel_Class_Metaclass_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Kernel_Class_Metaclass_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Class_Metaclass_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Class_Metaclass_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Class_Metaclass_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Class_Metaclass_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Metaclass = new_Symbol(L"Metaclass");
    slot_Kernel_Class_Metaclass_instance = (Optr)new_Slot(3, L"instance");
    layout_Kernel_Class_Metaclass = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Kernel_Class_Metaclass)->values[0] = slot_Kernel_Class_Behavior_layout; // layout 
    ((Array)layout_Kernel_Class_Metaclass)->values[1] = slot_Kernel_Class_Behavior_superclass; // superclass 
    ((Array)layout_Kernel_Class_Metaclass)->values[2] = slot_Kernel_Class_Behavior_methods; // methods 
    ((Array)layout_Kernel_Class_Metaclass)->values[3] = slot_Kernel_Class_Metaclass_instance; // instance 
    Class_set_superclass(metaclass, behavior);
    metaclass->layout = layout_Kernel_Class_Metaclass;
    HEADER(metaclass)->layout = layout_Kernel_Class_Metaclass_Class_class;
    metaclass->name = SMB_Metaclass;
    
}

void init_Kernel_Class_Metaclass_methods() {
    init_SMB_printString();
    init_SMB_instance();
    init_SMB_accept_();
    init_SMB_name();
    
}