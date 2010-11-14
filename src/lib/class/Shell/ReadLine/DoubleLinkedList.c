#include <lib/class/Shell/ReadLine/DoubleLinkedList.h>


Optr layout_Shell_ReadLine_DoubleLinkedList_Class_class;
Optr slot_Shell_ReadLine_DoubleLinkedList_size;
Optr slot_Shell_ReadLine_DoubleLinkedList_start;
Optr slot_Shell_ReadLine_DoubleLinkedList_end;
Optr slot_Shell_ReadLine_DoubleLinkedList_current;
Optr slot_Shell_ReadLine_DoubleLinkedList_position;
Optr layout_Shell_ReadLine_DoubleLinkedList;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18388 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_start, SMB_next_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign18389 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)int_0_Const);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend18390 = new_Send((Optr)self, SMB_start, 0);
    Array PThreadedCode18387 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18388, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18389, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18390, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18386 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18387, 4, PSend18388, PAssign18389, PSend18390, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18386, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode18392 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_method_return);
    Method PMethod18391 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18392, 1, slot_Shell_ReadLine_DoubleLinkedList_size);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod18391, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18395 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous, 0);
    Array PThreadedCode18394 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send0, (Optr)PSend18395, (Optr)&t_method_return);
    Method PMethod18393 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18394, 1, PSend18395);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod18393, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18398 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18399 = new_Send((Optr)PSend18398, SMB__pequals_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    Array PThreadedCode18397 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18398, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18399, (Optr)&t_method_return);
    Method PMethod18396 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18397, 1, PSend18399);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod18396, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Array PThreadedCode18401 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_method_return);
    Method PMethod18400 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18401, 1, slot_Shell_ReadLine_DoubleLinkedList_start);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod18400, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18405 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18407 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18411 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18410 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18411, (Optr)&t_block_return);
    Block PBlock18409 = new_Block_with(empty_Array, empty_Array, PThreadedCode18410, 1, PSend18411);
    // ifTrue:. 
    Send PSend18408 = new_Send((Optr)PSend18407, SMB_ifTrue_, 1, (Optr)PBlock18409);
    // next. 
    Send PSend18413 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Assign PAssign18412 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18413);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18415 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18414 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18415);
    Array PThreadedCode18406 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18407, (Optr)&t_send_ifTrue_, (Optr)PSend18408, (Optr)PBlock18409, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18412, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18413, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18414, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18415, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18404 = new_Block_with(PArray18405, empty_Array, PThreadedCode18406, 4, PSend18408, PAssign18412, PAssign18414, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18416 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18404);
    Array PThreadedCode18403 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18404, (Optr)&t_send1, (Optr)PSend18416, (Optr)&t_method_return);
    Method PMethod18402 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18403, 1, PSend18416);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod18402, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18420 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous, 0);
    Assign PAssign18419 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18420);
    Assign PAssign18421 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size);
    Array PThreadedCode18418 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign18419, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send0, (Optr)PSend18420, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18421, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18417 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18418, 3, PAssign18419, PAssign18421, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18417, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray18423 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18426 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB_min_, 1, (Optr)VAR_value_0_0);
    Assign PAssign18425 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18426);
    Assign PAssign18427 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18431 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Assign PAssign18430 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18431);
    Array PThreadedCode18429 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign18430, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18431, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18428 = new_Block_with(empty_Array, empty_Array, PThreadedCode18429, 1, PAssign18430);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18432 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB_timesRepeat_, 1, (Optr)PBlock18428);
    Array PThreadedCode18424 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18425, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend18426, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18427, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_closure, (Optr)PBlock18428, (Optr)&t_send1, (Optr)PSend18432, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18422 = new_Method_with(PArray18423, empty_Array, empty_Array, PThreadedCode18424, 4, PAssign18425, PAssign18427, PSend18432, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod18422, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18436 = new_Send((Optr)PStartLink_classReference, SMB_new, 0);
    Assign PAssign18435 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)PSend18436);
    // new. 
    Send PSend18438 = new_Send((Optr)PEndLink_classReference, SMB_new, 0);
    Assign PAssign18437 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)PSend18438);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18439 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode18434 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign18435, (Optr)&t_push_class_reference, (Optr)PStartLink_classReference, (Optr)&t_send0, (Optr)PSend18436, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18437, (Optr)&t_push_class_reference, (Optr)PEndLink_classReference, (Optr)&t_send0, (Optr)PSend18438, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18439, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18433 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18434, 4, PAssign18435, PAssign18437, PSend18439, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18433, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18442 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_value, 0);
    Array PThreadedCode18441 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18442, (Optr)&t_method_return);
    Method PMethod18440 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18441, 1, PSend18442);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod18440, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18446 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18448 = new_Send((Optr)self, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18452 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18451 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18452, (Optr)&t_block_return);
    Block PBlock18450 = new_Block_with(empty_Array, empty_Array, PThreadedCode18451, 1, PSend18452);
    // ifTrue:. 
    Send PSend18449 = new_Send((Optr)PSend18448, SMB_ifTrue_, 1, (Optr)PBlock18450);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18454 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18453 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)PSend18454);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18455 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18456 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18457 = new_Send((Optr)PSend18455, SMB_next_, 1, (Optr)PSend18456);
    // previous. 
    Send PSend18459 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Assign PAssign18458 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18459);
    // -. 
    Send PSend18461 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18460 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18461);
    Array PThreadedCode18447 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18448, (Optr)&t_send_ifTrue_, (Optr)PSend18449, (Optr)PBlock18450, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18453, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18454, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18455, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18456, (Optr)&t_send1, (Optr)PSend18457, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18458, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18459, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18460, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18461, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18445 = new_Block_with(PArray18446, empty_Array, PThreadedCode18447, 6, PSend18449, PAssign18453, PSend18457, PAssign18458, PAssign18460, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18462 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18445);
    Array PThreadedCode18444 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18445, (Optr)&t_send1, (Optr)PSend18462, (Optr)&t_method_return);
    Method PMethod18443 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18444, 1, PSend18462);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod18443, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_atStart() {
    Symbol SMB_atStart = new_Symbol(L"atStart");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18465 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB__pequals_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Array PThreadedCode18464 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_send1, (Optr)PSend18465, (Optr)&t_method_return);
    Method PMethod18463 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18464, 1, PSend18465);
    
    MethodClosure MC_SMB_atStart = new_MethodClosure((Method)PMethod18463, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_atStart, MC_SMB_atStart);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray18467 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray18468 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18472 = new_Send((Optr)PDoubleLink_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18471 = new_Send((Optr)PSend18472, SMB_value_, 1, (Optr)VAR_value_0_0);
    Assign PAssign18470 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend18471);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18473 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18474 = new_Send((Optr)VAR_new_0_1, SMB_next_, 1, (Optr)PSend18473);
    // next:. 
    Send PSend18475 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next_, 1, (Optr)VAR_new_0_1);
    Assign PAssign18476 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)VAR_new_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18478 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18477 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)PSend18478);
    // +. 
    Send PSend18480 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18479 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18480);
    Array PThreadedCode18469 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign18470, (Optr)&t_push_class_reference, (Optr)PDoubleLink_classReference, (Optr)&t_send0, (Optr)PSend18472, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend18471, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18473, (Optr)&t_send1, (Optr)PSend18474, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send1, (Optr)PSend18475, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18476, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18477, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18478, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18479, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18480, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18466 = new_Method_with(PArray18467, PArray18468, empty_Array, PThreadedCode18469, 7, PAssign18470, PSend18474, PSend18475, PAssign18476, PAssign18477, PAssign18479, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod18466, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode18482 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_method_return);
    Method PMethod18481 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18482, 1, slot_Shell_ReadLine_DoubleLinkedList_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod18481, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    Assign PAssign18485 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign18486 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)int_0_Const);
    Array PThreadedCode18484 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign18485, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18486, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18483 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18484, 3, PAssign18485, PAssign18486, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod18483, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_previous() {
    Symbol SMB_previous = new_Symbol(L"previous");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18490 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18492 = new_Send((Optr)self, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18496 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18495 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18496, (Optr)&t_block_return);
    Block PBlock18494 = new_Block_with(empty_Array, empty_Array, PThreadedCode18495, 1, PSend18496);
    // ifTrue:. 
    Send PSend18493 = new_Send((Optr)PSend18492, SMB_ifTrue_, 1, (Optr)PBlock18494);
    // previous. 
    Send PSend18498 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Assign PAssign18497 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18498);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18500 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18499 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18500);
    Array PThreadedCode18491 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18492, (Optr)&t_send_ifTrue_, (Optr)PSend18493, (Optr)PBlock18494, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18497, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18498, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18499, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18500, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18489 = new_Block_with(PArray18490, empty_Array, PThreadedCode18491, 4, PSend18493, PAssign18497, PAssign18499, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18501 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18489);
    Array PThreadedCode18488 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18489, (Optr)&t_send1, (Optr)PSend18501, (Optr)&t_method_return);
    Method PMethod18487 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18488, 1, PSend18501);
    
    MethodClosure MC_SMB_previous = new_MethodClosure((Method)PMethod18487, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_previous, MC_SMB_previous);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray18503 = new_Array_with(1, (Optr)VAR_block_0_0);
    Variable VAR_link_0_1 = new_Variable_named(L"link", 0);
    Array PArray18504 = new_Array_with(1, (Optr)VAR_link_0_1);
    Assign PAssign18506 = new_Assign((Optr)VAR_link_0_1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18510 = new_Send((Optr)VAR_link_0_1, SMB_next, 0);
    Assign PAssign18509 = new_Assign((Optr)VAR_link_0_1, (Optr)PSend18510);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18511 = new_Send((Optr)PAssign18509, SMB_value, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18512 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)PSend18511);
    Array PThreadedCode18508 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push1, (Optr)PAssign18509, (Optr)&t_push_variable, (Optr)VAR_link_0_1, (Optr)&t_send0, (Optr)PSend18510, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend18511, (Optr)&t_send1, (Optr)PSend18512, (Optr)&t_block_return);
    Block PBlock18507 = new_Block_with(empty_Array, empty_Array, PThreadedCode18508, 1, PSend18512);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18513 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB_timesRepeat_, 1, (Optr)PBlock18507);
    Array PThreadedCode18505 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign18506, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_closure, (Optr)PBlock18507, (Optr)&t_send1, (Optr)PSend18513, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18502 = new_Method_with(PArray18503, PArray18504, empty_Array, PThreadedCode18505, 3, PAssign18506, PSend18513, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod18502, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_truncate() {
    Symbol SMB_truncate = new_Symbol(L"truncate");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18517 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18519 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18523 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18522 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18523, (Optr)&t_block_return);
    Block PBlock18521 = new_Block_with(empty_Array, empty_Array, PThreadedCode18522, 1, PSend18523);
    // ifTrue:. 
    Send PSend18520 = new_Send((Optr)PSend18519, SMB_ifTrue_, 1, (Optr)PBlock18521);
    Assign PAssign18524 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18525 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    Symbol SMB_previous_ = new_Symbol(L"previous:");
    // previous:. 
    Send PSend18526 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current);
    Array PThreadedCode18518 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18519, (Optr)&t_send_ifTrue_, (Optr)PSend18520, (Optr)PBlock18521, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18524, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18525, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send1, (Optr)PSend18526, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18516 = new_Block_with(PArray18517, empty_Array, PThreadedCode18518, 5, PSend18520, PAssign18524, PSend18525, PSend18526, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18527 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18516);
    Array PThreadedCode18515 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18516, (Optr)&t_send1, (Optr)PSend18527, (Optr)&t_method_return);
    Method PMethod18514 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18515, 1, PSend18527);
    
    MethodClosure MC_SMB_truncate = new_MethodClosure((Method)PMethod18514, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_truncate, MC_SMB_truncate);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_elementBlock_0_0 = new_Variable_named(L"elementBlock", 0);
    Variable VAR_separatorBlock_0_1 = new_Variable_named(L"separatorBlock", 0);
    Array PArray18529 = new_Array_with(2, (Optr)VAR_elementBlock_0_0, (Optr)VAR_separatorBlock_0_1);
    Variable VAR_link_0_2 = new_Variable_named(L"link", 0);
    Array PArray18530 = new_Array_with(1, (Optr)VAR_link_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18533 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18535 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18539 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18538 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18539, (Optr)&t_block_return);
    Block PBlock18537 = new_Block_with(empty_Array, empty_Array, PThreadedCode18538, 1, PSend18539);
    // ifTrue:. 
    Send PSend18536 = new_Send((Optr)PSend18535, SMB_ifTrue_, 1, (Optr)PBlock18537);
    Assign PAssign18540 = new_Assign((Optr)VAR_link_0_2, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18541 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18545 = new_Send((Optr)VAR_link_0_2, SMB_next, 0);
    Assign PAssign18544 = new_Assign((Optr)VAR_link_0_2, (Optr)PSend18545);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18546 = new_Send((Optr)PAssign18544, SMB_value, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18547 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend18546);
    // value. 
    Send PSend18548 = new_Send((Optr)VAR_separatorBlock_0_1, SMB_value, 0);
    Array PThreadedCode18543 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push1, (Optr)PAssign18544, (Optr)&t_push_variable, (Optr)VAR_link_0_2, (Optr)&t_send0, (Optr)PSend18545, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend18546, (Optr)&t_send1, (Optr)PSend18547, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separatorBlock_0_1, (Optr)&t_send0, (Optr)PSend18548, (Optr)&t_block_return);
    Block PBlock18542 = new_Block_with(empty_Array, empty_Array, PThreadedCode18543, 2, PSend18547, PSend18548);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18549 = new_Send((Optr)PSend18541, SMB_timesRepeat_, 1, (Optr)PBlock18542);
    // next. 
    Send PSend18550 = new_Send((Optr)VAR_link_0_2, SMB_next, 0);
    // value. 
    Send PSend18551 = new_Send((Optr)PSend18550, SMB_value, 0);
    // value:. 
    Send PSend18552 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend18551);
    Array PThreadedCode18534 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18535, (Optr)&t_send_ifTrue_, (Optr)PSend18536, (Optr)PBlock18537, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18540, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18541, (Optr)&t_push_closure, (Optr)PBlock18542, (Optr)&t_send1, (Optr)PSend18549, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_link_0_2, (Optr)&t_send0, (Optr)PSend18550, (Optr)&t_send0, (Optr)PSend18551, (Optr)&t_send1, (Optr)PSend18552, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18532 = new_Block_with(PArray18533, empty_Array, PThreadedCode18534, 5, PSend18536, PAssign18540, PSend18549, PSend18552, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18553 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18532);
    Array PThreadedCode18531 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18532, (Optr)&t_send1, (Optr)PSend18553, (Optr)&t_method_return);
    Method PMethod18528 = new_Method_with(PArray18529, PArray18530, empty_Array, PThreadedCode18531, 1, PSend18553);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod18528, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_do_separatedBy_, MC_SMB_do_separatedBy_);
}

void init_Shell_ReadLine_PDoubleLinkedList_layout() {
    layout_Shell_ReadLine_DoubleLinkedList_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_DoubleLinkedList_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_DoubleLinkedList_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_DoubleLinkedList_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_DoubleLinkedList_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_DoubleLinkedList_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_DoubleLinkedList = new_Symbol(L"DoubleLinkedList");
    slot_Shell_ReadLine_DoubleLinkedList_size = (Optr)new_Slot(0, L"size");
    slot_Shell_ReadLine_DoubleLinkedList_start = (Optr)new_Slot(1, L"start");
    slot_Shell_ReadLine_DoubleLinkedList_end = (Optr)new_Slot(2, L"end");
    slot_Shell_ReadLine_DoubleLinkedList_current = (Optr)new_Slot(3, L"current");
    slot_Shell_ReadLine_DoubleLinkedList_position = (Optr)new_Slot(4, L"position");
    layout_Shell_ReadLine_DoubleLinkedList = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_DoubleLinkedList)->values[0] = slot_Shell_ReadLine_DoubleLinkedList_size; // size 
    ((Array)layout_Shell_ReadLine_DoubleLinkedList)->values[1] = slot_Shell_ReadLine_DoubleLinkedList_start; // start 
    ((Array)layout_Shell_ReadLine_DoubleLinkedList)->values[2] = slot_Shell_ReadLine_DoubleLinkedList_end; // end 
    ((Array)layout_Shell_ReadLine_DoubleLinkedList)->values[3] = slot_Shell_ReadLine_DoubleLinkedList_current; // current 
    ((Array)layout_Shell_ReadLine_DoubleLinkedList)->values[4] = slot_Shell_ReadLine_DoubleLinkedList_position; // position 
    Shell_ReadLine_DoubleLinkedList_Class = (Class)new_Class(Object_Class, layout_Shell_ReadLine_DoubleLinkedList_Class_class);
    Shell_ReadLine_DoubleLinkedList_Class->layout = layout_Shell_ReadLine_DoubleLinkedList;
    Shell_ReadLine_DoubleLinkedList_Class->name = SMB_DoubleLinkedList;
    
}

void init_Shell_ReadLine_PDoubleLinkedList_methods() {
    init_SMB_clear();
    init_SMB_size();
    init_SMB_last();
    init_SMB_atEnd();
    init_SMB_first();
    init_SMB_next();
    init_SMB_end();
    init_SMB_position_();
    init_SMB_initialize();
    init_SMB_value();
    init_SMB_remove();
    init_SMB_atStart();
    init_SMB_add_();
    init_SMB_position();
    init_SMB_start();
    init_SMB_previous();
    init_SMB_do_();
    init_SMB_truncate();
    init_SMB_do_separatedBy_();
    
}