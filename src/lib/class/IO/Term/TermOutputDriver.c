#include <lib/class/IO/Term/TermOutputDriver.h>


Optr slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance;
Optr slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance;
Optr layout_IO_Term_TermOutputDriver_Class_class;
Optr slot_IO_Term_TermOutputDriver_termcap;
Optr slot_IO_Term_TermOutputDriver_outStream;
Optr slot_IO_Term_TermOutputDriver_currentBackground;
Optr slot_IO_Term_TermOutputDriver_currentColor;
Optr slot_IO_Term_TermOutputDriver_light;
Optr slot_IO_Term_TermOutputDriver_blink;
Optr slot_IO_Term_TermOutputDriver_shouldEcho;
Optr layout_IO_Term_TermOutputDriver;


static void init_SMB_csiEscape() {
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend8455 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8456 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8455);
    Character char_8457 = new_Character(L'[');
    Constant char_8457_Const = new_Constant((Optr)char_8457);
    // <<. 
    Send PSend8458 = new_Send((Optr)PSend8456, SMB__shiftLeft_, 1, (Optr)char_8457_Const);
    Array PThreadedCode8454 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8455, (Optr)&t_send1, (Optr)PSend8456, (Optr)&t_push1, (Optr)char_8457, (Optr)&t_send1, (Optr)PSend8458, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8453 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8454, 2, PSend8458, self);
    
    MethodClosure MC_SMB_csiEscape = new_MethodClosure((Method)PMethod8453, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_csiEscape, MC_SMB_csiEscape);
}


static void init_SMB_outStream_() {
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray8460 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Assign PAssign8462 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)VAR_stream_0_0);
    Array PThreadedCode8461 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8462, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8459 = new_Method_with(PArray8460, empty_Array, empty_Array, PThreadedCode8461, 2, PAssign8462, self);
    
    MethodClosure MC_SMB_outStream_ = new_MethodClosure((Method)PMethod8459, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream_, MC_SMB_outStream_);
}


static void init_SMB_escape() {
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend8465 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8466 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8465);
    Array PThreadedCode8464 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8465, (Optr)&t_send1, (Optr)PSend8466, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8463 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8464, 2, PSend8466, self);
    
    MethodClosure MC_SMB_escape = new_MethodClosure((Method)PMethod8463, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_escape, MC_SMB_escape);
}


static void init_SMB_light() {
    Symbol SMB_light = new_Symbol(L"light");
    Assign PAssign8469 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)true_Const);
    Array PThreadedCode8468 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8469, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8467 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8468, 2, PAssign8469, self);
    
    MethodClosure MC_SMB_light = new_MethodClosure((Method)PMethod8467, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_light, MC_SMB_light);
}


static void init_SMB_normal() {
    Symbol SMB_normal = new_Symbol(L"normal");
    String string_8472 = new_String(L"me");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8472_Const = new_Constant((Optr)string_8472);
    // getstr:. 
    Send PSend8473 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8472_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8474 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8473);
    Array PThreadedCode8471 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8472, (Optr)&t_send1, (Optr)PSend8473, (Optr)&t_send1, (Optr)PSend8474, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8470 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8471, 2, PSend8474, self);
    
    MethodClosure MC_SMB_normal = new_MethodClosure((Method)PMethod8470, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_normal, MC_SMB_normal);
}


static void init_SMB_color_() {
    Symbol SMB_color_ = new_Symbol(L"color:");
    Variable VAR_aColor_0_0 = new_Variable_named(L"aColor", 0);
    Array PArray8476 = new_Array_with(1, (Optr)VAR_aColor_0_0);
    Assign PAssign8478 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)VAR_aColor_0_0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8479 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8477 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign8478, (Optr)&t_push_variable, (Optr)VAR_aColor_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8479, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8475 = new_Method_with(PArray8476, empty_Array, empty_Array, PThreadedCode8477, 3, PAssign8478, PSend8479, self);
    
    MethodClosure MC_SMB_color_ = new_MethodClosure((Method)PMethod8475, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_color_, MC_SMB_color_);
}


static void init_SMB_underlineOff() {
    Symbol SMB_underlineOff = new_Symbol(L"underlineOff");
    String string_8482 = new_String(L"ue");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8482_Const = new_Constant((Optr)string_8482);
    // getstr:. 
    Send PSend8483 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8482_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8484 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8483);
    Array PThreadedCode8481 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8482, (Optr)&t_send1, (Optr)PSend8483, (Optr)&t_send1, (Optr)PSend8484, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8480 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8481, 2, PSend8484, self);
    
    MethodClosure MC_SMB_underlineOff = new_MethodClosure((Method)PMethod8480, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_underlineOff, MC_SMB_underlineOff);
}


static void init_SMB_bold() {
    Symbol SMB_bold = new_Symbol(L"bold");
    String string_8487 = new_String(L"md");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8487_Const = new_Constant((Optr)string_8487);
    // getstr:. 
    Send PSend8488 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8487_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8489 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8488);
    Array PThreadedCode8486 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8487, (Optr)&t_send1, (Optr)PSend8488, (Optr)&t_send1, (Optr)PSend8489, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8485 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8486, 2, PSend8489, self);
    
    MethodClosure MC_SMB_bold = new_MethodClosure((Method)PMethod8485, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_bold, MC_SMB_bold);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8492 = new_Super(SMB_initialize, 0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend8494 = new_Send((Optr)PTermcap_classReference, SMB_instance, 0);
    Assign PAssign8493 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)PSend8494);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend8496 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Assign PAssign8495 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)PSend8496);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8497 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode8491 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8492, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8493, (Optr)&t_push_class_reference, (Optr)PTermcap_classReference, (Optr)&t_send0, (Optr)PSend8494, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8495, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8496, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8497, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8490 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8491, 5, PSuper8492, PAssign8493, PAssign8495, PSend8497, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8490, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_insertCharacter() {
    Symbol SMB_insertCharacter = new_Symbol(L"insertCharacter");
    String string_8500 = new_String(L"ic");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8500_Const = new_Constant((Optr)string_8500);
    // getstr:. 
    Send PSend8501 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8500_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8502 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8501);
    Array PThreadedCode8499 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8500, (Optr)&t_send1, (Optr)PSend8501, (Optr)&t_send1, (Optr)PSend8502, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8498 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8499, 2, PSend8502, self);
    
    MethodClosure MC_SMB_insertCharacter = new_MethodClosure((Method)PMethod8498, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertCharacter, MC_SMB_insertCharacter);
}


static void init_SMB_cursorInvisible() {
    Symbol SMB_cursorInvisible = new_Symbol(L"cursorInvisible");
    String string_8505 = new_String(L"vi");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8505_Const = new_Constant((Optr)string_8505);
    // getstr:. 
    Send PSend8506 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8505_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8507 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8506);
    Array PThreadedCode8504 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8505, (Optr)&t_send1, (Optr)PSend8506, (Optr)&t_send1, (Optr)PSend8507, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8503 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8504, 2, PSend8507, self);
    
    MethodClosure MC_SMB_cursorInvisible = new_MethodClosure((Method)PMethod8503, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorInvisible, MC_SMB_cursorInvisible);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8510 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8511 = new_Character(L'E');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8511_Const = new_Constant((Optr)char_8511);
    // <<. 
    Send PSend8512 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8511_Const);
    Array PThreadedCode8509 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8510, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8511, (Optr)&t_send1, (Optr)PSend8512, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8508 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8509, 3, PSend8510, PSend8512, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod8508, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    String string_8515 = new_String(L"ho");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8515_Const = new_Constant((Optr)string_8515);
    // getstr:. 
    Send PSend8516 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8515_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8517 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8516);
    Array PThreadedCode8514 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8515, (Optr)&t_send1, (Optr)PSend8516, (Optr)&t_send1, (Optr)PSend8517, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8513 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8514, 2, PSend8517, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod8513, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_yellow() {
    Symbol SMB_yellow = new_Symbol(L"yellow");
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_33_Const = new_Constant((Optr)int_33);
    // color:. 
    Send PSend8520 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_33_Const);
    Array PThreadedCode8519 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_33, (Optr)&t_send1, (Optr)PSend8520, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8518 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8519, 2, PSend8520, self);
    
    MethodClosure MC_SMB_yellow = new_MethodClosure((Method)PMethod8518, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow, MC_SMB_yellow);
}


static void init_SMB_colorEscape() {
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8523 = new_Send((Optr)self, SMB_csiEscape, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8527 = new_String(L"5;");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_8527_Const = new_Constant((Optr)string_8527);
    // <<. 
    Send PSend8528 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)string_8527_Const);
    Array PThreadedCode8526 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)string_8527, (Optr)&t_send1, (Optr)PSend8528, (Optr)&t_block_return);
    Block PBlock8525 = new_Block_with(empty_Array, empty_Array, PThreadedCode8526, 1, PSend8528);
    // ifTrue:. 
    Send PSend8524 = new_Send((Optr)slot_IO_Term_TermOutputDriver_blink, SMB_ifTrue_, 1, (Optr)PBlock8525);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend8529 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentColor, SMB_asString, 0);
    // <<. 
    Send PSend8530 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8529);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ==. 
    Send PSend8531 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB__pequals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Character char_8535 = new_Character(L';');
    Constant char_8535_Const = new_Constant((Optr)char_8535);
    // <<. 
    Send PSend8536 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8535_Const);
    // asString. 
    Send PSend8537 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB_asString, 0);
    // <<. 
    Send PSend8538 = new_Send((Optr)PSend8536, SMB__shiftLeft_, 1, (Optr)PSend8537);
    Array PThreadedCode8534 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8535, (Optr)&t_send1, (Optr)PSend8536, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_send0, (Optr)PSend8537, (Optr)&t_send1, (Optr)PSend8538, (Optr)&t_block_return);
    Block PBlock8533 = new_Block_with(empty_Array, empty_Array, PThreadedCode8534, 1, PSend8538);
    // ifFalse:. 
    Send PSend8532 = new_Send((Optr)PSend8531, SMB_ifFalse_, 1, (Optr)PBlock8533);
    Character char_8539 = new_Character(L'm');
    Constant char_8539_Const = new_Constant((Optr)char_8539);
    // <<. 
    Send PSend8540 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8539_Const);
    Array PThreadedCode8522 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8523, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)&t_send_ifTrue_, (Optr)PSend8524, (Optr)PBlock8525, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)&t_send0, (Optr)PSend8529, (Optr)&t_send1, (Optr)PSend8530, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8531, (Optr)&t_send_ifFalse_, (Optr)PSend8532, (Optr)PBlock8533, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8539, (Optr)&t_send1, (Optr)PSend8540, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8521 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8522, 6, PSend8523, PSend8524, PSend8530, PSend8532, PSend8540, self);
    
    MethodClosure MC_SMB_colorEscape = new_MethodClosure((Method)PMethod8521, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_colorEscape, MC_SMB_colorEscape);
}


static void init_SMB_noEcho() {
    Symbol SMB_noEcho = new_Symbol(L"noEcho");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
    Send PSend8543 = new_Send((Optr)self, SMB_echo_, 1, (Optr)false_Const);
    Array PThreadedCode8542 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8543, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8541 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8542, 2, PSend8543, self);
    
    MethodClosure MC_SMB_noEcho = new_MethodClosure((Method)PMethod8541, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_noEcho, MC_SMB_noEcho);
}


static void init_SMB_black() {
    Symbol SMB_black = new_Symbol(L"black");
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // color:. 
    Send PSend8546 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_30_Const);
    Array PThreadedCode8545 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend8546, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8544 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8545, 2, PSend8546, self);
    
    MethodClosure MC_SMB_black = new_MethodClosure((Method)PMethod8544, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_black, MC_SMB_black);
}


static void init_SMB_green() {
    Symbol SMB_green = new_Symbol(L"green");
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_32_Const = new_Constant((Optr)int_32);
    // color:. 
    Send PSend8549 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_32_Const);
    Array PThreadedCode8548 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend8549, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8547 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8548, 2, PSend8549, self);
    
    MethodClosure MC_SMB_green = new_MethodClosure((Method)PMethod8547, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_green, MC_SMB_green);
}


static void init_SMB_underline() {
    Symbol SMB_underline = new_Symbol(L"underline");
    String string_8552 = new_String(L"us");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8552_Const = new_Constant((Optr)string_8552);
    // getstr:. 
    Send PSend8553 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8552_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8554 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8553);
    Array PThreadedCode8551 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8552, (Optr)&t_send1, (Optr)PSend8553, (Optr)&t_send1, (Optr)PSend8554, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8550 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8551, 2, PSend8554, self);
    
    MethodClosure MC_SMB_underline = new_MethodClosure((Method)PMethod8550, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_underline, MC_SMB_underline);
}


static void init_SMB_invisible() {
    Symbol SMB_invisible = new_Symbol(L"invisible");
    String string_8557 = new_String(L"mk");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8557_Const = new_Constant((Optr)string_8557);
    // getstr:. 
    Send PSend8558 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8557_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8559 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8558);
    Array PThreadedCode8556 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8557, (Optr)&t_send1, (Optr)PSend8558, (Optr)&t_send1, (Optr)PSend8559, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8555 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8556, 2, PSend8559, self);
    
    MethodClosure MC_SMB_invisible = new_MethodClosure((Method)PMethod8555, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_invisible, MC_SMB_invisible);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8562 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)int_0_Const);
    Assign PAssign8563 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)int_0_Const);
    Assign PAssign8564 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)false_Const);
    Assign PAssign8565 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)false_Const);
    Array PThreadedCode8561 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign8562, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8563, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8564, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8565, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8560 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8561, 5, PAssign8562, PAssign8563, PAssign8564, PAssign8565, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod8560, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_yellow_() {
    Symbol SMB_yellow_ = new_Symbol(L"yellow:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8567 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8570 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend8572 = new_Send((Optr)VAR__receiver__1_0, SMB_yellow, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8573 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8574 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8575 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8571 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8572, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8573, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8574, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8575, (Optr)&t_method_return);
    Block PBlock8569 = new_Block_with(PArray8570, empty_Array, PThreadedCode8571, 4, PSend8572, PSend8573, PSend8574, PSend8575);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8576 = new_Send((Optr)PBlock8569, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8568 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8569, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8576, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8566 = new_Method_with(PArray8567, empty_Array, empty_Array, PThreadedCode8568, 2, PSend8576, self);
    
    MethodClosure MC_SMB_yellow_ = new_MethodClosure((Method)PMethod8566, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow_, MC_SMB_yellow_);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8579 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8580 = new_Character(L'B');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8580_Const = new_Constant((Optr)char_8580);
    // <<. 
    Send PSend8581 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8580_Const);
    Array PThreadedCode8578 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8579, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8580, (Optr)&t_send1, (Optr)PSend8581, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8577 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8578, 3, PSend8579, PSend8581, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod8577, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_columns() {
    Symbol SMB_columns = new_Symbol(L"columns");
    String string_8584 = new_String(L"co");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8584_Const = new_Constant((Optr)string_8584);
    // getnum:. 
    Send PSend8585 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8584_Const);
    Array PThreadedCode8583 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8584, (Optr)&t_send1, (Optr)PSend8585, (Optr)&t_method_return);
    Method PMethod8582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8583, 1, PSend8585);
    
    MethodClosure MC_SMB_columns = new_MethodClosure((Method)PMethod8582, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_columns, MC_SMB_columns);
}


static void init_SMB_cyan_() {
    Symbol SMB_cyan_ = new_Symbol(L"cyan:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8587 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8590 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_cyan = new_Symbol(L"cyan");
    // cyan. 
    Send PSend8592 = new_Send((Optr)VAR__receiver__1_0, SMB_cyan, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8593 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8594 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8595 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8591 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8592, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8593, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8594, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8595, (Optr)&t_method_return);
    Block PBlock8589 = new_Block_with(PArray8590, empty_Array, PThreadedCode8591, 4, PSend8592, PSend8593, PSend8594, PSend8595);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8596 = new_Send((Optr)PBlock8589, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8588 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8589, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8596, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8586 = new_Method_with(PArray8587, empty_Array, empty_Array, PThreadedCode8588, 2, PSend8596, self);
    
    MethodClosure MC_SMB_cyan_ = new_MethodClosure((Method)PMethod8586, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan_, MC_SMB_cyan_);
}


static void init_SMB_red() {
    Symbol SMB_red = new_Symbol(L"red");
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_31_Const = new_Constant((Optr)int_31);
    // color:. 
    Send PSend8599 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_31_Const);
    Array PThreadedCode8598 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend8599, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8597 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8598, 2, PSend8599, self);
    
    MethodClosure MC_SMB_red = new_MethodClosure((Method)PMethod8597, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_red, MC_SMB_red);
}


static void init_SMB_insertLine() {
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    String string_8602 = new_String(L"al");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8602_Const = new_Constant((Optr)string_8602);
    // getstr:. 
    Send PSend8603 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8602_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8604 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8603);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend8605 = new_Send((Optr)self, SMB_cr, 0);
    Array PThreadedCode8601 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8602, (Optr)&t_send1, (Optr)PSend8603, (Optr)&t_send1, (Optr)PSend8604, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8605, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8600 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8601, 3, PSend8604, PSend8605, self);
    
    MethodClosure MC_SMB_insertLine = new_MethodClosure((Method)PMethod8600, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertLine, MC_SMB_insertLine);
}


static void init_SMB_blinking() {
    Symbol SMB_blinking = new_Symbol(L"blinking");
    String string_8608 = new_String(L"mb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8608_Const = new_Constant((Optr)string_8608);
    // getstr:. 
    Send PSend8609 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8608_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8610 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8609);
    Array PThreadedCode8607 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8608, (Optr)&t_send1, (Optr)PSend8609, (Optr)&t_send1, (Optr)PSend8610, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8606 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8607, 2, PSend8610, self);
    
    MethodClosure MC_SMB_blinking = new_MethodClosure((Method)PMethod8606, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blinking, MC_SMB_blinking);
}


static void init_SMB_clearToEnd() {
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    String string_8613 = new_String(L"ce");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8613_Const = new_Constant((Optr)string_8613);
    // getstr:. 
    Send PSend8614 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8613_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8615 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8614);
    Array PThreadedCode8612 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8613, (Optr)&t_send1, (Optr)PSend8614, (Optr)&t_send1, (Optr)PSend8615, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8611 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8612, 2, PSend8615, self);
    
    MethodClosure MC_SMB_clearToEnd = new_MethodClosure((Method)PMethod8611, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearToEnd, MC_SMB_clearToEnd);
}


static void init_SMB_pink_() {
    Symbol SMB_pink_ = new_Symbol(L"pink:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8617 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8620 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pink = new_Symbol(L"pink");
    // pink. 
    Send PSend8622 = new_Send((Optr)VAR__receiver__1_0, SMB_pink, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8623 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8624 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8625 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8621 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8622, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8623, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8624, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8625, (Optr)&t_method_return);
    Block PBlock8619 = new_Block_with(PArray8620, empty_Array, PThreadedCode8621, 4, PSend8622, PSend8623, PSend8624, PSend8625);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8626 = new_Send((Optr)PBlock8619, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8618 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8619, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8626, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8616 = new_Method_with(PArray8617, empty_Array, empty_Array, PThreadedCode8618, 2, PSend8626, self);
    
    MethodClosure MC_SMB_pink_ = new_MethodClosure((Method)PMethod8616, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink_, MC_SMB_pink_);
}


static void init_SMB_deleteLine() {
    Symbol SMB_deleteLine = new_Symbol(L"deleteLine");
    String string_8629 = new_String(L"dl");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8629_Const = new_Constant((Optr)string_8629);
    // getstr:. 
    Send PSend8630 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8629_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8631 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8630);
    Array PThreadedCode8628 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8629, (Optr)&t_send1, (Optr)PSend8630, (Optr)&t_send1, (Optr)PSend8631, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8627 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8628, 2, PSend8631, self);
    
    MethodClosure MC_SMB_deleteLine = new_MethodClosure((Method)PMethod8627, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteLine, MC_SMB_deleteLine);
}


static void init_SMB_white() {
    Symbol SMB_white = new_Symbol(L"white");
    SmallInt int_37 = new_SmallInt(37);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_37_Const = new_Constant((Optr)int_37);
    // color:. 
    Send PSend8634 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_37_Const);
    Array PThreadedCode8633 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_37, (Optr)&t_send1, (Optr)PSend8634, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8632 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8633, 2, PSend8634, self);
    
    MethodClosure MC_SMB_white = new_MethodClosure((Method)PMethod8632, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_white, MC_SMB_white);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    String string_8637 = new_String(L"le");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8637_Const = new_Constant((Optr)string_8637);
    // getstr:. 
    Send PSend8638 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8637_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8639 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8638);
    Array PThreadedCode8636 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8637, (Optr)&t_send1, (Optr)PSend8638, (Optr)&t_send1, (Optr)PSend8639, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8635 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8636, 2, PSend8639, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod8635, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_deleteCharacter() {
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    String string_8642 = new_String(L"dc");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8642_Const = new_Constant((Optr)string_8642);
    // getstr:. 
    Send PSend8643 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8642_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8644 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8643);
    Array PThreadedCode8641 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8642, (Optr)&t_send1, (Optr)PSend8643, (Optr)&t_send1, (Optr)PSend8644, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8640 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8641, 2, PSend8644, self);
    
    MethodClosure MC_SMB_deleteCharacter = new_MethodClosure((Method)PMethod8640, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteCharacter, MC_SMB_deleteCharacter);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    String string_8647 = new_String(L"li");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8647_Const = new_Constant((Optr)string_8647);
    // getnum:. 
    Send PSend8648 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8647_Const);
    Array PThreadedCode8646 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8647, (Optr)&t_send1, (Optr)PSend8648, (Optr)&t_method_return);
    Method PMethod8645 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8646, 1, PSend8648);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod8645, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_echo() {
    Symbol SMB_echo = new_Symbol(L"echo");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
    Send PSend8651 = new_Send((Optr)self, SMB_echo_, 1, (Optr)true_Const);
    Array PThreadedCode8650 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend8651, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8649 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8650, 2, PSend8651, self);
    
    MethodClosure MC_SMB_echo = new_MethodClosure((Method)PMethod8649, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo, MC_SMB_echo);
}


static void init_SMB_cursorNormal() {
    Symbol SMB_cursorNormal = new_Symbol(L"cursorNormal");
    String string_8654 = new_String(L"ve");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8654_Const = new_Constant((Optr)string_8654);
    // getstr:. 
    Send PSend8655 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8654_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8656 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8655);
    Array PThreadedCode8653 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8654, (Optr)&t_send1, (Optr)PSend8655, (Optr)&t_send1, (Optr)PSend8656, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8652 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8653, 2, PSend8656, self);
    
    MethodClosure MC_SMB_cursorNormal = new_MethodClosure((Method)PMethod8652, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorNormal, MC_SMB_cursorNormal);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8658 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    // insertMode. 
    Send PSend8660 = new_Send((Optr)self, SMB_insertMode, 0);
    // <<. 
    Send PSend8661 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    // endInsertMode. 
    Send PSend8662 = new_Send((Optr)self, SMB_endInsertMode, 0);
    Array PThreadedCode8659 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8660, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8661, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8662, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8657 = new_Method_with(PArray8658, empty_Array, empty_Array, PThreadedCode8659, 4, PSend8660, PSend8661, PSend8662, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod8657, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_outStream() {
    Symbol SMB_outStream = new_Symbol(L"outStream");
    Array PThreadedCode8664 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_method_return);
    Method PMethod8663 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8664, 1, slot_IO_Term_TermOutputDriver_outStream);
    
    MethodClosure MC_SMB_outStream = new_MethodClosure((Method)PMethod8663, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream, MC_SMB_outStream);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    String string_8667 = new_String(L"nd");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8667_Const = new_Constant((Optr)string_8667);
    // getstr:. 
    Send PSend8668 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8667_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8669 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8668);
    Array PThreadedCode8666 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8667, (Optr)&t_send1, (Optr)PSend8668, (Optr)&t_send1, (Optr)PSend8669, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8665 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8666, 2, PSend8669, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod8665, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_insertMode() {
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    String string_8672 = new_String(L"im");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8672_Const = new_Constant((Optr)string_8672);
    // getstr:. 
    Send PSend8673 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8672_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8674 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8673);
    Array PThreadedCode8671 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8672, (Optr)&t_send1, (Optr)PSend8673, (Optr)&t_send1, (Optr)PSend8674, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8670 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8671, 2, PSend8674, self);
    
    MethodClosure MC_SMB_insertMode = new_MethodClosure((Method)PMethod8670, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertMode, MC_SMB_insertMode);
}


static void init_SMB_scrollBackward() {
    Symbol SMB_scrollBackward = new_Symbol(L"scrollBackward");
    String string_8677 = new_String(L"sr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8677_Const = new_Constant((Optr)string_8677);
    // getstr:. 
    Send PSend8678 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8677_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8679 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8678);
    Array PThreadedCode8676 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8677, (Optr)&t_send1, (Optr)PSend8678, (Optr)&t_send1, (Optr)PSend8679, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8675 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8676, 2, PSend8679, self);
    
    MethodClosure MC_SMB_scrollBackward = new_MethodClosure((Method)PMethod8675, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollBackward, MC_SMB_scrollBackward);
}


static void init_SMB_black_() {
    Symbol SMB_black_ = new_Symbol(L"black:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8681 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8684 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_black = new_Symbol(L"black");
    // black. 
    Send PSend8686 = new_Send((Optr)VAR__receiver__1_0, SMB_black, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8687 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8688 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8689 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8685 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8686, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8687, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8688, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8689, (Optr)&t_method_return);
    Block PBlock8683 = new_Block_with(PArray8684, empty_Array, PThreadedCode8685, 4, PSend8686, PSend8687, PSend8688, PSend8689);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8690 = new_Send((Optr)PBlock8683, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8682 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8683, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8690, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8680 = new_Method_with(PArray8681, empty_Array, empty_Array, PThreadedCode8682, 2, PSend8690, self);
    
    MethodClosure MC_SMB_black_ = new_MethodClosure((Method)PMethod8680, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_black_, MC_SMB_black_);
}


static void init_SMB_green_() {
    Symbol SMB_green_ = new_Symbol(L"green:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8692 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8695 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_green = new_Symbol(L"green");
    // green. 
    Send PSend8697 = new_Send((Optr)VAR__receiver__1_0, SMB_green, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8698 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8699 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8700 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8696 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8697, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8698, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8699, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8700, (Optr)&t_method_return);
    Block PBlock8694 = new_Block_with(PArray8695, empty_Array, PThreadedCode8696, 4, PSend8697, PSend8698, PSend8699, PSend8700);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8701 = new_Send((Optr)PBlock8694, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8693 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8694, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8701, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8691 = new_Method_with(PArray8692, empty_Array, empty_Array, PThreadedCode8693, 2, PSend8701, self);
    
    MethodClosure MC_SMB_green_ = new_MethodClosure((Method)PMethod8691, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_green_, MC_SMB_green_);
}


static void init_SMB_scrollForward() {
    Symbol SMB_scrollForward = new_Symbol(L"scrollForward");
    String string_8704 = new_String(L"sf");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8704_Const = new_Constant((Optr)string_8704);
    // getstr:. 
    Send PSend8705 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8704_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8706 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8705);
    Array PThreadedCode8703 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8704, (Optr)&t_send1, (Optr)PSend8705, (Optr)&t_send1, (Optr)PSend8706, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8702 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8703, 2, PSend8706, self);
    
    MethodClosure MC_SMB_scrollForward = new_MethodClosure((Method)PMethod8702, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollForward, MC_SMB_scrollForward);
}


static void init_SMB_overwrite_() {
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray8708 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8710 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_char_0_0);
    Array PThreadedCode8709 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send1, (Optr)PSend8710, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8707 = new_Method_with(PArray8708, empty_Array, empty_Array, PThreadedCode8709, 2, PSend8710, self);
    
    MethodClosure MC_SMB_overwrite_ = new_MethodClosure((Method)PMethod8707, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_overwrite_, MC_SMB_overwrite_);
}


static void init_SMB_pink() {
    Symbol SMB_pink = new_Symbol(L"pink");
    SmallInt int_35 = new_SmallInt(35);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_35_Const = new_Constant((Optr)int_35);
    // color:. 
    Send PSend8713 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_35_Const);
    Array PThreadedCode8712 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_35, (Optr)&t_send1, (Optr)PSend8713, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8711 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8712, 2, PSend8713, self);
    
    MethodClosure MC_SMB_pink = new_MethodClosure((Method)PMethod8711, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink, MC_SMB_pink);
}


static void init_SMB_reverse() {
    Symbol SMB_reverse = new_Symbol(L"reverse");
    String string_8716 = new_String(L"mr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8716_Const = new_Constant((Optr)string_8716);
    // getstr:. 
    Send PSend8717 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8716_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8718 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8717);
    Array PThreadedCode8715 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8716, (Optr)&t_send1, (Optr)PSend8717, (Optr)&t_send1, (Optr)PSend8718, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8714 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8715, 2, PSend8718, self);
    
    MethodClosure MC_SMB_reverse = new_MethodClosure((Method)PMethod8714, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_reverse, MC_SMB_reverse);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    String string_8721 = new_String(L"cr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8721_Const = new_Constant((Optr)string_8721);
    // getstr:. 
    Send PSend8722 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8721_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8723 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8722);
    Array PThreadedCode8720 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8721, (Optr)&t_send1, (Optr)PSend8722, (Optr)&t_send1, (Optr)PSend8723, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8719 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8720, 2, PSend8723, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod8719, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend8726 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_tab, 0);
    Array PThreadedCode8725 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8726, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8724 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8725, 2, PSend8726, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod8724, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_erase() {
    Symbol SMB_erase = new_Symbol(L"erase");
    String string_8729 = new_String(L"1");
    String string_8730 = new_String(L"ec");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8730_Const = new_Constant((Optr)string_8730);
    // getstr:. 
    Send PSend8731 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8730_Const);
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Constant string_8729_Const = new_Constant((Optr)string_8729);
    // parm:in:. 
    Send PSend8732 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_parm_in_, 2, (Optr)string_8729_Const, (Optr)PSend8731);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8733 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8732);
    Array PThreadedCode8728 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8729, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8730, (Optr)&t_send1, (Optr)PSend8731, (Optr)&t_send2, (Optr)PSend8732, (Optr)&t_send1, (Optr)PSend8733, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8727 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8728, 2, PSend8733, self);
    
    MethodClosure MC_SMB_erase = new_MethodClosure((Method)PMethod8727, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_erase, MC_SMB_erase);
}


static void init_SMB_blue() {
    Symbol SMB_blue = new_Symbol(L"blue");
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_34_Const = new_Constant((Optr)int_34);
    // color:. 
    Send PSend8736 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_34_Const);
    Array PThreadedCode8735 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_34, (Optr)&t_send1, (Optr)PSend8736, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8734 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8735, 2, PSend8736, self);
    
    MethodClosure MC_SMB_blue = new_MethodClosure((Method)PMethod8734, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue, MC_SMB_blue);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8739 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8740 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8738 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8739, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8740, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8737 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8738, 3, PSend8739, PSend8740, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod8737, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend8743 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_lf, 0);
    Array PThreadedCode8742 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8743, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8741 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8742, 2, PSend8743, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod8741, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_width() {
    Symbol SMB_width = new_Symbol(L"width");
    Array PThreadedCode8745 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8744 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8745, 1, self);
    
    MethodClosure MC_SMB_width = new_MethodClosure((Method)PMethod8744, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_width, MC_SMB_width);
}


static void init_SMB_white_() {
    Symbol SMB_white_ = new_Symbol(L"white:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8747 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8750 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_white = new_Symbol(L"white");
    // white. 
    Send PSend8752 = new_Send((Optr)VAR__receiver__1_0, SMB_white, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8753 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8754 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8755 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8751 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8752, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8753, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8754, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8755, (Optr)&t_method_return);
    Block PBlock8749 = new_Block_with(PArray8750, empty_Array, PThreadedCode8751, 4, PSend8752, PSend8753, PSend8754, PSend8755);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8756 = new_Send((Optr)PBlock8749, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8748 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8749, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8756, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8746 = new_Method_with(PArray8747, empty_Array, empty_Array, PThreadedCode8748, 2, PSend8756, self);
    
    MethodClosure MC_SMB_white_ = new_MethodClosure((Method)PMethod8746, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_white_, MC_SMB_white_);
}


static void init_SMB_cursorEnhanced() {
    Symbol SMB_cursorEnhanced = new_Symbol(L"cursorEnhanced");
    String string_8759 = new_String(L"vs");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8759_Const = new_Constant((Optr)string_8759);
    // getstr:. 
    Send PSend8760 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8759_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8761 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8760);
    Array PThreadedCode8758 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8759, (Optr)&t_send1, (Optr)PSend8760, (Optr)&t_send1, (Optr)PSend8761, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8757 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8758, 2, PSend8761, self);
    
    MethodClosure MC_SMB_cursorEnhanced = new_MethodClosure((Method)PMethod8757, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorEnhanced, MC_SMB_cursorEnhanced);
}


static void init_SMB_endInsertMode() {
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    String string_8764 = new_String(L"ei");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8764_Const = new_Constant((Optr)string_8764);
    // getstr:. 
    Send PSend8765 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8764_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8766 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8765);
    Array PThreadedCode8763 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8764, (Optr)&t_send1, (Optr)PSend8765, (Optr)&t_send1, (Optr)PSend8766, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8762 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8763, 2, PSend8766, self);
    
    MethodClosure MC_SMB_endInsertMode = new_MethodClosure((Method)PMethod8762, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_endInsertMode, MC_SMB_endInsertMode);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    String string_8769 = new_String(L"up");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8769_Const = new_Constant((Optr)string_8769);
    // getstr:. 
    Send PSend8770 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8769_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8771 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8770);
    Array PThreadedCode8768 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8769, (Optr)&t_send1, (Optr)PSend8770, (Optr)&t_send1, (Optr)PSend8771, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8767 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8768, 2, PSend8771, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod8767, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_blue_() {
    Symbol SMB_blue_ = new_Symbol(L"blue:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8773 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8776 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_blue = new_Symbol(L"blue");
    // blue. 
    Send PSend8778 = new_Send((Optr)VAR__receiver__1_0, SMB_blue, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8779 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8780 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8781 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8777 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8778, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8779, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8780, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8781, (Optr)&t_method_return);
    Block PBlock8775 = new_Block_with(PArray8776, empty_Array, PThreadedCode8777, 4, PSend8778, PSend8779, PSend8780, PSend8781);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8782 = new_Send((Optr)PBlock8775, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8774 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8775, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8782, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8772 = new_Method_with(PArray8773, empty_Array, empty_Array, PThreadedCode8774, 2, PSend8782, self);
    
    MethodClosure MC_SMB_blue_ = new_MethodClosure((Method)PMethod8772, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue_, MC_SMB_blue_);
}


static void init_SMB_clearFromBeginning() {
    Symbol SMB_clearFromBeginning = new_Symbol(L"clearFromBeginning");
    String string_8785 = new_String(L"cb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8785_Const = new_Constant((Optr)string_8785);
    // getstr:. 
    Send PSend8786 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8785_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8787 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8786);
    Array PThreadedCode8784 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8785, (Optr)&t_send1, (Optr)PSend8786, (Optr)&t_send1, (Optr)PSend8787, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8783 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8784, 2, PSend8787, self);
    
    MethodClosure MC_SMB_clearFromBeginning = new_MethodClosure((Method)PMethod8783, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearFromBeginning, MC_SMB_clearFromBeginning);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend8790 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_space, 0);
    Array PThreadedCode8789 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8790, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8788 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8789, 2, PSend8790, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod8788, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_echo_() {
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    Variable VAR_aBool_0_0 = new_Variable_named(L"aBool", 0);
    Array PArray8792 = new_Array_with(1, (Optr)VAR_aBool_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8795 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8797 = new_Send((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8801 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8800 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8801, (Optr)&t_block_return);
    Block PBlock8799 = new_Block_with(empty_Array, empty_Array, PThreadedCode8800, 1, PSend8801);
    // ifTrue:. 
    Send PSend8798 = new_Send((Optr)PSend8797, SMB_ifTrue_, 1, (Optr)PBlock8799);
    Assign PAssign8802 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)VAR_aBool_0_0);
    Symbol  SMB_echo = new_Symbol(L"echo");
    Symbol SMB_enable_ = new_Symbol(L"enable:");
    Constant SMB_echo_Const = new_Constant((Optr)SMB_echo);
    // enable:. 
    Send PSend8803 = new_Send((Optr)self, SMB_enable_, 1, (Optr)SMB_echo_Const);
    Array PThreadedCode8796 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend8797, (Optr)&t_send_ifTrue_, (Optr)PSend8798, (Optr)PBlock8799, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8802, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_echo, (Optr)&t_send1, (Optr)PSend8803, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8794 = new_Block_with(PArray8795, empty_Array, PThreadedCode8796, 4, PSend8798, PAssign8802, PSend8803, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8804 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8794);
    Array PThreadedCode8793 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8794, (Optr)&t_send1, (Optr)PSend8804, (Optr)&t_method_return);
    Method PMethod8791 = new_Method_with(PArray8792, empty_Array, empty_Array, PThreadedCode8793, 1, PSend8804);
    
    MethodClosure MC_SMB_echo_ = new_MethodClosure((Method)PMethod8791, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo_, MC_SMB_echo_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8807 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_flush, 0);
    Array PThreadedCode8806 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8807, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8805 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8806, 2, PSend8807, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod8805, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_cyan() {
    Symbol SMB_cyan = new_Symbol(L"cyan");
    SmallInt int_36 = new_SmallInt(36);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_36_Const = new_Constant((Optr)int_36);
    // color:. 
    Send PSend8810 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_36_Const);
    Array PThreadedCode8809 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_36, (Optr)&t_send1, (Optr)PSend8810, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8808 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8809, 2, PSend8810, self);
    
    MethodClosure MC_SMB_cyan = new_MethodClosure((Method)PMethod8808, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan, MC_SMB_cyan);
}


static void init_SMB_red_() {
    Symbol SMB_red_ = new_Symbol(L"red:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8812 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8815 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend8817 = new_Send((Optr)VAR__receiver__1_0, SMB_red, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8818 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8819 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8820 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8816 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8817, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8818, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8819, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8820, (Optr)&t_method_return);
    Block PBlock8814 = new_Block_with(PArray8815, empty_Array, PThreadedCode8816, 4, PSend8817, PSend8818, PSend8819, PSend8820);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8821 = new_Send((Optr)PBlock8814, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8813 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8814, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8821, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8811 = new_Method_with(PArray8812, empty_Array, empty_Array, PThreadedCode8813, 2, PSend8821, self);
    
    MethodClosure MC_SMB_red_ = new_MethodClosure((Method)PMethod8811, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_red_, MC_SMB_red_);
}


static void init_SMB_errorColor() {
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend8824 = new_Send((Optr)self, SMB_red, 0);
    Symbol SMB_reverse = new_Symbol(L"reverse");
    // reverse. 
    Send PSend8825 = new_Send((Optr)self, SMB_reverse, 0);
    Array PThreadedCode8823 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8824, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8825, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8822 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8823, 3, PSend8824, PSend8825, self);
    
    MethodClosure MC_SMB_errorColor = new_MethodClosure((Method)PMethod8822, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_errorColor, MC_SMB_errorColor);
}


static void init_SMB_ss3Escape() {
    Symbol SMB_ss3Escape = new_Symbol(L"ss3Escape");
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend8828 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8829 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8828);
    Character char_8830 = new_Character(L'O');
    Constant char_8830_Const = new_Constant((Optr)char_8830);
    // <<. 
    Send PSend8831 = new_Send((Optr)PSend8829, SMB__shiftLeft_, 1, (Optr)char_8830_Const);
    Array PThreadedCode8827 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8828, (Optr)&t_send1, (Optr)PSend8829, (Optr)&t_push1, (Optr)char_8830, (Optr)&t_send1, (Optr)PSend8831, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8826 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8827, 2, PSend8831, self);
    
    MethodClosure MC_SMB_ss3Escape = new_MethodClosure((Method)PMethod8826, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_ss3Escape, MC_SMB_ss3Escape);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend8834 = new_Send((Optr)Character_classReference, SMB_backspace, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8835 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8834);
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend8836 = new_Send((Optr)self, SMB_deleteCharacter, 0);
    Array PThreadedCode8833 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8834, (Optr)&t_send1, (Optr)PSend8835, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8836, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8832 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8833, 3, PSend8835, PSend8836, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod8832, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_class_SMB_stderr() {
    Symbol SMB_stderr = new_Symbol(L"stderr");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8842 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign8841 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)PSend8842);
    // stderr. 
    Send PSend8843 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend8844 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_outStream_, 1, (Optr)PSend8843);
    Array PThreadedCode8840 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8841, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend8842, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8843, (Optr)&t_send1, (Optr)PSend8844, (Optr)&t_block_return);
    Block PBlock8839 = new_Block_with(empty_Array, empty_Array, PThreadedCode8840, 2, PAssign8841, PSend8844);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8845 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock8839);
    Array PThreadedCode8838 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock8839, (Optr)&t_send1, (Optr)PSend8845, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_method_return);
    Method PMethod8837 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8838, 2, PSend8845, slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PMethod8837, HEADER(IO_Term_TermOutputDriver_Class));
    store_method(HEADER(IO_Term_TermOutputDriver_Class), SMB_stderr, MC_SMB_stderr);
}


static void init_class_SMB_stdout() {
    Symbol SMB_stdout = new_Symbol(L"stdout");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8851 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign8850 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)PSend8851);
    // stdout. 
    Send PSend8852 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend8853 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_outStream_, 1, (Optr)PSend8852);
    Array PThreadedCode8849 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8850, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend8851, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8852, (Optr)&t_send1, (Optr)PSend8853, (Optr)&t_block_return);
    Block PBlock8848 = new_Block_with(empty_Array, empty_Array, PThreadedCode8849, 2, PAssign8850, PSend8853);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8854 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock8848);
    Array PThreadedCode8847 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock8848, (Optr)&t_send1, (Optr)PSend8854, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_method_return);
    Method PMethod8846 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8847, 2, PSend8854, slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PMethod8846, HEADER(IO_Term_TermOutputDriver_Class));
    store_method(HEADER(IO_Term_TermOutputDriver_Class), SMB_stdout, MC_SMB_stdout);
}

void init_IO_Term_PVTermOutputDriver_layout() {
    slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance = (Optr)new_Slot(5, L"stdoutTerminalInstance");
    slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance = (Optr)new_Slot(6, L"stderrTerminalInstance");
    layout_IO_Term_TermOutputDriver_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[5] = slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance; // stdoutTerminalInstance 
    ((Array)layout_IO_Term_TermOutputDriver_Class_class)->values[6] = slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance; // stderrTerminalInstance 
    
    Symbol  SMB_TermOutputDriver = new_Symbol(L"TermOutputDriver");
    slot_IO_Term_TermOutputDriver_termcap = (Optr)new_Slot(0, L"termcap");
    slot_IO_Term_TermOutputDriver_outStream = (Optr)new_Slot(1, L"outStream");
    slot_IO_Term_TermOutputDriver_currentBackground = (Optr)new_Slot(2, L"currentBackground");
    slot_IO_Term_TermOutputDriver_currentColor = (Optr)new_Slot(3, L"currentColor");
    slot_IO_Term_TermOutputDriver_light = (Optr)new_Slot(4, L"light");
    slot_IO_Term_TermOutputDriver_blink = (Optr)new_Slot(5, L"blink");
    slot_IO_Term_TermOutputDriver_shouldEcho = (Optr)new_Slot(6, L"shouldEcho");
    layout_IO_Term_TermOutputDriver = (Optr)create_layout_with_vars(ObjectLayout_Class, 7);
    ((Array)layout_IO_Term_TermOutputDriver)->values[0] = slot_IO_Term_TermOutputDriver_termcap; // termcap 
    ((Array)layout_IO_Term_TermOutputDriver)->values[1] = slot_IO_Term_TermOutputDriver_outStream; // outStream 
    ((Array)layout_IO_Term_TermOutputDriver)->values[2] = slot_IO_Term_TermOutputDriver_currentBackground; // currentBackground 
    ((Array)layout_IO_Term_TermOutputDriver)->values[3] = slot_IO_Term_TermOutputDriver_currentColor; // currentColor 
    ((Array)layout_IO_Term_TermOutputDriver)->values[4] = slot_IO_Term_TermOutputDriver_light; // light 
    ((Array)layout_IO_Term_TermOutputDriver)->values[5] = slot_IO_Term_TermOutputDriver_blink; // blink 
    ((Array)layout_IO_Term_TermOutputDriver)->values[6] = slot_IO_Term_TermOutputDriver_shouldEcho; // shouldEcho 
    IO_Term_TermOutputDriver_Class = (Class)new_Class(Object_Class, layout_IO_Term_TermOutputDriver_Class_class);
    IO_Term_TermOutputDriver_Class->layout = layout_IO_Term_TermOutputDriver;
    IO_Term_TermOutputDriver_Class->name = SMB_TermOutputDriver;
    
}

void init_IO_Term_PVTermOutputDriver_methods() {
    init_SMB_csiEscape();
    init_SMB_outStream_();
    init_SMB_escape();
    init_SMB_light();
    init_SMB_normal();
    init_SMB_color_();
    init_SMB_underlineOff();
    init_SMB_bold();
    init_SMB_initialize();
    init_SMB_insertCharacter();
    init_SMB_cursorInvisible();
    init_SMB_here();
    init_SMB_home();
    init_SMB_yellow();
    init_SMB_colorEscape();
    init_SMB_noEcho();
    init_SMB_black();
    init_SMB_green();
    init_SMB_underline();
    init_SMB_invisible();
    init_SMB_reset();
    init_SMB_yellow_();
    init_SMB_down();
    init_SMB_columns();
    init_SMB_cyan_();
    init_SMB_red();
    init_SMB_insertLine();
    init_SMB_blinking();
    init_SMB_clearToEnd();
    init_SMB_pink_();
    init_SMB_deleteLine();
    init_SMB_white();
    init_SMB_left();
    init_SMB_deleteCharacter();
    init_SMB_lines();
    init_SMB_echo();
    init_SMB_cursorNormal();
    init_SMB__shiftLeft_();
    init_SMB_outStream();
    init_SMB_right();
    init_SMB_insertMode();
    init_SMB_scrollBackward();
    init_SMB_black_();
    init_SMB_green_();
    init_SMB_scrollForward();
    init_SMB_overwrite_();
    init_SMB_pink();
    init_SMB_reverse();
    init_SMB_cr();
    init_SMB_tab();
    init_SMB_erase();
    init_SMB_blue();
    init_SMB_clear();
    init_SMB_lf();
    init_SMB_width();
    init_SMB_white_();
    init_SMB_cursorEnhanced();
    init_SMB_endInsertMode();
    init_SMB_up();
    init_SMB_blue_();
    init_SMB_clearFromBeginning();
    init_SMB_space();
    init_SMB_echo_();
    init_SMB_flush();
    init_SMB_cyan();
    init_SMB_red_();
    init_SMB_errorColor();
    init_SMB_ss3Escape();
    init_SMB_backspace();
    init_class_SMB_stderr();
    init_class_SMB_stdout();
    
}