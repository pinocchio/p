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
    Send PSend18199 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_start, SMB_next_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign18200 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)int_0_Const);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend18201 = new_Send((Optr)self, SMB_start, 0);
    Array PThreadedCode18198 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18199, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18200, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18201, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18197 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18198, 4, PSend18199, PAssign18200, PSend18201, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18197, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_size() {
    Symbol SMB_size = new_Symbol(L"size");
    Array PThreadedCode18203 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_method_return);
    Method PMethod18202 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18203, 1, slot_Shell_ReadLine_DoubleLinkedList_size);
    
    MethodClosure MC_SMB_size = new_MethodClosure((Method)PMethod18202, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_size, MC_SMB_size);
}


static void init_SMB_last() {
    Symbol SMB_last = new_Symbol(L"last");
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18206 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous, 0);
    Array PThreadedCode18205 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send0, (Optr)PSend18206, (Optr)&t_method_return);
    Method PMethod18204 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18205, 1, PSend18206);
    
    MethodClosure MC_SMB_last = new_MethodClosure((Method)PMethod18204, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_last, MC_SMB_last);
}


static void init_SMB_atEnd() {
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18209 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18210 = new_Send((Optr)PSend18209, SMB__pequals_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    Array PThreadedCode18208 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18209, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18210, (Optr)&t_method_return);
    Method PMethod18207 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18208, 1, PSend18210);
    
    MethodClosure MC_SMB_atEnd = new_MethodClosure((Method)PMethod18207, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_atEnd, MC_SMB_atEnd);
}


static void init_SMB_first() {
    Symbol SMB_first = new_Symbol(L"first");
    Array PThreadedCode18212 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_method_return);
    Method PMethod18211 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18212, 1, slot_Shell_ReadLine_DoubleLinkedList_start);
    
    MethodClosure MC_SMB_first = new_MethodClosure((Method)PMethod18211, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_first, MC_SMB_first);
}


static void init_SMB_next() {
    Symbol SMB_next = new_Symbol(L"next");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18216 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18218 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18222 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18221 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18222, (Optr)&t_block_return);
    Block PBlock18220 = new_Block_with(empty_Array, empty_Array, PThreadedCode18221, 1, PSend18222);
    // ifTrue:. 
    Send PSend18219 = new_Send((Optr)PSend18218, SMB_ifTrue_, 1, (Optr)PBlock18220);
    // next. 
    Send PSend18224 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Assign PAssign18223 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18224);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18226 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18225 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18226);
    Array PThreadedCode18217 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18218, (Optr)&t_send_ifTrue_, (Optr)PSend18219, (Optr)PBlock18220, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18223, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18224, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18225, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18226, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18215 = new_Block_with(PArray18216, empty_Array, PThreadedCode18217, 4, PSend18219, PAssign18223, PAssign18225, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18227 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18215);
    Array PThreadedCode18214 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18215, (Optr)&t_send1, (Optr)PSend18227, (Optr)&t_method_return);
    Method PMethod18213 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18214, 1, PSend18227);
    
    MethodClosure MC_SMB_next = new_MethodClosure((Method)PMethod18213, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_next, MC_SMB_next);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18231 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous, 0);
    Assign PAssign18230 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18231);
    Assign PAssign18232 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size);
    Array PThreadedCode18229 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push1, (Optr)PAssign18230, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send0, (Optr)PSend18231, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18232, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18228 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18229, 3, PAssign18230, PAssign18232, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18228, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray18234 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_min_ = new_Symbol(L"min:");
    // min:. 
    Send PSend18237 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB_min_, 1, (Optr)VAR_value_0_0);
    Assign PAssign18236 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18237);
    Assign PAssign18238 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18242 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Assign PAssign18241 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18242);
    Array PThreadedCode18240 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push1, (Optr)PAssign18241, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18242, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18239 = new_Block_with(empty_Array, empty_Array, PThreadedCode18240, 1, PAssign18241);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18243 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB_timesRepeat_, 1, (Optr)PBlock18239);
    Array PThreadedCode18235 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push1, (Optr)PAssign18236, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend18237, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18238, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_closure, (Optr)PBlock18239, (Optr)&t_send1, (Optr)PSend18243, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18233 = new_Method_with(PArray18234, empty_Array, empty_Array, PThreadedCode18235, 4, PAssign18236, PAssign18238, PSend18243, self);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod18233, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18247 = new_Send((Optr)PStartLink_classReference, SMB_new, 0);
    Assign PAssign18246 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)PSend18247);
    // new. 
    Send PSend18249 = new_Send((Optr)PEndLink_classReference, SMB_new, 0);
    Assign PAssign18248 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)PSend18249);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18250 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode18245 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign18246, (Optr)&t_push_class_reference, (Optr)PStartLink_classReference, (Optr)&t_send0, (Optr)PSend18247, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18248, (Optr)&t_push_class_reference, (Optr)PEndLink_classReference, (Optr)&t_send0, (Optr)PSend18249, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18250, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18244 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18245, 4, PAssign18246, PAssign18248, PSend18250, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18244, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_value() {
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18253 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_value, 0);
    Array PThreadedCode18252 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18253, (Optr)&t_method_return);
    Method PMethod18251 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18252, 1, PSend18253);
    
    MethodClosure MC_SMB_value = new_MethodClosure((Method)PMethod18251, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_value, MC_SMB_value);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18257 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18259 = new_Send((Optr)self, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18263 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18262 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18263, (Optr)&t_block_return);
    Block PBlock18261 = new_Block_with(empty_Array, empty_Array, PThreadedCode18262, 1, PSend18263);
    // ifTrue:. 
    Send PSend18260 = new_Send((Optr)PSend18259, SMB_ifTrue_, 1, (Optr)PBlock18261);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18265 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18264 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)PSend18265);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18266 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18267 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18268 = new_Send((Optr)PSend18266, SMB_next_, 1, (Optr)PSend18267);
    // previous. 
    Send PSend18270 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Assign PAssign18269 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18270);
    // -. 
    Send PSend18272 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18271 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18272);
    Array PThreadedCode18258 = instantiate_Array_with(ThreadedCode_Class, 0, 45, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18259, (Optr)&t_send_ifTrue_, (Optr)PSend18260, (Optr)PBlock18261, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18264, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18265, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18266, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18267, (Optr)&t_send1, (Optr)PSend18268, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18269, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18270, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18271, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18272, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18256 = new_Block_with(PArray18257, empty_Array, PThreadedCode18258, 6, PSend18260, PAssign18264, PSend18268, PAssign18269, PAssign18271, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18273 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18256);
    Array PThreadedCode18255 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18256, (Optr)&t_send1, (Optr)PSend18273, (Optr)&t_method_return);
    Method PMethod18254 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18255, 1, PSend18273);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod18254, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_atStart() {
    Symbol SMB_atStart = new_Symbol(L"atStart");
    Symbol SMB__pequals_ = new_Symbol(L"==");
    // ==. 
    Send PSend18276 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB__pequals_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Array PThreadedCode18275 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_send1, (Optr)PSend18276, (Optr)&t_method_return);
    Method PMethod18274 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18275, 1, PSend18276);
    
    MethodClosure MC_SMB_atStart = new_MethodClosure((Method)PMethod18274, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_atStart, MC_SMB_atStart);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray18278 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_new_0_1 = new_Variable_named(L"new", 0);
    Array PArray18279 = new_Array_with(1, (Optr)VAR_new_0_1);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18283 = new_Send((Optr)PDoubleLink_classReference, SMB_new, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18282 = new_Send((Optr)PSend18283, SMB_value_, 1, (Optr)VAR_value_0_0);
    Assign PAssign18281 = new_Assign((Optr)VAR_new_0_1, (Optr)PSend18282);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18284 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next, 0);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18285 = new_Send((Optr)VAR_new_0_1, SMB_next_, 1, (Optr)PSend18284);
    // next:. 
    Send PSend18286 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next_, 1, (Optr)VAR_new_0_1);
    Assign PAssign18287 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)VAR_new_0_1);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18289 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18288 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)PSend18289);
    // +. 
    Send PSend18291 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18290 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18291);
    Array PThreadedCode18280 = instantiate_Array_with(ThreadedCode_Class, 0, 53, (Optr)&t_push1, (Optr)PAssign18281, (Optr)&t_push_class_reference, (Optr)PDoubleLink_classReference, (Optr)&t_send0, (Optr)PSend18283, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend18282, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18284, (Optr)&t_send1, (Optr)PSend18285, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_send1, (Optr)PSend18286, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18287, (Optr)&t_push_variable, (Optr)VAR_new_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18288, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18289, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18290, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18291, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18277 = new_Method_with(PArray18278, PArray18279, empty_Array, PThreadedCode18280, 7, PAssign18281, PSend18285, PSend18286, PAssign18287, PAssign18288, PAssign18290, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod18277, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Array PThreadedCode18293 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_method_return);
    Method PMethod18292 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18293, 1, slot_Shell_ReadLine_DoubleLinkedList_position);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod18292, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    Assign PAssign18296 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign18297 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)int_0_Const);
    Array PThreadedCode18295 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push1, (Optr)PAssign18296, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18297, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18294 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18295, 3, PAssign18296, PAssign18297, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod18294, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_previous() {
    Symbol SMB_previous = new_Symbol(L"previous");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18301 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18303 = new_Send((Optr)self, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18307 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18306 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18307, (Optr)&t_block_return);
    Block PBlock18305 = new_Block_with(empty_Array, empty_Array, PThreadedCode18306, 1, PSend18307);
    // ifTrue:. 
    Send PSend18304 = new_Send((Optr)PSend18303, SMB_ifTrue_, 1, (Optr)PBlock18305);
    // previous. 
    Send PSend18309 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_previous, 0);
    Assign PAssign18308 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)PSend18309);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18311 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign18310 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)PSend18311);
    Array PThreadedCode18302 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18303, (Optr)&t_send_ifTrue_, (Optr)PSend18304, (Optr)PBlock18305, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18308, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send0, (Optr)PSend18309, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18310, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18311, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18300 = new_Block_with(PArray18301, empty_Array, PThreadedCode18302, 4, PSend18304, PAssign18308, PAssign18310, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18312 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18300);
    Array PThreadedCode18299 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18300, (Optr)&t_send1, (Optr)PSend18312, (Optr)&t_method_return);
    Method PMethod18298 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18299, 1, PSend18312);
    
    MethodClosure MC_SMB_previous = new_MethodClosure((Method)PMethod18298, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_previous, MC_SMB_previous);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray18314 = new_Array_with(1, (Optr)VAR_block_0_0);
    Variable VAR_link_0_1 = new_Variable_named(L"link", 0);
    Array PArray18315 = new_Array_with(1, (Optr)VAR_link_0_1);
    Assign PAssign18317 = new_Assign((Optr)VAR_link_0_1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18321 = new_Send((Optr)VAR_link_0_1, SMB_next, 0);
    Assign PAssign18320 = new_Assign((Optr)VAR_link_0_1, (Optr)PSend18321);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18322 = new_Send((Optr)PAssign18320, SMB_value, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18323 = new_Send((Optr)VAR_block_0_0, SMB_value_, 1, (Optr)PSend18322);
    Array PThreadedCode18319 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push1, (Optr)PAssign18320, (Optr)&t_push_variable, (Optr)VAR_link_0_1, (Optr)&t_send0, (Optr)PSend18321, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend18322, (Optr)&t_send1, (Optr)PSend18323, (Optr)&t_block_return);
    Block PBlock18318 = new_Block_with(empty_Array, empty_Array, PThreadedCode18319, 1, PSend18323);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18324 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB_timesRepeat_, 1, (Optr)PBlock18318);
    Array PThreadedCode18316 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push1, (Optr)PAssign18317, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_closure, (Optr)PBlock18318, (Optr)&t_send1, (Optr)PSend18324, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18313 = new_Method_with(PArray18314, PArray18315, empty_Array, PThreadedCode18316, 3, PAssign18317, PSend18324, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod18313, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_truncate() {
    Symbol SMB_truncate = new_Symbol(L"truncate");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18328 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18330 = new_Send((Optr)self, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18334 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18333 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18334, (Optr)&t_block_return);
    Block PBlock18332 = new_Block_with(empty_Array, empty_Array, PThreadedCode18333, 1, PSend18334);
    // ifTrue:. 
    Send PSend18331 = new_Send((Optr)PSend18330, SMB_ifTrue_, 1, (Optr)PBlock18332);
    Assign PAssign18335 = new_Assign((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position);
    Symbol SMB_next_ = new_Symbol(L"next:");
    // next:. 
    Send PSend18336 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_current, SMB_next_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end);
    Symbol SMB_previous_ = new_Symbol(L"previous:");
    // previous:. 
    Send PSend18337 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_end, SMB_previous_, 1, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current);
    Array PThreadedCode18329 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18330, (Optr)&t_send_ifTrue_, (Optr)PSend18331, (Optr)PBlock18332, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18335, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_position, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_send1, (Optr)PSend18336, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_end, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_current, (Optr)&t_send1, (Optr)PSend18337, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18327 = new_Block_with(PArray18328, empty_Array, PThreadedCode18329, 5, PSend18331, PAssign18335, PSend18336, PSend18337, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18338 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18327);
    Array PThreadedCode18326 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18327, (Optr)&t_send1, (Optr)PSend18338, (Optr)&t_method_return);
    Method PMethod18325 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18326, 1, PSend18338);
    
    MethodClosure MC_SMB_truncate = new_MethodClosure((Method)PMethod18325, Shell_ReadLine_DoubleLinkedList_Class);
    store_method(Shell_ReadLine_DoubleLinkedList_Class, SMB_truncate, MC_SMB_truncate);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_elementBlock_0_0 = new_Variable_named(L"elementBlock", 0);
    Variable VAR_separatorBlock_0_1 = new_Variable_named(L"separatorBlock", 0);
    Array PArray18340 = new_Array_with(2, (Optr)VAR_elementBlock_0_0, (Optr)VAR_separatorBlock_0_1);
    Variable VAR_link_0_2 = new_Variable_named(L"link", 0);
    Array PArray18341 = new_Array_with(1, (Optr)VAR_link_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18344 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18346 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18350 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18349 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18350, (Optr)&t_block_return);
    Block PBlock18348 = new_Block_with(empty_Array, empty_Array, PThreadedCode18349, 1, PSend18350);
    // ifTrue:. 
    Send PSend18347 = new_Send((Optr)PSend18346, SMB_ifTrue_, 1, (Optr)PBlock18348);
    Assign PAssign18351 = new_Assign((Optr)VAR_link_0_2, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18352 = new_Send((Optr)slot_Shell_ReadLine_DoubleLinkedList_size, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18356 = new_Send((Optr)VAR_link_0_2, SMB_next, 0);
    Assign PAssign18355 = new_Assign((Optr)VAR_link_0_2, (Optr)PSend18356);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18357 = new_Send((Optr)PAssign18355, SMB_value, 0);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend18358 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend18357);
    // value. 
    Send PSend18359 = new_Send((Optr)VAR_separatorBlock_0_1, SMB_value, 0);
    Array PThreadedCode18354 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push1, (Optr)PAssign18355, (Optr)&t_push_variable, (Optr)VAR_link_0_2, (Optr)&t_send0, (Optr)PSend18356, (Optr)&t_assign, (Optr)&t_send0, (Optr)PSend18357, (Optr)&t_send1, (Optr)PSend18358, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_separatorBlock_0_1, (Optr)&t_send0, (Optr)PSend18359, (Optr)&t_block_return);
    Block PBlock18353 = new_Block_with(empty_Array, empty_Array, PThreadedCode18354, 2, PSend18358, PSend18359);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18360 = new_Send((Optr)PSend18352, SMB_timesRepeat_, 1, (Optr)PBlock18353);
    // next. 
    Send PSend18361 = new_Send((Optr)VAR_link_0_2, SMB_next, 0);
    // value. 
    Send PSend18362 = new_Send((Optr)PSend18361, SMB_value, 0);
    // value:. 
    Send PSend18363 = new_Send((Optr)VAR_elementBlock_0_0, SMB_value_, 1, (Optr)PSend18362);
    Array PThreadedCode18345 = instantiate_Array_with(ThreadedCode_Class, 0, 37, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18346, (Optr)&t_send_ifTrue_, (Optr)PSend18347, (Optr)PBlock18348, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18351, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_start, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_DoubleLinkedList_size, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18352, (Optr)&t_push_closure, (Optr)PBlock18353, (Optr)&t_send1, (Optr)PSend18360, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_elementBlock_0_0, (Optr)&t_push_variable, (Optr)VAR_link_0_2, (Optr)&t_send0, (Optr)PSend18361, (Optr)&t_send0, (Optr)PSend18362, (Optr)&t_send1, (Optr)PSend18363, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18343 = new_Block_with(PArray18344, empty_Array, PThreadedCode18345, 5, PSend18347, PAssign18351, PSend18360, PSend18363, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18364 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18343);
    Array PThreadedCode18342 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18343, (Optr)&t_send1, (Optr)PSend18364, (Optr)&t_method_return);
    Method PMethod18339 = new_Method_with(PArray18340, PArray18341, empty_Array, PThreadedCode18342, 1, PSend18364);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod18339, Shell_ReadLine_DoubleLinkedList_Class);
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