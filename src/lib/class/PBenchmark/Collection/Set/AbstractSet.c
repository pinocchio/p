#include <lib/class/PBenchmark/Collection/Set/AbstractSet.h>


Optr layout_PBenchmark_Collection_Set_AbstractSet_Class_class;
Optr slot_PBenchmark_Collection_Set_AbstractSet_set;
Optr slot_PBenchmark_Collection_Set_AbstractSet_setSize;
Optr layout_PBenchmark_Collection_Set_AbstractSet;


static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Assign PAssign7377 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)nil_Const);
    Array PThreadedCode7376 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign7377, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7375 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7376, 2, PAssign7377, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7375, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    SmallInt int_10000 = new_SmallInt(10000);
    Symbol SMB_setSize_ = new_Symbol(L"setSize:");
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // setSize:. 
    Send PSend7380 = new_Send((Optr)self, SMB_setSize_, 1, (Optr)int_10000_Const);
    Array PThreadedCode7379 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7380, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7378 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7379, 2, PSend7380, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7378, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchRemove() {
    Symbol SMB_benchRemove = new_Symbol(L"benchRemove");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7383 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    SmallInt int_90 = new_SmallInt(90);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7385 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7387 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7388 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_remove_, 1, (Optr)PSend7387);
    Array PThreadedCode7386 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7387, (Optr)&t_send1, (Optr)PSend7388, (Optr)&t_method_return);
    Block PBlock7384 = new_Block_with(PArray7385, empty_Array, PThreadedCode7386, 1, PSend7388);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_90_Const = new_Constant((Optr)int_90);
    // to:by:do:. 
    Send PSend7389 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7383, (Optr)int_90_Const, (Optr)PBlock7384);
    Array PThreadedCode7382 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7383, (Optr)&t_push1, (Optr)int_90, (Optr)&t_push_closure, (Optr)PBlock7384, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7389, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7381 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7382, 2, PSend7389, self);
    
    MethodClosure MC_SMB_benchRemove = new_MethodClosure((Method)PMethod7381, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchRemove, MC_SMB_benchRemove);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7391 = new_Array_with(1, (Optr)VAR_int_0_0);
    Array PThreadedCode7392 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_method_return);
    Method PMethod7390 = new_Method_with(PArray7391, empty_Array, empty_Array, PThreadedCode7392, 1, VAR_int_0_0);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7390, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_set_() {
    Symbol SMB_set_ = new_Symbol(L"set:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7394 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7396 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7395 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7396, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7393 = new_Method_with(PArray7394, empty_Array, empty_Array, PThreadedCode7395, 2, PAssign7396, self);
    
    MethodClosure MC_SMB_set_ = new_MethodClosure((Method)PMethod7393, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_set_, MC_SMB_set_);
}


static void init_SMB_benchAddExisting() {
    Symbol SMB_benchAddExisting = new_Symbol(L"benchAddExisting");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7401 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7403 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7405 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7406 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7405);
    Array PThreadedCode7404 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7405, (Optr)&t_send1, (Optr)PSend7406, (Optr)&t_method_return);
    Block PBlock7402 = new_Block_with(PArray7403, empty_Array, PThreadedCode7404, 1, PSend7406);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7407 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7401, (Optr)PBlock7402);
    Array PThreadedCode7400 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7401, (Optr)&t_push_closure, (Optr)PBlock7402, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7407, (Optr)&t_block_return);
    Block PBlock7399 = new_Block_with(empty_Array, empty_Array, PThreadedCode7400, 1, PSend7407);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7408 = new_Send((Optr)int_2_Const, SMB_timesRepeat_, 1, (Optr)PBlock7399);
    Array PThreadedCode7398 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock7399, (Optr)&t_send1, (Optr)PSend7408, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7397 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7398, 2, PSend7408, self);
    
    MethodClosure MC_SMB_benchAddExisting = new_MethodClosure((Method)PMethod7397, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAddExisting, MC_SMB_benchAddExisting);
}


static void init_SMB_benchIncludes() {
    Symbol SMB_benchIncludes = new_Symbol(L"benchIncludes");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7411 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7412 = new_Send((Optr)PSend7411, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7414 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7416 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend7417 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_includes_, 1, (Optr)PSend7416);
    Array PThreadedCode7415 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7416, (Optr)&t_send1, (Optr)PSend7417, (Optr)&t_method_return);
    Block PBlock7413 = new_Block_with(PArray7414, empty_Array, PThreadedCode7415, 1, PSend7417);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7418 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7412, (Optr)PBlock7413);
    Array PThreadedCode7410 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7411, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7412, (Optr)&t_push_closure, (Optr)PBlock7413, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7418, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7409 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7410, 2, PSend7418, self);
    
    MethodClosure MC_SMB_benchIncludes = new_MethodClosure((Method)PMethod7409, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchIncludes, MC_SMB_benchIncludes);
}


static void init_SMB_benchAdd() {
    Symbol SMB_benchAdd = new_Symbol(L"benchAdd");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7421 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7422 = new_Send((Optr)PSend7421, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7424 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7426 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7427 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7426);
    Array PThreadedCode7425 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7426, (Optr)&t_send1, (Optr)PSend7427, (Optr)&t_method_return);
    Block PBlock7423 = new_Block_with(PArray7424, empty_Array, PThreadedCode7425, 1, PSend7427);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7428 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7422, (Optr)PBlock7423);
    Array PThreadedCode7420 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7421, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7422, (Optr)&t_push_closure, (Optr)PBlock7423, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7428, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7419 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7420, 2, PSend7428, self);
    
    MethodClosure MC_SMB_benchAdd = new_MethodClosure((Method)PMethod7419, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAdd, MC_SMB_benchAdd);
}


static void init_SMB_benchAddNew() {
    Symbol SMB_benchAddNew = new_Symbol(L"benchAddNew");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7431 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    // size. 
    Send PSend7432 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB__times_ = new_Symbol(L"*");
    Constant int_5_Const = new_Constant((Optr)int_5);
    // *. 
    Send PSend7433 = new_Send((Optr)PSend7432, SMB__times_, 1, (Optr)int_5_Const);
    SmallInt int_90 = new_SmallInt(90);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7435 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7437 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7438 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7437);
    Array PThreadedCode7436 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7437, (Optr)&t_send1, (Optr)PSend7438, (Optr)&t_method_return);
    Block PBlock7434 = new_Block_with(PArray7435, empty_Array, PThreadedCode7436, 1, PSend7438);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_90_Const = new_Constant((Optr)int_90);
    // to:by:do:. 
    Send PSend7439 = new_Send((Optr)PSend7431, SMB_to_by_do_, 3, (Optr)PSend7433, (Optr)int_90_Const, (Optr)PBlock7434);
    Array PThreadedCode7430 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7431, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7432, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend7433, (Optr)&t_push1, (Optr)int_90, (Optr)&t_push_closure, (Optr)PBlock7434, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7439, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7429 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7430, 2, PSend7439, self);
    
    MethodClosure MC_SMB_benchAddNew = new_MethodClosure((Method)PMethod7429, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAddNew, MC_SMB_benchAddNew);
}


static void init_SMB_set() {
    Symbol SMB_set = new_Symbol(L"set");
    Array PThreadedCode7441 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_method_return);
    Method PMethod7440 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7441, 1, slot_PBenchmark_Collection_Set_AbstractSet_set);
    
    MethodClosure MC_SMB_set = new_MethodClosure((Method)PMethod7440, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_set, MC_SMB_set);
}


static void init_SMB_setSize() {
    Symbol SMB_setSize = new_Symbol(L"setSize");
    Array PThreadedCode7443 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_setSize, (Optr)&t_method_return);
    Method PMethod7442 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7443, 1, slot_PBenchmark_Collection_Set_AbstractSet_setSize);
    
    MethodClosure MC_SMB_setSize = new_MethodClosure((Method)PMethod7442, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setSize, MC_SMB_setSize);
}


static void init_SMB_setSize_() {
    Symbol SMB_setSize_ = new_Symbol(L"setSize:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7445 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7447 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_setSize, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7446 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7447, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7444 = new_Method_with(PArray7445, empty_Array, empty_Array, PThreadedCode7446, 2, PAssign7447, self);
    
    MethodClosure MC_SMB_setSize_ = new_MethodClosure((Method)PMethod7444, PBenchmark_Collection_Set_AbstractSet_Class);
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