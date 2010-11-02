#include <lib/class/PBenchmark/Collection/Set/AbstractSet.h>


Optr layout_PBenchmark_Collection_Set_AbstractSet_Class_class;
Optr slot_PBenchmark_Collection_Set_AbstractSet_set;
Optr slot_PBenchmark_Collection_Set_AbstractSet_setSize;
Optr layout_PBenchmark_Collection_Set_AbstractSet;


static void init_SMB_benchAdd() {
    Symbol SMB_benchAdd = new_Symbol(L"benchAdd");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7308 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7309 = new_Send((Optr)PSend7308, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7311 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7313 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7314 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7313);
    Array PThreadedCode7312 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7313, (Optr)&t_send1, (Optr)PSend7314, (Optr)&t_method_return);
    Block PBlock7310 = new_Block_with(PArray7311, empty_Array, PThreadedCode7312, 1, PSend7314);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7315 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7309, (Optr)PBlock7310);
    Array PThreadedCode7307 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7308, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7309, (Optr)&t_push_closure, (Optr)PBlock7310, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7315, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7306 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7307, 2, PSend7315, self);
    
    MethodClosure MC_SMB_benchAdd = new_MethodClosure((Method)PMethod7306, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAdd, MC_SMB_benchAdd);
}


static void init_SMB_benchIncludes() {
    Symbol SMB_benchIncludes = new_Symbol(L"benchIncludes");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7318 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7319 = new_Send((Optr)PSend7318, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7321 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7323 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend7324 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_includes_, 1, (Optr)PSend7323);
    Array PThreadedCode7322 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7323, (Optr)&t_send1, (Optr)PSend7324, (Optr)&t_method_return);
    Block PBlock7320 = new_Block_with(PArray7321, empty_Array, PThreadedCode7322, 1, PSend7324);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7325 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7319, (Optr)PBlock7320);
    Array PThreadedCode7317 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7318, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7319, (Optr)&t_push_closure, (Optr)PBlock7320, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7325, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7316 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7317, 2, PSend7325, self);
    
    MethodClosure MC_SMB_benchIncludes = new_MethodClosure((Method)PMethod7316, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchIncludes, MC_SMB_benchIncludes);
}


static void init_SMB_setSize() {
    Symbol SMB_setSize = new_Symbol(L"setSize");
    Array PThreadedCode7327 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_setSize, (Optr)&t_method_return);
    Method PMethod7326 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7327, 1, slot_PBenchmark_Collection_Set_AbstractSet_setSize);
    
    MethodClosure MC_SMB_setSize = new_MethodClosure((Method)PMethod7326, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setSize, MC_SMB_setSize);
}


static void init_SMB_benchAddNew() {
    Symbol SMB_benchAddNew = new_Symbol(L"benchAddNew");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7330 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    // size. 
    Send PSend7331 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB__times_ = new_Symbol(L"*");
    Constant int_5_Const = new_Constant((Optr)int_5);
    // *. 
    Send PSend7332 = new_Send((Optr)PSend7331, SMB__times_, 1, (Optr)int_5_Const);
    SmallInt int_90 = new_SmallInt(90);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7334 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7336 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7337 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7336);
    Array PThreadedCode7335 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7336, (Optr)&t_send1, (Optr)PSend7337, (Optr)&t_method_return);
    Block PBlock7333 = new_Block_with(PArray7334, empty_Array, PThreadedCode7335, 1, PSend7337);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_90_Const = new_Constant((Optr)int_90);
    // to:by:do:. 
    Send PSend7338 = new_Send((Optr)PSend7330, SMB_to_by_do_, 3, (Optr)PSend7332, (Optr)int_90_Const, (Optr)PBlock7333);
    Array PThreadedCode7329 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7330, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7331, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend7332, (Optr)&t_push1, (Optr)int_90, (Optr)&t_push_closure, (Optr)PBlock7333, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7338, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7328 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7329, 2, PSend7338, self);
    
    MethodClosure MC_SMB_benchAddNew = new_MethodClosure((Method)PMethod7328, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAddNew, MC_SMB_benchAddNew);
}


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Assign PAssign7341 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)nil_Const);
    Array PThreadedCode7340 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign7341, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7339 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7340, 2, PAssign7341, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7339, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_set_() {
    Symbol SMB_set_ = new_Symbol(L"set:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7343 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7345 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7344 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7345, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7342 = new_Method_with(PArray7343, empty_Array, empty_Array, PThreadedCode7344, 2, PAssign7345, self);
    
    MethodClosure MC_SMB_set_ = new_MethodClosure((Method)PMethod7342, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_set_, MC_SMB_set_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    SmallInt int_10000 = new_SmallInt(10000);
    Symbol SMB_setSize_ = new_Symbol(L"setSize:");
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // setSize:. 
    Send PSend7348 = new_Send((Optr)self, SMB_setSize_, 1, (Optr)int_10000_Const);
    Array PThreadedCode7347 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7348, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7346 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7347, 2, PSend7348, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7346, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7350 = new_Array_with(1, (Optr)VAR_int_0_0);
    Array PThreadedCode7351 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_method_return);
    Method PMethod7349 = new_Method_with(PArray7350, empty_Array, empty_Array, PThreadedCode7351, 1, VAR_int_0_0);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7349, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_value_, MC_SMB_value_);
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


static void init_SMB_set() {
    Symbol SMB_set = new_Symbol(L"set");
    Array PThreadedCode7365 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_method_return);
    Method PMethod7364 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7365, 1, slot_PBenchmark_Collection_Set_AbstractSet_set);
    
    MethodClosure MC_SMB_set = new_MethodClosure((Method)PMethod7364, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_set, MC_SMB_set);
}


static void init_SMB_setSize_() {
    Symbol SMB_setSize_ = new_Symbol(L"setSize:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7367 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7369 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_setSize, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7368 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7369, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7366 = new_Method_with(PArray7367, empty_Array, empty_Array, PThreadedCode7368, 2, PAssign7369, self);
    
    MethodClosure MC_SMB_setSize_ = new_MethodClosure((Method)PMethod7366, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setSize_, MC_SMB_setSize_);
}


static void init_SMB_benchRemove() {
    Symbol SMB_benchRemove = new_Symbol(L"benchRemove");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7372 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    SmallInt int_90 = new_SmallInt(90);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7374 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7376 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7377 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_remove_, 1, (Optr)PSend7376);
    Array PThreadedCode7375 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7376, (Optr)&t_send1, (Optr)PSend7377, (Optr)&t_method_return);
    Block PBlock7373 = new_Block_with(PArray7374, empty_Array, PThreadedCode7375, 1, PSend7377);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_90_Const = new_Constant((Optr)int_90);
    // to:by:do:. 
    Send PSend7378 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7372, (Optr)int_90_Const, (Optr)PBlock7373);
    Array PThreadedCode7371 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7372, (Optr)&t_push1, (Optr)int_90, (Optr)&t_push_closure, (Optr)PBlock7373, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7378, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7370 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7371, 2, PSend7378, self);
    
    MethodClosure MC_SMB_benchRemove = new_MethodClosure((Method)PMethod7370, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchRemove, MC_SMB_benchRemove);
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
    init_SMB_benchAdd();
    init_SMB_benchIncludes();
    init_SMB_setSize();
    init_SMB_benchAddNew();
    init_SMB_tearDown();
    init_SMB_set_();
    init_SMB_setUp();
    init_SMB_value_();
    init_SMB_benchAddExisting();
    init_SMB_set();
    init_SMB_setSize_();
    init_SMB_benchRemove();
    
}