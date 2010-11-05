#include <lib/class/Shell/ReadLine/HistoryText.h>


Optr layout_Shell_ReadLine_HistoryText_Class_class;
Optr slot_Shell_ReadLine_HistoryText_history;
Optr layout_Shell_ReadLine_HistoryText;


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18004 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18006 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18005 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18006);
    Symbol SMB_addLine = new_Symbol(L"addLine");
    // addLine. 
    Send PSend18007 = new_Send((Optr)self, SMB_addLine, 0);
    Array PThreadedCode18003 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18004, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18005, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18006, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18007, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18002 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18003, 4, PSend18004, PAssign18005, PSend18007, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod18002, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18011 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_line = new_Symbol(L"line");
    // line. 
    Send PSend18013 = new_Send((Optr)self, SMB_line, 0);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    Symbol SMB__lt_ = new_Symbol(L"<");
    // <. 
    Send PSend18014 = new_Send((Optr)int_1_Const, SMB__lt_, 1, (Optr)PSend18013);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Super PSuper18018 = new_Super(SMB_up, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18019 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18018);
    Array PThreadedCode18017 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18018, (Optr)&t_send1, (Optr)PSend18019, (Optr)&t_block_return);
    Block PBlock18016 = new_Block_with(empty_Array, empty_Array, PThreadedCode18017, 1, PSend18019);
    // ifTrue:. 
    Send PSend18015 = new_Send((Optr)PSend18014, SMB_ifTrue_, 1, (Optr)PBlock18016);
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    // historyPrevious. 
    Send PSend18020 = new_Send((Optr)self, SMB_historyPrevious, 0);
    Array PThreadedCode18012 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_1, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18013, (Optr)&t_send1, (Optr)PSend18014, (Optr)&t_send_ifTrue_, (Optr)PSend18015, (Optr)PBlock18016, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18020, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18010 = new_Block_with(PArray18011, empty_Array, PThreadedCode18012, 3, PSend18015, PSend18020, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18021 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18010);
    Array PThreadedCode18009 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18010, (Optr)&t_send1, (Optr)PSend18021, (Optr)&t_method_return);
    Method PMethod18008 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18009, 1, PSend18021);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod18008, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18025 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18027 = new_Send((Optr)slot_Shell_ReadLine_Text_lines, SMB_atEnd, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Super PSuper18031 = new_Super(SMB_down, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18032 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSuper18031);
    Array PThreadedCode18030 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18031, (Optr)&t_send1, (Optr)PSend18032, (Optr)&t_block_return);
    Block PBlock18029 = new_Block_with(empty_Array, empty_Array, PThreadedCode18030, 1, PSend18032);
    // ifFalse:. 
    Send PSend18028 = new_Send((Optr)PSend18027, SMB_ifFalse_, 1, (Optr)PBlock18029);
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    // historyNext. 
    Send PSend18033 = new_Send((Optr)self, SMB_historyNext, 0);
    Array PThreadedCode18026 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_Text_lines, (Optr)&t_send0, (Optr)PSend18027, (Optr)&t_send_ifFalse_, (Optr)PSend18028, (Optr)PBlock18029, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18033, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18024 = new_Block_with(PArray18025, empty_Array, PThreadedCode18026, 3, PSend18028, PSend18033, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18034 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18024);
    Array PThreadedCode18023 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18024, (Optr)&t_send1, (Optr)PSend18034, (Optr)&t_method_return);
    Method PMethod18022 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18023, 1, PSend18034);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod18022, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18038 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18037 = new_Assign((Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)PSend18038);
    Super PSuper18039 = new_Super(SMB_initialize, 0);
    Array PThreadedCode18036 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push1, (Optr)PAssign18037, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18038, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper18039, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod18035 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18036, 3, PAssign18037, PSuper18039, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod18035, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_historyRestore() {
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18043 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18045 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18048 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Array PThreadedCode18047 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18048, (Optr)&t_block_return);
    Block PBlock18046 = new_Block_with(empty_Array, empty_Array, PThreadedCode18047, 1, PSend18048);
    Symbol SMB_or_ = new_Symbol(L"or:");
    // or:. 
    Send PSend18049 = new_Send((Optr)PSend18045, SMB_or_, 1, (Optr)PBlock18046);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18053 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)false_Const);
    Array PThreadedCode18052 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend18053, (Optr)&t_block_return);
    Block PBlock18051 = new_Block_with(empty_Array, empty_Array, PThreadedCode18052, 1, PSend18053);
    // ifTrue:. 
    Send PSend18050 = new_Send((Optr)PSend18049, SMB_ifTrue_, 1, (Optr)PBlock18051);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18054 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18055 = new_Send((Optr)PSend18054, SMB_getLines, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    // setLines:. 
    Send PSend18056 = new_Send((Optr)self, SMB_setLines_, 1, (Optr)PSend18055);
    Symbol SMB_position_ = new_Symbol(L"position:");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // position:. 
    Send PSend18057 = new_Send((Optr)self, SMB_position_, 1, (Optr)int_0_Const);
    Array PThreadedCode18044 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18045, (Optr)&t_push_closure, (Optr)PBlock18046, (Optr)&t_send1, (Optr)PSend18049, (Optr)&t_send_ifTrue_, (Optr)PSend18050, (Optr)PBlock18051, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18054, (Optr)&t_send0, (Optr)PSend18055, (Optr)&t_send1, (Optr)PSend18056, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend18057, (Optr)&t_zap, (Optr)&t_method_return_true);
    Block PBlock18042 = new_Block_with(PArray18043, empty_Array, PThreadedCode18044, 4, PSend18050, PSend18056, PSend18057, true_Const);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18058 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18042);
    Array PThreadedCode18041 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18042, (Optr)&t_send1, (Optr)PSend18058, (Optr)&t_method_return);
    Method PMethod18040 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18041, 1, PSend18058);
    
    MethodClosure MC_SMB_historyRestore = new_MethodClosure((Method)PMethod18040, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyRestore, MC_SMB_historyRestore);
}


static void init_SMB_historyPrevious() {
    Symbol SMB_historyPrevious = new_Symbol(L"historyPrevious");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18062 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18064 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18068 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18067 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18068, (Optr)&t_block_return);
    Block PBlock18066 = new_Block_with(empty_Array, empty_Array, PThreadedCode18067, 1, PSend18068);
    // ifTrue:. 
    Send PSend18065 = new_Send((Optr)PSend18064, SMB_ifTrue_, 1, (Optr)PBlock18066);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18069 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_previous = new_Symbol(L"previous");
    // previous. 
    Send PSend18070 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_previous, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18071 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18063 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18064, (Optr)&t_send_ifTrue_, (Optr)PSend18065, (Optr)PBlock18066, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18069, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18070, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18071, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18061 = new_Block_with(PArray18062, empty_Array, PThreadedCode18063, 5, PSend18065, PSend18069, PSend18070, PSend18071, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18072 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18061);
    Array PThreadedCode18060 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18061, (Optr)&t_send1, (Optr)PSend18072, (Optr)&t_method_return);
    Method PMethod18059 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18060, 1, PSend18072);
    
    MethodClosure MC_SMB_historyPrevious = new_MethodClosure((Method)PMethod18059, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyPrevious, MC_SMB_historyPrevious);
}


static void init_SMB_historyNext() {
    Symbol SMB_historyNext = new_Symbol(L"historyNext");
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18076 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atEnd = new_Symbol(L"atEnd");
    // atEnd. 
    Send PSend18078 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atEnd, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18082 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode18081 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend18082, (Optr)&t_block_return);
    Block PBlock18080 = new_Block_with(empty_Array, empty_Array, PThreadedCode18081, 1, PSend18082);
    // ifTrue:. 
    Send PSend18079 = new_Send((Optr)PSend18078, SMB_ifTrue_, 1, (Optr)PBlock18080);
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    // historyPush. 
    Send PSend18083 = new_Send((Optr)self, SMB_historyPush, 0);
    Symbol SMB_next = new_Symbol(L"next");
    // next. 
    Send PSend18084 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_next, 0);
    Symbol SMB_historyRestore = new_Symbol(L"historyRestore");
    // historyRestore. 
    Send PSend18085 = new_Send((Optr)self, SMB_historyRestore, 0);
    Array PThreadedCode18077 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18078, (Optr)&t_send_ifTrue_, (Optr)PSend18079, (Optr)PBlock18080, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18083, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18084, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18085, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock18075 = new_Block_with(PArray18076, empty_Array, PThreadedCode18077, 5, PSend18079, PSend18083, PSend18084, PSend18085, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18086 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18075);
    Array PThreadedCode18074 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18075, (Optr)&t_send1, (Optr)PSend18086, (Optr)&t_method_return);
    Method PMethod18073 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode18074, 1, PSend18086);
    
    MethodClosure MC_SMB_historyNext = new_MethodClosure((Method)PMethod18073, Shell_ReadLine_HistoryText_Class);
    store_method(Shell_ReadLine_HistoryText_Class, SMB_historyNext, MC_SMB_historyNext);
}


static void init_SMB_historyPush() {
    Symbol SMB_historyPush = new_Symbol(L"historyPush");
    Variable VAR_text_0_0 = new_Variable_named(L"text", 0);
    Array PArray18088 = new_Array_with(1, (Optr)VAR_text_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray18091 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_atStart = new_Symbol(L"atStart");
    // atStart. 
    Send PSend18093 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_atStart, 0);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend18097 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_value, 0);
    Symbol SMB_contents = new_Symbol(L"contents");
    // contents. 
    Send PSend18098 = new_Send((Optr)PSend18097, SMB_contents, 0);
    // contents. 
    Send PSend18099 = new_Send((Optr)self, SMB_contents, 0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend18100 = new_Send((Optr)PSend18098, SMB__equals_, 1, (Optr)PSend18099);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend18104 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)VAR_text_0_0);
    Array PThreadedCode18103 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18104, (Optr)&t_block_return);
    Block PBlock18102 = new_Block_with(empty_Array, empty_Array, PThreadedCode18103, 1, PSend18104);
    // ifTrue:. 
    Send PSend18101 = new_Send((Optr)PSend18100, SMB_ifTrue_, 1, (Optr)PBlock18102);
    Array PThreadedCode18096 = instantiate_Array_with(ThreadedCode_Class, 0, 15, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18097, (Optr)&t_send0, (Optr)PSend18098, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18099, (Optr)&t_send1, (Optr)PSend18100, (Optr)&t_send_ifTrue_, (Optr)PSend18101, (Optr)PBlock18102, (Optr)&t_block_return);
    Block PBlock18095 = new_Block_with(empty_Array, empty_Array, PThreadedCode18096, 1, PSend18101);
    // ifFalse:. 
    Send PSend18094 = new_Send((Optr)PSend18093, SMB_ifFalse_, 1, (Optr)PBlock18095);
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend18107 = new_Send((Optr)Text_classReference, SMB_new, 0);
    Symbol SMB_setLines_ = new_Symbol(L"setLines:");
    Symbol SMB_getLines = new_Symbol(L"getLines");
    // getLines. 
    Send PSend18108 = new_Send((Optr)self, SMB_getLines, 0);
    // setLines:. 
    Send PSend18106 = new_Send((Optr)PSend18107, SMB_setLines_, 1, (Optr)PSend18108);
    Assign PAssign18105 = new_Assign((Optr)VAR_text_0_0, (Optr)PSend18106);
    Symbol SMB_add_ = new_Symbol(L"add:");
    // add:. 
    Send PSend18109 = new_Send((Optr)slot_Shell_ReadLine_HistoryText_history, SMB_add_, 1, (Optr)VAR_text_0_0);
    // new. 
    Send PSend18111 = new_Send((Optr)PDoubleLinkedList_classReference, SMB_new, 0);
    Assign PAssign18110 = new_Assign((Optr)slot_Shell_ReadLine_Text_lines, (Optr)PSend18111);
    Array PThreadedCode18092 = instantiate_Array_with(ThreadedCode_Class, 0, 39, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_send0, (Optr)PSend18093, (Optr)&t_send_ifFalse_, (Optr)PSend18094, (Optr)PBlock18095, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18105, (Optr)&t_push_class_reference, (Optr)Text_classReference, (Optr)&t_send0, (Optr)PSend18107, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend18108, (Optr)&t_send1, (Optr)PSend18106, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_Shell_ReadLine_HistoryText_history, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_send1, (Optr)PSend18109, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign18110, (Optr)&t_push_class_reference, (Optr)PDoubleLinkedList_classReference, (Optr)&t_send0, (Optr)PSend18111, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_text_0_0, (Optr)&t_method_return);
    Block PBlock18090 = new_Block_with(PArray18091, empty_Array, PThreadedCode18092, 5, PSend18094, PAssign18105, PSend18109, PAssign18110, VAR_text_0_0);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend18112 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock18090);
    Array PThreadedCode18089 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock18090, (Optr)&t_send1, (Optr)PSend18112, (Optr)&t_method_return);
    Method PMethod18087 = new_Method_with(empty_Array, PArray18088, empty_Array, PThreadedCode18089, 1, PSend18112);
    
    MethodClosure MC_SMB_historyPush = new_MethodClosure((Method)PMethod18087, Shell_ReadLine_HistoryText_Class);
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