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
    Array PThreadedCode17523 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17522 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17523, 1, self);
    
    MethodClosure MC_SMB_f9 = new_MethodClosure((Method)PMethod17522, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f9, MC_SMB_f9);
}


static void init_SMB_right_() {
    Symbol SMB_right_ = new_Symbol(L"right:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17525 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17527 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17531 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17534 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17533 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17534, (Optr)&t_block_return);
    Block PBlock17532 = new_Block_with(empty_Array, empty_Array, PThreadedCode17533, 1, PSend17534);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17535 = new_Send((Optr)PSend17531, SMB_timesRepeat_, 1, (Optr)PBlock17532);
    Array PThreadedCode17530 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17531, (Optr)&t_push_closure, (Optr)PBlock17532, (Optr)&t_send1, (Optr)PSend17535, (Optr)&t_block_return);
    Block PBlock17529 = new_Block_with(empty_Array, empty_Array, PThreadedCode17530, 1, PSend17535);
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17540 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17539 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17540, (Optr)&t_block_return);
    Block PBlock17538 = new_Block_with(empty_Array, empty_Array, PThreadedCode17539, 1, PSend17540);
    // timesRepeat:. 
    Send PSend17541 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17538);
    Array PThreadedCode17537 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17538, (Optr)&t_send1, (Optr)PSend17541, (Optr)&t_block_return);
    Block PBlock17536 = new_Block_with(empty_Array, empty_Array, PThreadedCode17537, 1, PSend17541);
    // ifTrue:ifFalse:. 
    Send PSend17528 = new_Send((Optr)PSend17527, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17529, (Optr)PBlock17536);
    Array PThreadedCode17526 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17527, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17528, (Optr)PBlock17529, (Optr)PBlock17536, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17524 = new_Method_with(PArray17525, empty_Array, empty_Array, PThreadedCode17526, 2, PSend17528, self);
    
    MethodClosure MC_SMB_right_ = new_MethodClosure((Method)PMethod17524, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right_, MC_SMB_right_);
}


static void init_SMB_f4() {
    Symbol SMB_f4 = new_Symbol(L"f4");
    Array PThreadedCode17543 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17542 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17543, 1, self);
    
    MethodClosure MC_SMB_f4 = new_MethodClosure((Method)PMethod17542, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f4, MC_SMB_f4);
}


static void init_SMB_endOfTransmission() {
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    Array PThreadedCode17545 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17544 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17545, 1, self);
    
    MethodClosure MC_SMB_endOfTransmission = new_MethodClosure((Method)PMethod17544, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfTransmission, MC_SMB_endOfTransmission);
}


static void init_SMB_up_() {
    Symbol SMB_up_ = new_Symbol(L"up:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17547 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17549 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17553 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17556 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17555 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17556, (Optr)&t_block_return);
    Block PBlock17554 = new_Block_with(empty_Array, empty_Array, PThreadedCode17555, 1, PSend17556);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17557 = new_Send((Optr)PSend17553, SMB_timesRepeat_, 1, (Optr)PBlock17554);
    Array PThreadedCode17552 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17553, (Optr)&t_push_closure, (Optr)PBlock17554, (Optr)&t_send1, (Optr)PSend17557, (Optr)&t_block_return);
    Block PBlock17551 = new_Block_with(empty_Array, empty_Array, PThreadedCode17552, 1, PSend17557);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17562 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17561 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17562, (Optr)&t_block_return);
    Block PBlock17560 = new_Block_with(empty_Array, empty_Array, PThreadedCode17561, 1, PSend17562);
    // timesRepeat:. 
    Send PSend17563 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17560);
    Array PThreadedCode17559 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17560, (Optr)&t_send1, (Optr)PSend17563, (Optr)&t_block_return);
    Block PBlock17558 = new_Block_with(empty_Array, empty_Array, PThreadedCode17559, 1, PSend17563);
    // ifTrue:ifFalse:. 
    Send PSend17550 = new_Send((Optr)PSend17549, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17551, (Optr)PBlock17558);
    Array PThreadedCode17548 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17549, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17550, (Optr)PBlock17551, (Optr)PBlock17558, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17546 = new_Method_with(PArray17547, empty_Array, empty_Array, PThreadedCode17548, 2, PSend17550, self);
    
    MethodClosure MC_SMB_up_ = new_MethodClosure((Method)PMethod17546, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up_, MC_SMB_up_);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Array PThreadedCode17565 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17564 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17565, 1, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod17564, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend17568 = new_Send((Optr)self, SMB_startOfHeading, 0);
    Array PThreadedCode17567 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17568, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17566 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17567, 2, PSend17568, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod17566, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_f13() {
    Symbol SMB_f13 = new_Symbol(L"f13");
    Array PThreadedCode17570 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17569 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17570, 1, self);
    
    MethodClosure MC_SMB_f13 = new_MethodClosure((Method)PMethod17569, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f13, MC_SMB_f13);
}


static void init_SMB_f2() {
    Symbol SMB_f2 = new_Symbol(L"f2");
    Array PThreadedCode17572 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17571 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17572, 1, self);
    
    MethodClosure MC_SMB_f2 = new_MethodClosure((Method)PMethod17571, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f2, MC_SMB_f2);
}


static void init_SMB_nextScreen() {
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend17575 = new_Send((Optr)self, SMB_endOfText, 0);
    Array PThreadedCode17574 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17575, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17573 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17574, 2, PSend17575, self);
    
    MethodClosure MC_SMB_nextScreen = new_MethodClosure((Method)PMethod17573, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_nextScreen, MC_SMB_nextScreen);
}


static void init_SMB_f3() {
    Symbol SMB_f3 = new_Symbol(L"f3");
    Array PThreadedCode17577 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17576 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17577, 1, self);
    
    MethodClosure MC_SMB_f3 = new_MethodClosure((Method)PMethod17576, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f3, MC_SMB_f3);
}


static void init_SMB_f10() {
    Symbol SMB_f10 = new_Symbol(L"f10");
    Array PThreadedCode17579 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17578 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17579, 1, self);
    
    MethodClosure MC_SMB_f10 = new_MethodClosure((Method)PMethod17578, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f10, MC_SMB_f10);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17582 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17581 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17582, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17580 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17581, 2, PSend17582, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17580, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17584 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17587 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17586 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17587);
    // down. 
    Send PSend17588 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_down, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17592 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // down. 
    Send PSend17593 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    // column. 
    Send PSend17594 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17595 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17594);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17598 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17597 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17598, (Optr)&t_block_return);
    Block PBlock17596 = new_Block_with(empty_Array, empty_Array, PThreadedCode17597, 1, PSend17598);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17599 = new_Send((Optr)PSend17595, SMB_timesRepeat_, 1, (Optr)PBlock17596);
    Array PThreadedCode17591 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17592, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17593, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17594, (Optr)&t_send1, (Optr)PSend17595, (Optr)&t_push_closure, (Optr)PBlock17596, (Optr)&t_send1, (Optr)PSend17599, (Optr)&t_block_return);
    Block PBlock17590 = new_Block_with(empty_Array, empty_Array, PThreadedCode17591, 3, PSend17592, PSend17593, PSend17599);
    // ifTrue:. 
    Send PSend17589 = new_Send((Optr)PSend17588, SMB_ifTrue_, 1, (Optr)PBlock17590);
    Array PThreadedCode17585 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17586, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17587, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17588, (Optr)&t_send_ifTrue_, (Optr)PSend17589, (Optr)PBlock17590, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17583 = new_Method_with(empty_Array, PArray17584, empty_Array, PThreadedCode17585, 3, PAssign17586, PSend17589, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17583, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17602 = new_Send((Optr)self, SMB_backspace, 0);
    Array PThreadedCode17601 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17602, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17600 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17601, 2, PSend17602, self);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod17600, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_bell() {
    Symbol SMB_bell = new_Symbol(L"bell");
    Array PThreadedCode17604 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17603 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17604, 1, self);
    
    MethodClosure MC_SMB_bell = new_MethodClosure((Method)PMethod17603, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_bell, MC_SMB_bell);
}


static void init_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17607 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteLeft, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17611 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_backspace, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend17612 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17613 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17610 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17611, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17612, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17613, (Optr)&t_block_return);
    Block PBlock17609 = new_Block_with(empty_Array, empty_Array, PThreadedCode17610, 3, PSend17611, PSend17612, PSend17613);
    // ifTrue:. 
    Send PSend17608 = new_Send((Optr)PSend17607, SMB_ifTrue_, 1, (Optr)PBlock17609);
    Array PThreadedCode17606 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17607, (Optr)&t_send_ifTrue_, (Optr)PSend17608, (Optr)PBlock17609, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17605 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17606, 2, PSend17608, self);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod17605, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_delete, MC_SMB_delete);
}


static void init_SMB_shiftIn() {
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    Array PThreadedCode17615 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17614 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17615, 1, self);
    
    MethodClosure MC_SMB_shiftIn = new_MethodClosure((Method)PMethod17614, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftIn, MC_SMB_shiftIn);
}


static void init_SMB_openLine() {
    Symbol SMB_openLine = new_Symbol(L"openLine");
    Variable VAR_offset_0_0 = new_Variable_named(L"offset", 0);
    Array PArray17617 = new_Array_with(1, (Optr)VAR_offset_0_0);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17620 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Assign PAssign17619 = new_Assign((Optr)VAR_offset_0_0, (Optr)PSend17620);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17623 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17622 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17623, (Optr)&t_block_return);
    Block PBlock17621 = new_Block_with(empty_Array, empty_Array, PThreadedCode17622, 1, PSend17623);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17624 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17621);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17625 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17628 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17627 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17628, (Optr)&t_block_return);
    Block PBlock17626 = new_Block_with(empty_Array, empty_Array, PThreadedCode17627, 1, PSend17628);
    // timesRepeat:. 
    Send PSend17629 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17626);
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    // insertLine. 
    Send PSend17630 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_insertLine, 0);
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    // continueLine. 
    Send PSend17631 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_continueLine, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17632 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_addLine, 0);
    Array PThreadedCode17618 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign17619, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17620, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17621, (Optr)&t_send1, (Optr)PSend17624, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17625, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17626, (Optr)&t_send1, (Optr)PSend17629, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17630, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_send0, (Optr)PSend17631, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17632, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17616 = new_Method_with(empty_Array, PArray17617, empty_Array, PThreadedCode17618, 8, PAssign17619, PSend17624, PSend17625, PSend17629, PSend17630, PSend17631, PSend17632, self);
    
    MethodClosure MC_SMB_openLine = new_MethodClosure((Method)PMethod17616, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_openLine, MC_SMB_openLine);
}


static void init_SMB_moveFailure_() {
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Variable VAR_direction_0_0 = new_Variable_named(L"direction", 0);
    Array PArray17634 = new_Array_with(1, (Optr)VAR_direction_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend17638 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    // onLineBefore:. 
    Send PSend17639 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_onLineBefore_, 1, (Optr)PSend17638);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // +. 
    Send PSend17644 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Assign PAssign17643 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17644);
    Array PThreadedCode17642 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign17643, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17644, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17641 = new_Block_with(empty_Array, empty_Array, PThreadedCode17642, 1, PAssign17643);
    // ifTrue:. 
    Send PSend17640 = new_Send((Optr)PSend17639, SMB_ifTrue_, 1, (Optr)PBlock17641);
    Array PThreadedCode17637 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17638, (Optr)&t_send1, (Optr)PSend17639, (Optr)&t_send_ifTrue_, (Optr)PSend17640, (Optr)PBlock17641, (Optr)&t_block_return);
    Block PBlock17636 = new_Block_with(empty_Array, empty_Array, PThreadedCode17637, 1, PSend17640);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17645 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17636);
    Array PThreadedCode17635 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17636, (Optr)&t_send1, (Optr)PSend17645, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17633 = new_Method_with(PArray17634, empty_Array, empty_Array, PThreadedCode17635, 2, PSend17645, self);
    
    MethodClosure MC_SMB_moveFailure_ = new_MethodClosure((Method)PMethod17633, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveFailure_, MC_SMB_moveFailure_);
}


static void init_SMB_f14() {
    Symbol SMB_f14 = new_Symbol(L"f14");
    Array PThreadedCode17647 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17646 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17647, 1, self);
    
    MethodClosure MC_SMB_f14 = new_MethodClosure((Method)PMethod17646, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f14, MC_SMB_f14);
}


static void init_SMB_f17() {
    Symbol SMB_f17 = new_Symbol(L"f17");
    Array PThreadedCode17649 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17648 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17649, 1, self);
    
    MethodClosure MC_SMB_f17 = new_MethodClosure((Method)PMethod17648, Shell_ReadLine_ReadLine_Class);
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
    Array PArray17651 = new_Array_with(3, (Optr)VAR_in_0_0, (Optr)VAR_out_0_1, (Optr)VAR_c_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17654 = new_Send((Optr)PHistoryText_classReference, SMB_new, 0);
    Assign PAssign17653 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)PSend17654);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17658 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend17660 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)VAR_in_0_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend17661 = new_Send((Optr)VAR__receiver__1_0, SMB_handler_, 1, (Optr)self);
    Array PThreadedCode17659 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_in_0_0, (Optr)&t_send1, (Optr)PSend17660, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17661, (Optr)&t_method_return);
    Block PBlock17657 = new_Block_with(PArray17658, empty_Array, PThreadedCode17659, 2, PSend17660, PSend17661);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend17662 = new_Send((Optr)PVTermInputDriver_classReference, SMB_new, 0);
    // value:. 
    Send PSend17656 = new_Send((Optr)PBlock17657, SMB_value_, 1, (Optr)PSend17662);
    Assign PAssign17655 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)PSend17656);
    Assign PAssign17663 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)VAR_out_0_1);
    Assign PAssign17664 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)VAR_c_0_2);
    Array PThreadedCode17652 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign17653, (Optr)&t_push_class_reference, (Optr)PHistoryText_classReference, (Optr)&t_send0, (Optr)PSend17654, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17655, (Optr)&t_push_closure, (Optr)PBlock17657, (Optr)&t_push_class_reference, (Optr)PVTermInputDriver_classReference, (Optr)&t_send0, (Optr)PSend17662, (Optr)&t_send1, (Optr)PSend17656, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17663, (Optr)&t_push_variable, (Optr)VAR_out_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17664, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17650 = new_Method_with(PArray17651, empty_Array, empty_Array, PThreadedCode17652, 5, PAssign17653, PAssign17655, PAssign17663, PAssign17664, self);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17650, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_from_to_for_, MC_SMB_from_to_for_);
}


static void init_SMB_f12() {
    Symbol SMB_f12 = new_Symbol(L"f12");
    Array PThreadedCode17666 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17665 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17666, 1, self);
    
    MethodClosure MC_SMB_f12 = new_MethodClosure((Method)PMethod17665, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f12, MC_SMB_f12);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17668 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17670 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_add_, 1, (Optr)VAR_character_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17671 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB__shiftLeft_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // moveFailure:. 
    Send PSend17672 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17673 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17669 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17670, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17671, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17672, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17673, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17667 = new_Method_with(PArray17668, empty_Array, empty_Array, PThreadedCode17669, 5, PSend17670, PSend17671, PSend17672, PSend17673, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod17667, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_f18() {
    Symbol SMB_f18 = new_Symbol(L"f18");
    Array PThreadedCode17675 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17675, 1, self);
    
    MethodClosure MC_SMB_f18 = new_MethodClosure((Method)PMethod17674, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f18, MC_SMB_f18);
}


static void init_SMB_f5() {
    Symbol SMB_f5 = new_Symbol(L"f5");
    Array PThreadedCode17677 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17676 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17677, 1, self);
    
    MethodClosure MC_SMB_f5 = new_MethodClosure((Method)PMethod17676, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f5, MC_SMB_f5);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17680 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_left, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // left. 
    Send PSend17684 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17683 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17684, (Optr)&t_block_return);
    Block PBlock17682 = new_Block_with(empty_Array, empty_Array, PThreadedCode17683, 1, PSend17684);
    // ifTrue:. 
    Send PSend17681 = new_Send((Optr)PSend17680, SMB_ifTrue_, 1, (Optr)PBlock17682);
    Array PThreadedCode17679 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17680, (Optr)&t_send_ifTrue_, (Optr)PSend17681, (Optr)PBlock17682, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17678 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17679, 2, PSend17681, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17678, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_carriageReturn() {
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17687 = new_Send((Optr)self, SMB_lf, 0);
    Array PThreadedCode17686 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17687, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17686, 2, PSend17687, self);
    
    MethodClosure MC_SMB_carriageReturn = new_MethodClosure((Method)PMethod17685, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_carriageReturn, MC_SMB_carriageReturn);
}


static void init_SMB_moveToLine_column_() {
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    Variable VAR_line_0_0 = new_Variable_named(L"line", 0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Array PArray17689 = new_Array_with(2, (Optr)VAR_line_0_0, (Optr)VAR_col_0_1);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17691 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17692 = new_Send((Optr)VAR_col_0_1, SMB__minus_, 1, (Optr)PSend17691);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17693 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17692);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17694 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17695 = new_Send((Optr)PSend17694, SMB__minus_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17696 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17695);
    Symbol SMB_line_ = new_Symbol(L"line:");
    // line:. 
    Send PSend17697 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17698 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_1);
    Array PThreadedCode17690 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17691, (Optr)&t_send1, (Optr)PSend17692, (Optr)&t_send1, (Optr)PSend17693, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17694, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17695, (Optr)&t_send1, (Optr)PSend17696, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17697, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17698, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17688 = new_Method_with(PArray17689, empty_Array, empty_Array, PThreadedCode17690, 5, PSend17693, PSend17696, PSend17697, PSend17698, self);
    
    MethodClosure MC_SMB_moveToLine_column_ = new_MethodClosure((Method)PMethod17688, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveToLine_column_, MC_SMB_moveToLine_column_);
}


static void init_SMB_isReady() {
    Symbol SMB_isReady = new_Symbol(L"isReady");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17701 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    // isReady:. 
    Send PSend17702 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_isReady_, 1, (Optr)PSend17701);
    Array PThreadedCode17700 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17701, (Optr)&t_send1, (Optr)PSend17702, (Optr)&t_method_return);
    Method PMethod17699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17700, 1, PSend17702);
    
    MethodClosure MC_SMB_isReady = new_MethodClosure((Method)PMethod17699, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_isReady, MC_SMB_isReady);
}


static void init_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
    Array PThreadedCode17704 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17704, 1, self);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod17703, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_insert, MC_SMB_insert);
}


static void init_SMB_f7() {
    Symbol SMB_f7 = new_Symbol(L"f7");
    Array PThreadedCode17706 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17706, 1, self);
    
    MethodClosure MC_SMB_f7 = new_MethodClosure((Method)PMethod17705, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f7, MC_SMB_f7);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17709 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_right, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // right. 
    Send PSend17713 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17712 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17713, (Optr)&t_block_return);
    Block PBlock17711 = new_Block_with(empty_Array, empty_Array, PThreadedCode17712, 1, PSend17713);
    // ifTrue:. 
    Send PSend17710 = new_Send((Optr)PSend17709, SMB_ifTrue_, 1, (Optr)PBlock17711);
    Array PThreadedCode17708 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17709, (Optr)&t_send_ifTrue_, (Optr)PSend17710, (Optr)PBlock17711, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17707 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17708, 2, PSend17710, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17707, Shell_ReadLine_ReadLine_Class);
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
    Send PSend17716 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)int_1_Const, (Optr)int_0_Const);
    Array PThreadedCode17715 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend17716, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17714 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17715, 2, PSend17716, self);
    
    MethodClosure MC_SMB_startOfText = new_MethodClosure((Method)PMethod17714, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfText, MC_SMB_startOfText);
}


static void init_SMB_f1() {
    Symbol SMB_f1 = new_Symbol(L"f1");
    Array PThreadedCode17718 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17718, 1, self);
    
    MethodClosure MC_SMB_f1 = new_MethodClosure((Method)PMethod17717, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f1, MC_SMB_f1);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17720 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17723 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17722 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17723);
    // endOfLine. 
    Send PSend17724 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_endOfLine, 0);
    // column. 
    Send PSend17725 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17726 = new_Send((Optr)PSend17725, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17727 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17726);
    Array PThreadedCode17721 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17722, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17723, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17724, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17725, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17726, (Optr)&t_send1, (Optr)PSend17727, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17719 = new_Method_with(empty_Array, PArray17720, empty_Array, PThreadedCode17721, 4, PAssign17722, PSend17724, PSend17727, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17719, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_f15() {
    Symbol SMB_f15 = new_Symbol(L"f15");
    Array PThreadedCode17729 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17728 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17729, 1, self);
    
    MethodClosure MC_SMB_f15 = new_MethodClosure((Method)PMethod17728, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f15, MC_SMB_f15);
}


static void init_SMB_formfeed() {
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    Array PThreadedCode17731 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17730 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17731, 1, self);
    
    MethodClosure MC_SMB_formfeed = new_MethodClosure((Method)PMethod17730, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_formfeed, MC_SMB_formfeed);
}


static void init_SMB_enquiry() {
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17734 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17733 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17734, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17732 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17733, 2, PSend17734, self);
    
    MethodClosure MC_SMB_enquiry = new_MethodClosure((Method)PMethod17732, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_enquiry, MC_SMB_enquiry);
}


static void init_SMB_startOfHeading() {
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17736 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17739 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17738 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17739);
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    // startOfLine. 
    Send PSend17740 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_startOfLine, 0);
    // column. 
    Send PSend17741 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17742 = new_Send((Optr)PSend17741, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17743 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17742);
    Array PThreadedCode17737 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17738, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17739, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17740, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17741, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17742, (Optr)&t_send1, (Optr)PSend17743, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17735 = new_Method_with(empty_Array, PArray17736, empty_Array, PThreadedCode17737, 4, PAssign17738, PSend17740, PSend17743, self);
    
    MethodClosure MC_SMB_startOfHeading = new_MethodClosure((Method)PMethod17735, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfHeading, MC_SMB_startOfHeading);
}


static void init_SMB_f20() {
    Symbol SMB_f20 = new_Symbol(L"f20");
    Array PThreadedCode17745 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17745, 1, self);
    
    MethodClosure MC_SMB_f20 = new_MethodClosure((Method)PMethod17744, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f20, MC_SMB_f20);
}


static void init_SMB_repaint() {
    Symbol SMB_repaint = new_Symbol(L"repaint");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_1 = new_Variable_named(L"line", 0);
    Array PArray17747 = new_Array_with(2, (Optr)VAR_col_0_0, (Optr)VAR_line_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17750 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    // parsesUntil. 
    Send PSend17752 = new_Send((Optr)self, SMB_parsesUntil, 0);
    Variable VAR_newpos_2_0 = new_Variable_named(L"newpos", 2);
    Array PArray17754 = new_Array_with(1, (Optr)VAR_newpos_2_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17757 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17756 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17757);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17759 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17758 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17759);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend17762 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend17763 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__equals_, 1, (Optr)PSend17762);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17767 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17766 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17767, (Optr)&t_block_return);
    Block PBlock17765 = new_Block_with(empty_Array, empty_Array, PThreadedCode17766, 1, PSend17767);
    // ifTrue:. 
    Send PSend17764 = new_Send((Optr)PSend17763, SMB_ifTrue_, 1, (Optr)PBlock17765);
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    // repaintAt:. 
    Send PSend17768 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Array PThreadedCode17761 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17762, (Optr)&t_send1, (Optr)PSend17763, (Optr)&t_send_ifTrue_, (Optr)PSend17764, (Optr)PBlock17765, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17768, (Optr)&t_block_return);
    Block PBlock17760 = new_Block_with(empty_Array, empty_Array, PThreadedCode17761, 2, PSend17764, PSend17768);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17769 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17760);
    // +. 
    Send PSend17771 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17770 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17771);
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    // errorColor. 
    Send PSend17772 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_errorColor, 0);
    // repaintAt:. 
    Send PSend17773 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend17774 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend17775 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_normal, 0);
    // escape:. 
    Send PSend17776 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17775);
    Array PThreadedCode17755 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign17756, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17757, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17758, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17759, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17760, (Optr)&t_send1, (Optr)PSend17769, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17770, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17771, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17772, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17773, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17774, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17775, (Optr)&t_send1, (Optr)PSend17776, (Optr)&t_method_return);
    Block PBlock17753 = new_Block_with(PArray17754, empty_Array, PThreadedCode17755, 8, PAssign17756, PAssign17758, PSend17769, PAssign17770, PSend17772, PSend17773, PSend17774, PSend17776);
    // ifNotNil:. 
    Send PSend17777 = new_Send((Optr)PSend17752, SMB_ifNotNil_, 1, (Optr)PBlock17753);
    // column. 
    Send PSend17781 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17780 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17781);
    // line. 
    Send PSend17783 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17782 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17783);
    // repaintAt:. 
    Send PSend17784 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    // moveToLine:column:. 
    Send PSend17785 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Array PThreadedCode17779 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign17780, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17781, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17782, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17783, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17784, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17785, (Optr)&t_block_return);
    Block PBlock17778 = new_Block_with(empty_Array, empty_Array, PThreadedCode17779, 4, PAssign17780, PAssign17782, PSend17784, PSend17785);
    // ifNotNil:. 
    Send PSend17786 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17778);
    Assign PAssign17787 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17751 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17752, (Optr)&t_push_closure, (Optr)PBlock17753, (Optr)&t_send1, (Optr)PSend17777, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17778, (Optr)&t_send1, (Optr)PSend17786, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17787, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17749 = new_Block_with(PArray17750, empty_Array, PThreadedCode17751, 4, PSend17777, PSend17786, PAssign17787, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17788 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17749);
    Array PThreadedCode17748 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17749, (Optr)&t_send1, (Optr)PSend17788, (Optr)&t_method_return);
    Method PMethod17746 = new_Method_with(empty_Array, PArray17747, empty_Array, PThreadedCode17748, 1, PSend17788);
    
    MethodClosure MC_SMB_repaint = new_MethodClosure((Method)PMethod17746, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaint, MC_SMB_repaint);
}


static void init_SMB_f6() {
    Symbol SMB_f6 = new_Symbol(L"f6");
    Array PThreadedCode17790 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17789 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17790, 1, self);
    
    MethodClosure MC_SMB_f6 = new_MethodClosure((Method)PMethod17789, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f6, MC_SMB_f6);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    Array PThreadedCode17792 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17791 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17792, 1, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod17791, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_shiftOut() {
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    Array PThreadedCode17794 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17794, 1, self);
    
    MethodClosure MC_SMB_shiftOut = new_MethodClosure((Method)PMethod17793, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftOut, MC_SMB_shiftOut);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Assign PAssign17797 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)false_Const);
    // clear. 
    Send PSend17798 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_clear, 0);
    Assign PAssign17799 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17796 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign17797, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17798, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17799, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17796, 4, PAssign17797, PSend17798, PAssign17799, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17795, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17802 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode17804 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)&t_block_return);
    Block PBlock17803 = new_Block_with(empty_Array, empty_Array, PThreadedCode17804, 1, slot_Shell_ReadLine_ReadLine_ready);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend17807 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_vterm, SMB_read, 0);
    Array PThreadedCode17806 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)&t_send0, (Optr)PSend17807, (Optr)&t_block_return);
    Block PBlock17805 = new_Block_with(empty_Array, empty_Array, PThreadedCode17806, 1, PSend17807);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend17808 = new_Send((Optr)PBlock17803, SMB_whileFalse_, 1, (Optr)PBlock17805);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17809 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Array PThreadedCode17801 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17802, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17803, (Optr)&t_push_closure, (Optr)PBlock17805, (Optr)&t_send1, (Optr)PSend17808, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17809, (Optr)&t_method_return);
    Method PMethod17800 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17801, 3, PSend17802, PSend17808, PSend17809);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PMethod17800, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17813 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isReady = new_Symbol(L"isReady");
    // isReady. 
    Send PSend17815 = new_Send((Optr)self, SMB_isReady, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ready = new_Symbol(L"ready");
    // ready. 
    Send PSend17819 = new_Send((Optr)self, SMB_ready, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17820 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17819);
    Array PThreadedCode17818 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17819, (Optr)&t_send1, (Optr)PSend17820, (Optr)&t_block_return);
    Block PBlock17817 = new_Block_with(empty_Array, empty_Array, PThreadedCode17818, 1, PSend17820);
    // ifTrue:. 
    Send PSend17816 = new_Send((Optr)PSend17815, SMB_ifTrue_, 1, (Optr)PBlock17817);
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend17821 = new_Send((Optr)self, SMB_openLine, 0);
    Array PThreadedCode17814 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17815, (Optr)&t_send_ifTrue_, (Optr)PSend17816, (Optr)PBlock17817, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17821, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17812 = new_Block_with(PArray17813, empty_Array, PThreadedCode17814, 3, PSend17816, PSend17821, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17822 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17812);
    Array PThreadedCode17811 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17812, (Optr)&t_send1, (Optr)PSend17822, (Optr)&t_method_return);
    Method PMethod17810 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17811, 1, PSend17822);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod17810, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_repaintAt_() {
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17824 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_2 = new_Variable_named(L"line", 0);
    Array PArray17825 = new_Array_with(2, (Optr)VAR_col_0_1, (Optr)VAR_line_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17828 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17831 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17830 = new_Assign((Optr)VAR_col_0_1, (Optr)PSend17831);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17833 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17832 = new_Assign((Optr)VAR_line_0_2, (Optr)PSend17833);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17834 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_position_, 1, (Optr)VAR_position_0_0);
    // column. 
    Send PSend17835 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17836 = new_Send((Optr)PSend17835, SMB__minus_, 1, (Optr)VAR_col_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17837 = new_Send((Optr)PSend17836, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17838 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17837);
    // line. 
    Send PSend17839 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17840 = new_Send((Optr)VAR_line_0_2, SMB__minus_, 1, (Optr)PSend17839);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17841 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17840);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17842 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentLine, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17843 = new_Send((Optr)PSend17842, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17844 = new_Send((Optr)PSend17843, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17848 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17849 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17847 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17848, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17849, (Optr)&t_block_return);
    Block PBlock17846 = new_Block_with(empty_Array, empty_Array, PThreadedCode17847, 2, PSend17848, PSend17849);
    // ifTrue:. 
    Send PSend17845 = new_Send((Optr)PSend17844, SMB_ifTrue_, 1, (Optr)PBlock17846);
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    // currentCharacter. 
    Send PSend17850 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentCharacter, 0);
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    // overwrite:. 
    Send PSend17851 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_overwrite_, 1, (Optr)PSend17850);
    Array PThreadedCode17829 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push1, (Optr)PAssign17830, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17831, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17832, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17833, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_send1, (Optr)PSend17834, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17835, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17836, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17837, (Optr)&t_send1, (Optr)PSend17838, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_2, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17839, (Optr)&t_send1, (Optr)PSend17840, (Optr)&t_send1, (Optr)PSend17841, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17842, (Optr)&t_send0, (Optr)PSend17843, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17844, (Optr)&t_send_ifTrue_, (Optr)PSend17845, (Optr)PBlock17846, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17850, (Optr)&t_send1, (Optr)PSend17851, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17827 = new_Block_with(PArray17828, empty_Array, PThreadedCode17829, 8, PAssign17830, PAssign17832, PSend17834, PSend17838, PSend17841, PSend17845, PSend17851, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17852 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17827);
    Array PThreadedCode17826 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17827, (Optr)&t_send1, (Optr)PSend17852, (Optr)&t_method_return);
    Method PMethod17823 = new_Method_with(PArray17824, PArray17825, empty_Array, PThreadedCode17826, 1, PSend17852);
    
    MethodClosure MC_SMB_repaintAt_ = new_MethodClosure((Method)PMethod17823, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaintAt_, MC_SMB_repaintAt_);
}


static void init_SMB_f16() {
    Symbol SMB_f16 = new_Symbol(L"f16");
    Array PThreadedCode17854 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17853 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17854, 1, self);
    
    MethodClosure MC_SMB_f16 = new_MethodClosure((Method)PMethod17853, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f16, MC_SMB_f16);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17856 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17859 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17858 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17859);
    // up. 
    Send PSend17860 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_up, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17864 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // up. 
    Send PSend17865 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    // column. 
    Send PSend17866 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17867 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17866);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17870 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17869 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17870, (Optr)&t_block_return);
    Block PBlock17868 = new_Block_with(empty_Array, empty_Array, PThreadedCode17869, 1, PSend17870);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17871 = new_Send((Optr)PSend17867, SMB_timesRepeat_, 1, (Optr)PBlock17868);
    Array PThreadedCode17863 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17864, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17865, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17866, (Optr)&t_send1, (Optr)PSend17867, (Optr)&t_push_closure, (Optr)PBlock17868, (Optr)&t_send1, (Optr)PSend17871, (Optr)&t_block_return);
    Block PBlock17862 = new_Block_with(empty_Array, empty_Array, PThreadedCode17863, 3, PSend17864, PSend17865, PSend17871);
    // ifTrue:. 
    Send PSend17861 = new_Send((Optr)PSend17860, SMB_ifTrue_, 1, (Optr)PBlock17862);
    Array PThreadedCode17857 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17858, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17859, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17860, (Optr)&t_send_ifTrue_, (Optr)PSend17861, (Optr)PBlock17862, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17855 = new_Method_with(empty_Array, PArray17856, empty_Array, PThreadedCode17857, 3, PAssign17858, PSend17861, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17855, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_parsesUntil() {
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17874 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    // parsesUntil:. 
    Send PSend17875 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_parsesUntil_, 1, (Optr)PSend17874);
    Array PThreadedCode17873 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17874, (Optr)&t_send1, (Optr)PSend17875, (Optr)&t_method_return);
    Method PMethod17872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17873, 1, PSend17875);
    
    MethodClosure MC_SMB_parsesUntil = new_MethodClosure((Method)PMethod17872, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_parsesUntil, MC_SMB_parsesUntil);
}


static void init_SMB_acknowledge() {
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    Array PThreadedCode17877 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17876 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17877, 1, self);
    
    MethodClosure MC_SMB_acknowledge = new_MethodClosure((Method)PMethod17876, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_acknowledge, MC_SMB_acknowledge);
}


static void init_SMB_previousScreen() {
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend17880 = new_Send((Optr)self, SMB_startOfText, 0);
    Array PThreadedCode17879 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17880, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17878 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17879, 2, PSend17880, self);
    
    MethodClosure MC_SMB_previousScreen = new_MethodClosure((Method)PMethod17878, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_previousScreen, MC_SMB_previousScreen);
}


static void init_SMB_ready() {
    Symbol SMB_ready = new_Symbol(L"ready");
    Assign PAssign17883 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)true_Const);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17884 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17887 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17886 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17887, (Optr)&t_block_return);
    Block PBlock17885 = new_Block_with(empty_Array, empty_Array, PThreadedCode17886, 1, PSend17887);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17888 = new_Send((Optr)PSend17884, SMB_timesRepeat_, 1, (Optr)PBlock17885);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17889 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Array PThreadedCode17882 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17883, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17884, (Optr)&t_push_closure, (Optr)PBlock17885, (Optr)&t_send1, (Optr)PSend17888, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17889, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17881 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17882, 4, PAssign17883, PSend17888, PSend17889, self);
    
    MethodClosure MC_SMB_ready = new_MethodClosure((Method)PMethod17881, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_ready, MC_SMB_ready);
}


static void init_SMB_f11() {
    Symbol SMB_f11 = new_Symbol(L"f11");
    Array PThreadedCode17891 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17890 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17891, 1, self);
    
    MethodClosure MC_SMB_f11 = new_MethodClosure((Method)PMethod17890, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f11, MC_SMB_f11);
}


static void init_SMB_endOfText() {
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    Symbol SMB_lines = new_Symbol(L"lines");
    // lines. 
    Send PSend17894 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lines, 0);
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    // lastColumns. 
    Send PSend17895 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lastColumns, 0);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend17896 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)PSend17894, (Optr)PSend17895);
    Array PThreadedCode17893 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17894, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17895, (Optr)&t_send2, (Optr)PSend17896, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17892 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17893, 2, PSend17896, self);
    
    MethodClosure MC_SMB_endOfText = new_MethodClosure((Method)PMethod17892, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfText, MC_SMB_endOfText);
}


static void init_SMB_f19() {
    Symbol SMB_f19 = new_Symbol(L"f19");
    Array PThreadedCode17898 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17897 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17898, 1, self);
    
    MethodClosure MC_SMB_f19 = new_MethodClosure((Method)PMethod17897, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f19, MC_SMB_f19);
}


static void init_SMB_f8() {
    Symbol SMB_f8 = new_Symbol(L"f8");
    Array PThreadedCode17900 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17899 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17900, 1, self);
    
    MethodClosure MC_SMB_f8 = new_MethodClosure((Method)PMethod17899, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f8, MC_SMB_f8);
}


static void init_SMB_verticalTab() {
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend17903 = new_Send((Optr)self, SMB_deleteToEndOfLine, 0);
    Array PThreadedCode17902 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17903, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17902, 2, PSend17903, self);
    
    MethodClosure MC_SMB_verticalTab = new_MethodClosure((Method)PMethod17901, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_verticalTab, MC_SMB_verticalTab);
}


static void init_SMB_select() {
    Symbol SMB_select = new_Symbol(L"select");
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17906 = new_Send((Optr)self, SMB_end, 0);
    Array PThreadedCode17905 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17906, (Optr)&t_method_return);
    Method PMethod17904 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17905, 1, PSend17906);
    
    MethodClosure MC_SMB_select = new_MethodClosure((Method)PMethod17904, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_select, MC_SMB_select);
}


static void init_SMB_find() {
    Symbol SMB_find = new_Symbol(L"find");
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend17909 = new_Send((Optr)self, SMB_home, 0);
    Array PThreadedCode17908 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17909, (Optr)&t_method_return);
    Method PMethod17907 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17908, 1, PSend17909);
    
    MethodClosure MC_SMB_find = new_MethodClosure((Method)PMethod17907, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_find, MC_SMB_find);
}


static void init_SMB_alt_() {
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17911 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17914 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17916 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend17917 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)PSend17916);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend17921 = new_Send((Optr)self, SMB_openLine, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17922 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17921);
    Array PThreadedCode17920 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17921, (Optr)&t_send1, (Optr)PSend17922, (Optr)&t_block_return);
    Block PBlock17919 = new_Block_with(empty_Array, empty_Array, PThreadedCode17920, 1, PSend17922);
    // ifTrue:. 
    Send PSend17918 = new_Send((Optr)PSend17917, SMB_ifTrue_, 1, (Optr)PBlock17919);
    Array PThreadedCode17915 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17916, (Optr)&t_send1, (Optr)PSend17917, (Optr)&t_send_ifTrue_, (Optr)PSend17918, (Optr)PBlock17919, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17913 = new_Block_with(PArray17914, empty_Array, PThreadedCode17915, 2, PSend17918, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17923 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17913);
    Array PThreadedCode17912 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17913, (Optr)&t_send1, (Optr)PSend17923, (Optr)&t_method_return);
    Method PMethod17910 = new_Method_with(PArray17911, empty_Array, empty_Array, PThreadedCode17912, 1, PSend17923);
    
    MethodClosure MC_SMB_alt_ = new_MethodClosure((Method)PMethod17910, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_alt_, MC_SMB_alt_);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    // deleteRight. 
    Send PSend17926 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteRight, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend17930 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_deleteCharacter, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend17931 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17932 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17929 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17930, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17931, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17932, (Optr)&t_block_return);
    Block PBlock17928 = new_Block_with(empty_Array, empty_Array, PThreadedCode17929, 3, PSend17930, PSend17931, PSend17932);
    // ifTrue:. 
    Send PSend17927 = new_Send((Optr)PSend17926, SMB_ifTrue_, 1, (Optr)PBlock17928);
    Array PThreadedCode17925 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17926, (Optr)&t_send_ifTrue_, (Optr)PSend17927, (Optr)PBlock17928, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17924 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17925, 2, PSend17927, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod17924, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend17935 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteToEndOfLine, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    // clearToEnd. 
    Send PSend17939 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_clearToEnd, 0);
    Array PThreadedCode17938 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17939, (Optr)&t_block_return);
    Block PBlock17937 = new_Block_with(empty_Array, empty_Array, PThreadedCode17938, 1, PSend17939);
    // ifTrue:. 
    Send PSend17936 = new_Send((Optr)PSend17935, SMB_ifTrue_, 1, (Optr)PBlock17937);
    Array PThreadedCode17934 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17935, (Optr)&t_send_ifTrue_, (Optr)PSend17936, (Optr)PBlock17937, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17933 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17934, 2, PSend17936, self);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17933, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_class_SMB_from_to_for_() {
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Variable VAR_output_0_1 = new_Variable_named(L"output", 0);
    Variable VAR_client_0_2 = new_Variable_named(L"client", 0);
    Array PArray17941 = new_Array_with(3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper17943 = new_Super(SMB_basicNew, 0);
    // from:to:for:. 
    Send PSend17944 = new_Send((Optr)PSuper17943, SMB_from_to_for_, 3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Array PThreadedCode17942 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper17943, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_client_0_2, (Optr)&t_send3, (Optr)PSend17944, (Optr)&t_method_return);
    Method PMethod17940 = new_Method_with(PArray17941, empty_Array, empty_Array, PThreadedCode17942, 1, PSend17944);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17940, HEADER(Shell_ReadLine_ReadLine_Class));
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
    init_SMB_endOfLine();
    init_SMB_f15();
    init_SMB_formfeed();
    init_SMB_enquiry();
    init_SMB_startOfHeading();
    init_SMB_f20();
    init_SMB_repaint();
    init_SMB_f6();
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
    init_SMB_deleteToEndOfLine();
    init_class_SMB_from_to_for_();
    
}