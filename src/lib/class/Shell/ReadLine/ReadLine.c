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
    Array PThreadedCode17982 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17981 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17982, 1, self);
    
    MethodClosure MC_SMB_f9 = new_MethodClosure((Method)PMethod17981, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f9, MC_SMB_f9);
}


static void init_SMB_right_() {
    Symbol SMB_right_ = new_Symbol(L"right:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17984 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17986 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17990 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17993 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17992 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17993, (Optr)&t_block_return);
    Block PBlock17991 = new_Block_with(empty_Array, empty_Array, PThreadedCode17992, 1, PSend17993);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17994 = new_Send((Optr)PSend17990, SMB_timesRepeat_, 1, (Optr)PBlock17991);
    Array PThreadedCode17989 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17990, (Optr)&t_push_closure, (Optr)PBlock17991, (Optr)&t_send1, (Optr)PSend17994, (Optr)&t_block_return);
    Block PBlock17988 = new_Block_with(empty_Array, empty_Array, PThreadedCode17989, 1, PSend17994);
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17999 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17998 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17999, (Optr)&t_block_return);
    Block PBlock17997 = new_Block_with(empty_Array, empty_Array, PThreadedCode17998, 1, PSend17999);
    // timesRepeat:. 
    Send PSend18000 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17997);
    Array PThreadedCode17996 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17997, (Optr)&t_send1, (Optr)PSend18000, (Optr)&t_block_return);
    Block PBlock17995 = new_Block_with(empty_Array, empty_Array, PThreadedCode17996, 1, PSend18000);
    // ifTrue:ifFalse:. 
    Send PSend17987 = new_Send((Optr)PSend17986, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17988, (Optr)PBlock17995);
    Array PThreadedCode17985 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17986, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17987, (Optr)PBlock17988, (Optr)PBlock17995, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17983 = new_Method_with(PArray17984, empty_Array, empty_Array, PThreadedCode17985, 2, PSend17987, self);
    
    MethodClosure MC_SMB_right_ = new_MethodClosure((Method)PMethod17983, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right_, MC_SMB_right_);
}


static void init_SMB_f4() {
    Symbol SMB_f4 = new_Symbol(L"f4");
    Array PThreadedCode18002 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18001 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18002, 1, self);
    
    MethodClosure MC_SMB_f4 = new_MethodClosure((Method)PMethod18001, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f4, MC_SMB_f4);
}


static void init_SMB_endOfTransmission() {
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    Array PThreadedCode18004 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18003 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18004, 1, self);
    
    MethodClosure MC_SMB_endOfTransmission = new_MethodClosure((Method)PMethod18003, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfTransmission, MC_SMB_endOfTransmission);
}


static void init_SMB_up_() {
    Symbol SMB_up_ = new_Symbol(L"up:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray18006 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend18008 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18012 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend18015 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode18014 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18015, (Optr)&t_block_return);
    Block PBlock18013 = new_Block_with(empty_Array, empty_Array, PThreadedCode18014, 1, PSend18015);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18016 = new_Send((Optr)PSend18012, SMB_timesRepeat_, 1, (Optr)PBlock18013);
    Array PThreadedCode18011 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend18012, (Optr)&t_push_closure, (Optr)PBlock18013, (Optr)&t_send1, (Optr)PSend18016, (Optr)&t_block_return);
    Block PBlock18010 = new_Block_with(empty_Array, empty_Array, PThreadedCode18011, 1, PSend18016);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend18021 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode18020 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18021, (Optr)&t_block_return);
    Block PBlock18019 = new_Block_with(empty_Array, empty_Array, PThreadedCode18020, 1, PSend18021);
    // timesRepeat:. 
    Send PSend18022 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock18019);
    Array PThreadedCode18018 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock18019, (Optr)&t_send1, (Optr)PSend18022, (Optr)&t_block_return);
    Block PBlock18017 = new_Block_with(empty_Array, empty_Array, PThreadedCode18018, 1, PSend18022);
    // ifTrue:ifFalse:. 
    Send PSend18009 = new_Send((Optr)PSend18008, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock18010, (Optr)PBlock18017);
    Array PThreadedCode18007 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18008, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend18009, (Optr)PBlock18010, (Optr)PBlock18017, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18005 = new_Method_with(PArray18006, empty_Array, empty_Array, PThreadedCode18007, 2, PSend18009, self);
    
    MethodClosure MC_SMB_up_ = new_MethodClosure((Method)PMethod18005, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up_, MC_SMB_up_);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Array PThreadedCode18024 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18023 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18024, 1, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod18023, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend18027 = new_Send((Optr)self, SMB_startOfHeading, 0);
    Array PThreadedCode18026 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18027, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18025 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18026, 2, PSend18027, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod18025, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_f13() {
    Symbol SMB_f13 = new_Symbol(L"f13");
    Array PThreadedCode18029 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18028 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18029, 1, self);
    
    MethodClosure MC_SMB_f13 = new_MethodClosure((Method)PMethod18028, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f13, MC_SMB_f13);
}


static void init_SMB_f2() {
    Symbol SMB_f2 = new_Symbol(L"f2");
    Array PThreadedCode18031 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18030 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18031, 1, self);
    
    MethodClosure MC_SMB_f2 = new_MethodClosure((Method)PMethod18030, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f2, MC_SMB_f2);
}


static void init_SMB_nextScreen() {
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend18034 = new_Send((Optr)self, SMB_endOfText, 0);
    Array PThreadedCode18033 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18034, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18032 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18033, 2, PSend18034, self);
    
    MethodClosure MC_SMB_nextScreen = new_MethodClosure((Method)PMethod18032, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_nextScreen, MC_SMB_nextScreen);
}


static void init_SMB_f3() {
    Symbol SMB_f3 = new_Symbol(L"f3");
    Array PThreadedCode18036 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18035 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18036, 1, self);
    
    MethodClosure MC_SMB_f3 = new_MethodClosure((Method)PMethod18035, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f3, MC_SMB_f3);
}


static void init_SMB_f10() {
    Symbol SMB_f10 = new_Symbol(L"f10");
    Array PThreadedCode18038 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18037 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18038, 1, self);
    
    MethodClosure MC_SMB_f10 = new_MethodClosure((Method)PMethod18037, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f10, MC_SMB_f10);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend18041 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode18040 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18041, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18039 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18040, 2, PSend18041, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod18039, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray18043 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18046 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18045 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18046);
    // down. 
    Send PSend18047 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_down, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18051 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // down. 
    Send PSend18052 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    // column. 
    Send PSend18053 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18054 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend18053);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend18057 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18056 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18057, (Optr)&t_block_return);
    Block PBlock18055 = new_Block_with(empty_Array, empty_Array, PThreadedCode18056, 1, PSend18057);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18058 = new_Send((Optr)PSend18054, SMB_timesRepeat_, 1, (Optr)PBlock18055);
    Array PThreadedCode18050 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18051, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18052, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18053, (Optr)&t_send1, (Optr)PSend18054, (Optr)&t_push_closure, (Optr)PBlock18055, (Optr)&t_send1, (Optr)PSend18058, (Optr)&t_block_return);
    Block PBlock18049 = new_Block_with(empty_Array, empty_Array, PThreadedCode18050, 3, PSend18051, PSend18052, PSend18058);
    // ifTrue:. 
    Send PSend18048 = new_Send((Optr)PSend18047, SMB_ifTrue_, 1, (Optr)PBlock18049);
    Array PThreadedCode18044 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign18045, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18046, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18047, (Optr)&t_send_ifTrue_, (Optr)PSend18048, (Optr)PBlock18049, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18042 = new_Method_with(empty_Array, PArray18043, empty_Array, PThreadedCode18044, 3, PAssign18045, PSend18048, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod18042, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend18061 = new_Send((Optr)self, SMB_backspace, 0);
    Array PThreadedCode18060 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18061, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18059 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18060, 2, PSend18061, self);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod18059, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_bell() {
    Symbol SMB_bell = new_Symbol(L"bell");
    Array PThreadedCode18063 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18062 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18063, 1, self);
    
    MethodClosure MC_SMB_bell = new_MethodClosure((Method)PMethod18062, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_bell, MC_SMB_bell);
}


static void init_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend18066 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteLeft, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend18070 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_backspace, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend18071 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18072 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18069 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18070, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend18071, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18072, (Optr)&t_block_return);
    Block PBlock18068 = new_Block_with(empty_Array, empty_Array, PThreadedCode18069, 3, PSend18070, PSend18071, PSend18072);
    // ifTrue:. 
    Send PSend18067 = new_Send((Optr)PSend18066, SMB_ifTrue_, 1, (Optr)PBlock18068);
    Array PThreadedCode18065 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18066, (Optr)&t_send_ifTrue_, (Optr)PSend18067, (Optr)PBlock18068, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18064 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18065, 2, PSend18067, self);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod18064, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_delete, MC_SMB_delete);
}


static void init_SMB_shiftIn() {
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    Array PThreadedCode18074 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18073 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18074, 1, self);
    
    MethodClosure MC_SMB_shiftIn = new_MethodClosure((Method)PMethod18073, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftIn, MC_SMB_shiftIn);
}


static void init_SMB_openLine() {
    Symbol SMB_openLine = new_Symbol(L"openLine");
    Variable VAR_offset_0_0 = new_Variable_named(L"offset", 0);
    Array PArray18076 = new_Array_with(1, (Optr)VAR_offset_0_0);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend18079 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Assign PAssign18078 = new_Assign((Optr)VAR_offset_0_0, (Optr)PSend18079);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend18082 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode18081 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18082, (Optr)&t_block_return);
    Block PBlock18080 = new_Block_with(empty_Array, empty_Array, PThreadedCode18081, 1, PSend18082);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18083 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock18080);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18084 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend18087 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode18086 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18087, (Optr)&t_block_return);
    Block PBlock18085 = new_Block_with(empty_Array, empty_Array, PThreadedCode18086, 1, PSend18087);
    // timesRepeat:. 
    Send PSend18088 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock18085);
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    // insertLine. 
    Send PSend18089 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_insertLine, 0);
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    // continueLine. 
    Send PSend18090 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_continueLine, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend18091 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_addLine, 0);
    Array PThreadedCode18077 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign18078, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18079, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock18080, (Optr)&t_send1, (Optr)PSend18083, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18084, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock18085, (Optr)&t_send1, (Optr)PSend18088, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18089, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_send0, (Optr)PSend18090, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18091, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18075 = new_Method_with(empty_Array, PArray18076, empty_Array, PThreadedCode18077, 8, PAssign18078, PSend18083, PSend18084, PSend18088, PSend18089, PSend18090, PSend18091, self);
    
    MethodClosure MC_SMB_openLine = new_MethodClosure((Method)PMethod18075, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_openLine, MC_SMB_openLine);
}


static void init_SMB_moveFailure_() {
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Variable VAR_direction_0_0 = new_Variable_named(L"direction", 0);
    Array PArray18093 = new_Array_with(1, (Optr)VAR_direction_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend18097 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    // onLineBefore:. 
    Send PSend18098 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_onLineBefore_, 1, (Optr)PSend18097);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // +. 
    Send PSend18103 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Assign PAssign18102 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend18103);
    Array PThreadedCode18101 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign18102, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend18103, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock18100 = new_Block_with(empty_Array, empty_Array, PThreadedCode18101, 1, PAssign18102);
    // ifTrue:. 
    Send PSend18099 = new_Send((Optr)PSend18098, SMB_ifTrue_, 1, (Optr)PBlock18100);
    Array PThreadedCode18096 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend18097, (Optr)&t_send1, (Optr)PSend18098, (Optr)&t_send_ifTrue_, (Optr)PSend18099, (Optr)PBlock18100, (Optr)&t_block_return);
    Block PBlock18095 = new_Block_with(empty_Array, empty_Array, PThreadedCode18096, 1, PSend18099);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend18104 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock18095);
    Array PThreadedCode18094 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock18095, (Optr)&t_send1, (Optr)PSend18104, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18092 = new_Method_with(PArray18093, empty_Array, empty_Array, PThreadedCode18094, 2, PSend18104, self);
    
    MethodClosure MC_SMB_moveFailure_ = new_MethodClosure((Method)PMethod18092, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveFailure_, MC_SMB_moveFailure_);
}


static void init_SMB_f14() {
    Symbol SMB_f14 = new_Symbol(L"f14");
    Array PThreadedCode18106 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18105 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18106, 1, self);
    
    MethodClosure MC_SMB_f14 = new_MethodClosure((Method)PMethod18105, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f14, MC_SMB_f14);
}


static void init_SMB_f17() {
    Symbol SMB_f17 = new_Symbol(L"f17");
    Array PThreadedCode18108 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18107 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18108, 1, self);
    
    MethodClosure MC_SMB_f17 = new_MethodClosure((Method)PMethod18107, Shell_ReadLine_ReadLine_Class);
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
    Array PArray18110 = new_Array_with(3, (Optr)VAR_in_0_0, (Optr)VAR_out_0_1, (Optr)VAR_c_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18113 = new_Send((Optr)PHistoryText_classReference, SMB_new, 0);
    Assign PAssign18112 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)PSend18113);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray18117 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend18119 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)VAR_in_0_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend18120 = new_Send((Optr)VAR__receiver__1_0, SMB_handler_, 1, (Optr)self);
    Array PThreadedCode18118 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_in_0_0, (Optr)&t_send1, (Optr)PSend18119, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18120, (Optr)&t_method_return);
    Block PBlock18116 = new_Block_with(PArray18117, empty_Array, PThreadedCode18118, 2, PSend18119, PSend18120);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend18121 = new_Send((Optr)PVTermInputDriver_classReference, SMB_new, 0);
    // value:. 
    Send PSend18115 = new_Send((Optr)PBlock18116, SMB_value_, 1, (Optr)PSend18121);
    Assign PAssign18114 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)PSend18115);
    Assign PAssign18122 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)VAR_out_0_1);
    Assign PAssign18123 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)VAR_c_0_2);
    Array PThreadedCode18111 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign18112, (Optr)&t_push_class_reference, (Optr)PHistoryText_classReference, (Optr)&t_send0, (Optr)PSend18113, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18114, (Optr)&t_push_closure, (Optr)PBlock18116, (Optr)&t_push_class_reference, (Optr)PVTermInputDriver_classReference, (Optr)&t_send0, (Optr)PSend18121, (Optr)&t_send1, (Optr)PSend18115, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18122, (Optr)&t_push_variable, (Optr)VAR_out_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18123, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18109 = new_Method_with(PArray18110, empty_Array, empty_Array, PThreadedCode18111, 5, PAssign18112, PAssign18114, PAssign18122, PAssign18123, self);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod18109, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_from_to_for_, MC_SMB_from_to_for_);
}


static void init_SMB_f12() {
    Symbol SMB_f12 = new_Symbol(L"f12");
    Array PThreadedCode18125 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18124 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18125, 1, self);
    
    MethodClosure MC_SMB_f12 = new_MethodClosure((Method)PMethod18124, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f12, MC_SMB_f12);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray18127 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18129 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_add_, 1, (Optr)VAR_character_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend18130 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB__shiftLeft_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // moveFailure:. 
    Send PSend18131 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18132 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18128 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend18129, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend18130, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18131, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18132, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18126 = new_Method_with(PArray18127, empty_Array, empty_Array, PThreadedCode18128, 5, PSend18129, PSend18130, PSend18131, PSend18132, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod18126, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_f18() {
    Symbol SMB_f18 = new_Symbol(L"f18");
    Array PThreadedCode18134 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18133 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18134, 1, self);
    
    MethodClosure MC_SMB_f18 = new_MethodClosure((Method)PMethod18133, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f18, MC_SMB_f18);
}


static void init_SMB_f5() {
    Symbol SMB_f5 = new_Symbol(L"f5");
    Array PThreadedCode18136 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18135 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18136, 1, self);
    
    MethodClosure MC_SMB_f5 = new_MethodClosure((Method)PMethod18135, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f5, MC_SMB_f5);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend18139 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_left, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // left. 
    Send PSend18143 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18142 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18143, (Optr)&t_block_return);
    Block PBlock18141 = new_Block_with(empty_Array, empty_Array, PThreadedCode18142, 1, PSend18143);
    // ifTrue:. 
    Send PSend18140 = new_Send((Optr)PSend18139, SMB_ifTrue_, 1, (Optr)PBlock18141);
    Array PThreadedCode18138 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18139, (Optr)&t_send_ifTrue_, (Optr)PSend18140, (Optr)PBlock18141, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18137 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18138, 2, PSend18140, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod18137, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_carriageReturn() {
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18146 = new_Send((Optr)self, SMB_lf, 0);
    Array PThreadedCode18145 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18146, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18144 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18145, 2, PSend18146, self);
    
    MethodClosure MC_SMB_carriageReturn = new_MethodClosure((Method)PMethod18144, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_carriageReturn, MC_SMB_carriageReturn);
}


static void init_SMB_moveToLine_column_() {
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    Variable VAR_line_0_0 = new_Variable_named(L"line", 0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Array PArray18148 = new_Array_with(2, (Optr)VAR_line_0_0, (Optr)VAR_col_0_1);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18150 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18151 = new_Send((Optr)VAR_col_0_1, SMB__minus_, 1, (Optr)PSend18150);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18152 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18151);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18153 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend18154 = new_Send((Optr)PSend18153, SMB__minus_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend18155 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend18154);
    Symbol SMB_line_ = new_Symbol(L"line:");
    // line:. 
    Send PSend18156 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18157 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_1);
    Array PThreadedCode18149 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18150, (Optr)&t_send1, (Optr)PSend18151, (Optr)&t_send1, (Optr)PSend18152, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18153, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend18154, (Optr)&t_send1, (Optr)PSend18155, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend18156, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend18157, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18147 = new_Method_with(PArray18148, empty_Array, empty_Array, PThreadedCode18149, 5, PSend18152, PSend18155, PSend18156, PSend18157, self);
    
    MethodClosure MC_SMB_moveToLine_column_ = new_MethodClosure((Method)PMethod18147, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveToLine_column_, MC_SMB_moveToLine_column_);
}


static void init_SMB_isReady() {
    Symbol SMB_isReady = new_Symbol(L"isReady");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18160 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    // isReady:. 
    Send PSend18161 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_isReady_, 1, (Optr)PSend18160);
    Array PThreadedCode18159 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18160, (Optr)&t_send1, (Optr)PSend18161, (Optr)&t_method_return);
    Method PMethod18158 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18159, 1, PSend18161);
    
    MethodClosure MC_SMB_isReady = new_MethodClosure((Method)PMethod18158, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_isReady, MC_SMB_isReady);
}


static void init_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
    Array PThreadedCode18163 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18162 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18163, 1, self);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod18162, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_insert, MC_SMB_insert);
}


static void init_SMB_f7() {
    Symbol SMB_f7 = new_Symbol(L"f7");
    Array PThreadedCode18165 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18164 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18165, 1, self);
    
    MethodClosure MC_SMB_f7 = new_MethodClosure((Method)PMethod18164, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f7, MC_SMB_f7);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend18168 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_right, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // right. 
    Send PSend18172 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode18171 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18172, (Optr)&t_block_return);
    Block PBlock18170 = new_Block_with(empty_Array, empty_Array, PThreadedCode18171, 1, PSend18172);
    // ifTrue:. 
    Send PSend18169 = new_Send((Optr)PSend18168, SMB_ifTrue_, 1, (Optr)PBlock18170);
    Array PThreadedCode18167 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18168, (Optr)&t_send_ifTrue_, (Optr)PSend18169, (Optr)PBlock18170, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18166 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18167, 2, PSend18169, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod18166, Shell_ReadLine_ReadLine_Class);
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
    Send PSend18175 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)int_1_Const, (Optr)int_0_Const);
    Array PThreadedCode18174 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend18175, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18173 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18174, 2, PSend18175, self);
    
    MethodClosure MC_SMB_startOfText = new_MethodClosure((Method)PMethod18173, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfText, MC_SMB_startOfText);
}


static void init_SMB_f1() {
    Symbol SMB_f1 = new_Symbol(L"f1");
    Array PThreadedCode18177 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18176 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18177, 1, self);
    
    MethodClosure MC_SMB_f1 = new_MethodClosure((Method)PMethod18176, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f1, MC_SMB_f1);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray18179 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18182 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18181 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18182);
    // endOfLine. 
    Send PSend18183 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_endOfLine, 0);
    // column. 
    Send PSend18184 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18185 = new_Send((Optr)PSend18184, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18186 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18185);
    Array PThreadedCode18180 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign18181, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18182, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18183, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18184, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18185, (Optr)&t_send1, (Optr)PSend18186, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18178 = new_Method_with(empty_Array, PArray18179, empty_Array, PThreadedCode18180, 4, PAssign18181, PSend18183, PSend18186, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod18178, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_f15() {
    Symbol SMB_f15 = new_Symbol(L"f15");
    Array PThreadedCode18188 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18187 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18188, 1, self);
    
    MethodClosure MC_SMB_f15 = new_MethodClosure((Method)PMethod18187, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f15, MC_SMB_f15);
}


static void init_SMB_formfeed() {
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    Array PThreadedCode18190 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18189 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18190, 1, self);
    
    MethodClosure MC_SMB_formfeed = new_MethodClosure((Method)PMethod18189, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_formfeed, MC_SMB_formfeed);
}


static void init_SMB_enquiry() {
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend18193 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode18192 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18193, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18191 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18192, 2, PSend18193, self);
    
    MethodClosure MC_SMB_enquiry = new_MethodClosure((Method)PMethod18191, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_enquiry, MC_SMB_enquiry);
}


static void init_SMB_startOfHeading() {
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray18195 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18198 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18197 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18198);
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    // startOfLine. 
    Send PSend18199 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_startOfLine, 0);
    // column. 
    Send PSend18200 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18201 = new_Send((Optr)PSend18200, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18202 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18201);
    Array PThreadedCode18196 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign18197, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18198, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18199, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18200, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18201, (Optr)&t_send1, (Optr)PSend18202, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18194 = new_Method_with(empty_Array, PArray18195, empty_Array, PThreadedCode18196, 4, PAssign18197, PSend18199, PSend18202, self);
    
    MethodClosure MC_SMB_startOfHeading = new_MethodClosure((Method)PMethod18194, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfHeading, MC_SMB_startOfHeading);
}


static void init_SMB_f20() {
    Symbol SMB_f20 = new_Symbol(L"f20");
    Array PThreadedCode18204 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18203 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18204, 1, self);
    
    MethodClosure MC_SMB_f20 = new_MethodClosure((Method)PMethod18203, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f20, MC_SMB_f20);
}


static void init_SMB_repaint() {
    Symbol SMB_repaint = new_Symbol(L"repaint");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_1 = new_Variable_named(L"line", 0);
    Array PArray18206 = new_Array_with(2, (Optr)VAR_col_0_0, (Optr)VAR_line_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18209 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    // parsesUntil. 
    Send PSend18211 = new_Send((Optr)self, SMB_parsesUntil, 0);
    Variable VAR_newpos_2_0 = new_Variable_named(L"newpos", 2);
    Array PArray18213 = new_Array_with(1, (Optr)VAR_newpos_2_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18216 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18215 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18216);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18218 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18217 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend18218);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18221 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18222 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__equals_, 1, (Optr)PSend18221);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18226 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18225 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18226, (Optr)&t_block_return);
    Block PBlock18224 = new_Block_with(empty_Array, empty_Array, PThreadedCode18225, 1, PSend18226);
    // ifTrue:. 
    Send PSend18223 = new_Send((Optr)PSend18222, SMB_ifTrue_, 1, (Optr)PBlock18224);
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    // repaintAt:. 
    Send PSend18227 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Array PThreadedCode18220 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18221, (Optr)&t_send1, (Optr)PSend18222, (Optr)&t_send_ifTrue_, (Optr)PSend18223, (Optr)PBlock18224, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18227, (Optr)&t_block_return);
    Block PBlock18219 = new_Block_with(empty_Array, empty_Array, PThreadedCode18220, 2, PSend18223, PSend18227);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend18228 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock18219);
    // +. 
    Send PSend18230 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18229 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend18230);
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    // errorColor. 
    Send PSend18231 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_errorColor, 0);
    // repaintAt:. 
    Send PSend18232 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18233 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend18234 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_normal, 0);
    // escape:. 
    Send PSend18235 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18234);
    Array PThreadedCode18214 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign18215, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18216, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18217, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18218, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock18219, (Optr)&t_send1, (Optr)PSend18228, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18229, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18230, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18231, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18232, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend18233, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18234, (Optr)&t_send1, (Optr)PSend18235, (Optr)&t_method_return);
    Block PBlock18212 = new_Block_with(PArray18213, empty_Array, PThreadedCode18214, 8, PAssign18215, PAssign18217, PSend18228, PAssign18229, PSend18231, PSend18232, PSend18233, PSend18235);
    // ifNotNil:. 
    Send PSend18236 = new_Send((Optr)PSend18211, SMB_ifNotNil_, 1, (Optr)PBlock18212);
    // column. 
    Send PSend18240 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18239 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18240);
    // line. 
    Send PSend18242 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18241 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend18242);
    // repaintAt:. 
    Send PSend18243 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    // moveToLine:column:. 
    Send PSend18244 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Array PThreadedCode18238 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign18239, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18240, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18241, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18242, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18243, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend18244, (Optr)&t_block_return);
    Block PBlock18237 = new_Block_with(empty_Array, empty_Array, PThreadedCode18238, 4, PAssign18239, PAssign18241, PSend18243, PSend18244);
    // ifNotNil:. 
    Send PSend18245 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock18237);
    Assign PAssign18246 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode18210 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18211, (Optr)&t_push_closure, (Optr)PBlock18212, (Optr)&t_send1, (Optr)PSend18236, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock18237, (Optr)&t_send1, (Optr)PSend18245, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18246, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18208 = new_Block_with(PArray18209, empty_Array, PThreadedCode18210, 4, PSend18236, PSend18245, PAssign18246, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18247 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18208);
    Array PThreadedCode18207 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18208, (Optr)&t_send1, (Optr)PSend18247, (Optr)&t_method_return);
    Method PMethod18205 = new_Method_with(empty_Array, PArray18206, empty_Array, PThreadedCode18207, 1, PSend18247);
    
    MethodClosure MC_SMB_repaint = new_MethodClosure((Method)PMethod18205, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaint, MC_SMB_repaint);
}


static void init_SMB_f6() {
    Symbol SMB_f6 = new_Symbol(L"f6");
    Array PThreadedCode18249 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18248 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18249, 1, self);
    
    MethodClosure MC_SMB_f6 = new_MethodClosure((Method)PMethod18248, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f6, MC_SMB_f6);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    Array PThreadedCode18251 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18250 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18251, 1, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod18250, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_shiftOut() {
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    Array PThreadedCode18253 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18252 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18253, 1, self);
    
    MethodClosure MC_SMB_shiftOut = new_MethodClosure((Method)PMethod18252, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftOut, MC_SMB_shiftOut);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Assign PAssign18256 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)false_Const);
    // clear. 
    Send PSend18257 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_clear, 0);
    Assign PAssign18258 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode18255 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign18256, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18257, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18258, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18254 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18255, 4, PAssign18256, PSend18257, PAssign18258, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18254, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18261 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode18263 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)&t_block_return);
    Block PBlock18262 = new_Block_with(empty_Array, empty_Array, PThreadedCode18263, 1, slot_Shell_ReadLine_ReadLine_ready);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend18266 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_vterm, SMB_read, 0);
    Array PThreadedCode18265 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)&t_send0, (Optr)PSend18266, (Optr)&t_block_return);
    Block PBlock18264 = new_Block_with(empty_Array, empty_Array, PThreadedCode18265, 1, PSend18266);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend18267 = new_Send((Optr)PBlock18262, SMB_whileFalse_, 1, (Optr)PBlock18264);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18268 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Array PThreadedCode18260 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18261, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18262, (Optr)&t_push_closure, (Optr)PBlock18264, (Optr)&t_send1, (Optr)PSend18267, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18268, (Optr)&t_method_return);
    Method PMethod18259 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18260, 3, PSend18261, PSend18267, PSend18268);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PMethod18259, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18272 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isReady = new_Symbol(L"isReady");
    // isReady. 
    Send PSend18274 = new_Send((Optr)self, SMB_isReady, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ready = new_Symbol(L"ready");
    // ready. 
    Send PSend18278 = new_Send((Optr)self, SMB_ready, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18279 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18278);
    Array PThreadedCode18277 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18278, (Optr)&t_send1, (Optr)PSend18279, (Optr)&t_block_return);
    Block PBlock18276 = new_Block_with(empty_Array, empty_Array, PThreadedCode18277, 1, PSend18279);
    // ifTrue:. 
    Send PSend18275 = new_Send((Optr)PSend18274, SMB_ifTrue_, 1, (Optr)PBlock18276);
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18280 = new_Send((Optr)self, SMB_openLine, 0);
    Array PThreadedCode18273 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18274, (Optr)&t_send_ifTrue_, (Optr)PSend18275, (Optr)PBlock18276, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18280, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18271 = new_Block_with(PArray18272, empty_Array, PThreadedCode18273, 3, PSend18275, PSend18280, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18281 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18271);
    Array PThreadedCode18270 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18271, (Optr)&t_send1, (Optr)PSend18281, (Optr)&t_method_return);
    Method PMethod18269 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18270, 1, PSend18281);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod18269, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_repaintAt_() {
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray18283 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_2 = new_Variable_named(L"line", 0);
    Array PArray18284 = new_Array_with(2, (Optr)VAR_col_0_1, (Optr)VAR_line_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18287 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18290 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18289 = new_Assign((Optr)VAR_col_0_1, (Optr)PSend18290);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18292 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18291 = new_Assign((Optr)VAR_line_0_2, (Optr)PSend18292);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend18293 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_position_, 1, (Optr)VAR_position_0_0);
    // column. 
    Send PSend18294 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18295 = new_Send((Optr)PSend18294, SMB__minus_, 1, (Optr)VAR_col_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18296 = new_Send((Optr)PSend18295, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18297 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18296);
    // line. 
    Send PSend18298 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend18299 = new_Send((Optr)VAR_line_0_2, SMB__minus_, 1, (Optr)PSend18298);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend18300 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend18299);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend18301 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentLine, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18302 = new_Send((Optr)PSend18301, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18303 = new_Send((Optr)PSend18302, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend18307 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18308 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18306 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18308, (Optr)&t_block_return);
    Block PBlock18305 = new_Block_with(empty_Array, empty_Array, PThreadedCode18306, 2, PSend18307, PSend18308);
    // ifTrue:. 
    Send PSend18304 = new_Send((Optr)PSend18303, SMB_ifTrue_, 1, (Optr)PBlock18305);
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    // currentCharacter. 
    Send PSend18309 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentCharacter, 0);
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    // overwrite:. 
    Send PSend18310 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_overwrite_, 1, (Optr)PSend18309);
    Array PThreadedCode18288 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push1, (Optr)PAssign18289, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18290, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18291, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18292, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_send1, (Optr)PSend18293, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18294, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend18295, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18296, (Optr)&t_send1, (Optr)PSend18297, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_2, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18298, (Optr)&t_send1, (Optr)PSend18299, (Optr)&t_send1, (Optr)PSend18300, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18301, (Optr)&t_send0, (Optr)PSend18302, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18303, (Optr)&t_send_ifTrue_, (Optr)PSend18304, (Optr)PBlock18305, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18309, (Optr)&t_send1, (Optr)PSend18310, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18286 = new_Block_with(PArray18287, empty_Array, PThreadedCode18288, 8, PAssign18289, PAssign18291, PSend18293, PSend18297, PSend18300, PSend18304, PSend18310, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18311 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18286);
    Array PThreadedCode18285 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18286, (Optr)&t_send1, (Optr)PSend18311, (Optr)&t_method_return);
    Method PMethod18282 = new_Method_with(PArray18283, PArray18284, empty_Array, PThreadedCode18285, 1, PSend18311);
    
    MethodClosure MC_SMB_repaintAt_ = new_MethodClosure((Method)PMethod18282, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaintAt_, MC_SMB_repaintAt_);
}


static void init_SMB_f16() {
    Symbol SMB_f16 = new_Symbol(L"f16");
    Array PThreadedCode18313 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18312 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18313, 1, self);
    
    MethodClosure MC_SMB_f16 = new_MethodClosure((Method)PMethod18312, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f16, MC_SMB_f16);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray18315 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18318 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18317 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18318);
    // up. 
    Send PSend18319 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_up, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18323 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // up. 
    Send PSend18324 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    // column. 
    Send PSend18325 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18326 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend18325);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend18329 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18328 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18329, (Optr)&t_block_return);
    Block PBlock18327 = new_Block_with(empty_Array, empty_Array, PThreadedCode18328, 1, PSend18329);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18330 = new_Send((Optr)PSend18326, SMB_timesRepeat_, 1, (Optr)PBlock18327);
    Array PThreadedCode18322 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18323, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18324, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18325, (Optr)&t_send1, (Optr)PSend18326, (Optr)&t_push_closure, (Optr)PBlock18327, (Optr)&t_send1, (Optr)PSend18330, (Optr)&t_block_return);
    Block PBlock18321 = new_Block_with(empty_Array, empty_Array, PThreadedCode18322, 3, PSend18323, PSend18324, PSend18330);
    // ifTrue:. 
    Send PSend18320 = new_Send((Optr)PSend18319, SMB_ifTrue_, 1, (Optr)PBlock18321);
    Array PThreadedCode18316 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign18317, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18318, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18319, (Optr)&t_send_ifTrue_, (Optr)PSend18320, (Optr)PBlock18321, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18314 = new_Method_with(empty_Array, PArray18315, empty_Array, PThreadedCode18316, 3, PAssign18317, PSend18320, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18314, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_parsesUntil() {
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18333 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    // parsesUntil:. 
    Send PSend18334 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_parsesUntil_, 1, (Optr)PSend18333);
    Array PThreadedCode18332 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18333, (Optr)&t_send1, (Optr)PSend18334, (Optr)&t_method_return);
    Method PMethod18331 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18332, 1, PSend18334);
    
    MethodClosure MC_SMB_parsesUntil = new_MethodClosure((Method)PMethod18331, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_parsesUntil, MC_SMB_parsesUntil);
}


static void init_SMB_acknowledge() {
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    Array PThreadedCode18336 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18335 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18336, 1, self);
    
    MethodClosure MC_SMB_acknowledge = new_MethodClosure((Method)PMethod18335, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_acknowledge, MC_SMB_acknowledge);
}


static void init_SMB_previousScreen() {
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend18339 = new_Send((Optr)self, SMB_startOfText, 0);
    Array PThreadedCode18338 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18339, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18337 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18338, 2, PSend18339, self);
    
    MethodClosure MC_SMB_previousScreen = new_MethodClosure((Method)PMethod18337, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_previousScreen, MC_SMB_previousScreen);
}


static void init_SMB_ready() {
    Symbol SMB_ready = new_Symbol(L"ready");
    Assign PAssign18342 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)true_Const);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend18343 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend18346 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode18345 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18346, (Optr)&t_block_return);
    Block PBlock18344 = new_Block_with(empty_Array, empty_Array, PThreadedCode18345, 1, PSend18346);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18347 = new_Send((Optr)PSend18343, SMB_timesRepeat_, 1, (Optr)PBlock18344);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18348 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Array PThreadedCode18341 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign18342, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18343, (Optr)&t_push_closure, (Optr)PBlock18344, (Optr)&t_send1, (Optr)PSend18347, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18348, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18340 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18341, 4, PAssign18342, PSend18347, PSend18348, self);
    
    MethodClosure MC_SMB_ready = new_MethodClosure((Method)PMethod18340, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_ready, MC_SMB_ready);
}


static void init_SMB_f11() {
    Symbol SMB_f11 = new_Symbol(L"f11");
    Array PThreadedCode18350 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18349 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18350, 1, self);
    
    MethodClosure MC_SMB_f11 = new_MethodClosure((Method)PMethod18349, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f11, MC_SMB_f11);
}


static void init_SMB_endOfText() {
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    Symbol SMB_lines = new_Symbol(L"lines");
    // lines. 
    Send PSend18353 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lines, 0);
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    // lastColumns. 
    Send PSend18354 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lastColumns, 0);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18355 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)PSend18353, (Optr)PSend18354);
    Array PThreadedCode18352 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18353, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18354, (Optr)&t_send2, (Optr)PSend18355, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18351 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18352, 2, PSend18355, self);
    
    MethodClosure MC_SMB_endOfText = new_MethodClosure((Method)PMethod18351, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfText, MC_SMB_endOfText);
}


static void init_SMB_f19() {
    Symbol SMB_f19 = new_Symbol(L"f19");
    Array PThreadedCode18357 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18356 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18357, 1, self);
    
    MethodClosure MC_SMB_f19 = new_MethodClosure((Method)PMethod18356, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f19, MC_SMB_f19);
}


static void init_SMB_f8() {
    Symbol SMB_f8 = new_Symbol(L"f8");
    Array PThreadedCode18359 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18358 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18359, 1, self);
    
    MethodClosure MC_SMB_f8 = new_MethodClosure((Method)PMethod18358, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f8, MC_SMB_f8);
}


static void init_SMB_verticalTab() {
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend18362 = new_Send((Optr)self, SMB_deleteToEndOfLine, 0);
    Array PThreadedCode18361 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18362, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18360 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18361, 2, PSend18362, self);
    
    MethodClosure MC_SMB_verticalTab = new_MethodClosure((Method)PMethod18360, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_verticalTab, MC_SMB_verticalTab);
}


static void init_SMB_select() {
    Symbol SMB_select = new_Symbol(L"select");
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend18365 = new_Send((Optr)self, SMB_end, 0);
    Array PThreadedCode18364 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18365, (Optr)&t_method_return);
    Method PMethod18363 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18364, 1, PSend18365);
    
    MethodClosure MC_SMB_select = new_MethodClosure((Method)PMethod18363, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_select, MC_SMB_select);
}


static void init_SMB_find() {
    Symbol SMB_find = new_Symbol(L"find");
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend18368 = new_Send((Optr)self, SMB_home, 0);
    Array PThreadedCode18367 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18368, (Optr)&t_method_return);
    Method PMethod18366 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18367, 1, PSend18368);
    
    MethodClosure MC_SMB_find = new_MethodClosure((Method)PMethod18366, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_find, MC_SMB_find);
}


static void init_SMB_alt_() {
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray18370 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18373 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18375 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18376 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)PSend18375);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18380 = new_Send((Optr)self, SMB_openLine, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18381 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18380);
    Array PThreadedCode18379 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18380, (Optr)&t_send1, (Optr)PSend18381, (Optr)&t_block_return);
    Block PBlock18378 = new_Block_with(empty_Array, empty_Array, PThreadedCode18379, 1, PSend18381);
    // ifTrue:. 
    Send PSend18377 = new_Send((Optr)PSend18376, SMB_ifTrue_, 1, (Optr)PBlock18378);
    Array PThreadedCode18374 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18375, (Optr)&t_send1, (Optr)PSend18376, (Optr)&t_send_ifTrue_, (Optr)PSend18377, (Optr)PBlock18378, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18372 = new_Block_with(PArray18373, empty_Array, PThreadedCode18374, 2, PSend18377, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18382 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18372);
    Array PThreadedCode18371 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18372, (Optr)&t_send1, (Optr)PSend18382, (Optr)&t_method_return);
    Method PMethod18369 = new_Method_with(PArray18370, empty_Array, empty_Array, PThreadedCode18371, 1, PSend18382);
    
    MethodClosure MC_SMB_alt_ = new_MethodClosure((Method)PMethod18369, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_alt_, MC_SMB_alt_);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    // deleteRight. 
    Send PSend18385 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteRight, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend18389 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_deleteCharacter, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend18390 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18391 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18388 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18389, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend18390, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18391, (Optr)&t_block_return);
    Block PBlock18387 = new_Block_with(empty_Array, empty_Array, PThreadedCode18388, 3, PSend18389, PSend18390, PSend18391);
    // ifTrue:. 
    Send PSend18386 = new_Send((Optr)PSend18385, SMB_ifTrue_, 1, (Optr)PBlock18387);
    Array PThreadedCode18384 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18385, (Optr)&t_send_ifTrue_, (Optr)PSend18386, (Optr)PBlock18387, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18383 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18384, 2, PSend18386, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod18383, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend18394 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteToEndOfLine, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    // clearToEnd. 
    Send PSend18398 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_clearToEnd, 0);
    Array PThreadedCode18397 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18398, (Optr)&t_block_return);
    Block PBlock18396 = new_Block_with(empty_Array, empty_Array, PThreadedCode18397, 1, PSend18398);
    // ifTrue:. 
    Send PSend18395 = new_Send((Optr)PSend18394, SMB_ifTrue_, 1, (Optr)PBlock18396);
    Array PThreadedCode18393 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18394, (Optr)&t_send_ifTrue_, (Optr)PSend18395, (Optr)PBlock18396, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18392 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18393, 2, PSend18395, self);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod18392, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_class_SMB_from_to_for_() {
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Variable VAR_output_0_1 = new_Variable_named(L"output", 0);
    Variable VAR_client_0_2 = new_Variable_named(L"client", 0);
    Array PArray18400 = new_Array_with(3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18402 = new_Super(SMB_basicNew, 0);
    // from:to:for:. 
    Send PSend18403 = new_Send((Optr)PSuper18402, SMB_from_to_for_, 3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Array PThreadedCode18401 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18402, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_client_0_2, (Optr)&t_send3, (Optr)PSend18403, (Optr)&t_method_return);
    Method PMethod18399 = new_Method_with(PArray18400, empty_Array, empty_Array, PThreadedCode18401, 1, PSend18403);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod18399, HEADER(Shell_ReadLine_ReadLine_Class));
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