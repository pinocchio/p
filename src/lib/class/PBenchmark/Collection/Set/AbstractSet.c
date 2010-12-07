#include <lib/class/PBenchmark/Collection/Set/AbstractSet.h>


Optr layout_PBenchmark_Collection_Set_AbstractSet_Class_class;
Optr slot_PBenchmark_Collection_Set_AbstractSet_set;
Optr slot_PBenchmark_Collection_Set_AbstractSet_setSize;
Optr layout_PBenchmark_Collection_Set_AbstractSet;


<<<<<<< HEAD
static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Assign PAssign7398 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)nil_Const);
    Array PThreadedCode7397 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign7398, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7396 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7397, 2, PAssign7398, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7396, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    SmallInt int_10000 = new_SmallInt(10000);
    Symbol SMB_setSize_ = new_Symbol(L"setSize:");
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // setSize:. 
    Send PSend7401 = new_Send((Optr)self, SMB_setSize_, 1, (Optr)int_10000_Const);
    Array PThreadedCode7400 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7401, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7399 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7400, 2, PSend7401, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7399, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_benchRemove() {
    Symbol SMB_benchRemove = new_Symbol(L"benchRemove");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7404 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    SmallInt int_90 = new_SmallInt(90);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7406 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7408 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7409 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_remove_, 1, (Optr)PSend7408);
    Array PThreadedCode7407 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7408, (Optr)&t_send1, (Optr)PSend7409, (Optr)&t_method_return);
    Block PBlock7405 = new_Block_with(PArray7406, empty_Array, PThreadedCode7407, 1, PSend7409);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_90_Const = new_Constant((Optr)int_90);
    // to:by:do:. 
    Send PSend7410 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7404, (Optr)int_90_Const, (Optr)PBlock7405);
    Array PThreadedCode7403 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7404, (Optr)&t_push1, (Optr)int_90, (Optr)&t_push_closure, (Optr)PBlock7405, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7410, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7402 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7403, 2, PSend7410, self);
    
    MethodClosure MC_SMB_benchRemove = new_MethodClosure((Method)PMethod7402, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchRemove, MC_SMB_benchRemove);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7412 = new_Array_with(1, (Optr)VAR_int_0_0);
    Array PThreadedCode7413 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_method_return);
    Method PMethod7411 = new_Method_with(PArray7412, empty_Array, empty_Array, PThreadedCode7413, 1, VAR_int_0_0);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7411, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_set_() {
    Symbol SMB_set_ = new_Symbol(L"set:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7415 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7417 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7416 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7417, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7414 = new_Method_with(PArray7415, empty_Array, empty_Array, PThreadedCode7416, 2, PAssign7417, self);
    
    MethodClosure MC_SMB_set_ = new_MethodClosure((Method)PMethod7414, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_set_, MC_SMB_set_);
}


static void init_SMB_benchAddExisting() {
    Symbol SMB_benchAddExisting = new_Symbol(L"benchAddExisting");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7422 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
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
=======
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
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend7428 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7422, (Optr)PBlock7423);
    Array PThreadedCode7421 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7422, (Optr)&t_push_closure, (Optr)PBlock7423, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7428, (Optr)&t_block_return);
    Block PBlock7420 = new_Block_with(empty_Array, empty_Array, PThreadedCode7421, 1, PSend7428);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7429 = new_Send((Optr)int_2_Const, SMB_timesRepeat_, 1, (Optr)PBlock7420);
    Array PThreadedCode7419 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock7420, (Optr)&t_send1, (Optr)PSend7429, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7418 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7419, 2, PSend7429, self);
    
    MethodClosure MC_SMB_benchAddExisting = new_MethodClosure((Method)PMethod7418, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAddExisting, MC_SMB_benchAddExisting);
=======
    Send PSend7383 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7377, (Optr)PBlock7378);
    Array PThreadedCode7375 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7376, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7377, (Optr)&t_push_closure, (Optr)PBlock7378, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7383, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7374 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7375, 2, PSend7383, self);
    
    MethodClosure MC_SMB_benchAdd = new_MethodClosure((Method)PMethod7374, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAdd, MC_SMB_benchAdd);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchIncludes() {
    Symbol SMB_benchIncludes = new_Symbol(L"benchIncludes");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
<<<<<<< HEAD
    Send PSend7432 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
=======
    Send PSend7386 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
<<<<<<< HEAD
    Send PSend7433 = new_Send((Optr)PSend7432, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7435 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7437 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend7438 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_includes_, 1, (Optr)PSend7437);
    Array PThreadedCode7436 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7437, (Optr)&t_send1, (Optr)PSend7438, (Optr)&t_method_return);
    Block PBlock7434 = new_Block_with(PArray7435, empty_Array, PThreadedCode7436, 1, PSend7438);
=======
    Send PSend7387 = new_Send((Optr)PSend7386, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7389 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7391 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_includes_ = new_Symbol(L"includes:");
    // includes:. 
    Send PSend7392 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_includes_, 1, (Optr)PSend7391);
    Array PThreadedCode7390 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7391, (Optr)&t_send1, (Optr)PSend7392, (Optr)&t_method_return);
    Block PBlock7388 = new_Block_with(PArray7389, empty_Array, PThreadedCode7390, 1, PSend7392);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
<<<<<<< HEAD
    Send PSend7439 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7433, (Optr)PBlock7434);
    Array PThreadedCode7431 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7432, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7433, (Optr)&t_push_closure, (Optr)PBlock7434, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7439, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7430 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7431, 2, PSend7439, self);
    
    MethodClosure MC_SMB_benchIncludes = new_MethodClosure((Method)PMethod7430, PBenchmark_Collection_Set_AbstractSet_Class);
=======
    Send PSend7393 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7387, (Optr)PBlock7388);
    Array PThreadedCode7385 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7386, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7387, (Optr)&t_push_closure, (Optr)PBlock7388, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7393, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7384 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7385, 2, PSend7393, self);
    
    MethodClosure MC_SMB_benchIncludes = new_MethodClosure((Method)PMethod7384, PBenchmark_Collection_Set_AbstractSet_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchIncludes, MC_SMB_benchIncludes);
}


<<<<<<< HEAD
static void init_SMB_benchAdd() {
    Symbol SMB_benchAdd = new_Symbol(L"benchAdd");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7442 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // *. 
    Send PSend7443 = new_Send((Optr)PSend7442, SMB__times_, 1, (Optr)int_2_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7445 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7447 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7448 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7447);
    Array PThreadedCode7446 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7447, (Optr)&t_send1, (Optr)PSend7448, (Optr)&t_method_return);
    Block PBlock7444 = new_Block_with(PArray7445, empty_Array, PThreadedCode7446, 1, PSend7448);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7449 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7443, (Optr)PBlock7444);
    Array PThreadedCode7441 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7442, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend7443, (Optr)&t_push_closure, (Optr)PBlock7444, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7449, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7440 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7441, 2, PSend7449, self);
    
    MethodClosure MC_SMB_benchAdd = new_MethodClosure((Method)PMethod7440, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAdd, MC_SMB_benchAdd);
=======
static void init_SMB_setSize() {
    Symbol SMB_setSize = new_Symbol(L"setSize");
    Array PThreadedCode7395 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_setSize, (Optr)&t_method_return);
    Method PMethod7394 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7395, 1, slot_PBenchmark_Collection_Set_AbstractSet_setSize);
    
    MethodClosure MC_SMB_setSize = new_MethodClosure((Method)PMethod7394, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setSize, MC_SMB_setSize);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_benchAddNew() {
    Symbol SMB_benchAddNew = new_Symbol(L"benchAddNew");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
<<<<<<< HEAD
    Send PSend7452 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    // size. 
    Send PSend7453 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
=======
    Send PSend7398 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    // size. 
    Send PSend7399 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB__times_ = new_Symbol(L"*");
    Constant int_5_Const = new_Constant((Optr)int_5);
    // *. 
<<<<<<< HEAD
    Send PSend7454 = new_Send((Optr)PSend7453, SMB__times_, 1, (Optr)int_5_Const);
    SmallInt int_90 = new_SmallInt(90);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7456 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7458 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7459 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7458);
    Array PThreadedCode7457 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7458, (Optr)&t_send1, (Optr)PSend7459, (Optr)&t_method_return);
    Block PBlock7455 = new_Block_with(PArray7456, empty_Array, PThreadedCode7457, 1, PSend7459);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_90_Const = new_Constant((Optr)int_90);
    // to:by:do:. 
    Send PSend7460 = new_Send((Optr)PSend7452, SMB_to_by_do_, 3, (Optr)PSend7454, (Optr)int_90_Const, (Optr)PBlock7455);
    Array PThreadedCode7451 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7452, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7453, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend7454, (Optr)&t_push1, (Optr)int_90, (Optr)&t_push_closure, (Optr)PBlock7455, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7460, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7450 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7451, 2, PSend7460, self);
    
    MethodClosure MC_SMB_benchAddNew = new_MethodClosure((Method)PMethod7450, PBenchmark_Collection_Set_AbstractSet_Class);
=======
    Send PSend7400 = new_Send((Optr)PSend7399, SMB__times_, 1, (Optr)int_5_Const);
    SmallInt int_90 = new_SmallInt(90);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7402 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7404 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7405 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7404);
    Array PThreadedCode7403 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7404, (Optr)&t_send1, (Optr)PSend7405, (Optr)&t_method_return);
    Block PBlock7401 = new_Block_with(PArray7402, empty_Array, PThreadedCode7403, 1, PSend7405);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_90_Const = new_Constant((Optr)int_90);
    // to:by:do:. 
    Send PSend7406 = new_Send((Optr)PSend7398, SMB_to_by_do_, 3, (Optr)PSend7400, (Optr)int_90_Const, (Optr)PBlock7401);
    Array PThreadedCode7397 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7398, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7399, (Optr)&t_push1, (Optr)int_5, (Optr)&t_send1, (Optr)PSend7400, (Optr)&t_push1, (Optr)int_90, (Optr)&t_push_closure, (Optr)PBlock7401, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7406, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7396 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7397, 2, PSend7406, self);
    
    MethodClosure MC_SMB_benchAddNew = new_MethodClosure((Method)PMethod7396, PBenchmark_Collection_Set_AbstractSet_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAddNew, MC_SMB_benchAddNew);
}


<<<<<<< HEAD
static void init_SMB_set() {
    Symbol SMB_set = new_Symbol(L"set");
    Array PThreadedCode7462 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_method_return);
    Method PMethod7461 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7462, 1, slot_PBenchmark_Collection_Set_AbstractSet_set);
    
    MethodClosure MC_SMB_set = new_MethodClosure((Method)PMethod7461, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_set, MC_SMB_set);
}


static void init_SMB_setSize() {
    Symbol SMB_setSize = new_Symbol(L"setSize");
    Array PThreadedCode7464 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_setSize, (Optr)&t_method_return);
    Method PMethod7463 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7464, 1, slot_PBenchmark_Collection_Set_AbstractSet_setSize);
    
    MethodClosure MC_SMB_setSize = new_MethodClosure((Method)PMethod7463, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setSize, MC_SMB_setSize);
=======
static void init_SMB_tearDown() {
    Symbol SMB_tearDown = new_Symbol(L"tearDown");
    Assign PAssign7409 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)nil_Const);
    Array PThreadedCode7408 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign7409, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7407 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7408, 2, PAssign7409, self);
    
    MethodClosure MC_SMB_tearDown = new_MethodClosure((Method)PMethod7407, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_tearDown, MC_SMB_tearDown);
}


static void init_SMB_set_() {
    Symbol SMB_set_ = new_Symbol(L"set:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray7411 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7413 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7412 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7413, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7410 = new_Method_with(PArray7411, empty_Array, empty_Array, PThreadedCode7412, 2, PAssign7413, self);
    
    MethodClosure MC_SMB_set_ = new_MethodClosure((Method)PMethod7410, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_set_, MC_SMB_set_);
}


static void init_SMB_setUp() {
    Symbol SMB_setUp = new_Symbol(L"setUp");
    SmallInt int_10000 = new_SmallInt(10000);
    Symbol SMB_setSize_ = new_Symbol(L"setSize:");
    Constant int_10000_Const = new_Constant((Optr)int_10000);
    // setSize:. 
    Send PSend7416 = new_Send((Optr)self, SMB_setSize_, 1, (Optr)int_10000_Const);
    Array PThreadedCode7415 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10000, (Optr)&t_send1, (Optr)PSend7416, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7414 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7415, 2, PSend7416, self);
    
    MethodClosure MC_SMB_setUp = new_MethodClosure((Method)PMethod7414, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setUp, MC_SMB_setUp);
}


static void init_SMB_value_() {
    Symbol SMB_value_ = new_Symbol(L"value:");
    Variable VAR_int_0_0 = new_Variable_named(L"int", 0);
    Array PArray7418 = new_Array_with(1, (Optr)VAR_int_0_0);
    Array PThreadedCode7419 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_int_0_0, (Optr)&t_method_return);
    Method PMethod7417 = new_Method_with(PArray7418, empty_Array, empty_Array, PThreadedCode7419, 1, VAR_int_0_0);
    
    MethodClosure MC_SMB_value_ = new_MethodClosure((Method)PMethod7417, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_value_, MC_SMB_value_);
}


static void init_SMB_benchAddExisting() {
    Symbol SMB_benchAddExisting = new_Symbol(L"benchAddExisting");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7424 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7426 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7428 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend7429 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_add_, 1, (Optr)PSend7428);
    Array PThreadedCode7427 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7428, (Optr)&t_send1, (Optr)PSend7429, (Optr)&t_method_return);
    Block PBlock7425 = new_Block_with(PArray7426, empty_Array, PThreadedCode7427, 1, PSend7429);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend7430 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend7424, (Optr)PBlock7425);
    Array PThreadedCode7423 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7424, (Optr)&t_push_closure, (Optr)PBlock7425, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend7430, (Optr)&t_block_return);
    Block PBlock7422 = new_Block_with(empty_Array, empty_Array, PThreadedCode7423, 1, PSend7430);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend7431 = new_Send((Optr)int_2_Const, SMB_timesRepeat_, 1, (Optr)PBlock7422);
    Array PThreadedCode7421 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock7422, (Optr)&t_send1, (Optr)PSend7431, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7420 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7421, 2, PSend7431, self);
    
    MethodClosure MC_SMB_benchAddExisting = new_MethodClosure((Method)PMethod7420, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_benchAddExisting, MC_SMB_benchAddExisting);
}


static void init_SMB_set() {
    Symbol SMB_set = new_Symbol(L"set");
    Array PThreadedCode7433 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_method_return);
    Method PMethod7432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7433, 1, slot_PBenchmark_Collection_Set_AbstractSet_set);
    
    MethodClosure MC_SMB_set = new_MethodClosure((Method)PMethod7432, PBenchmark_Collection_Set_AbstractSet_Class);
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_set, MC_SMB_set);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
}


static void init_SMB_setSize_() {
    Symbol SMB_setSize_ = new_Symbol(L"setSize:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray7466 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7468 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_setSize, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7467 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7468, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7465 = new_Method_with(PArray7466, empty_Array, empty_Array, PThreadedCode7467, 2, PAssign7468, self);
    
    MethodClosure MC_SMB_setSize_ = new_MethodClosure((Method)PMethod7465, PBenchmark_Collection_Set_AbstractSet_Class);
=======
    Array PArray7435 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign7437 = new_Assign((Optr)slot_PBenchmark_Collection_Set_AbstractSet_setSize, (Optr)VAR_anObject_0_0);
    Array PThreadedCode7436 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign7437, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7434 = new_Method_with(PArray7435, empty_Array, empty_Array, PThreadedCode7436, 2, PAssign7437, self);
    
    MethodClosure MC_SMB_setSize_ = new_MethodClosure((Method)PMethod7434, PBenchmark_Collection_Set_AbstractSet_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(PBenchmark_Collection_Set_AbstractSet_Class, SMB_setSize_, MC_SMB_setSize_);
}


static void init_SMB_benchRemove() {
    Symbol SMB_benchRemove = new_Symbol(L"benchRemove");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend7440 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_size, 0);
    SmallInt int_90 = new_SmallInt(90);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray7442 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend7444 = new_Send((Optr)self, SMB_value_, 1, (Optr)VAR_i_1_0);
    Symbol SMB_remove_ = new_Symbol(L"remove:");
    // remove:. 
    Send PSend7445 = new_Send((Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, SMB_remove_, 1, (Optr)PSend7444);
    Array PThreadedCode7443 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_i_1_0, (Optr)&t_send1, (Optr)PSend7444, (Optr)&t_send1, (Optr)PSend7445, (Optr)&t_method_return);
    Block PBlock7441 = new_Block_with(PArray7442, empty_Array, PThreadedCode7443, 1, PSend7445);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB_to_by_do_ = new_Symbol(L"to:by:do:");
    Constant int_90_Const = new_Constant((Optr)int_90);
    // to:by:do:. 
    Send PSend7446 = new_Send((Optr)int_1_Const, SMB_to_by_do_, 3, (Optr)PSend7440, (Optr)int_90_Const, (Optr)PBlock7441);
    Array PThreadedCode7439 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_PBenchmark_Collection_Set_AbstractSet_set, (Optr)&t_send0, (Optr)PSend7440, (Optr)&t_push1, (Optr)int_90, (Optr)&t_push_closure, (Optr)PBlock7441, (Optr)&t_send_to_by_do_, (Optr)&t_continue_to_do_, (Optr)PSend7446, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod7438 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode7439, 2, PSend7446, self);
    
    MethodClosure MC_SMB_benchRemove = new_MethodClosure((Method)PMethod7438, PBenchmark_Collection_Set_AbstractSet_Class);
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