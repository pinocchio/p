#include <lib/class/Shell/ReadLine/ReadLine.h>


Optr layout_Shell_ReadLine_ReadLine_Class_class;
Optr slot_Shell_ReadLine_ReadLine_client;
Optr slot_Shell_ReadLine_ReadLine_output;
Optr slot_Shell_ReadLine_ReadLine_ready;
Optr slot_Shell_ReadLine_ReadLine_text;
Optr slot_Shell_ReadLine_ReadLine_failure;
Optr slot_Shell_ReadLine_ReadLine_vterm;
Optr layout_Shell_ReadLine_ReadLine;


static void init_SMB_f9() {
    Symbol SMB_f9 = new_Symbol(L"f9");
    Array PThreadedCode17493 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17492 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17493, 1, self);
    
    MethodClosure MC_SMB_f9 = new_MethodClosure((Method)PMethod17492, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f9, MC_SMB_f9);
}


static void init_SMB_right_() {
    Symbol SMB_right_ = new_Symbol(L"right:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17495 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17497 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17501 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17504 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17503 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17504, (Optr)&t_block_return);
    Block PBlock17502 = new_Block_with(empty_Array, empty_Array, PThreadedCode17503, 1, PSend17504);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17505 = new_Send((Optr)PSend17501, SMB_timesRepeat_, 1, (Optr)PBlock17502);
    Array PThreadedCode17500 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17501, (Optr)&t_push_closure, (Optr)PBlock17502, (Optr)&t_send1, (Optr)PSend17505, (Optr)&t_block_return);
    Block PBlock17499 = new_Block_with(empty_Array, empty_Array, PThreadedCode17500, 1, PSend17505);
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17510 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17509 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17510, (Optr)&t_block_return);
    Block PBlock17508 = new_Block_with(empty_Array, empty_Array, PThreadedCode17509, 1, PSend17510);
    // timesRepeat:. 
    Send PSend17511 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17508);
    Array PThreadedCode17507 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17508, (Optr)&t_send1, (Optr)PSend17511, (Optr)&t_block_return);
    Block PBlock17506 = new_Block_with(empty_Array, empty_Array, PThreadedCode17507, 1, PSend17511);
    // ifTrue:ifFalse:. 
    Send PSend17498 = new_Send((Optr)PSend17497, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17499, (Optr)PBlock17506);
    Array PThreadedCode17496 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17497, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17498, (Optr)PBlock17499, (Optr)PBlock17506, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17494 = new_Method_with(PArray17495, empty_Array, empty_Array, PThreadedCode17496, 2, PSend17498, self);
    
    MethodClosure MC_SMB_right_ = new_MethodClosure((Method)PMethod17494, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right_, MC_SMB_right_);
}


static void init_SMB_f4() {
    Symbol SMB_f4 = new_Symbol(L"f4");
    Array PThreadedCode17513 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17512 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17513, 1, self);
    
    MethodClosure MC_SMB_f4 = new_MethodClosure((Method)PMethod17512, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f4, MC_SMB_f4);
}


static void init_SMB_endOfTransmission() {
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    Array PThreadedCode17515 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17514 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17515, 1, self);
    
    MethodClosure MC_SMB_endOfTransmission = new_MethodClosure((Method)PMethod17514, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfTransmission, MC_SMB_endOfTransmission);
}


static void init_SMB_up_() {
    Symbol SMB_up_ = new_Symbol(L"up:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17517 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17519 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17523 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17526 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17525 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17526, (Optr)&t_block_return);
    Block PBlock17524 = new_Block_with(empty_Array, empty_Array, PThreadedCode17525, 1, PSend17526);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17527 = new_Send((Optr)PSend17523, SMB_timesRepeat_, 1, (Optr)PBlock17524);
    Array PThreadedCode17522 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17523, (Optr)&t_push_closure, (Optr)PBlock17524, (Optr)&t_send1, (Optr)PSend17527, (Optr)&t_block_return);
    Block PBlock17521 = new_Block_with(empty_Array, empty_Array, PThreadedCode17522, 1, PSend17527);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17532 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17531 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17532, (Optr)&t_block_return);
    Block PBlock17530 = new_Block_with(empty_Array, empty_Array, PThreadedCode17531, 1, PSend17532);
    // timesRepeat:. 
    Send PSend17533 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17530);
    Array PThreadedCode17529 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17530, (Optr)&t_send1, (Optr)PSend17533, (Optr)&t_block_return);
    Block PBlock17528 = new_Block_with(empty_Array, empty_Array, PThreadedCode17529, 1, PSend17533);
    // ifTrue:ifFalse:. 
    Send PSend17520 = new_Send((Optr)PSend17519, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17521, (Optr)PBlock17528);
    Array PThreadedCode17518 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17519, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17520, (Optr)PBlock17521, (Optr)PBlock17528, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17516 = new_Method_with(PArray17517, empty_Array, empty_Array, PThreadedCode17518, 2, PSend17520, self);
    
    MethodClosure MC_SMB_up_ = new_MethodClosure((Method)PMethod17516, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up_, MC_SMB_up_);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Array PThreadedCode17535 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17534 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17535, 1, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod17534, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend17538 = new_Send((Optr)self, SMB_startOfHeading, 0);
    Array PThreadedCode17537 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17538, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17536 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17537, 2, PSend17538, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod17536, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_f13() {
    Symbol SMB_f13 = new_Symbol(L"f13");
    Array PThreadedCode17540 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17539 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17540, 1, self);
    
    MethodClosure MC_SMB_f13 = new_MethodClosure((Method)PMethod17539, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f13, MC_SMB_f13);
}


static void init_SMB_f2() {
    Symbol SMB_f2 = new_Symbol(L"f2");
    Array PThreadedCode17542 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17541 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17542, 1, self);
    
    MethodClosure MC_SMB_f2 = new_MethodClosure((Method)PMethod17541, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f2, MC_SMB_f2);
}


static void init_SMB_nextScreen() {
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend17545 = new_Send((Optr)self, SMB_endOfText, 0);
    Array PThreadedCode17544 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17545, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17543 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17544, 2, PSend17545, self);
    
    MethodClosure MC_SMB_nextScreen = new_MethodClosure((Method)PMethod17543, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_nextScreen, MC_SMB_nextScreen);
}


static void init_SMB_f3() {
    Symbol SMB_f3 = new_Symbol(L"f3");
    Array PThreadedCode17547 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17546 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17547, 1, self);
    
    MethodClosure MC_SMB_f3 = new_MethodClosure((Method)PMethod17546, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f3, MC_SMB_f3);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend17550 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteToEndOfLine, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    // clearToEnd. 
    Send PSend17554 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_clearToEnd, 0);
    Array PThreadedCode17553 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17554, (Optr)&t_block_return);
    Block PBlock17552 = new_Block_with(empty_Array, empty_Array, PThreadedCode17553, 1, PSend17554);
    // ifTrue:. 
    Send PSend17551 = new_Send((Optr)PSend17550, SMB_ifTrue_, 1, (Optr)PBlock17552);
    Array PThreadedCode17549 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17550, (Optr)&t_send_ifTrue_, (Optr)PSend17551, (Optr)PBlock17552, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17548 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17549, 2, PSend17551, self);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17548, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_f10() {
    Symbol SMB_f10 = new_Symbol(L"f10");
    Array PThreadedCode17556 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17555 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17556, 1, self);
    
    MethodClosure MC_SMB_f10 = new_MethodClosure((Method)PMethod17555, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f10, MC_SMB_f10);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17559 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17558 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17557 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17558, 2, PSend17559, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17557, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17561 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17564 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17563 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17564);
    // down. 
    Send PSend17565 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_down, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17569 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // down. 
    Send PSend17570 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    // column. 
    Send PSend17571 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17572 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17571);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17575 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17574 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17575, (Optr)&t_block_return);
    Block PBlock17573 = new_Block_with(empty_Array, empty_Array, PThreadedCode17574, 1, PSend17575);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17576 = new_Send((Optr)PSend17572, SMB_timesRepeat_, 1, (Optr)PBlock17573);
    Array PThreadedCode17568 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17569, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17570, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17571, (Optr)&t_send1, (Optr)PSend17572, (Optr)&t_push_closure, (Optr)PBlock17573, (Optr)&t_send1, (Optr)PSend17576, (Optr)&t_block_return);
    Block PBlock17567 = new_Block_with(empty_Array, empty_Array, PThreadedCode17568, 3, PSend17569, PSend17570, PSend17576);
    // ifTrue:. 
    Send PSend17566 = new_Send((Optr)PSend17565, SMB_ifTrue_, 1, (Optr)PBlock17567);
    Array PThreadedCode17562 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17563, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17564, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17565, (Optr)&t_send_ifTrue_, (Optr)PSend17566, (Optr)PBlock17567, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17560 = new_Method_with(empty_Array, PArray17561, empty_Array, PThreadedCode17562, 3, PAssign17563, PSend17566, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17560, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17579 = new_Send((Optr)self, SMB_backspace, 0);
    Array PThreadedCode17578 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17579, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17578, 2, PSend17579, self);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod17577, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_bell() {
    Symbol SMB_bell = new_Symbol(L"bell");
    Array PThreadedCode17581 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17581, 1, self);
    
    MethodClosure MC_SMB_bell = new_MethodClosure((Method)PMethod17580, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_bell, MC_SMB_bell);
}


static void init_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17584 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteLeft, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17588 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_backspace, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend17589 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17590 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17587 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17588, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17589, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17590, (Optr)&t_block_return);
    Block PBlock17586 = new_Block_with(empty_Array, empty_Array, PThreadedCode17587, 3, PSend17588, PSend17589, PSend17590);
    // ifTrue:. 
    Send PSend17585 = new_Send((Optr)PSend17584, SMB_ifTrue_, 1, (Optr)PBlock17586);
    Array PThreadedCode17583 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17584, (Optr)&t_send_ifTrue_, (Optr)PSend17585, (Optr)PBlock17586, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17583, 2, PSend17585, self);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod17582, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_delete, MC_SMB_delete);
}


static void init_SMB_shiftIn() {
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    Array PThreadedCode17592 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17591 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17592, 1, self);
    
    MethodClosure MC_SMB_shiftIn = new_MethodClosure((Method)PMethod17591, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftIn, MC_SMB_shiftIn);
}


static void init_SMB_openLine() {
    Symbol SMB_openLine = new_Symbol(L"openLine");
    Variable VAR_offset_0_0 = new_Variable_named(L"offset", 0);
    Array PArray17594 = new_Array_with(1, (Optr)VAR_offset_0_0);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17597 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Assign PAssign17596 = new_Assign((Optr)VAR_offset_0_0, (Optr)PSend17597);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17600 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17599 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17600, (Optr)&t_block_return);
    Block PBlock17598 = new_Block_with(empty_Array, empty_Array, PThreadedCode17599, 1, PSend17600);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17601 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17598);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17602 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17605 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17604 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17605, (Optr)&t_block_return);
    Block PBlock17603 = new_Block_with(empty_Array, empty_Array, PThreadedCode17604, 1, PSend17605);
    // timesRepeat:. 
    Send PSend17606 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17603);
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    // insertLine. 
    Send PSend17607 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_insertLine, 0);
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    // continueLine. 
    Send PSend17608 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_continueLine, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17609 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_addLine, 0);
    Array PThreadedCode17595 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign17596, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17597, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17598, (Optr)&t_send1, (Optr)PSend17601, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17602, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17603, (Optr)&t_send1, (Optr)PSend17606, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17607, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_send0, (Optr)PSend17608, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17609, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17593 = new_Method_with(empty_Array, PArray17594, empty_Array, PThreadedCode17595, 8, PAssign17596, PSend17601, PSend17602, PSend17606, PSend17607, PSend17608, PSend17609, self);
    
    MethodClosure MC_SMB_openLine = new_MethodClosure((Method)PMethod17593, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_openLine, MC_SMB_openLine);
}


static void init_SMB_moveFailure_() {
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Variable VAR_direction_0_0 = new_Variable_named(L"direction", 0);
    Array PArray17611 = new_Array_with(1, (Optr)VAR_direction_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend17615 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    // onLineBefore:. 
    Send PSend17616 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_onLineBefore_, 1, (Optr)PSend17615);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // +. 
    Send PSend17621 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Assign PAssign17620 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17621);
    Array PThreadedCode17619 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign17620, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17621, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17618 = new_Block_with(empty_Array, empty_Array, PThreadedCode17619, 1, PAssign17620);
    // ifTrue:. 
    Send PSend17617 = new_Send((Optr)PSend17616, SMB_ifTrue_, 1, (Optr)PBlock17618);
    Array PThreadedCode17614 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17615, (Optr)&t_send1, (Optr)PSend17616, (Optr)&t_send_ifTrue_, (Optr)PSend17617, (Optr)PBlock17618, (Optr)&t_block_return);
    Block PBlock17613 = new_Block_with(empty_Array, empty_Array, PThreadedCode17614, 1, PSend17617);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17622 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17613);
    Array PThreadedCode17612 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17613, (Optr)&t_send1, (Optr)PSend17622, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17610 = new_Method_with(PArray17611, empty_Array, empty_Array, PThreadedCode17612, 2, PSend17622, self);
    
    MethodClosure MC_SMB_moveFailure_ = new_MethodClosure((Method)PMethod17610, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveFailure_, MC_SMB_moveFailure_);
}


static void init_SMB_f14() {
    Symbol SMB_f14 = new_Symbol(L"f14");
    Array PThreadedCode17624 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17624, 1, self);
    
    MethodClosure MC_SMB_f14 = new_MethodClosure((Method)PMethod17623, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f14, MC_SMB_f14);
}


static void init_SMB_f17() {
    Symbol SMB_f17 = new_Symbol(L"f17");
    Array PThreadedCode17626 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17626, 1, self);
    
    MethodClosure MC_SMB_f17 = new_MethodClosure((Method)PMethod17625, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f17, MC_SMB_f17);
}


static void init_SMB_from_to_for_() {
    /*
    from: input to: output for: client
// 	^ super basicNew
// 		from: input
// 		to: output
// 		for: client
    */
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_in_0_0 = new_Variable_named(L"in", 0);
    Variable VAR_out_0_1 = new_Variable_named(L"out", 0);
    Variable VAR_c_0_2 = new_Variable_named(L"c", 0);
    Array PArray17628 = new_Array_with(3, (Optr)VAR_in_0_0, (Optr)VAR_out_0_1, (Optr)VAR_c_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17631 = new_Send((Optr)PHistoryText_classReference, SMB_new, 0);
    Assign PAssign17630 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)PSend17631);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17635 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend17637 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)VAR_in_0_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend17638 = new_Send((Optr)VAR__receiver__1_0, SMB_handler_, 1, (Optr)self);
    Array PThreadedCode17636 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_in_0_0, (Optr)&t_send1, (Optr)PSend17637, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17638, (Optr)&t_method_return);
    Block PBlock17634 = new_Block_with(PArray17635, empty_Array, PThreadedCode17636, 2, PSend17637, PSend17638);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend17639 = new_Send((Optr)PVTermInputDriver_classReference, SMB_new, 0);
    // value:. 
    Send PSend17633 = new_Send((Optr)PBlock17634, SMB_value_, 1, (Optr)PSend17639);
    Assign PAssign17632 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)PSend17633);
    Assign PAssign17640 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)VAR_out_0_1);
    Assign PAssign17641 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)VAR_c_0_2);
    Array PThreadedCode17629 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign17630, (Optr)&t_push_class_reference, (Optr)PHistoryText_classReference, (Optr)&t_send0, (Optr)PSend17631, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17632, (Optr)&t_push_closure, (Optr)PBlock17634, (Optr)&t_push_class_reference, (Optr)PVTermInputDriver_classReference, (Optr)&t_send0, (Optr)PSend17639, (Optr)&t_send1, (Optr)PSend17633, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17640, (Optr)&t_push_variable, (Optr)VAR_out_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17641, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17627 = new_Method_with(PArray17628, empty_Array, empty_Array, PThreadedCode17629, 5, PAssign17630, PAssign17632, PAssign17640, PAssign17641, self);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17627, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_from_to_for_, MC_SMB_from_to_for_);
}


static void init_SMB_f12() {
    Symbol SMB_f12 = new_Symbol(L"f12");
    Array PThreadedCode17643 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17642 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17643, 1, self);
    
    MethodClosure MC_SMB_f12 = new_MethodClosure((Method)PMethod17642, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f12, MC_SMB_f12);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17645 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17647 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_add_, 1, (Optr)VAR_character_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17648 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB__shiftLeft_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // moveFailure:. 
    Send PSend17649 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17650 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17646 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17647, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17648, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17649, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17650, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17644 = new_Method_with(PArray17645, empty_Array, empty_Array, PThreadedCode17646, 5, PSend17647, PSend17648, PSend17649, PSend17650, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod17644, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_f18() {
    Symbol SMB_f18 = new_Symbol(L"f18");
    Array PThreadedCode17652 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17651 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17652, 1, self);
    
    MethodClosure MC_SMB_f18 = new_MethodClosure((Method)PMethod17651, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f18, MC_SMB_f18);
}


static void init_SMB_f5() {
    Symbol SMB_f5 = new_Symbol(L"f5");
    Array PThreadedCode17654 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17653 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17654, 1, self);
    
    MethodClosure MC_SMB_f5 = new_MethodClosure((Method)PMethod17653, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f5, MC_SMB_f5);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17657 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_left, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // left. 
    Send PSend17661 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17660 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17661, (Optr)&t_block_return);
    Block PBlock17659 = new_Block_with(empty_Array, empty_Array, PThreadedCode17660, 1, PSend17661);
    // ifTrue:. 
    Send PSend17658 = new_Send((Optr)PSend17657, SMB_ifTrue_, 1, (Optr)PBlock17659);
    Array PThreadedCode17656 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17657, (Optr)&t_send_ifTrue_, (Optr)PSend17658, (Optr)PBlock17659, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17655 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17656, 2, PSend17658, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17655, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_carriageReturn() {
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17664 = new_Send((Optr)self, SMB_lf, 0);
    Array PThreadedCode17663 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17664, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17663, 2, PSend17664, self);
    
    MethodClosure MC_SMB_carriageReturn = new_MethodClosure((Method)PMethod17662, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_carriageReturn, MC_SMB_carriageReturn);
}


static void init_SMB_moveToLine_column_() {
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    Variable VAR_line_0_0 = new_Variable_named(L"line", 0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Array PArray17666 = new_Array_with(2, (Optr)VAR_line_0_0, (Optr)VAR_col_0_1);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17668 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17669 = new_Send((Optr)VAR_col_0_1, SMB__minus_, 1, (Optr)PSend17668);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17670 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17669);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17671 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17672 = new_Send((Optr)PSend17671, SMB__minus_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17673 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17672);
    Symbol SMB_line_ = new_Symbol(L"line:");
    // line:. 
    Send PSend17674 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17675 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_1);
    Array PThreadedCode17667 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17668, (Optr)&t_send1, (Optr)PSend17669, (Optr)&t_send1, (Optr)PSend17670, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17671, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17672, (Optr)&t_send1, (Optr)PSend17673, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17674, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17675, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17665 = new_Method_with(PArray17666, empty_Array, empty_Array, PThreadedCode17667, 5, PSend17670, PSend17673, PSend17674, PSend17675, self);
    
    MethodClosure MC_SMB_moveToLine_column_ = new_MethodClosure((Method)PMethod17665, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveToLine_column_, MC_SMB_moveToLine_column_);
}


static void init_SMB_isReady() {
    Symbol SMB_isReady = new_Symbol(L"isReady");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17678 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    // isReady:. 
    Send PSend17679 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_isReady_, 1, (Optr)PSend17678);
    Array PThreadedCode17677 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17678, (Optr)&t_send1, (Optr)PSend17679, (Optr)&t_method_return);
    Method PMethod17676 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17677, 1, PSend17679);
    
    MethodClosure MC_SMB_isReady = new_MethodClosure((Method)PMethod17676, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_isReady, MC_SMB_isReady);
}


static void init_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
    Array PThreadedCode17681 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17680 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17681, 1, self);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod17680, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_insert, MC_SMB_insert);
}


static void init_SMB_f7() {
    Symbol SMB_f7 = new_Symbol(L"f7");
    Array PThreadedCode17683 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17682 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17683, 1, self);
    
    MethodClosure MC_SMB_f7 = new_MethodClosure((Method)PMethod17682, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f7, MC_SMB_f7);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17686 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_right, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // right. 
    Send PSend17690 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17689 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17690, (Optr)&t_block_return);
    Block PBlock17688 = new_Block_with(empty_Array, empty_Array, PThreadedCode17689, 1, PSend17690);
    // ifTrue:. 
    Send PSend17687 = new_Send((Optr)PSend17686, SMB_ifTrue_, 1, (Optr)PBlock17688);
    Array PThreadedCode17685 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17686, (Optr)&t_send_ifTrue_, (Optr)PSend17687, (Optr)PBlock17688, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17684 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17685, 2, PSend17687, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17684, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_startOfText() {
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // moveToLine:column:. 
    Send PSend17693 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)int_1_Const, (Optr)int_0_Const);
    Array PThreadedCode17692 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend17693, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17691 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17692, 2, PSend17693, self);
    
    MethodClosure MC_SMB_startOfText = new_MethodClosure((Method)PMethod17691, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfText, MC_SMB_startOfText);
}


static void init_SMB_f1() {
    Symbol SMB_f1 = new_Symbol(L"f1");
    Array PThreadedCode17695 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17695, 1, self);
    
    MethodClosure MC_SMB_f1 = new_MethodClosure((Method)PMethod17694, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f1, MC_SMB_f1);
}


static void init_SMB_f15() {
    Symbol SMB_f15 = new_Symbol(L"f15");
    Array PThreadedCode17697 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17696 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17697, 1, self);
    
    MethodClosure MC_SMB_f15 = new_MethodClosure((Method)PMethod17696, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f15, MC_SMB_f15);
}


static void init_SMB_formfeed() {
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    Array PThreadedCode17699 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17698 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17699, 1, self);
    
    MethodClosure MC_SMB_formfeed = new_MethodClosure((Method)PMethod17698, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_formfeed, MC_SMB_formfeed);
}


static void init_SMB_enquiry() {
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17702 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17701 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17702, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17700 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17701, 2, PSend17702, self);
    
    MethodClosure MC_SMB_enquiry = new_MethodClosure((Method)PMethod17700, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_enquiry, MC_SMB_enquiry);
}


static void init_SMB_startOfHeading() {
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17704 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17707 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17706 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17707);
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    // startOfLine. 
    Send PSend17708 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_startOfLine, 0);
    // column. 
    Send PSend17709 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17710 = new_Send((Optr)PSend17709, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17711 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17710);
    Array PThreadedCode17705 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17706, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17707, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17708, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17709, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17710, (Optr)&t_send1, (Optr)PSend17711, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17703 = new_Method_with(empty_Array, PArray17704, empty_Array, PThreadedCode17705, 4, PAssign17706, PSend17708, PSend17711, self);
    
    MethodClosure MC_SMB_startOfHeading = new_MethodClosure((Method)PMethod17703, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfHeading, MC_SMB_startOfHeading);
}


static void init_SMB_f20() {
    Symbol SMB_f20 = new_Symbol(L"f20");
    Array PThreadedCode17713 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17712 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17713, 1, self);
    
    MethodClosure MC_SMB_f20 = new_MethodClosure((Method)PMethod17712, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f20, MC_SMB_f20);
}


static void init_SMB_repaint() {
    Symbol SMB_repaint = new_Symbol(L"repaint");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_1 = new_Variable_named(L"line", 0);
    Array PArray17715 = new_Array_with(2, (Optr)VAR_col_0_0, (Optr)VAR_line_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17718 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    // parsesUntil. 
    Send PSend17720 = new_Send((Optr)self, SMB_parsesUntil, 0);
    Variable VAR_newpos_2_0 = new_Variable_named(L"newpos", 2);
    Array PArray17722 = new_Array_with(1, (Optr)VAR_newpos_2_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17725 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17724 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17725);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17727 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17726 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17727);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend17730 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend17731 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__equals_, 1, (Optr)PSend17730);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17735 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17734 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17735, (Optr)&t_block_return);
    Block PBlock17733 = new_Block_with(empty_Array, empty_Array, PThreadedCode17734, 1, PSend17735);
    // ifTrue:. 
    Send PSend17732 = new_Send((Optr)PSend17731, SMB_ifTrue_, 1, (Optr)PBlock17733);
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    // repaintAt:. 
    Send PSend17736 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Array PThreadedCode17729 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17730, (Optr)&t_send1, (Optr)PSend17731, (Optr)&t_send_ifTrue_, (Optr)PSend17732, (Optr)PBlock17733, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17736, (Optr)&t_block_return);
    Block PBlock17728 = new_Block_with(empty_Array, empty_Array, PThreadedCode17729, 2, PSend17732, PSend17736);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17737 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17728);
    // +. 
    Send PSend17739 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17738 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17739);
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    // errorColor. 
    Send PSend17740 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_errorColor, 0);
    // repaintAt:. 
    Send PSend17741 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend17742 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend17743 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_normal, 0);
    // escape:. 
    Send PSend17744 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17743);
    Array PThreadedCode17723 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign17724, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17725, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17726, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17727, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17728, (Optr)&t_send1, (Optr)PSend17737, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17738, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17739, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17740, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17741, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17742, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17743, (Optr)&t_send1, (Optr)PSend17744, (Optr)&t_method_return);
    Block PBlock17721 = new_Block_with(PArray17722, empty_Array, PThreadedCode17723, 8, PAssign17724, PAssign17726, PSend17737, PAssign17738, PSend17740, PSend17741, PSend17742, PSend17744);
    // ifNotNil:. 
    Send PSend17745 = new_Send((Optr)PSend17720, SMB_ifNotNil_, 1, (Optr)PBlock17721);
    // column. 
    Send PSend17749 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17748 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17749);
    // line. 
    Send PSend17751 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17750 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17751);
    // repaintAt:. 
    Send PSend17752 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    // moveToLine:column:. 
    Send PSend17753 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Array PThreadedCode17747 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign17748, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17749, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17750, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17751, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17752, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17753, (Optr)&t_block_return);
    Block PBlock17746 = new_Block_with(empty_Array, empty_Array, PThreadedCode17747, 4, PAssign17748, PAssign17750, PSend17752, PSend17753);
    // ifNotNil:. 
    Send PSend17754 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17746);
    Assign PAssign17755 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17719 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17720, (Optr)&t_push_closure, (Optr)PBlock17721, (Optr)&t_send1, (Optr)PSend17745, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17746, (Optr)&t_send1, (Optr)PSend17754, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17755, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17717 = new_Block_with(PArray17718, empty_Array, PThreadedCode17719, 4, PSend17745, PSend17754, PAssign17755, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17756 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17717);
    Array PThreadedCode17716 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17717, (Optr)&t_send1, (Optr)PSend17756, (Optr)&t_method_return);
    Method PMethod17714 = new_Method_with(empty_Array, PArray17715, empty_Array, PThreadedCode17716, 1, PSend17756);
    
    MethodClosure MC_SMB_repaint = new_MethodClosure((Method)PMethod17714, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaint, MC_SMB_repaint);
}


static void init_SMB_f6() {
    Symbol SMB_f6 = new_Symbol(L"f6");
    Array PThreadedCode17758 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17757 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17758, 1, self);
    
    MethodClosure MC_SMB_f6 = new_MethodClosure((Method)PMethod17757, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f6, MC_SMB_f6);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17760 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17763 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17762 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17763);
    // endOfLine. 
    Send PSend17764 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_endOfLine, 0);
    // column. 
    Send PSend17765 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17766 = new_Send((Optr)PSend17765, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17767 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17766);
    Array PThreadedCode17761 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17762, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17763, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17764, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17765, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17766, (Optr)&t_send1, (Optr)PSend17767, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17759 = new_Method_with(empty_Array, PArray17760, empty_Array, PThreadedCode17761, 4, PAssign17762, PSend17764, PSend17767, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17759, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    Array PThreadedCode17769 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17768 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17769, 1, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod17768, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_shiftOut() {
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    Array PThreadedCode17771 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17770 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17771, 1, self);
    
    MethodClosure MC_SMB_shiftOut = new_MethodClosure((Method)PMethod17770, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftOut, MC_SMB_shiftOut);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Assign PAssign17774 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)false_Const);
    // clear. 
    Send PSend17775 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_clear, 0);
    Assign PAssign17776 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17773 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign17774, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17775, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17776, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17772 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17773, 4, PAssign17774, PSend17775, PAssign17776, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17772, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17779 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode17781 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)&t_block_return);
    Block PBlock17780 = new_Block_with(empty_Array, empty_Array, PThreadedCode17781, 1, slot_Shell_ReadLine_ReadLine_ready);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend17784 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_vterm, SMB_read, 0);
    Array PThreadedCode17783 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)&t_send0, (Optr)PSend17784, (Optr)&t_block_return);
    Block PBlock17782 = new_Block_with(empty_Array, empty_Array, PThreadedCode17783, 1, PSend17784);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend17785 = new_Send((Optr)PBlock17780, SMB_whileFalse_, 1, (Optr)PBlock17782);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17786 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Array PThreadedCode17778 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17779, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17780, (Optr)&t_push_closure, (Optr)PBlock17782, (Optr)&t_send1, (Optr)PSend17785, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17786, (Optr)&t_method_return);
    Method PMethod17777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17778, 3, PSend17779, PSend17785, PSend17786);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PMethod17777, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17790 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isReady = new_Symbol(L"isReady");
    // isReady. 
    Send PSend17792 = new_Send((Optr)self, SMB_isReady, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ready = new_Symbol(L"ready");
    // ready. 
    Send PSend17796 = new_Send((Optr)self, SMB_ready, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17797 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17796);
    Array PThreadedCode17795 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17796, (Optr)&t_send1, (Optr)PSend17797, (Optr)&t_block_return);
    Block PBlock17794 = new_Block_with(empty_Array, empty_Array, PThreadedCode17795, 1, PSend17797);
    // ifTrue:. 
    Send PSend17793 = new_Send((Optr)PSend17792, SMB_ifTrue_, 1, (Optr)PBlock17794);
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend17798 = new_Send((Optr)self, SMB_openLine, 0);
    Array PThreadedCode17791 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17792, (Optr)&t_send_ifTrue_, (Optr)PSend17793, (Optr)PBlock17794, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17798, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17789 = new_Block_with(PArray17790, empty_Array, PThreadedCode17791, 3, PSend17793, PSend17798, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17799 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17789);
    Array PThreadedCode17788 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17789, (Optr)&t_send1, (Optr)PSend17799, (Optr)&t_method_return);
    Method PMethod17787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17788, 1, PSend17799);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod17787, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_repaintAt_() {
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17801 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_2 = new_Variable_named(L"line", 0);
    Array PArray17802 = new_Array_with(2, (Optr)VAR_col_0_1, (Optr)VAR_line_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17805 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17808 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17807 = new_Assign((Optr)VAR_col_0_1, (Optr)PSend17808);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17810 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17809 = new_Assign((Optr)VAR_line_0_2, (Optr)PSend17810);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17811 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_position_, 1, (Optr)VAR_position_0_0);
    // column. 
    Send PSend17812 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17813 = new_Send((Optr)PSend17812, SMB__minus_, 1, (Optr)VAR_col_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17814 = new_Send((Optr)PSend17813, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17815 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17814);
    // line. 
    Send PSend17816 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17817 = new_Send((Optr)VAR_line_0_2, SMB__minus_, 1, (Optr)PSend17816);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17818 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17817);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17819 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentLine, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17820 = new_Send((Optr)PSend17819, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17821 = new_Send((Optr)PSend17820, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17825 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17826 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17824 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17825, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17826, (Optr)&t_block_return);
    Block PBlock17823 = new_Block_with(empty_Array, empty_Array, PThreadedCode17824, 2, PSend17825, PSend17826);
    // ifTrue:. 
    Send PSend17822 = new_Send((Optr)PSend17821, SMB_ifTrue_, 1, (Optr)PBlock17823);
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    // currentCharacter. 
    Send PSend17827 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentCharacter, 0);
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    // overwrite:. 
    Send PSend17828 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_overwrite_, 1, (Optr)PSend17827);
    Array PThreadedCode17806 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push1, (Optr)PAssign17807, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17808, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17809, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17810, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_send1, (Optr)PSend17811, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17812, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17813, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17814, (Optr)&t_send1, (Optr)PSend17815, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_2, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17816, (Optr)&t_send1, (Optr)PSend17817, (Optr)&t_send1, (Optr)PSend17818, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17819, (Optr)&t_send0, (Optr)PSend17820, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17821, (Optr)&t_send_ifTrue_, (Optr)PSend17822, (Optr)PBlock17823, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17827, (Optr)&t_send1, (Optr)PSend17828, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17804 = new_Block_with(PArray17805, empty_Array, PThreadedCode17806, 8, PAssign17807, PAssign17809, PSend17811, PSend17815, PSend17818, PSend17822, PSend17828, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17829 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17804);
    Array PThreadedCode17803 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17804, (Optr)&t_send1, (Optr)PSend17829, (Optr)&t_method_return);
    Method PMethod17800 = new_Method_with(PArray17801, PArray17802, empty_Array, PThreadedCode17803, 1, PSend17829);
    
    MethodClosure MC_SMB_repaintAt_ = new_MethodClosure((Method)PMethod17800, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaintAt_, MC_SMB_repaintAt_);
}


static void init_SMB_f16() {
    Symbol SMB_f16 = new_Symbol(L"f16");
    Array PThreadedCode17831 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17830 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17831, 1, self);
    
    MethodClosure MC_SMB_f16 = new_MethodClosure((Method)PMethod17830, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f16, MC_SMB_f16);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17833 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17836 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17835 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17836);
    // up. 
    Send PSend17837 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_up, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17841 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // up. 
    Send PSend17842 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    // column. 
    Send PSend17843 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17844 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17843);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17847 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17846 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17847, (Optr)&t_block_return);
    Block PBlock17845 = new_Block_with(empty_Array, empty_Array, PThreadedCode17846, 1, PSend17847);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17848 = new_Send((Optr)PSend17844, SMB_timesRepeat_, 1, (Optr)PBlock17845);
    Array PThreadedCode17840 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17841, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17842, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17843, (Optr)&t_send1, (Optr)PSend17844, (Optr)&t_push_closure, (Optr)PBlock17845, (Optr)&t_send1, (Optr)PSend17848, (Optr)&t_block_return);
    Block PBlock17839 = new_Block_with(empty_Array, empty_Array, PThreadedCode17840, 3, PSend17841, PSend17842, PSend17848);
    // ifTrue:. 
    Send PSend17838 = new_Send((Optr)PSend17837, SMB_ifTrue_, 1, (Optr)PBlock17839);
    Array PThreadedCode17834 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17835, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17836, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17837, (Optr)&t_send_ifTrue_, (Optr)PSend17838, (Optr)PBlock17839, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17832 = new_Method_with(empty_Array, PArray17833, empty_Array, PThreadedCode17834, 3, PAssign17835, PSend17838, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17832, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_parsesUntil() {
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17851 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    // parsesUntil:. 
    Send PSend17852 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_parsesUntil_, 1, (Optr)PSend17851);
    Array PThreadedCode17850 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17851, (Optr)&t_send1, (Optr)PSend17852, (Optr)&t_method_return);
    Method PMethod17849 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17850, 1, PSend17852);
    
    MethodClosure MC_SMB_parsesUntil = new_MethodClosure((Method)PMethod17849, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_parsesUntil, MC_SMB_parsesUntil);
}


static void init_SMB_acknowledge() {
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    Array PThreadedCode17854 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17854, 1, self);
    
    MethodClosure MC_SMB_acknowledge = new_MethodClosure((Method)PMethod17853, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_acknowledge, MC_SMB_acknowledge);
}


static void init_SMB_previousScreen() {
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend17857 = new_Send((Optr)self, SMB_startOfText, 0);
    Array PThreadedCode17856 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17857, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17856, 2, PSend17857, self);
    
    MethodClosure MC_SMB_previousScreen = new_MethodClosure((Method)PMethod17855, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_previousScreen, MC_SMB_previousScreen);
}


static void init_SMB_ready() {
    Symbol SMB_ready = new_Symbol(L"ready");
    Assign PAssign17860 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)true_Const);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17861 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17864 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17863 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17864, (Optr)&t_block_return);
    Block PBlock17862 = new_Block_with(empty_Array, empty_Array, PThreadedCode17863, 1, PSend17864);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17865 = new_Send((Optr)PSend17861, SMB_timesRepeat_, 1, (Optr)PBlock17862);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17866 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Array PThreadedCode17859 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17860, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17861, (Optr)&t_push_closure, (Optr)PBlock17862, (Optr)&t_send1, (Optr)PSend17865, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17866, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17859, 4, PAssign17860, PSend17865, PSend17866, self);
    
    MethodClosure MC_SMB_ready = new_MethodClosure((Method)PMethod17858, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_ready, MC_SMB_ready);
}


static void init_SMB_f11() {
    Symbol SMB_f11 = new_Symbol(L"f11");
    Array PThreadedCode17868 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17867 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17868, 1, self);
    
    MethodClosure MC_SMB_f11 = new_MethodClosure((Method)PMethod17867, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f11, MC_SMB_f11);
}


static void init_SMB_endOfText() {
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    Symbol SMB_lines = new_Symbol(L"lines");
    // lines. 
    Send PSend17871 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lines, 0);
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    // lastColumns. 
    Send PSend17872 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lastColumns, 0);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend17873 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)PSend17871, (Optr)PSend17872);
    Array PThreadedCode17870 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17871, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17872, (Optr)&t_send2, (Optr)PSend17873, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17869 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17870, 2, PSend17873, self);
    
    MethodClosure MC_SMB_endOfText = new_MethodClosure((Method)PMethod17869, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfText, MC_SMB_endOfText);
}


static void init_SMB_f19() {
    Symbol SMB_f19 = new_Symbol(L"f19");
    Array PThreadedCode17875 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17874 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17875, 1, self);
    
    MethodClosure MC_SMB_f19 = new_MethodClosure((Method)PMethod17874, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f19, MC_SMB_f19);
}


static void init_SMB_f8() {
    Symbol SMB_f8 = new_Symbol(L"f8");
    Array PThreadedCode17877 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17876 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17877, 1, self);
    
    MethodClosure MC_SMB_f8 = new_MethodClosure((Method)PMethod17876, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f8, MC_SMB_f8);
}


static void init_SMB_verticalTab() {
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend17880 = new_Send((Optr)self, SMB_deleteToEndOfLine, 0);
    Array PThreadedCode17879 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17880, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17878 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17879, 2, PSend17880, self);
    
    MethodClosure MC_SMB_verticalTab = new_MethodClosure((Method)PMethod17878, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_verticalTab, MC_SMB_verticalTab);
}


static void init_SMB_select() {
    Symbol SMB_select = new_Symbol(L"select");
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17883 = new_Send((Optr)self, SMB_end, 0);
    Array PThreadedCode17882 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17883, (Optr)&t_method_return);
    Method PMethod17881 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17882, 1, PSend17883);
    
    MethodClosure MC_SMB_select = new_MethodClosure((Method)PMethod17881, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_select, MC_SMB_select);
}


static void init_SMB_find() {
    Symbol SMB_find = new_Symbol(L"find");
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend17886 = new_Send((Optr)self, SMB_home, 0);
    Array PThreadedCode17885 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17886, (Optr)&t_method_return);
    Method PMethod17884 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17885, 1, PSend17886);
    
    MethodClosure MC_SMB_find = new_MethodClosure((Method)PMethod17884, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_find, MC_SMB_find);
}


static void init_SMB_alt_() {
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17888 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17891 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17893 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend17894 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)PSend17893);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend17898 = new_Send((Optr)self, SMB_openLine, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17899 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17898);
    Array PThreadedCode17897 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17898, (Optr)&t_send1, (Optr)PSend17899, (Optr)&t_block_return);
    Block PBlock17896 = new_Block_with(empty_Array, empty_Array, PThreadedCode17897, 1, PSend17899);
    // ifTrue:. 
    Send PSend17895 = new_Send((Optr)PSend17894, SMB_ifTrue_, 1, (Optr)PBlock17896);
    Array PThreadedCode17892 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17893, (Optr)&t_send1, (Optr)PSend17894, (Optr)&t_send_ifTrue_, (Optr)PSend17895, (Optr)PBlock17896, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17890 = new_Block_with(PArray17891, empty_Array, PThreadedCode17892, 2, PSend17895, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17900 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17890);
    Array PThreadedCode17889 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17890, (Optr)&t_send1, (Optr)PSend17900, (Optr)&t_method_return);
    Method PMethod17887 = new_Method_with(PArray17888, empty_Array, empty_Array, PThreadedCode17889, 1, PSend17900);
    
    MethodClosure MC_SMB_alt_ = new_MethodClosure((Method)PMethod17887, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_alt_, MC_SMB_alt_);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    // deleteRight. 
    Send PSend17903 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteRight, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend17907 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_deleteCharacter, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend17908 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17909 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17906 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17907, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17908, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17909, (Optr)&t_block_return);
    Block PBlock17905 = new_Block_with(empty_Array, empty_Array, PThreadedCode17906, 3, PSend17907, PSend17908, PSend17909);
    // ifTrue:. 
    Send PSend17904 = new_Send((Optr)PSend17903, SMB_ifTrue_, 1, (Optr)PBlock17905);
    Array PThreadedCode17902 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17903, (Optr)&t_send_ifTrue_, (Optr)PSend17904, (Optr)PBlock17905, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17902, 2, PSend17904, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod17901, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_class_SMB_from_to_for_() {
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Variable VAR_output_0_1 = new_Variable_named(L"output", 0);
    Variable VAR_client_0_2 = new_Variable_named(L"client", 0);
    Array PArray17911 = new_Array_with(3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper17913 = new_Super(SMB_basicNew, 0);
    // from:to:for:. 
    Send PSend17914 = new_Send((Optr)PSuper17913, SMB_from_to_for_, 3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Array PThreadedCode17912 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper17913, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_client_0_2, (Optr)&t_send3, (Optr)PSend17914, (Optr)&t_method_return);
    Method PMethod17910 = new_Method_with(PArray17911, empty_Array, empty_Array, PThreadedCode17912, 1, PSend17914);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17910, HEADER(Shell_ReadLine_ReadLine_Class));
    store_method(HEADER(Shell_ReadLine_ReadLine_Class), SMB_from_to_for_, MC_SMB_from_to_for_);
}

void init_Shell_ReadLine_PReadLine_layout() {
    layout_Shell_ReadLine_ReadLine_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_ReadLine_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_ReadLine_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_ReadLine_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_ReadLine_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_ReadLine_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_ReadLine = new_Symbol(L"ReadLine");
    slot_Shell_ReadLine_ReadLine_client = (Optr)new_Slot(0, L"client");
    slot_Shell_ReadLine_ReadLine_output = (Optr)new_Slot(1, L"output");
    slot_Shell_ReadLine_ReadLine_ready = (Optr)new_Slot(2, L"ready");
    slot_Shell_ReadLine_ReadLine_text = (Optr)new_Slot(3, L"text");
    slot_Shell_ReadLine_ReadLine_failure = (Optr)new_Slot(4, L"failure");
    slot_Shell_ReadLine_ReadLine_vterm = (Optr)new_Slot(5, L"vterm");
    layout_Shell_ReadLine_ReadLine = (Optr)create_layout_with_vars(ObjectLayout_Class, 6);
    ((Array)layout_Shell_ReadLine_ReadLine)->values[0] = slot_Shell_ReadLine_ReadLine_client; // client 
    ((Array)layout_Shell_ReadLine_ReadLine)->values[1] = slot_Shell_ReadLine_ReadLine_output; // output 
    ((Array)layout_Shell_ReadLine_ReadLine)->values[2] = slot_Shell_ReadLine_ReadLine_ready; // ready 
    ((Array)layout_Shell_ReadLine_ReadLine)->values[3] = slot_Shell_ReadLine_ReadLine_text; // text 
    ((Array)layout_Shell_ReadLine_ReadLine)->values[4] = slot_Shell_ReadLine_ReadLine_failure; // failure 
    ((Array)layout_Shell_ReadLine_ReadLine)->values[5] = slot_Shell_ReadLine_ReadLine_vterm; // vterm 
    Shell_ReadLine_ReadLine_Class = (Class)new_Class(Object_Class, layout_Shell_ReadLine_ReadLine_Class_class);
    Shell_ReadLine_ReadLine_Class->layout = layout_Shell_ReadLine_ReadLine;
    Shell_ReadLine_ReadLine_Class->name = SMB_ReadLine;
    
}

void init_Shell_ReadLine_PReadLine_methods() {
    init_SMB_f9();
    init_SMB_right_();
    init_SMB_f4();
    init_SMB_endOfTransmission();
    init_SMB_up_();
    init_SMB_here();
    init_SMB_home();
    init_SMB_f13();
    init_SMB_f2();
    init_SMB_nextScreen();
    init_SMB_f3();
    init_SMB_deleteToEndOfLine();
    init_SMB_f10();
    init_SMB_end();
    init_SMB_down();
    init_SMB_remove();
    init_SMB_bell();
    init_SMB_delete();
    init_SMB_shiftIn();
    init_SMB_openLine();
    init_SMB_moveFailure_();
    init_SMB_f14();
    init_SMB_f17();
    init_SMB_from_to_for_();
    init_SMB_f12();
    init_SMB_write_();
    init_SMB_f18();
    init_SMB_f5();
    init_SMB_left();
    init_SMB_carriageReturn();
    init_SMB_moveToLine_column_();
    init_SMB_isReady();
    init_SMB_insert();
    init_SMB_f7();
    init_SMB_right();
    init_SMB_startOfText();
    init_SMB_f1();
    init_SMB_f15();
    init_SMB_formfeed();
    init_SMB_enquiry();
    init_SMB_startOfHeading();
    init_SMB_f20();
    init_SMB_repaint();
    init_SMB_f6();
    init_SMB_endOfLine();
    init_SMB_tab();
    init_SMB_shiftOut();
    init_SMB_clear();
    init_SMB_readLine();
    init_SMB_lf();
    init_SMB_repaintAt_();
    init_SMB_f16();
    init_SMB_up();
    init_SMB_parsesUntil();
    init_SMB_acknowledge();
    init_SMB_previousScreen();
    init_SMB_ready();
    init_SMB_f11();
    init_SMB_endOfText();
    init_SMB_f19();
    init_SMB_f8();
    init_SMB_verticalTab();
    init_SMB_select();
    init_SMB_find();
    init_SMB_alt_();
    init_SMB_backspace();
    init_class_SMB_from_to_for_();
    
}