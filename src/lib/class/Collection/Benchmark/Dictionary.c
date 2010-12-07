#include <lib/class/Collection/Benchmark/Dictionary.h>


Optr layout_Collection_Benchmark_Dictionary_Class_class;
Optr layout_Collection_Benchmark_Dictionary;


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
<<<<<<< HEAD
    Super PSuper7384 = new_Super(SMB_setUp, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7387 = new_Send((Optr)self, SMB_dictSize, 0);
    // new:. 
    Send PSend7386 = new_Send((Optr)Dictionary_classReference, SMB_new_, 1, (Optr)PSend7387);
    Assign PAssign7385 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)PSend7386);
    // dictSize. 
    Send PSend7388 = new_Send((Optr)self, SMB_dictSize, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7390 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7392 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7393 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7394 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_put_, 2, (Optr)PSend7392, (Optr)PSend7393);
    Array PThreadedCode7391 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7392, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7393, (Optr)&t_send2, (Optr)PSend7394, (Optr)&t_method_return);
    Block PBlock7389 = new_Block_with(PArray7390, empty_Array, PThreadedCode7391, 1, PSend7394);
=======
    Super PSuper7362 = new_Super(SMB_setUp, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend7365 = new_Send((Optr)self, SMB_dictSize, 0);
    // new:. 
    Send PSend7364 = new_Send((Optr)Dictionary_classReference, SMB_new_, 1, (Optr)PSend7365);
    Assign PAssign7363 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)PSend7364);
    // dictSize. 
    Send PSend7366 = new_Send((Optr)self, SMB_dictSize, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7368 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend7370 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7371 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend7372 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_put_, 2, (Optr)PSend7370, (Optr)PSend7371);
    Array PThreadedCode7369 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7370, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7371, (Optr)&t_send2, (Optr)PSend7372, (Optr)&t_method_return);
    Block PBlock7367 = new_Block_with(PArray7368, empty_Array, PThreadedCode7369, 1, PSend7372);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend7395 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7388, (Optr)PBlock7389);
    Array PThreadedCode7383 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7384, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7385, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7387, (Optr)&t_send1, (Optr)PSend7386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7388, (Optr)&t_push_closure, (Optr)PBlock7389, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7395, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7382 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7383, 4, PSuper7384, PAssign7385, PSend7395, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7382, Collection_Benchmark_Dictionary_Class);
=======
    Send PSend7373 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7366, (Optr)PBlock7367);
    Array PThreadedCode7361 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper7362, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign7363, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7365, (Optr)&t_send1, (Optr)PSend7364, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend7366, (Optr)&t_push_closure, (Optr)PBlock7367, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7373, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7360 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7361, 4, PSuper7362, PAssign7363, PSend7373, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7360, Collection_Benchmark_Dictionary_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collection_Benchmark_Dictionary_Class, SMB_setUp, MC_SMB_setUp);
}

void init_Collection_Benchmark_PBDictionary_layout() {
    layout_Collection_Benchmark_Dictionary_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collection_Benchmark_Dictionary_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collection_Benchmark_Dictionary_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collection_Benchmark_Dictionary_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collection_Benchmark_Dictionary_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collection_Benchmark_Dictionary_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Dictionary = new_Symbol(L"Dictionary");
    layout_Collection_Benchmark_Dictionary = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Collection_Benchmark_Dictionary)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_Collection_Benchmark_Dictionary)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    ((Array)layout_Collection_Benchmark_Dictionary)->values[2] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict; // dict 
    ((Array)layout_Collection_Benchmark_Dictionary)->values[3] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize; // dictSize 
    ((Array)layout_Collection_Benchmark_Dictionary)->values[4] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock; // keyBlock 
    ((Array)layout_Collection_Benchmark_Dictionary)->values[5] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock; // valueBlock 
    Collection_Benchmark_Dictionary_Class = (Class)new_Class(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, layout_Collection_Benchmark_Dictionary_Class_class);
    Collection_Benchmark_Dictionary_Class->layout = layout_Collection_Benchmark_Dictionary;
    Collection_Benchmark_Dictionary_Class->name = SMB_Dictionary;
    
}

void init_Collection_Benchmark_PBDictionary_methods() {
    init_SMB_setUp();
    
}