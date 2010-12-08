#include <lib/class/Number/Random/Random.h>


Optr slot_Number_Random_Random_Class_class_instance;
Optr layout_Number_Random_Random_Class_class;


static void init_SMB_seed_() {
    Symbol SMB_seed_ = new_Symbol(L"seed:");
    Variable VAR_aNumber_0_0 = new_Variable_named(L"aNumber", 0);
    Array PArray21730 = new_Array_with(1, (Optr)VAR_aNumber_0_0);
    Symbol SMB_subclassResponsibility = new_Symbol(L"subclassResponsibility");
    // subclassResponsibility. 
    Send PSend21732 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode21731 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21732, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21729 = new_Method_with(PArray21730, empty_Array, empty_Array, PThreadedCode21731, 2, PSend21732, self);
    
    MethodClosure MC_SMB_seed_ = new_MethodClosure((Method)PMethod21729, Number_Random_Random_Class);
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
    Send PSend21735 = new_Send((Optr)self, SMB_subclassResponsibility, 0);
    Array PThreadedCode21734 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21735, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21734, 2, PSend21735, self);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod21733, Number_Random_Random_Class);
    store_method(Number_Random_Random_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_primMillisecondClock = new_Symbol(L"primMillisecondClock");
    // primMillisecondClock. 
    Send PSend21738 = new_Send((Optr)Time_classReference, SMB_primMillisecondClock, 0);
    Symbol SMB_seed_ = new_Symbol(L"seed:");
    // seed:. 
    Send PSend21739 = new_Send((Optr)self, SMB_seed_, 1, (Optr)PSend21738);
    Array PThreadedCode21737 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_push_class_reference, (Optr)Time_classReference, (Optr)&t_send0, (Optr)PSend21738, (Optr)&t_send1, (Optr)PSend21739, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21736 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21737, 2, PSend21739, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21736, Number_Random_Random_Class);
    store_method(Number_Random_Random_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_nextInt_() {
    /*
    nextInt: max
// 	^ self instance nextInt: max.
    */
    Symbol SMB_nextInt_ = new_Symbol(L"nextInt:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray21741 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend21743 = new_Send((Optr)self, SMB_next, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21744 = new_Send((Optr)PSend21743, SMB__times_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_rounded = new_Symbol(L"rounded");
    // rounded. 
    Send PSend21745 = new_Send((Optr)PSend21744, SMB_rounded, 0);
    Array PThreadedCode21742 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21743, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend21744, (Optr)&t_send0, (Optr)PSend21745, (Optr)&t_method_return);
    Method PMethod21740 = new_Method_with(PArray21741, empty_Array, empty_Array, PThreadedCode21742, 1, PSend21745);
    
    MethodClosure MC_SMB_nextInt_ = new_MethodClosure((Method)PMethod21740, Number_Random_Random_Class);
    store_method(Number_Random_Random_Class, SMB_nextInt_, MC_SMB_nextInt_);
}


static void init_class_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend21748 = new_Send((Optr)self, SMB_instance, 0);
    // next. 
    Send PSend21749 = new_Send((Optr)PSend21748, SMB_next, 0);
    Array PThreadedCode21747 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21748, (Optr)&t_send0, (Optr)PSend21749, (Optr)&t_method_return);
    Method PMethod21746 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21747, 1, PSend21749);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod21746, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_next, MC_SMB_next);
}


static void init_class_SMB_randomArray_() {
    Symbol SMB_randomArray_ = new_Symbol(L"randomArray:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray21751 = new_Array_with(1, (Optr)VAR_size_0_0);
    Variable VAR_a_0_1 = new_Variable_named(L"a", 0);
    Variable VAR_i1_0_2 = new_Variable_named(L"i1", 0);
    Variable VAR_i2_0_3 = new_Variable_named(L"i2", 0);
    Variable VAR_v1_0_4 = new_Variable_named(L"v1", 0);
    Variable VAR_v2_0_5 = new_Variable_named(L"v2", 0);
    Array PArray21752 = new_Array_with(5, (Optr)VAR_a_0_1, (Optr)VAR_i1_0_2, (Optr)VAR_i2_0_3, (Optr)VAR_v1_0_4, (Optr)VAR_v2_0_5);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21755 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_size_0_0);
    Assign PAssign21754 = new_Assign((Optr)VAR_a_0_1, (Optr)PSend21755);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray21757 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21759 = new_Send((Optr)VAR_a_0_1, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)VAR_i_1_0);
    Array PThreadedCode21758 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send2, (Optr)PSend21759, (Optr)&t_method_return);
    Block PBlock21756 = new_Block_with(PArray21757, empty_Array, PThreadedCode21758, 1, PSend21759);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend21760 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock21756);
    Array PArray21762 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend21767 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_nextInt_ = new_Symbol(L"nextInt:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend21768 = new_Send((Optr)VAR_size_0_0, SMB__minus_, 1, (Optr)int_1_Const);
    // nextInt:. 
    Send PSend21766 = new_Send((Optr)PSend21767, SMB_nextInt_, 1, (Optr)PSend21768);
    // +. 
    Send PSend21765 = new_Send((Optr)int_1_Const, SMB__plus_, 1, (Optr)PSend21766);
    Assign PAssign21764 = new_Assign((Optr)VAR_i1_0_2, (Optr)PSend21765);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend21771 = new_Send((Optr)VAR_i_1_0, SMB__modulo_, 1, (Optr)VAR_size_0_0);
    // +. 
    Send PSend21770 = new_Send((Optr)PSend21771, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign21769 = new_Assign((Optr)VAR_i2_0_3, (Optr)PSend21770);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21773 = new_Send((Optr)VAR_a_0_1, SMB_at_, 1, (Optr)VAR_i1_0_2);
    Assign PAssign21772 = new_Assign((Optr)VAR_v1_0_4, (Optr)PSend21773);
    // at:. 
    Send PSend21775 = new_Send((Optr)VAR_a_0_1, SMB_at_, 1, (Optr)VAR_i2_0_3);
    Assign PAssign21774 = new_Assign((Optr)VAR_v2_0_5, (Optr)PSend21775);
    // at:put:. 
    Send PSend21776 = new_Send((Optr)VAR_a_0_1, SMB_at_put_, 2, (Optr)VAR_i1_0_2, (Optr)VAR_v2_0_5);
    // at:put:. 
    Send PSend21777 = new_Send((Optr)VAR_a_0_1, SMB_at_put_, 2, (Optr)VAR_i2_0_3, (Optr)VAR_v1_0_4);
    Array PThreadedCode21763 = instantiate_Array_with(ThreadedCode_Class, 0, 68, (Optr)&t_push1, (Optr)PAssign21764, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21767, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21768, (Optr)&t_send1, (Optr)PSend21766, (Optr)&t_send1, (Optr)PSend21765, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21769, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend21771, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21770, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21772, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_push_variable, (Optr)VAR_i1_0_2, (Optr)&t_send1, (Optr)PSend21773, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21774, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_push_variable, (Optr)VAR_i2_0_3, (Optr)&t_send1, (Optr)PSend21775, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_push_variable, (Optr)VAR_i1_0_2, (Optr)&t_push_variable, (Optr)VAR_v2_0_5, (Optr)&t_send2, (Optr)PSend21776, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_push_variable, (Optr)VAR_i2_0_3, (Optr)&t_push_variable, (Optr)VAR_v1_0_4, (Optr)&t_send2, (Optr)PSend21777, (Optr)&t_method_return);
    Block PBlock21761 = new_Block_with(PArray21762, empty_Array, PThreadedCode21763, 6, PAssign21764, PAssign21769, PAssign21772, PAssign21774, PSend21776, PSend21777);
    // to:do:. 
    Send PSend21778 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_size_0_0, (Optr)PBlock21761);
    Array PThreadedCode21753 = instantiate_Array_with(ThreadedCode_Class, 0, 31, (Optr)&t_push1, (Optr)PAssign21754, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend21755, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock21756, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend21760, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_push_closure, (Optr)PBlock21761, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend21778, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_a_0_1, (Optr)&t_method_return);
    Method PMethod21750 = new_Method_with(PArray21751, PArray21752, empty_Array, PThreadedCode21753, 4, PAssign21754, PSend21760, PSend21778, VAR_a_0_1);
    
    MethodClosure MC_SMB_randomArray_ = new_MethodClosure((Method)PMethod21750, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_randomArray_, MC_SMB_randomArray_);
}


static void init_class_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Assign PAssign21781 = new_Assign((Optr)slot_Number_Random_Random_Class_class_instance, (Optr)nil_Const);
    Array PThreadedCode21780 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign21781, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21779 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21780, 2, PAssign21781, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod21779, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_reset, MC_SMB_reset);
}


static void init_class_SMB_instance() {
    Symbol SMB_instance = new_Symbol(L"instance");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend21787 = new_Send((Optr)self, SMB_new, 0);
    Assign PAssign21786 = new_Assign((Optr)slot_Number_Random_Random_Class_class_instance, (Optr)PSend21787);
    Array PThreadedCode21785 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign21786, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21787, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21784 = new_Block_with(empty_Array, empty_Array, PThreadedCode21785, 1, PAssign21786);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend21788 = new_Send((Optr)slot_Number_Random_Random_Class_class_instance, SMB_ifNil_, 1, (Optr)PBlock21784);
    Array PThreadedCode21783 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Number_Random_Random_Class_class_instance, (Optr)&t_push_closure, (Optr)PBlock21784, (Optr)&t_send1, (Optr)PSend21788, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Number_Random_Random_Class_class_instance, (Optr)&t_method_return);
    Method PMethod21782 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21783, 2, PSend21788, slot_Number_Random_Random_Class_class_instance);
    
    MethodClosure MC_SMB_instance = new_MethodClosure((Method)PMethod21782, HEADER(Number_Random_Random_Class));
    store_method(HEADER(Number_Random_Random_Class), SMB_instance, MC_SMB_instance);
}


static void init_class_SMB_nextInt_() {
    Symbol SMB_nextInt_ = new_Symbol(L"nextInt:");
    Variable VAR_max_0_0 = new_Variable_named(L"max", 0);
    Array PArray21790 = new_Array_with(1, (Optr)VAR_max_0_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend21792 = new_Send((Optr)self, SMB_instance, 0);
    // nextInt:. 
    Send PSend21793 = new_Send((Optr)PSend21792, SMB_nextInt_, 1, (Optr)VAR_max_0_0);
    Array PThreadedCode21791 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21792, (Optr)&t_push_variable, (Optr)VAR_max_0_0, (Optr)&t_send1, (Optr)PSend21793, (Optr)&t_method_return);
    Method PMethod21789 = new_Method_with(PArray21790, empty_Array, empty_Array, PThreadedCode21791, 1, PSend21793);
    
    MethodClosure MC_SMB_nextInt_ = new_MethodClosure((Method)PMethod21789, HEADER(Number_Random_Random_Class));
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