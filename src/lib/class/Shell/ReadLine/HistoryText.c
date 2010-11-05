#include <lib/class/Shell/ReadLine/HistoryText.h>


Optr layout_Shell_ReadLine_HistoryText_Class_class;
Optr slot_Shell_ReadLine_HistoryText_history;
Optr layout_Shell_ReadLine_HistoryText;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend17947 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17949 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17948 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17949);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17950 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17946 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17947, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17948, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17949, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17950, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17945 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17946, 4, PSend17947, PAssign17948, PSend17950, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17945, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17954 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17956 = new_Send((Optr)self, SMB_line, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17957 = new_Send((Optr)int_1_Const, SMB__lt_, 1, (Optr)PSend17956);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper17961 = new_Super(SMB_up, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17962 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper17961);
    Array PThreadedCode17960 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper17961, (Optr)&t_send1, (Optr)PSend17962, (Optr)&t_block_return);
    Block PBlock17959 = new_Block_with(empty_Array, empty_Array, PThreadedCode17960, 1, PSend17962);
    // ifTrue:. 
    Send PSend17958 = new_Send((Optr)PSend17957, SMB_ifTrue_, 1, (Optr)PBlock17959);
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    // historyPrevious. 
    Send PSend17963 = new_Send((Optr)self, SMB_historyPrevious, 0);
    Array PThreadedCode17955 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17956, (Optr)&t_send1, (Optr)PSend17957, (Optr)&t_send_ifTrue_, (Optr)PSend17958, (Optr)PBlock17959, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17963, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17953 = new_Block_with(PArray17954, empty_Array, PThreadedCode17955, 3, PSend17958, PSend17963, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17964 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17953);
    Array PThreadedCode17952 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17953, (Optr)&t_send1, (Optr)PSend17964, (Optr)&t_method_return);
    Method PMethod17951 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17952, 1, PSend17964);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17951, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17968 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend17970 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper17974 = new_Super(SMB_down, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17975 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper17974);
    Array PThreadedCode17973 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper17974, (Optr)&t_send1, (Optr)PSend17975, (Optr)&t_block_return);
    Block PBlock17972 = new_Block_with(empty_Array, empty_Array, PThreadedCode17973, 1, PSend17975);
    // ifFalse:. 
    Send PSend17971 = new_Send((Optr)PSend17970, SMB_ifFalse_, 1, (Optr)PBlock17972);
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    // historyNext. 
    Send PSend17976 = new_Send((Optr)self, SMB_historyNext, 0);
    Array PThreadedCode17969 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17970, (Optr)&t_send_ifFalse_, (Optr)PSend17971, (Optr)PBlock17972, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17976, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17967 = new_Block_with(PArray17968, empty_Array, PThreadedCode17969, 3, PSend17971, PSend17976, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17977 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17967);
    Array PThreadedCode17966 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17967, (Optr)&t_send1, (Optr)PSend17977, (Optr)&t_method_return);
    Method PMethod17965 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17966, 1, PSend17977);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17965, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17981 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17980 = new_Assign((Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)PSend17981);
    Super PSuper17982 = new_Super(SMB_initialize, 0);
    Array PThreadedCode17979 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign17980, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17981, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper17982, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17978 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17979, 3, PAssign17980, PSuper17982, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod17978, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_historyRestore() {
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17986 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17988 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend17991 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Array PThreadedCode17990 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend17991, (Optr)&t_block_return);
    Block PBlock17989 = new_Block_with(empty_Array, empty_Array, PThreadedCode17990, 1, PSend17991);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend17992 = new_Send((Optr)PSend17988, SMB_or_, 1, (Optr)PBlock17989);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17996 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17995 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17996, (Optr)&t_block_return);
    Block PBlock17994 = new_Block_with(empty_Array, empty_Array, PThreadedCode17995, 1, PSend17996);
    // ifTrue:. 
    Send PSend17993 = new_Send((Optr)PSend17992, SMB_ifTrue_, 1, (Optr)PBlock17994);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17997 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend17998 = new_Send((Optr)PSend17997, SMB_getLines, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    // setLines:. 
    Send PSend17999 = new_Send((Optr)self, SMB_setLines_, 1, (Optr)PSend17998);
    Symbol SMB_position_ = new_Symbol(L"position:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // position:. 
    Send PSend18000 = new_Send((Optr)self, SMB_position_, 1, (Optr)int_0_Const);
    Array PThreadedCode17987 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend17988, (Optr)&t_push_closure, (Optr)PBlock17989, (Optr)&t_send1, (Optr)PSend17992, (Optr)&t_send_ifTrue_, (Optr)PSend17993, (Optr)PBlock17994, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend17997, (Optr)&t_send0, (Optr)PSend17998, (Optr)&t_send1, (Optr)PSend17999, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18000, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17985 = new_Block_with(PArray17986, empty_Array, PThreadedCode17987, 4, PSend17993, PSend17999, PSend18000, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18001 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17985);
    Array PThreadedCode17984 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17985, (Optr)&t_send1, (Optr)PSend18001, (Optr)&t_method_return);
    Method PMethod17983 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17984, 1, PSend18001);
    
    MethodClosure MC_SMB_historyRestore = new_MethodClosure((Method)PMethod17983, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyRestore, MC_SMB_historyRestore);
}


static void init_SMB_historyPrevious() {
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18005 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18007 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18011 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18010 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18011, (Optr)&t_block_return);
    Block PBlock18009 = new_Block_with(empty_Array, empty_Array, PThreadedCode18010, 1, PSend18011);
    // ifTrue:. 
    Send PSend18008 = new_Send((Optr)PSend18007, SMB_ifTrue_, 1, (Optr)PBlock18009);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18012 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18013 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_previous, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18014 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18006 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18007, (Optr)&t_send_ifTrue_, (Optr)PSend18008, (Optr)PBlock18009, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18012, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18013, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18014, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18004 = new_Block_with(PArray18005, empty_Array, PThreadedCode18006, 5, PSend18008, PSend18012, PSend18013, PSend18014, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18015 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18004);
    Array PThreadedCode18003 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18004, (Optr)&t_send1, (Optr)PSend18015, (Optr)&t_method_return);
    Method PMethod18002 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18003, 1, PSend18015);
    
    MethodClosure MC_SMB_historyPrevious = new_MethodClosure((Method)PMethod18002, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPrevious, MC_SMB_historyPrevious);
}


static void init_SMB_historyNext() {
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18019 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18021 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18025 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18024 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18025, (Optr)&t_block_return);
    Block PBlock18023 = new_Block_with(empty_Array, empty_Array, PThreadedCode18024, 1, PSend18025);
    // ifTrue:. 
    Send PSend18022 = new_Send((Optr)PSend18021, SMB_ifTrue_, 1, (Optr)PBlock18023);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18026 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18027 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_next, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18028 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18020 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18021, (Optr)&t_send_ifTrue_, (Optr)PSend18022, (Optr)PBlock18023, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18026, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18027, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18028, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18018 = new_Block_with(PArray18019, empty_Array, PThreadedCode18020, 5, PSend18022, PSend18026, PSend18027, PSend18028, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18029 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18018);
    Array PThreadedCode18017 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18018, (Optr)&t_send1, (Optr)PSend18029, (Optr)&t_method_return);
    Method PMethod18016 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18017, 1, PSend18029);
    
    MethodClosure MC_SMB_historyNext = new_MethodClosure((Method)PMethod18016, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyNext, MC_SMB_historyNext);
}


static void init_SMB_historyPush() {
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    Variable VAR_text_0_0 = new_Variable_named(L"text", 0);
    Array PArray18031 = new_Array_with(1, (Optr)VAR_text_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18034 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18036 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18040 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18041 = new_Send((Optr)PSend18040, SMB_contents, 0);
    // contents. 
    Send PSend18042 = new_Send((Optr)self, SMB_contents, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18043 = new_Send((Optr)PSend18041, SMB__equals_, 1, (Optr)PSend18042);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18047 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_text_0_0);
    Array PThreadedCode18046 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18047, (Optr)&t_block_return);
    Block PBlock18045 = new_Block_with(empty_Array, empty_Array, PThreadedCode18046, 1, PSend18047);
    // ifTrue:. 
    Send PSend18044 = new_Send((Optr)PSend18043, SMB_ifTrue_, 1, (Optr)PBlock18045);
    Array PThreadedCode18039 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18040, (Optr)&t_send0, (Optr)PSend18041, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18042, (Optr)&t_send1, (Optr)PSend18043, (Optr)&t_send_ifTrue_, (Optr)PSend18044, (Optr)PBlock18045, (Optr)&t_block_return);
    Block PBlock18038 = new_Block_with(empty_Array, empty_Array, PThreadedCode18039, 1, PSend18044);
    // ifFalse:. 
    Send PSend18037 = new_Send((Optr)PSend18036, SMB_ifFalse_, 1, (Optr)PBlock18038);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18050 = new_Send((Optr)Text_classReference, SMB_new, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18051 = new_Send((Optr)self, SMB_getLines, 0);
    // setLines:. 
    Send PSend18049 = new_Send((Optr)PSend18050, SMB_setLines_, 1, (Optr)PSend18051);
    Assign PAssign18048 = new_Assign((Optr)VAR_text_0_0, (Optr)PSend18049);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18052 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_add_, 1, (Optr)VAR_text_0_0);
    // new. 
    Send PSend18054 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18053 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18054);
    Array PThreadedCode18035 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18036, (Optr)&t_send_ifFalse_, (Optr)PSend18037, (Optr)PBlock18038, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18048, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send0, (Optr)PSend18050, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18051, (Optr)&t_send1, (Optr)PSend18049, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18052, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18053, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18054, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_method_return);
    Block PBlock18033 = new_Block_with(PArray18034, empty_Array, PThreadedCode18035, 5, PSend18037, PAssign18048, PSend18052, PAssign18053, VAR_text_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18055 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18033);
    Array PThreadedCode18032 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18033, (Optr)&t_send1, (Optr)PSend18055, (Optr)&t_method_return);
    Method PMethod18030 = new_Method_with(empty_Array, PArray18031, empty_Array, PThreadedCode18032, 1, PSend18055);
    
    MethodClosure MC_SMB_historyPush = new_MethodClosure((Method)PMethod18030, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPush, MC_SMB_historyPush);
}

void init_Shell_ReadLine_PHistoryText_layout() {
    layout_Shell_ReadLine_HistoryText_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_Shell_ReadLine_HistoryText_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_Shell_ReadLine_HistoryText_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_Shell_ReadLine_HistoryText_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_Shell_ReadLine_HistoryText_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_Shell_ReadLine_HistoryText_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_HistoryText = new_Symbol(L"HistoryText");
    slot_Shell_ReadLine_HistoryText_history = (Optr)new_Slot(2, L"history");
    layout_Shell_ReadLine_HistoryText = (Optr)create_layout_with_vars(ObjectLayout_Class, 3);
    ((Array)layout_Shell_ReadLine_HistoryText)->values[0] = slot_Shell_ReadLine_Text_lines; // lines 
    ((Array)layout_Shell_ReadLine_HistoryText)->values[1] = slot_Shell_ReadLine_Text_stream; // stream 
    ((Array)layout_Shell_ReadLine_HistoryText)->values[2] = slot_Shell_ReadLine_HistoryText_history; // history 
    Shell_ReadLine_HistoryText_Class = (Class)new_Class(Shell_ReadLine_Text_Class, layout_Shell_ReadLine_HistoryText_Class_class);
    Shell_ReadLine_HistoryText_Class->layout = layout_Shell_ReadLine_HistoryText;
    Shell_ReadLine_HistoryText_Class->name = SMB_HistoryText;
    
}

void init_Shell_ReadLine_PHistoryText_methods() {
    init_SMB_clear();
    init_SMB_up();
    init_SMB_down();
    init_SMB_initialize();
    init_SMB_historyRestore();
    init_SMB_historyPrevious();
    init_SMB_historyNext();
    init_SMB_historyPush();
    
}