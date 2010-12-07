#include <lib/class/Kernel/Exception/Halt.h>


Optr slot_Kernel_Exception_Halt_Class_class_instance;
Optr layout_Kernel_Exception_Halt_Class_class;
Optr layout_Kernel_Exception_Halt;


static void init_SMB_warnOn_() {
    Symbol SMB_warnOn_ = new_Symbol(L"warnOn:");
    Variable VAR_aStream_0_0 = new_Variable_named(L"aStream", 0);
    Array PArray930 = new_Array_with(1, (Optr)VAR_aStream_0_0);
    String string_932 = new_String(L"Halt");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_932_Const = new_Constant((Optr)string_932);
    // <<. 
    Send PSend933 = new_Send((Optr)VAR_aStream_0_0, SMB__shiftLeft_, 1, (Optr)string_932_Const);
    Array PThreadedCode931 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR_aStream_0_0, (Optr)&t_push1, (Optr)string_932, (Optr)&t_send1, (Optr)PSend933, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod929 = new_Method_with(PArray930, empty_Array, empty_Array, PThreadedCode931, 2, PSend933, self);
    
    MethodClosure MC_SMB_warnOn_ = new_MethodClosure((Method)PMethod929, Kernel_Exception_Halt_Class);
    store_method(Kernel_Exception_Halt_Class, SMB_warnOn_, MC_SMB_warnOn_);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend939 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign938 = new_Assign((Optr)slot_Kernel_Exception_Halt_Class_class_instance, (Optr)PSend939);
    Array PThreadedCode937 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign938, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend939, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock936 = new_Block_with(empty_Array, empty_Array, PThreadedCode937, 1, PAssign938);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend940 = new_Send((Optr)slot_Kernel_Exception_Halt_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock936);
    Array PThreadedCode935 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Kernel_Exception_Halt_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock936, (Optr)&t_send1, (Optr)PSend940, (Optr)&t_method_return);
    Method PMethod934 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode935, 1, PSend940);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod934, HEADER(Kernel_Exception_Halt_Class));
    store_method(HEADER(Kernel_Exception_Halt_Class), SMB_instance, MC_SMB_instance);
}


static void init_class_SMB_signal() {
    Symbol SMB_signal = new_Symbol(L"signal");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend943 = new_Send((Optr)self, SMB_instance, 0);
    // signal. 
    Send PSend944 = new_Send((Optr)PSend943, SMB_signal, 0);
    Array PThreadedCode942 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend943, (Optr)&t_send0, (Optr)PSend944, (Optr)&t_method_return);
    Method PMethod941 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode942, 1, PSend944);
    
    MethodClosure MC_SMB_signal = new_MethodClosure((Method)PMethod941, HEADER(Kernel_Exception_Halt_Class));
    store_method(HEADER(Kernel_Exception_Halt_Class), SMB_signal, MC_SMB_signal);
}

void init_Kernel_Exception_PHalt_layout() {
    slot_Kernel_Exception_Halt_Class_class_instance = (Optr)new_Slot(5, L"instance");
    layout_Kernel_Exception_Halt_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Kernel_Exception_Halt_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Kernel_Exception_Halt_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Kernel_Exception_Halt_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Kernel_Exception_Halt_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Kernel_Exception_Halt_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Kernel_Exception_Halt_Class_class)->values[5] = slot_Kernel_Exception_Halt_Class_class_instance; // instance 
    
    Symbol  SMB_Halt = new_Symbol(L"Halt");
    layout_Kernel_Exception_Halt = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_Kernel_Exception_Halt)->values[0] = slot_Kernel_Exception_Exception_environment; // environment 
    Kernel_Exception_Halt_Class = (Class)new_Class(Kernel_Exception_Exception_Class, layout_Kernel_Exception_Halt_Class_class);
    Kernel_Exception_Halt_Class->layout = layout_Kernel_Exception_Halt;
    Kernel_Exception_Halt_Class->name = SMB_Halt;
    
}

void init_Kernel_Exception_PHalt_methods() {
    init_SMB_warnOn_();
    init_class_SMB_instance();
    init_class_SMB_signal();
    
}