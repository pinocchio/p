#include <lib/class/Shell/ReadLine/Text.h>


Optr layout_Shell_ReadLine_Text_Class_class;
Optr slot_Shell_ReadLine_Text_lines;
Optr slot_Shell_ReadLine_Text_stream;
Optr layout_Shell_ReadLine_Text;


static void init_SMB_getLines() {
    Symbol SMB_getLines = new_Symbol(L"getLines");
    Array PThreadedCode17739 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_method_return);
    Method PMethod17738 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17739, 1, slot_Shell_ReadLine_Text_lines);
    
    MethodClosure MC_SMB_getLines = new_MethodClosure((Method)PMethod17738, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_getLines, MC_SMB_getLines);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17742 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17743 = new_Send((Optr)PSend17742, SMB_previous, 0);
    Array PThreadedCode17741 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17742, (Optr)&t_send0, (Optr)PSend17743, (Optr)&t_method_return);
    Method PMethod17740 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17741, 1, PSend17743);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod17740, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17746 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Array PThreadedCode17745 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17746, (Optr)&t_method_return);
    Method PMethod17744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17745, 1, PSend17746);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod17744, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_deleteRight() {
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17749 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17750 = new_Send((Optr)PSend17749, SMB_next, 0);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17754 = new_Send((Optr)self, SMB_deleteLeft, 0);
    Array PThreadedCode17753 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17754, (Optr)&t_block_return);
    Block PBlock17752 = new_Block_with(empty_Array, empty_Array, PThreadedCode17753, 1, PSend17754);
    Array PThreadedCode17756 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_block_return_false);
    Block PBlock17755 = new_Block_with(empty_Array, empty_Array, PThreadedCode17756, 1, false_Const);
    // ifTrue:ifFalse:. 
    Send PSend17751 = new_Send((Optr)PSend17750, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17752, (Optr)PBlock17755);
    Array PThreadedCode17748 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17749, (Optr)&t_send0, (Optr)PSend17750, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17751, (Optr)PBlock17752, (Optr)PBlock17755, (Optr)&t_method_return);
    Method PMethod17747 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17748, 1, PSend17751);
    
    MethodClosure MC_SMB_deleteRight = new_MethodClosure((Method)PMethod17747, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteRight, MC_SMB_deleteRight);
}


static void init_SMB_position_() {
    Symbol SMB_position_ = new_Symbol(L"position:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17758 = new_Array_with(1, (Optr)VAR_value_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_l_0_2 = new_Variable_named(L"l", 0);
    Array PArray17759 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_l_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17762 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17764 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_value_0_0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17765 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17768 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17767 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17768, (Optr)&t_block_return);
    Block PBlock17766 = new_Block_with(empty_Array, empty_Array, PThreadedCode17767, 1, PSend17768);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17772 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Assign PAssign17771 = new_Assign((Optr)VAR_l_0_2, (Optr)PSend17772);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17773 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend17774 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17773);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // position:. 
    Send PSend17778 = new_Send((Optr)VAR_l_0_2, SMB_position_, 1, (Optr)VAR_pos_0_1);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17779 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17778);
    Array PThreadedCode17777 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17778, (Optr)&t_send1, (Optr)PSend17779, (Optr)&t_block_return);
    Block PBlock17776 = new_Block_with(empty_Array, empty_Array, PThreadedCode17777, 1, PSend17779);
    // ifTrue:. 
    Send PSend17775 = new_Send((Optr)PSend17774, SMB_ifTrue_, 1, (Optr)PBlock17776);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // size. 
    Send PSend17783 = new_Send((Optr)VAR_l_0_2, SMB_size, 0);
    // -. 
    Send PSend17782 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17783);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17781 = new_Send((Optr)PSend17782, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17780 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17781);
    Array PThreadedCode17770 = instantiate_Array_with(ThreadedCode_Class, 0, 35, (Optr)&t_push1, (Optr)PAssign17771, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17772, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17773, (Optr)&t_send1, (Optr)PSend17774, (Optr)&t_send_ifTrue_, (Optr)PSend17775, (Optr)PBlock17776, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17780, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17783, (Optr)&t_send1, (Optr)PSend17782, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17781, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17769 = new_Block_with(empty_Array, empty_Array, PThreadedCode17770, 3, PAssign17771, PSend17775, PAssign17780);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend17784 = new_Send((Optr)PBlock17766, SMB_whileTrue_, 1, (Optr)PBlock17769);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend17785 = new_Send((Optr)VAR_pos_0_1, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17789 = new_Send((Optr)VAR_l_0_2, SMB_end, 0);
    // escape:. 
    Send PSend17790 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend17789);
    Array PThreadedCode17788 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_l_0_2, (Optr)&t_send0, (Optr)PSend17789, (Optr)&t_send1, (Optr)PSend17790, (Optr)&t_block_return);
    Block PBlock17787 = new_Block_with(empty_Array, empty_Array, PThreadedCode17788, 1, PSend17790);
    // ifTrue:. 
    Send PSend17786 = new_Send((Optr)PSend17785, SMB_ifTrue_, 1, (Optr)PBlock17787);
    Symbol SMB_indexOutOfBounds_ = new_Symbol(L"indexOutOfBounds:");
    // indexOutOfBounds:. 
    Send PSend17791 = new_Send((Optr)self, SMB_indexOutOfBounds_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17763 = instantiate_Array_with(ThreadedCode_Class, 0, 34, (Optr)&t_push1, (Optr)PAssign17764, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17765, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock17766, (Optr)&t_push_closure, (Optr)PBlock17769, (Optr)&t_send1, (Optr)PSend17784, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17785, (Optr)&t_send_ifTrue_, (Optr)PSend17786, (Optr)PBlock17787, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17791, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17761 = new_Block_with(PArray17762, empty_Array, PThreadedCode17763, 6, PAssign17764, PSend17765, PSend17784, PSend17786, PSend17791, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17792 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17761);
    Array PThreadedCode17760 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17761, (Optr)&t_send1, (Optr)PSend17792, (Optr)&t_method_return);
    Method PMethod17757 = new_Method_with(PArray17758, PArray17759, empty_Array, PThreadedCode17760, 1, PSend17792);
    
    MethodClosure MC_SMB_position_ = new_MethodClosure((Method)PMethod17757, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position_, MC_SMB_position_);
}


static void init_SMB_column() {
    Symbol SMB_column = new_Symbol(L"column");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17795 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17796 = new_Send((Optr)PSend17795, SMB_position, 0);
    Array PThreadedCode17794 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17795, (Optr)&t_send0, (Optr)PSend17796, (Optr)&t_method_return);
    Method PMethod17793 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17794, 1, PSend17796);
    
    MethodClosure MC_SMB_column = new_MethodClosure((Method)PMethod17793, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column, MC_SMB_column);
}


static void init_SMB_deleteLeft() {
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17799 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend17800 = new_Send((Optr)PSend17799, SMB_remove, 0);
    Array PThreadedCode17798 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17799, (Optr)&t_send0, (Optr)PSend17800, (Optr)&t_method_return);
    Method PMethod17797 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17798, 1, PSend17800);
    
    MethodClosure MC_SMB_deleteLeft = new_MethodClosure((Method)PMethod17797, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteLeft, MC_SMB_deleteLeft);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17804 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17803 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17804);
    Symbol SMB_on_ = new_Symbol(L"on:");
    Symbol SMB_new_ = new_Symbol(L"new:");
    SmallInt int_1024 = new_SmallInt(1024);
    Constant int_1024_Const = new_Constant((Optr)int_1024);
    // new:. 
    Send PSend17807 = new_Send((Optr)String_classReference, SMB_new_, 1, (Optr)int_1024_Const);
    // on:. 
    Send PSend17806 = new_Send((Optr)WriteStream_classReference, SMB_on_, 1, (Optr)PSend17807);
    Assign PAssign17805 = new_Assign((Optr)slot_Shell_ReadLine_Text_stream, (Optr)PSend17806);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17808 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17802 = instantiate_Array_with(ThreadedCode_Class, 0, 27, (Optr)&t_push1, (Optr)PAssign17803, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17804, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17805, (Optr)&t_push_class_reference, (Optr)WriteStream_classReference, (Optr)&t_push_class_reference, (Optr)String_classReference, (Optr)&t_push1, (Optr)int_1024, (Optr)&t_send1, (Optr)PSend17807, (Optr)&t_send1, (Optr)PSend17806, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17808, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17802, 4, PAssign17803, PAssign17805, PSend17808, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17801, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_line() {
    Symbol SMB_line = new_Symbol(L"line");
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17811 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Array PThreadedCode17810 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17811, (Optr)&t_method_return);
    Method PMethod17809 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17810, 1, PSend17811);
    
    MethodClosure MC_SMB_line = new_MethodClosure((Method)PMethod17809, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line, MC_SMB_line);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17814 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17815 = new_Send((Optr)PSend17814, SMB_next, 0);
    Array PThreadedCode17813 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17814, (Optr)&t_send0, (Optr)PSend17815, (Optr)&t_method_return);
    Method PMethod17812 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17813, 1, PSend17815);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod17812, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17818 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17819 = new_Send((Optr)PSend17818, SMB_end, 0);
    Array PThreadedCode17817 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17818, (Optr)&t_send0, (Optr)PSend17819, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17816 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17817, 2, PSend17819, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod17816, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_add_() {
    Symbol SMB_add_ = new_Symbol(L"add:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray17821 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17823 = new_Send((Optr)self, SMB_currentLine, 0);
    // add:. 
    Send PSend17824 = new_Send((Optr)PSend17823, SMB_add_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode17822 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17823, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend17824, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17820 = new_Method_with(PArray17821, empty_Array, empty_Array, PThreadedCode17822, 2, PSend17824, self);
    
    MethodClosure MC_SMB_add_ = new_MethodClosure((Method)PMethod17820, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_add_, MC_SMB_add_);
}


static void init_SMB_start() {
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17827 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17828 = new_Send((Optr)self, SMB_currentLine, 0);
    // start. 
    Send PSend17829 = new_Send((Optr)PSend17828, SMB_start, 0);
    Array PThreadedCode17826 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17827, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17828, (Optr)&t_send0, (Optr)PSend17829, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17825 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17826, 3, PSend17827, PSend17829, self);
    
    MethodClosure MC_SMB_start = new_MethodClosure((Method)PMethod17825, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_start, MC_SMB_start);
}


static void init_SMB_setLines_() {
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17831 = new_Array_with(1, (Optr)VAR_value_0_0);
    Assign PAssign17833 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)VAR_value_0_0);
    Array PThreadedCode17832 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign17833, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17830 = new_Method_with(PArray17831, empty_Array, empty_Array, PThreadedCode17832, 2, PAssign17833, self);
    
    MethodClosure MC_SMB_setLines_ = new_MethodClosure((Method)PMethod17830, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_setLines_, MC_SMB_setLines_);
}


static void init_SMB_onLineBefore_() {
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray17835 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_pos_0_1 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_2 = new_Variable_named(L"idx", 0);
    Array PArray17836 = new_Array_with(2, (Optr)VAR_pos_0_1, (Optr)VAR_idx_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17839 = new_Array_with(1, (Optr)VAR__return__1_0);
    Assign PAssign17841 = new_Assign((Optr)VAR_pos_0_1, (Optr)VAR_position_0_0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17843 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17842 = new_Assign((Optr)VAR_idx_0_2, (Optr)PSend17843);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17844 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17845 = new_Send((Optr)VAR_idx_0_2, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_2_0 = new_Variable_named(L"i", 2);
    Array PArray17847 = new_Array_with(1, (Optr)VAR_i_2_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17849 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17854 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17853 = new_Send((Optr)PSend17854, SMB_size, 0);
    // -. 
    Send PSend17852 = new_Send((Optr)VAR_pos_0_1, SMB__minus_, 1, (Optr)PSend17853);
    // -. 
    Send PSend17851 = new_Send((Optr)PSend17852, SMB__minus_, 1, (Optr)int_1_Const);
    Assign PAssign17850 = new_Assign((Optr)VAR_pos_0_1, (Optr)PSend17851);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <=. 
    Send PSend17855 = new_Send((Optr)PAssign17850, SMB__lt__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17859 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17858 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17859, (Optr)&t_block_return);
    Block PBlock17857 = new_Block_with(empty_Array, empty_Array, PThreadedCode17858, 1, PSend17859);
    // ifTrue:. 
    Send PSend17856 = new_Send((Optr)PSend17855, SMB_ifTrue_, 1, (Optr)PBlock17857);
    Array PThreadedCode17848 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17849, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17850, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17854, (Optr)&t_send0, (Optr)PSend17853, (Optr)&t_send1, (Optr)PSend17852, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17851, (Optr)&t_assign, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17855, (Optr)&t_send_ifTrue_, (Optr)PSend17856, (Optr)PBlock17857, (Optr)&t_method_return);
    Block PBlock17846 = new_Block_with(PArray17847, empty_Array, PThreadedCode17848, 2, PSend17849, PSend17856);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17860 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17845, (Optr)PBlock17846);
    // next. 
    Send PSend17861 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17862 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // size. 
    Send PSend17863 = new_Send((Optr)PSend17862, SMB_size, 0);
    // <=. 
    Send PSend17864 = new_Send((Optr)VAR_pos_0_1, SMB__lt__equals_, 1, (Optr)PSend17863);
    // value. 
    Send PSend17867 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17868 = new_Send((Optr)PSend17867, SMB_position, 0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17869 = new_Send((Optr)PSend17868, SMB__lt_, 1, (Optr)VAR_pos_0_1);
    Array PThreadedCode17866 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17867, (Optr)&t_send0, (Optr)PSend17868, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_send1, (Optr)PSend17869, (Optr)&t_block_return);
    Block PBlock17865 = new_Block_with(empty_Array, empty_Array, PThreadedCode17866, 1, PSend17869);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend17870 = new_Send((Optr)PSend17864, SMB_and_, 1, (Optr)PBlock17865);
    Array PThreadedCode17840 = instantiate_Array_with(ThreadedCode_Class, 0, 51, (Optr)&t_push1, (Optr)PAssign17841, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17842, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17843, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17844, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_2, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17845, (Optr)&t_push_closure, (Optr)PBlock17846, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17860, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17861, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17862, (Optr)&t_send0, (Optr)PSend17863, (Optr)&t_send1, (Optr)PSend17864, (Optr)&t_push_closure, (Optr)PBlock17865, (Optr)&t_send1, (Optr)PSend17870, (Optr)&t_method_return);
    Block PBlock17838 = new_Block_with(PArray17839, empty_Array, PThreadedCode17840, 6, PAssign17841, PAssign17842, PSend17844, PSend17860, PSend17861, PSend17870);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17871 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17838);
    Array PThreadedCode17837 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17838, (Optr)&t_send1, (Optr)PSend17871, (Optr)&t_method_return);
    Method PMethod17834 = new_Method_with(PArray17835, PArray17836, empty_Array, PThreadedCode17837, 1, PSend17871);
    
    MethodClosure MC_SMB_onLineBefore_ = new_MethodClosure((Method)PMethod17834, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_onLineBefore_, MC_SMB_onLineBefore_);
}


static void init_SMB_addLine() {
    Symbol SMB_addLine = new_Symbol(L"addLine");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17874 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17875 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_add_, 1, (Optr)PSend17874);
    Array PThreadedCode17873 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17874, (Optr)&t_send1, (Optr)PSend17875, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17873, 2, PSend17875, self);
    
    MethodClosure MC_SMB_addLine = new_MethodClosure((Method)PMethod17872, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_addLine, MC_SMB_addLine);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend17878 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_clear, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17879 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17877 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17878, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17879, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17876 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17877, 3, PSend17878, PSend17879, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17876, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_currentCharacter() {
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17882 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17883 = new_Send((Optr)PSend17882, SMB_value, 0);
    Array PThreadedCode17881 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17882, (Optr)&t_send0, (Optr)PSend17883, (Optr)&t_method_return);
    Method PMethod17880 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17881, 1, PSend17883);
    
    MethodClosure MC_SMB_currentCharacter = new_MethodClosure((Method)PMethod17880, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentCharacter, MC_SMB_currentCharacter);
}


static void init_SMB_column_() {
    Symbol SMB_column_ = new_Symbol(L"column:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17885 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17887 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17888 = new_Send((Optr)PSend17887, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17886 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17887, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17888, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17884 = new_Method_with(PArray17885, empty_Array, empty_Array, PThreadedCode17886, 2, PSend17888, self);
    
    MethodClosure MC_SMB_column_ = new_MethodClosure((Method)PMethod17884, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_column_, MC_SMB_column_);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17892 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17894 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_previous, 0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17895 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17899 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17900 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17898 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17899, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17900, (Optr)&t_block_return);
    Block PBlock17897 = new_Block_with(empty_Array, empty_Array, PThreadedCode17898, 2, PSend17899, PSend17900);
    // ifTrue:. 
    Send PSend17896 = new_Send((Optr)PSend17895, SMB_ifTrue_, 1, (Optr)PBlock17897);
    Array PThreadedCode17893 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17894, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17895, (Optr)&t_send_ifTrue_, (Optr)PSend17896, (Optr)PBlock17897, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17891 = new_Block_with(PArray17892, empty_Array, PThreadedCode17893, 3, PSend17894, PSend17896, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17901 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17891);
    Array PThreadedCode17890 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17891, (Optr)&t_send1, (Optr)PSend17901, (Optr)&t_method_return);
    Method PMethod17889 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17890, 1, PSend17901);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17889, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_line_() {
    Symbol SMB_line_ = new_Symbol(L"line:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Array PArray17903 = new_Array_with(1, (Optr)VAR_value_0_0);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend17905 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position_, 1, (Optr)VAR_value_0_0);
    Array PThreadedCode17904 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send1, (Optr)PSend17905, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17902 = new_Method_with(PArray17903, empty_Array, empty_Array, PThreadedCode17904, 2, PSend17905, self);
    
    MethodClosure MC_SMB_line_ = new_MethodClosure((Method)PMethod17902, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_line_, MC_SMB_line_);
}


static void init_SMB_distanceToBottom() {
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17908 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_size, 0);
    Symbol SMB_position = new_Symbol(L"position");
    // position. 
    Send PSend17909 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17910 = new_Send((Optr)PSend17908, SMB__minus_, 1, (Optr)PSend17909);
    Array PThreadedCode17907 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17908, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17909, (Optr)&t_send1, (Optr)PSend17910, (Optr)&t_method_return);
    Method PMethod17906 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17907, 1, PSend17910);
    
    MethodClosure MC_SMB_distanceToBottom = new_MethodClosure((Method)PMethod17906, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_distanceToBottom, MC_SMB_distanceToBottom);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend17913 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_end, 0);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17914 = new_Send((Optr)self, SMB_currentLine, 0);
    // end. 
    Send PSend17915 = new_Send((Optr)PSend17914, SMB_end, 0);
    Array PThreadedCode17912 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17913, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17914, (Optr)&t_send0, (Optr)PSend17915, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17911 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17912, 3, PSend17913, PSend17915, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17911, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17918 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Array PThreadedCode17917 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17918, (Optr)&t_method_return);
    Method PMethod17916 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17917, 1, PSend17918);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17916, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_lastColumns() {
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    Symbol SMB_last = new_Symbol(L"last");
    // last. 
    Send PSend17921 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_last, 0);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17922 = new_Send((Optr)PSend17921, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17923 = new_Send((Optr)PSend17922, SMB_size, 0);
    Array PThreadedCode17920 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17921, (Optr)&t_send0, (Optr)PSend17922, (Optr)&t_send0, (Optr)PSend17923, (Optr)&t_method_return);
    Method PMethod17919 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17920, 1, PSend17923);
    
    MethodClosure MC_SMB_lastColumns = new_MethodClosure((Method)PMethod17919, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_lastColumns, MC_SMB_lastColumns);
}


static void init_SMB_do_() {
    Symbol SMB_do_ = new_Symbol(L"do:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Array PArray17925 = new_Array_with(1, (Optr)VAR_block_0_0);
    // do:. 
    Send PSend17927 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_, 1, (Optr)VAR_block_0_0);
    Array PThreadedCode17926 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_send1, (Optr)PSend17927, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17924 = new_Method_with(PArray17925, empty_Array, empty_Array, PThreadedCode17926, 2, PSend17927, self);
    
    MethodClosure MC_SMB_do_ = new_MethodClosure((Method)PMethod17924, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_, MC_SMB_do_);
}


static void init_SMB_currentLine() {
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17930 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Array PThreadedCode17929 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17930, (Optr)&t_method_return);
    Method PMethod17928 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17929, 1, PSend17930);
    
    MethodClosure MC_SMB_currentLine = new_MethodClosure((Method)PMethod17928, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_currentLine, MC_SMB_currentLine);
}


static void init_SMB_position() {
    Symbol SMB_position = new_Symbol(L"position");
    Variable VAR_pos_0_0 = new_Variable_named(L"pos", 0);
    Variable VAR_idx_0_1 = new_Variable_named(L"idx", 0);
    Array PArray17932 = new_Array_with(2, (Optr)VAR_pos_0_0, (Optr)VAR_idx_0_1);
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign17934 = new_Assign((Optr)VAR_pos_0_0, (Optr)int_0_Const);
    // position. 
    Send PSend17936 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_position, 0);
    Assign PAssign17935 = new_Assign((Optr)VAR_idx_0_1, (Optr)PSend17936);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17937 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_start, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend17938 = new_Send((Optr)VAR_idx_0_1, SMB__minus_, 1, (Optr)int_1_Const);
    Variable VAR_i_1_0 = new_Variable_named(L"i", 1);
    Array PArray17940 = new_Array_with(1, (Optr)VAR_i_1_0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend17942 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17946 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend17945 = new_Send((Optr)PSend17946, SMB_size, 0);
    // +. 
    Send PSend17944 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17945);
    Assign PAssign17943 = new_Assign((Optr)VAR_pos_0_0, (Optr)PSend17944);
    Array PThreadedCode17941 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17942, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17943, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17946, (Optr)&t_send0, (Optr)PSend17945, (Optr)&t_send1, (Optr)PSend17944, (Optr)&t_assign, (Optr)&t_method_return);
    Block PBlock17939 = new_Block_with(PArray17940, empty_Array, PThreadedCode17941, 2, PSend17942, PAssign17943);
    Symbol SMB_to_do_ = new_Symbol(L"to:do:");
    // to:do:. 
    Send PSend17947 = new_Send((Optr)int_1_Const, SMB_to_do_, 2, (Optr)PSend17938, (Optr)PBlock17939);
    // next. 
    Send PSend17948 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_next, 0);
    // value. 
    Send PSend17949 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_value, 0);
    // position. 
    Send PSend17950 = new_Send((Optr)PSend17949, SMB_position, 0);
    // +. 
    Send PSend17951 = new_Send((Optr)VAR_pos_0_0, SMB__plus_, 1, (Optr)PSend17950);
    Array PThreadedCode17933 = instantiate_Array_with(ThreadedCode_Class, 0, 46, (Optr)&t_push1, (Optr)PAssign17934, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17935, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17936, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17937, (Optr)&t_zap, (Optr)&t_push_1, (Optr)&t_push_variable, (Optr)VAR_idx_0_1, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend17938, (Optr)&t_push_closure, (Optr)PBlock17939, (Optr)&t_send_to_do_, (Optr)&t_continue_to_do_, (Optr)PSend17947, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17948, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_pos_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17949, (Optr)&t_send0, (Optr)PSend17950, (Optr)&t_send1, (Optr)PSend17951, (Optr)&t_method_return);
    Method PMethod17931 = new_Method_with(empty_Array, PArray17932, empty_Array, PThreadedCode17933, 6, PAssign17934, PAssign17935, PSend17937, PSend17947, PSend17948, PSend17951);
    
    MethodClosure MC_SMB_position = new_MethodClosure((Method)PMethod17931, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_position, MC_SMB_position);
}


static void init_SMB_startOfLine() {
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17954 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_start = new_Symbol(L"start");
    // start. 
    Send PSend17955 = new_Send((Optr)PSend17954, SMB_start, 0);
    Array PThreadedCode17953 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17954, (Optr)&t_send0, (Optr)PSend17955, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17952 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17953, 2, PSend17955, self);
    
    MethodClosure MC_SMB_startOfLine = new_MethodClosure((Method)PMethod17952, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_startOfLine, MC_SMB_startOfLine);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend17958 = new_Send((Optr)self, SMB_currentLine, 0);
    Symbol SMB_truncate = new_Symbol(L"truncate");
    // truncate. 
    Send PSend17959 = new_Send((Optr)PSend17958, SMB_truncate, 0);
    Array PThreadedCode17957 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17958, (Optr)&t_send0, (Optr)PSend17959, (Optr)&t_method_return);
    Method PMethod17956 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17957, 1, PSend17959);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17956, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_contents() {
    Symbol SMB_contents = new_Symbol(L"contents");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend17962 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_reset, 0);
    Variable VAR_line_1_0 = new_Variable_named(L"line", 1);
    Array PArray17964 = new_Array_with(1, (Optr)VAR_line_1_0);
    Variable VAR_c_2_0 = new_Variable_named(L"c", 2);
    Array PArray17967 = new_Array_with(1, (Optr)VAR_c_2_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend17969 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)VAR_c_2_0);
    Array PThreadedCode17968 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_variable, (Optr)VAR_c_2_0, (Optr)&t_send1, (Optr)PSend17969, (Optr)&t_method_return);
    Block PBlock17966 = new_Block_with(PArray17967, empty_Array, PThreadedCode17968, 1, PSend17969);
    Symbol SMB_do_ = new_Symbol(L"do:");
    // do:. 
    Send PSend17970 = new_Send((Optr)VAR_line_1_0, SMB_do_, 1, (Optr)PBlock17966);
    Array PThreadedCode17965 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_line_1_0, (Optr)&t_push_closure, (Optr)PBlock17966, (Optr)&t_send1, (Optr)PSend17970, (Optr)&t_method_return);
    Block PBlock17963 = new_Block_with(PArray17964, empty_Array, PThreadedCode17965, 1, PSend17970);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17973 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    // <<. 
    Send PSend17974 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB__shiftLeft_, 1, (Optr)PSend17973);
    Array PThreadedCode17972 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend17973, (Optr)&t_send1, (Optr)PSend17974, (Optr)&t_block_return);
    Block PBlock17971 = new_Block_with(empty_Array, empty_Array, PThreadedCode17972, 1, PSend17974);
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    // do:separatedBy:. 
    Send PSend17975 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)PBlock17963, (Optr)PBlock17971);
    // contents. 
    Send PSend17976 = new_Send((Optr)slot_Shell_ReadLine_Text_stream, SMB_contents, 0);
    Array PThreadedCode17961 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17962, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_closure, (Optr)PBlock17963, (Optr)&t_push_closure, (Optr)PBlock17971, (Optr)&t_send2, (Optr)PSend17975, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_stream, (Optr)&t_send0, (Optr)PSend17976, (Optr)&t_method_return);
    Method PMethod17960 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17961, 3, PSend17962, PSend17975, PSend17976);
    
    MethodClosure MC_SMB_contents = new_MethodClosure((Method)PMethod17960, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_contents, MC_SMB_contents);
}


static void init_SMB_do_separatedBy_() {
    Symbol SMB_do_separatedBy_ = new_Symbol(L"do:separatedBy:");
    Variable VAR_block_0_0 = new_Variable_named(L"block", 0);
    Variable VAR_separationBlock_0_1 = new_Variable_named(L"separationBlock", 0);
    Array PArray17978 = new_Array_with(2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    // do:separatedBy:. 
    Send PSend17980 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_do_separatedBy_, 2, (Optr)VAR_block_0_0, (Optr)VAR_separationBlock_0_1);
    Array PThreadedCode17979 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_push_variable, (Optr)VAR_block_0_0, (Optr)&t_push_variable, (Optr)VAR_separationBlock_0_1, (Optr)&t_send2, (Optr)PSend17980, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17977 = new_Method_with(PArray17978, empty_Array, empty_Array, PThreadedCode17979, 2, PSend17980, self);
    
    MethodClosure MC_SMB_do_separatedBy_ = new_MethodClosure((Method)PMethod17977, Shell_ReadLine_Text_Class);
    store_method(Shell_ReadLine_Text_Class, SMB_do_separatedBy_, MC_SMB_do_separatedBy_);
}

void init_Shell_ReadLine_Text_layout() {
    layout_Shell_ReadLine_Text_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_Text_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_Text_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_Text_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_Text_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_Text_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_Text = new_Symbol(L"Text");
    slot_Shell_ReadLine_Text_lines = (Optr)new_Slot(0, L"lines");
    slot_Shell_ReadLine_Text_stream = (Optr)new_Slot(1, L"stream");
    layout_Shell_ReadLine_Text = (Optr)create_layout_with_vars(ObjectLayout_Class, 2);
    ((Array)layout_Shell_ReadLine_Text)->values[0] = slot_Shell_ReadLine_Text_lines; // lines 
    ((Array)layout_Shell_ReadLine_Text)->values[1] = slot_Shell_ReadLine_Text_stream; // stream 
    Shell_ReadLine_Text_Class = (Class)new_Class(Object_Class, layout_Shell_ReadLine_Text_Class_class);
    Class_set_superclass(Shell_ReadLine_Text_Class, Object_Class);
    Shell_ReadLine_Text_Class->layout = layout_Shell_ReadLine_Text;
    HEADER(Shell_ReadLine_Text_Class)->layout = layout_Shell_ReadLine_Text_Class_class;
    Shell_ReadLine_Text_Class->name = SMB_Text;
    
}

void init_Shell_ReadLine_Text_methods() {
    init_SMB_getLines();
    init_SMB_left();
    init_SMB_lines();
    init_SMB_deleteRight();
    init_SMB_position_();
    init_SMB_column();
    init_SMB_deleteLeft();
    init_SMB_initialize();
    init_SMB_line();
    init_SMB_right();
    init_SMB_endOfLine();
    init_SMB_add_();
    init_SMB_start();
    init_SMB_setLines_();
    init_SMB_onLineBefore_();
    init_SMB_addLine();
    init_SMB_clear();
    init_SMB_currentCharacter();
    init_SMB_column_();
    init_SMB_up();
    init_SMB_line_();
    init_SMB_distanceToBottom();
    init_SMB_end();
    init_SMB_down();
    init_SMB_lastColumns();
    init_SMB_do_();
    init_SMB_currentLine();
    init_SMB_position();
    init_SMB_startOfLine();
    init_SMB_deleteToEndOfLine();
    init_SMB_contents();
    init_SMB_do_separatedBy_();
    
}