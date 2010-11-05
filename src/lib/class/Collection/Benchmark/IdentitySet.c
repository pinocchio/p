#include <lib/class/Collection/Benchmark/IdentitySet.h>


Optr layout_Collection_Benchmark_IdentitySet_Class_class;
Optr layout_Collection_Benchmark_IdentitySet;


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Super PSuper7405 = new_Super(SMB_setUp, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_setSize = new_Symbol(L"setSize");
    // setSize. 
    Send PSend7408 = new_Send((Optr)self, SMB_setSize, 0);
    // new:. 
    Send PSend7407 = new_Send((Optr)IdentitySet_classReference, SMB_new_, 1, (Optr)PSend7408);
    Assign PAssign7406 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)PSend7407);
    // setSize. 
    Send PSend7409 = new_Send((Optr)self, SMB_setSize, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7411 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7413 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7414 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7413);
    Array PThreadedCode7412 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7413, (Optr)&t_send1, (Optr)PSend7414, (Optr)&t_method_return);
    Block PBlock7410 = new_Block_with(PArray7411, empty_Array, PThreadedCode7412, 1, PSend7414);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7415 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7409, (Optr)PBlock7410);
    Array PThreadedCode7404 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7405, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7406, (Optr)&t_push_class_reference, (Optr)IdentitySet_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7408, (Optr)&t_send1, (Optr)PSend7407, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7409, (Optr)&t_push_closure, (Optr)PBlock7410, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7415, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7403 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7404, 4, PSuper7405, PAssign7406, PSend7415, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7403, Collection_Benchmark_IdentitySet_Class);
    store_method(Collection_Benchmark_IdentitySet_Class, SMB_setUp, MC_SMB_setUp);
}

void init_Collection_Benchmark_PBIdentitySet_layout() {
    layout_Collection_Benchmark_IdentitySet_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Benchmark_IdentitySet_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Benchmark_IdentitySet_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Benchmark_IdentitySet_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Benchmark_IdentitySet_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Benchmark_IdentitySet_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_IdentitySet = new_Symbol(L"IdentitySet");
    layout_Collection_Benchmark_IdentitySet = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_Collection_Benchmark_IdentitySet)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_Collection_Benchmark_IdentitySet)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    ((Array)layout_Collection_Benchmark_IdentitySet)->values[2] = slot_PBenchmark_Collection_Set_AbstractSet_set; // set 
    ((Array)layout_Collection_Benchmark_IdentitySet)->values[3] = slot_PBenchmark_Collection_Set_AbstractSet_setSize; // setSize 
    Collection_Benchmark_IdentitySet_Class = (Class)new_Class(PBenchmark_Collection_Set_AbstractSet_Class, layout_Collection_Benchmark_IdentitySet_Class_class);
    Collection_Benchmark_IdentitySet_Class->layout = layout_Collection_Benchmark_IdentitySet;
    Collection_Benchmark_IdentitySet_Class->name = SMB_IdentitySet;
    
}

void init_Collection_Benchmark_PBIdentitySet_methods() {
    init_SMB_setUp();
    
}