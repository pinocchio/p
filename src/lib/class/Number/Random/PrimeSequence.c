#include <lib/class/Number/Random/PrimeSequence.h>


Optr slot_Number_Random_PrimeSequence_Class_class_prime;
Optr layout_Number_Random_PrimeSequence_Class_class;
Optr slot_Number_Random_PrimeSequence_prime;
Optr slot_Number_Random_PrimeSequence_size;
Optr layout_Number_Random_PrimeSequence;


static void init_SMB_seed_() {
    Symbol SMB_seed_ = new_Symbol(L"seed:");
    Variable VAR_aPrime_0_0 = new_Variable_named(L"aPrime", 0);
    Array PArray21698 = new_Array_with(1, (Optr)VAR_aPrime_0_0);
    Symbol SMB_isPrime = new_Symbol(L"isPrime");
    // isPrime. 
    Send PSend21700 = new_Send((Optr)VAR_aPrime_0_0, SMB_isPrime, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21704 = new_Send((Optr)PInvalidArgument_classReference, SMB_new, 0);
    Symbol SMB_signal_ = new_Symbol(L"signal:");
    // signal:. 
    Send PSend21705 = new_Send((Optr)self, SMB_signal_, 1, (Optr)PSend21704);
    Array PThreadedCode21703 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)PInvalidArgument_classReference, (Optr)&t_send0, (Optr)PSend21704, (Optr)&t_send1, (Optr)PSend21705, (Optr)&t_block_return);
    Block PBlock21702 = new_Block_with(empty_Array, empty_Array, PThreadedCode21703, 1, PSend21705);
    // ifFalse:. 
    Send PSend21701 = new_Send((Optr)PSend21700, SMB_ifFalse_, 1, (Optr)PBlock21702);
    Assign PAssign21706 = new_Assign((Optr)slot_Number_Random_PrimeSequence_prime, (Optr)VAR_aPrime_0_0);
    Symbol SMB_refresh = new_Symbol(L"refresh");
    // refresh. 
    Send PSend21707 = new_Send((Optr)self, SMB_refresh, 0);
    Array PThreadedCode21699 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_aPrime_0_0, (Optr)&t_send0, (Optr)PSend21700, (Optr)&t_send_ifFalse_, (Optr)PSend21701, (Optr)PBlock21702, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21706, (Optr)&t_push_variable, (Optr)VAR_aPrime_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21707, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21697 = new_Method_with(PArray21698, empty_Array, empty_Array, PThreadedCode21699, 4, PSend21701, PAssign21706, PSend21707, self);
    
    MethodClosure MC_SMB_seed_ = new_MethodClosure((Method)PMethod21697, Number_Random_PrimeSequence_Class);
    store_method(Number_Random_PrimeSequence_Class, SMB_seed_, MC_SMB_seed_);
}


static void init_SMB_size_() {
    Symbol SMB_size_ = new_Symbol(L"size:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray21709 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Assign PAssign21711 = new_Assign((Optr)slot_Number_Random_PrimeSequence_size, (Optr)VAR_aNumber_0_0);
    Symbol SMB_refresh = new_Symbol(L"refresh");
    // refresh. 
    Send PSend21712 = new_Send((Optr)self, SMB_refresh, 0);
    Array PThreadedCode21710 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign21711, (Optr)&t_push_variable, (Optr)VAR_aNumber_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21712, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21708 = new_Method_with(PArray21709, empty_Array, empty_Array, PThreadedCode21710, 3, PAssign21711, PSend21712, self);
    
    MethodClosure MC_SMB_size_ = new_MethodClosure((Method)PMethod21708, Number_Random_PrimeSequence_Class);
    store_method(Number_Random_PrimeSequence_Class, SMB_size_, MC_SMB_size_);
}


static void init_SMB_refresh() {
    Symbol SMB_refresh = new_Symbol(L"refresh");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend21715 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode21714 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21715, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21713 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21714, 2, PSend21715, self);
    
    MethodClosure MC_SMB_refresh = new_MethodClosure((Method)PMethod21713, Number_Random_PrimeSequence_Class);
    store_method(Number_Random_PrimeSequence_Class, SMB_refresh, MC_SMB_refresh);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    Assign PAssign21718 = new_Assign((Optr)slot_Number_Random_PrimeSequence_prime, (Optr)int_3_Const);
    Array PThreadedCode21717 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21718, (Optr)&t_push1, (Optr)int_3, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21716 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21717, 2, PAssign21718, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21716, Number_Random_PrimeSequence_Class);
    store_method(Number_Random_PrimeSequence_Class, SMB_initialize, MC_SMB_initialize);
}

void init_Number_Random_PrimeSequence_layout() {
    slot_Number_Random_PrimeSequence_Class_class_prime = (Optr)new_Slot(6, L"prime");
    layout_Number_Random_PrimeSequence_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_Number_Random_PrimeSequence_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Number_Random_PrimeSequence_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Number_Random_PrimeSequence_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Number_Random_PrimeSequence_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Number_Random_PrimeSequence_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Number_Random_PrimeSequence_Class_class)->values[5] = slot_Number_Random_Random_Class_class_instance; // instance 
    ((Array)layout_Number_Random_PrimeSequence_Class_class)->values[6] = slot_Number_Random_PrimeSequence_Class_class_prime; // prime 
    
    Symbol  SMB_PrimeSequence = new_Symbol(L"PrimeSequence");
    slot_Number_Random_PrimeSequence_prime = (Optr)new_Slot(0, L"prime");
    slot_Number_Random_PrimeSequence_size = (Optr)new_Slot(1, L"size");
    layout_Number_Random_PrimeSequence = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Number_Random_PrimeSequence)->values[0] = slot_Number_Random_PrimeSequence_prime; // prime 
    ((Array)layout_Number_Random_PrimeSequence)->values[1] = slot_Number_Random_PrimeSequence_size; // size 
    Number_Random_PrimeSequence_Class = (Class)new_Class(Number_Random_Random_Class, layout_Number_Random_PrimeSequence_Class_class);
    Number_Random_PrimeSequence_Class->layout = layout_Number_Random_PrimeSequence;
    Number_Random_PrimeSequence_Class->name = SMB_PrimeSequence;
    
}

void init_Number_Random_PrimeSequence_methods() {
    init_SMB_seed_();
    init_SMB_size_();
    init_SMB_refresh();
    init_SMB_initialize();
    
}