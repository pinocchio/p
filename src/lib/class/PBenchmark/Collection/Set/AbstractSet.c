#include <lib/class/PBenchmark/Collection/Set/AbstractSet.h>


Optr layout_PBenchmark_Collection_Set_AbstractSet_Class_class;
Optr slot_PBenchmark_Collection_Set_AbstractSet_set;
Optr slot_PBenchmark_Collection_Set_AbstractSet_setSize;
Optr layout_PBenchmark_Collection_Set_AbstractSet;


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Assign PAssign7332 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)nil_Const);
    Array PThreadedCode7331 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign7332, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7330 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7331, 2, PAssign7332, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7330, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    SmallInt int_10000 = new_SmallInt(10000);
    Symbol SMB_setSize_ = new_Symbol(L"setSize:");
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // setSize:. 
    Send PSend7335 = new_Send((Optr)self, SMB_setSize_, 1, (Optr)int_10000_Const);
    Array PThreadedCode7334 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7335, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7333 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7334, 2, PSend7335, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7333, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchRemove() {
    Symbol SMB_benchRemove = new_Symbol(L"benchRemove");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7338 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    SmallInt int_90 = new_SmallInt(90);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7340 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7342 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7343 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_remove_, 1, (Optr)PSend7342);
    Array PThreadedCode7341 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7342, (Optr)&t_send1, (Optr)PSend7343, (Optr)&t_method_return);
    Block PBlock7339 = new_Block_with(PArray7340, empty_Array, PThreadedCode7341, 1, PSend7343);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_90_Const = new_Constant((Optr)int_90);
    // to:by:do:. 
    Send PSend7344 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7338, (Optr)int_90_Const, (Optr)PBlock7339);
    Array PThreadedCode7337 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7338, (Optr)&t_push1, (Optr)int_90, (Optr)&t_push_closure, (Optr)PBlock7339, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7344, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7336 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7337, 2, PSend7344, self);
    
    MethodClosure MC_SMB_benchRemove = new_MethodClosure((Method)PMethod7336, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchRemove, MC_SMB_benchRemove);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7346 = new_Array_with(1, (Optr)VAR_int_0_0);
    Array PThreadedCode7347 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_method_return);
    Method PMethod7345 = new_Method_with(PArray7346, empty_Array, empty_Array, PThreadedCode7347, 1, VAR_int_0_0);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7345, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_set_() {
    Symbol SMB_set_ = new_Symbol(L"set:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7349 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7351 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7350 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7351, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7348 = new_Method_with(PArray7349, empty_Array, empty_Array, PThreadedCode7350, 2, PAssign7351, self);
    
    MethodClosure MC_SMB_set_ = new_MethodClosure((Method)PMethod7348, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_set_, MC_SMB_set_);
}


static void init_SMB_benchAddExisting() {
    Symbol SMB_benchAddExisting = new_Symbol(L"benchAddExisting");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7356 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7358 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7360 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7361 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7360);
    Array PThreadedCode7359 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7360, (Optr)&t_send1, (Optr)PSend7361, (Optr)&t_method_return);
    Block PBlock7357 = new_Block_with(PArray7358, empty_Array, PThreadedCode7359, 1, PSend7361);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7362 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7356, (Optr)PBlock7357);
    Array PThreadedCode7355 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7356, (Optr)&t_push_closure, (Optr)PBlock7357, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7362, (Optr)&t_block_return);
    Block PBlock7354 = new_Block_with(empty_Array, empty_Array, PThreadedCode7355, 1, PSend7362);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7363 = new_Send((Optr)int_2_Const, SMB_timesRepeat_, 1, (Optr)PBlock7354);
    Array PThreadedCode7353 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock7354, (Optr)&t_send1, (Optr)PSend7363, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7352 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7353, 2, PSend7363, self);
    
    MethodClosure MC_SMB_benchAddExisting = new_MethodClosure((Method)PMethod7352, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAddExisting, MC_SMB_benchAddExisting);
}


static void init_SMB_benchIncludes() {
    Symbol SMB_benchIncludes = new_Symbol(L"benchIncludes");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7366 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7367 = new_Send((Optr)PSend7366, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7369 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7371 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend7372 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_includes_, 1, (Optr)PSend7371);
    Array PThreadedCode7370 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7371, (Optr)&t_send1, (Optr)PSend7372, (Optr)&t_method_return);
    Block PBlock7368 = new_Block_with(PArray7369, empty_Array, PThreadedCode7370, 1, PSend7372);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7373 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7367, (Optr)PBlock7368);
    Array PThreadedCode7365 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7366, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7367, (Optr)&t_push_closure, (Optr)PBlock7368, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7373, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7364 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7365, 2, PSend7373, self);
    
    MethodClosure MC_SMB_benchIncludes = new_MethodClosure((Method)PMethod7364, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchIncludes, MC_SMB_benchIncludes);
}


static void init_SMB_benchAdd() {
    Symbol SMB_benchAdd = new_Symbol(L"benchAdd");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7376 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7377 = new_Send((Optr)PSend7376, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7379 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7381 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7382 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7381);
    Array PThreadedCode7380 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7381, (Optr)&t_send1, (Optr)PSend7382, (Optr)&t_method_return);
    Block PBlock7378 = new_Block_with(PArray7379, empty_Array, PThreadedCode7380, 1, PSend7382);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7383 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7377, (Optr)PBlock7378);
    Array PThreadedCode7375 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7376, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7377, (Optr)&t_push_closure, (Optr)PBlock7378, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7383, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7374 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7375, 2, PSend7383, self);
    
    MethodClosure MC_SMB_benchAdd = new_MethodClosure((Method)PMethod7374, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAdd, MC_SMB_benchAdd);
}


static void init_SMB_benchAddNew() {
    Symbol SMB_benchAddNew = new_Symbol(L"benchAddNew");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7386 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    // size. 
    Send PSend7387 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB__times_ = new_Symbol(L"*");
    Constant int_5_Const = new_Constant((Optr)int_5);
    // *. 
    Send PSend7388 = new_Send((Optr)PSend7387, SMB__times_, 1, (Optr)int_5_Const);
    SmallInt int_90 = new_SmallInt(90);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7390 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7392 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7393 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7392);
    Array PThreadedCode7391 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7392, (Optr)&t_send1, (Optr)PSend7393, (Optr)&t_method_return);
    Block PBlock7389 = new_Block_with(PArray7390, empty_Array, PThreadedCode7391, 1, PSend7393);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_90_Const = new_Constant((Optr)int_90);
    // to:by:do:. 
    Send PSend7394 = new_Send((Optr)PSend7386, SMB_to_by_do_, 3, (Optr)PSend7388, (Optr)int_90_Const, (Optr)PBlock7389);
    Array PThreadedCode7385 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7386, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7387, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend7388, (Optr)&t_push1, (Optr)int_90, (Optr)&t_push_closure, (Optr)PBlock7389, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7394, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7385, 2, PSend7394, self);
    
    MethodClosure MC_SMB_benchAddNew = new_MethodClosure((Method)PMethod7384, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAddNew, MC_SMB_benchAddNew);
}


static void init_SMB_set() {
    Symbol SMB_set = new_Symbol(L"set");
    Array PThreadedCode7396 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_method_return);
    Method PMethod7395 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7396, 1, slot_PBenchmark_Collection_Set_AbstractSet_set);
    
    MethodClosure MC_SMB_set = new_MethodClosure((Method)PMethod7395, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_set, MC_SMB_set);
}


static void init_SMB_setSize() {
    Symbol SMB_setSize = new_Symbol(L"setSize");
    Array PThreadedCode7398 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_setSize, (Optr)&t_method_return);
    Method PMethod7397 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7398, 1, slot_PBenchmark_Collection_Set_AbstractSet_setSize);
    
    MethodClosure MC_SMB_setSize = new_MethodClosure((Method)PMethod7397, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setSize, MC_SMB_setSize);
}


static void init_SMB_setSize_() {
    Symbol SMB_setSize_ = new_Symbol(L"setSize:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7400 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7402 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_setSize, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7401 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7402, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7399 = new_Method_with(PArray7400, empty_Array, empty_Array, PThreadedCode7401, 2, PAssign7402, self);
    
    MethodClosure MC_SMB_setSize_ = new_MethodClosure((Method)PMethod7399, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setSize_, MC_SMB_setSize_);
}

void init_PBenchmark_Collection_Set_PBAbstractSet_layout() {
    layout_PBenchmark_Collection_Set_AbstractSet_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_PBenchmark_Collection_Set_AbstractSet_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_PBenchmark_Collection_Set_AbstractSet_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_PBenchmark_Collection_Set_AbstractSet_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_PBenchmark_Collection_Set_AbstractSet_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_PBenchmark_Collection_Set_AbstractSet_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_AbstractSet = new_Symbol(L"AbstractSet");
    slot_PBenchmark_Collection_Set_AbstractSet_set = (Optr)new_Slot(2, L"set");
    slot_PBenchmark_Collection_Set_AbstractSet_setSize = (Optr)new_Slot(3, L"setSize");
    layout_PBenchmark_Collection_Set_AbstractSet = (Optr)create_layout_with_vars(ObjectLayout_Class, 4);
    ((Array)layout_PBenchmark_Collection_Set_AbstractSet)->values[0] = slot_PBenchmark_AbstractBenchmark_probeCount; // probeCount 
    ((Array)layout_PBenchmark_Collection_Set_AbstractSet)->values[1] = slot_PBenchmark_BenchmarkSuite_runs; // runs 
    ((Array)layout_PBenchmark_Collection_Set_AbstractSet)->values[2] = slot_PBenchmark_Collection_Set_AbstractSet_set; // set 
    ((Array)layout_PBenchmark_Collection_Set_AbstractSet)->values[3] = slot_PBenchmark_Collection_Set_AbstractSet_setSize; // setSize 
    PBenchmark_Collection_Set_AbstractSet_Class = (Class)new_Class(PBenchmark_BenchmarkSuite_Class, layout_PBenchmark_Collection_Set_AbstractSet_Class_class);
    PBenchmark_Collection_Set_AbstractSet_Class->layout = layout_PBenchmark_Collection_Set_AbstractSet;
    PBenchmark_Collection_Set_AbstractSet_Class->name = SMB_AbstractSet;
    
}

void init_PBenchmark_Collection_Set_PBAbstractSet_methods() {
    init_SMB_tearDown();
    init_SMB_setUp();
    init_SMB_benchRemove();
    init_SMB_value_();
    init_SMB_set_();
    init_SMB_benchAddExisting();
    init_SMB_benchIncludes();
    init_SMB_benchAdd();
    init_SMB_benchAddNew();
    init_SMB_set();
    init_SMB_setSize();
    init_SMB_setSize_();
    
}