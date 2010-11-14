#include <lib/class/Collections/Sequenceable/OrderedCollection.h>


Optr layout_Collections_Sequenceable_OrderedCollection_Class_class;
Optr slot_Collections_Sequenceable_OrderedCollection_array;
Optr slot_Collections_Sequenceable_OrderedCollection_firstIndex;
Optr slot_Collections_Sequenceable_OrderedCollection_lastIndex;
Optr layout_Collections_Sequenceable_OrderedCollection;


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12362 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12364 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12363 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send1, (Optr)PSend12364, (Optr)&t_method_return);
    Method PMethod12361 = new_Method_with(PArray12362, empty_Array, empty_Array, PThreadedCode12363, 1, PSend12364);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod12361, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_addAll_() {
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12366 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    // addAllLast:. 
    Send PSend12368 = new_Send((Optr)self, SMB_addAllLast_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12367 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12368, (Optr)&t_method_return);
    Method PMethod12365 = new_Method_with(PArray12366, empty_Array, empty_Array, PThreadedCode12367, 1, PSend12368);
    
    MethodClosure MC_SMB_addAll_ = new_MethodClosure((Method)PMethod12365, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addAll_, MC_SMB_addAll_);
}


static void init_SMB_addAllLast_() {
    Symbol SMB_addAllLast_ = new_Symbol(L"addAllLast:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12370 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_each_1_0 = new_Variable_named(L"each", 1);
    Array PArray12373 = new_Array_with(1, (Optr)VAR_each_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12375 = new_Send((Optr)self, SMB_addLast_, 1, (Optr)VAR_each_1_0);
    Array PThreadedCode12374 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_each_1_0, (Optr)&t_send1, (Optr)PSend12375, (Optr)&t_method_return);
    Block PBlock12372 = new_Block_with(PArray12373, empty_Array, PThreadedCode12374, 1, PSend12375);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend12376 = new_Send((Optr)VAR_aCollection_0_0, SMB_do_, 1, (Optr)PBlock12372);
    Array PThreadedCode12371 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_push_closure, (Optr)PBlock12372, (Optr)&t_send1, (Optr)PSend12376, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_method_return);
    Method PMethod12369 = new_Method_with(PArray12370, empty_Array, empty_Array, PThreadedCode12371, 2, PSend12376, VAR_aCollection_0_0);
    
    MethodClosure MC_SMB_addAllLast_ = new_MethodClosure((Method)PMethod12369, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addAllLast_, MC_SMB_addAllLast_);
}


static void init_SMB_addFirst_() {
    Symbol SMB_addFirst_ = new_Symbol(L"addFirst:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12378 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // =. 
    Send PSend12380 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__equals_, 1, (Optr)int_1_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    // makeRoomAtFirst. 
    Send PSend12384 = new_Send((Optr)self, SMB_makeRoomAtFirst, 0);
    Array PThreadedCode12383 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12384, (Optr)&t_block_return);
    Block PBlock12382 = new_Block_with(empty_Array, empty_Array, PThreadedCode12383, 1, PSend12384);
    // ifTrue:. 
    Send PSend12381 = new_Send((Optr)PSend12380, SMB_ifTrue_, 1, (Optr)PBlock12382);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12386 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12385 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12386);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12387 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12379 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12380, (Optr)&t_send_ifTrue_, (Optr)PSend12381, (Optr)PBlock12382, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12385, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12386, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12387, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12377 = new_Method_with(PArray12378, empty_Array, empty_Array, PThreadedCode12379, 4, PSend12381, PAssign12385, PSend12387, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addFirst_ = new_MethodClosure((Method)PMethod12377, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addFirst_, MC_SMB_addFirst_);
}


static void init_SMB_addLast_() {
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    Variable VAR_newObject_0_0 = new_Variable_named(L"newObject", 0);
    Array PArray12389 = new_Array_with(1, (Optr)VAR_newObject_0_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12391 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend12392 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12391);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    // makeRoomAtLast. 
    Send PSend12396 = new_Send((Optr)self, SMB_makeRoomAtLast, 0);
    Array PThreadedCode12395 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12396, (Optr)&t_block_return);
    Block PBlock12394 = new_Block_with(empty_Array, empty_Array, PThreadedCode12395, 1, PSend12396);
    // ifTrue:. 
    Send PSend12393 = new_Send((Optr)PSend12392, SMB_ifTrue_, 1, (Optr)PBlock12394);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12398 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12397 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12398);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12399 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newObject_0_0);
    Array PThreadedCode12390 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12391, (Optr)&t_send1, (Optr)PSend12392, (Optr)&t_send_ifTrue_, (Optr)PSend12393, (Optr)PBlock12394, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12397, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12398, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_send2, (Optr)PSend12399, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newObject_0_0, (Optr)&t_method_return);
    Method PMethod12388 = new_Method_with(PArray12389, empty_Array, empty_Array, PThreadedCode12390, 4, PSend12393, PAssign12397, PSend12399, VAR_newObject_0_0);
    
    MethodClosure MC_SMB_addLast_ = new_MethodClosure((Method)PMethod12388, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_addLast_, MC_SMB_addLast_);
}


static void init_SMB_asArray() {
    Symbol SMB_asArray = new_Symbol(L"asArray");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12402 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12403 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12402);
    // size. 
    Send PSend12404 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend12405 = new_Send((Optr)PSend12403, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12404, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12401 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12402, (Optr)&t_send1, (Optr)PSend12403, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12404, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send4, (Optr)PSend12405, (Optr)&t_method_return);
    Method PMethod12400 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12401, 1, PSend12405);
    
    MethodClosure MC_SMB_asArray = new_MethodClosure((Method)PMethod12400, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_asArray, MC_SMB_asArray);
}


static void init_SMB_at_() {
    Symbol SMB_at_ = new_Symbol(L"at:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray12407 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12410 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend12412 = new_Send((Optr)VAR_anInteger_0_0, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12415 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12416 = new_Send((Optr)PSend12415, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12417 = new_Send((Optr)PSend12416, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12414 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12415, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12416, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12417, (Optr)&t_block_return);
    Block PBlock12413 = new_Block_with(empty_Array, empty_Array, PThreadedCode12414, 1, PSend12417);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12418 = new_Send((Optr)PSend12412, SMB_or_, 1, (Optr)PBlock12413);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12422 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12421 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12422, (Optr)&t_block_return);
    Block PBlock12420 = new_Block_with(empty_Array, empty_Array, PThreadedCode12421, 1, PSend12422);
    // +. 
    Send PSend12425 = new_Send((Optr)VAR_anInteger_0_0, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12426 = new_Send((Optr)PSend12425, SMB__minus_, 1, (Optr)int_1_Const);
    // at:. 
    Send PSend12427 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12426);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12428 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12427);
    Array PThreadedCode12424 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12425, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12426, (Optr)&t_send1, (Optr)PSend12427, (Optr)&t_send1, (Optr)PSend12428, (Optr)&t_block_return);
    Block PBlock12423 = new_Block_with(empty_Array, empty_Array, PThreadedCode12424, 1, PSend12428);
    // ifTrue:ifFalse:. 
    Send PSend12419 = new_Send((Optr)PSend12418, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12420, (Optr)PBlock12423);
    Array PThreadedCode12411 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12412, (Optr)&t_push_closure, (Optr)PBlock12413, (Optr)&t_send1, (Optr)PSend12418, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12419, (Optr)PBlock12420, (Optr)PBlock12423, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12409 = new_Block_with(PArray12410, empty_Array, PThreadedCode12411, 2, PSend12419, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12429 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12409);
    Array PThreadedCode12408 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12409, (Optr)&t_send1, (Optr)PSend12429, (Optr)&t_method_return);
    Method PMethod12406 = new_Method_with(PArray12407, empty_Array, empty_Array, PThreadedCode12408, 1, PSend12429);
    
    MethodClosure MC_SMB_at_ = new_MethodClosure((Method)PMethod12406, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_at_, MC_SMB_at_);
}


static void init_SMB_at_put_() {
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray12431 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Variable VAR_index_0_2 = new_Variable_named(L"index", 0);
    Array PArray12432 = new_Array_with(1, (Optr)VAR_index_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12435 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend12438 = new_Send((Optr)VAR_anInteger_0_0, SMB_asInteger, 0);
    Assign PAssign12437 = new_Assign((Optr)VAR_index_0_2, (Optr)PSend12438);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // <. 
    Send PSend12439 = new_Send((Optr)VAR_index_0_2, SMB__lt_, 1, (Optr)int_1_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12442 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12443 = new_Send((Optr)PSend12442, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12444 = new_Send((Optr)PSend12443, SMB__gt_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Array PThreadedCode12441 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12442, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12443, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12444, (Optr)&t_block_return);
    Block PBlock12440 = new_Block_with(empty_Array, empty_Array, PThreadedCode12441, 1, PSend12444);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend12445 = new_Send((Optr)PSend12439, SMB_or_, 1, (Optr)PBlock12440);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_errorNoSuchElement = new_Symbol(L"errorNoSuchElement");
    // errorNoSuchElement. 
    Send PSend12449 = new_Send((Optr)self, SMB_errorNoSuchElement, 0);
    Array PThreadedCode12448 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12449, (Optr)&t_block_return);
    Block PBlock12447 = new_Block_with(empty_Array, empty_Array, PThreadedCode12448, 1, PSend12449);
    // +. 
    Send PSend12452 = new_Send((Optr)VAR_index_0_2, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12453 = new_Send((Optr)PSend12452, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12454 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12453, (Optr)VAR_anObject_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12455 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend12454);
    Array PThreadedCode12451 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12452, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12453, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12454, (Optr)&t_send1, (Optr)PSend12455, (Optr)&t_block_return);
    Block PBlock12450 = new_Block_with(empty_Array, empty_Array, PThreadedCode12451, 1, PSend12455);
    // ifTrue:ifFalse:. 
    Send PSend12446 = new_Send((Optr)PSend12445, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock12447, (Optr)PBlock12450);
    Array PThreadedCode12436 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push1, (Optr)PAssign12437, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send0, (Optr)PSend12438, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_index_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12439, (Optr)&t_push_closure, (Optr)PBlock12440, (Optr)&t_send1, (Optr)PSend12445, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend12446, (Optr)PBlock12447, (Optr)PBlock12450, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12434 = new_Block_with(PArray12435, empty_Array, PThreadedCode12436, 3, PAssign12437, PSend12446, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12456 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12434);
    Array PThreadedCode12433 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12434, (Optr)&t_send1, (Optr)PSend12456, (Optr)&t_method_return);
    Method PMethod12430 = new_Method_with(PArray12431, PArray12432, empty_Array, PThreadedCode12433, 1, PSend12456);
    
    MethodClosure MC_SMB_at_put_ = new_MethodClosure((Method)PMethod12430, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_at_put_, MC_SMB_at_put_);
}


static void init_SMB_collect_() {
    Symbol SMB_collect_ = new_Symbol(L"collect:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12458 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12459 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12463 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12464 = new_Send((Optr)self, SMB_size, 0);
    // new:. 
    Send PSend12462 = new_Send((Optr)PSend12463, SMB_new_, 1, (Optr)PSend12464);
    Assign PAssign12461 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12462);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12466 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12468 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12469 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12468);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12470 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)PSend12469);
    Array PThreadedCode12467 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12468, (Optr)&t_send1, (Optr)PSend12469, (Optr)&t_send1, (Optr)PSend12470, (Optr)&t_method_return);
    Block PBlock12465 = new_Block_with(PArray12466, empty_Array, PThreadedCode12467, 1, PSend12470);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12471 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12465);
    Array PThreadedCode12460 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12461, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12463, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12464, (Optr)&t_send1, (Optr)PSend12462, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12465, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12471, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12457 = new_Method_with(PArray12458, PArray12459, empty_Array, PThreadedCode12460, 3, PAssign12461, PSend12471, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_collect_ = new_MethodClosure((Method)PMethod12457, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_collect_, MC_SMB_collect_);
}


static void init_SMB_select_() {
    Symbol SMB_select_ = new_Symbol(L"select:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12473 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Variable VAR_element_0_2 = new_Variable_named(L"element", 0);
    Array PArray12474 = new_Array_with(2, (Optr)VAR_newCollection_0_1, (Optr)VAR_element_0_2);
    Symbol SMB_copyEmpty = new_Symbol(L"copyEmpty");
    // copyEmpty. 
    Send PSend12477 = new_Send((Optr)self, SMB_copyEmpty, 0);
    Assign PAssign12476 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12477);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12479 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12482 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Assign PAssign12481 = new_Assign((Optr)VAR_element_0_2, (Optr)PSend12482);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12483 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PAssign12481);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12487 = new_Send((Optr)VAR_newCollection_0_1, SMB_addLast_, 1, (Optr)VAR_element_0_2);
    Array PThreadedCode12486 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_element_0_2, (Optr)&t_send1, (Optr)PSend12487, (Optr)&t_block_return);
    Block PBlock12485 = new_Block_with(empty_Array, empty_Array, PThreadedCode12486, 1, PSend12487);
    // ifTrue:. 
    Send PSend12484 = new_Send((Optr)PSend12483, SMB_ifTrue_, 1, (Optr)PBlock12485);
    Array PThreadedCode12480 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push1, (Optr)PAssign12481, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12482, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend12483, (Optr)&t_send_ifTrue_, (Optr)PSend12484, (Optr)PBlock12485, (Optr)&t_method_return);
    Block PBlock12478 = new_Block_with(PArray12479, empty_Array, PThreadedCode12480, 1, PSend12484);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12488 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12478);
    Array PThreadedCode12475 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign12476, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12477, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12478, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12488, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12472 = new_Method_with(PArray12473, PArray12474, empty_Array, PThreadedCode12475, 3, PAssign12476, PSend12488, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_select_ = new_MethodClosure((Method)PMethod12472, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_select_, MC_SMB_select_);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12490 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_1_0 = new_Variable_named(L"index", 1);
    Array PArray12493 = new_Array_with(1, (Optr)VAR_index_1_0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12495 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_1_0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12496 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12495);
    Array PThreadedCode12494 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_1_0, (Optr)&t_send1, (Optr)PSend12495, (Optr)&t_send1, (Optr)PSend12496, (Optr)&t_method_return);
    Block PBlock12492 = new_Block_with(PArray12493, empty_Array, PThreadedCode12494, 1, PSend12496);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12497 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB_to_do_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PBlock12492);
    Array PThreadedCode12491 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_closure, (Optr)PBlock12492, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12497, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12489 = new_Method_with(PArray12490, empty_Array, empty_Array, PThreadedCode12491, 2, PSend12497, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod12489, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_grow() {
    Symbol SMB_grow = new_Symbol(L"grow");
    Variable VAR_newArray_0_0 = new_Variable_named(L"newArray", 0);
    Array PArray12499 = new_Array_with(1, (Optr)VAR_newArray_0_0);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12504 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_growSize = new_Symbol(L"growSize");
    // growSize. 
    Send PSend12505 = new_Send((Optr)self, SMB_growSize, 0);
    // +. 
    Send PSend12503 = new_Send((Optr)PSend12504, SMB__plus_, 1, (Optr)PSend12505);
    // new:. 
    Send PSend12502 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)PSend12503);
    Assign PAssign12501 = new_Assign((Optr)VAR_newArray_0_0, (Optr)PSend12502);
    // size. 
    Send PSend12506 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB_replaceFrom_to_with_startingAt_ = new_Symbol(L"replaceFrom:to:with:startingAt:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // replaceFrom:to:with:startingAt:. 
    Send PSend12507 = new_Send((Optr)VAR_newArray_0_0, SMB_replaceFrom_to_with_startingAt_, 4, (Optr)int_1_Const, (Optr)PSend12506, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)int_1_Const);
    Assign PAssign12508 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_newArray_0_0);
    Array PThreadedCode12500 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign12501, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12504, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12505, (Optr)&t_send1, (Optr)PSend12503, (Optr)&t_send1, (Optr)PSend12502, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_push_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12506, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_1, (Optr)&t_send4, (Optr)PSend12507, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12508, (Optr)&t_push_variable, (Optr)VAR_newArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12498 = new_Method_with(empty_Array, PArray12499, empty_Array, PThreadedCode12500, 4, PAssign12501, PSend12507, PAssign12508, self);
    
    MethodClosure MC_SMB_grow = new_MethodClosure((Method)PMethod12498, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_grow, MC_SMB_grow);
}


static void init_SMB_growSize() {
    Symbol SMB_growSize = new_Symbol(L"growSize");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12511 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // max:. 
    Send PSend12512 = new_Send((Optr)PSend12511, SMB_max_, 1, (Optr)int_2_Const);
    Array PThreadedCode12510 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12511, (Optr)&t_push_2, (Optr)&t_send1, (Optr)PSend12512, (Optr)&t_method_return);
    Method PMethod12509 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12510, 1, PSend12512);
    
    MethodClosure MC_SMB_growSize = new_MethodClosure((Method)PMethod12509, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_growSize, MC_SMB_growSize);
}


static void init_SMB_makeRoomAtFirst() {
    Symbol SMB_makeRoomAtFirst = new_Symbol(L"makeRoomAtFirst");
    Variable VAR_delta_0_0 = new_Variable_named(L"delta", 0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray12514 = new_Array_with(2, (Optr)VAR_delta_0_0, (Optr)VAR_index_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12517 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12521 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend12522 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12520 = new_Send((Optr)PSend12521, SMB__minus_, 1, (Optr)PSend12522);
    Assign PAssign12519 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12520);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend12523 = new_Send((Optr)VAR_delta_0_0, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12527 = new_Send((Optr)self, SMB_grow, 0);
    // size. 
    Send PSend12530 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12531 = new_Send((Optr)self, SMB_size, 0);
    // -. 
    Send PSend12529 = new_Send((Optr)PSend12530, SMB__minus_, 1, (Optr)PSend12531);
    Assign PAssign12528 = new_Assign((Optr)VAR_delta_0_0, (Optr)PSend12529);
    Array PThreadedCode12526 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12527, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12528, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12530, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12531, (Optr)&t_send1, (Optr)PSend12529, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12525 = new_Block_with(empty_Array, empty_Array, PThreadedCode12526, 2, PSend12527, PAssign12528);
    // ifTrue:. 
    Send PSend12524 = new_Send((Optr)PSend12523, SMB_ifTrue_, 1, (Optr)PBlock12525);
    // size. 
    Send PSend12532 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // =. 
    Send PSend12533 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__equals_, 1, (Optr)PSend12532);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12537 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12536 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12537, (Optr)&t_block_return);
    Block PBlock12535 = new_Block_with(empty_Array, empty_Array, PThreadedCode12536, 1, PSend12537);
    // ifTrue:. 
    Send PSend12534 = new_Send((Optr)PSend12533, SMB_ifTrue_, 1, (Optr)PBlock12535);
    // size. 
    Send PSend12539 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12538 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12539);
    Symbol SMB__gt_ = new_Symbol(L">");
    // >. 
    Send PSend12542 = new_Send((Optr)VAR_index_0_1, SMB__gt_, 1, (Optr)VAR_delta_0_0);
    Array PThreadedCode12541 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12542, (Optr)&t_block_return);
    Block PBlock12540 = new_Block_with(empty_Array, empty_Array, PThreadedCode12541, 1, PSend12542);
    // -. 
    Send PSend12545 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12546 = new_Send((Optr)PSend12545, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12547 = new_Send((Optr)PSend12546, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12548 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12547);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12549 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_0_1, (Optr)PSend12548);
    // -. 
    Send PSend12550 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)VAR_delta_0_0);
    // +. 
    Send PSend12551 = new_Send((Optr)PSend12550, SMB__plus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    // -. 
    Send PSend12552 = new_Send((Optr)PSend12551, SMB__minus_, 1, (Optr)int_1_Const);
    // at:put:. 
    Send PSend12553 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12552, (Optr)nil_Const);
    // -. 
    Send PSend12555 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12554 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12555);
    Array PThreadedCode12544 = instantiate_Array_with(ThreadedCode_Class, 0, 52, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12545, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12546, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12547, (Optr)&t_send1, (Optr)PSend12548, (Optr)&t_send2, (Optr)PSend12549, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_send1, (Optr)PSend12550, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12551, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12552, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12553, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12554, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12555, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12543 = new_Block_with(empty_Array, empty_Array, PThreadedCode12544, 3, PSend12549, PSend12553, PAssign12554);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12556 = new_Send((Optr)PBlock12540, SMB_whileTrue_, 1, (Optr)PBlock12543);
    // +. 
    Send PSend12558 = new_Send((Optr)VAR_delta_0_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12557 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12558);
    // size. 
    Send PSend12560 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Assign PAssign12559 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12560);
    Array PThreadedCode12518 = instantiate_Array_with(ThreadedCode_Class, 0, 67, (Optr)&t_push1, (Optr)PAssign12519, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12521, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12522, (Optr)&t_send1, (Optr)PSend12520, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12523, (Optr)&t_send_ifTrue_, (Optr)PSend12524, (Optr)PBlock12525, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12532, (Optr)&t_send1, (Optr)PSend12533, (Optr)&t_send_ifTrue_, (Optr)PSend12534, (Optr)PBlock12535, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12538, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12539, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12540, (Optr)&t_push_closure, (Optr)PBlock12543, (Optr)&t_send1, (Optr)PSend12556, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12557, (Optr)&t_push_variable, (Optr)VAR_delta_0_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12558, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12559, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12560, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12516 = new_Block_with(PArray12517, empty_Array, PThreadedCode12518, 8, PAssign12519, PSend12524, PSend12534, PAssign12538, PSend12556, PAssign12557, PAssign12559, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12561 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12516);
    Array PThreadedCode12515 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12516, (Optr)&t_send1, (Optr)PSend12561, (Optr)&t_method_return);
    Method PMethod12513 = new_Method_with(empty_Array, PArray12514, empty_Array, PThreadedCode12515, 1, PSend12561);
    
    MethodClosure MC_SMB_makeRoomAtFirst = new_MethodClosure((Method)PMethod12513, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_makeRoomAtFirst, MC_SMB_makeRoomAtFirst);
}


static void init_SMB_makeRoomAtLast() {
    Symbol SMB_makeRoomAtLast = new_Symbol(L"makeRoomAtLast");
    Variable VAR_newLast_0_0 = new_Variable_named(L"newLast", 0);
    Variable VAR_delta_0_1 = new_Variable_named(L"delta", 0);
    Array PArray12563 = new_Array_with(2, (Optr)VAR_newLast_0_0, (Optr)VAR_delta_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray12566 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12569 = new_Send((Optr)self, SMB_size, 0);
    Assign PAssign12568 = new_Assign((Optr)VAR_newLast_0_0, (Optr)PSend12569);
    // size. 
    Send PSend12570 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    // size. 
    Send PSend12571 = new_Send((Optr)self, SMB_size, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12572 = new_Send((Optr)PSend12570, SMB__minus_, 1, (Optr)PSend12571);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend12573 = new_Send((Optr)PSend12572, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_grow = new_Symbol(L"grow");
    // grow. 
    Send PSend12577 = new_Send((Optr)self, SMB_grow, 0);
    Array PThreadedCode12576 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12577, (Optr)&t_block_return);
    Block PBlock12575 = new_Block_with(empty_Array, empty_Array, PThreadedCode12576, 1, PSend12577);
    // ifTrue:. 
    Send PSend12574 = new_Send((Optr)PSend12573, SMB_ifTrue_, 1, (Optr)PBlock12575);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12579 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12578 = new_Assign((Optr)VAR_delta_0_1, (Optr)PSend12579);
    // =. 
    Send PSend12580 = new_Send((Optr)PAssign12578, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend12584 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode12583 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend12584, (Optr)&t_block_return);
    Block PBlock12582 = new_Block_with(empty_Array, empty_Array, PThreadedCode12583, 1, PSend12584);
    // ifTrue:. 
    Send PSend12581 = new_Send((Optr)PSend12580, SMB_ifTrue_, 1, (Optr)PBlock12582);
    Variable VAR_index_2_0 = new_Variable_named(L"index", 2);
    Array PArray12586 = new_Array_with(1, (Optr)VAR_index_2_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend12588 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12589 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)PSend12588);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12590 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)VAR_index_2_0, (Optr)PSend12589);
    // +. 
    Send PSend12591 = new_Send((Optr)VAR_index_2_0, SMB__plus_, 1, (Optr)VAR_delta_0_1);
    // at:put:. 
    Send PSend12592 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)PSend12591, (Optr)nil_Const);
    Array PThreadedCode12587 = instantiate_Array_with(ThreadedCode_Class, 0, 29, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12588, (Optr)&t_send1, (Optr)PSend12589, (Optr)&t_send2, (Optr)PSend12590, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_2_0, (Optr)&t_push_variable, (Optr)VAR_delta_0_1, (Optr)&t_send1, (Optr)PSend12591, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12592, (Optr)&t_method_return);
    Block PBlock12585 = new_Block_with(PArray12586, empty_Array, PThreadedCode12587, 2, PSend12590, PSend12592);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend12593 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)VAR_newLast_0_0, (Optr)PBlock12585);
    Assign PAssign12594 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)int_1_Const);
    Assign PAssign12595 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)VAR_newLast_0_0);
    Array PThreadedCode12567 = instantiate_Array_with(ThreadedCode_Class, 0, 59, (Optr)&t_push1, (Optr)PAssign12568, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12569, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12570, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12571, (Optr)&t_send1, (Optr)PSend12572, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12573, (Optr)&t_send_ifTrue_, (Optr)PSend12574, (Optr)PBlock12575, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12578, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12579, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend12580, (Optr)&t_send_ifTrue_, (Optr)PSend12581, (Optr)PBlock12582, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_push_closure, (Optr)PBlock12585, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend12593, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12594, (Optr)&t_push_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12595, (Optr)&t_push_variable, (Optr)VAR_newLast_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock12565 = new_Block_with(PArray12566, empty_Array, PThreadedCode12567, 7, PAssign12568, PSend12574, PSend12581, PSend12593, PAssign12594, PAssign12595, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend12596 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock12565);
    Array PThreadedCode12564 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock12565, (Optr)&t_send1, (Optr)PSend12596, (Optr)&t_method_return);
    Method PMethod12562 = new_Method_with(empty_Array, PArray12563, empty_Array, PThreadedCode12564, 1, PSend12596);
    
    MethodClosure MC_SMB_makeRoomAtLast = new_MethodClosure((Method)PMethod12562, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_makeRoomAtLast, MC_SMB_makeRoomAtLast);
}


static void init_SMB_removeFirst() {
    Symbol SMB_removeFirst = new_Symbol(L"removeFirst");
    Variable VAR_firstObject_0_0 = new_Variable_named(L"firstObject", 0);
    Array PArray12598 = new_Array_with(1, (Optr)VAR_firstObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12600 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12602 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Assign PAssign12601 = new_Assign((Optr)VAR_firstObject_0_0, (Optr)PSend12602);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12603 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)nil_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12605 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign12604 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12605);
    Array PThreadedCode12599 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12600, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12601, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12602, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12603, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12604, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12605, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_firstObject_0_0, (Optr)&t_method_return);
    Method PMethod12597 = new_Method_with(empty_Array, PArray12598, empty_Array, PThreadedCode12599, 5, PSend12600, PAssign12601, PSend12603, PAssign12604, VAR_firstObject_0_0);
    
    MethodClosure MC_SMB_removeFirst = new_MethodClosure((Method)PMethod12597, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_removeFirst, MC_SMB_removeFirst);
}


static void init_SMB_removeLast() {
    Symbol SMB_removeLast = new_Symbol(L"removeLast");
    Variable VAR_lastObject_0_0 = new_Variable_named(L"lastObject", 0);
    Array PArray12607 = new_Array_with(1, (Optr)VAR_lastObject_0_0);
    Symbol SMB_emptyCheck = new_Symbol(L"emptyCheck");
    // emptyCheck. 
    Send PSend12609 = new_Send((Optr)self, SMB_emptyCheck, 0);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12611 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Assign PAssign12610 = new_Assign((Optr)VAR_lastObject_0_0, (Optr)PSend12611);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    // at:put:. 
    Send PSend12612 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_put_, 2, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)nil_Const);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12614 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12613 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12614);
    Array PThreadedCode12608 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12609, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12610, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_send1, (Optr)PSend12611, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_nil, (Optr)&t_send2, (Optr)PSend12612, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12613, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12614, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_lastObject_0_0, (Optr)&t_method_return);
    Method PMethod12606 = new_Method_with(empty_Array, PArray12607, empty_Array, PThreadedCode12608, 5, PSend12609, PAssign12610, PSend12612, PAssign12613, VAR_lastObject_0_0);
    
    MethodClosure MC_SMB_removeLast = new_MethodClosure((Method)PMethod12606, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_removeLast, MC_SMB_removeLast);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12620 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_size, 0);
    Symbol SMB__quotient_ = new_Symbol(L"//");
    SmallInt int_3 = new_SmallInt(3);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // //. 
    Send PSend12619 = new_Send((Optr)PSend12620, SMB__quotient_, 1, (Optr)int_3_Const);
    Symbol SMB_max_ = new_Symbol(L"max:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // max:. 
    Send PSend12618 = new_Send((Optr)PSend12619, SMB_max_, 1, (Optr)int_1_Const);
    Assign PAssign12617 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)PSend12618);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12622 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12621 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)PSend12622);
    Array PThreadedCode12616 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push1, (Optr)PAssign12617, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_send0, (Optr)PSend12620, (Optr)&t_push1, (Optr)int_3, (Optr)&t_send1, (Optr)PSend12619, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12618, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12621, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12622, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12615 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12616, 3, PAssign12617, PAssign12621, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod12615, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_reverseDo_() {
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    Variable VAR_aBlock_0_0 = new_Variable_named(L"aBlock", 0);
    Array PArray12624 = new_Array_with(1, (Optr)VAR_aBlock_0_0);
    Variable VAR_index_0_1 = new_Variable_named(L"index", 0);
    Array PArray12625 = new_Array_with(1, (Optr)VAR_index_0_1);
    Assign PAssign12627 = new_Assign((Optr)VAR_index_0_1, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex);
    Symbol SMB__gt__equals_ = new_Symbol(L">=");
    // >=. 
    Send PSend12630 = new_Send((Optr)VAR_index_0_1, SMB__gt__equals_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Array PThreadedCode12629 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12630, (Optr)&t_block_return);
    Block PBlock12628 = new_Block_with(empty_Array, empty_Array, PThreadedCode12629, 1, PSend12630);
    Symbol SMB_at_ = new_Symbol(L"at:");
    // at:. 
    Send PSend12633 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_array, SMB_at_, 1, (Optr)VAR_index_0_1);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend12634 = new_Send((Optr)VAR_aBlock_0_0, SMB_value_, 1, (Optr)PSend12633);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend12636 = new_Send((Optr)VAR_index_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign12635 = new_Assign((Optr)VAR_index_0_1, (Optr)PSend12636);
    Array PThreadedCode12632 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push_variable, (Optr)VAR_aBlock_0_0, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_send1, (Optr)PSend12633, (Optr)&t_send1, (Optr)PSend12634, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign12635, (Optr)&t_push_variable, (Optr)VAR_index_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12636, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock12631 = new_Block_with(empty_Array, empty_Array, PThreadedCode12632, 2, PSend12634, PAssign12635);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend12637 = new_Send((Optr)PBlock12628, SMB_whileTrue_, 1, (Optr)PBlock12631);
    Array PThreadedCode12626 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign12627, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock12628, (Optr)&t_push_closure, (Optr)PBlock12631, (Optr)&t_send1, (Optr)PSend12637, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12623 = new_Method_with(PArray12624, PArray12625, empty_Array, PThreadedCode12626, 3, PAssign12627, PSend12637, self);
    
    MethodClosure MC_SMB_reverseDo_ = new_MethodClosure((Method)PMethod12623, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reverseDo_, MC_SMB_reverseDo_);
}


static void init_SMB_reversed() {
    Symbol SMB_reversed = new_Symbol(L"reversed");
    Variable VAR_newCol_0_0 = new_Variable_named(L"newCol", 0);
    Array PArray12639 = new_Array_with(1, (Optr)VAR_newCol_0_0);
    Symbol SMB_species = new_Symbol(L"species");
    // species. 
    Send PSend12643 = new_Send((Optr)self, SMB_species, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend12642 = new_Send((Optr)PSend12643, SMB_new, 0);
    Assign PAssign12641 = new_Assign((Optr)VAR_newCol_0_0, (Optr)PSend12642);
    Variable VAR_elem_1_0 = new_Variable_named(L"elem", 1);
    Array PArray12645 = new_Array_with(1, (Optr)VAR_elem_1_0);
    Symbol SMB_addLast_ = new_Symbol(L"addLast:");
    // addLast:. 
    Send PSend12647 = new_Send((Optr)VAR_newCol_0_0, SMB_addLast_, 1, (Optr)VAR_elem_1_0);
    Array PThreadedCode12646 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_push_variable, (Optr)VAR_elem_1_0, (Optr)&t_send1, (Optr)PSend12647, (Optr)&t_method_return);
    Block PBlock12644 = new_Block_with(PArray12645, empty_Array, PThreadedCode12646, 1, PSend12647);
    Symbol SMB_reverseDo_ = new_Symbol(L"reverseDo:");
    // reverseDo:. 
    Send PSend12648 = new_Send((Optr)self, SMB_reverseDo_, 1, (Optr)PBlock12644);
    Array PThreadedCode12640 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push1, (Optr)PAssign12641, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12643, (Optr)&t_send0, (Optr)PSend12642, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12644, (Optr)&t_send1, (Optr)PSend12648, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCol_0_0, (Optr)&t_method_return);
    Method PMethod12638 = new_Method_with(empty_Array, PArray12639, empty_Array, PThreadedCode12640, 3, PAssign12641, PSend12648, VAR_newCol_0_0);
    
    MethodClosure MC_SMB_reversed = new_MethodClosure((Method)PMethod12638, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_reversed, MC_SMB_reversed);
}


static void init_SMB_inspectChildrenOn_() {
    Symbol SMB_inspectChildrenOn_ = new_Symbol(L"inspectChildrenOn:");
    Variable VAR_inspector_0_0 = new_Variable_named(L"inspector", 0);
    Array PArray12650 = new_Array_with(1, (Optr)VAR_inspector_0_0);
    Variable VAR_value_1_0 = new_Variable_named(L"value", 1);
    Variable VAR_index_1_1 = new_Variable_named(L"index", 1);
    Array PArray12653 = new_Array_with(2, (Optr)VAR_value_1_0, (Optr)VAR_index_1_1);
    Array PThreadedCode12656 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_variable, (Optr)VAR_value_1_0, (Optr)&t_block_return);
    Block PBlock12655 = new_Block_with(empty_Array, empty_Array, PThreadedCode12656, 1, VAR_value_1_0);
    Symbol SMB_child_value_ = new_Symbol(L"child:value:");
    // child:value:. 
    Send PSend12657 = new_Send((Optr)VAR_inspector_0_0, SMB_child_value_, 2, (Optr)VAR_index_1_1, (Optr)PBlock12655);
    Array PThreadedCode12654 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR_inspector_0_0, (Optr)&t_push_variable, (Optr)VAR_index_1_1, (Optr)&t_push_closure, (Optr)PBlock12655, (Optr)&t_send2, (Optr)PSend12657, (Optr)&t_method_return);
    Block PBlock12652 = new_Block_with(PArray12653, empty_Array, PThreadedCode12654, 1, PSend12657);
    Symbol SMB_withIndexDo_ = new_Symbol(L"withIndexDo:");
    // withIndexDo:. 
    Send PSend12658 = new_Send((Optr)self, SMB_withIndexDo_, 1, (Optr)PBlock12652);
    Array PThreadedCode12651 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_closure, (Optr)PBlock12652, (Optr)&t_send1, (Optr)PSend12658, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12649 = new_Method_with(PArray12650, empty_Array, empty_Array, PThreadedCode12651, 2, PSend12658, self);
    
    MethodClosure MC_SMB_inspectChildrenOn_ = new_MethodClosure((Method)PMethod12649, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_inspectChildrenOn_, MC_SMB_inspectChildrenOn_);
}


static void init_SMB_setCollection_() {
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    Variable VAR_anArray_0_0 = new_Variable_named(L"anArray", 0);
    Array PArray12660 = new_Array_with(1, (Optr)VAR_anArray_0_0);
    Assign PAssign12662 = new_Assign((Optr)slot_Collections_Sequenceable_OrderedCollection_array, (Optr)VAR_anArray_0_0);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend12663 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode12661 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign12662, (Optr)&t_push_variable, (Optr)VAR_anArray_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12663, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod12659 = new_Method_with(PArray12660, empty_Array, empty_Array, PThreadedCode12661, 3, PAssign12662, PSend12663, self);
    
    MethodClosure MC_SMB_setCollection_ = new_MethodClosure((Method)PMethod12659, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_setCollection_, MC_SMB_setCollection_);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend12666 = new_Send((Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, SMB__minus_, 1, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend12667 = new_Send((Optr)PSend12666, SMB__plus_, 1, (Optr)int_1_Const);
    Array PThreadedCode12665 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_lastIndex, (Optr)&t_push_slot, (Optr)slot_Collections_Sequenceable_OrderedCollection_firstIndex, (Optr)&t_send1, (Optr)PSend12666, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend12667, (Optr)&t_method_return);
    Method PMethod12664 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12665, 1, PSend12667);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod12664, Collections_Sequenceable_OrderedCollection_Class);
    store_method(Collections_Sequenceable_OrderedCollection_Class, SMB_size, MC_SMB_size);
}


static void init_class_SMB_new_() {
    Symbol SMB_new_ = new_Symbol(L"new:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Array PArray12669 = new_Array_with(1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12671 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:. 
    Send PSend12672 = new_Send((Optr)Array_classReference, SMB_new_, 1, (Optr)VAR_anInteger_0_0);
    Symbol SMB_setCollection_ = new_Symbol(L"setCollection:");
    // setCollection:. 
    Send PSend12673 = new_Send((Optr)PSend12671, SMB_setCollection_, 1, (Optr)PSend12672);
    Array PThreadedCode12670 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12671, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_send1, (Optr)PSend12672, (Optr)&t_send1, (Optr)PSend12673, (Optr)&t_method_return);
    Method PMethod12668 = new_Method_with(PArray12669, empty_Array, empty_Array, PThreadedCode12670, 1, PSend12673);
    
    MethodClosure MC_SMB_new_ = new_MethodClosure((Method)PMethod12668, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new_, MC_SMB_new_);
}


static void init_class_SMB_ofSize_() {
    Symbol SMB_ofSize_ = new_Symbol(L"ofSize:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray12675 = new_Array_with(1, (Optr)VAR_n_0_0);
    Variable VAR_collection_0_1 = new_Variable_named(L"collection", 0);
    Array PArray12676 = new_Array_with(1, (Optr)VAR_collection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    // new:. 
    Send PSend12679 = new_Send((Optr)self, SMB_new_, 1, (Optr)VAR_n_0_0);
    Assign PAssign12678 = new_Assign((Optr)VAR_collection_0_1, (Optr)PSend12679);
    Symbol SMB_collector = new_Symbol(L"collector");
    // collector. 
    Send PSend12680 = new_Send((Optr)VAR_collection_0_1, SMB_collector, 0);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12681 = new_Send((Optr)VAR_collection_0_1, SMB_setContents_, 1, (Optr)PSend12680);
    Array PThreadedCode12677 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12678, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend12679, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_send0, (Optr)PSend12680, (Optr)&t_send1, (Optr)PSend12681, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_collection_0_1, (Optr)&t_method_return);
    Method PMethod12674 = new_Method_with(PArray12675, PArray12676, empty_Array, PThreadedCode12677, 3, PAssign12678, PSend12681, VAR_collection_0_1);
    
    MethodClosure MC_SMB_ofSize_ = new_MethodClosure((Method)PMethod12674, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_ofSize_, MC_SMB_ofSize_);
}


static void init_class_SMB_new_withAll_() {
    Symbol SMB_new_withAll_ = new_Symbol(L"new:withAll:");
    Variable VAR_anInteger_0_0 = new_Variable_named(L"anInteger", 0);
    Variable VAR_anObject_0_1 = new_Variable_named(L"anObject", 0);
    Array PArray12683 = new_Array_with(2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    // basicNew. 
    Send PSend12685 = new_Send((Optr)self, SMB_basicNew, 0);
    // new:withAll:. 
    Send PSend12686 = new_Send((Optr)Array_classReference, SMB_new_withAll_, 2, (Optr)VAR_anInteger_0_0, (Optr)VAR_anObject_0_1);
    Symbol SMB_setContents_ = new_Symbol(L"setContents:");
    // setContents:. 
    Send PSend12687 = new_Send((Optr)PSend12685, SMB_setContents_, 1, (Optr)PSend12686);
    Array PThreadedCode12684 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend12685, (Optr)&t_push_class_reference, (Optr)Array_classReference, (Optr)&t_push_variable, (Optr)VAR_anInteger_0_0, (Optr)&t_push_variable, (Optr)VAR_anObject_0_1, (Optr)&t_send2, (Optr)PSend12686, (Optr)&t_send1, (Optr)PSend12687, (Optr)&t_method_return);
    Method PMethod12682 = new_Method_with(PArray12683, empty_Array, empty_Array, PThreadedCode12684, 1, PSend12687);
    
    MethodClosure MC_SMB_new_withAll_ = new_MethodClosure((Method)PMethod12682, HEADER(Collections_Sequenceable_OrderedCollection_Class));
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
    Send PSend12690 = new_Send((Optr)self, SMB_new_, 1, (Optr)int_10_Const);
    Array PThreadedCode12689 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend12690, (Optr)&t_method_return);
    Method PMethod12688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode12689, 1, PSend12690);
    
    MethodClosure MC_SMB_new = new_MethodClosure((Method)PMethod12688, HEADER(Collections_Sequenceable_OrderedCollection_Class));
    store_method(HEADER(Collections_Sequenceable_OrderedCollection_Class), SMB_new, MC_SMB_new);
}


static void init_class_SMB_newFrom_() {
    Symbol SMB_newFrom_ = new_Symbol(L"newFrom:");
    Variable VAR_aCollection_0_0 = new_Variable_named(L"aCollection", 0);
    Array PArray12692 = new_Array_with(1, (Optr)VAR_aCollection_0_0);
    Variable VAR_newCollection_0_1 = new_Variable_named(L"newCollection", 0);
    Array PArray12693 = new_Array_with(1, (Optr)VAR_newCollection_0_1);
    Symbol SMB_new_ = new_Symbol(L"new:");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend12697 = new_Send((Optr)VAR_aCollection_0_0, SMB_size, 0);
    // new:. 
    Send PSend12696 = new_Send((Optr)self, SMB_new_, 1, (Optr)PSend12697);
    Assign PAssign12695 = new_Assign((Optr)VAR_newCollection_0_1, (Optr)PSend12696);
    Symbol SMB_addAll_ = new_Symbol(L"addAll:");
    // addAll:. 
    Send PSend12698 = new_Send((Optr)VAR_newCollection_0_1, SMB_addAll_, 1, (Optr)VAR_aCollection_0_0);
    Array PThreadedCode12694 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign12695, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send0, (Optr)PSend12697, (Optr)&t_send1, (Optr)PSend12696, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_push_variable, (Optr)VAR_aCollection_0_0, (Optr)&t_send1, (Optr)PSend12698, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_newCollection_0_1, (Optr)&t_method_return);
    Method PMethod12691 = new_Method_with(PArray12692, PArray12693, empty_Array, PThreadedCode12694, 3, PAssign12695, PSend12698, VAR_newCollection_0_1);
    
    MethodClosure MC_SMB_newFrom_ = new_MethodClosure((Method)PMethod12691, HEADER(Collections_Sequenceable_OrderedCollection_Class));
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