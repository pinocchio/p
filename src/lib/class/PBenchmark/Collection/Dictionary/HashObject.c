#include <lib/class/PBenchmark/Collection/Dictionary/HashObject.h>


Optr layout_PBenchmark_Collection_Dictionary_HashObject_Class_class;
Optr slot_PBenchmark_Collection_Dictionary_HashObject_hash;
Optr layout_PBenchmark_Collection_Dictionary_HashObject;


static void init_SMB_hash() {
    Symbol SMB_hash = new_Symbol(L"hash");
    Array PThreadedCode24967 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_HashObject_hash, (Optr)&t_method_return);
    Method PMethod24966 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24967, 1, slot_PBenchmark_Collection_Dictionary_HashObject_hash);
    
    MethodClosure MC_SMB_hash = new_MethodClosure((Method)PMethod24966, PBenchmark_Collection_Dictionary_HashObject_Class);
    store_method(PBenchmark_Collection_Dictionary_HashObject_Class, SMB_hash, MC_SMB_hash);
}


static void init_SMB_hash_() {
    Symbol SMB_hash_ = new_Symbol(L"hash:");
    Variable VAR_anInt_0_0 = new_Variable_named(L"anInt", 0);
    Array PArray24969 = new_Array_with(1, (Optr)VAR_anInt_0_0);
    Assign PAssign24971 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_HashObject_hash, (Optr)VAR_anInt_0_0);
    Array PThreadedCode24970 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign24971, (Optr)&t_push_variable, (Optr)VAR_anInt_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24968 = new_Method_with(PArray24969, empty_Array, empty_Array, PThreadedCode24970, 2, PAssign24971, self);
    
    MethodClosure MC_SMB_hash_ = new_MethodClosure((Method)PMethod24968, PBenchmark_Collection_Dictionary_HashObject_Class);
    store_method(PBenchmark_Collection_Dictionary_HashObject_Class, SMB_hash_, MC_SMB_hash_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_hash = new_Symbol(L"hash");
    Super PSuper24975 = new_Super(SMB_hash, 0);
    Assign PAssign24974 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_HashObject_hash, (Optr)PSuper24975);
    Array PThreadedCode24973 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign24974, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24975, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24972 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24973, 2, PAssign24974, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod24972, PBenchmark_Collection_Dictionary_HashObject_Class);
    store_method(PBenchmark_Collection_Dictionary_HashObject_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_class_SMB_with_() {
    Symbol SMB_with_ = new_Symbol(L"with:");
    Variable VAR_hash_0_0 = new_Variable_named(L"hash", 0);
    Array PArray24977 = new_Array_with(1, (Optr)VAR_hash_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend24979 = new_Send((Optr)self, SMB_new, 0);
    Symbol SMB_hash_ = new_Symbol(L"hash:");
    // hash:. 
    Send PSend24980 = new_Send((Optr)PSend24979, SMB_hash_, 1, (Optr)VAR_hash_0_0);
    Array PThreadedCode24978 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24979, (Optr)&t_push_variable, (Optr)VAR_hash_0_0, (Optr)&t_send1, (Optr)PSend24980, (Optr)&t_method_return);
    Method PMethod24976 = new_Method_with(PArray24977, empty_Array, empty_Array, PThreadedCode24978, 1, PSend24980);
    
    MethodClosure MC_SMB_with_ = new_MethodClosure((Method)PMethod24976, HEADER(PBenchmark_Collection_Dictionary_HashObject_Class));
    store_method(HEADER(PBenchmark_Collection_Dictionary_HashObject_Class), SMB_with_, MC_SMB_with_);
}

void init_PBenchmark_Collection_Dictionary_HashObject_layout() {
    layout_PBenchmark_Collection_Dictionary_HashObject_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PBenchmark_Collection_Dictionary_HashObject_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PBenchmark_Collection_Dictionary_HashObject_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PBenchmark_Collection_Dictionary_HashObject_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PBenchmark_Collection_Dictionary_HashObject_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PBenchmark_Collection_Dictionary_HashObject_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_HashObject = new_Symbol(L"HashObject");
    slot_PBenchmark_Collection_Dictionary_HashObject_hash = (Optr)new_Slot(0, L"hash");
    layout_PBenchmark_Collection_Dictionary_HashObject = (Optr)create_layout_with_vars(ObjectLayout_Class, 1);
    ((Array)layout_PBenchmark_Collection_Dictionary_HashObject)->values[0] = slot_PBenchmark_Collection_Dictionary_HashObject_hash; // hash 
    PBenchmark_Collection_Dictionary_HashObject_Class = (Class)new_Class(Object_Class, layout_PBenchmark_Collection_Dictionary_HashObject_Class_class);
    PBenchmark_Collection_Dictionary_HashObject_Class->layout = layout_PBenchmark_Collection_Dictionary_HashObject;
    PBenchmark_Collection_Dictionary_HashObject_Class->name = SMB_HashObject;
    
}

void init_PBenchmark_Collection_Dictionary_HashObject_methods() {
    init_SMB_hash();
    init_SMB_hash_();
    init_SMB_initialize();
    init_class_SMB_with_();
    
}