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
    Send PSend18058 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_start, SMB_next_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign18059 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)int_0_Const);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend18060 = new_Send((Optr)self, SMB_start, 0);
    Array PThreadedCode18057 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18058, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18059, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18060, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18057, 4, PSend18058, PAssign18059, PSend18060, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18056, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode18062 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_method_return);
    Method PMethod18061 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18062, 1, slot_Shell_ReadLine_DoubleLinkedList_size);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod18061, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18065 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous, 0);
    Array PThreadedCode18064 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send0, (Optr)PSend18065, (Optr)&t_method_return);
    Method PMethod18063 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18064, 1, PSend18065);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod18063, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18068 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18069 = new_Send((Optr)PSend18068, SMB__pequals_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    Array PThreadedCode18067 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18068, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18069, (Optr)&t_method_return);
    Method PMethod18066 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18067, 1, PSend18069);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod18066, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Array PThreadedCode18071 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_method_return);
    Method PMethod18070 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18071, 1, slot_Shell_ReadLine_DoubleLinkedList_start);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod18070, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18075 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18077 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18081 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18080 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18081, (Optr)&t_block_return);
    Block PBlock18079 = new_Block_with(empty_Array, empty_Array, PThreadedCode18080, 1, PSend18081);
    // ifTrue:. 
    Send PSend18078 = new_Send((Optr)PSend18077, SMB_ifTrue_, 1, (Optr)PBlock18079);
    // next. 
    Send PSend18083 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Assign PAssign18082 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18083);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18085 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18084 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18085);
    Array PThreadedCode18076 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18077, (Optr)&t_send_ifTrue_, (Optr)PSend18078, (Optr)PBlock18079, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18082, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18083, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18084, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18085, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18074 = new_Block_with(PArray18075, empty_Array, PThreadedCode18076, 4, PSend18078, PAssign18082, PAssign18084, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18086 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18074);
    Array PThreadedCode18073 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18074, (Optr)&t_send1, (Optr)PSend18086, (Optr)&t_method_return);
    Method PMethod18072 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18073, 1, PSend18086);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod18072, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18090 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous, 0);
    Assign PAssign18089 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18090);
    Assign PAssign18091 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size);
    Array PThreadedCode18088 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign18089, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send0, (Optr)PSend18090, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18091, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18087 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18088, 3, PAssign18089, PAssign18091, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18087, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray18093 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18096 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB_min_, 1, (Optr)VAR_value_0_0);
    Assign PAssign18095 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18096);
    Assign PAssign18097 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18101 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Assign PAssign18100 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18101);
    Array PThreadedCode18099 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign18100, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18101, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18098 = new_Block_with(empty_Array, empty_Array, PThreadedCode18099, 1, PAssign18100);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18102 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB_timesRepeat_, 1, (Optr)PBlock18098);
    Array PThreadedCode18094 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18095, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend18096, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18097, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_closure, (Optr)PBlock18098, (Optr)&t_send1, (Optr)PSend18102, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18092 = new_Method_with(PArray18093, empty_Array, empty_Array, PThreadedCode18094, 4, PAssign18095, PAssign18097, PSend18102, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod18092, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18106 = new_Send((Optr)PStartLink_classReference, SMB_new, 0);
    Assign PAssign18105 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)PSend18106);
    // new. 
    Send PSend18108 = new_Send((Optr)PEndLink_classReference, SMB_new, 0);
    Assign PAssign18107 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)PSend18108);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18109 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode18104 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign18105, (Optr)&t_push_class_reference, (Optr)PStartLink_classReference, (Optr)&t_send0, (Optr)PSend18106, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18107, (Optr)&t_push_class_reference, (Optr)PEndLink_classReference, (Optr)&t_send0, (Optr)PSend18108, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18109, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18103 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18104, 4, PAssign18105, PAssign18107, PSend18109, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18103, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18112 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_value, 0);
    Array PThreadedCode18111 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18112, (Optr)&t_method_return);
    Method PMethod18110 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18111, 1, PSend18112);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod18110, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18116 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18118 = new_Send((Optr)self, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18122 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18121 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18122, (Optr)&t_block_return);
    Block PBlock18120 = new_Block_with(empty_Array, empty_Array, PThreadedCode18121, 1, PSend18122);
    // ifTrue:. 
    Send PSend18119 = new_Send((Optr)PSend18118, SMB_ifTrue_, 1, (Optr)PBlock18120);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18124 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18123 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)PSend18124);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18125 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18126 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18127 = new_Send((Optr)PSend18125, SMB_next_, 1, (Optr)PSend18126);
    // previous. 
    Send PSend18129 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Assign PAssign18128 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18129);
    // -. 
    Send PSend18131 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18130 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18131);
    Array PThreadedCode18117 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18118, (Optr)&t_send_ifTrue_, (Optr)PSend18119, (Optr)PBlock18120, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18123, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18124, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18125, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18126, (Optr)&t_send1, (Optr)PSend18127, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18128, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18129, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18130, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18131, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18115 = new_Block_with(PArray18116, empty_Array, PThreadedCode18117, 6, PSend18119, PAssign18123, PSend18127, PAssign18128, PAssign18130, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18132 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18115);
    Array PThreadedCode18114 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18115, (Optr)&t_send1, (Optr)PSend18132, (Optr)&t_method_return);
    Method PMethod18113 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18114, 1, PSend18132);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod18113, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_atStart() {
    Symbol SMB_atStart = new_Symbol(L"atStart");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18135 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB__pequals_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Array PThreadedCode18134 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_send1, (Optr)PSend18135, (Optr)&t_method_return);
    Method PMethod18133 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18134, 1, PSend18135);
    
    MethodClosure MC_SMB_atStart = new_MethodClosure((Method)PMethod18133, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_atStart, MC_SMB_atStart);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray18137 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray18138 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18142 = new_Send((Optr)PDoubleLink_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18141 = new_Send((Optr)PSend18142, SMB_value_, 1, (Optr)VAR_value_0_0);
    Assign PAssign18140 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend18141);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18143 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18144 = new_Send((Optr)VAR_new_0_1, SMB_next_, 1, (Optr)PSend18143);
    // next:. 
    Send PSend18145 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next_, 1, (Optr)VAR_new_0_1);
    Assign PAssign18146 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)VAR_new_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18148 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18147 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)PSend18148);
    // +. 
    Send PSend18150 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18149 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18150);
    Array PThreadedCode18139 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign18140, (Optr)&t_push_class_reference, (Optr)PDoubleLink_classReference, (Optr)&t_send0, (Optr)PSend18142, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend18141, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18143, (Optr)&t_send1, (Optr)PSend18144, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send1, (Optr)PSend18145, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18146, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18147, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18148, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18149, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18150, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18136 = new_Method_with(PArray18137, PArray18138, empty_Array, PThreadedCode18139, 7, PAssign18140, PSend18144, PSend18145, PAssign18146, PAssign18147, PAssign18149, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod18136, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode18152 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_method_return);
    Method PMethod18151 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18152, 1, slot_Shell_ReadLine_DoubleLinkedList_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod18151, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    Assign PAssign18155 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign18156 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)int_0_Const);
    Array PThreadedCode18154 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign18155, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18156, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18153 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18154, 3, PAssign18155, PAssign18156, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod18153, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_previous() {
    Symbol SMB_previous = new_Symbol(L"previous");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18160 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18162 = new_Send((Optr)self, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18166 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18165 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18166, (Optr)&t_block_return);
    Block PBlock18164 = new_Block_with(empty_Array, empty_Array, PThreadedCode18165, 1, PSend18166);
    // ifTrue:. 
    Send PSend18163 = new_Send((Optr)PSend18162, SMB_ifTrue_, 1, (Optr)PBlock18164);
    // previous. 
    Send PSend18168 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Assign PAssign18167 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18168);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18170 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18169 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18170);
    Array PThreadedCode18161 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18162, (Optr)&t_send_ifTrue_, (Optr)PSend18163, (Optr)PBlock18164, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18167, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18168, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18169, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18170, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18159 = new_Block_with(PArray18160, empty_Array, PThreadedCode18161, 4, PSend18163, PAssign18167, PAssign18169, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18171 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18159);
    Array PThreadedCode18158 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18159, (Optr)&t_send1, (Optr)PSend18171, (Optr)&t_method_return);
    Method PMethod18157 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18158, 1, PSend18171);
    
    MethodClosure MC_SMB_previous = new_MethodClosure((Method)PMethod18157, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_previous, MC_SMB_previous);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray18173 = new_Array_with(1, (Optr)VAR_block_0_0);
    Variable VAR_link_0_1 = new_Variable_named(L"link", 0);
    Array PArray18174 = new_Array_with(1, (Optr)VAR_link_0_1);
    Assign PAssign18176 = new_Assign((Optr)VAR_link_0_1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18180 = new_Send((Optr)VAR_link_0_1, SMB_next, 0);
    Assign PAssign18179 = new_Assign((Optr)VAR_link_0_1, (Optr)PSend18180);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18181 = new_Send((Optr)PAssign18179, SMB_value, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18182 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)PSend18181);
    Array PThreadedCode18178 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push1, (Optr)PAssign18179, (Optr)&t_push_variable, (Optr)VAR_link_0_1, (Optr)&t_send0, (Optr)PSend18180, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend18181, (Optr)&t_send1, (Optr)PSend18182, (Optr)&t_block_return);
    Block PBlock18177 = new_Block_with(empty_Array, empty_Array, PThreadedCode18178, 1, PSend18182);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18183 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB_timesRepeat_, 1, (Optr)PBlock18177);
    Array PThreadedCode18175 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign18176, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_closure, (Optr)PBlock18177, (Optr)&t_send1, (Optr)PSend18183, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18172 = new_Method_with(PArray18173, PArray18174, empty_Array, PThreadedCode18175, 3, PAssign18176, PSend18183, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod18172, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_truncate() {
    Symbol SMB_truncate = new_Symbol(L"truncate");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18187 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18189 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18193 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18192 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18193, (Optr)&t_block_return);
    Block PBlock18191 = new_Block_with(empty_Array, empty_Array, PThreadedCode18192, 1, PSend18193);
    // ifTrue:. 
    Send PSend18190 = new_Send((Optr)PSend18189, SMB_ifTrue_, 1, (Optr)PBlock18191);
    Assign PAssign18194 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18195 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    Symbol SMB_previous_ = new_Symbol(L"previous:");
    // previous:. 
    Send PSend18196 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current);
    Array PThreadedCode18188 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18189, (Optr)&t_send_ifTrue_, (Optr)PSend18190, (Optr)PBlock18191, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18194, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18195, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send1, (Optr)PSend18196, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18186 = new_Block_with(PArray18187, empty_Array, PThreadedCode18188, 5, PSend18190, PAssign18194, PSend18195, PSend18196, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18197 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18186);
    Array PThreadedCode18185 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18186, (Optr)&t_send1, (Optr)PSend18197, (Optr)&t_method_return);
    Method PMethod18184 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18185, 1, PSend18197);
    
    MethodClosure MC_SMB_truncate = new_MethodClosure((Method)PMethod18184, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_truncate, MC_SMB_truncate);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_elementBlock_0_0 = new_Variable_named(L"elementBlock", 0);
    Variable VAR_separatorBlock_0_1 = new_Variable_named(L"separatorBlock", 0);
    Array PArray18199 = new_Array_with(2, (Optr)VAR_elementBlock_0_0, (Optr)VAR_separatorBlock_0_1);
    Variable VAR_link_0_2 = new_Variable_named(L"link", 0);
    Array PArray18200 = new_Array_with(1, (Optr)VAR_link_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18203 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18205 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18209 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18208 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18209, (Optr)&t_block_return);
    Block PBlock18207 = new_Block_with(empty_Array, empty_Array, PThreadedCode18208, 1, PSend18209);
    // ifTrue:. 
    Send PSend18206 = new_Send((Optr)PSend18205, SMB_ifTrue_, 1, (Optr)PBlock18207);
    Assign PAssign18210 = new_Assign((Optr)VAR_link_0_2, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18211 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18215 = new_Send((Optr)VAR_link_0_2, SMB_next, 0);
    Assign PAssign18214 = new_Assign((Optr)VAR_link_0_2, (Optr)PSend18215);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18216 = new_Send((Optr)PAssign18214, SMB_value, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18217 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend18216);
    // value. 
    Send PSend18218 = new_Send((Optr)VAR_separatorBlock_0_1, SMB_value, 0);
    Array PThreadedCode18213 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push1, (Optr)PAssign18214, (Optr)&t_push_variable, (Optr)VAR_link_0_2, (Optr)&t_send0, (Optr)PSend18215, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend18216, (Optr)&t_send1, (Optr)PSend18217, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separatorBlock_0_1, (Optr)&t_send0, (Optr)PSend18218, (Optr)&t_block_return);
    Block PBlock18212 = new_Block_with(empty_Array, empty_Array, PThreadedCode18213, 2, PSend18217, PSend18218);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18219 = new_Send((Optr)PSend18211, SMB_timesRepeat_, 1, (Optr)PBlock18212);
    // next. 
    Send PSend18220 = new_Send((Optr)VAR_link_0_2, SMB_next, 0);
    // value. 
    Send PSend18221 = new_Send((Optr)PSend18220, SMB_value, 0);
    // value:. 
    Send PSend18222 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend18221);
    Array PThreadedCode18204 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18205, (Optr)&t_send_ifTrue_, (Optr)PSend18206, (Optr)PBlock18207, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18210, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18211, (Optr)&t_push_closure, (Optr)PBlock18212, (Optr)&t_send1, (Optr)PSend18219, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_link_0_2, (Optr)&t_send0, (Optr)PSend18220, (Optr)&t_send0, (Optr)PSend18221, (Optr)&t_send1, (Optr)PSend18222, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18202 = new_Block_with(PArray18203, empty_Array, PThreadedCode18204, 5, PSend18206, PAssign18210, PSend18219, PSend18222, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18223 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18202);
    Array PThreadedCode18201 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18202, (Optr)&t_send1, (Optr)PSend18223, (Optr)&t_method_return);
    Method PMethod18198 = new_Method_with(PArray18199, PArray18200, empty_Array, PThreadedCode18201, 1, PSend18223);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod18198, Shell_ReadLine_DoubleLinkedList_Class);
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