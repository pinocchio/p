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
    Array PThreadedCode17653 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17652 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17653, 1, self);
    
    MethodClosure MC_SMB_f9 = new_MethodClosure((Method)PMethod17652, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f9, MC_SMB_f9);
}


static void init_SMB_right_() {
    Symbol SMB_right_ = new_Symbol(L"right:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17655 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17657 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17661 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17664 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17663 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17664, (Optr)&t_block_return);
    Block PBlock17662 = new_Block_with(empty_Array, empty_Array, PThreadedCode17663, 1, PSend17664);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17665 = new_Send((Optr)PSend17661, SMB_timesRepeat_, 1, (Optr)PBlock17662);
    Array PThreadedCode17660 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17661, (Optr)&t_push_closure, (Optr)PBlock17662, (Optr)&t_send1, (Optr)PSend17665, (Optr)&t_block_return);
    Block PBlock17659 = new_Block_with(empty_Array, empty_Array, PThreadedCode17660, 1, PSend17665);
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17670 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17669 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17670, (Optr)&t_block_return);
    Block PBlock17668 = new_Block_with(empty_Array, empty_Array, PThreadedCode17669, 1, PSend17670);
    // timesRepeat:. 
    Send PSend17671 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17668);
    Array PThreadedCode17667 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17668, (Optr)&t_send1, (Optr)PSend17671, (Optr)&t_block_return);
    Block PBlock17666 = new_Block_with(empty_Array, empty_Array, PThreadedCode17667, 1, PSend17671);
    // ifTrue:ifFalse:. 
    Send PSend17658 = new_Send((Optr)PSend17657, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17659, (Optr)PBlock17666);
    Array PThreadedCode17656 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17657, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17658, (Optr)PBlock17659, (Optr)PBlock17666, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17654 = new_Method_with(PArray17655, empty_Array, empty_Array, PThreadedCode17656, 2, PSend17658, self);
    
    MethodClosure MC_SMB_right_ = new_MethodClosure((Method)PMethod17654, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right_, MC_SMB_right_);
}


static void init_SMB_f4() {
    Symbol SMB_f4 = new_Symbol(L"f4");
    Array PThreadedCode17673 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17672 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17673, 1, self);
    
    MethodClosure MC_SMB_f4 = new_MethodClosure((Method)PMethod17672, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f4, MC_SMB_f4);
}


static void init_SMB_endOfTransmission() {
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    Array PThreadedCode17675 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17675, 1, self);
    
    MethodClosure MC_SMB_endOfTransmission = new_MethodClosure((Method)PMethod17674, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfTransmission, MC_SMB_endOfTransmission);
}


static void init_SMB_up_() {
    Symbol SMB_up_ = new_Symbol(L"up:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17677 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17679 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17683 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17686 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17685 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17686, (Optr)&t_block_return);
    Block PBlock17684 = new_Block_with(empty_Array, empty_Array, PThreadedCode17685, 1, PSend17686);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17687 = new_Send((Optr)PSend17683, SMB_timesRepeat_, 1, (Optr)PBlock17684);
    Array PThreadedCode17682 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17683, (Optr)&t_push_closure, (Optr)PBlock17684, (Optr)&t_send1, (Optr)PSend17687, (Optr)&t_block_return);
    Block PBlock17681 = new_Block_with(empty_Array, empty_Array, PThreadedCode17682, 1, PSend17687);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17692 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17691 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17692, (Optr)&t_block_return);
    Block PBlock17690 = new_Block_with(empty_Array, empty_Array, PThreadedCode17691, 1, PSend17692);
    // timesRepeat:. 
    Send PSend17693 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17690);
    Array PThreadedCode17689 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17690, (Optr)&t_send1, (Optr)PSend17693, (Optr)&t_block_return);
    Block PBlock17688 = new_Block_with(empty_Array, empty_Array, PThreadedCode17689, 1, PSend17693);
    // ifTrue:ifFalse:. 
    Send PSend17680 = new_Send((Optr)PSend17679, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17681, (Optr)PBlock17688);
    Array PThreadedCode17678 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17679, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17680, (Optr)PBlock17681, (Optr)PBlock17688, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17676 = new_Method_with(PArray17677, empty_Array, empty_Array, PThreadedCode17678, 2, PSend17680, self);
    
    MethodClosure MC_SMB_up_ = new_MethodClosure((Method)PMethod17676, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up_, MC_SMB_up_);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Array PThreadedCode17695 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17694 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17695, 1, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod17694, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend17698 = new_Send((Optr)self, SMB_startOfHeading, 0);
    Array PThreadedCode17697 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17698, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17696 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17697, 2, PSend17698, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod17696, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_f13() {
    Symbol SMB_f13 = new_Symbol(L"f13");
    Array PThreadedCode17700 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17700, 1, self);
    
    MethodClosure MC_SMB_f13 = new_MethodClosure((Method)PMethod17699, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f13, MC_SMB_f13);
}


static void init_SMB_f2() {
    Symbol SMB_f2 = new_Symbol(L"f2");
    Array PThreadedCode17702 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17701 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17702, 1, self);
    
    MethodClosure MC_SMB_f2 = new_MethodClosure((Method)PMethod17701, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f2, MC_SMB_f2);
}


static void init_SMB_nextScreen() {
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend17705 = new_Send((Optr)self, SMB_endOfText, 0);
    Array PThreadedCode17704 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17705, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17703 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17704, 2, PSend17705, self);
    
    MethodClosure MC_SMB_nextScreen = new_MethodClosure((Method)PMethod17703, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_nextScreen, MC_SMB_nextScreen);
}


static void init_SMB_f3() {
    Symbol SMB_f3 = new_Symbol(L"f3");
    Array PThreadedCode17707 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17706 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17707, 1, self);
    
    MethodClosure MC_SMB_f3 = new_MethodClosure((Method)PMethod17706, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f3, MC_SMB_f3);
}


static void init_SMB_f10() {
    Symbol SMB_f10 = new_Symbol(L"f10");
    Array PThreadedCode17709 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17709, 1, self);
    
    MethodClosure MC_SMB_f10 = new_MethodClosure((Method)PMethod17708, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f10, MC_SMB_f10);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17712 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17711 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17712, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17711, 2, PSend17712, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17710, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17714 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17717 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17716 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17717);
    // down. 
    Send PSend17718 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_down, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17722 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // down. 
    Send PSend17723 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    // column. 
    Send PSend17724 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17725 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17724);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17728 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17727 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17728, (Optr)&t_block_return);
    Block PBlock17726 = new_Block_with(empty_Array, empty_Array, PThreadedCode17727, 1, PSend17728);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17729 = new_Send((Optr)PSend17725, SMB_timesRepeat_, 1, (Optr)PBlock17726);
    Array PThreadedCode17721 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17722, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17723, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17724, (Optr)&t_send1, (Optr)PSend17725, (Optr)&t_push_closure, (Optr)PBlock17726, (Optr)&t_send1, (Optr)PSend17729, (Optr)&t_block_return);
    Block PBlock17720 = new_Block_with(empty_Array, empty_Array, PThreadedCode17721, 3, PSend17722, PSend17723, PSend17729);
    // ifTrue:. 
    Send PSend17719 = new_Send((Optr)PSend17718, SMB_ifTrue_, 1, (Optr)PBlock17720);
    Array PThreadedCode17715 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17716, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17717, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17718, (Optr)&t_send_ifTrue_, (Optr)PSend17719, (Optr)PBlock17720, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17713 = new_Method_with(empty_Array, PArray17714, empty_Array, PThreadedCode17715, 3, PAssign17716, PSend17719, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17713, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17732 = new_Send((Optr)self, SMB_backspace, 0);
    Array PThreadedCode17731 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17732, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17730 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17731, 2, PSend17732, self);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod17730, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_bell() {
    Symbol SMB_bell = new_Symbol(L"bell");
    Array PThreadedCode17734 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17733 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17734, 1, self);
    
    MethodClosure MC_SMB_bell = new_MethodClosure((Method)PMethod17733, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_bell, MC_SMB_bell);
}


static void init_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17737 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteLeft, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17741 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_backspace, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend17742 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17743 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17740 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17741, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17742, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17743, (Optr)&t_block_return);
    Block PBlock17739 = new_Block_with(empty_Array, empty_Array, PThreadedCode17740, 3, PSend17741, PSend17742, PSend17743);
    // ifTrue:. 
    Send PSend17738 = new_Send((Optr)PSend17737, SMB_ifTrue_, 1, (Optr)PBlock17739);
    Array PThreadedCode17736 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17737, (Optr)&t_send_ifTrue_, (Optr)PSend17738, (Optr)PBlock17739, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17735 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17736, 2, PSend17738, self);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod17735, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_delete, MC_SMB_delete);
}


static void init_SMB_shiftIn() {
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    Array PThreadedCode17745 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17745, 1, self);
    
    MethodClosure MC_SMB_shiftIn = new_MethodClosure((Method)PMethod17744, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftIn, MC_SMB_shiftIn);
}


static void init_SMB_openLine() {
    Symbol SMB_openLine = new_Symbol(L"openLine");
    Variable VAR_offset_0_0 = new_Variable_named(L"offset", 0);
    Array PArray17747 = new_Array_with(1, (Optr)VAR_offset_0_0);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17750 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Assign PAssign17749 = new_Assign((Optr)VAR_offset_0_0, (Optr)PSend17750);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17753 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17752 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17753, (Optr)&t_block_return);
    Block PBlock17751 = new_Block_with(empty_Array, empty_Array, PThreadedCode17752, 1, PSend17753);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17754 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17751);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17755 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17758 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17757 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17758, (Optr)&t_block_return);
    Block PBlock17756 = new_Block_with(empty_Array, empty_Array, PThreadedCode17757, 1, PSend17758);
    // timesRepeat:. 
    Send PSend17759 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17756);
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    // insertLine. 
    Send PSend17760 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_insertLine, 0);
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    // continueLine. 
    Send PSend17761 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_continueLine, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17762 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_addLine, 0);
    Array PThreadedCode17748 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign17749, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17750, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17751, (Optr)&t_send1, (Optr)PSend17754, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17755, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17756, (Optr)&t_send1, (Optr)PSend17759, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17760, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_send0, (Optr)PSend17761, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17762, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17746 = new_Method_with(empty_Array, PArray17747, empty_Array, PThreadedCode17748, 8, PAssign17749, PSend17754, PSend17755, PSend17759, PSend17760, PSend17761, PSend17762, self);
    
    MethodClosure MC_SMB_openLine = new_MethodClosure((Method)PMethod17746, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_openLine, MC_SMB_openLine);
}


static void init_SMB_moveFailure_() {
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Variable VAR_direction_0_0 = new_Variable_named(L"direction", 0);
    Array PArray17764 = new_Array_with(1, (Optr)VAR_direction_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend17768 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    // onLineBefore:. 
    Send PSend17769 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_onLineBefore_, 1, (Optr)PSend17768);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // +. 
    Send PSend17774 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Assign PAssign17773 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17774);
    Array PThreadedCode17772 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign17773, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17774, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17771 = new_Block_with(empty_Array, empty_Array, PThreadedCode17772, 1, PAssign17773);
    // ifTrue:. 
    Send PSend17770 = new_Send((Optr)PSend17769, SMB_ifTrue_, 1, (Optr)PBlock17771);
    Array PThreadedCode17767 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17768, (Optr)&t_send1, (Optr)PSend17769, (Optr)&t_send_ifTrue_, (Optr)PSend17770, (Optr)PBlock17771, (Optr)&t_block_return);
    Block PBlock17766 = new_Block_with(empty_Array, empty_Array, PThreadedCode17767, 1, PSend17770);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17775 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17766);
    Array PThreadedCode17765 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17766, (Optr)&t_send1, (Optr)PSend17775, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17763 = new_Method_with(PArray17764, empty_Array, empty_Array, PThreadedCode17765, 2, PSend17775, self);
    
    MethodClosure MC_SMB_moveFailure_ = new_MethodClosure((Method)PMethod17763, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveFailure_, MC_SMB_moveFailure_);
}


static void init_SMB_f14() {
    Symbol SMB_f14 = new_Symbol(L"f14");
    Array PThreadedCode17777 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17776 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17777, 1, self);
    
    MethodClosure MC_SMB_f14 = new_MethodClosure((Method)PMethod17776, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f14, MC_SMB_f14);
}


static void init_SMB_f17() {
    Symbol SMB_f17 = new_Symbol(L"f17");
    Array PThreadedCode17779 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17778 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17779, 1, self);
    
    MethodClosure MC_SMB_f17 = new_MethodClosure((Method)PMethod17778, Shell_ReadLine_ReadLine_Class);
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
    Array PArray17781 = new_Array_with(3, (Optr)VAR_in_0_0, (Optr)VAR_out_0_1, (Optr)VAR_c_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17784 = new_Send((Optr)PHistoryText_classReference, SMB_new, 0);
    Assign PAssign17783 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)PSend17784);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17788 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend17790 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)VAR_in_0_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend17791 = new_Send((Optr)VAR__receiver__1_0, SMB_handler_, 1, (Optr)self);
    Array PThreadedCode17789 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_in_0_0, (Optr)&t_send1, (Optr)PSend17790, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17791, (Optr)&t_method_return);
    Block PBlock17787 = new_Block_with(PArray17788, empty_Array, PThreadedCode17789, 2, PSend17790, PSend17791);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend17792 = new_Send((Optr)PVTermInputDriver_classReference, SMB_new, 0);
    // value:. 
    Send PSend17786 = new_Send((Optr)PBlock17787, SMB_value_, 1, (Optr)PSend17792);
    Assign PAssign17785 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)PSend17786);
    Assign PAssign17793 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)VAR_out_0_1);
    Assign PAssign17794 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)VAR_c_0_2);
    Array PThreadedCode17782 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign17783, (Optr)&t_push_class_reference, (Optr)PHistoryText_classReference, (Optr)&t_send0, (Optr)PSend17784, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17785, (Optr)&t_push_closure, (Optr)PBlock17787, (Optr)&t_push_class_reference, (Optr)PVTermInputDriver_classReference, (Optr)&t_send0, (Optr)PSend17792, (Optr)&t_send1, (Optr)PSend17786, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17793, (Optr)&t_push_variable, (Optr)VAR_out_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17794, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17780 = new_Method_with(PArray17781, empty_Array, empty_Array, PThreadedCode17782, 5, PAssign17783, PAssign17785, PAssign17793, PAssign17794, self);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17780, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_from_to_for_, MC_SMB_from_to_for_);
}


static void init_SMB_f12() {
    Symbol SMB_f12 = new_Symbol(L"f12");
    Array PThreadedCode17796 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17795 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17796, 1, self);
    
    MethodClosure MC_SMB_f12 = new_MethodClosure((Method)PMethod17795, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f12, MC_SMB_f12);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17798 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17800 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_add_, 1, (Optr)VAR_character_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17801 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB__shiftLeft_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // moveFailure:. 
    Send PSend17802 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17803 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17799 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17800, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17801, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17802, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17803, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17797 = new_Method_with(PArray17798, empty_Array, empty_Array, PThreadedCode17799, 5, PSend17800, PSend17801, PSend17802, PSend17803, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod17797, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_f18() {
    Symbol SMB_f18 = new_Symbol(L"f18");
    Array PThreadedCode17805 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17804 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17805, 1, self);
    
    MethodClosure MC_SMB_f18 = new_MethodClosure((Method)PMethod17804, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f18, MC_SMB_f18);
}


static void init_SMB_f5() {
    Symbol SMB_f5 = new_Symbol(L"f5");
    Array PThreadedCode17807 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17806 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17807, 1, self);
    
    MethodClosure MC_SMB_f5 = new_MethodClosure((Method)PMethod17806, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f5, MC_SMB_f5);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17810 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_left, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // left. 
    Send PSend17814 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17813 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17814, (Optr)&t_block_return);
    Block PBlock17812 = new_Block_with(empty_Array, empty_Array, PThreadedCode17813, 1, PSend17814);
    // ifTrue:. 
    Send PSend17811 = new_Send((Optr)PSend17810, SMB_ifTrue_, 1, (Optr)PBlock17812);
    Array PThreadedCode17809 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17810, (Optr)&t_send_ifTrue_, (Optr)PSend17811, (Optr)PBlock17812, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17808 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17809, 2, PSend17811, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17808, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_carriageReturn() {
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17817 = new_Send((Optr)self, SMB_lf, 0);
    Array PThreadedCode17816 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17817, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17815 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17816, 2, PSend17817, self);
    
    MethodClosure MC_SMB_carriageReturn = new_MethodClosure((Method)PMethod17815, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_carriageReturn, MC_SMB_carriageReturn);
}


static void init_SMB_moveToLine_column_() {
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    Variable VAR_line_0_0 = new_Variable_named(L"line", 0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Array PArray17819 = new_Array_with(2, (Optr)VAR_line_0_0, (Optr)VAR_col_0_1);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17821 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17822 = new_Send((Optr)VAR_col_0_1, SMB__minus_, 1, (Optr)PSend17821);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17823 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17822);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17824 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17825 = new_Send((Optr)PSend17824, SMB__minus_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17826 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17825);
    Symbol SMB_line_ = new_Symbol(L"line:");
    // line:. 
    Send PSend17827 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17828 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_1);
    Array PThreadedCode17820 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17821, (Optr)&t_send1, (Optr)PSend17822, (Optr)&t_send1, (Optr)PSend17823, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17824, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17825, (Optr)&t_send1, (Optr)PSend17826, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17827, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17828, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17818 = new_Method_with(PArray17819, empty_Array, empty_Array, PThreadedCode17820, 5, PSend17823, PSend17826, PSend17827, PSend17828, self);
    
    MethodClosure MC_SMB_moveToLine_column_ = new_MethodClosure((Method)PMethod17818, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveToLine_column_, MC_SMB_moveToLine_column_);
}


static void init_SMB_isReady() {
    Symbol SMB_isReady = new_Symbol(L"isReady");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17831 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    // isReady:. 
    Send PSend17832 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_isReady_, 1, (Optr)PSend17831);
    Array PThreadedCode17830 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17831, (Optr)&t_send1, (Optr)PSend17832, (Optr)&t_method_return);
    Method PMethod17829 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17830, 1, PSend17832);
    
    MethodClosure MC_SMB_isReady = new_MethodClosure((Method)PMethod17829, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_isReady, MC_SMB_isReady);
}


static void init_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
    Array PThreadedCode17834 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17833 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17834, 1, self);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod17833, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_insert, MC_SMB_insert);
}


static void init_SMB_f7() {
    Symbol SMB_f7 = new_Symbol(L"f7");
    Array PThreadedCode17836 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17835 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17836, 1, self);
    
    MethodClosure MC_SMB_f7 = new_MethodClosure((Method)PMethod17835, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f7, MC_SMB_f7);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17839 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_right, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // right. 
    Send PSend17843 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17842 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17843, (Optr)&t_block_return);
    Block PBlock17841 = new_Block_with(empty_Array, empty_Array, PThreadedCode17842, 1, PSend17843);
    // ifTrue:. 
    Send PSend17840 = new_Send((Optr)PSend17839, SMB_ifTrue_, 1, (Optr)PBlock17841);
    Array PThreadedCode17838 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17839, (Optr)&t_send_ifTrue_, (Optr)PSend17840, (Optr)PBlock17841, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17838, 2, PSend17840, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17837, Shell_ReadLine_ReadLine_Class);
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
    Send PSend17846 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)int_1_Const, (Optr)int_0_Const);
    Array PThreadedCode17845 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend17846, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17845, 2, PSend17846, self);
    
    MethodClosure MC_SMB_startOfText = new_MethodClosure((Method)PMethod17844, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfText, MC_SMB_startOfText);
}


static void init_SMB_f1() {
    Symbol SMB_f1 = new_Symbol(L"f1");
    Array PThreadedCode17848 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17847 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17848, 1, self);
    
    MethodClosure MC_SMB_f1 = new_MethodClosure((Method)PMethod17847, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f1, MC_SMB_f1);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17850 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17853 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17852 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17853);
    // endOfLine. 
    Send PSend17854 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_endOfLine, 0);
    // column. 
    Send PSend17855 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17856 = new_Send((Optr)PSend17855, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17857 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17856);
    Array PThreadedCode17851 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17852, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17853, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17854, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17855, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17856, (Optr)&t_send1, (Optr)PSend17857, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17849 = new_Method_with(empty_Array, PArray17850, empty_Array, PThreadedCode17851, 4, PAssign17852, PSend17854, PSend17857, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17849, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_f15() {
    Symbol SMB_f15 = new_Symbol(L"f15");
    Array PThreadedCode17859 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17858 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17859, 1, self);
    
    MethodClosure MC_SMB_f15 = new_MethodClosure((Method)PMethod17858, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f15, MC_SMB_f15);
}


static void init_SMB_formfeed() {
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    Array PThreadedCode17861 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17860 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17861, 1, self);
    
    MethodClosure MC_SMB_formfeed = new_MethodClosure((Method)PMethod17860, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_formfeed, MC_SMB_formfeed);
}


static void init_SMB_enquiry() {
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17864 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17863 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17864, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17862 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17863, 2, PSend17864, self);
    
    MethodClosure MC_SMB_enquiry = new_MethodClosure((Method)PMethod17862, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_enquiry, MC_SMB_enquiry);
}


static void init_SMB_startOfHeading() {
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17866 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17869 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17868 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17869);
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    // startOfLine. 
    Send PSend17870 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_startOfLine, 0);
    // column. 
    Send PSend17871 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17872 = new_Send((Optr)PSend17871, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17873 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17872);
    Array PThreadedCode17867 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17868, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17869, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17870, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17871, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17872, (Optr)&t_send1, (Optr)PSend17873, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17865 = new_Method_with(empty_Array, PArray17866, empty_Array, PThreadedCode17867, 4, PAssign17868, PSend17870, PSend17873, self);
    
    MethodClosure MC_SMB_startOfHeading = new_MethodClosure((Method)PMethod17865, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfHeading, MC_SMB_startOfHeading);
}


static void init_SMB_f20() {
    Symbol SMB_f20 = new_Symbol(L"f20");
    Array PThreadedCode17875 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17874 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17875, 1, self);
    
    MethodClosure MC_SMB_f20 = new_MethodClosure((Method)PMethod17874, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f20, MC_SMB_f20);
}


static void init_SMB_repaint() {
    Symbol SMB_repaint = new_Symbol(L"repaint");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_1 = new_Variable_named(L"line", 0);
    Array PArray17877 = new_Array_with(2, (Optr)VAR_col_0_0, (Optr)VAR_line_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17880 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    // parsesUntil. 
    Send PSend17882 = new_Send((Optr)self, SMB_parsesUntil, 0);
    Variable VAR_newpos_2_0 = new_Variable_named(L"newpos", 2);
    Array PArray17884 = new_Array_with(1, (Optr)VAR_newpos_2_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17887 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17886 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17887);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17889 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17888 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17889);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend17892 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend17893 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__equals_, 1, (Optr)PSend17892);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17897 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17896 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17897, (Optr)&t_block_return);
    Block PBlock17895 = new_Block_with(empty_Array, empty_Array, PThreadedCode17896, 1, PSend17897);
    // ifTrue:. 
    Send PSend17894 = new_Send((Optr)PSend17893, SMB_ifTrue_, 1, (Optr)PBlock17895);
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    // repaintAt:. 
    Send PSend17898 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Array PThreadedCode17891 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17892, (Optr)&t_send1, (Optr)PSend17893, (Optr)&t_send_ifTrue_, (Optr)PSend17894, (Optr)PBlock17895, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17898, (Optr)&t_block_return);
    Block PBlock17890 = new_Block_with(empty_Array, empty_Array, PThreadedCode17891, 2, PSend17894, PSend17898);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17899 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17890);
    // +. 
    Send PSend17901 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17900 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17901);
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    // errorColor. 
    Send PSend17902 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_errorColor, 0);
    // repaintAt:. 
    Send PSend17903 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend17904 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend17905 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_normal, 0);
    // escape:. 
    Send PSend17906 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17905);
    Array PThreadedCode17885 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign17886, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17887, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17888, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17889, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17890, (Optr)&t_send1, (Optr)PSend17899, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17900, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17901, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17902, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17903, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17904, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17905, (Optr)&t_send1, (Optr)PSend17906, (Optr)&t_method_return);
    Block PBlock17883 = new_Block_with(PArray17884, empty_Array, PThreadedCode17885, 8, PAssign17886, PAssign17888, PSend17899, PAssign17900, PSend17902, PSend17903, PSend17904, PSend17906);
    // ifNotNil:. 
    Send PSend17907 = new_Send((Optr)PSend17882, SMB_ifNotNil_, 1, (Optr)PBlock17883);
    // column. 
    Send PSend17911 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17910 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17911);
    // line. 
    Send PSend17913 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17912 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17913);
    // repaintAt:. 
    Send PSend17914 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    // moveToLine:column:. 
    Send PSend17915 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Array PThreadedCode17909 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign17910, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17911, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17912, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17913, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17914, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17915, (Optr)&t_block_return);
    Block PBlock17908 = new_Block_with(empty_Array, empty_Array, PThreadedCode17909, 4, PAssign17910, PAssign17912, PSend17914, PSend17915);
    // ifNotNil:. 
    Send PSend17916 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17908);
    Assign PAssign17917 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17881 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17882, (Optr)&t_push_closure, (Optr)PBlock17883, (Optr)&t_send1, (Optr)PSend17907, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17908, (Optr)&t_send1, (Optr)PSend17916, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17917, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17879 = new_Block_with(PArray17880, empty_Array, PThreadedCode17881, 4, PSend17907, PSend17916, PAssign17917, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17918 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17879);
    Array PThreadedCode17878 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17879, (Optr)&t_send1, (Optr)PSend17918, (Optr)&t_method_return);
    Method PMethod17876 = new_Method_with(empty_Array, PArray17877, empty_Array, PThreadedCode17878, 1, PSend17918);
    
    MethodClosure MC_SMB_repaint = new_MethodClosure((Method)PMethod17876, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaint, MC_SMB_repaint);
}


static void init_SMB_f6() {
    Symbol SMB_f6 = new_Symbol(L"f6");
    Array PThreadedCode17920 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17919 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17920, 1, self);
    
    MethodClosure MC_SMB_f6 = new_MethodClosure((Method)PMethod17919, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f6, MC_SMB_f6);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    Array PThreadedCode17922 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17921 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17922, 1, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod17921, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_shiftOut() {
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    Array PThreadedCode17924 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17923 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17924, 1, self);
    
    MethodClosure MC_SMB_shiftOut = new_MethodClosure((Method)PMethod17923, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftOut, MC_SMB_shiftOut);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Assign PAssign17927 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)false_Const);
    // clear. 
    Send PSend17928 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_clear, 0);
    Assign PAssign17929 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17926 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign17927, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17928, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17929, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17925 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17926, 4, PAssign17927, PSend17928, PAssign17929, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17925, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17932 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode17934 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)&t_block_return);
    Block PBlock17933 = new_Block_with(empty_Array, empty_Array, PThreadedCode17934, 1, slot_Shell_ReadLine_ReadLine_ready);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend17937 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_vterm, SMB_read, 0);
    Array PThreadedCode17936 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)&t_send0, (Optr)PSend17937, (Optr)&t_block_return);
    Block PBlock17935 = new_Block_with(empty_Array, empty_Array, PThreadedCode17936, 1, PSend17937);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend17938 = new_Send((Optr)PBlock17933, SMB_whileFalse_, 1, (Optr)PBlock17935);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17939 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Array PThreadedCode17931 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17932, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17933, (Optr)&t_push_closure, (Optr)PBlock17935, (Optr)&t_send1, (Optr)PSend17938, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17939, (Optr)&t_method_return);
    Method PMethod17930 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17931, 3, PSend17932, PSend17938, PSend17939);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PMethod17930, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17943 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isReady = new_Symbol(L"isReady");
    // isReady. 
    Send PSend17945 = new_Send((Optr)self, SMB_isReady, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ready = new_Symbol(L"ready");
    // ready. 
    Send PSend17949 = new_Send((Optr)self, SMB_ready, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17950 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17949);
    Array PThreadedCode17948 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17949, (Optr)&t_send1, (Optr)PSend17950, (Optr)&t_block_return);
    Block PBlock17947 = new_Block_with(empty_Array, empty_Array, PThreadedCode17948, 1, PSend17950);
    // ifTrue:. 
    Send PSend17946 = new_Send((Optr)PSend17945, SMB_ifTrue_, 1, (Optr)PBlock17947);
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend17951 = new_Send((Optr)self, SMB_openLine, 0);
    Array PThreadedCode17944 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17945, (Optr)&t_send_ifTrue_, (Optr)PSend17946, (Optr)PBlock17947, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17951, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17942 = new_Block_with(PArray17943, empty_Array, PThreadedCode17944, 3, PSend17946, PSend17951, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17952 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17942);
    Array PThreadedCode17941 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17942, (Optr)&t_send1, (Optr)PSend17952, (Optr)&t_method_return);
    Method PMethod17940 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17941, 1, PSend17952);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod17940, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_repaintAt_() {
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17954 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_2 = new_Variable_named(L"line", 0);
    Array PArray17955 = new_Array_with(2, (Optr)VAR_col_0_1, (Optr)VAR_line_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17958 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17961 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17960 = new_Assign((Optr)VAR_col_0_1, (Optr)PSend17961);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17963 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17962 = new_Assign((Optr)VAR_line_0_2, (Optr)PSend17963);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17964 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_position_, 1, (Optr)VAR_position_0_0);
    // column. 
    Send PSend17965 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17966 = new_Send((Optr)PSend17965, SMB__minus_, 1, (Optr)VAR_col_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17967 = new_Send((Optr)PSend17966, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17968 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17967);
    // line. 
    Send PSend17969 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17970 = new_Send((Optr)VAR_line_0_2, SMB__minus_, 1, (Optr)PSend17969);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17971 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17970);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17972 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentLine, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17973 = new_Send((Optr)PSend17972, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17974 = new_Send((Optr)PSend17973, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17978 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17979 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17977 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17978, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17979, (Optr)&t_block_return);
    Block PBlock17976 = new_Block_with(empty_Array, empty_Array, PThreadedCode17977, 2, PSend17978, PSend17979);
    // ifTrue:. 
    Send PSend17975 = new_Send((Optr)PSend17974, SMB_ifTrue_, 1, (Optr)PBlock17976);
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    // currentCharacter. 
    Send PSend17980 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentCharacter, 0);
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    // overwrite:. 
    Send PSend17981 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_overwrite_, 1, (Optr)PSend17980);
    Array PThreadedCode17959 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push1, (Optr)PAssign17960, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17961, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17962, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17963, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_send1, (Optr)PSend17964, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17965, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17966, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17967, (Optr)&t_send1, (Optr)PSend17968, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_2, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17969, (Optr)&t_send1, (Optr)PSend17970, (Optr)&t_send1, (Optr)PSend17971, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17972, (Optr)&t_send0, (Optr)PSend17973, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17974, (Optr)&t_send_ifTrue_, (Optr)PSend17975, (Optr)PBlock17976, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17980, (Optr)&t_send1, (Optr)PSend17981, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17957 = new_Block_with(PArray17958, empty_Array, PThreadedCode17959, 8, PAssign17960, PAssign17962, PSend17964, PSend17968, PSend17971, PSend17975, PSend17981, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17982 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17957);
    Array PThreadedCode17956 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17957, (Optr)&t_send1, (Optr)PSend17982, (Optr)&t_method_return);
    Method PMethod17953 = new_Method_with(PArray17954, PArray17955, empty_Array, PThreadedCode17956, 1, PSend17982);
    
    MethodClosure MC_SMB_repaintAt_ = new_MethodClosure((Method)PMethod17953, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaintAt_, MC_SMB_repaintAt_);
}


static void init_SMB_f16() {
    Symbol SMB_f16 = new_Symbol(L"f16");
    Array PThreadedCode17984 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17984, 1, self);
    
    MethodClosure MC_SMB_f16 = new_MethodClosure((Method)PMethod17983, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f16, MC_SMB_f16);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17986 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17989 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17988 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17989);
    // up. 
    Send PSend17990 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_up, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17994 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // up. 
    Send PSend17995 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    // column. 
    Send PSend17996 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17997 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17996);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend18000 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17999 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18000, (Optr)&t_block_return);
    Block PBlock17998 = new_Block_with(empty_Array, empty_Array, PThreadedCode17999, 1, PSend18000);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18001 = new_Send((Optr)PSend17997, SMB_timesRepeat_, 1, (Optr)PBlock17998);
    Array PThreadedCode17993 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17994, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17995, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17996, (Optr)&t_send1, (Optr)PSend17997, (Optr)&t_push_closure, (Optr)PBlock17998, (Optr)&t_send1, (Optr)PSend18001, (Optr)&t_block_return);
    Block PBlock17992 = new_Block_with(empty_Array, empty_Array, PThreadedCode17993, 3, PSend17994, PSend17995, PSend18001);
    // ifTrue:. 
    Send PSend17991 = new_Send((Optr)PSend17990, SMB_ifTrue_, 1, (Optr)PBlock17992);
    Array PThreadedCode17987 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17988, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17989, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17990, (Optr)&t_send_ifTrue_, (Optr)PSend17991, (Optr)PBlock17992, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17985 = new_Method_with(empty_Array, PArray17986, empty_Array, PThreadedCode17987, 3, PAssign17988, PSend17991, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17985, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_parsesUntil() {
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18004 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    // parsesUntil:. 
    Send PSend18005 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_parsesUntil_, 1, (Optr)PSend18004);
    Array PThreadedCode18003 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18004, (Optr)&t_send1, (Optr)PSend18005, (Optr)&t_method_return);
    Method PMethod18002 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18003, 1, PSend18005);
    
    MethodClosure MC_SMB_parsesUntil = new_MethodClosure((Method)PMethod18002, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_parsesUntil, MC_SMB_parsesUntil);
}


static void init_SMB_acknowledge() {
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    Array PThreadedCode18007 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18006 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18007, 1, self);
    
    MethodClosure MC_SMB_acknowledge = new_MethodClosure((Method)PMethod18006, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_acknowledge, MC_SMB_acknowledge);
}


static void init_SMB_previousScreen() {
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend18010 = new_Send((Optr)self, SMB_startOfText, 0);
    Array PThreadedCode18009 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18010, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18008 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18009, 2, PSend18010, self);
    
    MethodClosure MC_SMB_previousScreen = new_MethodClosure((Method)PMethod18008, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_previousScreen, MC_SMB_previousScreen);
}


static void init_SMB_ready() {
    Symbol SMB_ready = new_Symbol(L"ready");
    Assign PAssign18013 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)true_Const);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend18014 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend18017 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode18016 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18017, (Optr)&t_block_return);
    Block PBlock18015 = new_Block_with(empty_Array, empty_Array, PThreadedCode18016, 1, PSend18017);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18018 = new_Send((Optr)PSend18014, SMB_timesRepeat_, 1, (Optr)PBlock18015);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18019 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Array PThreadedCode18012 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign18013, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18014, (Optr)&t_push_closure, (Optr)PBlock18015, (Optr)&t_send1, (Optr)PSend18018, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18019, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18011 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18012, 4, PAssign18013, PSend18018, PSend18019, self);
    
    MethodClosure MC_SMB_ready = new_MethodClosure((Method)PMethod18011, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_ready, MC_SMB_ready);
}


static void init_SMB_f11() {
    Symbol SMB_f11 = new_Symbol(L"f11");
    Array PThreadedCode18021 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18020 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18021, 1, self);
    
    MethodClosure MC_SMB_f11 = new_MethodClosure((Method)PMethod18020, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f11, MC_SMB_f11);
}


static void init_SMB_endOfText() {
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    Symbol SMB_lines = new_Symbol(L"lines");
    // lines. 
    Send PSend18024 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lines, 0);
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    // lastColumns. 
    Send PSend18025 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lastColumns, 0);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18026 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)PSend18024, (Optr)PSend18025);
    Array PThreadedCode18023 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18024, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18025, (Optr)&t_send2, (Optr)PSend18026, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18022 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18023, 2, PSend18026, self);
    
    MethodClosure MC_SMB_endOfText = new_MethodClosure((Method)PMethod18022, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfText, MC_SMB_endOfText);
}


static void init_SMB_f19() {
    Symbol SMB_f19 = new_Symbol(L"f19");
    Array PThreadedCode18028 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18027 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18028, 1, self);
    
    MethodClosure MC_SMB_f19 = new_MethodClosure((Method)PMethod18027, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f19, MC_SMB_f19);
}


static void init_SMB_f8() {
    Symbol SMB_f8 = new_Symbol(L"f8");
    Array PThreadedCode18030 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18029 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18030, 1, self);
    
    MethodClosure MC_SMB_f8 = new_MethodClosure((Method)PMethod18029, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f8, MC_SMB_f8);
}


static void init_SMB_verticalTab() {
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend18033 = new_Send((Optr)self, SMB_deleteToEndOfLine, 0);
    Array PThreadedCode18032 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18033, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18031 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18032, 2, PSend18033, self);
    
    MethodClosure MC_SMB_verticalTab = new_MethodClosure((Method)PMethod18031, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_verticalTab, MC_SMB_verticalTab);
}


static void init_SMB_select() {
    Symbol SMB_select = new_Symbol(L"select");
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend18036 = new_Send((Optr)self, SMB_end, 0);
    Array PThreadedCode18035 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18036, (Optr)&t_method_return);
    Method PMethod18034 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18035, 1, PSend18036);
    
    MethodClosure MC_SMB_select = new_MethodClosure((Method)PMethod18034, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_select, MC_SMB_select);
}


static void init_SMB_find() {
    Symbol SMB_find = new_Symbol(L"find");
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend18039 = new_Send((Optr)self, SMB_home, 0);
    Array PThreadedCode18038 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18039, (Optr)&t_method_return);
    Method PMethod18037 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18038, 1, PSend18039);
    
    MethodClosure MC_SMB_find = new_MethodClosure((Method)PMethod18037, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_find, MC_SMB_find);
}


static void init_SMB_alt_() {
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray18041 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18044 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18046 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18047 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)PSend18046);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18051 = new_Send((Optr)self, SMB_openLine, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18052 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18051);
    Array PThreadedCode18050 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18051, (Optr)&t_send1, (Optr)PSend18052, (Optr)&t_block_return);
    Block PBlock18049 = new_Block_with(empty_Array, empty_Array, PThreadedCode18050, 1, PSend18052);
    // ifTrue:. 
    Send PSend18048 = new_Send((Optr)PSend18047, SMB_ifTrue_, 1, (Optr)PBlock18049);
    Array PThreadedCode18045 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18046, (Optr)&t_send1, (Optr)PSend18047, (Optr)&t_send_ifTrue_, (Optr)PSend18048, (Optr)PBlock18049, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18043 = new_Block_with(PArray18044, empty_Array, PThreadedCode18045, 2, PSend18048, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18053 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18043);
    Array PThreadedCode18042 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18043, (Optr)&t_send1, (Optr)PSend18053, (Optr)&t_method_return);
    Method PMethod18040 = new_Method_with(PArray18041, empty_Array, empty_Array, PThreadedCode18042, 1, PSend18053);
    
    MethodClosure MC_SMB_alt_ = new_MethodClosure((Method)PMethod18040, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_alt_, MC_SMB_alt_);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    // deleteRight. 
    Send PSend18056 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteRight, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend18060 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_deleteCharacter, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend18061 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18062 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18059 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18060, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend18061, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18062, (Optr)&t_block_return);
    Block PBlock18058 = new_Block_with(empty_Array, empty_Array, PThreadedCode18059, 3, PSend18060, PSend18061, PSend18062);
    // ifTrue:. 
    Send PSend18057 = new_Send((Optr)PSend18056, SMB_ifTrue_, 1, (Optr)PBlock18058);
    Array PThreadedCode18055 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18056, (Optr)&t_send_ifTrue_, (Optr)PSend18057, (Optr)PBlock18058, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18055, 2, PSend18057, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod18054, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend18065 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteToEndOfLine, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    // clearToEnd. 
    Send PSend18069 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_clearToEnd, 0);
    Array PThreadedCode18068 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18069, (Optr)&t_block_return);
    Block PBlock18067 = new_Block_with(empty_Array, empty_Array, PThreadedCode18068, 1, PSend18069);
    // ifTrue:. 
    Send PSend18066 = new_Send((Optr)PSend18065, SMB_ifTrue_, 1, (Optr)PBlock18067);
    Array PThreadedCode18064 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18065, (Optr)&t_send_ifTrue_, (Optr)PSend18066, (Optr)PBlock18067, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18063 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18064, 2, PSend18066, self);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod18063, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_class_SMB_from_to_for_() {
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Variable VAR_output_0_1 = new_Variable_named(L"output", 0);
    Variable VAR_client_0_2 = new_Variable_named(L"client", 0);
    Array PArray18071 = new_Array_with(3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18073 = new_Super(SMB_basicNew, 0);
    // from:to:for:. 
    Send PSend18074 = new_Send((Optr)PSuper18073, SMB_from_to_for_, 3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Array PThreadedCode18072 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18073, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_client_0_2, (Optr)&t_send3, (Optr)PSend18074, (Optr)&t_method_return);
    Method PMethod18070 = new_Method_with(PArray18071, empty_Array, empty_Array, PThreadedCode18072, 1, PSend18074);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod18070, HEADER(Shell_ReadLine_ReadLine_Class));
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