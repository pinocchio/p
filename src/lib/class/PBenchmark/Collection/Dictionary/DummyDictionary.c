#include <lib/class/PBenchmark/Collection/Dictionary/DummyDictionary.h>


Optr layout_PBenchmark_Collection_Dictionary_DummyDictionary_Class_class;
Optr slot_PBenchmark_Collection_Dictionary_DummyDictionary_size;
Optr layout_PBenchmark_Collection_Dictionary_DummyDictionary;


static void init_SMB_at_ifAbsentPut_() {
    Symbol SMB_at_ifAbsentPut_ = new_Symbol(L"at:ifAbsentPut:");
    Variable VAR_aSmallInteger_0_0 = new_Variable_named(L"aSmallInteger", 0);
    Variable VAR_aSmallInteger2_0_1 = new_Variable_named(L"aSmallInteger2", 0);
    Array PArray24927 = new_Array_with(2, (Optr)VAR_aSmallInteger_0_0, (Optr)VAR_aSmallInteger2_0_1);
    Array PThreadedCode24928 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24926 = new_Method_with(PArray24927, empty_Array, empty_Array, PThreadedCode24928, 1, self);
    
    MethodClosure MC_SMB_at_ifAbsentPut_ = new_MethodClosure((Method)PMethod24926, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_at_ifAbsentPut_, MC_SMB_at_ifAbsentPut_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode24930 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)&t_method_return);
    Method PMethod24929 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24930, 1, slot_PBenchmark_Collection_Dictionary_DummyDictionary_size);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod24929, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_size_() {
    Symbol SMB_size_ = new_Symbol(L"size:");
    Variable VAR_number_0_0 = new_Variable_named(L"number", 0);
    Array PArray24932 = new_Array_with(1, (Optr)VAR_number_0_0);
    Assign PAssign24934 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)VAR_number_0_0);
    Array PThreadedCode24933 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24934, (Optr)&t_push_variable, (Optr)VAR_number_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24931 = new_Method_with(PArray24932, empty_Array, empty_Array, PThreadedCode24933, 2, PAssign24934, self);
    
    MethodClosure MC_SMB_size_ = new_MethodClosure((Method)PMethod24931, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_size_, MC_SMB_size_);
}


static void init_SMB_removeKey_() {
    Symbol SMB_removeKey_ = new_Symbol(L"removeKey:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray24936 = new_Array_with(1, (Optr)VAR_value_0_0);
    Array PThreadedCode24937 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24935 = new_Method_with(PArray24936, empty_Array, empty_Array, PThreadedCode24937, 1, self);
    
    MethodClosure MC_SMB_removeKey_ = new_MethodClosure((Method)PMethod24935, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_removeKey_, MC_SMB_removeKey_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign24940 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_DummyDictionary_size, (Optr)int_0_Const);
    Array PThreadedCode24939 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign24940, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24939, 2, PAssign24940, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24938, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray24942 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Array PThreadedCode24943 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24941 = new_Method_with(PArray24942, empty_Array, empty_Array, PThreadedCode24943, 1, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod24941, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_keysAndValuesDo_() {
    Symbol SMB_keysAndValuesDo_ = new_Symbol(L"keysAndValuesDo:");
    Variable VAR_aBlockClosure_0_0 = new_Variable_named(L"aBlockClosure", 0);
    Array PArray24945 = new_Array_with(1, (Optr)VAR_aBlockClosure_0_0);
    Array PThreadedCode24946 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod24944 = new_Method_with(PArray24945, empty_Array, empty_Array, PThreadedCode24946, 1, self);
    
    MethodClosure MC_SMB_keysAndValuesDo_ = new_MethodClosure((Method)PMethod24944, PBenchmark_Collection_Dictionary_DummyDictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_DummyDictionary_Class, SMB_keysAndValuesDo_, MC_SMB_keysAndValuesDo_);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_size_0_0 = new_Variable_named(L"size", 0);
    Array PArray24948 = new_Array_with(1, (Optr)VAR_size_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24950 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_size_ = new_Symbol(L"size:");
    // size:. 
    Send PSend24951 = new_Send((Optr)PSend24950, SMB_size_, 1, (Optr)VAR_size_0_0);
    Array PThreadedCode24949 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24950, (Optr)&t_push_variable, (Optr)VAR_size_0_0, (Optr)&t_send1, (Optr)PSend24951, (Optr)&t_method_return);
    Method PMethod24947 = new_Method_with(PArray24948, empty_Array, empty_Array, PThreadedCode24949, 1, PSend24951);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod24947, HEADER(PBenchmark_Collection_Dictionary_DummyDictionary_Class));
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
    init_SMB_size_();
    init_SMB_removeKey_();
    init_SMB_initialize();
    init_SMB_do_();
    init_SMB_keysAndValuesDo_();
    init_class_SMB_new_();
    
}