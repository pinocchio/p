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
    Send PSend18420 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_start, SMB_next_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign18421 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)int_0_Const);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend18422 = new_Send((Optr)self, SMB_start, 0);
    Array PThreadedCode18419 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18420, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18421, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18422, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18418 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18419, 4, PSend18420, PAssign18421, PSend18422, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18418, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode18424 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_method_return);
    Method PMethod18423 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18424, 1, slot_Shell_ReadLine_DoubleLinkedList_size);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod18423, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18427 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous, 0);
    Array PThreadedCode18426 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send0, (Optr)PSend18427, (Optr)&t_method_return);
    Method PMethod18425 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18426, 1, PSend18427);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod18425, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18430 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18431 = new_Send((Optr)PSend18430, SMB__pequals_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    Array PThreadedCode18429 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18430, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18431, (Optr)&t_method_return);
    Method PMethod18428 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18429, 1, PSend18431);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod18428, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Array PThreadedCode18433 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_method_return);
    Method PMethod18432 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18433, 1, slot_Shell_ReadLine_DoubleLinkedList_start);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod18432, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18437 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18439 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18443 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18442 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18443, (Optr)&t_block_return);
    Block PBlock18441 = new_Block_with(empty_Array, empty_Array, PThreadedCode18442, 1, PSend18443);
    // ifTrue:. 
    Send PSend18440 = new_Send((Optr)PSend18439, SMB_ifTrue_, 1, (Optr)PBlock18441);
    // next. 
    Send PSend18445 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Assign PAssign18444 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18445);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18447 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18446 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18447);
    Array PThreadedCode18438 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18439, (Optr)&t_send_ifTrue_, (Optr)PSend18440, (Optr)PBlock18441, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18444, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18445, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18446, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18447, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18436 = new_Block_with(PArray18437, empty_Array, PThreadedCode18438, 4, PSend18440, PAssign18444, PAssign18446, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18448 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18436);
    Array PThreadedCode18435 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18436, (Optr)&t_send1, (Optr)PSend18448, (Optr)&t_method_return);
    Method PMethod18434 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18435, 1, PSend18448);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod18434, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18452 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous, 0);
    Assign PAssign18451 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18452);
    Assign PAssign18453 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size);
    Array PThreadedCode18450 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign18451, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send0, (Optr)PSend18452, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18453, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18449 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18450, 3, PAssign18451, PAssign18453, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18449, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray18455 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18458 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB_min_, 1, (Optr)VAR_value_0_0);
    Assign PAssign18457 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18458);
    Assign PAssign18459 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18463 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Assign PAssign18462 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18463);
    Array PThreadedCode18461 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign18462, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18463, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18460 = new_Block_with(empty_Array, empty_Array, PThreadedCode18461, 1, PAssign18462);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18464 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB_timesRepeat_, 1, (Optr)PBlock18460);
    Array PThreadedCode18456 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18457, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend18458, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18459, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_closure, (Optr)PBlock18460, (Optr)&t_send1, (Optr)PSend18464, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18454 = new_Method_with(PArray18455, empty_Array, empty_Array, PThreadedCode18456, 4, PAssign18457, PAssign18459, PSend18464, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod18454, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18468 = new_Send((Optr)PStartLink_classReference, SMB_new, 0);
    Assign PAssign18467 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)PSend18468);
    // new. 
    Send PSend18470 = new_Send((Optr)PEndLink_classReference, SMB_new, 0);
    Assign PAssign18469 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)PSend18470);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18471 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode18466 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign18467, (Optr)&t_push_class_reference, (Optr)PStartLink_classReference, (Optr)&t_send0, (Optr)PSend18468, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18469, (Optr)&t_push_class_reference, (Optr)PEndLink_classReference, (Optr)&t_send0, (Optr)PSend18470, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18471, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18465 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18466, 4, PAssign18467, PAssign18469, PSend18471, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18465, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18474 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_value, 0);
    Array PThreadedCode18473 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18474, (Optr)&t_method_return);
    Method PMethod18472 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18473, 1, PSend18474);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod18472, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18478 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18480 = new_Send((Optr)self, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18484 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18483 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18484, (Optr)&t_block_return);
    Block PBlock18482 = new_Block_with(empty_Array, empty_Array, PThreadedCode18483, 1, PSend18484);
    // ifTrue:. 
    Send PSend18481 = new_Send((Optr)PSend18480, SMB_ifTrue_, 1, (Optr)PBlock18482);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18486 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18485 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)PSend18486);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18487 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18488 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18489 = new_Send((Optr)PSend18487, SMB_next_, 1, (Optr)PSend18488);
    // previous. 
    Send PSend18491 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Assign PAssign18490 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18491);
    // -. 
    Send PSend18493 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18492 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18493);
    Array PThreadedCode18479 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18480, (Optr)&t_send_ifTrue_, (Optr)PSend18481, (Optr)PBlock18482, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18485, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18486, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18487, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18488, (Optr)&t_send1, (Optr)PSend18489, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18490, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18491, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18492, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18493, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18477 = new_Block_with(PArray18478, empty_Array, PThreadedCode18479, 6, PSend18481, PAssign18485, PSend18489, PAssign18490, PAssign18492, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18494 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18477);
    Array PThreadedCode18476 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18477, (Optr)&t_send1, (Optr)PSend18494, (Optr)&t_method_return);
    Method PMethod18475 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18476, 1, PSend18494);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod18475, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_atStart() {
    Symbol SMB_atStart = new_Symbol(L"atStart");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18497 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB__pequals_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Array PThreadedCode18496 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_send1, (Optr)PSend18497, (Optr)&t_method_return);
    Method PMethod18495 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18496, 1, PSend18497);
    
    MethodClosure MC_SMB_atStart = new_MethodClosure((Method)PMethod18495, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_atStart, MC_SMB_atStart);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray18499 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray18500 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18504 = new_Send((Optr)PDoubleLink_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18503 = new_Send((Optr)PSend18504, SMB_value_, 1, (Optr)VAR_value_0_0);
    Assign PAssign18502 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend18503);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18505 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18506 = new_Send((Optr)VAR_new_0_1, SMB_next_, 1, (Optr)PSend18505);
    // next:. 
    Send PSend18507 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next_, 1, (Optr)VAR_new_0_1);
    Assign PAssign18508 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)VAR_new_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18510 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18509 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)PSend18510);
    // +. 
    Send PSend18512 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18511 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18512);
    Array PThreadedCode18501 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign18502, (Optr)&t_push_class_reference, (Optr)PDoubleLink_classReference, (Optr)&t_send0, (Optr)PSend18504, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend18503, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18505, (Optr)&t_send1, (Optr)PSend18506, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send1, (Optr)PSend18507, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18508, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18509, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18510, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18511, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18512, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18498 = new_Method_with(PArray18499, PArray18500, empty_Array, PThreadedCode18501, 7, PAssign18502, PSend18506, PSend18507, PAssign18508, PAssign18509, PAssign18511, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod18498, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode18514 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_method_return);
    Method PMethod18513 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18514, 1, slot_Shell_ReadLine_DoubleLinkedList_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod18513, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    Assign PAssign18517 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign18518 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)int_0_Const);
    Array PThreadedCode18516 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign18517, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18518, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18515 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18516, 3, PAssign18517, PAssign18518, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod18515, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_previous() {
    Symbol SMB_previous = new_Symbol(L"previous");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18522 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18524 = new_Send((Optr)self, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18528 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18527 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18528, (Optr)&t_block_return);
    Block PBlock18526 = new_Block_with(empty_Array, empty_Array, PThreadedCode18527, 1, PSend18528);
    // ifTrue:. 
    Send PSend18525 = new_Send((Optr)PSend18524, SMB_ifTrue_, 1, (Optr)PBlock18526);
    // previous. 
    Send PSend18530 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Assign PAssign18529 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18530);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18532 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18531 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18532);
    Array PThreadedCode18523 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18524, (Optr)&t_send_ifTrue_, (Optr)PSend18525, (Optr)PBlock18526, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18529, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18530, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18531, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18532, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18521 = new_Block_with(PArray18522, empty_Array, PThreadedCode18523, 4, PSend18525, PAssign18529, PAssign18531, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18533 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18521);
    Array PThreadedCode18520 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18521, (Optr)&t_send1, (Optr)PSend18533, (Optr)&t_method_return);
    Method PMethod18519 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18520, 1, PSend18533);
    
    MethodClosure MC_SMB_previous = new_MethodClosure((Method)PMethod18519, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_previous, MC_SMB_previous);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray18535 = new_Array_with(1, (Optr)VAR_block_0_0);
    Variable VAR_link_0_1 = new_Variable_named(L"link", 0);
    Array PArray18536 = new_Array_with(1, (Optr)VAR_link_0_1);
    Assign PAssign18538 = new_Assign((Optr)VAR_link_0_1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18542 = new_Send((Optr)VAR_link_0_1, SMB_next, 0);
    Assign PAssign18541 = new_Assign((Optr)VAR_link_0_1, (Optr)PSend18542);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18543 = new_Send((Optr)PAssign18541, SMB_value, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18544 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)PSend18543);
    Array PThreadedCode18540 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push1, (Optr)PAssign18541, (Optr)&t_push_variable, (Optr)VAR_link_0_1, (Optr)&t_send0, (Optr)PSend18542, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend18543, (Optr)&t_send1, (Optr)PSend18544, (Optr)&t_block_return);
    Block PBlock18539 = new_Block_with(empty_Array, empty_Array, PThreadedCode18540, 1, PSend18544);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18545 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB_timesRepeat_, 1, (Optr)PBlock18539);
    Array PThreadedCode18537 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign18538, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_closure, (Optr)PBlock18539, (Optr)&t_send1, (Optr)PSend18545, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18534 = new_Method_with(PArray18535, PArray18536, empty_Array, PThreadedCode18537, 3, PAssign18538, PSend18545, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod18534, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_truncate() {
    Symbol SMB_truncate = new_Symbol(L"truncate");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18549 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18551 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18555 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18554 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18555, (Optr)&t_block_return);
    Block PBlock18553 = new_Block_with(empty_Array, empty_Array, PThreadedCode18554, 1, PSend18555);
    // ifTrue:. 
    Send PSend18552 = new_Send((Optr)PSend18551, SMB_ifTrue_, 1, (Optr)PBlock18553);
    Assign PAssign18556 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18557 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    Symbol SMB_previous_ = new_Symbol(L"previous:");
    // previous:. 
    Send PSend18558 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current);
    Array PThreadedCode18550 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18551, (Optr)&t_send_ifTrue_, (Optr)PSend18552, (Optr)PBlock18553, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18556, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18557, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send1, (Optr)PSend18558, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18548 = new_Block_with(PArray18549, empty_Array, PThreadedCode18550, 5, PSend18552, PAssign18556, PSend18557, PSend18558, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18559 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18548);
    Array PThreadedCode18547 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18548, (Optr)&t_send1, (Optr)PSend18559, (Optr)&t_method_return);
    Method PMethod18546 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18547, 1, PSend18559);
    
    MethodClosure MC_SMB_truncate = new_MethodClosure((Method)PMethod18546, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_truncate, MC_SMB_truncate);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_elementBlock_0_0 = new_Variable_named(L"elementBlock", 0);
    Variable VAR_separatorBlock_0_1 = new_Variable_named(L"separatorBlock", 0);
    Array PArray18561 = new_Array_with(2, (Optr)VAR_elementBlock_0_0, (Optr)VAR_separatorBlock_0_1);
    Variable VAR_link_0_2 = new_Variable_named(L"link", 0);
    Array PArray18562 = new_Array_with(1, (Optr)VAR_link_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18565 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18567 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18571 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18570 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18571, (Optr)&t_block_return);
    Block PBlock18569 = new_Block_with(empty_Array, empty_Array, PThreadedCode18570, 1, PSend18571);
    // ifTrue:. 
    Send PSend18568 = new_Send((Optr)PSend18567, SMB_ifTrue_, 1, (Optr)PBlock18569);
    Assign PAssign18572 = new_Assign((Optr)VAR_link_0_2, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18573 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18577 = new_Send((Optr)VAR_link_0_2, SMB_next, 0);
    Assign PAssign18576 = new_Assign((Optr)VAR_link_0_2, (Optr)PSend18577);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18578 = new_Send((Optr)PAssign18576, SMB_value, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18579 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend18578);
    // value. 
    Send PSend18580 = new_Send((Optr)VAR_separatorBlock_0_1, SMB_value, 0);
    Array PThreadedCode18575 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push1, (Optr)PAssign18576, (Optr)&t_push_variable, (Optr)VAR_link_0_2, (Optr)&t_send0, (Optr)PSend18577, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend18578, (Optr)&t_send1, (Optr)PSend18579, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separatorBlock_0_1, (Optr)&t_send0, (Optr)PSend18580, (Optr)&t_block_return);
    Block PBlock18574 = new_Block_with(empty_Array, empty_Array, PThreadedCode18575, 2, PSend18579, PSend18580);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18581 = new_Send((Optr)PSend18573, SMB_timesRepeat_, 1, (Optr)PBlock18574);
    // next. 
    Send PSend18582 = new_Send((Optr)VAR_link_0_2, SMB_next, 0);
    // value. 
    Send PSend18583 = new_Send((Optr)PSend18582, SMB_value, 0);
    // value:. 
    Send PSend18584 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend18583);
    Array PThreadedCode18566 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18567, (Optr)&t_send_ifTrue_, (Optr)PSend18568, (Optr)PBlock18569, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18572, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18573, (Optr)&t_push_closure, (Optr)PBlock18574, (Optr)&t_send1, (Optr)PSend18581, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_link_0_2, (Optr)&t_send0, (Optr)PSend18582, (Optr)&t_send0, (Optr)PSend18583, (Optr)&t_send1, (Optr)PSend18584, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18564 = new_Block_with(PArray18565, empty_Array, PThreadedCode18566, 5, PSend18568, PAssign18572, PSend18581, PSend18584, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18585 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18564);
    Array PThreadedCode18563 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18564, (Optr)&t_send1, (Optr)PSend18585, (Optr)&t_method_return);
    Method PMethod18560 = new_Method_with(PArray18561, PArray18562, empty_Array, PThreadedCode18563, 1, PSend18585);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod18560, Shell_ReadLine_DoubleLinkedList_Class);
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