#include <lib/class/PBenchmark/Collection/Dictionary/Dictionary.h>


Optr layout_PBenchmark_Collection_Dictionary_Dictionary_Class_class;
Optr layout_PBenchmark_Collection_Dictionary_Dictionary;


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    Super PSuper24959 = new_Super(SMB_setUp, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_dictSize = new_Symbol(L"dictSize");
    // dictSize. 
    Send PSend24962 = new_Send((Optr)self, SMB_dictSize, 0);
    // new:. 
    Send PSend24961 = new_Send((Optr)Dictionary_classReference, SMB_new_, 1, (Optr)PSend24962);
    Assign PAssign24960 = new_Assign((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)PSend24961);
    // dictSize. 
    Send PSend24963 = new_Send((Optr)self, SMB_dictSize, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray24965 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_key_ = new_Symbol(L"key:");
    // key:. 
    Send PSend24967 = new_Send((Optr)self, SMB_key_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend24968 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend24969 = new_Send((Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, SMB_at_put_, 2, (Optr)PSend24967, (Optr)PSend24968);
    Array PThreadedCode24966 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend24967, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend24968, (Optr)&t_send2, (Optr)PSend24969, (Optr)&t_method_return);
    Block PBlock24964 = new_Block_with(PArray24965, empty_Array, PThreadedCode24966, 1, PSend24969);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend24970 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend24963, (Optr)PBlock24964);
    Array PThreadedCode24958 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper24959, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign24960, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24962, (Optr)&t_send1, (Optr)PSend24961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend24963, (Optr)&t_push_closure, (Optr)PBlock24964, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend24970, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod24957 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode24958, 4, PSuper24959, PAssign24960, PSend24970, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod24957, PBenchmark_Collection_Dictionary_Dictionary_Class);
    store_method(PBenchmark_Collection_Dictionary_Dictionary_Class, SMB_setUp, MC_SMB_setUp);
}

void init_PBenchmark_Collection_Dictionary_PBSTDictionary_layout() {
    layout_PBenchmark_Collection_Dictionary_Dictionary_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Dictionary = new_Symbol(L"Dictionary");
    layout_PBenchmark_Collection_Dictionary_Dictionary = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary)->values[2] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dict; // dict 
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary)->values[3] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_dictSize; // dictSize 
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary)->values[4] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_keyBlock; // keyBlock 
    ((Array)layout_PBenchmark_Collection_Dictionary_Dictionary)->values[5] = slot_PBenchmark_Collection_Dictionary_AbstractDictionary_valueBlock; // valueBlock 
    PBenchmark_Collection_Dictionary_Dictionary_Class = (Class)new_Class(PBenchmark_Collection_Dictionary_AbstractDictionary_Class, layout_PBenchmark_Collection_Dictionary_Dictionary_Class_class);
    PBenchmark_Collection_Dictionary_Dictionary_Class->layout = layout_PBenchmark_Collection_Dictionary_Dictionary;
    PBenchmark_Collection_Dictionary_Dictionary_Class->name = SMB_Dictionary;
    
}

void init_PBenchmark_Collection_Dictionary_PBSTDictionary_methods() {
    init_SMB_setUp();
    
}