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
// 	^ self instance next
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
    /*
    nextInt: max
// 	^ self instance nextInt: max.
    */
    Symbol SMB_nextInt_ = new_Symbol(L"nextInt:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray21644 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend21646 = new_Send((Optr)self, SMB_next, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21647 = new_Send((Optr)PSend21646, SMB__times_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend21648 = new_Send((Optr)PSend21647, SMB_rounded, 0);
    Array PThreadedCode21645 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21646, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend21647, (Optr)&t_send0, (Optr)PSend21648, (Optr)&t_method_return);
    Method PMethod21643 = new_Method_with(PArray21644, empty_Array, empty_Array, PThreadedCode21645, 1, PSend21648);
    
    MethodClosure MC_SMB_nextInt_ = new_MethodClosure((Method)PMethod21643, Number_Random_Random_Class);
    store_method(Number_Random_Random_Class, SMB_nextInt_, MC_SMB_nextInt_);
}


static void init_class_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend21651 = new_Send((Optr)self, SMB_instance, 0);
    // next. 
    Send PSend21652 = new_Send((Optr)PSend21651, SMB_next, 0);
    Array PThreadedCode21650 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21651, (Optr)&t_send0, (Optr)PSend21652, (Optr)&t_method_return);
    Method PMethod21649 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21650, 1, PSend21652);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod21649, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_next, MC_SMB_next);
}


static void init_class_SMB_randomArray_() {
    Symbol SMB_randomArray_ = new_Symbol(L"randomArray:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray21654 = new_Array_with(1, (Optr)VAR_size_0_0);
    Variable VAR_a_0_1 = new_Variable_named(L"a", 0);
    Variable VAR_i1_0_2 = new_Variable_named(L"i1", 0);
    Variable VAR_i2_0_3 = new_Variable_named(L"i2", 0);
    Variable VAR_v1_0_4 = new_Variable_named(L"v1", 0);
    Variable VAR_v2_0_5 = new_Variable_named(L"v2", 0);
    Array PArray21655 = new_Array_with(5, (Optr)VAR_a_0_1, (Optr)VAR_i1_0_2, (Optr)VAR_i2_0_3, (Optr)VAR_v1_0_4, (Optr)VAR_v2_0_5);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21658 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign21657 = new_Assign((Optr)VAR_a_0_1, (Optr)PSend21658);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray21660 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21662 = new_Send((Optr)VAR_a_0_1, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)VAR_i_1_0);
    Array PThreadedCode21661 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send2, (Optr)PSend21662, (Optr)&t_method_return);
    Block PBlock21659 = new_Block_with(PArray21660, empty_Array, PThreadedCode21661, 1, PSend21662);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend21663 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock21659);
    Array PArray21665 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend21670 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_nextInt_ = new_Symbol(L"nextInt:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend21671 = new_Send((Optr)VAR_size_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInt:. 
    Send PSend21669 = new_Send((Optr)PSend21670, SMB_nextInt_, 1, (Optr)PSend21671);
    // +. 
    Send PSend21668 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)PSend21669);
    Assign PAssign21667 = new_Assign((Optr)VAR_i1_0_2, (Optr)PSend21668);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend21674 = new_Send((Optr)VAR_i_1_0, SMB__modulo_, 1, (Optr)VAR_size_0_0);
    // +. 
    Send PSend21673 = new_Send((Optr)PSend21674, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign21672 = new_Assign((Optr)VAR_i2_0_3, (Optr)PSend21673);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21676 = new_Send((Optr)VAR_a_0_1, SMB_at_, 1, (Optr)VAR_i1_0_2);
    Assign PAssign21675 = new_Assign((Optr)VAR_v1_0_4, (Optr)PSend21676);
    // at:. 
    Send PSend21678 = new_Send((Optr)VAR_a_0_1, SMB_at_, 1, (Optr)VAR_i2_0_3);
    Assign PAssign21677 = new_Assign((Optr)VAR_v2_0_5, (Optr)PSend21678);
    // at:put:. 
    Send PSend21679 = new_Send((Optr)VAR_a_0_1, SMB_at_put_, 2, (Optr)VAR_i1_0_2, (Optr)VAR_v2_0_5);
    // at:put:. 
    Send PSend21680 = new_Send((Optr)VAR_a_0_1, SMB_at_put_, 2, (Optr)VAR_i2_0_3, (Optr)VAR_v1_0_4);
    Array PThreadedCode21666 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign21667, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21670, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21671, (Optr)&t_send1, (Optr)PSend21669, (Optr)&t_send1, (Optr)PSend21668, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21672, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend21674, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21673, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21675, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_push_variable, (Optr)VAR_i1_0_2, (Optr)&t_send1, (Optr)PSend21676, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21677, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_push_variable, (Optr)VAR_i2_0_3, (Optr)&t_send1, (Optr)PSend21678, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_push_variable, (Optr)VAR_i1_0_2, (Optr)&t_push_variable, (Optr)VAR_v2_0_5, (Optr)&t_send2, (Optr)PSend21679, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_push_variable, (Optr)VAR_i2_0_3, (Optr)&t_push_variable, (Optr)VAR_v1_0_4, (Optr)&t_send2, (Optr)PSend21680, (Optr)&t_method_return);
    Block PBlock21664 = new_Block_with(PArray21665, empty_Array, PThreadedCode21666, 6, PAssign21667, PAssign21672, PAssign21675, PAssign21677, PSend21679, PSend21680);
    // to:do:. 
    Send PSend21681 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock21664);
    Array PThreadedCode21656 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign21657, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend21658, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock21659, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend21663, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock21664, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend21681, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_method_return);
    Method PMethod21653 = new_Method_with(PArray21654, PArray21655, empty_Array, PThreadedCode21656, 4, PAssign21657, PSend21663, PSend21681, VAR_a_0_1);
    
    MethodClosure MC_SMB_randomArray_ = new_MethodClosure((Method)PMethod21653, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_randomArray_, MC_SMB_randomArray_);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign21684 = new_Assign((Optr)slot_Number_Random_Random_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode21683 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign21684, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21682 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21683, 2, PAssign21684, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod21682, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21690 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign21689 = new_Assign((Optr)slot_Number_Random_Random_Class_class_instance, (Optr)PSend21690);
    Array PThreadedCode21688 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21689, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21690, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21687 = new_Block_with(empty_Array, empty_Array, PThreadedCode21688, 1, PAssign21689);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21691 = new_Send((Optr)slot_Number_Random_Random_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock21687);
    Array PThreadedCode21686 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Number_Random_Random_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock21687, (Optr)&t_send1, (Optr)PSend21691, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Number_Random_Random_Class_class_instance, (Optr)&t_method_return);
    Method PMethod21685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21686, 2, PSend21691, slot_Number_Random_Random_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod21685, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_instance, MC_SMB_instance);
}


static void init_class_SMB_nextInt_() {
    Symbol SMB_nextInt_ = new_Symbol(L"nextInt:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray21693 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend21695 = new_Send((Optr)self, SMB_instance, 0);
    // nextInt:. 
    Send PSend21696 = new_Send((Optr)PSend21695, SMB_nextInt_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode21694 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21695, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend21696, (Optr)&t_method_return);
    Method PMethod21692 = new_Method_with(PArray21693, empty_Array, empty_Array, PThreadedCode21694, 1, PSend21696);
    
    MethodClosure MC_SMB_nextInt_ = new_MethodClosure((Method)PMethod21692, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_nextInt_, MC_SMB_nextInt_);
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
    init_class_SMB_randomArray_();
    init_class_SMB_reset();
    init_class_SMB_instance();
    init_class_SMB_nextInt_();
    
}