#include <lib/class/PBenchmark/Collection/Dictionary/DummyDictionary.h>


Optr layout_PBenchmark_Collection_Dictionary_DummyDictionary_Class_class;
Optr slot_PBenchmark_Collection_Dictionary_DummyDictionary_size;
Optr layout_PBenchmark_Collection_Dictionary_DummyDictionary;


static void init_SMB_at_ifAbsentPut_() {
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Variable VAR_aSmallInteger_0_0 = new_Variable_named(L"aSmallInteger", 0);
    Variable VAR_aSmallInteger2_0_1 = new_Variable_named(L"aSmallInteger2", 0);
    Array PArray24708 = new_Array_with(2, (Optr)VAR_aSmallInteger_0_0, (Optr)VAR_aSmallInteger2_0_1);
    Array PThreadedCode24709 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24707 = new_Method_with(PArray24708, empty_Array, empty_Array, PThreadedCode24709, 1, self);
    
    MethodClosure MC_SMB_at_ifAbsentPut_ = new_MethodClosure((Method)PMethod24707, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_at_ifAbsentPut_, MC_SMB_at_ifAbsentPut_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode24711 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)&t_method_return);
    Method PMethod24710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24711, 1, slot_PBenchmark_Collection_Dictionary_DummyDictionary_size);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod24710, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_removeKey_() {
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray24713 = new_Array_with(1, (Optr)VAR_value_0_0);
    Array PThreadedCode24714 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24712 = new_Method_with(PArray24713, empty_Array, empty_Array, PThreadedCode24714, 1, self);
    
    MethodClosure MC_SMB_removeKey_ = new_MethodClosure((Method)PMethod24712, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_removeKey_, MC_SMB_removeKey_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign24717 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)int_0_Const);
    Array PThreadedCode24716 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign24717, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24715 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24716, 2, PAssign24717, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24715, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray24719 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode24720 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24718 = new_Method_with(PArray24719, empty_Array, empty_Array, PThreadedCode24720, 1, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod24718, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_size_() {
    Symbol SMB_size_ = new_Symbol(L"size:");
    Variable VAR_number_0_0 = new_Variable_named(L"number", 0);
    Array PArray24722 = new_Array_with(1, (Optr)VAR_number_0_0);
    Assign PAssign24724 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)VAR_number_0_0);
    Array PThreadedCode24723 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24724, (Optr)&t_push_variable, (Optr)VAR_number_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24721 = new_Method_with(PArray24722, empty_Array, empty_Array, PThreadedCode24723, 2, PAssign24724, self);
    
    MethodClosure MC_SMB_size_ = new_MethodClosure((Method)PMethod24721, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_size_, MC_SMB_size_);
}


static void init_SMB_keysAndValuesDo_() {
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Array PArray24726 = new_Array_with(1, (Optr)VAR_aBlockClosure_0_0);
    Array PThreadedCode24727 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24725 = new_Method_with(PArray24726, empty_Array, empty_Array, PThreadedCode24727, 1, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod24725, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_keysAndValuesDo_, MC_SMB_keysAndValuesDo_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray24729 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24731 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_size_ = new_Symbol(L"size:");
    // size:. 
    Send PSend24732 = new_Send((Optr)PSend24731, SMB_size_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode24730 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24731, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend24732, (Optr)&t_method_return);
    Method PMethod24728 = new_Method_with(PArray24729, empty_Array, empty_Array, PThreadedCode24730, 1, PSend24732);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod24728, HEADER(PBenchmark_Collection_Dictionary_DummyDictionary_Class));
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