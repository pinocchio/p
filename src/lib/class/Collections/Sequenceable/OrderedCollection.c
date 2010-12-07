#include <lib/class/Collections/Sequenceable/OrderedCollection.h>


Optr layout_Collections_Sequenceable_OrderedCollection_Class_class;
Optr slot_Collections_Sequenceable_OrderedCollection_array;
Optr slot_Collections_Sequenceable_OrderedCollection_firstIndex;
Optr slot_Collections_Sequenceable_OrderedCollection_lastIndex;
Optr layout_Collections_Sequenceable_OrderedCollection;


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
<<<<<<< HEAD
    Array PArray12394 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12396 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12395 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send1, (Optr)PSend12396, (Optr)&t_method_return);
    Method PMethod12393 = new_Method_with(PArray12394, empty_Array, empty_Array, PThreadedCode12395, 1, PSend12396);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod12393, Collections_Sequenceable_OrderedCollection_Class);
=======
    Array PArray12360 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12362 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12361 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send1, (Optr)PSend12362, (Optr)&t_method_return);
    Method PMethod12359 = new_Method_with(PArray12360, empty_Array, empty_Array, PThreadedCode12361, 1, PSend12362);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod12359, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_addAll_() {
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
<<<<<<< HEAD
    Array PArray12398 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    // addAllLast:. 
    Send PSend12400 = new_Send((Optr)self, SMB_addAllLast_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12399 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12400, (Optr)&t_method_return);
    Method PMethod12397 = new_Method_with(PArray12398, empty_Array, empty_Array, PThreadedCode12399, 1, PSend12400);
    
    MethodClosure MC_SMB_addAll_ = new_MethodClosure((Method)PMethod12397, Collections_Sequenceable_OrderedCollection_Class);
=======
    Array PArray12364 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    // addAllLast:. 
    Send PSend12366 = new_Send((Optr)self, SMB_addAllLast_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12365 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12366, (Optr)&t_method_return);
    Method PMethod12363 = new_Method_with(PArray12364, empty_Array, empty_Array, PThreadedCode12365, 1, PSend12366);
    
    MethodClosure MC_SMB_addAll_ = new_MethodClosure((Method)PMethod12363, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addAll_, MC_SMB_addAll_);
}


static void init_SMB_addAllLast_() {
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
<<<<<<< HEAD
    Array PArray12402 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12405 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12407 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode12406 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend12407, (Optr)&t_method_return);
    Block PBlock12404 = new_Block_with(PArray12405, empty_Array, PThreadedCode12406, 1, PSend12407);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12408 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock12404);
    Array PThreadedCode12403 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock12404, (Optr)&t_send1, (Optr)PSend12408, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod12401 = new_Method_with(PArray12402, empty_Array, empty_Array, PThreadedCode12403, 2, PSend12408, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_addAllLast_ = new_MethodClosure((Method)PMethod12401, Collections_Sequenceable_OrderedCollection_Class);
=======
    Array PArray12368 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12371 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12373 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode12372 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend12373, (Optr)&t_method_return);
    Block PBlock12370 = new_Block_with(PArray12371, empty_Array, PThreadedCode12372, 1, PSend12373);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12374 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock12370);
    Array PThreadedCode12369 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock12370, (Optr)&t_send1, (Optr)PSend12374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod12367 = new_Method_with(PArray12368, empty_Array, empty_Array, PThreadedCode12369, 2, PSend12374, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_addAllLast_ = new_MethodClosure((Method)PMethod12367, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addAllLast_, MC_SMB_addAllLast_);
}


static void init_SMB_addFirst_() {
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
<<<<<<< HEAD
    Array PArray12410 = new_Array_with(1, (Optr)VAR_newObject_0_0);
=======
    Array PArray12376 = new_Array_with(1, (Optr)VAR_newObject_0_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
<<<<<<< HEAD
    Send PSend12412 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    // makeRoomAtFirst. 
    Send PSend12416 = new_Send((Optr)self, SMB_makeRoomAtFirst, 0);
    Array PThreadedCode12415 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12416, (Optr)&t_block_return);
    Block PBlock12414 = new_Block_with(empty_Array, empty_Array, PThreadedCode12415, 1, PSend12416);
    // ifTrue:. 
    Send PSend12413 = new_Send((Optr)PSend12412, SMB_ifTrue_, 1, (Optr)PBlock12414);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12418 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12417 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12418);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12419 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12411 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12412, (Optr)&t_send_ifTrue_, (Optr)PSend12413, (Optr)PBlock12414, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12417, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12418, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12419, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12409 = new_Method_with(PArray12410, empty_Array, empty_Array, PThreadedCode12411, 4, PSend12413, PAssign12417, PSend12419, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addFirst_ = new_MethodClosure((Method)PMethod12409, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12378 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    // makeRoomAtFirst. 
    Send PSend12382 = new_Send((Optr)self, SMB_makeRoomAtFirst, 0);
    Array PThreadedCode12381 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12382, (Optr)&t_block_return);
    Block PBlock12380 = new_Block_with(empty_Array, empty_Array, PThreadedCode12381, 1, PSend12382);
    // ifTrue:. 
    Send PSend12379 = new_Send((Optr)PSend12378, SMB_ifTrue_, 1, (Optr)PBlock12380);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12384 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12383 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12384);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12385 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12377 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12378, (Optr)&t_send_ifTrue_, (Optr)PSend12379, (Optr)PBlock12380, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12383, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12384, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12375 = new_Method_with(PArray12376, empty_Array, empty_Array, PThreadedCode12377, 4, PSend12379, PAssign12383, PSend12385, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addFirst_ = new_MethodClosure((Method)PMethod12375, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addFirst_, MC_SMB_addFirst_);
}


static void init_SMB_addLast_() {
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
<<<<<<< HEAD
    Array PArray12421 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12423 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12424 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12423);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    // makeRoomAtLast. 
    Send PSend12428 = new_Send((Optr)self, SMB_makeRoomAtLast, 0);
    Array PThreadedCode12427 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12428, (Optr)&t_block_return);
    Block PBlock12426 = new_Block_with(empty_Array, empty_Array, PThreadedCode12427, 1, PSend12428);
    // ifTrue:. 
    Send PSend12425 = new_Send((Optr)PSend12424, SMB_ifTrue_, 1, (Optr)PBlock12426);
=======
    Array PArray12387 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12389 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12390 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12389);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    // makeRoomAtLast. 
    Send PSend12394 = new_Send((Optr)self, SMB_makeRoomAtLast, 0);
    Array PThreadedCode12393 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12394, (Optr)&t_block_return);
    Block PBlock12392 = new_Block_with(empty_Array, empty_Array, PThreadedCode12393, 1, PSend12394);
    // ifTrue:. 
    Send PSend12391 = new_Send((Optr)PSend12390, SMB_ifTrue_, 1, (Optr)PBlock12392);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend12430 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12429 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12430);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12431 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12422 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12423, (Optr)&t_send1, (Optr)PSend12424, (Optr)&t_send_ifTrue_, (Optr)PSend12425, (Optr)PBlock12426, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12429, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12430, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12431, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12420 = new_Method_with(PArray12421, empty_Array, empty_Array, PThreadedCode12422, 4, PSend12425, PAssign12429, PSend12431, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addLast_ = new_MethodClosure((Method)PMethod12420, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12396 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12395 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12396);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12397 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12388 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12389, (Optr)&t_send1, (Optr)PSend12390, (Optr)&t_send_ifTrue_, (Optr)PSend12391, (Optr)PBlock12392, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12395, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12396, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12397, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12386 = new_Method_with(PArray12387, empty_Array, empty_Array, PThreadedCode12388, 4, PSend12391, PAssign12395, PSend12397, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addLast_ = new_MethodClosure((Method)PMethod12386, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addLast_, MC_SMB_addLast_);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
<<<<<<< HEAD
    Send PSend12434 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12435 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12434);
    // size. 
    Send PSend12436 = new_Send((Optr)self, SMB_size, 0);
=======
    Send PSend12400 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12401 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12400);
    // size. 
    Send PSend12402 = new_Send((Optr)self, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
<<<<<<< HEAD
    Send PSend12437 = new_Send((Optr)PSend12435, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12436, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12433 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12434, (Optr)&t_send1, (Optr)PSend12435, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12436, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send4, (Optr)PSend12437, (Optr)&t_method_return);
    Method PMethod12432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12433, 1, PSend12437);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod12432, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12403 = new_Send((Optr)PSend12401, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12402, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12399 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12400, (Optr)&t_send1, (Optr)PSend12401, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12402, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send4, (Optr)PSend12403, (Optr)&t_method_return);
    Method PMethod12398 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12399, 1, PSend12403);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod12398, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
<<<<<<< HEAD
    Array PArray12439 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12442 = new_Array_with(1, (Optr)VAR__return__1_0);
=======
    Array PArray12405 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12408 = new_Array_with(1, (Optr)VAR__return__1_0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
<<<<<<< HEAD
    Send PSend12444 = new_Send((Optr)VAR_anInteger_0_0, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12447 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12448 = new_Send((Optr)PSend12447, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12449 = new_Send((Optr)PSend12448, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12446 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12447, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12448, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12449, (Optr)&t_block_return);
    Block PBlock12445 = new_Block_with(empty_Array, empty_Array, PThreadedCode12446, 1, PSend12449);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12450 = new_Send((Optr)PSend12444, SMB_or_, 1, (Optr)PBlock12445);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12454 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12453 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12454, (Optr)&t_block_return);
    Block PBlock12452 = new_Block_with(empty_Array, empty_Array, PThreadedCode12453, 1, PSend12454);
    // +. 
    Send PSend12457 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12458 = new_Send((Optr)PSend12457, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend12459 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12458);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12460 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12459);
    Array PThreadedCode12456 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12457, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12458, (Optr)&t_send1, (Optr)PSend12459, (Optr)&t_send1, (Optr)PSend12460, (Optr)&t_block_return);
    Block PBlock12455 = new_Block_with(empty_Array, empty_Array, PThreadedCode12456, 1, PSend12460);
    // ifTrue:ifFalse:. 
    Send PSend12451 = new_Send((Optr)PSend12450, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12452, (Optr)PBlock12455);
    Array PThreadedCode12443 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12444, (Optr)&t_push_closure, (Optr)PBlock12445, (Optr)&t_send1, (Optr)PSend12450, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12451, (Optr)PBlock12452, (Optr)PBlock12455, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12441 = new_Block_with(PArray12442, empty_Array, PThreadedCode12443, 2, PSend12451, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12461 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12441);
    Array PThreadedCode12440 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12441, (Optr)&t_send1, (Optr)PSend12461, (Optr)&t_method_return);
    Method PMethod12438 = new_Method_with(PArray12439, empty_Array, empty_Array, PThreadedCode12440, 1, PSend12461);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod12438, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12410 = new_Send((Optr)VAR_anInteger_0_0, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12413 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12414 = new_Send((Optr)PSend12413, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12415 = new_Send((Optr)PSend12414, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12412 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12413, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12414, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12415, (Optr)&t_block_return);
    Block PBlock12411 = new_Block_with(empty_Array, empty_Array, PThreadedCode12412, 1, PSend12415);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12416 = new_Send((Optr)PSend12410, SMB_or_, 1, (Optr)PBlock12411);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12420 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12419 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12420, (Optr)&t_block_return);
    Block PBlock12418 = new_Block_with(empty_Array, empty_Array, PThreadedCode12419, 1, PSend12420);
    // +. 
    Send PSend12423 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12424 = new_Send((Optr)PSend12423, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend12425 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12424);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12426 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12425);
    Array PThreadedCode12422 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12423, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12424, (Optr)&t_send1, (Optr)PSend12425, (Optr)&t_send1, (Optr)PSend12426, (Optr)&t_block_return);
    Block PBlock12421 = new_Block_with(empty_Array, empty_Array, PThreadedCode12422, 1, PSend12426);
    // ifTrue:ifFalse:. 
    Send PSend12417 = new_Send((Optr)PSend12416, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12418, (Optr)PBlock12421);
    Array PThreadedCode12409 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12410, (Optr)&t_push_closure, (Optr)PBlock12411, (Optr)&t_send1, (Optr)PSend12416, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12417, (Optr)PBlock12418, (Optr)PBlock12421, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12407 = new_Block_with(PArray12408, empty_Array, PThreadedCode12409, 2, PSend12417, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12427 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12407);
    Array PThreadedCode12406 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12407, (Optr)&t_send1, (Optr)PSend12427, (Optr)&t_method_return);
    Method PMethod12404 = new_Method_with(PArray12405, empty_Array, empty_Array, PThreadedCode12406, 1, PSend12427);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod12404, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray12463 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray12464 = new_Array_with(1, (Optr)VAR_index_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12467 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend12470 = new_Send((Optr)VAR_anInteger_0_0, SMB_asInteger, 0);
    Assign PAssign12469 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend12470);
=======
    Array PArray12429 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray12430 = new_Array_with(1, (Optr)VAR_index_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12433 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend12436 = new_Send((Optr)VAR_anInteger_0_0, SMB_asInteger, 0);
    Assign PAssign12435 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend12436);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
<<<<<<< HEAD
    Send PSend12471 = new_Send((Optr)VAR_index_0_2, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12474 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12475 = new_Send((Optr)PSend12474, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12476 = new_Send((Optr)PSend12475, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12473 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12474, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12475, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12476, (Optr)&t_block_return);
    Block PBlock12472 = new_Block_with(empty_Array, empty_Array, PThreadedCode12473, 1, PSend12476);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12477 = new_Send((Optr)PSend12471, SMB_or_, 1, (Optr)PBlock12472);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12481 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12480 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12481, (Optr)&t_block_return);
    Block PBlock12479 = new_Block_with(empty_Array, empty_Array, PThreadedCode12480, 1, PSend12481);
    // +. 
    Send PSend12484 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12485 = new_Send((Optr)PSend12484, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12486 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12485, (Optr)VAR_anObject_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12487 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12486);
    Array PThreadedCode12483 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12484, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12485, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12486, (Optr)&t_send1, (Optr)PSend12487, (Optr)&t_block_return);
    Block PBlock12482 = new_Block_with(empty_Array, empty_Array, PThreadedCode12483, 1, PSend12487);
    // ifTrue:ifFalse:. 
    Send PSend12478 = new_Send((Optr)PSend12477, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12479, (Optr)PBlock12482);
    Array PThreadedCode12468 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign12469, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send0, (Optr)PSend12470, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12471, (Optr)&t_push_closure, (Optr)PBlock12472, (Optr)&t_send1, (Optr)PSend12477, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12478, (Optr)PBlock12479, (Optr)PBlock12482, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12466 = new_Block_with(PArray12467, empty_Array, PThreadedCode12468, 3, PAssign12469, PSend12478, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12488 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12466);
    Array PThreadedCode12465 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12466, (Optr)&t_send1, (Optr)PSend12488, (Optr)&t_method_return);
    Method PMethod12462 = new_Method_with(PArray12463, PArray12464, empty_Array, PThreadedCode12465, 1, PSend12488);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod12462, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12437 = new_Send((Optr)VAR_index_0_2, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12440 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12441 = new_Send((Optr)PSend12440, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12442 = new_Send((Optr)PSend12441, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12439 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12440, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12441, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12442, (Optr)&t_block_return);
    Block PBlock12438 = new_Block_with(empty_Array, empty_Array, PThreadedCode12439, 1, PSend12442);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12443 = new_Send((Optr)PSend12437, SMB_or_, 1, (Optr)PBlock12438);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12447 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12446 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12447, (Optr)&t_block_return);
    Block PBlock12445 = new_Block_with(empty_Array, empty_Array, PThreadedCode12446, 1, PSend12447);
    // +. 
    Send PSend12450 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12451 = new_Send((Optr)PSend12450, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12452 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12451, (Optr)VAR_anObject_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12453 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12452);
    Array PThreadedCode12449 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12450, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12451, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12452, (Optr)&t_send1, (Optr)PSend12453, (Optr)&t_block_return);
    Block PBlock12448 = new_Block_with(empty_Array, empty_Array, PThreadedCode12449, 1, PSend12453);
    // ifTrue:ifFalse:. 
    Send PSend12444 = new_Send((Optr)PSend12443, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12445, (Optr)PBlock12448);
    Array PThreadedCode12434 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign12435, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send0, (Optr)PSend12436, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12437, (Optr)&t_push_closure, (Optr)PBlock12438, (Optr)&t_send1, (Optr)PSend12443, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12444, (Optr)PBlock12445, (Optr)PBlock12448, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12432 = new_Block_with(PArray12433, empty_Array, PThreadedCode12434, 3, PAssign12435, PSend12444, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12454 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12432);
    Array PThreadedCode12431 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12432, (Optr)&t_send1, (Optr)PSend12454, (Optr)&t_method_return);
    Method PMethod12428 = new_Method_with(PArray12429, PArray12430, empty_Array, PThreadedCode12431, 1, PSend12454);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod12428, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray12490 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12491 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12495 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12496 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend12494 = new_Send((Optr)PSend12495, SMB_new_, 1, (Optr)PSend12496);
    Assign PAssign12493 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12494);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12498 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12500 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12501 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12500);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12502 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)PSend12501);
    Array PThreadedCode12499 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12500, (Optr)&t_send1, (Optr)PSend12501, (Optr)&t_send1, (Optr)PSend12502, (Optr)&t_method_return);
    Block PBlock12497 = new_Block_with(PArray12498, empty_Array, PThreadedCode12499, 1, PSend12502);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12503 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12497);
    Array PThreadedCode12492 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12493, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12495, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12496, (Optr)&t_send1, (Optr)PSend12494, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12497, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12489 = new_Method_with(PArray12490, PArray12491, empty_Array, PThreadedCode12492, 3, PAssign12493, PSend12503, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod12489, Collections_Sequenceable_OrderedCollection_Class);
=======
    Array PArray12456 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12457 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12461 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12462 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend12460 = new_Send((Optr)PSend12461, SMB_new_, 1, (Optr)PSend12462);
    Assign PAssign12459 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12460);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12464 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12466 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12467 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12466);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12468 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)PSend12467);
    Array PThreadedCode12465 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12466, (Optr)&t_send1, (Optr)PSend12467, (Optr)&t_send1, (Optr)PSend12468, (Optr)&t_method_return);
    Block PBlock12463 = new_Block_with(PArray12464, empty_Array, PThreadedCode12465, 1, PSend12468);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12469 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12463);
    Array PThreadedCode12458 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12459, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12461, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12462, (Optr)&t_send1, (Optr)PSend12460, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12463, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12469, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12455 = new_Method_with(PArray12456, PArray12457, empty_Array, PThreadedCode12458, 3, PAssign12459, PSend12469, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod12455, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray12505 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Variable VAR_element_0_2 = new_Variable_named(L"element", 0);
    Array PArray12506 = new_Array_with(2, (Optr)VAR_newCollection_0_1, (Optr)VAR_element_0_2);
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    // copyEmpty. 
    Send PSend12509 = new_Send((Optr)self, SMB_copyEmpty, 0);
    Assign PAssign12508 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12509);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12511 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12514 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Assign PAssign12513 = new_Assign((Optr)VAR_element_0_2, (Optr)PSend12514);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12515 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PAssign12513);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12519 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)VAR_element_0_2);
    Array PThreadedCode12518 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_element_0_2, (Optr)&t_send1, (Optr)PSend12519, (Optr)&t_block_return);
    Block PBlock12517 = new_Block_with(empty_Array, empty_Array, PThreadedCode12518, 1, PSend12519);
    // ifTrue:. 
    Send PSend12516 = new_Send((Optr)PSend12515, SMB_ifTrue_, 1, (Optr)PBlock12517);
    Array PThreadedCode12512 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push1, (Optr)PAssign12513, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12514, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend12515, (Optr)&t_send_ifTrue_, (Optr)PSend12516, (Optr)PBlock12517, (Optr)&t_method_return);
    Block PBlock12510 = new_Block_with(PArray12511, empty_Array, PThreadedCode12512, 1, PSend12516);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12520 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12510);
    Array PThreadedCode12507 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign12508, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12509, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12510, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12520, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12504 = new_Method_with(PArray12505, PArray12506, empty_Array, PThreadedCode12507, 3, PAssign12508, PSend12520, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod12504, Collections_Sequenceable_OrderedCollection_Class);
=======
    Array PArray12471 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Variable VAR_element_0_2 = new_Variable_named(L"element", 0);
    Array PArray12472 = new_Array_with(2, (Optr)VAR_newCollection_0_1, (Optr)VAR_element_0_2);
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    // copyEmpty. 
    Send PSend12475 = new_Send((Optr)self, SMB_copyEmpty, 0);
    Assign PAssign12474 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12475);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12477 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12480 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Assign PAssign12479 = new_Assign((Optr)VAR_element_0_2, (Optr)PSend12480);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12481 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PAssign12479);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12485 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)VAR_element_0_2);
    Array PThreadedCode12484 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_element_0_2, (Optr)&t_send1, (Optr)PSend12485, (Optr)&t_block_return);
    Block PBlock12483 = new_Block_with(empty_Array, empty_Array, PThreadedCode12484, 1, PSend12485);
    // ifTrue:. 
    Send PSend12482 = new_Send((Optr)PSend12481, SMB_ifTrue_, 1, (Optr)PBlock12483);
    Array PThreadedCode12478 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push1, (Optr)PAssign12479, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12480, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend12481, (Optr)&t_send_ifTrue_, (Optr)PSend12482, (Optr)PBlock12483, (Optr)&t_method_return);
    Block PBlock12476 = new_Block_with(PArray12477, empty_Array, PThreadedCode12478, 1, PSend12482);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12486 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12476);
    Array PThreadedCode12473 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign12474, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12475, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12476, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12486, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12470 = new_Method_with(PArray12471, PArray12472, empty_Array, PThreadedCode12473, 3, PAssign12474, PSend12486, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod12470, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray12522 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12525 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12527 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12528 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12527);
    Array PThreadedCode12526 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12527, (Optr)&t_send1, (Optr)PSend12528, (Optr)&t_method_return);
    Block PBlock12524 = new_Block_with(PArray12525, empty_Array, PThreadedCode12526, 1, PSend12528);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12529 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12524);
    Array PThreadedCode12523 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12524, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12529, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12521 = new_Method_with(PArray12522, empty_Array, empty_Array, PThreadedCode12523, 2, PSend12529, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod12521, Collections_Sequenceable_OrderedCollection_Class);
=======
    Array PArray12488 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12491 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12493 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12494 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12493);
    Array PThreadedCode12492 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12493, (Optr)&t_send1, (Optr)PSend12494, (Optr)&t_method_return);
    Block PBlock12490 = new_Block_with(PArray12491, empty_Array, PThreadedCode12492, 1, PSend12494);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12495 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12490);
    Array PThreadedCode12489 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12490, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12495, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12487 = new_Method_with(PArray12488, empty_Array, empty_Array, PThreadedCode12489, 2, PSend12495, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod12487, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_grow() {
    Symbol SMB_grow = new_Symbol(L"grow");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
<<<<<<< HEAD
    Array PArray12531 = new_Array_with(1, (Optr)VAR_newArray_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12536 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_growSize = new_Symbol(L"growSize");
    // growSize. 
    Send PSend12537 = new_Send((Optr)self, SMB_growSize, 0);
    // +. 
    Send PSend12535 = new_Send((Optr)PSend12536, SMB__plus_, 1, (Optr)PSend12537);
    // new:. 
    Send PSend12534 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12535);
    Assign PAssign12533 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend12534);
    // size. 
    Send PSend12538 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
=======
    Array PArray12497 = new_Array_with(1, (Optr)VAR_newArray_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12502 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_growSize = new_Symbol(L"growSize");
    // growSize. 
    Send PSend12503 = new_Send((Optr)self, SMB_growSize, 0);
    // +. 
    Send PSend12501 = new_Send((Optr)PSend12502, SMB__plus_, 1, (Optr)PSend12503);
    // new:. 
    Send PSend12500 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12501);
    Assign PAssign12499 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend12500);
    // size. 
    Send PSend12504 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
<<<<<<< HEAD
    Send PSend12539 = new_Send((Optr)VAR_newArray_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12538, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)int_1_Const);
    Assign PAssign12540 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_newArray_0_0);
    Array PThreadedCode12532 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign12533, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12536, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12537, (Optr)&t_send1, (Optr)PSend12535, (Optr)&t_send1, (Optr)PSend12534, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12538, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend12539, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12540, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12530 = new_Method_with(empty_Array, PArray12531, empty_Array, PThreadedCode12532, 4, PAssign12533, PSend12539, PAssign12540, self);
    
    MethodClosure MC_SMB_grow = new_MethodClosure((Method)PMethod12530, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12505 = new_Send((Optr)VAR_newArray_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12504, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)int_1_Const);
    Assign PAssign12506 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_newArray_0_0);
    Array PThreadedCode12498 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign12499, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12502, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12503, (Optr)&t_send1, (Optr)PSend12501, (Optr)&t_send1, (Optr)PSend12500, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12504, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend12505, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12506, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12496 = new_Method_with(empty_Array, PArray12497, empty_Array, PThreadedCode12498, 4, PAssign12499, PSend12505, PAssign12506, self);
    
    MethodClosure MC_SMB_grow = new_MethodClosure((Method)PMethod12496, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_grow, MC_SMB_grow);
}


static void init_SMB_growSize() {
    Symbol SMB_growSize = new_Symbol(L"growSize");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
<<<<<<< HEAD
    Send PSend12543 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
=======
    Send PSend12509 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // max:. 
<<<<<<< HEAD
    Send PSend12544 = new_Send((Optr)PSend12543, SMB_max_, 1, (Optr)int_2_Const);
    Array PThreadedCode12542 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12543, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend12544, (Optr)&t_method_return);
    Method PMethod12541 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12542, 1, PSend12544);
    
    MethodClosure MC_SMB_growSize = new_MethodClosure((Method)PMethod12541, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12510 = new_Send((Optr)PSend12509, SMB_max_, 1, (Optr)int_2_Const);
    Array PThreadedCode12508 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12509, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend12510, (Optr)&t_method_return);
    Method PMethod12507 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12508, 1, PSend12510);
    
    MethodClosure MC_SMB_growSize = new_MethodClosure((Method)PMethod12507, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_growSize, MC_SMB_growSize);
}


static void init_SMB_makeRoomAtFirst() {
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    Variable VAR_delta_0_0 = new_Variable_named(L"delta", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
<<<<<<< HEAD
    Array PArray12546 = new_Array_with(2, (Optr)VAR_delta_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12549 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12553 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend12554 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12552 = new_Send((Optr)PSend12553, SMB__minus_, 1, (Optr)PSend12554);
    Assign PAssign12551 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12552);
=======
    Array PArray12512 = new_Array_with(2, (Optr)VAR_delta_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12515 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12519 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend12520 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12518 = new_Send((Optr)PSend12519, SMB__minus_, 1, (Optr)PSend12520);
    Assign PAssign12517 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12518);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
<<<<<<< HEAD
    Send PSend12555 = new_Send((Optr)VAR_delta_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12559 = new_Send((Optr)self, SMB_grow, 0);
    // size. 
    Send PSend12562 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12563 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12561 = new_Send((Optr)PSend12562, SMB__minus_, 1, (Optr)PSend12563);
    Assign PAssign12560 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12561);
    Array PThreadedCode12558 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12559, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12560, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12562, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12563, (Optr)&t_send1, (Optr)PSend12561, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12557 = new_Block_with(empty_Array, empty_Array, PThreadedCode12558, 2, PSend12559, PAssign12560);
    // ifTrue:. 
    Send PSend12556 = new_Send((Optr)PSend12555, SMB_ifTrue_, 1, (Optr)PBlock12557);
    // size. 
    Send PSend12564 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // =. 
    Send PSend12565 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12564);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12569 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12568 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12569, (Optr)&t_block_return);
    Block PBlock12567 = new_Block_with(empty_Array, empty_Array, PThreadedCode12568, 1, PSend12569);
    // ifTrue:. 
    Send PSend12566 = new_Send((Optr)PSend12565, SMB_ifTrue_, 1, (Optr)PBlock12567);
    // size. 
    Send PSend12571 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12570 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12571);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12574 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)VAR_delta_0_0);
    Array PThreadedCode12573 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12574, (Optr)&t_block_return);
    Block PBlock12572 = new_Block_with(empty_Array, empty_Array, PThreadedCode12573, 1, PSend12574);
    // -. 
    Send PSend12577 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12578 = new_Send((Optr)PSend12577, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12579 = new_Send((Optr)PSend12578, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12580 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12579);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12581 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)PSend12580);
    // -. 
    Send PSend12582 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    // +. 
    Send PSend12583 = new_Send((Optr)PSend12582, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12584 = new_Send((Optr)PSend12583, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12585 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12584, (Optr)nil_Const);
    // -. 
    Send PSend12587 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12586 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12587);
    Array PThreadedCode12576 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12577, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12578, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12579, (Optr)&t_send1, (Optr)PSend12580, (Optr)&t_send2, (Optr)PSend12581, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12582, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12583, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12584, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12585, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12586, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12587, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12575 = new_Block_with(empty_Array, empty_Array, PThreadedCode12576, 3, PSend12581, PSend12585, PAssign12586);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12588 = new_Send((Optr)PBlock12572, SMB_whileTrue_, 1, (Optr)PBlock12575);
    // +. 
    Send PSend12590 = new_Send((Optr)VAR_delta_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12589 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12590);
    // size. 
    Send PSend12592 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12591 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12592);
    Array PThreadedCode12550 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign12551, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12553, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12554, (Optr)&t_send1, (Optr)PSend12552, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12555, (Optr)&t_send_ifTrue_, (Optr)PSend12556, (Optr)PBlock12557, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12564, (Optr)&t_send1, (Optr)PSend12565, (Optr)&t_send_ifTrue_, (Optr)PSend12566, (Optr)PBlock12567, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12570, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12571, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12572, (Optr)&t_push_closure, (Optr)PBlock12575, (Optr)&t_send1, (Optr)PSend12588, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12589, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12590, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12591, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12592, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12548 = new_Block_with(PArray12549, empty_Array, PThreadedCode12550, 8, PAssign12551, PSend12556, PSend12566, PAssign12570, PSend12588, PAssign12589, PAssign12591, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12593 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12548);
    Array PThreadedCode12547 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12548, (Optr)&t_send1, (Optr)PSend12593, (Optr)&t_method_return);
    Method PMethod12545 = new_Method_with(empty_Array, PArray12546, empty_Array, PThreadedCode12547, 1, PSend12593);
    
    MethodClosure MC_SMB_makeRoomAtFirst = new_MethodClosure((Method)PMethod12545, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12521 = new_Send((Optr)VAR_delta_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12525 = new_Send((Optr)self, SMB_grow, 0);
    // size. 
    Send PSend12528 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12529 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12527 = new_Send((Optr)PSend12528, SMB__minus_, 1, (Optr)PSend12529);
    Assign PAssign12526 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12527);
    Array PThreadedCode12524 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12525, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12526, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12528, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12529, (Optr)&t_send1, (Optr)PSend12527, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12523 = new_Block_with(empty_Array, empty_Array, PThreadedCode12524, 2, PSend12525, PAssign12526);
    // ifTrue:. 
    Send PSend12522 = new_Send((Optr)PSend12521, SMB_ifTrue_, 1, (Optr)PBlock12523);
    // size. 
    Send PSend12530 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // =. 
    Send PSend12531 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12530);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12535 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12534 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12535, (Optr)&t_block_return);
    Block PBlock12533 = new_Block_with(empty_Array, empty_Array, PThreadedCode12534, 1, PSend12535);
    // ifTrue:. 
    Send PSend12532 = new_Send((Optr)PSend12531, SMB_ifTrue_, 1, (Optr)PBlock12533);
    // size. 
    Send PSend12537 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12536 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12537);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12540 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)VAR_delta_0_0);
    Array PThreadedCode12539 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12540, (Optr)&t_block_return);
    Block PBlock12538 = new_Block_with(empty_Array, empty_Array, PThreadedCode12539, 1, PSend12540);
    // -. 
    Send PSend12543 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12544 = new_Send((Optr)PSend12543, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12545 = new_Send((Optr)PSend12544, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12546 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12545);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12547 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)PSend12546);
    // -. 
    Send PSend12548 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    // +. 
    Send PSend12549 = new_Send((Optr)PSend12548, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12550 = new_Send((Optr)PSend12549, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12551 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12550, (Optr)nil_Const);
    // -. 
    Send PSend12553 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12552 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12553);
    Array PThreadedCode12542 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12543, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12544, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12545, (Optr)&t_send1, (Optr)PSend12546, (Optr)&t_send2, (Optr)PSend12547, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12548, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12549, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12550, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12551, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12552, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12553, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12541 = new_Block_with(empty_Array, empty_Array, PThreadedCode12542, 3, PSend12547, PSend12551, PAssign12552);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12554 = new_Send((Optr)PBlock12538, SMB_whileTrue_, 1, (Optr)PBlock12541);
    // +. 
    Send PSend12556 = new_Send((Optr)VAR_delta_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12555 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12556);
    // size. 
    Send PSend12558 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12557 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12558);
    Array PThreadedCode12516 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign12517, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12519, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12520, (Optr)&t_send1, (Optr)PSend12518, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12521, (Optr)&t_send_ifTrue_, (Optr)PSend12522, (Optr)PBlock12523, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12530, (Optr)&t_send1, (Optr)PSend12531, (Optr)&t_send_ifTrue_, (Optr)PSend12532, (Optr)PBlock12533, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12536, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12537, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12538, (Optr)&t_push_closure, (Optr)PBlock12541, (Optr)&t_send1, (Optr)PSend12554, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12555, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12556, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12557, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12558, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12514 = new_Block_with(PArray12515, empty_Array, PThreadedCode12516, 8, PAssign12517, PSend12522, PSend12532, PAssign12536, PSend12554, PAssign12555, PAssign12557, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12559 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12514);
    Array PThreadedCode12513 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12514, (Optr)&t_send1, (Optr)PSend12559, (Optr)&t_method_return);
    Method PMethod12511 = new_Method_with(empty_Array, PArray12512, empty_Array, PThreadedCode12513, 1, PSend12559);
    
    MethodClosure MC_SMB_makeRoomAtFirst = new_MethodClosure((Method)PMethod12511, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_makeRoomAtFirst, MC_SMB_makeRoomAtFirst);
}


static void init_SMB_makeRoomAtLast() {
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    Variable VAR_newLast_0_0 = new_Variable_named(L"newLast", 0);
    Variable VAR_delta_0_1 = new_Variable_named(L"delta", 0);
<<<<<<< HEAD
    Array PArray12595 = new_Array_with(2, (Optr)VAR_newLast_0_0, (Optr)VAR_delta_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12598 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12601 = new_Send((Optr)self, SMB_size, 0);
    Assign PAssign12600 = new_Assign((Optr)VAR_newLast_0_0, (Optr)PSend12601);
    // size. 
    Send PSend12602 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12603 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12604 = new_Send((Optr)PSend12602, SMB__minus_, 1, (Optr)PSend12603);
=======
    Array PArray12561 = new_Array_with(2, (Optr)VAR_newLast_0_0, (Optr)VAR_delta_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12564 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12567 = new_Send((Optr)self, SMB_size, 0);
    Assign PAssign12566 = new_Assign((Optr)VAR_newLast_0_0, (Optr)PSend12567);
    // size. 
    Send PSend12568 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12569 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12570 = new_Send((Optr)PSend12568, SMB__minus_, 1, (Optr)PSend12569);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
<<<<<<< HEAD
    Send PSend12605 = new_Send((Optr)PSend12604, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12609 = new_Send((Optr)self, SMB_grow, 0);
    Array PThreadedCode12608 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12609, (Optr)&t_block_return);
    Block PBlock12607 = new_Block_with(empty_Array, empty_Array, PThreadedCode12608, 1, PSend12609);
    // ifTrue:. 
    Send PSend12606 = new_Send((Optr)PSend12605, SMB_ifTrue_, 1, (Optr)PBlock12607);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12611 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12610 = new_Assign((Optr)VAR_delta_0_1, (Optr)PSend12611);
    // =. 
    Send PSend12612 = new_Send((Optr)PAssign12610, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12616 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12615 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12616, (Optr)&t_block_return);
    Block PBlock12614 = new_Block_with(empty_Array, empty_Array, PThreadedCode12615, 1, PSend12616);
    // ifTrue:. 
    Send PSend12613 = new_Send((Optr)PSend12612, SMB_ifTrue_, 1, (Optr)PBlock12614);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray12618 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12620 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12621 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12620);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12622 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_2_0, (Optr)PSend12621);
    // +. 
    Send PSend12623 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    // at:put:. 
    Send PSend12624 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12623, (Optr)nil_Const);
    Array PThreadedCode12619 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12620, (Optr)&t_send1, (Optr)PSend12621, (Optr)&t_send2, (Optr)PSend12622, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12623, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12624, (Optr)&t_method_return);
    Block PBlock12617 = new_Block_with(PArray12618, empty_Array, PThreadedCode12619, 2, PSend12622, PSend12624);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12625 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_newLast_0_0, (Optr)PBlock12617);
    Assign PAssign12626 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)int_1_Const);
    Assign PAssign12627 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newLast_0_0);
    Array PThreadedCode12599 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign12600, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12601, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12602, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12603, (Optr)&t_send1, (Optr)PSend12604, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12605, (Optr)&t_send_ifTrue_, (Optr)PSend12606, (Optr)PBlock12607, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12610, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12611, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12612, (Optr)&t_send_ifTrue_, (Optr)PSend12613, (Optr)PBlock12614, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_push_closure, (Optr)PBlock12617, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12625, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12626, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12627, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12597 = new_Block_with(PArray12598, empty_Array, PThreadedCode12599, 7, PAssign12600, PSend12606, PSend12613, PSend12625, PAssign12626, PAssign12627, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12628 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12597);
    Array PThreadedCode12596 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12597, (Optr)&t_send1, (Optr)PSend12628, (Optr)&t_method_return);
    Method PMethod12594 = new_Method_with(empty_Array, PArray12595, empty_Array, PThreadedCode12596, 1, PSend12628);
    
    MethodClosure MC_SMB_makeRoomAtLast = new_MethodClosure((Method)PMethod12594, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12571 = new_Send((Optr)PSend12570, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12575 = new_Send((Optr)self, SMB_grow, 0);
    Array PThreadedCode12574 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12575, (Optr)&t_block_return);
    Block PBlock12573 = new_Block_with(empty_Array, empty_Array, PThreadedCode12574, 1, PSend12575);
    // ifTrue:. 
    Send PSend12572 = new_Send((Optr)PSend12571, SMB_ifTrue_, 1, (Optr)PBlock12573);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12577 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12576 = new_Assign((Optr)VAR_delta_0_1, (Optr)PSend12577);
    // =. 
    Send PSend12578 = new_Send((Optr)PAssign12576, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12582 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12581 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12582, (Optr)&t_block_return);
    Block PBlock12580 = new_Block_with(empty_Array, empty_Array, PThreadedCode12581, 1, PSend12582);
    // ifTrue:. 
    Send PSend12579 = new_Send((Optr)PSend12578, SMB_ifTrue_, 1, (Optr)PBlock12580);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray12584 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12586 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12587 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12586);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12588 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_2_0, (Optr)PSend12587);
    // +. 
    Send PSend12589 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    // at:put:. 
    Send PSend12590 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12589, (Optr)nil_Const);
    Array PThreadedCode12585 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12586, (Optr)&t_send1, (Optr)PSend12587, (Optr)&t_send2, (Optr)PSend12588, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12589, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12590, (Optr)&t_method_return);
    Block PBlock12583 = new_Block_with(PArray12584, empty_Array, PThreadedCode12585, 2, PSend12588, PSend12590);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12591 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_newLast_0_0, (Optr)PBlock12583);
    Assign PAssign12592 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)int_1_Const);
    Assign PAssign12593 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newLast_0_0);
    Array PThreadedCode12565 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign12566, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12567, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12568, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12569, (Optr)&t_send1, (Optr)PSend12570, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12571, (Optr)&t_send_ifTrue_, (Optr)PSend12572, (Optr)PBlock12573, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12576, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12577, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12578, (Optr)&t_send_ifTrue_, (Optr)PSend12579, (Optr)PBlock12580, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_push_closure, (Optr)PBlock12583, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12591, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12592, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12593, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12563 = new_Block_with(PArray12564, empty_Array, PThreadedCode12565, 7, PAssign12566, PSend12572, PSend12579, PSend12591, PAssign12592, PAssign12593, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12594 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12563);
    Array PThreadedCode12562 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12563, (Optr)&t_send1, (Optr)PSend12594, (Optr)&t_method_return);
    Method PMethod12560 = new_Method_with(empty_Array, PArray12561, empty_Array, PThreadedCode12562, 1, PSend12594);
    
    MethodClosure MC_SMB_makeRoomAtLast = new_MethodClosure((Method)PMethod12560, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_makeRoomAtLast, MC_SMB_makeRoomAtLast);
}


static void init_SMB_removeFirst() {
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
<<<<<<< HEAD
    Array PArray12630 = new_Array_with(1, (Optr)VAR_firstObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12632 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12634 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Assign PAssign12633 = new_Assign((Optr)VAR_firstObject_0_0, (Optr)PSend12634);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12635 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)nil_Const);
=======
    Array PArray12596 = new_Array_with(1, (Optr)VAR_firstObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12598 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12600 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Assign PAssign12599 = new_Assign((Optr)VAR_firstObject_0_0, (Optr)PSend12600);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12601 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)nil_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend12637 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12636 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12637);
    Array PThreadedCode12631 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12632, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12633, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12634, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12635, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12636, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12637, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_method_return);
    Method PMethod12629 = new_Method_with(empty_Array, PArray12630, empty_Array, PThreadedCode12631, 5, PSend12632, PAssign12633, PSend12635, PAssign12636, VAR_firstObject_0_0);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod12629, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12603 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12602 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12603);
    Array PThreadedCode12597 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12598, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12599, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12600, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12601, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12602, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12603, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_method_return);
    Method PMethod12595 = new_Method_with(empty_Array, PArray12596, empty_Array, PThreadedCode12597, 5, PSend12598, PAssign12599, PSend12601, PAssign12602, VAR_firstObject_0_0);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod12595, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_removeFirst, MC_SMB_removeFirst);
}


static void init_SMB_removeLast() {
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    Variable VAR_lastObject_0_0 = new_Variable_named(L"lastObject", 0);
<<<<<<< HEAD
    Array PArray12639 = new_Array_with(1, (Optr)VAR_lastObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12641 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12643 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Assign PAssign12642 = new_Assign((Optr)VAR_lastObject_0_0, (Optr)PSend12643);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12644 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)nil_Const);
=======
    Array PArray12605 = new_Array_with(1, (Optr)VAR_lastObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12607 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12609 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Assign PAssign12608 = new_Assign((Optr)VAR_lastObject_0_0, (Optr)PSend12609);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12610 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)nil_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend12646 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12645 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12646);
    Array PThreadedCode12640 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12641, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12642, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12643, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12644, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12645, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12646, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_lastObject_0_0, (Optr)&t_method_return);
    Method PMethod12638 = new_Method_with(empty_Array, PArray12639, empty_Array, PThreadedCode12640, 5, PSend12641, PAssign12642, PSend12644, PAssign12645, VAR_lastObject_0_0);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod12638, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12612 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12611 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12612);
    Array PThreadedCode12606 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12607, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12608, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12609, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12610, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12611, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12612, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_lastObject_0_0, (Optr)&t_method_return);
    Method PMethod12604 = new_Method_with(empty_Array, PArray12605, empty_Array, PThreadedCode12606, 5, PSend12607, PAssign12608, PSend12610, PAssign12611, VAR_lastObject_0_0);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod12604, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_removeLast, MC_SMB_removeLast);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
<<<<<<< HEAD
    Send PSend12652 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
=======
    Send PSend12618 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // //. 
<<<<<<< HEAD
    Send PSend12651 = new_Send((Optr)PSend12652, SMB__quotient_, 1, (Optr)int_3_Const);
=======
    Send PSend12617 = new_Send((Optr)PSend12618, SMB__quotient_, 1, (Optr)int_3_Const);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // max:. 
<<<<<<< HEAD
    Send PSend12650 = new_Send((Optr)PSend12651, SMB_max_, 1, (Optr)int_1_Const);
    Assign PAssign12649 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12650);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12654 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12653 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12654);
    Array PThreadedCode12648 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12649, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12652, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend12651, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12650, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12653, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12654, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12647 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12648, 3, PAssign12649, PAssign12653, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod12647, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12616 = new_Send((Optr)PSend12617, SMB_max_, 1, (Optr)int_1_Const);
    Assign PAssign12615 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12616);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12620 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12619 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12620);
    Array PThreadedCode12614 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12615, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12618, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend12617, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12616, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12619, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12620, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12613 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12614, 3, PAssign12615, PAssign12619, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod12613, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_reverseDo_() {
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
<<<<<<< HEAD
    Array PArray12656 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray12657 = new_Array_with(1, (Optr)VAR_index_0_1);
    Assign PAssign12659 = new_Assign((Optr)VAR_index_0_1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend12662 = new_Send((Optr)VAR_index_0_1, SMB__gt__equals_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12661 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12662, (Optr)&t_block_return);
    Block PBlock12660 = new_Block_with(empty_Array, empty_Array, PThreadedCode12661, 1, PSend12662);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12665 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12666 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12665);
=======
    Array PArray12622 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray12623 = new_Array_with(1, (Optr)VAR_index_0_1);
    Assign PAssign12625 = new_Assign((Optr)VAR_index_0_1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend12628 = new_Send((Optr)VAR_index_0_1, SMB__gt__equals_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12627 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12628, (Optr)&t_block_return);
    Block PBlock12626 = new_Block_with(empty_Array, empty_Array, PThreadedCode12627, 1, PSend12628);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12631 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12632 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12631);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
<<<<<<< HEAD
    Send PSend12668 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12667 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12668);
    Array PThreadedCode12664 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend12665, (Optr)&t_send1, (Optr)PSend12666, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12667, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12668, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12663 = new_Block_with(empty_Array, empty_Array, PThreadedCode12664, 2, PSend12666, PAssign12667);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12669 = new_Send((Optr)PBlock12660, SMB_whileTrue_, 1, (Optr)PBlock12663);
    Array PThreadedCode12658 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign12659, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12660, (Optr)&t_push_closure, (Optr)PBlock12663, (Optr)&t_send1, (Optr)PSend12669, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12655 = new_Method_with(PArray12656, PArray12657, empty_Array, PThreadedCode12658, 3, PAssign12659, PSend12669, self);
    
    MethodClosure MC_SMB_reverseDo_ = new_MethodClosure((Method)PMethod12655, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12634 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12633 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12634);
    Array PThreadedCode12630 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend12631, (Optr)&t_send1, (Optr)PSend12632, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12633, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12634, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12629 = new_Block_with(empty_Array, empty_Array, PThreadedCode12630, 2, PSend12632, PAssign12633);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12635 = new_Send((Optr)PBlock12626, SMB_whileTrue_, 1, (Optr)PBlock12629);
    Array PThreadedCode12624 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign12625, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12626, (Optr)&t_push_closure, (Optr)PBlock12629, (Optr)&t_send1, (Optr)PSend12635, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12621 = new_Method_with(PArray12622, PArray12623, empty_Array, PThreadedCode12624, 3, PAssign12625, PSend12635, self);
    
    MethodClosure MC_SMB_reverseDo_ = new_MethodClosure((Method)PMethod12621, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reverseDo_, MC_SMB_reverseDo_);
}


static void init_SMB_reversed() {
    Symbol SMB_reversed = new_Symbol(L"reversed");
    Variable VAR_newCol_0_0 = new_Variable_named(L"newCol", 0);
<<<<<<< HEAD
    Array PArray12671 = new_Array_with(1, (Optr)VAR_newCol_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12675 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12674 = new_Send((Optr)PSend12675, SMB_new, 0);
    Assign PAssign12673 = new_Assign((Optr)VAR_newCol_0_0, (Optr)PSend12674);
    Variable VAR_elem_1_0 = new_Variable_named(L"elem", 1);
    Array PArray12677 = new_Array_with(1, (Optr)VAR_elem_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12679 = new_Send((Optr)VAR_newCol_0_0, SMB_addLast_, 1, (Optr)VAR_elem_1_0);
    Array PThreadedCode12678 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_push_variable, (Optr)VAR_elem_1_0, (Optr)&t_send1, (Optr)PSend12679, (Optr)&t_method_return);
    Block PBlock12676 = new_Block_with(PArray12677, empty_Array, PThreadedCode12678, 1, PSend12679);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend12680 = new_Send((Optr)self, SMB_reverseDo_, 1, (Optr)PBlock12676);
    Array PThreadedCode12672 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12673, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12675, (Optr)&t_send0, (Optr)PSend12674, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12676, (Optr)&t_send1, (Optr)PSend12680, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_method_return);
    Method PMethod12670 = new_Method_with(empty_Array, PArray12671, empty_Array, PThreadedCode12672, 3, PAssign12673, PSend12680, VAR_newCol_0_0);
    
    MethodClosure MC_SMB_reversed = new_MethodClosure((Method)PMethod12670, Collections_Sequenceable_OrderedCollection_Class);
=======
    Array PArray12637 = new_Array_with(1, (Optr)VAR_newCol_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12641 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12640 = new_Send((Optr)PSend12641, SMB_new, 0);
    Assign PAssign12639 = new_Assign((Optr)VAR_newCol_0_0, (Optr)PSend12640);
    Variable VAR_elem_1_0 = new_Variable_named(L"elem", 1);
    Array PArray12643 = new_Array_with(1, (Optr)VAR_elem_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12645 = new_Send((Optr)VAR_newCol_0_0, SMB_addLast_, 1, (Optr)VAR_elem_1_0);
    Array PThreadedCode12644 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_push_variable, (Optr)VAR_elem_1_0, (Optr)&t_send1, (Optr)PSend12645, (Optr)&t_method_return);
    Block PBlock12642 = new_Block_with(PArray12643, empty_Array, PThreadedCode12644, 1, PSend12645);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend12646 = new_Send((Optr)self, SMB_reverseDo_, 1, (Optr)PBlock12642);
    Array PThreadedCode12638 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12639, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12641, (Optr)&t_send0, (Optr)PSend12640, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12642, (Optr)&t_send1, (Optr)PSend12646, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_method_return);
    Method PMethod12636 = new_Method_with(empty_Array, PArray12637, empty_Array, PThreadedCode12638, 3, PAssign12639, PSend12646, VAR_newCol_0_0);
    
    MethodClosure MC_SMB_reversed = new_MethodClosure((Method)PMethod12636, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reversed, MC_SMB_reversed);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
<<<<<<< HEAD
    Array PArray12682 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12685 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Array PThreadedCode12688 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock12687 = new_Block_with(empty_Array, empty_Array, PThreadedCode12688, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend12689 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_index_1_1, (Optr)PBlock12687);
    Array PThreadedCode12686 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_closure, (Optr)PBlock12687, (Optr)&t_send2, (Optr)PSend12689, (Optr)&t_method_return);
    Block PBlock12684 = new_Block_with(PArray12685, empty_Array, PThreadedCode12686, 1, PSend12689);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12690 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock12684);
    Array PThreadedCode12683 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12684, (Optr)&t_send1, (Optr)PSend12690, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12681 = new_Method_with(PArray12682, empty_Array, empty_Array, PThreadedCode12683, 2, PSend12690, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod12681, Collections_Sequenceable_OrderedCollection_Class);
=======
    Array PArray12648 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12651 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Array PThreadedCode12654 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock12653 = new_Block_with(empty_Array, empty_Array, PThreadedCode12654, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend12655 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_index_1_1, (Optr)PBlock12653);
    Array PThreadedCode12652 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_closure, (Optr)PBlock12653, (Optr)&t_send2, (Optr)PSend12655, (Optr)&t_method_return);
    Block PBlock12650 = new_Block_with(PArray12651, empty_Array, PThreadedCode12652, 1, PSend12655);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12656 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock12650);
    Array PThreadedCode12649 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12650, (Optr)&t_send1, (Optr)PSend12656, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12647 = new_Method_with(PArray12648, empty_Array, empty_Array, PThreadedCode12649, 2, PSend12656, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod12647, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setCollection_() {
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
<<<<<<< HEAD
    Array PArray12692 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Assign PAssign12694 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_anArray_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend12695 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode12693 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign12694, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12695, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12691 = new_Method_with(PArray12692, empty_Array, empty_Array, PThreadedCode12693, 3, PAssign12694, PSend12695, self);
    
    MethodClosure MC_SMB_setCollection_ = new_MethodClosure((Method)PMethod12691, Collections_Sequenceable_OrderedCollection_Class);
=======
    Array PArray12658 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Assign PAssign12660 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_anArray_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend12661 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode12659 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign12660, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12661, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12657 = new_Method_with(PArray12658, empty_Array, empty_Array, PThreadedCode12659, 3, PAssign12660, PSend12661, self);
    
    MethodClosure MC_SMB_setCollection_ = new_MethodClosure((Method)PMethod12657, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_setCollection_, MC_SMB_setCollection_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
<<<<<<< HEAD
    Send PSend12698 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
=======
    Send PSend12664 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
<<<<<<< HEAD
    Send PSend12699 = new_Send((Optr)PSend12698, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode12697 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12698, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12699, (Optr)&t_method_return);
    Method PMethod12696 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12697, 1, PSend12699);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod12696, Collections_Sequenceable_OrderedCollection_Class);
=======
    Send PSend12665 = new_Send((Optr)PSend12664, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode12663 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12664, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12665, (Optr)&t_method_return);
    Method PMethod12662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12663, 1, PSend12665);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod12662, Collections_Sequenceable_OrderedCollection_Class);
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_size, MC_SMB_size);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
<<<<<<< HEAD
    Array PArray12701 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12703 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:. 
    Send PSend12704 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    // setCollection:. 
    Send PSend12705 = new_Send((Optr)PSend12703, SMB_setCollection_, 1, (Optr)PSend12704);
    Array PThreadedCode12702 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12703, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend12704, (Optr)&t_send1, (Optr)PSend12705, (Optr)&t_method_return);
    Method PMethod12700 = new_Method_with(PArray12701, empty_Array, empty_Array, PThreadedCode12702, 1, PSend12705);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod12700, HEADER(Collections_Sequenceable_OrderedCollection_Class));
=======
    Array PArray12667 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12669 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:. 
    Send PSend12670 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    // setCollection:. 
    Send PSend12671 = new_Send((Optr)PSend12669, SMB_setCollection_, 1, (Optr)PSend12670);
    Array PThreadedCode12668 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12669, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend12670, (Optr)&t_send1, (Optr)PSend12671, (Optr)&t_method_return);
    Method PMethod12666 = new_Method_with(PArray12667, empty_Array, empty_Array, PThreadedCode12668, 1, PSend12671);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod12666, HEADER(Collections_Sequenceable_OrderedCollection_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_ofSize_() {
    Symbol SMB_ofSize_ = new_Symbol(L"ofSize:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
<<<<<<< HEAD
    Array PArray12707 = new_Array_with(1, (Optr)VAR_n_0_0);
    Variable VAR_collection_0_1 = new_Variable_named(L"collection", 0);
    Array PArray12708 = new_Array_with(1, (Optr)VAR_collection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12711 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_n_0_0);
    Assign PAssign12710 = new_Assign((Optr)VAR_collection_0_1, (Optr)PSend12711);
    Symbol SMB_collector = new_Symbol(L"collector");
    // collector. 
    Send PSend12712 = new_Send((Optr)VAR_collection_0_1, SMB_collector, 0);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12713 = new_Send((Optr)VAR_collection_0_1, SMB_setContents_, 1, (Optr)PSend12712);
    Array PThreadedCode12709 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12710, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend12711, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_send0, (Optr)PSend12712, (Optr)&t_send1, (Optr)PSend12713, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_method_return);
    Method PMethod12706 = new_Method_with(PArray12707, PArray12708, empty_Array, PThreadedCode12709, 3, PAssign12710, PSend12713, VAR_collection_0_1);
    
    MethodClosure MC_SMB_ofSize_ = new_MethodClosure((Method)PMethod12706, HEADER(Collections_Sequenceable_OrderedCollection_Class));
=======
    Array PArray12673 = new_Array_with(1, (Optr)VAR_n_0_0);
    Variable VAR_collection_0_1 = new_Variable_named(L"collection", 0);
    Array PArray12674 = new_Array_with(1, (Optr)VAR_collection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12677 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_n_0_0);
    Assign PAssign12676 = new_Assign((Optr)VAR_collection_0_1, (Optr)PSend12677);
    Symbol SMB_collector = new_Symbol(L"collector");
    // collector. 
    Send PSend12678 = new_Send((Optr)VAR_collection_0_1, SMB_collector, 0);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12679 = new_Send((Optr)VAR_collection_0_1, SMB_setContents_, 1, (Optr)PSend12678);
    Array PThreadedCode12675 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12676, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend12677, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_send0, (Optr)PSend12678, (Optr)&t_send1, (Optr)PSend12679, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_method_return);
    Method PMethod12672 = new_Method_with(PArray12673, PArray12674, empty_Array, PThreadedCode12675, 3, PAssign12676, PSend12679, VAR_collection_0_1);
    
    MethodClosure MC_SMB_ofSize_ = new_MethodClosure((Method)PMethod12672, HEADER(Collections_Sequenceable_OrderedCollection_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_ofSize_, MC_SMB_ofSize_);
}


static void init_class_SMB_new_withAll_() {
    Symbol SMB_new_withAll_ = new_Symbol(L"new:withAll:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
<<<<<<< HEAD
    Array PArray12715 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12717 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:withAll:. 
    Send PSend12718 = new_Send((Optr)Array_classReference, SMB_new_withAll_, 2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12719 = new_Send((Optr)PSend12717, SMB_setContents_, 1, (Optr)PSend12718);
    Array PThreadedCode12716 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12717, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12718, (Optr)&t_send1, (Optr)PSend12719, (Optr)&t_method_return);
    Method PMethod12714 = new_Method_with(PArray12715, empty_Array, empty_Array, PThreadedCode12716, 1, PSend12719);
    
    MethodClosure MC_SMB_new_withAll_ = new_MethodClosure((Method)PMethod12714, HEADER(Collections_Sequenceable_OrderedCollection_Class));
=======
    Array PArray12681 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12683 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:withAll:. 
    Send PSend12684 = new_Send((Optr)Array_classReference, SMB_new_withAll_, 2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12685 = new_Send((Optr)PSend12683, SMB_setContents_, 1, (Optr)PSend12684);
    Array PThreadedCode12682 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12683, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12684, (Optr)&t_send1, (Optr)PSend12685, (Optr)&t_method_return);
    Method PMethod12680 = new_Method_with(PArray12681, empty_Array, empty_Array, PThreadedCode12682, 1, PSend12685);
    
    MethodClosure MC_SMB_new_withAll_ = new_MethodClosure((Method)PMethod12680, HEADER(Collections_Sequenceable_OrderedCollection_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new_withAll_, MC_SMB_new_withAll_);
}


static void init_class_SMB_new() {
    /*
    new
// 	"The receiver can only have one instance. Create it or complain that
// 	one already exists."
// 
// 	thisClass class ~~ self
// 		ifTrue: [^thisClass := self basicNew]
// 		ifFalse: [self error: 'A Metaclass should only have one instance!']
    */
    Symbol SMB_new = new_Symbol(L"new");
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Constant int_10_Const = new_Constant((Optr)int_10);
    // new:. 
<<<<<<< HEAD
    Send PSend12722 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_10_Const);
    Array PThreadedCode12721 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend12722, (Optr)&t_method_return);
    Method PMethod12720 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12721, 1, PSend12722);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod12720, HEADER(Collections_Sequenceable_OrderedCollection_Class));
=======
    Send PSend12688 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_10_Const);
    Array PThreadedCode12687 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend12688, (Optr)&t_method_return);
    Method PMethod12686 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12687, 1, PSend12688);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod12686, HEADER(Collections_Sequenceable_OrderedCollection_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
<<<<<<< HEAD
    Array PArray12724 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12725 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12729 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend12728 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend12729);
    Assign PAssign12727 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12728);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12730 = new_Send((Optr)VAR_newCollection_0_1, SMB_addAll_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12726 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12727, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend12729, (Optr)&t_send1, (Optr)PSend12728, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12730, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12723 = new_Method_with(PArray12724, PArray12725, empty_Array, PThreadedCode12726, 3, PAssign12727, PSend12730, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod12723, HEADER(Collections_Sequenceable_OrderedCollection_Class));
=======
    Array PArray12690 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12691 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12695 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend12694 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend12695);
    Assign PAssign12693 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12694);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12696 = new_Send((Optr)VAR_newCollection_0_1, SMB_addAll_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12692 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12693, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend12695, (Optr)&t_send1, (Optr)PSend12694, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12696, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12689 = new_Method_with(PArray12690, PArray12691, empty_Array, PThreadedCode12692, 3, PAssign12693, PSend12696, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod12689, HEADER(Collections_Sequenceable_OrderedCollection_Class));
>>>>>>> 0409bfcc3f9379d8b19cce9b02e2a910a0ce2629
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_newFrom_, MC_SMB_newFrom_);
}

void init_Collections_Sequenceable_OrderedCollection_layout() {
    layout_Collections_Sequenceable_OrderedCollection_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Collections_Sequenceable_OrderedCollection_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_OrderedCollection = new_Symbol(L"OrderedCollection");
    slot_Collections_Sequenceable_OrderedCollection_array = (Optr)new_Slot(0, L"array");
    slot_Collections_Sequenceable_OrderedCollection_firstIndex = (Optr)new_Slot(1, L"firstIndex");
    slot_Collections_Sequenceable_OrderedCollection_lastIndex = (Optr)new_Slot(2, L"lastIndex");
    layout_Collections_Sequenceable_OrderedCollection = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Collections_Sequenceable_OrderedCollection)->values[0] = slot_Collections_Sequenceable_OrderedCollection_array; // array 
    ((Array)layout_Collections_Sequenceable_OrderedCollection)->values[1] = slot_Collections_Sequenceable_OrderedCollection_firstIndex; // firstIndex 
    ((Array)layout_Collections_Sequenceable_OrderedCollection)->values[2] = slot_Collections_Sequenceable_OrderedCollection_lastIndex; // lastIndex 
    Collections_Sequenceable_OrderedCollection_Class = (Class)new_Class(Collections_Abstract_SequenceableCollection_Class, layout_Collections_Sequenceable_OrderedCollection_Class_class);
    Collections_Sequenceable_OrderedCollection_Class->layout = layout_Collections_Sequenceable_OrderedCollection;
    Collections_Sequenceable_OrderedCollection_Class->name = SMB_OrderedCollection;
    
}

void init_Collections_Sequenceable_OrderedCollection_methods() {
    init_SMB_add_();
    init_SMB_addAll_();
    init_SMB_addAllLast_();
    init_SMB_addFirst_();
    init_SMB_addLast_();
    init_SMB_asArray();
    init_SMB_at_();
    init_SMB_at_put_();
    init_SMB_collect_();
    init_SMB_select_();
    init_SMB_do_();
    init_SMB_grow();
    init_SMB_growSize();
    init_SMB_makeRoomAtFirst();
    init_SMB_makeRoomAtLast();
    init_SMB_removeFirst();
    init_SMB_removeLast();
    init_SMB_reset();
    init_SMB_reverseDo_();
    init_SMB_reversed();
    init_SMB_inspectChildrenOn_();
    init_SMB_setCollection_();
    init_SMB_size();
    init_class_SMB_new_();
    init_class_SMB_ofSize_();
    init_class_SMB_new_withAll_();
    init_class_SMB_new();
    init_class_SMB_newFrom_();
    
}