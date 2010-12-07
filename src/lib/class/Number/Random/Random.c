#include <lib/class/Number/Random/Random.h>


Optr slot_Number_Random_Random_Class_class_instance;
Optr layout_Number_Random_Random_Class_class;


static void init_SMB_seed_() {
    Symbol SMB_seed_ = new_Symbol(L"seed:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray21633 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend21635 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode21634 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21635, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21632 = new_Method_with(PArray21633, empty_Array, empty_Array, PThreadedCode21634, 2, PSend21635, self);
    
    MethodClosure MC_SMB_seed_ = new_MethodClosure((Method)PMethod21632, Number_Random_Random_Class);
    store_method(Number_Random_Random_Class, SMB_seed_, MC_SMB_seed_);
}


static void init_SMB_next() {
    /*
    next
// 	^ self instance next.
    */
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend21638 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode21637 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21638, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21636 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21637, 2, PSend21638, self);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod21636, Number_Random_Random_Class);
    store_method(Number_Random_Random_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    // primMillisecondClock. 
    Send PSend21641 = new_Send((Optr)Time_classReference, SMB_primMillisecondClock, 0);
    Symbol SMB_seed_ = new_Symbol(L"seed:");
    // seed:. 
    Send PSend21642 = new_Send((Optr)self, SMB_seed_, 1, (Optr)PSend21641);
    Array PThreadedCode21640 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21641, (Optr)&t_send1, (Optr)PSend21642, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21639 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21640, 2, PSend21642, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21639, Number_Random_Random_Class);
    store_method(Number_Random_Random_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_nextInt_() {
    Symbol SMB_nextInt_ = new_Symbol(L"nextInt:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray21644 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend21646 = new_Send((Optr)self, SMB_next, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21647 = new_Send((Optr)PSend21646, SMB__times_, 1, (Optr)VAR_anInteger_0_0);
    Array PThreadedCode21645 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21646, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend21647, (Optr)&t_method_return);
    Method PMethod21643 = new_Method_with(PArray21644, empty_Array, empty_Array, PThreadedCode21645, 1, PSend21647);
    
    MethodClosure MC_SMB_nextInt_ = new_MethodClosure((Method)PMethod21643, Number_Random_Random_Class);
    store_method(Number_Random_Random_Class, SMB_nextInt_, MC_SMB_nextInt_);
}


static void init_class_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend21650 = new_Send((Optr)self, SMB_instance, 0);
    // next. 
    Send PSend21651 = new_Send((Optr)PSend21650, SMB_next, 0);
    Array PThreadedCode21649 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21650, (Optr)&t_send0, (Optr)PSend21651, (Optr)&t_method_return);
    Method PMethod21648 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21649, 1, PSend21651);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod21648, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_next, MC_SMB_next);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign21654 = new_Assign((Optr)slot_Number_Random_Random_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode21653 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign21654, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21652 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21653, 2, PAssign21654, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod21652, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21660 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign21659 = new_Assign((Optr)slot_Number_Random_Random_Class_class_instance, (Optr)PSend21660);
    Array PThreadedCode21658 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21659, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21660, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21657 = new_Block_with(empty_Array, empty_Array, PThreadedCode21658, 1, PAssign21659);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21661 = new_Send((Optr)slot_Number_Random_Random_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock21657);
    Array PThreadedCode21656 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Number_Random_Random_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock21657, (Optr)&t_send1, (Optr)PSend21661, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Number_Random_Random_Class_class_instance, (Optr)&t_method_return);
    Method PMethod21655 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21656, 2, PSend21661, slot_Number_Random_Random_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod21655, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_instance, MC_SMB_instance);
}

void init_Number_Random_PRandom_layout() {
    slot_Number_Random_Random_Class_class_instance = (Optr)new_Slot(5, L"instance");
    layout_Number_Random_Random_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Number_Random_Random_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Number_Random_Random_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Number_Random_Random_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Number_Random_Random_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Number_Random_Random_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Number_Random_Random_Class_class)->values[5] = slot_Number_Random_Random_Class_class_instance; // instance 
    
    Symbol  SMB_Random = new_Symbol(L"Random");
    Number_Random_Random_Class = (Class)new_Class(Object_Class, layout_Number_Random_Random_Class_class);
    Number_Random_Random_Class->layout = empty_object_layout;
    Number_Random_Random_Class->name = SMB_Random;
    
}

void init_Number_Random_PRandom_methods() {
    init_SMB_seed_();
    init_SMB_next();
    init_SMB_initialize();
    init_SMB_nextInt_();
    init_class_SMB_next();
    init_class_SMB_reset();
    init_class_SMB_instance();
    
}