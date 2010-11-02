#include <lib/class/Shell/ReadLine/HistoryText.h>


Optr layout_Shell_ReadLine_HistoryText_Class_class;
Optr slot_Shell_ReadLine_HistoryText_history;
Optr layout_Shell_ReadLine_HistoryText;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend17917 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17919 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17918 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17919);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend17920 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode17916 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17917, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17918, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17919, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17920, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod17915 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17916, 4, PSend17917, PAssign17918, PSend17920, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod17915, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_historyPrevious() {
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17924 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17926 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17930 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode17929 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend17930, (Optr)&t_block_return);
    Block PBlock17928 = new_Block_with(empty_Array, empty_Array, PThreadedCode17929, 1, PSend17930);
    // ifTrue:. 
    Send PSend17927 = new_Send((Optr)PSend17926, SMB_ifTrue_, 1, (Optr)PBlock17928);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend17931 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend17932 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_previous, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend17933 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode17925 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend17926, (Optr)&t_send_ifTrue_, (Optr)PSend17927, (Optr)PBlock17928, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17931, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend17932, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17933, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock17923 = new_Block_with(PArray17924, empty_Array, PThreadedCode17925, 5, PSend17927, PSend17931, PSend17932, PSend17933, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17934 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17923);
    Array PThreadedCode17922 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17923, (Optr)&t_send1, (Optr)PSend17934, (Optr)&t_method_return);
    Method PMethod17921 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17922, 1, PSend17934);
    
    MethodClosure MC_SMB_historyPrevious = new_MethodClosure((Method)PMethod17921, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPrevious, MC_SMB_historyPrevious);
}


static void init_SMB_historyRestore() {
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17938 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17940 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend17943 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Array PThreadedCode17942 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend17943, (Optr)&t_block_return);
    Block PBlock17941 = new_Block_with(empty_Array, empty_Array, PThreadedCode17942, 1, PSend17943);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend17944 = new_Send((Optr)PSend17940, SMB_or_, 1, (Optr)PBlock17941);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17948 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode17947 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend17948, (Optr)&t_block_return);
    Block PBlock17946 = new_Block_with(empty_Array, empty_Array, PThreadedCode17947, 1, PSend17948);
    // ifTrue:. 
    Send PSend17945 = new_Send((Optr)PSend17944, SMB_ifTrue_, 1, (Optr)PBlock17946);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17949 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend17950 = new_Send((Optr)PSend17949, SMB_getLines, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    // setLines:. 
    Send PSend17951 = new_Send((Optr)self, SMB_setLines_, 1, (Optr)PSend17950);
    Symbol SMB_position_ = new_Symbol(L"position:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // position:. 
    Send PSend17952 = new_Send((Optr)self, SMB_position_, 1, (Optr)int_0_Const);
    Array PThreadedCode17939 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend17940, (Optr)&t_push_closure, (Optr)PBlock17941, (Optr)&t_send1, (Optr)PSend17944, (Optr)&t_send_ifTrue_, (Optr)PSend17945, (Optr)PBlock17946, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend17949, (Optr)&t_send0, (Optr)PSend17950, (Optr)&t_send1, (Optr)PSend17951, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend17952, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17937 = new_Block_with(PArray17938, empty_Array, PThreadedCode17939, 4, PSend17945, PSend17951, PSend17952, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17953 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17937);
    Array PThreadedCode17936 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17937, (Optr)&t_send1, (Optr)PSend17953, (Optr)&t_method_return);
    Method PMethod17935 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17936, 1, PSend17953);
    
    MethodClosure MC_SMB_historyRestore = new_MethodClosure((Method)PMethod17935, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyRestore, MC_SMB_historyRestore);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17957 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend17959 = new_Send((Optr)self, SMB_line, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend17960 = new_Send((Optr)int_1_Const, SMB__lt_, 1, (Optr)PSend17959);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper17964 = new_Super(SMB_up, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17965 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper17964);
    Array PThreadedCode17963 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper17964, (Optr)&t_send1, (Optr)PSend17965, (Optr)&t_block_return);
    Block PBlock17962 = new_Block_with(empty_Array, empty_Array, PThreadedCode17963, 1, PSend17965);
    // ifTrue:. 
    Send PSend17961 = new_Send((Optr)PSend17960, SMB_ifTrue_, 1, (Optr)PBlock17962);
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    // historyPrevious. 
    Send PSend17966 = new_Send((Optr)self, SMB_historyPrevious, 0);
    Array PThreadedCode17958 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17959, (Optr)&t_send1, (Optr)PSend17960, (Optr)&t_send_ifTrue_, (Optr)PSend17961, (Optr)PBlock17962, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17966, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17956 = new_Block_with(PArray17957, empty_Array, PThreadedCode17958, 3, PSend17961, PSend17966, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17967 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17956);
    Array PThreadedCode17955 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17956, (Optr)&t_send1, (Optr)PSend17967, (Optr)&t_method_return);
    Method PMethod17954 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17955, 1, PSend17967);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod17954, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_historyPush() {
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    Variable VAR_text_0_0 = new_Variable_named(L"text", 0);
    Array PArray17969 = new_Array_with(1, (Optr)VAR_text_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17972 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend17974 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend17978 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend17979 = new_Send((Optr)PSend17978, SMB_contents, 0);
    // contents. 
    Send PSend17980 = new_Send((Optr)self, SMB_contents, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend17981 = new_Send((Optr)PSend17979, SMB__equals_, 1, (Optr)PSend17980);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend17985 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_text_0_0);
    Array PThreadedCode17984 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend17985, (Optr)&t_block_return);
    Block PBlock17983 = new_Block_with(empty_Array, empty_Array, PThreadedCode17984, 1, PSend17985);
    // ifTrue:. 
    Send PSend17982 = new_Send((Optr)PSend17981, SMB_ifTrue_, 1, (Optr)PBlock17983);
    Array PThreadedCode17977 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend17978, (Optr)&t_send0, (Optr)PSend17979, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17980, (Optr)&t_send1, (Optr)PSend17981, (Optr)&t_send_ifTrue_, (Optr)PSend17982, (Optr)PBlock17983, (Optr)&t_block_return);
    Block PBlock17976 = new_Block_with(empty_Array, empty_Array, PThreadedCode17977, 1, PSend17982);
    // ifFalse:. 
    Send PSend17975 = new_Send((Optr)PSend17974, SMB_ifFalse_, 1, (Optr)PBlock17976);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend17988 = new_Send((Optr)Text_classReference, SMB_new, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend17989 = new_Send((Optr)self, SMB_getLines, 0);
    // setLines:. 
    Send PSend17987 = new_Send((Optr)PSend17988, SMB_setLines_, 1, (Optr)PSend17989);
    Assign PAssign17986 = new_Assign((Optr)VAR_text_0_0, (Optr)PSend17987);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend17990 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_add_, 1, (Optr)VAR_text_0_0);
    // new. 
    Send PSend17992 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign17991 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend17992);
    Array PThreadedCode17973 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend17974, (Optr)&t_send_ifFalse_, (Optr)PSend17975, (Optr)PBlock17976, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17986, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send0, (Optr)PSend17988, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend17989, (Optr)&t_send1, (Optr)PSend17987, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend17990, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign17991, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend17992, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_method_return);
    Block PBlock17971 = new_Block_with(PArray17972, empty_Array, PThreadedCode17973, 5, PSend17975, PAssign17986, PSend17990, PAssign17991, VAR_text_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend17993 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17971);
    Array PThreadedCode17970 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17971, (Optr)&t_send1, (Optr)PSend17993, (Optr)&t_method_return);
    Method PMethod17968 = new_Method_with(empty_Array, PArray17969, empty_Array, PThreadedCode17970, 1, PSend17993);
    
    MethodClosure MC_SMB_historyPush = new_MethodClosure((Method)PMethod17968, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPush, MC_SMB_historyPush);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray17997 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend17999 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper18003 = new_Super(SMB_down, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18004 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18003);
    Array PThreadedCode18002 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18003, (Optr)&t_send1, (Optr)PSend18004, (Optr)&t_block_return);
    Block PBlock18001 = new_Block_with(empty_Array, empty_Array, PThreadedCode18002, 1, PSend18004);
    // ifFalse:. 
    Send PSend18000 = new_Send((Optr)PSend17999, SMB_ifFalse_, 1, (Optr)PBlock18001);
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    // historyNext. 
    Send PSend18005 = new_Send((Optr)self, SMB_historyNext, 0);
    Array PThreadedCode17998 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend17999, (Optr)&t_send_ifFalse_, (Optr)PSend18000, (Optr)PBlock18001, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18005, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock17996 = new_Block_with(PArray17997, empty_Array, PThreadedCode17998, 3, PSend18000, PSend18005, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18006 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock17996);
    Array PThreadedCode17995 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock17996, (Optr)&t_send1, (Optr)PSend18006, (Optr)&t_method_return);
    Method PMethod17994 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode17995, 1, PSend18006);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod17994, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18010 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18009 = new_Assign((Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)PSend18010);
    Super PSuper18011 = new_Super(SMB_initialize, 0);
    Array PThreadedCode18008 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign18009, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18010, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18011, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18007 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18008, 3, PAssign18009, PSuper18011, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18007, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_historyNext() {
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18015 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18017 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18021 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18020 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18021, (Optr)&t_block_return);
    Block PBlock18019 = new_Block_with(empty_Array, empty_Array, PThreadedCode18020, 1, PSend18021);
    // ifTrue:. 
    Send PSend18018 = new_Send((Optr)PSend18017, SMB_ifTrue_, 1, (Optr)PBlock18019);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18022 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18023 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_next, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18024 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18016 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18017, (Optr)&t_send_ifTrue_, (Optr)PSend18018, (Optr)PBlock18019, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18022, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18023, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18024, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18014 = new_Block_with(PArray18015, empty_Array, PThreadedCode18016, 5, PSend18018, PSend18022, PSend18023, PSend18024, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18025 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18014);
    Array PThreadedCode18013 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18014, (Optr)&t_send1, (Optr)PSend18025, (Optr)&t_method_return);
    Method PMethod18012 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18013, 1, PSend18025);
    
    MethodClosure MC_SMB_historyNext = new_MethodClosure((Method)PMethod18012, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyNext, MC_SMB_historyNext);
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
    init_SMB_historyPrevious();
    init_SMB_historyRestore();
    init_SMB_up();
    init_SMB_historyPush();
    init_SMB_down();
    init_SMB_initialize();
    init_SMB_historyNext();
    
}