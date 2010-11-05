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
    Array PThreadedCode17689 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17688 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17689, 1, self);
    
    MethodClosure MC_SMB_f9 = new_MethodClosure((Method)PMethod17688, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f9, MC_SMB_f9);
}


static void init_SMB_right_() {
    Symbol SMB_right_ = new_Symbol(L"right:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17691 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17693 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17697 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17700 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17699 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17700, (Optr)&t_block_return);
    Block PBlock17698 = new_Block_with(empty_Array, empty_Array, PThreadedCode17699, 1, PSend17700);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17701 = new_Send((Optr)PSend17697, SMB_timesRepeat_, 1, (Optr)PBlock17698);
    Array PThreadedCode17696 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17697, (Optr)&t_push_closure, (Optr)PBlock17698, (Optr)&t_send1, (Optr)PSend17701, (Optr)&t_block_return);
    Block PBlock17695 = new_Block_with(empty_Array, empty_Array, PThreadedCode17696, 1, PSend17701);
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17706 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17705 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17706, (Optr)&t_block_return);
    Block PBlock17704 = new_Block_with(empty_Array, empty_Array, PThreadedCode17705, 1, PSend17706);
    // timesRepeat:. 
    Send PSend17707 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17704);
    Array PThreadedCode17703 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17704, (Optr)&t_send1, (Optr)PSend17707, (Optr)&t_block_return);
    Block PBlock17702 = new_Block_with(empty_Array, empty_Array, PThreadedCode17703, 1, PSend17707);
    // ifTrue:ifFalse:. 
    Send PSend17694 = new_Send((Optr)PSend17693, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17695, (Optr)PBlock17702);
    Array PThreadedCode17692 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17693, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17694, (Optr)PBlock17695, (Optr)PBlock17702, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17690 = new_Method_with(PArray17691, empty_Array, empty_Array, PThreadedCode17692, 2, PSend17694, self);
    
    MethodClosure MC_SMB_right_ = new_MethodClosure((Method)PMethod17690, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right_, MC_SMB_right_);
}


static void init_SMB_f4() {
    Symbol SMB_f4 = new_Symbol(L"f4");
    Array PThreadedCode17709 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17708 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17709, 1, self);
    
    MethodClosure MC_SMB_f4 = new_MethodClosure((Method)PMethod17708, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f4, MC_SMB_f4);
}


static void init_SMB_endOfTransmission() {
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    Array PThreadedCode17711 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17710 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17711, 1, self);
    
    MethodClosure MC_SMB_endOfTransmission = new_MethodClosure((Method)PMethod17710, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfTransmission, MC_SMB_endOfTransmission);
}


static void init_SMB_up_() {
    Symbol SMB_up_ = new_Symbol(L"up:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17713 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17715 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17719 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17722 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17721 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17722, (Optr)&t_block_return);
    Block PBlock17720 = new_Block_with(empty_Array, empty_Array, PThreadedCode17721, 1, PSend17722);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17723 = new_Send((Optr)PSend17719, SMB_timesRepeat_, 1, (Optr)PBlock17720);
    Array PThreadedCode17718 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17719, (Optr)&t_push_closure, (Optr)PBlock17720, (Optr)&t_send1, (Optr)PSend17723, (Optr)&t_block_return);
    Block PBlock17717 = new_Block_with(empty_Array, empty_Array, PThreadedCode17718, 1, PSend17723);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17728 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17727 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17728, (Optr)&t_block_return);
    Block PBlock17726 = new_Block_with(empty_Array, empty_Array, PThreadedCode17727, 1, PSend17728);
    // timesRepeat:. 
    Send PSend17729 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17726);
    Array PThreadedCode17725 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17726, (Optr)&t_send1, (Optr)PSend17729, (Optr)&t_block_return);
    Block PBlock17724 = new_Block_with(empty_Array, empty_Array, PThreadedCode17725, 1, PSend17729);
    // ifTrue:ifFalse:. 
    Send PSend17716 = new_Send((Optr)PSend17715, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17717, (Optr)PBlock17724);
    Array PThreadedCode17714 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17715, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17716, (Optr)PBlock17717, (Optr)PBlock17724, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17712 = new_Method_with(PArray17713, empty_Array, empty_Array, PThreadedCode17714, 2, PSend17716, self);
    
    MethodClosure MC_SMB_up_ = new_MethodClosure((Method)PMethod17712, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up_, MC_SMB_up_);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Array PThreadedCode17731 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17730 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17731, 1, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod17730, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend17734 = new_Send((Optr)self, SMB_startOfHeading, 0);
    Array PThreadedCode17733 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17734, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17732 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17733, 2, PSend17734, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod17732, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_f13() {
    Symbol SMB_f13 = new_Symbol(L"f13");
    Array PThreadedCode17736 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17735 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17736, 1, self);
    
    MethodClosure MC_SMB_f13 = new_MethodClosure((Method)PMethod17735, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f13, MC_SMB_f13);
}


static void init_SMB_f2() {
    Symbol SMB_f2 = new_Symbol(L"f2");
    Array PThreadedCode17738 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17738, 1, self);
    
    MethodClosure MC_SMB_f2 = new_MethodClosure((Method)PMethod17737, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f2, MC_SMB_f2);
}


static void init_SMB_nextScreen() {
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend17741 = new_Send((Optr)self, SMB_endOfText, 0);
    Array PThreadedCode17740 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17741, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17739 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17740, 2, PSend17741, self);
    
    MethodClosure MC_SMB_nextScreen = new_MethodClosure((Method)PMethod17739, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_nextScreen, MC_SMB_nextScreen);
}


static void init_SMB_f3() {
    Symbol SMB_f3 = new_Symbol(L"f3");
    Array PThreadedCode17743 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17742 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17743, 1, self);
    
    MethodClosure MC_SMB_f3 = new_MethodClosure((Method)PMethod17742, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f3, MC_SMB_f3);
}


static void init_SMB_f10() {
    Symbol SMB_f10 = new_Symbol(L"f10");
    Array PThreadedCode17745 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17745, 1, self);
    
    MethodClosure MC_SMB_f10 = new_MethodClosure((Method)PMethod17744, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f10, MC_SMB_f10);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17748 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17747 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17748, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17746 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17747, 2, PSend17748, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17746, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17750 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17753 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17752 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17753);
    // down. 
    Send PSend17754 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_down, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17758 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // down. 
    Send PSend17759 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    // column. 
    Send PSend17760 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17761 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17760);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17764 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17763 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17764, (Optr)&t_block_return);
    Block PBlock17762 = new_Block_with(empty_Array, empty_Array, PThreadedCode17763, 1, PSend17764);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17765 = new_Send((Optr)PSend17761, SMB_timesRepeat_, 1, (Optr)PBlock17762);
    Array PThreadedCode17757 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17758, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17759, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17760, (Optr)&t_send1, (Optr)PSend17761, (Optr)&t_push_closure, (Optr)PBlock17762, (Optr)&t_send1, (Optr)PSend17765, (Optr)&t_block_return);
    Block PBlock17756 = new_Block_with(empty_Array, empty_Array, PThreadedCode17757, 3, PSend17758, PSend17759, PSend17765);
    // ifTrue:. 
    Send PSend17755 = new_Send((Optr)PSend17754, SMB_ifTrue_, 1, (Optr)PBlock17756);
    Array PThreadedCode17751 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17752, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17753, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17754, (Optr)&t_send_ifTrue_, (Optr)PSend17755, (Optr)PBlock17756, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17749 = new_Method_with(empty_Array, PArray17750, empty_Array, PThreadedCode17751, 3, PAssign17752, PSend17755, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17749, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17768 = new_Send((Optr)self, SMB_backspace, 0);
    Array PThreadedCode17767 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17768, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17766 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17767, 2, PSend17768, self);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod17766, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_bell() {
    Symbol SMB_bell = new_Symbol(L"bell");
    Array PThreadedCode17770 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17769 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17770, 1, self);
    
    MethodClosure MC_SMB_bell = new_MethodClosure((Method)PMethod17769, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_bell, MC_SMB_bell);
}


static void init_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17773 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteLeft, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17777 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_backspace, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend17778 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17779 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17776 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17777, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17778, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17779, (Optr)&t_block_return);
    Block PBlock17775 = new_Block_with(empty_Array, empty_Array, PThreadedCode17776, 3, PSend17777, PSend17778, PSend17779);
    // ifTrue:. 
    Send PSend17774 = new_Send((Optr)PSend17773, SMB_ifTrue_, 1, (Optr)PBlock17775);
    Array PThreadedCode17772 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17773, (Optr)&t_send_ifTrue_, (Optr)PSend17774, (Optr)PBlock17775, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17771 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17772, 2, PSend17774, self);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod17771, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_delete, MC_SMB_delete);
}


static void init_SMB_shiftIn() {
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    Array PThreadedCode17781 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17780 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17781, 1, self);
    
    MethodClosure MC_SMB_shiftIn = new_MethodClosure((Method)PMethod17780, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftIn, MC_SMB_shiftIn);
}


static void init_SMB_openLine() {
    Symbol SMB_openLine = new_Symbol(L"openLine");
    Variable VAR_offset_0_0 = new_Variable_named(L"offset", 0);
    Array PArray17783 = new_Array_with(1, (Optr)VAR_offset_0_0);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17786 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Assign PAssign17785 = new_Assign((Optr)VAR_offset_0_0, (Optr)PSend17786);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17789 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17788 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17789, (Optr)&t_block_return);
    Block PBlock17787 = new_Block_with(empty_Array, empty_Array, PThreadedCode17788, 1, PSend17789);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17790 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17787);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17791 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17794 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17793 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17794, (Optr)&t_block_return);
    Block PBlock17792 = new_Block_with(empty_Array, empty_Array, PThreadedCode17793, 1, PSend17794);
    // timesRepeat:. 
    Send PSend17795 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17792);
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    // insertLine. 
    Send PSend17796 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_insertLine, 0);
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    // continueLine. 
    Send PSend17797 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_continueLine, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17798 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_addLine, 0);
    Array PThreadedCode17784 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign17785, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17786, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17787, (Optr)&t_send1, (Optr)PSend17790, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17791, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17792, (Optr)&t_send1, (Optr)PSend17795, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17796, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_send0, (Optr)PSend17797, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17798, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17782 = new_Method_with(empty_Array, PArray17783, empty_Array, PThreadedCode17784, 8, PAssign17785, PSend17790, PSend17791, PSend17795, PSend17796, PSend17797, PSend17798, self);
    
    MethodClosure MC_SMB_openLine = new_MethodClosure((Method)PMethod17782, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_openLine, MC_SMB_openLine);
}


static void init_SMB_moveFailure_() {
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Variable VAR_direction_0_0 = new_Variable_named(L"direction", 0);
    Array PArray17800 = new_Array_with(1, (Optr)VAR_direction_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend17804 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    // onLineBefore:. 
    Send PSend17805 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_onLineBefore_, 1, (Optr)PSend17804);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // +. 
    Send PSend17810 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Assign PAssign17809 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17810);
    Array PThreadedCode17808 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign17809, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17810, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17807 = new_Block_with(empty_Array, empty_Array, PThreadedCode17808, 1, PAssign17809);
    // ifTrue:. 
    Send PSend17806 = new_Send((Optr)PSend17805, SMB_ifTrue_, 1, (Optr)PBlock17807);
    Array PThreadedCode17803 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17804, (Optr)&t_send1, (Optr)PSend17805, (Optr)&t_send_ifTrue_, (Optr)PSend17806, (Optr)PBlock17807, (Optr)&t_block_return);
    Block PBlock17802 = new_Block_with(empty_Array, empty_Array, PThreadedCode17803, 1, PSend17806);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17811 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17802);
    Array PThreadedCode17801 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17802, (Optr)&t_send1, (Optr)PSend17811, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17799 = new_Method_with(PArray17800, empty_Array, empty_Array, PThreadedCode17801, 2, PSend17811, self);
    
    MethodClosure MC_SMB_moveFailure_ = new_MethodClosure((Method)PMethod17799, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveFailure_, MC_SMB_moveFailure_);
}


static void init_SMB_f14() {
    Symbol SMB_f14 = new_Symbol(L"f14");
    Array PThreadedCode17813 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17812 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17813, 1, self);
    
    MethodClosure MC_SMB_f14 = new_MethodClosure((Method)PMethod17812, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f14, MC_SMB_f14);
}


static void init_SMB_f17() {
    Symbol SMB_f17 = new_Symbol(L"f17");
    Array PThreadedCode17815 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17814 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17815, 1, self);
    
    MethodClosure MC_SMB_f17 = new_MethodClosure((Method)PMethod17814, Shell_ReadLine_ReadLine_Class);
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
    Array PArray17817 = new_Array_with(3, (Optr)VAR_in_0_0, (Optr)VAR_out_0_1, (Optr)VAR_c_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17820 = new_Send((Optr)PHistoryText_classReference, SMB_new, 0);
    Assign PAssign17819 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)PSend17820);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17824 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend17826 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)VAR_in_0_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend17827 = new_Send((Optr)VAR__receiver__1_0, SMB_handler_, 1, (Optr)self);
    Array PThreadedCode17825 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_in_0_0, (Optr)&t_send1, (Optr)PSend17826, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17827, (Optr)&t_method_return);
    Block PBlock17823 = new_Block_with(PArray17824, empty_Array, PThreadedCode17825, 2, PSend17826, PSend17827);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend17828 = new_Send((Optr)PVTermInputDriver_classReference, SMB_new, 0);
    // value:. 
    Send PSend17822 = new_Send((Optr)PBlock17823, SMB_value_, 1, (Optr)PSend17828);
    Assign PAssign17821 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)PSend17822);
    Assign PAssign17829 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)VAR_out_0_1);
    Assign PAssign17830 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)VAR_c_0_2);
    Array PThreadedCode17818 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign17819, (Optr)&t_push_class_reference, (Optr)PHistoryText_classReference, (Optr)&t_send0, (Optr)PSend17820, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17821, (Optr)&t_push_closure, (Optr)PBlock17823, (Optr)&t_push_class_reference, (Optr)PVTermInputDriver_classReference, (Optr)&t_send0, (Optr)PSend17828, (Optr)&t_send1, (Optr)PSend17822, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17829, (Optr)&t_push_variable, (Optr)VAR_out_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17830, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17816 = new_Method_with(PArray17817, empty_Array, empty_Array, PThreadedCode17818, 5, PAssign17819, PAssign17821, PAssign17829, PAssign17830, self);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17816, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_from_to_for_, MC_SMB_from_to_for_);
}


static void init_SMB_f12() {
    Symbol SMB_f12 = new_Symbol(L"f12");
    Array PThreadedCode17832 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17831 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17832, 1, self);
    
    MethodClosure MC_SMB_f12 = new_MethodClosure((Method)PMethod17831, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f12, MC_SMB_f12);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17834 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17836 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_add_, 1, (Optr)VAR_character_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17837 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB__shiftLeft_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // moveFailure:. 
    Send PSend17838 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17839 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17835 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17836, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17837, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17838, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17839, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17833 = new_Method_with(PArray17834, empty_Array, empty_Array, PThreadedCode17835, 5, PSend17836, PSend17837, PSend17838, PSend17839, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod17833, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_f18() {
    Symbol SMB_f18 = new_Symbol(L"f18");
    Array PThreadedCode17841 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17840 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17841, 1, self);
    
    MethodClosure MC_SMB_f18 = new_MethodClosure((Method)PMethod17840, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f18, MC_SMB_f18);
}


static void init_SMB_f5() {
    Symbol SMB_f5 = new_Symbol(L"f5");
    Array PThreadedCode17843 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17842 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17843, 1, self);
    
    MethodClosure MC_SMB_f5 = new_MethodClosure((Method)PMethod17842, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f5, MC_SMB_f5);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17846 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_left, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // left. 
    Send PSend17850 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17849 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17850, (Optr)&t_block_return);
    Block PBlock17848 = new_Block_with(empty_Array, empty_Array, PThreadedCode17849, 1, PSend17850);
    // ifTrue:. 
    Send PSend17847 = new_Send((Optr)PSend17846, SMB_ifTrue_, 1, (Optr)PBlock17848);
    Array PThreadedCode17845 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17846, (Optr)&t_send_ifTrue_, (Optr)PSend17847, (Optr)PBlock17848, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17844 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17845, 2, PSend17847, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17844, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_carriageReturn() {
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17853 = new_Send((Optr)self, SMB_lf, 0);
    Array PThreadedCode17852 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17853, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17851 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17852, 2, PSend17853, self);
    
    MethodClosure MC_SMB_carriageReturn = new_MethodClosure((Method)PMethod17851, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_carriageReturn, MC_SMB_carriageReturn);
}


static void init_SMB_moveToLine_column_() {
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    Variable VAR_line_0_0 = new_Variable_named(L"line", 0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Array PArray17855 = new_Array_with(2, (Optr)VAR_line_0_0, (Optr)VAR_col_0_1);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17857 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17858 = new_Send((Optr)VAR_col_0_1, SMB__minus_, 1, (Optr)PSend17857);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17859 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17858);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17860 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend17861 = new_Send((Optr)PSend17860, SMB__minus_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend17862 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend17861);
    Symbol SMB_line_ = new_Symbol(L"line:");
    // line:. 
    Send PSend17863 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17864 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_1);
    Array PThreadedCode17856 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17857, (Optr)&t_send1, (Optr)PSend17858, (Optr)&t_send1, (Optr)PSend17859, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17860, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17861, (Optr)&t_send1, (Optr)PSend17862, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend17863, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend17864, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17854 = new_Method_with(PArray17855, empty_Array, empty_Array, PThreadedCode17856, 5, PSend17859, PSend17862, PSend17863, PSend17864, self);
    
    MethodClosure MC_SMB_moveToLine_column_ = new_MethodClosure((Method)PMethod17854, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveToLine_column_, MC_SMB_moveToLine_column_);
}


static void init_SMB_isReady() {
    Symbol SMB_isReady = new_Symbol(L"isReady");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17867 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    // isReady:. 
    Send PSend17868 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_isReady_, 1, (Optr)PSend17867);
    Array PThreadedCode17866 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17867, (Optr)&t_send1, (Optr)PSend17868, (Optr)&t_method_return);
    Method PMethod17865 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17866, 1, PSend17868);
    
    MethodClosure MC_SMB_isReady = new_MethodClosure((Method)PMethod17865, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_isReady, MC_SMB_isReady);
}


static void init_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
    Array PThreadedCode17870 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17869 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17870, 1, self);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod17869, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_insert, MC_SMB_insert);
}


static void init_SMB_f7() {
    Symbol SMB_f7 = new_Symbol(L"f7");
    Array PThreadedCode17872 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17871 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17872, 1, self);
    
    MethodClosure MC_SMB_f7 = new_MethodClosure((Method)PMethod17871, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f7, MC_SMB_f7);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17875 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_right, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // right. 
    Send PSend17879 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17878 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17879, (Optr)&t_block_return);
    Block PBlock17877 = new_Block_with(empty_Array, empty_Array, PThreadedCode17878, 1, PSend17879);
    // ifTrue:. 
    Send PSend17876 = new_Send((Optr)PSend17875, SMB_ifTrue_, 1, (Optr)PBlock17877);
    Array PThreadedCode17874 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17875, (Optr)&t_send_ifTrue_, (Optr)PSend17876, (Optr)PBlock17877, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17873 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17874, 2, PSend17876, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17873, Shell_ReadLine_ReadLine_Class);
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
    Send PSend17882 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)int_1_Const, (Optr)int_0_Const);
    Array PThreadedCode17881 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend17882, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17881, 2, PSend17882, self);
    
    MethodClosure MC_SMB_startOfText = new_MethodClosure((Method)PMethod17880, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfText, MC_SMB_startOfText);
}


static void init_SMB_f1() {
    Symbol SMB_f1 = new_Symbol(L"f1");
    Array PThreadedCode17884 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17883 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17884, 1, self);
    
    MethodClosure MC_SMB_f1 = new_MethodClosure((Method)PMethod17883, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f1, MC_SMB_f1);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17886 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17889 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17888 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17889);
    // endOfLine. 
    Send PSend17890 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_endOfLine, 0);
    // column. 
    Send PSend17891 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17892 = new_Send((Optr)PSend17891, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17893 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17892);
    Array PThreadedCode17887 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17888, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17889, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17890, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17891, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17892, (Optr)&t_send1, (Optr)PSend17893, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17885 = new_Method_with(empty_Array, PArray17886, empty_Array, PThreadedCode17887, 4, PAssign17888, PSend17890, PSend17893, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17885, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_f15() {
    Symbol SMB_f15 = new_Symbol(L"f15");
    Array PThreadedCode17895 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17894 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17895, 1, self);
    
    MethodClosure MC_SMB_f15 = new_MethodClosure((Method)PMethod17894, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f15, MC_SMB_f15);
}


static void init_SMB_formfeed() {
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    Array PThreadedCode17897 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17896 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17897, 1, self);
    
    MethodClosure MC_SMB_formfeed = new_MethodClosure((Method)PMethod17896, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_formfeed, MC_SMB_formfeed);
}


static void init_SMB_enquiry() {
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17900 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17899 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17900, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17898 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17899, 2, PSend17900, self);
    
    MethodClosure MC_SMB_enquiry = new_MethodClosure((Method)PMethod17898, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_enquiry, MC_SMB_enquiry);
}


static void init_SMB_startOfHeading() {
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17902 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17905 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17904 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17905);
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    // startOfLine. 
    Send PSend17906 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_startOfLine, 0);
    // column. 
    Send PSend17907 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17908 = new_Send((Optr)PSend17907, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend17909 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend17908);
    Array PThreadedCode17903 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign17904, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17905, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17906, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17907, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17908, (Optr)&t_send1, (Optr)PSend17909, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17901 = new_Method_with(empty_Array, PArray17902, empty_Array, PThreadedCode17903, 4, PAssign17904, PSend17906, PSend17909, self);
    
    MethodClosure MC_SMB_startOfHeading = new_MethodClosure((Method)PMethod17901, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfHeading, MC_SMB_startOfHeading);
}


static void init_SMB_f20() {
    Symbol SMB_f20 = new_Symbol(L"f20");
    Array PThreadedCode17911 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17910 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17911, 1, self);
    
    MethodClosure MC_SMB_f20 = new_MethodClosure((Method)PMethod17910, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f20, MC_SMB_f20);
}


static void init_SMB_repaint() {
    Symbol SMB_repaint = new_Symbol(L"repaint");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_1 = new_Variable_named(L"line", 0);
    Array PArray17913 = new_Array_with(2, (Optr)VAR_col_0_0, (Optr)VAR_line_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17916 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    // parsesUntil. 
    Send PSend17918 = new_Send((Optr)self, SMB_parsesUntil, 0);
    Variable VAR_newpos_2_0 = new_Variable_named(L"newpos", 2);
    Array PArray17920 = new_Array_with(1, (Optr)VAR_newpos_2_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17923 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17922 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17923);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17925 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17924 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17925);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend17928 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend17929 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__equals_, 1, (Optr)PSend17928);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17933 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17932 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17933, (Optr)&t_block_return);
    Block PBlock17931 = new_Block_with(empty_Array, empty_Array, PThreadedCode17932, 1, PSend17933);
    // ifTrue:. 
    Send PSend17930 = new_Send((Optr)PSend17929, SMB_ifTrue_, 1, (Optr)PBlock17931);
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    // repaintAt:. 
    Send PSend17934 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Array PThreadedCode17927 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17928, (Optr)&t_send1, (Optr)PSend17929, (Optr)&t_send_ifTrue_, (Optr)PSend17930, (Optr)PBlock17931, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17934, (Optr)&t_block_return);
    Block PBlock17926 = new_Block_with(empty_Array, empty_Array, PThreadedCode17927, 2, PSend17930, PSend17934);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17935 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17926);
    // +. 
    Send PSend17937 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign17936 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17937);
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    // errorColor. 
    Send PSend17938 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_errorColor, 0);
    // repaintAt:. 
    Send PSend17939 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend17940 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend17941 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_normal, 0);
    // escape:. 
    Send PSend17942 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17941);
    Array PThreadedCode17921 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign17922, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17923, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17924, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17925, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17926, (Optr)&t_send1, (Optr)PSend17935, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17936, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17937, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17938, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17939, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17940, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17941, (Optr)&t_send1, (Optr)PSend17942, (Optr)&t_method_return);
    Block PBlock17919 = new_Block_with(PArray17920, empty_Array, PThreadedCode17921, 8, PAssign17922, PAssign17924, PSend17935, PAssign17936, PSend17938, PSend17939, PSend17940, PSend17942);
    // ifNotNil:. 
    Send PSend17943 = new_Send((Optr)PSend17918, SMB_ifNotNil_, 1, (Optr)PBlock17919);
    // column. 
    Send PSend17947 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17946 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17947);
    // line. 
    Send PSend17949 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17948 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend17949);
    // repaintAt:. 
    Send PSend17950 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    // moveToLine:column:. 
    Send PSend17951 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Array PThreadedCode17945 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign17946, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17947, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17948, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17949, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend17950, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend17951, (Optr)&t_block_return);
    Block PBlock17944 = new_Block_with(empty_Array, empty_Array, PThreadedCode17945, 4, PAssign17946, PAssign17948, PSend17950, PSend17951);
    // ifNotNil:. 
    Send PSend17952 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17944);
    Assign PAssign17953 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17917 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17918, (Optr)&t_push_closure, (Optr)PBlock17919, (Optr)&t_send1, (Optr)PSend17943, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17944, (Optr)&t_send1, (Optr)PSend17952, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17953, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17915 = new_Block_with(PArray17916, empty_Array, PThreadedCode17917, 4, PSend17943, PSend17952, PAssign17953, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17954 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17915);
    Array PThreadedCode17914 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17915, (Optr)&t_send1, (Optr)PSend17954, (Optr)&t_method_return);
    Method PMethod17912 = new_Method_with(empty_Array, PArray17913, empty_Array, PThreadedCode17914, 1, PSend17954);
    
    MethodClosure MC_SMB_repaint = new_MethodClosure((Method)PMethod17912, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaint, MC_SMB_repaint);
}


static void init_SMB_f6() {
    Symbol SMB_f6 = new_Symbol(L"f6");
    Array PThreadedCode17956 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17955 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17956, 1, self);
    
    MethodClosure MC_SMB_f6 = new_MethodClosure((Method)PMethod17955, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f6, MC_SMB_f6);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    Array PThreadedCode17958 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17957 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17958, 1, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod17957, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_shiftOut() {
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    Array PThreadedCode17960 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17959 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17960, 1, self);
    
    MethodClosure MC_SMB_shiftOut = new_MethodClosure((Method)PMethod17959, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftOut, MC_SMB_shiftOut);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Assign PAssign17963 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)false_Const);
    // clear. 
    Send PSend17964 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_clear, 0);
    Assign PAssign17965 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode17962 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign17963, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17964, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17965, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17961 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17962, 4, PAssign17963, PSend17964, PAssign17965, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17961, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17968 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode17970 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)&t_block_return);
    Block PBlock17969 = new_Block_with(empty_Array, empty_Array, PThreadedCode17970, 1, slot_Shell_ReadLine_ReadLine_ready);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend17973 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_vterm, SMB_read, 0);
    Array PThreadedCode17972 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)&t_send0, (Optr)PSend17973, (Optr)&t_block_return);
    Block PBlock17971 = new_Block_with(empty_Array, empty_Array, PThreadedCode17972, 1, PSend17973);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend17974 = new_Send((Optr)PBlock17969, SMB_whileFalse_, 1, (Optr)PBlock17971);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17975 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Array PThreadedCode17967 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17968, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17969, (Optr)&t_push_closure, (Optr)PBlock17971, (Optr)&t_send1, (Optr)PSend17974, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17975, (Optr)&t_method_return);
    Method PMethod17966 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17967, 3, PSend17968, PSend17974, PSend17975);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PMethod17966, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17979 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isReady = new_Symbol(L"isReady");
    // isReady. 
    Send PSend17981 = new_Send((Optr)self, SMB_isReady, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ready = new_Symbol(L"ready");
    // ready. 
    Send PSend17985 = new_Send((Optr)self, SMB_ready, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17986 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17985);
    Array PThreadedCode17984 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17985, (Optr)&t_send1, (Optr)PSend17986, (Optr)&t_block_return);
    Block PBlock17983 = new_Block_with(empty_Array, empty_Array, PThreadedCode17984, 1, PSend17986);
    // ifTrue:. 
    Send PSend17982 = new_Send((Optr)PSend17981, SMB_ifTrue_, 1, (Optr)PBlock17983);
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend17987 = new_Send((Optr)self, SMB_openLine, 0);
    Array PThreadedCode17980 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17981, (Optr)&t_send_ifTrue_, (Optr)PSend17982, (Optr)PBlock17983, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17987, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17978 = new_Block_with(PArray17979, empty_Array, PThreadedCode17980, 3, PSend17982, PSend17987, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17988 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17978);
    Array PThreadedCode17977 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17978, (Optr)&t_send1, (Optr)PSend17988, (Optr)&t_method_return);
    Method PMethod17976 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17977, 1, PSend17988);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod17976, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_repaintAt_() {
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17990 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_2 = new_Variable_named(L"line", 0);
    Array PArray17991 = new_Array_with(2, (Optr)VAR_col_0_1, (Optr)VAR_line_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17994 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17997 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17996 = new_Assign((Optr)VAR_col_0_1, (Optr)PSend17997);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17999 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign17998 = new_Assign((Optr)VAR_line_0_2, (Optr)PSend17999);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend18000 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_position_, 1, (Optr)VAR_position_0_0);
    // column. 
    Send PSend18001 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18002 = new_Send((Optr)PSend18001, SMB__minus_, 1, (Optr)VAR_col_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18003 = new_Send((Optr)PSend18002, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18004 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18003);
    // line. 
    Send PSend18005 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend18006 = new_Send((Optr)VAR_line_0_2, SMB__minus_, 1, (Optr)PSend18005);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend18007 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend18006);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend18008 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentLine, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18009 = new_Send((Optr)PSend18008, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18010 = new_Send((Optr)PSend18009, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend18014 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18015 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18013 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18014, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18015, (Optr)&t_block_return);
    Block PBlock18012 = new_Block_with(empty_Array, empty_Array, PThreadedCode18013, 2, PSend18014, PSend18015);
    // ifTrue:. 
    Send PSend18011 = new_Send((Optr)PSend18010, SMB_ifTrue_, 1, (Optr)PBlock18012);
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    // currentCharacter. 
    Send PSend18016 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentCharacter, 0);
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    // overwrite:. 
    Send PSend18017 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_overwrite_, 1, (Optr)PSend18016);
    Array PThreadedCode17995 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push1, (Optr)PAssign17996, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17997, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17998, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17999, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_send1, (Optr)PSend18000, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18001, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend18002, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18003, (Optr)&t_send1, (Optr)PSend18004, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_2, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18005, (Optr)&t_send1, (Optr)PSend18006, (Optr)&t_send1, (Optr)PSend18007, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18008, (Optr)&t_send0, (Optr)PSend18009, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18010, (Optr)&t_send_ifTrue_, (Optr)PSend18011, (Optr)PBlock18012, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18016, (Optr)&t_send1, (Optr)PSend18017, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17993 = new_Block_with(PArray17994, empty_Array, PThreadedCode17995, 8, PAssign17996, PAssign17998, PSend18000, PSend18004, PSend18007, PSend18011, PSend18017, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18018 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17993);
    Array PThreadedCode17992 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17993, (Optr)&t_send1, (Optr)PSend18018, (Optr)&t_method_return);
    Method PMethod17989 = new_Method_with(PArray17990, PArray17991, empty_Array, PThreadedCode17992, 1, PSend18018);
    
    MethodClosure MC_SMB_repaintAt_ = new_MethodClosure((Method)PMethod17989, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaintAt_, MC_SMB_repaintAt_);
}


static void init_SMB_f16() {
    Symbol SMB_f16 = new_Symbol(L"f16");
    Array PThreadedCode18020 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18019 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18020, 1, self);
    
    MethodClosure MC_SMB_f16 = new_MethodClosure((Method)PMethod18019, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f16, MC_SMB_f16);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray18022 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18025 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18024 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18025);
    // up. 
    Send PSend18026 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_up, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18030 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // up. 
    Send PSend18031 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    // column. 
    Send PSend18032 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18033 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend18032);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend18036 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18035 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18036, (Optr)&t_block_return);
    Block PBlock18034 = new_Block_with(empty_Array, empty_Array, PThreadedCode18035, 1, PSend18036);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18037 = new_Send((Optr)PSend18033, SMB_timesRepeat_, 1, (Optr)PBlock18034);
    Array PThreadedCode18029 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18030, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18032, (Optr)&t_send1, (Optr)PSend18033, (Optr)&t_push_closure, (Optr)PBlock18034, (Optr)&t_send1, (Optr)PSend18037, (Optr)&t_block_return);
    Block PBlock18028 = new_Block_with(empty_Array, empty_Array, PThreadedCode18029, 3, PSend18030, PSend18031, PSend18037);
    // ifTrue:. 
    Send PSend18027 = new_Send((Optr)PSend18026, SMB_ifTrue_, 1, (Optr)PBlock18028);
    Array PThreadedCode18023 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign18024, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18025, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18026, (Optr)&t_send_ifTrue_, (Optr)PSend18027, (Optr)PBlock18028, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18021 = new_Method_with(empty_Array, PArray18022, empty_Array, PThreadedCode18023, 3, PAssign18024, PSend18027, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18021, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_parsesUntil() {
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18040 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    // parsesUntil:. 
    Send PSend18041 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_parsesUntil_, 1, (Optr)PSend18040);
    Array PThreadedCode18039 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18040, (Optr)&t_send1, (Optr)PSend18041, (Optr)&t_method_return);
    Method PMethod18038 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18039, 1, PSend18041);
    
    MethodClosure MC_SMB_parsesUntil = new_MethodClosure((Method)PMethod18038, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_parsesUntil, MC_SMB_parsesUntil);
}


static void init_SMB_acknowledge() {
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    Array PThreadedCode18043 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18042 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18043, 1, self);
    
    MethodClosure MC_SMB_acknowledge = new_MethodClosure((Method)PMethod18042, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_acknowledge, MC_SMB_acknowledge);
}


static void init_SMB_previousScreen() {
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend18046 = new_Send((Optr)self, SMB_startOfText, 0);
    Array PThreadedCode18045 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18046, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18044 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18045, 2, PSend18046, self);
    
    MethodClosure MC_SMB_previousScreen = new_MethodClosure((Method)PMethod18044, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_previousScreen, MC_SMB_previousScreen);
}


static void init_SMB_ready() {
    Symbol SMB_ready = new_Symbol(L"ready");
    Assign PAssign18049 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)true_Const);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend18050 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend18053 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode18052 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18053, (Optr)&t_block_return);
    Block PBlock18051 = new_Block_with(empty_Array, empty_Array, PThreadedCode18052, 1, PSend18053);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18054 = new_Send((Optr)PSend18050, SMB_timesRepeat_, 1, (Optr)PBlock18051);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18055 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Array PThreadedCode18048 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign18049, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18050, (Optr)&t_push_closure, (Optr)PBlock18051, (Optr)&t_send1, (Optr)PSend18054, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18055, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18047 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18048, 4, PAssign18049, PSend18054, PSend18055, self);
    
    MethodClosure MC_SMB_ready = new_MethodClosure((Method)PMethod18047, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_ready, MC_SMB_ready);
}


static void init_SMB_f11() {
    Symbol SMB_f11 = new_Symbol(L"f11");
    Array PThreadedCode18057 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18057, 1, self);
    
    MethodClosure MC_SMB_f11 = new_MethodClosure((Method)PMethod18056, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f11, MC_SMB_f11);
}


static void init_SMB_endOfText() {
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    Symbol SMB_lines = new_Symbol(L"lines");
    // lines. 
    Send PSend18060 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lines, 0);
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    // lastColumns. 
    Send PSend18061 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lastColumns, 0);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18062 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)PSend18060, (Optr)PSend18061);
    Array PThreadedCode18059 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18060, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18061, (Optr)&t_send2, (Optr)PSend18062, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18058 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18059, 2, PSend18062, self);
    
    MethodClosure MC_SMB_endOfText = new_MethodClosure((Method)PMethod18058, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfText, MC_SMB_endOfText);
}


static void init_SMB_f19() {
    Symbol SMB_f19 = new_Symbol(L"f19");
    Array PThreadedCode18064 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18063 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18064, 1, self);
    
    MethodClosure MC_SMB_f19 = new_MethodClosure((Method)PMethod18063, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f19, MC_SMB_f19);
}


static void init_SMB_f8() {
    Symbol SMB_f8 = new_Symbol(L"f8");
    Array PThreadedCode18066 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18065 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18066, 1, self);
    
    MethodClosure MC_SMB_f8 = new_MethodClosure((Method)PMethod18065, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f8, MC_SMB_f8);
}


static void init_SMB_verticalTab() {
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend18069 = new_Send((Optr)self, SMB_deleteToEndOfLine, 0);
    Array PThreadedCode18068 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18069, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18067 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18068, 2, PSend18069, self);
    
    MethodClosure MC_SMB_verticalTab = new_MethodClosure((Method)PMethod18067, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_verticalTab, MC_SMB_verticalTab);
}


static void init_SMB_select() {
    Symbol SMB_select = new_Symbol(L"select");
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend18072 = new_Send((Optr)self, SMB_end, 0);
    Array PThreadedCode18071 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18072, (Optr)&t_method_return);
    Method PMethod18070 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18071, 1, PSend18072);
    
    MethodClosure MC_SMB_select = new_MethodClosure((Method)PMethod18070, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_select, MC_SMB_select);
}


static void init_SMB_find() {
    Symbol SMB_find = new_Symbol(L"find");
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend18075 = new_Send((Optr)self, SMB_home, 0);
    Array PThreadedCode18074 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18075, (Optr)&t_method_return);
    Method PMethod18073 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18074, 1, PSend18075);
    
    MethodClosure MC_SMB_find = new_MethodClosure((Method)PMethod18073, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_find, MC_SMB_find);
}


static void init_SMB_alt_() {
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray18077 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18080 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18082 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18083 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)PSend18082);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18087 = new_Send((Optr)self, SMB_openLine, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18088 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18087);
    Array PThreadedCode18086 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18087, (Optr)&t_send1, (Optr)PSend18088, (Optr)&t_block_return);
    Block PBlock18085 = new_Block_with(empty_Array, empty_Array, PThreadedCode18086, 1, PSend18088);
    // ifTrue:. 
    Send PSend18084 = new_Send((Optr)PSend18083, SMB_ifTrue_, 1, (Optr)PBlock18085);
    Array PThreadedCode18081 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18082, (Optr)&t_send1, (Optr)PSend18083, (Optr)&t_send_ifTrue_, (Optr)PSend18084, (Optr)PBlock18085, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18079 = new_Block_with(PArray18080, empty_Array, PThreadedCode18081, 2, PSend18084, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18089 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18079);
    Array PThreadedCode18078 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18079, (Optr)&t_send1, (Optr)PSend18089, (Optr)&t_method_return);
    Method PMethod18076 = new_Method_with(PArray18077, empty_Array, empty_Array, PThreadedCode18078, 1, PSend18089);
    
    MethodClosure MC_SMB_alt_ = new_MethodClosure((Method)PMethod18076, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_alt_, MC_SMB_alt_);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    // deleteRight. 
    Send PSend18092 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteRight, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend18096 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_deleteCharacter, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend18097 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18098 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18095 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18096, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend18097, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18098, (Optr)&t_block_return);
    Block PBlock18094 = new_Block_with(empty_Array, empty_Array, PThreadedCode18095, 3, PSend18096, PSend18097, PSend18098);
    // ifTrue:. 
    Send PSend18093 = new_Send((Optr)PSend18092, SMB_ifTrue_, 1, (Optr)PBlock18094);
    Array PThreadedCode18091 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18092, (Optr)&t_send_ifTrue_, (Optr)PSend18093, (Optr)PBlock18094, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18090 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18091, 2, PSend18093, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod18090, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend18101 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteToEndOfLine, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    // clearToEnd. 
    Send PSend18105 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_clearToEnd, 0);
    Array PThreadedCode18104 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18105, (Optr)&t_block_return);
    Block PBlock18103 = new_Block_with(empty_Array, empty_Array, PThreadedCode18104, 1, PSend18105);
    // ifTrue:. 
    Send PSend18102 = new_Send((Optr)PSend18101, SMB_ifTrue_, 1, (Optr)PBlock18103);
    Array PThreadedCode18100 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18101, (Optr)&t_send_ifTrue_, (Optr)PSend18102, (Optr)PBlock18103, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18099 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18100, 2, PSend18102, self);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod18099, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_class_SMB_from_to_for_() {
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Variable VAR_output_0_1 = new_Variable_named(L"output", 0);
    Variable VAR_client_0_2 = new_Variable_named(L"client", 0);
    Array PArray18107 = new_Array_with(3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18109 = new_Super(SMB_basicNew, 0);
    // from:to:for:. 
    Send PSend18110 = new_Send((Optr)PSuper18109, SMB_from_to_for_, 3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Array PThreadedCode18108 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18109, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_client_0_2, (Optr)&t_send3, (Optr)PSend18110, (Optr)&t_method_return);
    Method PMethod18106 = new_Method_with(PArray18107, empty_Array, empty_Array, PThreadedCode18108, 1, PSend18110);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod18106, HEADER(Shell_ReadLine_ReadLine_Class));
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