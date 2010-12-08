#include <lib/class/Number/Random/HammersleySequence.h>


Optr layout_Number_Random_HammersleySequence_Class_class;
Optr slot_Number_Random_HammersleySequence_currentIndex;
Optr slot_Number_Random_HammersleySequence_samples;
Optr layout_Number_Random_HammersleySequence;


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend21821 = new_Send((Optr)slot_Number_Random_HammersleySequence_currentIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend21820 = new_Send((Optr)PSend21821, SMB__modulo_, 1, (Optr)slot_Number_Random_PrimeSequence_size);
    // +. 
    Send PSend21819 = new_Send((Optr)PSend21820, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign21818 = new_Assign((Optr)slot_Number_Random_HammersleySequence_currentIndex, (Optr)PSend21819);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend21822 = new_Send((Optr)slot_Number_Random_HammersleySequence_samples, SMB_at_, 1, (Optr)slot_Number_Random_HammersleySequence_currentIndex);
    Array PThreadedCode21817 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign21818, (Optr)&t_push_slot, (Optr)slot_Number_Random_HammersleySequence_currentIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21821, (Optr)&t_push_slot, (Optr)slot_Number_Random_PrimeSequence_size, (Optr)&t_send1, (Optr)PSend21820, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21819, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Number_Random_HammersleySequence_samples, (Optr)&t_push_slot, (Optr)slot_Number_Random_HammersleySequence_currentIndex, (Optr)&t_send1, (Optr)PSend21822, (Optr)&t_method_return);
    Method PMethod21816 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21817, 2, PAssign21818, PSend21822);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod21816, Number_Random_HammersleySequence_Class);
    store_method(Number_Random_HammersleySequence_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_refresh() {
    Symbol SMB_refresh = new_Symbol(L"refresh");
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend21826 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)slot_Number_Random_PrimeSequence_size);
    Assign PAssign21825 = new_Assign((Optr)slot_Number_Random_HammersleySequence_samples, (Optr)PSend21826);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray21828 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend21830 = new_Send((Optr)VAR_i_1_0, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_sampleAt_ = new_Symbol(L"sampleAt:");
    // sampleAt:. 
    Send PSend21831 = new_Send((Optr)self, SMB_sampleAt_, 1, (Optr)PSend21830);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend21832 = new_Send((Optr)slot_Number_Random_HammersleySequence_samples, SMB_at_put_, 2, (Optr)VAR_i_1_0, (Optr)PSend21831);
    Array PThreadedCode21829 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Number_Random_HammersleySequence_samples, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend21830, (Optr)&t_send1, (Optr)PSend21831, (Optr)&t_send2, (Optr)PSend21832, (Optr)&t_method_return);
    Block PBlock21827 = new_Block_with(PArray21828, empty_Array, PThreadedCode21829, 1, PSend21832);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend21833 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)slot_Number_Random_PrimeSequence_size, (Optr)PBlock21827);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend21835 = new_Send((Optr)slot_Number_Random_HammersleySequence_currentIndex, SMB__modulo_, 1, (Optr)slot_Number_Random_PrimeSequence_size);
    Assign PAssign21834 = new_Assign((Optr)slot_Number_Random_HammersleySequence_currentIndex, (Optr)PSend21835);
    Array PThreadedCode21824 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign21825, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_slot, (Optr)slot_Number_Random_PrimeSequence_size, (Optr)&t_send1, (Optr)PSend21826, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Number_Random_PrimeSequence_size, (Optr)&t_push_closure, (Optr)PBlock21827, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend21833, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21834, (Optr)&t_push_slot, (Optr)slot_Number_Random_HammersleySequence_currentIndex, (Optr)&t_push_slot, (Optr)slot_Number_Random_PrimeSequence_size, (Optr)&t_send1, (Optr)PSend21835, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21823 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21824, 4, PAssign21825, PSend21833, PAssign21834, self);
    
    MethodClosure MC_SMB_refresh = new_MethodClosure((Method)PMethod21823, Number_Random_HammersleySequence_Class);
    store_method(Number_Random_HammersleySequence_Class, SMB_refresh, MC_SMB_refresh);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign21838 = new_Assign((Optr)slot_Number_Random_HammersleySequence_currentIndex, (Optr)int_0_Const);
    SmallInt int_100 = new_SmallInt(100);
    Constant int_100_Const = new_Constant((Optr)int_100);
    Assign PAssign21839 = new_Assign((Optr)slot_Number_Random_PrimeSequence_size, (Optr)int_100_Const);
    Super PSuper21840 = new_Super(SMB_initialize, 0);
    Array PThreadedCode21837 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign21838, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21839, (Optr)&t_push1, (Optr)int_100, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper21840, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod21836 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode21837, 4, PAssign21838, PAssign21839, PSuper21840, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod21836, Number_Random_HammersleySequence_Class);
    store_method(Number_Random_HammersleySequence_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray21842 = new_Array_with(1, (Optr)VAR_index_0_0);
    Symbol SMB_atWrap_ = new_Symbol(L"atWrap:");
    // atWrap:. 
    Send PSend21844 = new_Send((Optr)slot_Number_Random_HammersleySequence_samples, SMB_atWrap_, 1, (Optr)VAR_index_0_0);
    Array PThreadedCode21843 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Number_Random_HammersleySequence_samples, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send1, (Optr)PSend21844, (Optr)&t_method_return);
    Method PMethod21841 = new_Method_with(PArray21842, empty_Array, empty_Array, PThreadedCode21843, 1, PSend21844);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod21841, Number_Random_HammersleySequence_Class);
    store_method(Number_Random_HammersleySequence_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_sampleAt_() {
    Symbol SMB_sampleAt_ = new_Symbol(L"sampleAt:");
    Variable VAR_index_0_0 = new_Variable_named(L"index", 0);
    Array PArray21846 = new_Array_with(1, (Optr)VAR_index_0_0);
    Variable VAR_output_0_1 = new_Variable_named(L"output", 0);
    Variable VAR_fraction_0_2 = new_Variable_named(L"fraction", 0);
    Variable VAR_copyOfIndex_0_3 = new_Variable_named(L"copyOfIndex", 0);
    Variable VAR_remainder_0_4 = new_Variable_named(L"remainder", 0);
    Array PArray21847 = new_Array_with(4, (Optr)VAR_output_0_1, (Optr)VAR_fraction_0_2, (Optr)VAR_copyOfIndex_0_3, (Optr)VAR_remainder_0_4);
    Float float_0_0 = new_Float(0.0);
    Constant float_0_0_Const = new_Constant((Optr)float_0_0);
    Assign PAssign21849 = new_Assign((Optr)VAR_output_0_1, (Optr)float_0_0_Const);
    Float float_1_0 = new_Float(1.0);
    Constant float_1_0_Const = new_Constant((Optr)float_1_0);
    Symbol SMB__divide_ = new_Symbol(L"/");
    // /. 
    Send PSend21851 = new_Send((Optr)float_1_0_Const, SMB__divide_, 1, (Optr)slot_Number_Random_PrimeSequence_prime);
    Assign PAssign21850 = new_Assign((Optr)VAR_fraction_0_2, (Optr)PSend21851);
    Symbol SMB_asFloat = new_Symbol(L"asFloat");
    // asFloat. 
    Send PSend21853 = new_Send((Optr)VAR_index_0_0, SMB_asFloat, 0);
    Assign PAssign21852 = new_Assign((Optr)VAR_copyOfIndex_0_3, (Optr)PSend21853);
    Symbol SMB__gt_ = new_Symbol(L">");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // >. 
    Send PSend21856 = new_Send((Optr)VAR_copyOfIndex_0_3, SMB__gt_, 1, (Optr)int_0_Const);
    Array PThreadedCode21855 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR_copyOfIndex_0_3, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend21856, (Optr)&t_block_return);
    Block PBlock21854 = new_Block_with(empty_Array, empty_Array, PThreadedCode21855, 1, PSend21856);
    Symbol SMB__modulo_ = new_Symbol(L"\\\\");
    // \\. 
    Send PSend21860 = new_Send((Optr)VAR_copyOfIndex_0_3, SMB__modulo_, 1, (Optr)slot_Number_Random_PrimeSequence_prime);
    Assign PAssign21859 = new_Assign((Optr)VAR_remainder_0_4, (Optr)PSend21860);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB__times_ = new_Symbol(L"*");
    // *. 
    Send PSend21863 = new_Send((Optr)VAR_fraction_0_2, SMB__times_, 1, (Optr)VAR_remainder_0_4);
    // +. 
    Send PSend21862 = new_Send((Optr)VAR_output_0_1, SMB__plus_, 1, (Optr)PSend21863);
    Assign PAssign21861 = new_Assign((Optr)VAR_output_0_1, (Optr)PSend21862);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend21866 = new_Send((Optr)VAR_copyOfIndex_0_3, SMB__minus_, 1, (Optr)VAR_remainder_0_4);
    // /. 
    Send PSend21865 = new_Send((Optr)PSend21866, SMB__divide_, 1, (Optr)slot_Number_Random_PrimeSequence_prime);
    Assign PAssign21864 = new_Assign((Optr)VAR_copyOfIndex_0_3, (Optr)PSend21865);
    // /. 
    Send PSend21868 = new_Send((Optr)VAR_fraction_0_2, SMB__divide_, 1, (Optr)slot_Number_Random_PrimeSequence_prime);
    Assign PAssign21867 = new_Assign((Optr)VAR_fraction_0_2, (Optr)PSend21868);
    Array PThreadedCode21858 = instantiate_Array_with(ThreadedCode_Class, 0, 48, (Optr)&t_push1, (Optr)PAssign21859, (Optr)&t_push_variable, (Optr)VAR_copyOfIndex_0_3, (Optr)&t_push_slot, (Optr)slot_Number_Random_PrimeSequence_prime, (Optr)&t_send1, (Optr)PSend21860, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21861, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_fraction_0_2, (Optr)&t_push_variable, (Optr)VAR_remainder_0_4, (Optr)&t_send1, (Optr)PSend21863, (Optr)&t_send1, (Optr)PSend21862, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21864, (Optr)&t_push_variable, (Optr)VAR_copyOfIndex_0_3, (Optr)&t_push_variable, (Optr)VAR_remainder_0_4, (Optr)&t_send1, (Optr)PSend21866, (Optr)&t_push_slot, (Optr)slot_Number_Random_PrimeSequence_prime, (Optr)&t_send1, (Optr)PSend21865, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21867, (Optr)&t_push_variable, (Optr)VAR_fraction_0_2, (Optr)&t_push_slot, (Optr)slot_Number_Random_PrimeSequence_prime, (Optr)&t_send1, (Optr)PSend21868, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock21857 = new_Block_with(empty_Array, empty_Array, PThreadedCode21858, 4, PAssign21859, PAssign21861, PAssign21864, PAssign21867);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend21869 = new_Send((Optr)PBlock21854, SMB_whileTrue_, 1, (Optr)PBlock21857);
    Array PThreadedCode21848 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign21849, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21850, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Number_Random_PrimeSequence_prime, (Optr)&t_send1, (Optr)PSend21851, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign21852, (Optr)&t_push_variable, (Optr)VAR_index_0_0, (Optr)&t_send0, (Optr)PSend21853, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock21854, (Optr)&t_push_closure, (Optr)PBlock21857, (Optr)&t_send1, (Optr)PSend21869, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_method_return);
    Method PMethod21845 = new_Method_with(PArray21846, PArray21847, empty_Array, PThreadedCode21848, 5, PAssign21849, PAssign21850, PAssign21852, PSend21869, VAR_output_0_1);
    
    MethodClosure MC_SMB_sampleAt_ = new_MethodClosure((Method)PMethod21845, Number_Random_HammersleySequence_Class);
    store_method(Number_Random_HammersleySequence_Class, SMB_sampleAt_, MC_SMB_sampleAt_);
}


static void init_class_SMB_randomArray_() {
    Symbol SMB_randomArray_ = new_Symbol(L"randomArray:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray21871 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend21873 = new_Send((Optr)self, SMB_instance, 0);
    Symbol SMB_size_ = new_Symbol(L"size:");
    // size:. 
    Send PSend21874 = new_Send((Optr)PSend21873, SMB_size_, 1, (Optr)VAR_size_0_0);
    Super PSuper21875 = new_Super(SMB_randomArray_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode21872 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend21873, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend21874, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_super1, (Optr)PSuper21875, (Optr)&t_method_return);
    Method PMethod21870 = new_Method_with(PArray21871, empty_Array, empty_Array, PThreadedCode21872, 2, PSend21874, PSuper21875);
    
    MethodClosure MC_SMB_randomArray_ = new_MethodClosure((Method)PMethod21870, HEADER(Number_Random_HammersleySequence_Class));
    store_method(HEADER(Number_Random_HammersleySequence_Class), SMB_randomArray_, MC_SMB_randomArray_);
}

void init_Number_Random_HammersleySequence_layout() {
    layout_Number_Random_HammersleySequence_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_Number_Random_HammersleySequence_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Number_Random_HammersleySequence_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Number_Random_HammersleySequence_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Number_Random_HammersleySequence_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Number_Random_HammersleySequence_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_Number_Random_HammersleySequence_Class_class)->values[5] = slot_Number_Random_Random_Class_class_instance; // instance 
    ((Array)layout_Number_Random_HammersleySequence_Class_class)->values[6] = slot_Number_Random_PrimeSequence_Class_class_prime; // prime 
    
    Symbol  SMB_HammersleySequence = new_Symbol(L"HammersleySequence");
    slot_Number_Random_HammersleySequence_currentIndex = (Optr)new_Slot(2, L"currentIndex");
    slot_Number_Random_HammersleySequence_samples = (Optr)new_Slot(3, L"samples");
    layout_Number_Random_HammersleySequence = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Number_Random_HammersleySequence)->values[0] = slot_Number_Random_PrimeSequence_prime; // prime 
    ((Array)layout_Number_Random_HammersleySequence)->values[1] = slot_Number_Random_PrimeSequence_size; // size 
    ((Array)layout_Number_Random_HammersleySequence)->values[2] = slot_Number_Random_HammersleySequence_currentIndex; // currentIndex 
    ((Array)layout_Number_Random_HammersleySequence)->values[3] = slot_Number_Random_HammersleySequence_samples; // samples 
    Number_Random_HammersleySequence_Class = (Class)new_Class(Number_Random_PrimeSequence_Class, layout_Number_Random_HammersleySequence_Class_class);
    Number_Random_HammersleySequence_Class->layout = layout_Number_Random_HammersleySequence;
    Number_Random_HammersleySequence_Class->name = SMB_HammersleySequence;
    
}

void init_Number_Random_HammersleySequence_methods() {
    init_SMB_next();
    init_SMB_refresh();
    init_SMB_initialize();
    init_SMB_at_();
    init_SMB_sampleAt_();
    init_class_SMB_randomArray_();
    
}