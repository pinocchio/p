#include <lib/class/PBenchmark/Collection/Dictionary/DummyDictionary.h>


Optr layout_PBenchmark_Collection_Dictionary_DummyDictionary_Class_class;
Optr slot_PBenchmark_Collection_Dictionary_DummyDictionary_size;
Optr layout_PBenchmark_Collection_Dictionary_DummyDictionary;


static void init_SMB_at_ifAbsentPut_() {
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Variable VAR_aSmallInteger_0_0 = new_Variable_named(L"aSmallInteger", 0);
    Variable VAR_aSmallInteger2_0_1 = new_Variable_named(L"aSmallInteger2", 0);
<<<<<<< HEAD
    Array PArray24889 = new_Array_with(2, (Optr)VAR_aSmallInteger_0_0, (Optr)VAR_aSmallInteger2_0_1);
    Array PThreadedCode24890 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24888 = new_Method_with(PArray24889, empty_Array, empty_Array, PThreadedCode24890, 1, self);
    
    MethodClosure MC_SMB_at_ifAbsentPut_ = new_MethodClosure((Method)PMethod24888, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
=======
    Array PArray24706 = new_Array_with(2, (Optr)VAR_aSmallInteger_0_0, (Optr)VAR_aSmallInteger2_0_1);
    Array PThreadedCode24707 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24705 = new_Method_with(PArray24706, empty_Array, empty_Array, PThreadedCode24707, 1, self);
    
    MethodClosure MC_SMB_at_ifAbsentPut_ = new_MethodClosure((Method)PMethod24705, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_at_ifAbsentPut_, MC_SMB_at_ifAbsentPut_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
<<<<<<< HEAD
    Array PThreadedCode24892 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)&t_method_return);
    Method PMethod24891 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24892, 1, slot_PBenchmark_Collection_Dictionary_DummyDictionary_size);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod24891, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
=======
    Array PThreadedCode24709 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)&t_method_return);
    Method PMethod24708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24709, 1, slot_PBenchmark_Collection_Dictionary_DummyDictionary_size);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod24708, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_size, MC_SMB_size);
}


<<<<<<< HEAD
static void init_SMB_size_() {
    Symbol SMB_size_ = new_Symbol(L"size:");
    Variable VAR_number_0_0 = new_Variable_named(L"number", 0);
    Array PArray24894 = new_Array_with(1, (Optr)VAR_number_0_0);
    Assign PAssign24896 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)VAR_number_0_0);
    Array PThreadedCode24895 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24896, (Optr)&t_push_variable, (Optr)VAR_number_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24893 = new_Method_with(PArray24894, empty_Array, empty_Array, PThreadedCode24895, 2, PAssign24896, self);
    
    MethodClosure MC_SMB_size_ = new_MethodClosure((Method)PMethod24893, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_size_, MC_SMB_size_);
}


static void init_SMB_removeKey_() {
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray24898 = new_Array_with(1, (Optr)VAR_value_0_0);
    Array PThreadedCode24899 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24897 = new_Method_with(PArray24898, empty_Array, empty_Array, PThreadedCode24899, 1, self);
    
    MethodClosure MC_SMB_removeKey_ = new_MethodClosure((Method)PMethod24897, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
=======
static void init_SMB_removeKey_() {
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray24711 = new_Array_with(1, (Optr)VAR_value_0_0);
    Array PThreadedCode24712 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24710 = new_Method_with(PArray24711, empty_Array, empty_Array, PThreadedCode24712, 1, self);
    
    MethodClosure MC_SMB_removeKey_ = new_MethodClosure((Method)PMethod24710, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_removeKey_, MC_SMB_removeKey_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
<<<<<<< HEAD
    Assign PAssign24902 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)int_0_Const);
    Array PThreadedCode24901 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign24902, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24900 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24901, 2, PAssign24902, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24900, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
=======
    Assign PAssign24715 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)int_0_Const);
    Array PThreadedCode24714 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign24715, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24713 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24714, 2, PAssign24715, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24713, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray24904 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode24905 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24903 = new_Method_with(PArray24904, empty_Array, empty_Array, PThreadedCode24905, 1, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod24903, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
=======
    Array PArray24717 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode24718 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24716 = new_Method_with(PArray24717, empty_Array, empty_Array, PThreadedCode24718, 1, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod24716, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_size_() {
    Symbol SMB_size_ = new_Symbol(L"size:");
    Variable VAR_number_0_0 = new_Variable_named(L"number", 0);
    Array PArray24720 = new_Array_with(1, (Optr)VAR_number_0_0);
    Assign PAssign24722 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)VAR_number_0_0);
    Array PThreadedCode24721 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24722, (Optr)&t_push_variable, (Optr)VAR_number_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24719 = new_Method_with(PArray24720, empty_Array, empty_Array, PThreadedCode24721, 2, PAssign24722, self);
    
    MethodClosure MC_SMB_size_ = new_MethodClosure((Method)PMethod24719, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_size_, MC_SMB_size_);
}


static void init_SMB_keysAndValuesDo_() {
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
<<<<<<< HEAD
    Array PArray24907 = new_Array_with(1, (Optr)VAR_aBlockClosure_0_0);
    Array PThreadedCode24908 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24906 = new_Method_with(PArray24907, empty_Array, empty_Array, PThreadedCode24908, 1, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod24906, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
=======
    Array PArray24724 = new_Array_with(1, (Optr)VAR_aBlockClosure_0_0);
    Array PThreadedCode24725 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24723 = new_Method_with(PArray24724, empty_Array, empty_Array, PThreadedCode24725, 1, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod24723, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_keysAndValuesDo_, MC_SMB_keysAndValuesDo_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
<<<<<<< HEAD
    Array PArray24910 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24912 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_size_ = new_Symbol(L"size:");
    // size:. 
    Send PSend24913 = new_Send((Optr)PSend24912, SMB_size_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode24911 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24912, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend24913, (Optr)&t_method_return);
    Method PMethod24909 = new_Method_with(PArray24910, empty_Array, empty_Array, PThreadedCode24911, 1, PSend24913);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod24909, HEADER(PBenchmark_Collection_Dictionary_DummyDictionary_Class));
=======
    Array PArray24727 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24729 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_size_ = new_Symbol(L"size:");
    // size:. 
    Send PSend24730 = new_Send((Optr)PSend24729, SMB_size_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode24728 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24729, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend24730, (Optr)&t_method_return);
    Method PMethod24726 = new_Method_with(PArray24727, empty_Array, empty_Array, PThreadedCode24728, 1, PSend24730);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod24726, HEADER(PBenchmark_Collection_Dictionary_DummyDictionary_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(PBenchmark_Collection_Dictionary_DummyDictionary_Class), SMB_new_, MC_SMB_new_);
}

void init_PBenchmark_Collection_Dictionary_DummyDictionary_layout() {
    layout_PBenchmark_Collection_Dictionary_DummyDictionary_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PBenchmark_Collection_Dictionary_DummyDictionary_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PBenchmark_Collection_Dictionary_DummyDictionary_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PBenchmark_Collection_Dictionary_DummyDictionary_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PBenchmark_Collection_Dictionary_DummyDictionary_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PBenchmark_Collection_Dictionary_DummyDictionary_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_DummyDictionary = new_Symbol(L"DummyDictionary");
    slot_PBenchmark_Collection_Dictionary_DummyDictionary_size = (Optr)new_Slot(0, L"size");
    layout_PBenchmark_Collection_Dictionary_DummyDictionary = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PBenchmark_Collection_Dictionary_DummyDictionary)->values[0] = slot_PBenchmark_Collection_Dictionary_DummyDictionary_size; // size 
    PBenchmark_Collection_Dictionary_DummyDictionary_Class = (Class)new_Class(Object_Class, layout_PBenchmark_Collection_Dictionary_DummyDictionary_Class_class);
    PBenchmark_Collection_Dictionary_DummyDictionary_Class->layout = layout_PBenchmark_Collection_Dictionary_DummyDictionary;
    PBenchmark_Collection_Dictionary_DummyDictionary_Class->name = SMB_DummyDictionary;
    
}

void init_PBenchmark_Collection_Dictionary_DummyDictionary_methods() {
    init_SMB_at_ifAbsentPut_();
    init_SMB_size();
    init_SMB_removeKey_();
    init_SMB_initialize();
    init_SMB_do_();
    init_SMB_size_();
    init_SMB_keysAndValuesDo_();
    init_class_SMB_new_();
    
}