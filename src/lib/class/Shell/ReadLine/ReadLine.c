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
    Array PThreadedCode17853 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17852 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17853, 1, self);
    
    MethodClosure MC_SMB_f9 = new_MethodClosure((Method)PMethod17852, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f9, MC_SMB_f9);
}


static void init_SMB_right_() {
    Symbol SMB_right_ = new_Symbol(L"right:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17855 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17857 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17861 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17864 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17863 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17864, (Optr)&t_block_return);
    Block PBlock17862 = new_Block_with(empty_Array, empty_Array, PThreadedCode17863, 1, PSend17864);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17865 = new_Send((Optr)PSend17861, SMB_timesRepeat_, 1, (Optr)PBlock17862);
    Array PThreadedCode17860 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17861, (Optr)&t_push_closure, (Optr)PBlock17862, (Optr)&t_send1, (Optr)PSend17865, (Optr)&t_block_return);
    Block PBlock17859 = new_Block_with(empty_Array, empty_Array, PThreadedCode17860, 1, PSend17865);
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend17870 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode17869 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17870, (Optr)&t_block_return);
    Block PBlock17868 = new_Block_with(empty_Array, empty_Array, PThreadedCode17869, 1, PSend17870);
    // timesRepeat:. 
    Send PSend17871 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17868);
    Array PThreadedCode17867 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17868, (Optr)&t_send1, (Optr)PSend17871, (Optr)&t_block_return);
    Block PBlock17866 = new_Block_with(empty_Array, empty_Array, PThreadedCode17867, 1, PSend17871);
    // ifTrue:ifFalse:. 
    Send PSend17858 = new_Send((Optr)PSend17857, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17859, (Optr)PBlock17866);
    Array PThreadedCode17856 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17857, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17858, (Optr)PBlock17859, (Optr)PBlock17866, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17854 = new_Method_with(PArray17855, empty_Array, empty_Array, PThreadedCode17856, 2, PSend17858, self);
    
    MethodClosure MC_SMB_right_ = new_MethodClosure((Method)PMethod17854, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_right_, MC_SMB_right_);
}


static void init_SMB_f4() {
    Symbol SMB_f4 = new_Symbol(L"f4");
    Array PThreadedCode17873 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17872 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17873, 1, self);
    
    MethodClosure MC_SMB_f4 = new_MethodClosure((Method)PMethod17872, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f4, MC_SMB_f4);
}


static void init_SMB_endOfTransmission() {
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    Array PThreadedCode17875 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17874 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17875, 1, self);
    
    MethodClosure MC_SMB_endOfTransmission = new_MethodClosure((Method)PMethod17874, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfTransmission, MC_SMB_endOfTransmission);
}


static void init_SMB_up_() {
    Symbol SMB_up_ = new_Symbol(L"up:");
    Variable VAR_distance_0_0 = new_Variable_named(L"distance", 0);
    Array PArray17877 = new_Array_with(1, (Optr)VAR_distance_0_0);
    Symbol SMB__lt_ = new_Symbol(L"<");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // <. 
    Send PSend17879 = new_Send((Optr)VAR_distance_0_0, SMB__lt_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17883 = new_Send((Optr)int_0_Const, SMB__minus_, 1, (Optr)VAR_distance_0_0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17886 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17885 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17886, (Optr)&t_block_return);
    Block PBlock17884 = new_Block_with(empty_Array, empty_Array, PThreadedCode17885, 1, PSend17886);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17887 = new_Send((Optr)PSend17883, SMB_timesRepeat_, 1, (Optr)PBlock17884);
    Array PThreadedCode17882 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_0, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_send1, (Optr)PSend17883, (Optr)&t_push_closure, (Optr)PBlock17884, (Optr)&t_send1, (Optr)PSend17887, (Optr)&t_block_return);
    Block PBlock17881 = new_Block_with(empty_Array, empty_Array, PThreadedCode17882, 1, PSend17887);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17892 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17891 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17892, (Optr)&t_block_return);
    Block PBlock17890 = new_Block_with(empty_Array, empty_Array, PThreadedCode17891, 1, PSend17892);
    // timesRepeat:. 
    Send PSend17893 = new_Send((Optr)VAR_distance_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17890);
    Array PThreadedCode17889 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_closure, (Optr)PBlock17890, (Optr)&t_send1, (Optr)PSend17893, (Optr)&t_block_return);
    Block PBlock17888 = new_Block_with(empty_Array, empty_Array, PThreadedCode17889, 1, PSend17893);
    // ifTrue:ifFalse:. 
    Send PSend17880 = new_Send((Optr)PSend17879, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock17881, (Optr)PBlock17888);
    Array PThreadedCode17878 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR_distance_0_0, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17879, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend17880, (Optr)PBlock17881, (Optr)PBlock17888, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17876 = new_Method_with(PArray17877, empty_Array, empty_Array, PThreadedCode17878, 2, PSend17880, self);
    
    MethodClosure MC_SMB_up_ = new_MethodClosure((Method)PMethod17876, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up_, MC_SMB_up_);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Array PThreadedCode17895 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17894 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17895, 1, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod17894, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend17898 = new_Send((Optr)self, SMB_startOfHeading, 0);
    Array PThreadedCode17897 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17898, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17896 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17897, 2, PSend17898, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod17896, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_f13() {
    Symbol SMB_f13 = new_Symbol(L"f13");
    Array PThreadedCode17900 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17899 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17900, 1, self);
    
    MethodClosure MC_SMB_f13 = new_MethodClosure((Method)PMethod17899, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f13, MC_SMB_f13);
}


static void init_SMB_f2() {
    Symbol SMB_f2 = new_Symbol(L"f2");
    Array PThreadedCode17902 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17901 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17902, 1, self);
    
    MethodClosure MC_SMB_f2 = new_MethodClosure((Method)PMethod17901, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f2, MC_SMB_f2);
}


static void init_SMB_nextScreen() {
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend17905 = new_Send((Optr)self, SMB_endOfText, 0);
    Array PThreadedCode17904 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17905, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17903 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17904, 2, PSend17905, self);
    
    MethodClosure MC_SMB_nextScreen = new_MethodClosure((Method)PMethod17903, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_nextScreen, MC_SMB_nextScreen);
}


static void init_SMB_f3() {
    Symbol SMB_f3 = new_Symbol(L"f3");
    Array PThreadedCode17907 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17906 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17907, 1, self);
    
    MethodClosure MC_SMB_f3 = new_MethodClosure((Method)PMethod17906, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f3, MC_SMB_f3);
}


static void init_SMB_deleteToEndOfLine() {
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend17910 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteToEndOfLine, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    // clearToEnd. 
    Send PSend17914 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_clearToEnd, 0);
    Array PThreadedCode17913 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17914, (Optr)&t_block_return);
    Block PBlock17912 = new_Block_with(empty_Array, empty_Array, PThreadedCode17913, 1, PSend17914);
    // ifTrue:. 
    Send PSend17911 = new_Send((Optr)PSend17910, SMB_ifTrue_, 1, (Optr)PBlock17912);
    Array PThreadedCode17909 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17910, (Optr)&t_send_ifTrue_, (Optr)PSend17911, (Optr)PBlock17912, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17908 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17909, 2, PSend17911, self);
    
    MethodClosure MC_SMB_deleteToEndOfLine = new_MethodClosure((Method)PMethod17908, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_deleteToEndOfLine, MC_SMB_deleteToEndOfLine);
}


static void init_SMB_f10() {
    Symbol SMB_f10 = new_Symbol(L"f10");
    Array PThreadedCode17916 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17915 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17916, 1, self);
    
    MethodClosure MC_SMB_f10 = new_MethodClosure((Method)PMethod17915, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f10, MC_SMB_f10);
}


static void init_SMB_end() {
    Symbol SMB_end = new_Symbol(L"end");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend17919 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode17918 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17919, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17917 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17918, 2, PSend17919, self);
    
    MethodClosure MC_SMB_end = new_MethodClosure((Method)PMethod17917, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_end, MC_SMB_end);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray17921 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend17924 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign17923 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend17924);
    // down. 
    Send PSend17925 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_down, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend17929 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // down. 
    Send PSend17930 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    // column. 
    Send PSend17931 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend17932 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend17931);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend17935 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode17934 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17935, (Optr)&t_block_return);
    Block PBlock17933 = new_Block_with(empty_Array, empty_Array, PThreadedCode17934, 1, PSend17935);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17936 = new_Send((Optr)PSend17932, SMB_timesRepeat_, 1, (Optr)PBlock17933);
    Array PThreadedCode17928 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend17929, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17930, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17931, (Optr)&t_send1, (Optr)PSend17932, (Optr)&t_push_closure, (Optr)PBlock17933, (Optr)&t_send1, (Optr)PSend17936, (Optr)&t_block_return);
    Block PBlock17927 = new_Block_with(empty_Array, empty_Array, PThreadedCode17928, 3, PSend17929, PSend17930, PSend17936);
    // ifTrue:. 
    Send PSend17926 = new_Send((Optr)PSend17925, SMB_ifTrue_, 1, (Optr)PBlock17927);
    Array PThreadedCode17922 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign17923, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17924, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17925, (Optr)&t_send_ifTrue_, (Optr)PSend17926, (Optr)PBlock17927, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17920 = new_Method_with(empty_Array, PArray17921, empty_Array, PThreadedCode17922, 3, PAssign17923, PSend17926, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17920, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_remove() {
    Symbol SMB_remove = new_Symbol(L"remove");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17939 = new_Send((Optr)self, SMB_backspace, 0);
    Array PThreadedCode17938 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17939, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17937 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17938, 2, PSend17939, self);
    
    MethodClosure MC_SMB_remove = new_MethodClosure((Method)PMethod17937, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_remove, MC_SMB_remove);
}


static void init_SMB_bell() {
    Symbol SMB_bell = new_Symbol(L"bell");
    Array PThreadedCode17941 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17940 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17941, 1, self);
    
    MethodClosure MC_SMB_bell = new_MethodClosure((Method)PMethod17940, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_bell, MC_SMB_bell);
}


static void init_SMB_delete() {
    Symbol SMB_delete = new_Symbol(L"delete");
    Symbol SMB_deleteLeft = new_Symbol(L"deleteLeft");
    // deleteLeft. 
    Send PSend17944 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteLeft, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend17948 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_backspace, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend17949 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend17950 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode17947 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17948, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend17949, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17950, (Optr)&t_block_return);
    Block PBlock17946 = new_Block_with(empty_Array, empty_Array, PThreadedCode17947, 3, PSend17948, PSend17949, PSend17950);
    // ifTrue:. 
    Send PSend17945 = new_Send((Optr)PSend17944, SMB_ifTrue_, 1, (Optr)PBlock17946);
    Array PThreadedCode17943 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17944, (Optr)&t_send_ifTrue_, (Optr)PSend17945, (Optr)PBlock17946, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17942 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17943, 2, PSend17945, self);
    
    MethodClosure MC_SMB_delete = new_MethodClosure((Method)PMethod17942, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_delete, MC_SMB_delete);
}


static void init_SMB_shiftIn() {
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    Array PThreadedCode17952 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17952, 1, self);
    
    MethodClosure MC_SMB_shiftIn = new_MethodClosure((Method)PMethod17951, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftIn, MC_SMB_shiftIn);
}


static void init_SMB_openLine() {
    Symbol SMB_openLine = new_Symbol(L"openLine");
    Variable VAR_offset_0_0 = new_Variable_named(L"offset", 0);
    Array PArray17954 = new_Array_with(1, (Optr)VAR_offset_0_0);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend17957 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Assign PAssign17956 = new_Assign((Optr)VAR_offset_0_0, (Optr)PSend17957);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend17960 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode17959 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17960, (Optr)&t_block_return);
    Block PBlock17958 = new_Block_with(empty_Array, empty_Array, PThreadedCode17959, 1, PSend17960);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend17961 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17958);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend17962 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend17965 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    Array PThreadedCode17964 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17965, (Optr)&t_block_return);
    Block PBlock17963 = new_Block_with(empty_Array, empty_Array, PThreadedCode17964, 1, PSend17965);
    // timesRepeat:. 
    Send PSend17966 = new_Send((Optr)VAR_offset_0_0, SMB_timesRepeat_, 1, (Optr)PBlock17963);
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    // insertLine. 
    Send PSend17967 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_insertLine, 0);
    Symbol SMB_continueLine = new_Symbol(L"continueLine");
    // continueLine. 
    Send PSend17968 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_continueLine, 0);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17969 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_addLine, 0);
    Array PThreadedCode17955 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign17956, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17957, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17958, (Optr)&t_send1, (Optr)PSend17961, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17962, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_offset_0_0, (Optr)&t_push_closure, (Optr)PBlock17963, (Optr)&t_send1, (Optr)PSend17966, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend17967, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_send0, (Optr)PSend17968, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend17969, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17953 = new_Method_with(empty_Array, PArray17954, empty_Array, PThreadedCode17955, 8, PAssign17956, PSend17961, PSend17962, PSend17966, PSend17967, PSend17968, PSend17969, self);
    
    MethodClosure MC_SMB_openLine = new_MethodClosure((Method)PMethod17953, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_openLine, MC_SMB_openLine);
}


static void init_SMB_moveFailure_() {
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Variable VAR_direction_0_0 = new_Variable_named(L"direction", 0);
    Array PArray17971 = new_Array_with(1, (Optr)VAR_direction_0_0);
    Symbol SMB__plus_ = new_Symbol(L"+");
    // +. 
    Send PSend17975 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Symbol SMB_onLineBefore_ = new_Symbol(L"onLineBefore:");
    // onLineBefore:. 
    Send PSend17976 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_onLineBefore_, 1, (Optr)PSend17975);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // +. 
    Send PSend17981 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__plus_, 1, (Optr)VAR_direction_0_0);
    Assign PAssign17980 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend17981);
    Array PThreadedCode17979 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push1, (Optr)PAssign17980, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17981, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock17978 = new_Block_with(empty_Array, empty_Array, PThreadedCode17979, 1, PAssign17980);
    // ifTrue:. 
    Send PSend17977 = new_Send((Optr)PSend17976, SMB_ifTrue_, 1, (Optr)PBlock17978);
    Array PThreadedCode17974 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_direction_0_0, (Optr)&t_send1, (Optr)PSend17975, (Optr)&t_send1, (Optr)PSend17976, (Optr)&t_send_ifTrue_, (Optr)PSend17977, (Optr)PBlock17978, (Optr)&t_block_return);
    Block PBlock17973 = new_Block_with(empty_Array, empty_Array, PThreadedCode17974, 1, PSend17977);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend17982 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock17973);
    Array PThreadedCode17972 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock17973, (Optr)&t_send1, (Optr)PSend17982, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17970 = new_Method_with(PArray17971, empty_Array, empty_Array, PThreadedCode17972, 2, PSend17982, self);
    
    MethodClosure MC_SMB_moveFailure_ = new_MethodClosure((Method)PMethod17970, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveFailure_, MC_SMB_moveFailure_);
}


static void init_SMB_f14() {
    Symbol SMB_f14 = new_Symbol(L"f14");
    Array PThreadedCode17984 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17984, 1, self);
    
    MethodClosure MC_SMB_f14 = new_MethodClosure((Method)PMethod17983, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f14, MC_SMB_f14);
}


static void init_SMB_f17() {
    Symbol SMB_f17 = new_Symbol(L"f17");
    Array PThreadedCode17986 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod17985 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17986, 1, self);
    
    MethodClosure MC_SMB_f17 = new_MethodClosure((Method)PMethod17985, Shell_ReadLine_ReadLine_Class);
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
    Array PArray17988 = new_Array_with(3, (Optr)VAR_in_0_0, (Optr)VAR_out_0_1, (Optr)VAR_c_0_2);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17991 = new_Send((Optr)PHistoryText_classReference, SMB_new, 0);
    Assign PAssign17990 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)PSend17991);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray17995 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_input_ = new_Symbol(L"input:");
    // input:. 
    Send PSend17997 = new_Send((Optr)VAR__receiver__1_0, SMB_input_, 1, (Optr)VAR_in_0_0);
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    // handler:. 
    Send PSend17998 = new_Send((Optr)VAR__receiver__1_0, SMB_handler_, 1, (Optr)self);
    Array PThreadedCode17996 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_in_0_0, (Optr)&t_send1, (Optr)PSend17997, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17998, (Optr)&t_method_return);
    Block PBlock17994 = new_Block_with(PArray17995, empty_Array, PThreadedCode17996, 2, PSend17997, PSend17998);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // new. 
    Send PSend17999 = new_Send((Optr)PVTermInputDriver_classReference, SMB_new, 0);
    // value:. 
    Send PSend17993 = new_Send((Optr)PBlock17994, SMB_value_, 1, (Optr)PSend17999);
    Assign PAssign17992 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)PSend17993);
    Assign PAssign18000 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)VAR_out_0_1);
    Assign PAssign18001 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)VAR_c_0_2);
    Array PThreadedCode17989 = instantiate_Array_with(ThreadedCode_Class, 0, 33, (Optr)&t_push1, (Optr)PAssign17990, (Optr)&t_push_class_reference, (Optr)PHistoryText_classReference, (Optr)&t_send0, (Optr)PSend17991, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17992, (Optr)&t_push_closure, (Optr)PBlock17994, (Optr)&t_push_class_reference, (Optr)PVTermInputDriver_classReference, (Optr)&t_send0, (Optr)PSend17999, (Optr)&t_send1, (Optr)PSend17993, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18000, (Optr)&t_push_variable, (Optr)VAR_out_0_1, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18001, (Optr)&t_push_variable, (Optr)VAR_c_0_2, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17987 = new_Method_with(PArray17988, empty_Array, empty_Array, PThreadedCode17989, 5, PAssign17990, PAssign17992, PAssign18000, PAssign18001, self);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod17987, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_from_to_for_, MC_SMB_from_to_for_);
}


static void init_SMB_f12() {
    Symbol SMB_f12 = new_Symbol(L"f12");
    Array PThreadedCode18003 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18002 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18003, 1, self);
    
    MethodClosure MC_SMB_f12 = new_MethodClosure((Method)PMethod18002, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f12, MC_SMB_f12);
}


static void init_SMB_write_() {
    Symbol SMB_write_ = new_Symbol(L"write:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray18005 = new_Array_with(1, (Optr)VAR_character_0_0);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18007 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_add_, 1, (Optr)VAR_character_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend18008 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB__shiftLeft_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // moveFailure:. 
    Send PSend18009 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18010 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18006 = instantiate_Array_with(ThreadedCode_Class, 0, 24, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend18007, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend18008, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18009, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18010, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18004 = new_Method_with(PArray18005, empty_Array, empty_Array, PThreadedCode18006, 5, PSend18007, PSend18008, PSend18009, PSend18010, self);
    
    MethodClosure MC_SMB_write_ = new_MethodClosure((Method)PMethod18004, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_write_, MC_SMB_write_);
}


static void init_SMB_f18() {
    Symbol SMB_f18 = new_Symbol(L"f18");
    Array PThreadedCode18012 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18011 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18012, 1, self);
    
    MethodClosure MC_SMB_f18 = new_MethodClosure((Method)PMethod18011, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f18, MC_SMB_f18);
}


static void init_SMB_f5() {
    Symbol SMB_f5 = new_Symbol(L"f5");
    Array PThreadedCode18014 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18013 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18014, 1, self);
    
    MethodClosure MC_SMB_f5 = new_MethodClosure((Method)PMethod18013, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f5, MC_SMB_f5);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend18017 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_left, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // left. 
    Send PSend18021 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18020 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18021, (Optr)&t_block_return);
    Block PBlock18019 = new_Block_with(empty_Array, empty_Array, PThreadedCode18020, 1, PSend18021);
    // ifTrue:. 
    Send PSend18018 = new_Send((Optr)PSend18017, SMB_ifTrue_, 1, (Optr)PBlock18019);
    Array PThreadedCode18016 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18017, (Optr)&t_send_ifTrue_, (Optr)PSend18018, (Optr)PBlock18019, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18015 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18016, 2, PSend18018, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod18015, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_carriageReturn() {
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18024 = new_Send((Optr)self, SMB_lf, 0);
    Array PThreadedCode18023 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18024, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18022 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18023, 2, PSend18024, self);
    
    MethodClosure MC_SMB_carriageReturn = new_MethodClosure((Method)PMethod18022, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_carriageReturn, MC_SMB_carriageReturn);
}


static void init_SMB_moveToLine_column_() {
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    Variable VAR_line_0_0 = new_Variable_named(L"line", 0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Array PArray18026 = new_Array_with(2, (Optr)VAR_line_0_0, (Optr)VAR_col_0_1);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18028 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18029 = new_Send((Optr)VAR_col_0_1, SMB__minus_, 1, (Optr)PSend18028);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18030 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18029);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18031 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend18032 = new_Send((Optr)PSend18031, SMB__minus_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend18033 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend18032);
    Symbol SMB_line_ = new_Symbol(L"line:");
    // line:. 
    Send PSend18034 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line_, 1, (Optr)VAR_line_0_0);
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18035 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_1);
    Array PThreadedCode18027 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18028, (Optr)&t_send1, (Optr)PSend18029, (Optr)&t_send1, (Optr)PSend18030, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18031, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend18032, (Optr)&t_send1, (Optr)PSend18033, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_line_0_0, (Optr)&t_send1, (Optr)PSend18034, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend18035, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18025 = new_Method_with(PArray18026, empty_Array, empty_Array, PThreadedCode18027, 5, PSend18030, PSend18033, PSend18034, PSend18035, self);
    
    MethodClosure MC_SMB_moveToLine_column_ = new_MethodClosure((Method)PMethod18025, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_moveToLine_column_, MC_SMB_moveToLine_column_);
}


static void init_SMB_isReady() {
    Symbol SMB_isReady = new_Symbol(L"isReady");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18038 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_isReady_ = new_Symbol(L"isReady:");
    // isReady:. 
    Send PSend18039 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_isReady_, 1, (Optr)PSend18038);
    Array PThreadedCode18037 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18038, (Optr)&t_send1, (Optr)PSend18039, (Optr)&t_method_return);
    Method PMethod18036 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18037, 1, PSend18039);
    
    MethodClosure MC_SMB_isReady = new_MethodClosure((Method)PMethod18036, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_isReady, MC_SMB_isReady);
}


static void init_SMB_insert() {
    Symbol SMB_insert = new_Symbol(L"insert");
    Array PThreadedCode18041 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18041, 1, self);
    
    MethodClosure MC_SMB_insert = new_MethodClosure((Method)PMethod18040, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_insert, MC_SMB_insert);
}


static void init_SMB_f7() {
    Symbol SMB_f7 = new_Symbol(L"f7");
    Array PThreadedCode18043 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18042 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18043, 1, self);
    
    MethodClosure MC_SMB_f7 = new_MethodClosure((Method)PMethod18042, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f7, MC_SMB_f7);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend18046 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_right, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    // right. 
    Send PSend18050 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Array PThreadedCode18049 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18050, (Optr)&t_block_return);
    Block PBlock18048 = new_Block_with(empty_Array, empty_Array, PThreadedCode18049, 1, PSend18050);
    // ifTrue:. 
    Send PSend18047 = new_Send((Optr)PSend18046, SMB_ifTrue_, 1, (Optr)PBlock18048);
    Array PThreadedCode18045 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18046, (Optr)&t_send_ifTrue_, (Optr)PSend18047, (Optr)PBlock18048, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18044 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18045, 2, PSend18047, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod18044, Shell_ReadLine_ReadLine_Class);
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
    Send PSend18053 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)int_1_Const, (Optr)int_0_Const);
    Array PThreadedCode18052 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push_1, (Optr)&t_push_0, (Optr)&t_send2, (Optr)PSend18053, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18051 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18052, 2, PSend18053, self);
    
    MethodClosure MC_SMB_startOfText = new_MethodClosure((Method)PMethod18051, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfText, MC_SMB_startOfText);
}


static void init_SMB_f1() {
    Symbol SMB_f1 = new_Symbol(L"f1");
    Array PThreadedCode18055 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18054 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18055, 1, self);
    
    MethodClosure MC_SMB_f1 = new_MethodClosure((Method)PMethod18054, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f1, MC_SMB_f1);
}


static void init_SMB_f15() {
    Symbol SMB_f15 = new_Symbol(L"f15");
    Array PThreadedCode18057 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18056 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18057, 1, self);
    
    MethodClosure MC_SMB_f15 = new_MethodClosure((Method)PMethod18056, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f15, MC_SMB_f15);
}


static void init_SMB_formfeed() {
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    Array PThreadedCode18059 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18058 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18059, 1, self);
    
    MethodClosure MC_SMB_formfeed = new_MethodClosure((Method)PMethod18058, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_formfeed, MC_SMB_formfeed);
}


static void init_SMB_enquiry() {
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    // endOfLine. 
    Send PSend18062 = new_Send((Optr)self, SMB_endOfLine, 0);
    Array PThreadedCode18061 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18062, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18060 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18061, 2, PSend18062, self);
    
    MethodClosure MC_SMB_enquiry = new_MethodClosure((Method)PMethod18060, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_enquiry, MC_SMB_enquiry);
}


static void init_SMB_startOfHeading() {
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray18064 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18067 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18066 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18067);
    Symbol SMB_startOfLine = new_Symbol(L"startOfLine");
    // startOfLine. 
    Send PSend18068 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_startOfLine, 0);
    // column. 
    Send PSend18069 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18070 = new_Send((Optr)PSend18069, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18071 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18070);
    Array PThreadedCode18065 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign18066, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18067, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18068, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18069, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18070, (Optr)&t_send1, (Optr)PSend18071, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18063 = new_Method_with(empty_Array, PArray18064, empty_Array, PThreadedCode18065, 4, PAssign18066, PSend18068, PSend18071, self);
    
    MethodClosure MC_SMB_startOfHeading = new_MethodClosure((Method)PMethod18063, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_startOfHeading, MC_SMB_startOfHeading);
}


static void init_SMB_f20() {
    Symbol SMB_f20 = new_Symbol(L"f20");
    Array PThreadedCode18073 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18072 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18073, 1, self);
    
    MethodClosure MC_SMB_f20 = new_MethodClosure((Method)PMethod18072, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f20, MC_SMB_f20);
}


static void init_SMB_repaint() {
    Symbol SMB_repaint = new_Symbol(L"repaint");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_1 = new_Variable_named(L"line", 0);
    Array PArray18075 = new_Array_with(2, (Optr)VAR_col_0_0, (Optr)VAR_line_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18078 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    // parsesUntil. 
    Send PSend18080 = new_Send((Optr)self, SMB_parsesUntil, 0);
    Variable VAR_newpos_2_0 = new_Variable_named(L"newpos", 2);
    Array PArray18082 = new_Array_with(1, (Optr)VAR_newpos_2_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18085 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18084 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18085);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18087 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18086 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend18087);
    Symbol SMB__plus_ = new_Symbol(L"+");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // +. 
    Send PSend18090 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18091 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB__equals_, 1, (Optr)PSend18090);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18095 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18094 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18095, (Optr)&t_block_return);
    Block PBlock18093 = new_Block_with(empty_Array, empty_Array, PThreadedCode18094, 1, PSend18095);
    // ifTrue:. 
    Send PSend18092 = new_Send((Optr)PSend18091, SMB_ifTrue_, 1, (Optr)PBlock18093);
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    // repaintAt:. 
    Send PSend18096 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Array PThreadedCode18089 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18090, (Optr)&t_send1, (Optr)PSend18091, (Optr)&t_send_ifTrue_, (Optr)PSend18092, (Optr)PBlock18093, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18096, (Optr)&t_block_return);
    Block PBlock18088 = new_Block_with(empty_Array, empty_Array, PThreadedCode18089, 2, PSend18092, PSend18096);
    Symbol SMB_ifNotNil_ = new_Symbol(L"ifNotNil:");
    // ifNotNil:. 
    Send PSend18097 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock18088);
    // +. 
    Send PSend18099 = new_Send((Optr)VAR_newpos_2_0, SMB__plus_, 1, (Optr)int_1_Const);
    Assign PAssign18098 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)PSend18099);
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    // errorColor. 
    Send PSend18100 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_errorColor, 0);
    // repaintAt:. 
    Send PSend18101 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18102 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Symbol SMB_normal = new_Symbol(L"normal");
    // normal. 
    Send PSend18103 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_normal, 0);
    // escape:. 
    Send PSend18104 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18103);
    Array PThreadedCode18083 = instantiate_Array_with(ThreadedCode_Class, 0, 60, (Optr)&t_push1, (Optr)PAssign18084, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18085, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18086, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18087, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock18088, (Optr)&t_send1, (Optr)PSend18097, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18098, (Optr)&t_push_variable, (Optr)VAR_newpos_2_0, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18099, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18100, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18101, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend18102, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18103, (Optr)&t_send1, (Optr)PSend18104, (Optr)&t_method_return);
    Block PBlock18081 = new_Block_with(PArray18082, empty_Array, PThreadedCode18083, 8, PAssign18084, PAssign18086, PSend18097, PAssign18098, PSend18100, PSend18101, PSend18102, PSend18104);
    // ifNotNil:. 
    Send PSend18105 = new_Send((Optr)PSend18080, SMB_ifNotNil_, 1, (Optr)PBlock18081);
    // column. 
    Send PSend18109 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18108 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18109);
    // line. 
    Send PSend18111 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18110 = new_Assign((Optr)VAR_line_0_1, (Optr)PSend18111);
    // repaintAt:. 
    Send PSend18112 = new_Send((Optr)self, SMB_repaintAt_, 1, (Optr)slot_Shell_ReadLine_ReadLine_failure);
    // moveToLine:column:. 
    Send PSend18113 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)VAR_line_0_1, (Optr)VAR_col_0_0);
    Array PThreadedCode18107 = instantiate_Array_with(ThreadedCode_Class, 0, 30, (Optr)&t_push1, (Optr)PAssign18108, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18109, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18110, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18111, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_send1, (Optr)PSend18112, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_1, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send2, (Optr)PSend18113, (Optr)&t_block_return);
    Block PBlock18106 = new_Block_with(empty_Array, empty_Array, PThreadedCode18107, 4, PAssign18108, PAssign18110, PSend18112, PSend18113);
    // ifNotNil:. 
    Send PSend18114 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_failure, SMB_ifNotNil_, 1, (Optr)PBlock18106);
    Assign PAssign18115 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode18079 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18080, (Optr)&t_push_closure, (Optr)PBlock18081, (Optr)&t_send1, (Optr)PSend18105, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)&t_push_closure, (Optr)PBlock18106, (Optr)&t_send1, (Optr)PSend18114, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18115, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18077 = new_Block_with(PArray18078, empty_Array, PThreadedCode18079, 4, PSend18105, PSend18114, PAssign18115, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18116 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18077);
    Array PThreadedCode18076 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18077, (Optr)&t_send1, (Optr)PSend18116, (Optr)&t_method_return);
    Method PMethod18074 = new_Method_with(empty_Array, PArray18075, empty_Array, PThreadedCode18076, 1, PSend18116);
    
    MethodClosure MC_SMB_repaint = new_MethodClosure((Method)PMethod18074, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaint, MC_SMB_repaint);
}


static void init_SMB_f6() {
    Symbol SMB_f6 = new_Symbol(L"f6");
    Array PThreadedCode18118 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18117 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18118, 1, self);
    
    MethodClosure MC_SMB_f6 = new_MethodClosure((Method)PMethod18117, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f6, MC_SMB_f6);
}


static void init_SMB_endOfLine() {
    Symbol SMB_endOfLine = new_Symbol(L"endOfLine");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray18120 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18123 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18122 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18123);
    // endOfLine. 
    Send PSend18124 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_endOfLine, 0);
    // column. 
    Send PSend18125 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18126 = new_Send((Optr)PSend18125, SMB__minus_, 1, (Optr)VAR_col_0_0);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18127 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18126);
    Array PThreadedCode18121 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign18122, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18123, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18124, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18125, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18126, (Optr)&t_send1, (Optr)PSend18127, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18119 = new_Method_with(empty_Array, PArray18120, empty_Array, PThreadedCode18121, 4, PAssign18122, PSend18124, PSend18127, self);
    
    MethodClosure MC_SMB_endOfLine = new_MethodClosure((Method)PMethod18119, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfLine, MC_SMB_endOfLine);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    Array PThreadedCode18129 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18128 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18129, 1, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod18128, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_shiftOut() {
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    Array PThreadedCode18131 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18130 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18131, 1, self);
    
    MethodClosure MC_SMB_shiftOut = new_MethodClosure((Method)PMethod18130, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_shiftOut, MC_SMB_shiftOut);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Assign PAssign18134 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)false_Const);
    // clear. 
    Send PSend18135 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_clear, 0);
    Assign PAssign18136 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_failure, (Optr)nil_Const);
    Array PThreadedCode18133 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)PAssign18134, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18135, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18136, (Optr)&t_push_nil, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18132 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18133, 4, PAssign18134, PSend18135, PAssign18136, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18132, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_readLine() {
    Symbol SMB_readLine = new_Symbol(L"readLine");
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend18139 = new_Send((Optr)self, SMB_clear, 0);
    Array PThreadedCode18141 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)&t_block_return);
    Block PBlock18140 = new_Block_with(empty_Array, empty_Array, PThreadedCode18141, 1, slot_Shell_ReadLine_ReadLine_ready);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend18144 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_vterm, SMB_read, 0);
    Array PThreadedCode18143 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_vterm, (Optr)&t_send0, (Optr)PSend18144, (Optr)&t_block_return);
    Block PBlock18142 = new_Block_with(empty_Array, empty_Array, PThreadedCode18143, 1, PSend18144);
    Symbol SMB_whileFalse_ = new_Symbol(L"whileFalse:");
    // whileFalse:. 
    Send PSend18145 = new_Send((Optr)PBlock18140, SMB_whileFalse_, 1, (Optr)PBlock18142);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18146 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Array PThreadedCode18138 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18139, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock18140, (Optr)&t_push_closure, (Optr)PBlock18142, (Optr)&t_send1, (Optr)PSend18145, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18146, (Optr)&t_method_return);
    Method PMethod18137 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18138, 3, PSend18139, PSend18145, PSend18146);
    
    MethodClosure MC_SMB_readLine = new_MethodClosure((Method)PMethod18137, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_readLine, MC_SMB_readLine);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18150 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_isReady = new_Symbol(L"isReady");
    // isReady. 
    Send PSend18152 = new_Send((Optr)self, SMB_isReady, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_ready = new_Symbol(L"ready");
    // ready. 
    Send PSend18156 = new_Send((Optr)self, SMB_ready, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18157 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18156);
    Array PThreadedCode18155 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18156, (Optr)&t_send1, (Optr)PSend18157, (Optr)&t_block_return);
    Block PBlock18154 = new_Block_with(empty_Array, empty_Array, PThreadedCode18155, 1, PSend18157);
    // ifTrue:. 
    Send PSend18153 = new_Send((Optr)PSend18152, SMB_ifTrue_, 1, (Optr)PBlock18154);
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18158 = new_Send((Optr)self, SMB_openLine, 0);
    Array PThreadedCode18151 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18152, (Optr)&t_send_ifTrue_, (Optr)PSend18153, (Optr)PBlock18154, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18158, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18149 = new_Block_with(PArray18150, empty_Array, PThreadedCode18151, 3, PSend18153, PSend18158, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18159 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18149);
    Array PThreadedCode18148 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18149, (Optr)&t_send1, (Optr)PSend18159, (Optr)&t_method_return);
    Method PMethod18147 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18148, 1, PSend18159);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod18147, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_repaintAt_() {
    Symbol SMB_repaintAt_ = new_Symbol(L"repaintAt:");
    Variable VAR_position_0_0 = new_Variable_named(L"position", 0);
    Array PArray18161 = new_Array_with(1, (Optr)VAR_position_0_0);
    Variable VAR_col_0_1 = new_Variable_named(L"col", 0);
    Variable VAR_line_0_2 = new_Variable_named(L"line", 0);
    Array PArray18162 = new_Array_with(2, (Optr)VAR_col_0_1, (Optr)VAR_line_0_2);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18165 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18168 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18167 = new_Assign((Optr)VAR_col_0_1, (Optr)PSend18168);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18170 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    Assign PAssign18169 = new_Assign((Optr)VAR_line_0_2, (Optr)PSend18170);
    Symbol SMB_position_ = new_Symbol(L"position:");
    // position:. 
    Send PSend18171 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_position_, 1, (Optr)VAR_position_0_0);
    // column. 
    Send PSend18172 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18173 = new_Send((Optr)PSend18172, SMB__minus_, 1, (Optr)VAR_col_0_1);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // -. 
    Send PSend18174 = new_Send((Optr)PSend18173, SMB__minus_, 1, (Optr)int_1_Const);
    Symbol SMB_right_ = new_Symbol(L"right:");
    // right:. 
    Send PSend18175 = new_Send((Optr)self, SMB_right_, 1, (Optr)PSend18174);
    // line. 
    Send PSend18176 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_line, 0);
    // -. 
    Send PSend18177 = new_Send((Optr)VAR_line_0_2, SMB__minus_, 1, (Optr)PSend18176);
    Symbol SMB_up_ = new_Symbol(L"up:");
    // up:. 
    Send PSend18178 = new_Send((Optr)self, SMB_up_, 1, (Optr)PSend18177);
    Symbol SMB_currentLine = new_Symbol(L"currentLine");
    // currentLine. 
    Send PSend18179 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentLine, 0);
    Symbol SMB_size = new_Symbol(L"size");
    // size. 
    Send PSend18180 = new_Send((Optr)PSend18179, SMB_size, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // =. 
    Send PSend18181 = new_Send((Optr)PSend18180, SMB__equals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend18185 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_right, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18186 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18184 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18185, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18186, (Optr)&t_block_return);
    Block PBlock18183 = new_Block_with(empty_Array, empty_Array, PThreadedCode18184, 2, PSend18185, PSend18186);
    // ifTrue:. 
    Send PSend18182 = new_Send((Optr)PSend18181, SMB_ifTrue_, 1, (Optr)PBlock18183);
    Symbol SMB_currentCharacter = new_Symbol(L"currentCharacter");
    // currentCharacter. 
    Send PSend18187 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_currentCharacter, 0);
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    // overwrite:. 
    Send PSend18188 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_overwrite_, 1, (Optr)PSend18187);
    Array PThreadedCode18166 = instantiate_Array_with(ThreadedCode_Class, 0, 73, (Optr)&t_push1, (Optr)PAssign18167, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18168, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18169, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18170, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_position_0_0, (Optr)&t_send1, (Optr)PSend18171, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18172, (Optr)&t_push_variable, (Optr)VAR_col_0_1, (Optr)&t_send1, (Optr)PSend18173, (Optr)&t_push_1, (Optr)&t_send1, (Optr)PSend18174, (Optr)&t_send1, (Optr)PSend18175, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_line_0_2, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18176, (Optr)&t_send1, (Optr)PSend18177, (Optr)&t_send1, (Optr)PSend18178, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18179, (Optr)&t_send0, (Optr)PSend18180, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18181, (Optr)&t_send_ifTrue_, (Optr)PSend18182, (Optr)PBlock18183, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18187, (Optr)&t_send1, (Optr)PSend18188, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18164 = new_Block_with(PArray18165, empty_Array, PThreadedCode18166, 8, PAssign18167, PAssign18169, PSend18171, PSend18175, PSend18178, PSend18182, PSend18188, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18189 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18164);
    Array PThreadedCode18163 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18164, (Optr)&t_send1, (Optr)PSend18189, (Optr)&t_method_return);
    Method PMethod18160 = new_Method_with(PArray18161, PArray18162, empty_Array, PThreadedCode18163, 1, PSend18189);
    
    MethodClosure MC_SMB_repaintAt_ = new_MethodClosure((Method)PMethod18160, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_repaintAt_, MC_SMB_repaintAt_);
}


static void init_SMB_f16() {
    Symbol SMB_f16 = new_Symbol(L"f16");
    Array PThreadedCode18191 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18190 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18191, 1, self);
    
    MethodClosure MC_SMB_f16 = new_MethodClosure((Method)PMethod18190, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f16, MC_SMB_f16);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR_col_0_0 = new_Variable_named(L"col", 0);
    Array PArray18193 = new_Array_with(1, (Optr)VAR_col_0_0);
    Symbol SMB_column = new_Symbol(L"column");
    // column. 
    Send PSend18196 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Assign PAssign18195 = new_Assign((Optr)VAR_col_0_0, (Optr)PSend18196);
    // up. 
    Send PSend18197 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_up, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_column_ = new_Symbol(L"column:");
    // column:. 
    Send PSend18201 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column_, 1, (Optr)VAR_col_0_0);
    // up. 
    Send PSend18202 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_up, 0);
    // column. 
    Send PSend18203 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_column, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend18204 = new_Send((Optr)VAR_col_0_0, SMB__minus_, 1, (Optr)PSend18203);
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend18207 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_left, 0);
    Array PThreadedCode18206 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18207, (Optr)&t_block_return);
    Block PBlock18205 = new_Block_with(empty_Array, empty_Array, PThreadedCode18206, 1, PSend18207);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18208 = new_Send((Optr)PSend18204, SMB_timesRepeat_, 1, (Optr)PBlock18205);
    Array PThreadedCode18200 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_send1, (Optr)PSend18201, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18202, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_col_0_0, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18203, (Optr)&t_send1, (Optr)PSend18204, (Optr)&t_push_closure, (Optr)PBlock18205, (Optr)&t_send1, (Optr)PSend18208, (Optr)&t_block_return);
    Block PBlock18199 = new_Block_with(empty_Array, empty_Array, PThreadedCode18200, 3, PSend18201, PSend18202, PSend18208);
    // ifTrue:. 
    Send PSend18198 = new_Send((Optr)PSend18197, SMB_ifTrue_, 1, (Optr)PBlock18199);
    Array PThreadedCode18194 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign18195, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18196, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18197, (Optr)&t_send_ifTrue_, (Optr)PSend18198, (Optr)PBlock18199, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18192 = new_Method_with(empty_Array, PArray18193, empty_Array, PThreadedCode18194, 3, PAssign18195, PSend18198, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18192, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_parsesUntil() {
    Symbol SMB_parsesUntil = new_Symbol(L"parsesUntil");
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18211 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_contents, 0);
    Symbol SMB_parsesUntil_ = new_Symbol(L"parsesUntil:");
    // parsesUntil:. 
    Send PSend18212 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_client, SMB_parsesUntil_, 1, (Optr)PSend18211);
    Array PThreadedCode18210 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_client, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18211, (Optr)&t_send1, (Optr)PSend18212, (Optr)&t_method_return);
    Method PMethod18209 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18210, 1, PSend18212);
    
    MethodClosure MC_SMB_parsesUntil = new_MethodClosure((Method)PMethod18209, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_parsesUntil, MC_SMB_parsesUntil);
}


static void init_SMB_acknowledge() {
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    Array PThreadedCode18214 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18213 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18214, 1, self);
    
    MethodClosure MC_SMB_acknowledge = new_MethodClosure((Method)PMethod18213, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_acknowledge, MC_SMB_acknowledge);
}


static void init_SMB_previousScreen() {
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend18217 = new_Send((Optr)self, SMB_startOfText, 0);
    Array PThreadedCode18216 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18217, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18215 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18216, 2, PSend18217, self);
    
    MethodClosure MC_SMB_previousScreen = new_MethodClosure((Method)PMethod18215, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_previousScreen, MC_SMB_previousScreen);
}


static void init_SMB_ready() {
    Symbol SMB_ready = new_Symbol(L"ready");
    Assign PAssign18220 = new_Assign((Optr)slot_Shell_ReadLine_ReadLine_ready, (Optr)true_Const);
    Symbol SMB_distanceToBottom = new_Symbol(L"distanceToBottom");
    // distanceToBottom. 
    Send PSend18221 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_distanceToBottom, 0);
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend18224 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_down, 0);
    Array PThreadedCode18223 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18224, (Optr)&t_block_return);
    Block PBlock18222 = new_Block_with(empty_Array, empty_Array, PThreadedCode18223, 1, PSend18224);
    Symbol SMB_timesRepeat_ = new_Symbol(L"timesRepeat:");
    // timesRepeat:. 
    Send PSend18225 = new_Send((Optr)PSend18221, SMB_timesRepeat_, 1, (Optr)PBlock18222);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18226 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_lf, 0);
    Array PThreadedCode18219 = instantiate_Array_with(ThreadedCode_Class, 0, 20, (Optr)&t_push1, (Optr)PAssign18220, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18221, (Optr)&t_push_closure, (Optr)PBlock18222, (Optr)&t_send1, (Optr)PSend18225, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18226, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18218 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18219, 4, PAssign18220, PSend18225, PSend18226, self);
    
    MethodClosure MC_SMB_ready = new_MethodClosure((Method)PMethod18218, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_ready, MC_SMB_ready);
}


static void init_SMB_f11() {
    Symbol SMB_f11 = new_Symbol(L"f11");
    Array PThreadedCode18228 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18227 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18228, 1, self);
    
    MethodClosure MC_SMB_f11 = new_MethodClosure((Method)PMethod18227, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f11, MC_SMB_f11);
}


static void init_SMB_endOfText() {
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    Symbol SMB_lines = new_Symbol(L"lines");
    // lines. 
    Send PSend18231 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lines, 0);
    Symbol SMB_lastColumns = new_Symbol(L"lastColumns");
    // lastColumns. 
    Send PSend18232 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_lastColumns, 0);
    Symbol SMB_moveToLine_column_ = new_Symbol(L"moveToLine:column:");
    // moveToLine:column:. 
    Send PSend18233 = new_Send((Optr)self, SMB_moveToLine_column_, 2, (Optr)PSend18231, (Optr)PSend18232);
    Array PThreadedCode18230 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18231, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18232, (Optr)&t_send2, (Optr)PSend18233, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18229 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18230, 2, PSend18233, self);
    
    MethodClosure MC_SMB_endOfText = new_MethodClosure((Method)PMethod18229, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_endOfText, MC_SMB_endOfText);
}


static void init_SMB_f19() {
    Symbol SMB_f19 = new_Symbol(L"f19");
    Array PThreadedCode18235 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18234 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18235, 1, self);
    
    MethodClosure MC_SMB_f19 = new_MethodClosure((Method)PMethod18234, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f19, MC_SMB_f19);
}


static void init_SMB_f8() {
    Symbol SMB_f8 = new_Symbol(L"f8");
    Array PThreadedCode18237 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod18236 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18237, 1, self);
    
    MethodClosure MC_SMB_f8 = new_MethodClosure((Method)PMethod18236, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_f8, MC_SMB_f8);
}


static void init_SMB_verticalTab() {
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    Symbol SMB_deleteToEndOfLine = new_Symbol(L"deleteToEndOfLine");
    // deleteToEndOfLine. 
    Send PSend18240 = new_Send((Optr)self, SMB_deleteToEndOfLine, 0);
    Array PThreadedCode18239 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18240, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18238 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18239, 2, PSend18240, self);
    
    MethodClosure MC_SMB_verticalTab = new_MethodClosure((Method)PMethod18238, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_verticalTab, MC_SMB_verticalTab);
}


static void init_SMB_select() {
    Symbol SMB_select = new_Symbol(L"select");
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend18243 = new_Send((Optr)self, SMB_end, 0);
    Array PThreadedCode18242 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18243, (Optr)&t_method_return);
    Method PMethod18241 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18242, 1, PSend18243);
    
    MethodClosure MC_SMB_select = new_MethodClosure((Method)PMethod18241, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_select, MC_SMB_select);
}


static void init_SMB_find() {
    Symbol SMB_find = new_Symbol(L"find");
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend18246 = new_Send((Optr)self, SMB_home, 0);
    Array PThreadedCode18245 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18246, (Optr)&t_method_return);
    Method PMethod18244 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18245, 1, PSend18246);
    
    MethodClosure MC_SMB_find = new_MethodClosure((Method)PMethod18244, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_find, MC_SMB_find);
}


static void init_SMB_alt_() {
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray18248 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18251 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend18253 = new_Send((Optr)Character_classReference, SMB_lf, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18254 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)PSend18253);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_openLine = new_Symbol(L"openLine");
    // openLine. 
    Send PSend18258 = new_Send((Optr)self, SMB_openLine, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18259 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend18258);
    Array PThreadedCode18257 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18258, (Optr)&t_send1, (Optr)PSend18259, (Optr)&t_block_return);
    Block PBlock18256 = new_Block_with(empty_Array, empty_Array, PThreadedCode18257, 1, PSend18259);
    // ifTrue:. 
    Send PSend18255 = new_Send((Optr)PSend18254, SMB_ifTrue_, 1, (Optr)PBlock18256);
    Array PThreadedCode18252 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend18253, (Optr)&t_send1, (Optr)PSend18254, (Optr)&t_send_ifTrue_, (Optr)PSend18255, (Optr)PBlock18256, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18250 = new_Block_with(PArray18251, empty_Array, PThreadedCode18252, 2, PSend18255, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18260 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18250);
    Array PThreadedCode18249 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18250, (Optr)&t_send1, (Optr)PSend18260, (Optr)&t_method_return);
    Method PMethod18247 = new_Method_with(PArray18248, empty_Array, empty_Array, PThreadedCode18249, 1, PSend18260);
    
    MethodClosure MC_SMB_alt_ = new_MethodClosure((Method)PMethod18247, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_alt_, MC_SMB_alt_);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    Symbol SMB_deleteRight = new_Symbol(L"deleteRight");
    // deleteRight. 
    Send PSend18263 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_text, SMB_deleteRight, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend18267 = new_Send((Optr)slot_Shell_ReadLine_ReadLine_output, SMB_deleteCharacter, 0);
    SmallInt int_n1 = new_SmallInt(-1);
    Symbol SMB_moveFailure_ = new_Symbol(L"moveFailure:");
    Constant int_n1_Const = new_Constant((Optr)int_n1);
    // moveFailure:. 
    Send PSend18268 = new_Send((Optr)self, SMB_moveFailure_, 1, (Optr)int_n1_Const);
    Symbol SMB_repaint = new_Symbol(L"repaint");
    // repaint. 
    Send PSend18269 = new_Send((Optr)self, SMB_repaint, 0);
    Array PThreadedCode18266 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_output, (Optr)&t_send0, (Optr)PSend18267, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_n1, (Optr)&t_send1, (Optr)PSend18268, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18269, (Optr)&t_block_return);
    Block PBlock18265 = new_Block_with(empty_Array, empty_Array, PThreadedCode18266, 3, PSend18267, PSend18268, PSend18269);
    // ifTrue:. 
    Send PSend18264 = new_Send((Optr)PSend18263, SMB_ifTrue_, 1, (Optr)PBlock18265);
    Array PThreadedCode18262 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_ReadLine_text, (Optr)&t_send0, (Optr)PSend18263, (Optr)&t_send_ifTrue_, (Optr)PSend18264, (Optr)PBlock18265, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18261 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18262, 2, PSend18264, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod18261, Shell_ReadLine_ReadLine_Class);
    store_method(Shell_ReadLine_ReadLine_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_class_SMB_from_to_for_() {
    Symbol SMB_from_to_for_ = new_Symbol(L"from:to:for:");
    Variable VAR_input_0_0 = new_Variable_named(L"input", 0);
    Variable VAR_output_0_1 = new_Variable_named(L"output", 0);
    Variable VAR_client_0_2 = new_Variable_named(L"client", 0);
    Array PArray18271 = new_Array_with(3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Symbol SMB_basicNew = new_Symbol(L"basicNew");
    Super PSuper18273 = new_Super(SMB_basicNew, 0);
    // from:to:for:. 
    Send PSend18274 = new_Send((Optr)PSuper18273, SMB_from_to_for_, 3, (Optr)VAR_input_0_0, (Optr)VAR_output_0_1, (Optr)VAR_client_0_2);
    Array PThreadedCode18272 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18273, (Optr)&t_push_variable, (Optr)VAR_input_0_0, (Optr)&t_push_variable, (Optr)VAR_output_0_1, (Optr)&t_push_variable, (Optr)VAR_client_0_2, (Optr)&t_send3, (Optr)PSend18274, (Optr)&t_method_return);
    Method PMethod18270 = new_Method_with(PArray18271, empty_Array, empty_Array, PThreadedCode18272, 1, PSend18274);
    
    MethodClosure MC_SMB_from_to_for_ = new_MethodClosure((Method)PMethod18270, HEADER(Shell_ReadLine_ReadLine_Class));
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