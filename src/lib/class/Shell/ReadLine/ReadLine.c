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
    Array PThreadedCode17580 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17579 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17580, 1, self);
    
    MethodClosure MC_SMB_f9 = new_MethodClosure((Method)PMethod17579, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f9, MC_SMB_f9);
}


static void init_SMB_right_() {
    Symbol SMB_right_ = new_Symbol(L"right:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17582 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17584 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17588 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17591 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17590 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17591, (Optr)&t_block_return);
    Block PBlock17589 = new_Block_with(empty_Array, empty_Array, PThreadedCode17590, 1, PSend17591);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17592 = new_Send((Optr)PSend17588, SMB_timesRepeat_, 1, (Optr)PBlock17589);
    Array PThreadedCode17587 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17588, (Optr)&t_push_closure, (Optr)PBlock17589, (Optr)&t_send1, (Optr)PSend17592, (Optr)&t_block_return);
    Block PBlock17586 = new_Block_with(empty_Array, empty_Array, PThreadedCode17587, 1, PSend17592);
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17597 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17596 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17597, (Optr)&t_block_return);
    Block PBlock17595 = new_Block_with(empty_Array, empty_Array, PThreadedCode17596, 1, PSend17597);
    // timesRepeat:. 
    Send PSend17598 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17595);
    Array PThreadedCode17594 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17595, (Optr)&t_send1, (Optr)PSend17598, (Optr)&t_block_return);
    Block PBlock17593 = new_Block_with(empty_Array, empty_Array, PThreadedCode17594, 1, PSend17598);
    // ifTrue:ifFalse:. 
    Send PSend17585 = new_Send((Optr)PSend17584, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17586, (Optr)PBlock17593);
    Array PThreadedCode17583 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17584, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17585, (Optr)PBlock17586, (Optr)PBlock17593, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17581 = new_Method_with(PArray17582, empty_Array, empty_Array, PThreadedCode17583, 2, PSend17585, self);
    
    MethodClosure MC_SMB_right_ = new_MethodClosure((Method)PMethod17581, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right_, MC_SMB_right_);
}


static void init_SMB_f4() {
    Symbol SMB_f4 = new_Symbol(L"f4");
    Array PThreadedCode17600 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17599 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17600, 1, self);
    
    MethodClosure MC_SMB_f4 = new_MethodClosure((Method)PMethod17599, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f4, MC_SMB_f4);
}


static void init_SMB_endOfTransmission() {
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    Array PThreadedCode17602 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17601 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17602, 1, self);
    
    MethodClosure MC_SMB_endOfTransmission = new_MethodClosure((Method)PMethod17601, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfTransmission, MC_SMB_endOfTransmission);
}


static void init_SMB_up_() {
    Symbol SMB_up_ = new_Symbol(L"up:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17604 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17606 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17610 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17613 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17612 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17613, (Optr)&t_block_return);
    Block PBlock17611 = new_Block_with(empty_Array, empty_Array, PThreadedCode17612, 1, PSend17613);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17614 = new_Send((Optr)PSend17610, SMB_timesRepeat_, 1, (Optr)PBlock17611);
    Array PThreadedCode17609 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17610, (Optr)&t_push_closure, (Optr)PBlock17611, (Optr)&t_send1, (Optr)PSend17614, (Optr)&t_block_return);
    Block PBlock17608 = new_Block_with(empty_Array, empty_Array, PThreadedCode17609, 1, PSend17614);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17619 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17618 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17619, (Optr)&t_block_return);
    Block PBlock17617 = new_Block_with(empty_Array, empty_Array, PThreadedCode17618, 1, PSend17619);
    // timesRepeat:. 
    Send PSend17620 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17617);
    Array PThreadedCode17616 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17617, (Optr)&t_send1, (Optr)PSend17620, (Optr)&t_block_return);
    Block PBlock17615 = new_Block_with(empty_Array, empty_Array, PThreadedCode17616, 1, PSend17620);
    // ifTrue:ifFalse:. 
    Send PSend17607 = new_Send((Optr)PSend17606, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17608, (Optr)PBlock17615);
    Array PThreadedCode17605 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17606, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17607, (Optr)PBlock17608, (Optr)PBlock17615, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17603 = new_Method_with(PArray17604, empty_Array, empty_Array, PThreadedCode17605, 2, PSend17607, self);
    
    MethodClosure MC_SMB_up_ = new_MethodClosure((Method)PMethod17603, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up_, MC_SMB_up_);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Array PThreadedCode17622 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17621 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17622, 1, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod17621, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend17625 = new_Send((Optr)self, SMB_startOfHeading, 0);
    Array PThreadedCode17624 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17625, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17623 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17624, 2, PSend17625, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod17623, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_f13() {
    Symbol SMB_f13 = new_Symbol(L"f13");
    Array PThreadedCode17627 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17626 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17627, 1, self);
    
    MethodClosure MC_SMB_f13 = new_MethodClosure((Method)PMethod17626, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f13, MC_SMB_f13);
}


static void init_SMB_f2() {
    Symbol SMB_f2 = new_Symbol(L"f2");
    Array PThreadedCode17629 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17628 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17629, 1, self);
    
    MethodClosure MC_SMB_f2 = new_MethodClosure((Method)PMethod17628, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f2, MC_SMB_f2);
}


static void init_SMB_nextScreen() {
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend17632 = new_Send((Optr)self, SMB_endOfText, 0);
    Array PThreadedCode17631 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17632, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17631, 2, PSend17632, self);
    
    MethodClosure MC_SMB_nextScreen = new_MethodClosure((Method)PMethod17630, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_nextScreen, MC_SMB_nextScreen);
}


static void init_SMB_f3() {
    Symbol SMB_f3 = new_Symbol(L"f3");
    Array PThreadedCode17634 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17633 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17634, 1, self);
    
    MethodClosure MC_SMB_f3 = new_MethodClosure((Method)PMethod17633, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f3, MC_SMB_f3);
}


static void init_SMB_f10() {
    Symbol SMB_f10 = new_Symbol(L"f10");
    Array PThreadedCode17636 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17635 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17636, 1, self);
    
    MethodClosure MC_SMB_f10 = new_MethodClosure((Method)PMethod17635, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f10, MC_SMB_f10);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17639 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17638 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17639, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17637 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17638, 2, PSend17639, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17637, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17641 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17644 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17643 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17644);
    // down. 
    Send PSend17645 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_down, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17649 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // down. 
    Send PSend17650 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    // column. 
    Send PSend17651 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17652 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17651);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17655 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17654 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17655, (Optr)&t_block_return);
    Block PBlock17653 = new_Block_with(empty_Array, empty_Array, PThreadedCode17654, 1, PSend17655);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17656 = new_Send((Optr)PSend17652, SMB_timesRepeat_, 1, (Optr)PBlock17653);
    Array PThreadedCode17648 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17649, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17650, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17651, (Optr)&t_send1, (Optr)PSend17652, (Optr)&t_push_closure, (Optr)PBlock17653, (Optr)&t_send1, (Optr)PSend17656, (Optr)&t_block_return);
    Block PBlock17647 = new_Block_with(empty_Array, empty_Array, PThreadedCode17648, 3, PSend17649, PSend17650, PSend17656);
    // ifTrue:. 
    Send PSend17646 = new_Send((Optr)PSend17645, SMB_ifTrue_, 1, (Optr)PBlock17647);
    Array PThreadedCode17642 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17643, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17644, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17645, (Optr)&t_send_ifTrue_, (Optr)PSend17646, (Optr)PBlock17647, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17640 = new_Method_with(empty_Array, PArray17641, empty_Array, PThreadedCode17642, 3, PAssign17643, PSend17646, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17640, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17659 = new_Send((Optr)self, SMB_backspace, 0);
    Array PThreadedCode17658 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17659, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17658, 2, PSend17659, self);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod17657, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_bell() {
    Symbol SMB_bell = new_Symbol(L"bell");
    Array PThreadedCode17661 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17660 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17661, 1, self);
    
    MethodClosure MC_SMB_bell = new_MethodClosure((Method)PMethod17660, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_bell, MC_SMB_bell);
}


static void init_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17664 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteLeft, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17668 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_backspace, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend17669 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17670 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17667 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17668, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17669, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17670, (Optr)&t_block_return);
    Block PBlock17666 = new_Block_with(empty_Array, empty_Array, PThreadedCode17667, 3, PSend17668, PSend17669, PSend17670);
    // ifTrue:. 
    Send PSend17665 = new_Send((Optr)PSend17664, SMB_ifTrue_, 1, (Optr)PBlock17666);
    Array PThreadedCode17663 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17664, (Optr)&t_send_ifTrue_, (Optr)PSend17665, (Optr)PBlock17666, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17662 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17663, 2, PSend17665, self);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod17662, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_delete, MC_SMB_delete);
}


static void init_SMB_shiftIn() {
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    Array PThreadedCode17672 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17671 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17672, 1, self);
    
    MethodClosure MC_SMB_shiftIn = new_MethodClosure((Method)PMethod17671, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftIn, MC_SMB_shiftIn);
}


static void init_SMB_openLine() {
    Symbol SMB_openLine = new_Symbol(L"openLine");
    Variable VAR_offset_0_0 = new_Variable_named(L"offset", 0);
    Array PArray17674 = new_Array_with(1, (Optr)VAR_offset_0_0);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17677 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Assign PAssign17676 = new_Assign((Optr)VAR_offset_0_0, (Optr)PSend17677);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17680 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17679 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17680, (Optr)&t_block_return);
    Block PBlock17678 = new_Block_with(empty_Array, empty_Array, PThreadedCode17679, 1, PSend17680);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17681 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17678);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17682 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17685 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17684 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17685, (Optr)&t_block_return);
    Block PBlock17683 = new_Block_with(empty_Array, empty_Array, PThreadedCode17684, 1, PSend17685);
    // timesRepeat:. 
    Send PSend17686 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17683);
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    // insertLine. 
    Send PSend17687 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_insertLine, 0);
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    // continueLine. 
    Send PSend17688 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_continueLine, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17689 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_addLine, 0);
    Array PThreadedCode17675 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign17676, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17677, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17678, (Optr)&t_send1, (Optr)PSend17681, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17682, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17683, (Optr)&t_send1, (Optr)PSend17686, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17687, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_send0, (Optr)PSend17688, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17689, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17673 = new_Method_with(empty_Array, PArray17674, empty_Array, PThreadedCode17675, 8, PAssign17676, PSend17681, PSend17682, PSend17686, PSend17687, PSend17688, PSend17689, self);
    
    MethodClosure MC_SMB_openLine = new_MethodClosure((Method)PMethod17673, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_openLine, MC_SMB_openLine);
}


static void init_SMB_moveFailure_() {
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Variable VAR_direction_0_0 = new_Variable_named(L"direction", 0);
    Array PArray17691 = new_Array_with(1, (Optr)VAR_direction_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend17695 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    // onLineBefore:. 
    Send PSend17696 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_onLineBefore_, 1, (Optr)PSend17695);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // +. 
    Send PSend17701 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Assign PAssign17700 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17701);
    Array PThreadedCode17699 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign17700, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17701, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17698 = new_Block_with(empty_Array, empty_Array, PThreadedCode17699, 1, PAssign17700);
    // ifTrue:. 
    Send PSend17697 = new_Send((Optr)PSend17696, SMB_ifTrue_, 1, (Optr)PBlock17698);
    Array PThreadedCode17694 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17695, (Optr)&t_send1, (Optr)PSend17696, (Optr)&t_send_ifTrue_, (Optr)PSend17697, (Optr)PBlock17698, (Optr)&t_block_return);
    Block PBlock17693 = new_Block_with(empty_Array, empty_Array, PThreadedCode17694, 1, PSend17697);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17702 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17693);
    Array PThreadedCode17692 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17693, (Optr)&t_send1, (Optr)PSend17702, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17690 = new_Method_with(PArray17691, empty_Array, empty_Array, PThreadedCode17692, 2, PSend17702, self);
    
    MethodClosure MC_SMB_moveFailure_ = new_MethodClosure((Method)PMethod17690, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveFailure_, MC_SMB_moveFailure_);
}


static void init_SMB_f14() {
    Symbol SMB_f14 = new_Symbol(L"f14");
    Array PThreadedCode17704 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17704, 1, self);
    
    MethodClosure MC_SMB_f14 = new_MethodClosure((Method)PMethod17703, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f14, MC_SMB_f14);
}


static void init_SMB_f17() {
    Symbol SMB_f17 = new_Symbol(L"f17");
    Array PThreadedCode17706 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17706, 1, self);
    
    MethodClosure MC_SMB_f17 = new_MethodClosure((Method)PMethod17705, Shell_ReadLine_ReadLine_Class);
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
    Array PArray17708 = new_Array_with(3, (Optr)VAR_in_0_0, (Optr)VAR_out_0_1, (Optr)VAR_c_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17711 = new_Send((Optr)PHistoryText_classReference, SMB_new, 0);
    Assign PAssign17710 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)PSend17711);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17715 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend17717 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)VAR_in_0_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend17718 = new_Send((Optr)VAR__receiver__1_0, SMB_handler_, 1, (Optr)self);
    Array PThreadedCode17716 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_in_0_0, (Optr)&t_send1, (Optr)PSend17717, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17718, (Optr)&t_method_return);
    Block PBlock17714 = new_Block_with(PArray17715, empty_Array, PThreadedCode17716, 2, PSend17717, PSend17718);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend17719 = new_Send((Optr)PVTermInputDriver_classReference, SMB_new, 0);
    // value:. 
    Send PSend17713 = new_Send((Optr)PBlock17714, SMB_value_, 1, (Optr)PSend17719);
    Assign PAssign17712 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)PSend17713);
    Assign PAssign17720 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)VAR_out_0_1);
    Assign PAssign17721 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)VAR_c_0_2);
    Array PThreadedCode17709 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign17710, (Optr)&t_push_class_reference, (Optr)PHistoryText_classReference, (Optr)&t_send0, (Optr)PSend17711, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17712, (Optr)&t_push_closure, (Optr)PBlock17714, (Optr)&t_push_class_reference, (Optr)PVTermInputDriver_classReference, (Optr)&t_send0, (Optr)PSend17719, (Optr)&t_send1, (Optr)PSend17713, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17720, (Optr)&t_push_variable, (Optr)VAR_out_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17721, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17707 = new_Method_with(PArray17708, empty_Array, empty_Array, PThreadedCode17709, 5, PAssign17710, PAssign17712, PAssign17720, PAssign17721, self);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17707, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_from_to_for_, MC_SMB_from_to_for_);
}


static void init_SMB_f12() {
    Symbol SMB_f12 = new_Symbol(L"f12");
    Array PThreadedCode17723 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17722 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17723, 1, self);
    
    MethodClosure MC_SMB_f12 = new_MethodClosure((Method)PMethod17722, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f12, MC_SMB_f12);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17725 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17727 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_add_, 1, (Optr)VAR_character_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17728 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB__shiftLeft_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // moveFailure:. 
    Send PSend17729 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17730 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17726 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17727, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17728, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17729, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17730, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17724 = new_Method_with(PArray17725, empty_Array, empty_Array, PThreadedCode17726, 5, PSend17727, PSend17728, PSend17729, PSend17730, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod17724, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_f18() {
    Symbol SMB_f18 = new_Symbol(L"f18");
    Array PThreadedCode17732 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17731 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17732, 1, self);
    
    MethodClosure MC_SMB_f18 = new_MethodClosure((Method)PMethod17731, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f18, MC_SMB_f18);
}


static void init_SMB_f5() {
    Symbol SMB_f5 = new_Symbol(L"f5");
    Array PThreadedCode17734 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17734, 1, self);
    
    MethodClosure MC_SMB_f5 = new_MethodClosure((Method)PMethod17733, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f5, MC_SMB_f5);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17737 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_left, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // left. 
    Send PSend17741 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17740 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17741, (Optr)&t_block_return);
    Block PBlock17739 = new_Block_with(empty_Array, empty_Array, PThreadedCode17740, 1, PSend17741);
    // ifTrue:. 
    Send PSend17738 = new_Send((Optr)PSend17737, SMB_ifTrue_, 1, (Optr)PBlock17739);
    Array PThreadedCode17736 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17737, (Optr)&t_send_ifTrue_, (Optr)PSend17738, (Optr)PBlock17739, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17735 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17736, 2, PSend17738, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17735, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_carriageReturn() {
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17744 = new_Send((Optr)self, SMB_lf, 0);
    Array PThreadedCode17743 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17744, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17743, 2, PSend17744, self);
    
    MethodClosure MC_SMB_carriageReturn = new_MethodClosure((Method)PMethod17742, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_carriageReturn, MC_SMB_carriageReturn);
}


static void init_SMB_moveToLine_column_() {
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    Variable VAR_line_0_0 = new_Variable_named(L"line", 0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Array PArray17746 = new_Array_with(2, (Optr)VAR_line_0_0, (Optr)VAR_col_0_1);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17748 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17749 = new_Send((Optr)VAR_col_0_1, SMB__minus_, 1, (Optr)PSend17748);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17750 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17749);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17751 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17752 = new_Send((Optr)PSend17751, SMB__minus_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17753 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17752);
    Symbol SMB_line_ = new_Symbol(L"line:");
    // line:. 
    Send PSend17754 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17755 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_1);
    Array PThreadedCode17747 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17748, (Optr)&t_send1, (Optr)PSend17749, (Optr)&t_send1, (Optr)PSend17750, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17751, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17752, (Optr)&t_send1, (Optr)PSend17753, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17754, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17755, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17745 = new_Method_with(PArray17746, empty_Array, empty_Array, PThreadedCode17747, 5, PSend17750, PSend17753, PSend17754, PSend17755, self);
    
    MethodClosure MC_SMB_moveToLine_column_ = new_MethodClosure((Method)PMethod17745, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveToLine_column_, MC_SMB_moveToLine_column_);
}


static void init_SMB_isReady() {
    Symbol SMB_isReady = new_Symbol(L"isReady");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17758 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    // isReady:. 
    Send PSend17759 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_isReady_, 1, (Optr)PSend17758);
    Array PThreadedCode17757 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17758, (Optr)&t_send1, (Optr)PSend17759, (Optr)&t_method_return);
    Method PMethod17756 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17757, 1, PSend17759);
    
    MethodClosure MC_SMB_isReady = new_MethodClosure((Method)PMethod17756, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_isReady, MC_SMB_isReady);
}


static void init_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
    Array PThreadedCode17761 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17761, 1, self);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod17760, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_insert, MC_SMB_insert);
}


static void init_SMB_f7() {
    Symbol SMB_f7 = new_Symbol(L"f7");
    Array PThreadedCode17763 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17763, 1, self);
    
    MethodClosure MC_SMB_f7 = new_MethodClosure((Method)PMethod17762, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f7, MC_SMB_f7);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17766 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_right, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // right. 
    Send PSend17770 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17769 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17770, (Optr)&t_block_return);
    Block PBlock17768 = new_Block_with(empty_Array, empty_Array, PThreadedCode17769, 1, PSend17770);
    // ifTrue:. 
    Send PSend17767 = new_Send((Optr)PSend17766, SMB_ifTrue_, 1, (Optr)PBlock17768);
    Array PThreadedCode17765 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17766, (Optr)&t_send_ifTrue_, (Optr)PSend17767, (Optr)PBlock17768, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17764 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17765, 2, PSend17767, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17764, Shell_ReadLine_ReadLine_Class);
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
    Send PSend17773 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)int_1_Const, (Optr)int_0_Const);
    Array PThreadedCode17772 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend17773, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17772, 2, PSend17773, self);
    
    MethodClosure MC_SMB_startOfText = new_MethodClosure((Method)PMethod17771, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfText, MC_SMB_startOfText);
}


static void init_SMB_f1() {
    Symbol SMB_f1 = new_Symbol(L"f1");
    Array PThreadedCode17775 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17774 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17775, 1, self);
    
    MethodClosure MC_SMB_f1 = new_MethodClosure((Method)PMethod17774, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f1, MC_SMB_f1);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17777 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17780 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17779 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17780);
    // endOfLine. 
    Send PSend17781 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_endOfLine, 0);
    // column. 
    Send PSend17782 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17783 = new_Send((Optr)PSend17782, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17784 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17783);
    Array PThreadedCode17778 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17779, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17780, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17781, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17782, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17783, (Optr)&t_send1, (Optr)PSend17784, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17776 = new_Method_with(empty_Array, PArray17777, empty_Array, PThreadedCode17778, 4, PAssign17779, PSend17781, PSend17784, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17776, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_f15() {
    Symbol SMB_f15 = new_Symbol(L"f15");
    Array PThreadedCode17786 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17785 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17786, 1, self);
    
    MethodClosure MC_SMB_f15 = new_MethodClosure((Method)PMethod17785, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f15, MC_SMB_f15);
}


static void init_SMB_formfeed() {
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    Array PThreadedCode17788 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17788, 1, self);
    
    MethodClosure MC_SMB_formfeed = new_MethodClosure((Method)PMethod17787, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_formfeed, MC_SMB_formfeed);
}


static void init_SMB_enquiry() {
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17791 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17790 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17791, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17789 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17790, 2, PSend17791, self);
    
    MethodClosure MC_SMB_enquiry = new_MethodClosure((Method)PMethod17789, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_enquiry, MC_SMB_enquiry);
}


static void init_SMB_startOfHeading() {
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17793 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17796 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17795 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17796);
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    // startOfLine. 
    Send PSend17797 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_startOfLine, 0);
    // column. 
    Send PSend17798 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17799 = new_Send((Optr)PSend17798, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17800 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17799);
    Array PThreadedCode17794 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17795, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17796, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17797, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17798, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17799, (Optr)&t_send1, (Optr)PSend17800, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17792 = new_Method_with(empty_Array, PArray17793, empty_Array, PThreadedCode17794, 4, PAssign17795, PSend17797, PSend17800, self);
    
    MethodClosure MC_SMB_startOfHeading = new_MethodClosure((Method)PMethod17792, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfHeading, MC_SMB_startOfHeading);
}


static void init_SMB_f20() {
    Symbol SMB_f20 = new_Symbol(L"f20");
    Array PThreadedCode17802 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17802, 1, self);
    
    MethodClosure MC_SMB_f20 = new_MethodClosure((Method)PMethod17801, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f20, MC_SMB_f20);
}


static void init_SMB_repaint() {
    Symbol SMB_repaint = new_Symbol(L"repaint");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_1 = new_Variable_named(L"line", 0);
    Array PArray17804 = new_Array_with(2, (Optr)VAR_col_0_0, (Optr)VAR_line_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17807 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    // parsesUntil. 
    Send PSend17809 = new_Send((Optr)self, SMB_parsesUntil, 0);
    Variable VAR_newpos_2_0 = new_Variable_named(L"newpos", 2);
    Array PArray17811 = new_Array_with(1, (Optr)VAR_newpos_2_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17814 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17813 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17814);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17816 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17815 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17816);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend17819 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend17820 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__equals_, 1, (Optr)PSend17819);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17824 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17823 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17824, (Optr)&t_block_return);
    Block PBlock17822 = new_Block_with(empty_Array, empty_Array, PThreadedCode17823, 1, PSend17824);
    // ifTrue:. 
    Send PSend17821 = new_Send((Optr)PSend17820, SMB_ifTrue_, 1, (Optr)PBlock17822);
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    // repaintAt:. 
    Send PSend17825 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Array PThreadedCode17818 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17819, (Optr)&t_send1, (Optr)PSend17820, (Optr)&t_send_ifTrue_, (Optr)PSend17821, (Optr)PBlock17822, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17825, (Optr)&t_block_return);
    Block PBlock17817 = new_Block_with(empty_Array, empty_Array, PThreadedCode17818, 2, PSend17821, PSend17825);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17826 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17817);
    // +. 
    Send PSend17828 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17827 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17828);
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    // errorColor. 
    Send PSend17829 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_errorColor, 0);
    // repaintAt:. 
    Send PSend17830 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend17831 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend17832 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_normal, 0);
    // escape:. 
    Send PSend17833 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17832);
    Array PThreadedCode17812 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign17813, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17814, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17815, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17816, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17817, (Optr)&t_send1, (Optr)PSend17826, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17827, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17828, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17829, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17830, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17831, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17832, (Optr)&t_send1, (Optr)PSend17833, (Optr)&t_method_return);
    Block PBlock17810 = new_Block_with(PArray17811, empty_Array, PThreadedCode17812, 8, PAssign17813, PAssign17815, PSend17826, PAssign17827, PSend17829, PSend17830, PSend17831, PSend17833);
    // ifNotNil:. 
    Send PSend17834 = new_Send((Optr)PSend17809, SMB_ifNotNil_, 1, (Optr)PBlock17810);
    // column. 
    Send PSend17838 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17837 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17838);
    // line. 
    Send PSend17840 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17839 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17840);
    // repaintAt:. 
    Send PSend17841 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    // moveToLine:column:. 
    Send PSend17842 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Array PThreadedCode17836 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign17837, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17838, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17839, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17840, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17841, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17842, (Optr)&t_block_return);
    Block PBlock17835 = new_Block_with(empty_Array, empty_Array, PThreadedCode17836, 4, PAssign17837, PAssign17839, PSend17841, PSend17842);
    // ifNotNil:. 
    Send PSend17843 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17835);
    Assign PAssign17844 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17808 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17809, (Optr)&t_push_closure, (Optr)PBlock17810, (Optr)&t_send1, (Optr)PSend17834, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17835, (Optr)&t_send1, (Optr)PSend17843, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17844, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17806 = new_Block_with(PArray17807, empty_Array, PThreadedCode17808, 4, PSend17834, PSend17843, PAssign17844, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17845 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17806);
    Array PThreadedCode17805 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17806, (Optr)&t_send1, (Optr)PSend17845, (Optr)&t_method_return);
    Method PMethod17803 = new_Method_with(empty_Array, PArray17804, empty_Array, PThreadedCode17805, 1, PSend17845);
    
    MethodClosure MC_SMB_repaint = new_MethodClosure((Method)PMethod17803, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaint, MC_SMB_repaint);
}


static void init_SMB_f6() {
    Symbol SMB_f6 = new_Symbol(L"f6");
    Array PThreadedCode17847 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17846 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17847, 1, self);
    
    MethodClosure MC_SMB_f6 = new_MethodClosure((Method)PMethod17846, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f6, MC_SMB_f6);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    Array PThreadedCode17849 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17849, 1, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod17848, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_shiftOut() {
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    Array PThreadedCode17851 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17850 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17851, 1, self);
    
    MethodClosure MC_SMB_shiftOut = new_MethodClosure((Method)PMethod17850, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftOut, MC_SMB_shiftOut);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Assign PAssign17854 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)false_Const);
    // clear. 
    Send PSend17855 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_clear, 0);
    Assign PAssign17856 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17853 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign17854, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17855, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17856, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17853, 4, PAssign17854, PSend17855, PAssign17856, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17852, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17859 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode17861 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)&t_block_return);
    Block PBlock17860 = new_Block_with(empty_Array, empty_Array, PThreadedCode17861, 1, slot_Shell_ReadLine_ReadLine_ready);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend17864 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_vterm, SMB_read, 0);
    Array PThreadedCode17863 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)&t_send0, (Optr)PSend17864, (Optr)&t_block_return);
    Block PBlock17862 = new_Block_with(empty_Array, empty_Array, PThreadedCode17863, 1, PSend17864);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend17865 = new_Send((Optr)PBlock17860, SMB_whileFalse_, 1, (Optr)PBlock17862);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17866 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Array PThreadedCode17858 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17859, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17860, (Optr)&t_push_closure, (Optr)PBlock17862, (Optr)&t_send1, (Optr)PSend17865, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17866, (Optr)&t_method_return);
    Method PMethod17857 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17858, 3, PSend17859, PSend17865, PSend17866);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PMethod17857, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17870 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isReady = new_Symbol(L"isReady");
    // isReady. 
    Send PSend17872 = new_Send((Optr)self, SMB_isReady, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ready = new_Symbol(L"ready");
    // ready. 
    Send PSend17876 = new_Send((Optr)self, SMB_ready, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17877 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17876);
    Array PThreadedCode17875 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17876, (Optr)&t_send1, (Optr)PSend17877, (Optr)&t_block_return);
    Block PBlock17874 = new_Block_with(empty_Array, empty_Array, PThreadedCode17875, 1, PSend17877);
    // ifTrue:. 
    Send PSend17873 = new_Send((Optr)PSend17872, SMB_ifTrue_, 1, (Optr)PBlock17874);
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend17878 = new_Send((Optr)self, SMB_openLine, 0);
    Array PThreadedCode17871 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17872, (Optr)&t_send_ifTrue_, (Optr)PSend17873, (Optr)PBlock17874, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17878, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17869 = new_Block_with(PArray17870, empty_Array, PThreadedCode17871, 3, PSend17873, PSend17878, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17879 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17869);
    Array PThreadedCode17868 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17869, (Optr)&t_send1, (Optr)PSend17879, (Optr)&t_method_return);
    Method PMethod17867 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17868, 1, PSend17879);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod17867, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_repaintAt_() {
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17881 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_2 = new_Variable_named(L"line", 0);
    Array PArray17882 = new_Array_with(2, (Optr)VAR_col_0_1, (Optr)VAR_line_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17885 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17888 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17887 = new_Assign((Optr)VAR_col_0_1, (Optr)PSend17888);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17890 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17889 = new_Assign((Optr)VAR_line_0_2, (Optr)PSend17890);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17891 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_position_, 1, (Optr)VAR_position_0_0);
    // column. 
    Send PSend17892 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17893 = new_Send((Optr)PSend17892, SMB__minus_, 1, (Optr)VAR_col_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17894 = new_Send((Optr)PSend17893, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17895 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17894);
    // line. 
    Send PSend17896 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17897 = new_Send((Optr)VAR_line_0_2, SMB__minus_, 1, (Optr)PSend17896);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17898 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17897);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17899 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentLine, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17900 = new_Send((Optr)PSend17899, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17901 = new_Send((Optr)PSend17900, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17905 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17906 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17904 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17905, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17906, (Optr)&t_block_return);
    Block PBlock17903 = new_Block_with(empty_Array, empty_Array, PThreadedCode17904, 2, PSend17905, PSend17906);
    // ifTrue:. 
    Send PSend17902 = new_Send((Optr)PSend17901, SMB_ifTrue_, 1, (Optr)PBlock17903);
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    // currentCharacter. 
    Send PSend17907 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentCharacter, 0);
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    // overwrite:. 
    Send PSend17908 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_overwrite_, 1, (Optr)PSend17907);
    Array PThreadedCode17886 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push1, (Optr)PAssign17887, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17888, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17889, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17890, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_send1, (Optr)PSend17891, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17892, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17893, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17894, (Optr)&t_send1, (Optr)PSend17895, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_2, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17896, (Optr)&t_send1, (Optr)PSend17897, (Optr)&t_send1, (Optr)PSend17898, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17899, (Optr)&t_send0, (Optr)PSend17900, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17901, (Optr)&t_send_ifTrue_, (Optr)PSend17902, (Optr)PBlock17903, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17907, (Optr)&t_send1, (Optr)PSend17908, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17884 = new_Block_with(PArray17885, empty_Array, PThreadedCode17886, 8, PAssign17887, PAssign17889, PSend17891, PSend17895, PSend17898, PSend17902, PSend17908, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17909 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17884);
    Array PThreadedCode17883 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17884, (Optr)&t_send1, (Optr)PSend17909, (Optr)&t_method_return);
    Method PMethod17880 = new_Method_with(PArray17881, PArray17882, empty_Array, PThreadedCode17883, 1, PSend17909);
    
    MethodClosure MC_SMB_repaintAt_ = new_MethodClosure((Method)PMethod17880, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaintAt_, MC_SMB_repaintAt_);
}


static void init_SMB_f16() {
    Symbol SMB_f16 = new_Symbol(L"f16");
    Array PThreadedCode17911 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17910 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17911, 1, self);
    
    MethodClosure MC_SMB_f16 = new_MethodClosure((Method)PMethod17910, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f16, MC_SMB_f16);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17913 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17916 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17915 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17916);
    // up. 
    Send PSend17917 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_up, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17921 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // up. 
    Send PSend17922 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    // column. 
    Send PSend17923 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17924 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17923);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17927 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17926 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17927, (Optr)&t_block_return);
    Block PBlock17925 = new_Block_with(empty_Array, empty_Array, PThreadedCode17926, 1, PSend17927);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17928 = new_Send((Optr)PSend17924, SMB_timesRepeat_, 1, (Optr)PBlock17925);
    Array PThreadedCode17920 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17921, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17922, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17923, (Optr)&t_send1, (Optr)PSend17924, (Optr)&t_push_closure, (Optr)PBlock17925, (Optr)&t_send1, (Optr)PSend17928, (Optr)&t_block_return);
    Block PBlock17919 = new_Block_with(empty_Array, empty_Array, PThreadedCode17920, 3, PSend17921, PSend17922, PSend17928);
    // ifTrue:. 
    Send PSend17918 = new_Send((Optr)PSend17917, SMB_ifTrue_, 1, (Optr)PBlock17919);
    Array PThreadedCode17914 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17915, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17916, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17917, (Optr)&t_send_ifTrue_, (Optr)PSend17918, (Optr)PBlock17919, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17912 = new_Method_with(empty_Array, PArray17913, empty_Array, PThreadedCode17914, 3, PAssign17915, PSend17918, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17912, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_parsesUntil() {
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17931 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    // parsesUntil:. 
    Send PSend17932 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_parsesUntil_, 1, (Optr)PSend17931);
    Array PThreadedCode17930 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17931, (Optr)&t_send1, (Optr)PSend17932, (Optr)&t_method_return);
    Method PMethod17929 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17930, 1, PSend17932);
    
    MethodClosure MC_SMB_parsesUntil = new_MethodClosure((Method)PMethod17929, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_parsesUntil, MC_SMB_parsesUntil);
}


static void init_SMB_acknowledge() {
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    Array PThreadedCode17934 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17933 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17934, 1, self);
    
    MethodClosure MC_SMB_acknowledge = new_MethodClosure((Method)PMethod17933, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_acknowledge, MC_SMB_acknowledge);
}


static void init_SMB_previousScreen() {
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend17937 = new_Send((Optr)self, SMB_startOfText, 0);
    Array PThreadedCode17936 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17937, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17936, 2, PSend17937, self);
    
    MethodClosure MC_SMB_previousScreen = new_MethodClosure((Method)PMethod17935, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_previousScreen, MC_SMB_previousScreen);
}


static void init_SMB_ready() {
    Symbol SMB_ready = new_Symbol(L"ready");
    Assign PAssign17940 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)true_Const);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17941 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17944 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17943 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17944, (Optr)&t_block_return);
    Block PBlock17942 = new_Block_with(empty_Array, empty_Array, PThreadedCode17943, 1, PSend17944);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17945 = new_Send((Optr)PSend17941, SMB_timesRepeat_, 1, (Optr)PBlock17942);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17946 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Array PThreadedCode17939 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign17940, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17941, (Optr)&t_push_closure, (Optr)PBlock17942, (Optr)&t_send1, (Optr)PSend17945, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17946, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17938 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17939, 4, PAssign17940, PSend17945, PSend17946, self);
    
    MethodClosure MC_SMB_ready = new_MethodClosure((Method)PMethod17938, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_ready, MC_SMB_ready);
}


static void init_SMB_f11() {
    Symbol SMB_f11 = new_Symbol(L"f11");
    Array PThreadedCode17948 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17947 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17948, 1, self);
    
    MethodClosure MC_SMB_f11 = new_MethodClosure((Method)PMethod17947, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f11, MC_SMB_f11);
}


static void init_SMB_endOfText() {
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    Symbol SMB_lines = new_Symbol(L"lines");
    // lines. 
    Send PSend17951 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lines, 0);
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    // lastColumns. 
    Send PSend17952 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lastColumns, 0);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend17953 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)PSend17951, (Optr)PSend17952);
    Array PThreadedCode17950 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17951, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17952, (Optr)&t_send2, (Optr)PSend17953, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17949 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17950, 2, PSend17953, self);
    
    MethodClosure MC_SMB_endOfText = new_MethodClosure((Method)PMethod17949, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfText, MC_SMB_endOfText);
}


static void init_SMB_f19() {
    Symbol SMB_f19 = new_Symbol(L"f19");
    Array PThreadedCode17955 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17954 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17955, 1, self);
    
    MethodClosure MC_SMB_f19 = new_MethodClosure((Method)PMethod17954, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f19, MC_SMB_f19);
}


static void init_SMB_f8() {
    Symbol SMB_f8 = new_Symbol(L"f8");
    Array PThreadedCode17957 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17956 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17957, 1, self);
    
    MethodClosure MC_SMB_f8 = new_MethodClosure((Method)PMethod17956, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f8, MC_SMB_f8);
}


static void init_SMB_verticalTab() {
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend17960 = new_Send((Optr)self, SMB_deleteToEndOfLine, 0);
    Array PThreadedCode17959 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17960, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17958 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17959, 2, PSend17960, self);
    
    MethodClosure MC_SMB_verticalTab = new_MethodClosure((Method)PMethod17958, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_verticalTab, MC_SMB_verticalTab);
}


static void init_SMB_select() {
    Symbol SMB_select = new_Symbol(L"select");
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17963 = new_Send((Optr)self, SMB_end, 0);
    Array PThreadedCode17962 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17963, (Optr)&t_method_return);
    Method PMethod17961 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17962, 1, PSend17963);
    
    MethodClosure MC_SMB_select = new_MethodClosure((Method)PMethod17961, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_select, MC_SMB_select);
}


static void init_SMB_find() {
    Symbol SMB_find = new_Symbol(L"find");
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend17966 = new_Send((Optr)self, SMB_home, 0);
    Array PThreadedCode17965 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17966, (Optr)&t_method_return);
    Method PMethod17964 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17965, 1, PSend17966);
    
    MethodClosure MC_SMB_find = new_MethodClosure((Method)PMethod17964, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_find, MC_SMB_find);
}


static void init_SMB_alt_() {
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17968 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17971 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17973 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend17974 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)PSend17973);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend17978 = new_Send((Optr)self, SMB_openLine, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17979 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17978);
    Array PThreadedCode17977 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17978, (Optr)&t_send1, (Optr)PSend17979, (Optr)&t_block_return);
    Block PBlock17976 = new_Block_with(empty_Array, empty_Array, PThreadedCode17977, 1, PSend17979);
    // ifTrue:. 
    Send PSend17975 = new_Send((Optr)PSend17974, SMB_ifTrue_, 1, (Optr)PBlock17976);
    Array PThreadedCode17972 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17973, (Optr)&t_send1, (Optr)PSend17974, (Optr)&t_send_ifTrue_, (Optr)PSend17975, (Optr)PBlock17976, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17970 = new_Block_with(PArray17971, empty_Array, PThreadedCode17972, 2, PSend17975, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17980 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17970);
    Array PThreadedCode17969 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17970, (Optr)&t_send1, (Optr)PSend17980, (Optr)&t_method_return);
    Method PMethod17967 = new_Method_with(PArray17968, empty_Array, empty_Array, PThreadedCode17969, 1, PSend17980);
    
    MethodClosure MC_SMB_alt_ = new_MethodClosure((Method)PMethod17967, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_alt_, MC_SMB_alt_);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    // deleteRight. 
    Send PSend17983 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteRight, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend17987 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_deleteCharacter, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend17988 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17989 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17986 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17987, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17988, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17989, (Optr)&t_block_return);
    Block PBlock17985 = new_Block_with(empty_Array, empty_Array, PThreadedCode17986, 3, PSend17987, PSend17988, PSend17989);
    // ifTrue:. 
    Send PSend17984 = new_Send((Optr)PSend17983, SMB_ifTrue_, 1, (Optr)PBlock17985);
    Array PThreadedCode17982 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17983, (Optr)&t_send_ifTrue_, (Optr)PSend17984, (Optr)PBlock17985, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17981 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17982, 2, PSend17984, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod17981, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend17992 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteToEndOfLine, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    // clearToEnd. 
    Send PSend17996 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_clearToEnd, 0);
    Array PThreadedCode17995 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17996, (Optr)&t_block_return);
    Block PBlock17994 = new_Block_with(empty_Array, empty_Array, PThreadedCode17995, 1, PSend17996);
    // ifTrue:. 
    Send PSend17993 = new_Send((Optr)PSend17992, SMB_ifTrue_, 1, (Optr)PBlock17994);
    Array PThreadedCode17991 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17992, (Optr)&t_send_ifTrue_, (Optr)PSend17993, (Optr)PBlock17994, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17990 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17991, 2, PSend17993, self);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17990, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_class_SMB_from_to_for_() {
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Variable VAR_output_0_1 = new_Variable_named(L"output", 0);
    Variable VAR_client_0_2 = new_Variable_named(L"client", 0);
    Array PArray17998 = new_Array_with(3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18000 = new_Super(SMB_basicNew, 0);
    // from:to:for:. 
    Send PSend18001 = new_Send((Optr)PSuper18000, SMB_from_to_for_, 3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Array PThreadedCode17999 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18000, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_client_0_2, (Optr)&t_send3, (Optr)PSend18001, (Optr)&t_method_return);
    Method PMethod17997 = new_Method_with(PArray17998, empty_Array, empty_Array, PThreadedCode17999, 1, PSend18001);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17997, HEADER(Shell_ReadLine_ReadLine_Class));
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