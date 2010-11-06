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
    Array PThreadedCode17664 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17663 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17664, 1, self);
    
    MethodClosure MC_SMB_f9 = new_MethodClosure((Method)PMethod17663, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f9, MC_SMB_f9);
}


static void init_SMB_right_() {
    Symbol SMB_right_ = new_Symbol(L"right:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17666 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17668 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17672 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17675 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17674 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17675, (Optr)&t_block_return);
    Block PBlock17673 = new_Block_with(empty_Array, empty_Array, PThreadedCode17674, 1, PSend17675);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17676 = new_Send((Optr)PSend17672, SMB_timesRepeat_, 1, (Optr)PBlock17673);
    Array PThreadedCode17671 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17672, (Optr)&t_push_closure, (Optr)PBlock17673, (Optr)&t_send1, (Optr)PSend17676, (Optr)&t_block_return);
    Block PBlock17670 = new_Block_with(empty_Array, empty_Array, PThreadedCode17671, 1, PSend17676);
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17681 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17680 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17681, (Optr)&t_block_return);
    Block PBlock17679 = new_Block_with(empty_Array, empty_Array, PThreadedCode17680, 1, PSend17681);
    // timesRepeat:. 
    Send PSend17682 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17679);
    Array PThreadedCode17678 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17679, (Optr)&t_send1, (Optr)PSend17682, (Optr)&t_block_return);
    Block PBlock17677 = new_Block_with(empty_Array, empty_Array, PThreadedCode17678, 1, PSend17682);
    // ifTrue:ifFalse:. 
    Send PSend17669 = new_Send((Optr)PSend17668, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17670, (Optr)PBlock17677);
    Array PThreadedCode17667 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17668, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17669, (Optr)PBlock17670, (Optr)PBlock17677, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17665 = new_Method_with(PArray17666, empty_Array, empty_Array, PThreadedCode17667, 2, PSend17669, self);
    
    MethodClosure MC_SMB_right_ = new_MethodClosure((Method)PMethod17665, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right_, MC_SMB_right_);
}


static void init_SMB_f4() {
    Symbol SMB_f4 = new_Symbol(L"f4");
    Array PThreadedCode17684 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17683 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17684, 1, self);
    
    MethodClosure MC_SMB_f4 = new_MethodClosure((Method)PMethod17683, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f4, MC_SMB_f4);
}


static void init_SMB_endOfTransmission() {
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    Array PThreadedCode17686 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17685 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17686, 1, self);
    
    MethodClosure MC_SMB_endOfTransmission = new_MethodClosure((Method)PMethod17685, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfTransmission, MC_SMB_endOfTransmission);
}


static void init_SMB_up_() {
    Symbol SMB_up_ = new_Symbol(L"up:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17688 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17690 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17694 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17697 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17696 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17697, (Optr)&t_block_return);
    Block PBlock17695 = new_Block_with(empty_Array, empty_Array, PThreadedCode17696, 1, PSend17697);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17698 = new_Send((Optr)PSend17694, SMB_timesRepeat_, 1, (Optr)PBlock17695);
    Array PThreadedCode17693 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17694, (Optr)&t_push_closure, (Optr)PBlock17695, (Optr)&t_send1, (Optr)PSend17698, (Optr)&t_block_return);
    Block PBlock17692 = new_Block_with(empty_Array, empty_Array, PThreadedCode17693, 1, PSend17698);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17703 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17702 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17703, (Optr)&t_block_return);
    Block PBlock17701 = new_Block_with(empty_Array, empty_Array, PThreadedCode17702, 1, PSend17703);
    // timesRepeat:. 
    Send PSend17704 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17701);
    Array PThreadedCode17700 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17701, (Optr)&t_send1, (Optr)PSend17704, (Optr)&t_block_return);
    Block PBlock17699 = new_Block_with(empty_Array, empty_Array, PThreadedCode17700, 1, PSend17704);
    // ifTrue:ifFalse:. 
    Send PSend17691 = new_Send((Optr)PSend17690, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17692, (Optr)PBlock17699);
    Array PThreadedCode17689 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17690, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17691, (Optr)PBlock17692, (Optr)PBlock17699, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17687 = new_Method_with(PArray17688, empty_Array, empty_Array, PThreadedCode17689, 2, PSend17691, self);
    
    MethodClosure MC_SMB_up_ = new_MethodClosure((Method)PMethod17687, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up_, MC_SMB_up_);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Array PThreadedCode17706 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17705 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17706, 1, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod17705, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend17709 = new_Send((Optr)self, SMB_startOfHeading, 0);
    Array PThreadedCode17708 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17709, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17707 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17708, 2, PSend17709, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod17707, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_f13() {
    Symbol SMB_f13 = new_Symbol(L"f13");
    Array PThreadedCode17711 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17711, 1, self);
    
    MethodClosure MC_SMB_f13 = new_MethodClosure((Method)PMethod17710, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f13, MC_SMB_f13);
}


static void init_SMB_f2() {
    Symbol SMB_f2 = new_Symbol(L"f2");
    Array PThreadedCode17713 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17712 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17713, 1, self);
    
    MethodClosure MC_SMB_f2 = new_MethodClosure((Method)PMethod17712, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f2, MC_SMB_f2);
}


static void init_SMB_nextScreen() {
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend17716 = new_Send((Optr)self, SMB_endOfText, 0);
    Array PThreadedCode17715 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17716, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17714 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17715, 2, PSend17716, self);
    
    MethodClosure MC_SMB_nextScreen = new_MethodClosure((Method)PMethod17714, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_nextScreen, MC_SMB_nextScreen);
}


static void init_SMB_f3() {
    Symbol SMB_f3 = new_Symbol(L"f3");
    Array PThreadedCode17718 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17718, 1, self);
    
    MethodClosure MC_SMB_f3 = new_MethodClosure((Method)PMethod17717, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f3, MC_SMB_f3);
}


static void init_SMB_f10() {
    Symbol SMB_f10 = new_Symbol(L"f10");
    Array PThreadedCode17720 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17720, 1, self);
    
    MethodClosure MC_SMB_f10 = new_MethodClosure((Method)PMethod17719, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f10, MC_SMB_f10);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17723 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17722 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17723, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17721 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17722, 2, PSend17723, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17721, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17725 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17728 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17727 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17728);
    // down. 
    Send PSend17729 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_down, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17733 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // down. 
    Send PSend17734 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    // column. 
    Send PSend17735 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17736 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17735);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17739 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17738 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17739, (Optr)&t_block_return);
    Block PBlock17737 = new_Block_with(empty_Array, empty_Array, PThreadedCode17738, 1, PSend17739);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17740 = new_Send((Optr)PSend17736, SMB_timesRepeat_, 1, (Optr)PBlock17737);
    Array PThreadedCode17732 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17733, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17734, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17735, (Optr)&t_send1, (Optr)PSend17736, (Optr)&t_push_closure, (Optr)PBlock17737, (Optr)&t_send1, (Optr)PSend17740, (Optr)&t_block_return);
    Block PBlock17731 = new_Block_with(empty_Array, empty_Array, PThreadedCode17732, 3, PSend17733, PSend17734, PSend17740);
    // ifTrue:. 
    Send PSend17730 = new_Send((Optr)PSend17729, SMB_ifTrue_, 1, (Optr)PBlock17731);
    Array PThreadedCode17726 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17727, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17728, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17729, (Optr)&t_send_ifTrue_, (Optr)PSend17730, (Optr)PBlock17731, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17724 = new_Method_with(empty_Array, PArray17725, empty_Array, PThreadedCode17726, 3, PAssign17727, PSend17730, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17724, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17743 = new_Send((Optr)self, SMB_backspace, 0);
    Array PThreadedCode17742 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17743, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17741 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17742, 2, PSend17743, self);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod17741, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_bell() {
    Symbol SMB_bell = new_Symbol(L"bell");
    Array PThreadedCode17745 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17745, 1, self);
    
    MethodClosure MC_SMB_bell = new_MethodClosure((Method)PMethod17744, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_bell, MC_SMB_bell);
}


static void init_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17748 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteLeft, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17752 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_backspace, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend17753 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17754 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17751 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17752, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17753, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17754, (Optr)&t_block_return);
    Block PBlock17750 = new_Block_with(empty_Array, empty_Array, PThreadedCode17751, 3, PSend17752, PSend17753, PSend17754);
    // ifTrue:. 
    Send PSend17749 = new_Send((Optr)PSend17748, SMB_ifTrue_, 1, (Optr)PBlock17750);
    Array PThreadedCode17747 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17748, (Optr)&t_send_ifTrue_, (Optr)PSend17749, (Optr)PBlock17750, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17746 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17747, 2, PSend17749, self);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod17746, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_delete, MC_SMB_delete);
}


static void init_SMB_shiftIn() {
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    Array PThreadedCode17756 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17755 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17756, 1, self);
    
    MethodClosure MC_SMB_shiftIn = new_MethodClosure((Method)PMethod17755, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftIn, MC_SMB_shiftIn);
}


static void init_SMB_openLine() {
    Symbol SMB_openLine = new_Symbol(L"openLine");
    Variable VAR_offset_0_0 = new_Variable_named(L"offset", 0);
    Array PArray17758 = new_Array_with(1, (Optr)VAR_offset_0_0);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17761 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Assign PAssign17760 = new_Assign((Optr)VAR_offset_0_0, (Optr)PSend17761);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17764 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17763 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17764, (Optr)&t_block_return);
    Block PBlock17762 = new_Block_with(empty_Array, empty_Array, PThreadedCode17763, 1, PSend17764);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17765 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17762);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17766 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17769 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17768 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17769, (Optr)&t_block_return);
    Block PBlock17767 = new_Block_with(empty_Array, empty_Array, PThreadedCode17768, 1, PSend17769);
    // timesRepeat:. 
    Send PSend17770 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17767);
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    // insertLine. 
    Send PSend17771 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_insertLine, 0);
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    // continueLine. 
    Send PSend17772 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_continueLine, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17773 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_addLine, 0);
    Array PThreadedCode17759 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign17760, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17761, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17762, (Optr)&t_send1, (Optr)PSend17765, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17766, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17767, (Optr)&t_send1, (Optr)PSend17770, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17771, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_send0, (Optr)PSend17772, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17773, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17757 = new_Method_with(empty_Array, PArray17758, empty_Array, PThreadedCode17759, 8, PAssign17760, PSend17765, PSend17766, PSend17770, PSend17771, PSend17772, PSend17773, self);
    
    MethodClosure MC_SMB_openLine = new_MethodClosure((Method)PMethod17757, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_openLine, MC_SMB_openLine);
}


static void init_SMB_moveFailure_() {
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Variable VAR_direction_0_0 = new_Variable_named(L"direction", 0);
    Array PArray17775 = new_Array_with(1, (Optr)VAR_direction_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend17779 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    // onLineBefore:. 
    Send PSend17780 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_onLineBefore_, 1, (Optr)PSend17779);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // +. 
    Send PSend17785 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Assign PAssign17784 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17785);
    Array PThreadedCode17783 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign17784, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17785, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17782 = new_Block_with(empty_Array, empty_Array, PThreadedCode17783, 1, PAssign17784);
    // ifTrue:. 
    Send PSend17781 = new_Send((Optr)PSend17780, SMB_ifTrue_, 1, (Optr)PBlock17782);
    Array PThreadedCode17778 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17779, (Optr)&t_send1, (Optr)PSend17780, (Optr)&t_send_ifTrue_, (Optr)PSend17781, (Optr)PBlock17782, (Optr)&t_block_return);
    Block PBlock17777 = new_Block_with(empty_Array, empty_Array, PThreadedCode17778, 1, PSend17781);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17786 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17777);
    Array PThreadedCode17776 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17777, (Optr)&t_send1, (Optr)PSend17786, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17774 = new_Method_with(PArray17775, empty_Array, empty_Array, PThreadedCode17776, 2, PSend17786, self);
    
    MethodClosure MC_SMB_moveFailure_ = new_MethodClosure((Method)PMethod17774, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveFailure_, MC_SMB_moveFailure_);
}


static void init_SMB_f14() {
    Symbol SMB_f14 = new_Symbol(L"f14");
    Array PThreadedCode17788 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17788, 1, self);
    
    MethodClosure MC_SMB_f14 = new_MethodClosure((Method)PMethod17787, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f14, MC_SMB_f14);
}


static void init_SMB_f17() {
    Symbol SMB_f17 = new_Symbol(L"f17");
    Array PThreadedCode17790 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17789 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17790, 1, self);
    
    MethodClosure MC_SMB_f17 = new_MethodClosure((Method)PMethod17789, Shell_ReadLine_ReadLine_Class);
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
    Array PArray17792 = new_Array_with(3, (Optr)VAR_in_0_0, (Optr)VAR_out_0_1, (Optr)VAR_c_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17795 = new_Send((Optr)PHistoryText_classReference, SMB_new, 0);
    Assign PAssign17794 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)PSend17795);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17799 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend17801 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)VAR_in_0_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend17802 = new_Send((Optr)VAR__receiver__1_0, SMB_handler_, 1, (Optr)self);
    Array PThreadedCode17800 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_in_0_0, (Optr)&t_send1, (Optr)PSend17801, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17802, (Optr)&t_method_return);
    Block PBlock17798 = new_Block_with(PArray17799, empty_Array, PThreadedCode17800, 2, PSend17801, PSend17802);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend17803 = new_Send((Optr)PVTermInputDriver_classReference, SMB_new, 0);
    // value:. 
    Send PSend17797 = new_Send((Optr)PBlock17798, SMB_value_, 1, (Optr)PSend17803);
    Assign PAssign17796 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)PSend17797);
    Assign PAssign17804 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)VAR_out_0_1);
    Assign PAssign17805 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)VAR_c_0_2);
    Array PThreadedCode17793 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign17794, (Optr)&t_push_class_reference, (Optr)PHistoryText_classReference, (Optr)&t_send0, (Optr)PSend17795, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17796, (Optr)&t_push_closure, (Optr)PBlock17798, (Optr)&t_push_class_reference, (Optr)PVTermInputDriver_classReference, (Optr)&t_send0, (Optr)PSend17803, (Optr)&t_send1, (Optr)PSend17797, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17804, (Optr)&t_push_variable, (Optr)VAR_out_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17805, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17791 = new_Method_with(PArray17792, empty_Array, empty_Array, PThreadedCode17793, 5, PAssign17794, PAssign17796, PAssign17804, PAssign17805, self);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17791, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_from_to_for_, MC_SMB_from_to_for_);
}


static void init_SMB_f12() {
    Symbol SMB_f12 = new_Symbol(L"f12");
    Array PThreadedCode17807 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17806 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17807, 1, self);
    
    MethodClosure MC_SMB_f12 = new_MethodClosure((Method)PMethod17806, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f12, MC_SMB_f12);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17809 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17811 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_add_, 1, (Optr)VAR_character_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17812 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB__shiftLeft_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // moveFailure:. 
    Send PSend17813 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17814 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17810 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17811, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17812, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17813, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17814, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17808 = new_Method_with(PArray17809, empty_Array, empty_Array, PThreadedCode17810, 5, PSend17811, PSend17812, PSend17813, PSend17814, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod17808, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_f18() {
    Symbol SMB_f18 = new_Symbol(L"f18");
    Array PThreadedCode17816 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17815 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17816, 1, self);
    
    MethodClosure MC_SMB_f18 = new_MethodClosure((Method)PMethod17815, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f18, MC_SMB_f18);
}


static void init_SMB_f5() {
    Symbol SMB_f5 = new_Symbol(L"f5");
    Array PThreadedCode17818 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17817 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17818, 1, self);
    
    MethodClosure MC_SMB_f5 = new_MethodClosure((Method)PMethod17817, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f5, MC_SMB_f5);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17821 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_left, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // left. 
    Send PSend17825 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17824 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17825, (Optr)&t_block_return);
    Block PBlock17823 = new_Block_with(empty_Array, empty_Array, PThreadedCode17824, 1, PSend17825);
    // ifTrue:. 
    Send PSend17822 = new_Send((Optr)PSend17821, SMB_ifTrue_, 1, (Optr)PBlock17823);
    Array PThreadedCode17820 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17821, (Optr)&t_send_ifTrue_, (Optr)PSend17822, (Optr)PBlock17823, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17819 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17820, 2, PSend17822, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17819, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_carriageReturn() {
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17828 = new_Send((Optr)self, SMB_lf, 0);
    Array PThreadedCode17827 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17828, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17826 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17827, 2, PSend17828, self);
    
    MethodClosure MC_SMB_carriageReturn = new_MethodClosure((Method)PMethod17826, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_carriageReturn, MC_SMB_carriageReturn);
}


static void init_SMB_moveToLine_column_() {
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    Variable VAR_line_0_0 = new_Variable_named(L"line", 0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Array PArray17830 = new_Array_with(2, (Optr)VAR_line_0_0, (Optr)VAR_col_0_1);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17832 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17833 = new_Send((Optr)VAR_col_0_1, SMB__minus_, 1, (Optr)PSend17832);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17834 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17833);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17835 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17836 = new_Send((Optr)PSend17835, SMB__minus_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17837 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17836);
    Symbol SMB_line_ = new_Symbol(L"line:");
    // line:. 
    Send PSend17838 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17839 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_1);
    Array PThreadedCode17831 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17832, (Optr)&t_send1, (Optr)PSend17833, (Optr)&t_send1, (Optr)PSend17834, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17835, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17836, (Optr)&t_send1, (Optr)PSend17837, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17838, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17839, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17829 = new_Method_with(PArray17830, empty_Array, empty_Array, PThreadedCode17831, 5, PSend17834, PSend17837, PSend17838, PSend17839, self);
    
    MethodClosure MC_SMB_moveToLine_column_ = new_MethodClosure((Method)PMethod17829, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveToLine_column_, MC_SMB_moveToLine_column_);
}


static void init_SMB_isReady() {
    Symbol SMB_isReady = new_Symbol(L"isReady");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17842 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    // isReady:. 
    Send PSend17843 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_isReady_, 1, (Optr)PSend17842);
    Array PThreadedCode17841 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17842, (Optr)&t_send1, (Optr)PSend17843, (Optr)&t_method_return);
    Method PMethod17840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17841, 1, PSend17843);
    
    MethodClosure MC_SMB_isReady = new_MethodClosure((Method)PMethod17840, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_isReady, MC_SMB_isReady);
}


static void init_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
    Array PThreadedCode17845 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17845, 1, self);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod17844, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_insert, MC_SMB_insert);
}


static void init_SMB_f7() {
    Symbol SMB_f7 = new_Symbol(L"f7");
    Array PThreadedCode17847 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17846 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17847, 1, self);
    
    MethodClosure MC_SMB_f7 = new_MethodClosure((Method)PMethod17846, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f7, MC_SMB_f7);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17850 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_right, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // right. 
    Send PSend17854 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17853 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17854, (Optr)&t_block_return);
    Block PBlock17852 = new_Block_with(empty_Array, empty_Array, PThreadedCode17853, 1, PSend17854);
    // ifTrue:. 
    Send PSend17851 = new_Send((Optr)PSend17850, SMB_ifTrue_, 1, (Optr)PBlock17852);
    Array PThreadedCode17849 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17850, (Optr)&t_send_ifTrue_, (Optr)PSend17851, (Optr)PBlock17852, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17848 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17849, 2, PSend17851, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17848, Shell_ReadLine_ReadLine_Class);
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
    Send PSend17857 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)int_1_Const, (Optr)int_0_Const);
    Array PThreadedCode17856 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend17857, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17855 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17856, 2, PSend17857, self);
    
    MethodClosure MC_SMB_startOfText = new_MethodClosure((Method)PMethod17855, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfText, MC_SMB_startOfText);
}


static void init_SMB_f1() {
    Symbol SMB_f1 = new_Symbol(L"f1");
    Array PThreadedCode17859 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17859, 1, self);
    
    MethodClosure MC_SMB_f1 = new_MethodClosure((Method)PMethod17858, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f1, MC_SMB_f1);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17861 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17864 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17863 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17864);
    // endOfLine. 
    Send PSend17865 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_endOfLine, 0);
    // column. 
    Send PSend17866 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17867 = new_Send((Optr)PSend17866, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17868 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17867);
    Array PThreadedCode17862 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17863, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17864, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17865, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17866, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17867, (Optr)&t_send1, (Optr)PSend17868, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17860 = new_Method_with(empty_Array, PArray17861, empty_Array, PThreadedCode17862, 4, PAssign17863, PSend17865, PSend17868, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17860, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_f15() {
    Symbol SMB_f15 = new_Symbol(L"f15");
    Array PThreadedCode17870 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17869 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17870, 1, self);
    
    MethodClosure MC_SMB_f15 = new_MethodClosure((Method)PMethod17869, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f15, MC_SMB_f15);
}


static void init_SMB_formfeed() {
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    Array PThreadedCode17872 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17871 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17872, 1, self);
    
    MethodClosure MC_SMB_formfeed = new_MethodClosure((Method)PMethod17871, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_formfeed, MC_SMB_formfeed);
}


static void init_SMB_enquiry() {
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17875 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17874 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17875, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17873 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17874, 2, PSend17875, self);
    
    MethodClosure MC_SMB_enquiry = new_MethodClosure((Method)PMethod17873, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_enquiry, MC_SMB_enquiry);
}


static void init_SMB_startOfHeading() {
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17877 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17880 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17879 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17880);
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    // startOfLine. 
    Send PSend17881 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_startOfLine, 0);
    // column. 
    Send PSend17882 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17883 = new_Send((Optr)PSend17882, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17884 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17883);
    Array PThreadedCode17878 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17879, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17880, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17881, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17882, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17883, (Optr)&t_send1, (Optr)PSend17884, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17876 = new_Method_with(empty_Array, PArray17877, empty_Array, PThreadedCode17878, 4, PAssign17879, PSend17881, PSend17884, self);
    
    MethodClosure MC_SMB_startOfHeading = new_MethodClosure((Method)PMethod17876, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfHeading, MC_SMB_startOfHeading);
}


static void init_SMB_f20() {
    Symbol SMB_f20 = new_Symbol(L"f20");
    Array PThreadedCode17886 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17885 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17886, 1, self);
    
    MethodClosure MC_SMB_f20 = new_MethodClosure((Method)PMethod17885, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f20, MC_SMB_f20);
}


static void init_SMB_repaint() {
    Symbol SMB_repaint = new_Symbol(L"repaint");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_1 = new_Variable_named(L"line", 0);
    Array PArray17888 = new_Array_with(2, (Optr)VAR_col_0_0, (Optr)VAR_line_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17891 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    // parsesUntil. 
    Send PSend17893 = new_Send((Optr)self, SMB_parsesUntil, 0);
    Variable VAR_newpos_2_0 = new_Variable_named(L"newpos", 2);
    Array PArray17895 = new_Array_with(1, (Optr)VAR_newpos_2_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17898 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17897 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17898);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17900 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17899 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17900);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend17903 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend17904 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__equals_, 1, (Optr)PSend17903);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17908 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17907 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17908, (Optr)&t_block_return);
    Block PBlock17906 = new_Block_with(empty_Array, empty_Array, PThreadedCode17907, 1, PSend17908);
    // ifTrue:. 
    Send PSend17905 = new_Send((Optr)PSend17904, SMB_ifTrue_, 1, (Optr)PBlock17906);
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    // repaintAt:. 
    Send PSend17909 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Array PThreadedCode17902 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17903, (Optr)&t_send1, (Optr)PSend17904, (Optr)&t_send_ifTrue_, (Optr)PSend17905, (Optr)PBlock17906, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17909, (Optr)&t_block_return);
    Block PBlock17901 = new_Block_with(empty_Array, empty_Array, PThreadedCode17902, 2, PSend17905, PSend17909);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17910 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17901);
    // +. 
    Send PSend17912 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17911 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17912);
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    // errorColor. 
    Send PSend17913 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_errorColor, 0);
    // repaintAt:. 
    Send PSend17914 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend17915 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend17916 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_normal, 0);
    // escape:. 
    Send PSend17917 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17916);
    Array PThreadedCode17896 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign17897, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17898, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17899, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17900, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17901, (Optr)&t_send1, (Optr)PSend17910, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17911, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17912, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17913, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17914, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17915, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17916, (Optr)&t_send1, (Optr)PSend17917, (Optr)&t_method_return);
    Block PBlock17894 = new_Block_with(PArray17895, empty_Array, PThreadedCode17896, 8, PAssign17897, PAssign17899, PSend17910, PAssign17911, PSend17913, PSend17914, PSend17915, PSend17917);
    // ifNotNil:. 
    Send PSend17918 = new_Send((Optr)PSend17893, SMB_ifNotNil_, 1, (Optr)PBlock17894);
    // column. 
    Send PSend17922 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17921 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17922);
    // line. 
    Send PSend17924 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17923 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17924);
    // repaintAt:. 
    Send PSend17925 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    // moveToLine:column:. 
    Send PSend17926 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Array PThreadedCode17920 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign17921, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17922, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17923, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17924, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17925, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17926, (Optr)&t_block_return);
    Block PBlock17919 = new_Block_with(empty_Array, empty_Array, PThreadedCode17920, 4, PAssign17921, PAssign17923, PSend17925, PSend17926);
    // ifNotNil:. 
    Send PSend17927 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17919);
    Assign PAssign17928 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17892 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17893, (Optr)&t_push_closure, (Optr)PBlock17894, (Optr)&t_send1, (Optr)PSend17918, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17919, (Optr)&t_send1, (Optr)PSend17927, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17928, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17890 = new_Block_with(PArray17891, empty_Array, PThreadedCode17892, 4, PSend17918, PSend17927, PAssign17928, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17929 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17890);
    Array PThreadedCode17889 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17890, (Optr)&t_send1, (Optr)PSend17929, (Optr)&t_method_return);
    Method PMethod17887 = new_Method_with(empty_Array, PArray17888, empty_Array, PThreadedCode17889, 1, PSend17929);
    
    MethodClosure MC_SMB_repaint = new_MethodClosure((Method)PMethod17887, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaint, MC_SMB_repaint);
}


static void init_SMB_f6() {
    Symbol SMB_f6 = new_Symbol(L"f6");
    Array PThreadedCode17931 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17930 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17931, 1, self);
    
    MethodClosure MC_SMB_f6 = new_MethodClosure((Method)PMethod17930, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f6, MC_SMB_f6);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    Array PThreadedCode17933 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17932 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17933, 1, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod17932, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_shiftOut() {
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    Array PThreadedCode17935 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17934 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17935, 1, self);
    
    MethodClosure MC_SMB_shiftOut = new_MethodClosure((Method)PMethod17934, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftOut, MC_SMB_shiftOut);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Assign PAssign17938 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)false_Const);
    // clear. 
    Send PSend17939 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_clear, 0);
    Assign PAssign17940 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17937 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign17938, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17939, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17940, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17936 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17937, 4, PAssign17938, PSend17939, PAssign17940, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17936, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17943 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode17945 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)&t_block_return);
    Block PBlock17944 = new_Block_with(empty_Array, empty_Array, PThreadedCode17945, 1, slot_Shell_ReadLine_ReadLine_ready);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend17948 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_vterm, SMB_read, 0);
    Array PThreadedCode17947 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)&t_send0, (Optr)PSend17948, (Optr)&t_block_return);
    Block PBlock17946 = new_Block_with(empty_Array, empty_Array, PThreadedCode17947, 1, PSend17948);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend17949 = new_Send((Optr)PBlock17944, SMB_whileFalse_, 1, (Optr)PBlock17946);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17950 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Array PThreadedCode17942 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17943, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17944, (Optr)&t_push_closure, (Optr)PBlock17946, (Optr)&t_send1, (Optr)PSend17949, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17950, (Optr)&t_method_return);
    Method PMethod17941 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17942, 3, PSend17943, PSend17949, PSend17950);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PMethod17941, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17954 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isReady = new_Symbol(L"isReady");
    // isReady. 
    Send PSend17956 = new_Send((Optr)self, SMB_isReady, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ready = new_Symbol(L"ready");
    // ready. 
    Send PSend17960 = new_Send((Optr)self, SMB_ready, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17961 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17960);
    Array PThreadedCode17959 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17960, (Optr)&t_send1, (Optr)PSend17961, (Optr)&t_block_return);
    Block PBlock17958 = new_Block_with(empty_Array, empty_Array, PThreadedCode17959, 1, PSend17961);
    // ifTrue:. 
    Send PSend17957 = new_Send((Optr)PSend17956, SMB_ifTrue_, 1, (Optr)PBlock17958);
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend17962 = new_Send((Optr)self, SMB_openLine, 0);
    Array PThreadedCode17955 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17956, (Optr)&t_send_ifTrue_, (Optr)PSend17957, (Optr)PBlock17958, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17962, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17953 = new_Block_with(PArray17954, empty_Array, PThreadedCode17955, 3, PSend17957, PSend17962, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17963 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17953);
    Array PThreadedCode17952 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17953, (Optr)&t_send1, (Optr)PSend17963, (Optr)&t_method_return);
    Method PMethod17951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17952, 1, PSend17963);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod17951, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_repaintAt_() {
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17965 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_2 = new_Variable_named(L"line", 0);
    Array PArray17966 = new_Array_with(2, (Optr)VAR_col_0_1, (Optr)VAR_line_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17969 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17972 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17971 = new_Assign((Optr)VAR_col_0_1, (Optr)PSend17972);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17974 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17973 = new_Assign((Optr)VAR_line_0_2, (Optr)PSend17974);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17975 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_position_, 1, (Optr)VAR_position_0_0);
    // column. 
    Send PSend17976 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17977 = new_Send((Optr)PSend17976, SMB__minus_, 1, (Optr)VAR_col_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17978 = new_Send((Optr)PSend17977, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17979 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17978);
    // line. 
    Send PSend17980 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17981 = new_Send((Optr)VAR_line_0_2, SMB__minus_, 1, (Optr)PSend17980);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17982 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17981);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17983 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentLine, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17984 = new_Send((Optr)PSend17983, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17985 = new_Send((Optr)PSend17984, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17989 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17990 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17988 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17989, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17990, (Optr)&t_block_return);
    Block PBlock17987 = new_Block_with(empty_Array, empty_Array, PThreadedCode17988, 2, PSend17989, PSend17990);
    // ifTrue:. 
    Send PSend17986 = new_Send((Optr)PSend17985, SMB_ifTrue_, 1, (Optr)PBlock17987);
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    // currentCharacter. 
    Send PSend17991 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentCharacter, 0);
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    // overwrite:. 
    Send PSend17992 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_overwrite_, 1, (Optr)PSend17991);
    Array PThreadedCode17970 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push1, (Optr)PAssign17971, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17972, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17973, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17974, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_send1, (Optr)PSend17975, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17976, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17977, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17978, (Optr)&t_send1, (Optr)PSend17979, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_2, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17980, (Optr)&t_send1, (Optr)PSend17981, (Optr)&t_send1, (Optr)PSend17982, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17983, (Optr)&t_send0, (Optr)PSend17984, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17985, (Optr)&t_send_ifTrue_, (Optr)PSend17986, (Optr)PBlock17987, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17991, (Optr)&t_send1, (Optr)PSend17992, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17968 = new_Block_with(PArray17969, empty_Array, PThreadedCode17970, 8, PAssign17971, PAssign17973, PSend17975, PSend17979, PSend17982, PSend17986, PSend17992, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17993 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17968);
    Array PThreadedCode17967 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17968, (Optr)&t_send1, (Optr)PSend17993, (Optr)&t_method_return);
    Method PMethod17964 = new_Method_with(PArray17965, PArray17966, empty_Array, PThreadedCode17967, 1, PSend17993);
    
    MethodClosure MC_SMB_repaintAt_ = new_MethodClosure((Method)PMethod17964, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaintAt_, MC_SMB_repaintAt_);
}


static void init_SMB_f16() {
    Symbol SMB_f16 = new_Symbol(L"f16");
    Array PThreadedCode17995 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17994 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17995, 1, self);
    
    MethodClosure MC_SMB_f16 = new_MethodClosure((Method)PMethod17994, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f16, MC_SMB_f16);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17997 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18000 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17999 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18000);
    // up. 
    Send PSend18001 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_up, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18005 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // up. 
    Send PSend18006 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    // column. 
    Send PSend18007 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18008 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend18007);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend18011 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18010 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18011, (Optr)&t_block_return);
    Block PBlock18009 = new_Block_with(empty_Array, empty_Array, PThreadedCode18010, 1, PSend18011);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18012 = new_Send((Optr)PSend18008, SMB_timesRepeat_, 1, (Optr)PBlock18009);
    Array PThreadedCode18004 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18005, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18006, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18007, (Optr)&t_send1, (Optr)PSend18008, (Optr)&t_push_closure, (Optr)PBlock18009, (Optr)&t_send1, (Optr)PSend18012, (Optr)&t_block_return);
    Block PBlock18003 = new_Block_with(empty_Array, empty_Array, PThreadedCode18004, 3, PSend18005, PSend18006, PSend18012);
    // ifTrue:. 
    Send PSend18002 = new_Send((Optr)PSend18001, SMB_ifTrue_, 1, (Optr)PBlock18003);
    Array PThreadedCode17998 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17999, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18000, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18001, (Optr)&t_send_ifTrue_, (Optr)PSend18002, (Optr)PBlock18003, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17996 = new_Method_with(empty_Array, PArray17997, empty_Array, PThreadedCode17998, 3, PAssign17999, PSend18002, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17996, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_parsesUntil() {
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18015 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    // parsesUntil:. 
    Send PSend18016 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_parsesUntil_, 1, (Optr)PSend18015);
    Array PThreadedCode18014 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18015, (Optr)&t_send1, (Optr)PSend18016, (Optr)&t_method_return);
    Method PMethod18013 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18014, 1, PSend18016);
    
    MethodClosure MC_SMB_parsesUntil = new_MethodClosure((Method)PMethod18013, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_parsesUntil, MC_SMB_parsesUntil);
}


static void init_SMB_acknowledge() {
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    Array PThreadedCode18018 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18017 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18018, 1, self);
    
    MethodClosure MC_SMB_acknowledge = new_MethodClosure((Method)PMethod18017, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_acknowledge, MC_SMB_acknowledge);
}


static void init_SMB_previousScreen() {
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend18021 = new_Send((Optr)self, SMB_startOfText, 0);
    Array PThreadedCode18020 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18021, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18019 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18020, 2, PSend18021, self);
    
    MethodClosure MC_SMB_previousScreen = new_MethodClosure((Method)PMethod18019, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_previousScreen, MC_SMB_previousScreen);
}


static void init_SMB_ready() {
    Symbol SMB_ready = new_Symbol(L"ready");
    Assign PAssign18024 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)true_Const);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend18025 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend18028 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode18027 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18028, (Optr)&t_block_return);
    Block PBlock18026 = new_Block_with(empty_Array, empty_Array, PThreadedCode18027, 1, PSend18028);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18029 = new_Send((Optr)PSend18025, SMB_timesRepeat_, 1, (Optr)PBlock18026);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18030 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Array PThreadedCode18023 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign18024, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18025, (Optr)&t_push_closure, (Optr)PBlock18026, (Optr)&t_send1, (Optr)PSend18029, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18030, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18022 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18023, 4, PAssign18024, PSend18029, PSend18030, self);
    
    MethodClosure MC_SMB_ready = new_MethodClosure((Method)PMethod18022, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_ready, MC_SMB_ready);
}


static void init_SMB_f11() {
    Symbol SMB_f11 = new_Symbol(L"f11");
    Array PThreadedCode18032 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18031 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18032, 1, self);
    
    MethodClosure MC_SMB_f11 = new_MethodClosure((Method)PMethod18031, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f11, MC_SMB_f11);
}


static void init_SMB_endOfText() {
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    Symbol SMB_lines = new_Symbol(L"lines");
    // lines. 
    Send PSend18035 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lines, 0);
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    // lastColumns. 
    Send PSend18036 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lastColumns, 0);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18037 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)PSend18035, (Optr)PSend18036);
    Array PThreadedCode18034 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18035, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18036, (Optr)&t_send2, (Optr)PSend18037, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18033 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18034, 2, PSend18037, self);
    
    MethodClosure MC_SMB_endOfText = new_MethodClosure((Method)PMethod18033, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfText, MC_SMB_endOfText);
}


static void init_SMB_f19() {
    Symbol SMB_f19 = new_Symbol(L"f19");
    Array PThreadedCode18039 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18039, 1, self);
    
    MethodClosure MC_SMB_f19 = new_MethodClosure((Method)PMethod18038, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f19, MC_SMB_f19);
}


static void init_SMB_f8() {
    Symbol SMB_f8 = new_Symbol(L"f8");
    Array PThreadedCode18041 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18041, 1, self);
    
    MethodClosure MC_SMB_f8 = new_MethodClosure((Method)PMethod18040, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f8, MC_SMB_f8);
}


static void init_SMB_verticalTab() {
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend18044 = new_Send((Optr)self, SMB_deleteToEndOfLine, 0);
    Array PThreadedCode18043 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18044, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18042 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18043, 2, PSend18044, self);
    
    MethodClosure MC_SMB_verticalTab = new_MethodClosure((Method)PMethod18042, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_verticalTab, MC_SMB_verticalTab);
}


static void init_SMB_select() {
    Symbol SMB_select = new_Symbol(L"select");
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend18047 = new_Send((Optr)self, SMB_end, 0);
    Array PThreadedCode18046 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18047, (Optr)&t_method_return);
    Method PMethod18045 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18046, 1, PSend18047);
    
    MethodClosure MC_SMB_select = new_MethodClosure((Method)PMethod18045, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_select, MC_SMB_select);
}


static void init_SMB_find() {
    Symbol SMB_find = new_Symbol(L"find");
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend18050 = new_Send((Optr)self, SMB_home, 0);
    Array PThreadedCode18049 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18050, (Optr)&t_method_return);
    Method PMethod18048 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18049, 1, PSend18050);
    
    MethodClosure MC_SMB_find = new_MethodClosure((Method)PMethod18048, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_find, MC_SMB_find);
}


static void init_SMB_alt_() {
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray18052 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18055 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18057 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18058 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)PSend18057);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18062 = new_Send((Optr)self, SMB_openLine, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18063 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18062);
    Array PThreadedCode18061 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18062, (Optr)&t_send1, (Optr)PSend18063, (Optr)&t_block_return);
    Block PBlock18060 = new_Block_with(empty_Array, empty_Array, PThreadedCode18061, 1, PSend18063);
    // ifTrue:. 
    Send PSend18059 = new_Send((Optr)PSend18058, SMB_ifTrue_, 1, (Optr)PBlock18060);
    Array PThreadedCode18056 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18057, (Optr)&t_send1, (Optr)PSend18058, (Optr)&t_send_ifTrue_, (Optr)PSend18059, (Optr)PBlock18060, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18054 = new_Block_with(PArray18055, empty_Array, PThreadedCode18056, 2, PSend18059, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18064 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18054);
    Array PThreadedCode18053 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18054, (Optr)&t_send1, (Optr)PSend18064, (Optr)&t_method_return);
    Method PMethod18051 = new_Method_with(PArray18052, empty_Array, empty_Array, PThreadedCode18053, 1, PSend18064);
    
    MethodClosure MC_SMB_alt_ = new_MethodClosure((Method)PMethod18051, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_alt_, MC_SMB_alt_);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    // deleteRight. 
    Send PSend18067 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteRight, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend18071 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_deleteCharacter, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend18072 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18073 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18070 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18071, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend18072, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18073, (Optr)&t_block_return);
    Block PBlock18069 = new_Block_with(empty_Array, empty_Array, PThreadedCode18070, 3, PSend18071, PSend18072, PSend18073);
    // ifTrue:. 
    Send PSend18068 = new_Send((Optr)PSend18067, SMB_ifTrue_, 1, (Optr)PBlock18069);
    Array PThreadedCode18066 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18067, (Optr)&t_send_ifTrue_, (Optr)PSend18068, (Optr)PBlock18069, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18065 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18066, 2, PSend18068, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod18065, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend18076 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteToEndOfLine, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    // clearToEnd. 
    Send PSend18080 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_clearToEnd, 0);
    Array PThreadedCode18079 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18080, (Optr)&t_block_return);
    Block PBlock18078 = new_Block_with(empty_Array, empty_Array, PThreadedCode18079, 1, PSend18080);
    // ifTrue:. 
    Send PSend18077 = new_Send((Optr)PSend18076, SMB_ifTrue_, 1, (Optr)PBlock18078);
    Array PThreadedCode18075 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18076, (Optr)&t_send_ifTrue_, (Optr)PSend18077, (Optr)PBlock18078, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18074 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18075, 2, PSend18077, self);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod18074, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_class_SMB_from_to_for_() {
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Variable VAR_output_0_1 = new_Variable_named(L"output", 0);
    Variable VAR_client_0_2 = new_Variable_named(L"client", 0);
    Array PArray18082 = new_Array_with(3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18084 = new_Super(SMB_basicNew, 0);
    // from:to:for:. 
    Send PSend18085 = new_Send((Optr)PSuper18084, SMB_from_to_for_, 3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Array PThreadedCode18083 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18084, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_client_0_2, (Optr)&t_send3, (Optr)PSend18085, (Optr)&t_method_return);
    Method PMethod18081 = new_Method_with(PArray18082, empty_Array, empty_Array, PThreadedCode18083, 1, PSend18085);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod18081, HEADER(Shell_ReadLine_ReadLine_Class));
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