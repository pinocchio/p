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
    Send PSend8410 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8411 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8410);
    Character char_8412 = new_Character(L'[');
    Constant char_8412_Const = new_Constant((Optr)char_8412);
    // <<. 
    Send PSend8413 = new_Send((Optr)PSend8411, SMB__shiftLeft_, 1, (Optr)char_8412_Const);
    Array PThreadedCode8409 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8410, (Optr)&t_send1, (Optr)PSend8411, (Optr)&t_push1, (Optr)char_8412, (Optr)&t_send1, (Optr)PSend8413, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8408 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8409, 2, PSend8413, self);
    
    MethodClosure MC_SMB_csiEscape = new_MethodClosure((Method)PMethod8408, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_csiEscape, MC_SMB_csiEscape);
}


static void init_SMB_outStream_() {
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    Variable VAR_stream_0_0 = new_Variable_named(L"stream", 0);
    Array PArray8415 = new_Array_with(1, (Optr)VAR_stream_0_0);
    Assign PAssign8417 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)VAR_stream_0_0);
    Array PThreadedCode8416 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign8417, (Optr)&t_push_variable, (Optr)VAR_stream_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8414 = new_Method_with(PArray8415, empty_Array, empty_Array, PThreadedCode8416, 2, PAssign8417, self);
    
    MethodClosure MC_SMB_outStream_ = new_MethodClosure((Method)PMethod8414, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream_, MC_SMB_outStream_);
}


static void init_SMB_escape() {
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend8420 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8421 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8420);
    Array PThreadedCode8419 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8420, (Optr)&t_send1, (Optr)PSend8421, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8418 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8419, 2, PSend8421, self);
    
    MethodClosure MC_SMB_escape = new_MethodClosure((Method)PMethod8418, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_escape, MC_SMB_escape);
}


static void init_SMB_light() {
    Symbol SMB_light = new_Symbol(L"light");
    Assign PAssign8424 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)true_Const);
    Array PThreadedCode8423 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push1, (Optr)PAssign8424, (Optr)&t_push_true, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8422 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8423, 2, PAssign8424, self);
    
    MethodClosure MC_SMB_light = new_MethodClosure((Method)PMethod8422, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_light, MC_SMB_light);
}


static void init_SMB_normal() {
    Symbol SMB_normal = new_Symbol(L"normal");
    String string_8427 = new_String(L"me");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8427_Const = new_Constant((Optr)string_8427);
    // getstr:. 
    Send PSend8428 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8427_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8429 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8428);
    Array PThreadedCode8426 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8427, (Optr)&t_send1, (Optr)PSend8428, (Optr)&t_send1, (Optr)PSend8429, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8425 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8426, 2, PSend8429, self);
    
    MethodClosure MC_SMB_normal = new_MethodClosure((Method)PMethod8425, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_normal, MC_SMB_normal);
}


static void init_SMB_color_() {
    Symbol SMB_color_ = new_Symbol(L"color:");
    Variable VAR_aColor_0_0 = new_Variable_named(L"aColor", 0);
    Array PArray8431 = new_Array_with(1, (Optr)VAR_aColor_0_0);
    Assign PAssign8433 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)VAR_aColor_0_0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8434 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8432 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push1, (Optr)PAssign8433, (Optr)&t_push_variable, (Optr)VAR_aColor_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8434, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8430 = new_Method_with(PArray8431, empty_Array, empty_Array, PThreadedCode8432, 3, PAssign8433, PSend8434, self);
    
    MethodClosure MC_SMB_color_ = new_MethodClosure((Method)PMethod8430, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_color_, MC_SMB_color_);
}


static void init_SMB_underlineOff() {
    Symbol SMB_underlineOff = new_Symbol(L"underlineOff");
    String string_8437 = new_String(L"ue");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8437_Const = new_Constant((Optr)string_8437);
    // getstr:. 
    Send PSend8438 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8437_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8439 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8438);
    Array PThreadedCode8436 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8437, (Optr)&t_send1, (Optr)PSend8438, (Optr)&t_send1, (Optr)PSend8439, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8435 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8436, 2, PSend8439, self);
    
    MethodClosure MC_SMB_underlineOff = new_MethodClosure((Method)PMethod8435, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_underlineOff, MC_SMB_underlineOff);
}


static void init_SMB_bold() {
    Symbol SMB_bold = new_Symbol(L"bold");
    String string_8442 = new_String(L"md");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8442_Const = new_Constant((Optr)string_8442);
    // getstr:. 
    Send PSend8443 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8442_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8444 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8443);
    Array PThreadedCode8441 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8442, (Optr)&t_send1, (Optr)PSend8443, (Optr)&t_send1, (Optr)PSend8444, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8440 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8441, 2, PSend8444, self);
    
    MethodClosure MC_SMB_bold = new_MethodClosure((Method)PMethod8440, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_bold, MC_SMB_bold);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Super PSuper8447 = new_Super(SMB_initialize, 0);
    Symbol SMB_instance = new_Symbol(L"instance");
    // instance. 
    Send PSend8449 = new_Send((Optr)PTermcap_classReference, SMB_instance, 0);
    Assign PAssign8448 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)PSend8449);
    Symbol SMB_stdout = new_Symbol(L"stdout");
    // stdout. 
    Send PSend8451 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Assign PAssign8450 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)PSend8451);
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8452 = new_Send((Optr)self, SMB_reset, 0);
    Array PThreadedCode8446 = instantiate_Array_with(ThreadedCode_Class, 0, 25, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper8447, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8448, (Optr)&t_push_class_reference, (Optr)PTermcap_classReference, (Optr)&t_send0, (Optr)PSend8449, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8450, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8451, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8452, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8445 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8446, 5, PSuper8447, PAssign8448, PAssign8450, PSend8452, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod8445, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_insertCharacter() {
    Symbol SMB_insertCharacter = new_Symbol(L"insertCharacter");
    String string_8455 = new_String(L"ic");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8455_Const = new_Constant((Optr)string_8455);
    // getstr:. 
    Send PSend8456 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8455_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8457 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8456);
    Array PThreadedCode8454 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8455, (Optr)&t_send1, (Optr)PSend8456, (Optr)&t_send1, (Optr)PSend8457, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8453 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8454, 2, PSend8457, self);
    
    MethodClosure MC_SMB_insertCharacter = new_MethodClosure((Method)PMethod8453, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertCharacter, MC_SMB_insertCharacter);
}


static void init_SMB_cursorInvisible() {
    Symbol SMB_cursorInvisible = new_Symbol(L"cursorInvisible");
    String string_8460 = new_String(L"vi");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8460_Const = new_Constant((Optr)string_8460);
    // getstr:. 
    Send PSend8461 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8460_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8462 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8461);
    Array PThreadedCode8459 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8460, (Optr)&t_send1, (Optr)PSend8461, (Optr)&t_send1, (Optr)PSend8462, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8458 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8459, 2, PSend8462, self);
    
    MethodClosure MC_SMB_cursorInvisible = new_MethodClosure((Method)PMethod8458, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorInvisible, MC_SMB_cursorInvisible);
}


static void init_SMB_here() {
    Symbol SMB_here = new_Symbol(L"here");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8465 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8466 = new_Character(L'E');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8466_Const = new_Constant((Optr)char_8466);
    // <<. 
    Send PSend8467 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8466_Const);
    Array PThreadedCode8464 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8465, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8466, (Optr)&t_send1, (Optr)PSend8467, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8463 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8464, 3, PSend8465, PSend8467, self);
    
    MethodClosure MC_SMB_here = new_MethodClosure((Method)PMethod8463, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_here, MC_SMB_here);
}


static void init_SMB_home() {
    Symbol SMB_home = new_Symbol(L"home");
    String string_8470 = new_String(L"ho");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8470_Const = new_Constant((Optr)string_8470);
    // getstr:. 
    Send PSend8471 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8470_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8472 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8471);
    Array PThreadedCode8469 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8470, (Optr)&t_send1, (Optr)PSend8471, (Optr)&t_send1, (Optr)PSend8472, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8468 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8469, 2, PSend8472, self);
    
    MethodClosure MC_SMB_home = new_MethodClosure((Method)PMethod8468, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_home, MC_SMB_home);
}


static void init_SMB_yellow() {
    Symbol SMB_yellow = new_Symbol(L"yellow");
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_33_Const = new_Constant((Optr)int_33);
    // color:. 
    Send PSend8475 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_33_Const);
    Array PThreadedCode8474 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_33, (Optr)&t_send1, (Optr)PSend8475, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8473 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8474, 2, PSend8475, self);
    
    MethodClosure MC_SMB_yellow = new_MethodClosure((Method)PMethod8473, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow, MC_SMB_yellow);
}


static void init_SMB_colorEscape() {
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8478 = new_Send((Optr)self, SMB_csiEscape, 0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    String string_8482 = new_String(L"5;");
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant string_8482_Const = new_Constant((Optr)string_8482);
    // <<. 
    Send PSend8483 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)string_8482_Const);
    Array PThreadedCode8481 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)string_8482, (Optr)&t_send1, (Optr)PSend8483, (Optr)&t_block_return);
    Block PBlock8480 = new_Block_with(empty_Array, empty_Array, PThreadedCode8481, 1, PSend8483);
    // ifTrue:. 
    Send PSend8479 = new_Send((Optr)slot_IO_Term_TermOutputDriver_blink, SMB_ifTrue_, 1, (Optr)PBlock8480);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend8484 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentColor, SMB_asString, 0);
    // <<. 
    Send PSend8485 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8484);
    Symbol SMB__pequals_ = new_Symbol(L"==");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    // ==. 
    Send PSend8486 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB__pequals_, 1, (Optr)int_0_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    Character char_8490 = new_Character(L';');
    Constant char_8490_Const = new_Constant((Optr)char_8490);
    // <<. 
    Send PSend8491 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8490_Const);
    // asString. 
    Send PSend8492 = new_Send((Optr)slot_IO_Term_TermOutputDriver_currentBackground, SMB_asString, 0);
    // <<. 
    Send PSend8493 = new_Send((Optr)PSend8491, SMB__shiftLeft_, 1, (Optr)PSend8492);
    Array PThreadedCode8489 = instantiate_Array_with(ThreadedCode_Class, 0, 13, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8490, (Optr)&t_send1, (Optr)PSend8491, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_send0, (Optr)PSend8492, (Optr)&t_send1, (Optr)PSend8493, (Optr)&t_block_return);
    Block PBlock8488 = new_Block_with(empty_Array, empty_Array, PThreadedCode8489, 1, PSend8493);
    // ifFalse:. 
    Send PSend8487 = new_Send((Optr)PSend8486, SMB_ifFalse_, 1, (Optr)PBlock8488);
    Character char_8494 = new_Character(L'm');
    Constant char_8494_Const = new_Constant((Optr)char_8494);
    // <<. 
    Send PSend8495 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8494_Const);
    Array PThreadedCode8477 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8478, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)&t_send_ifTrue_, (Optr)PSend8479, (Optr)PBlock8480, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)&t_send0, (Optr)PSend8484, (Optr)&t_send1, (Optr)PSend8485, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)&t_push_0, (Optr)&t_send1, (Optr)PSend8486, (Optr)&t_send_ifFalse_, (Optr)PSend8487, (Optr)PBlock8488, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8494, (Optr)&t_send1, (Optr)PSend8495, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8476 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8477, 6, PSend8478, PSend8479, PSend8485, PSend8487, PSend8495, self);
    
    MethodClosure MC_SMB_colorEscape = new_MethodClosure((Method)PMethod8476, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_colorEscape, MC_SMB_colorEscape);
}


static void init_SMB_noEcho() {
    Symbol SMB_noEcho = new_Symbol(L"noEcho");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
    Send PSend8498 = new_Send((Optr)self, SMB_echo_, 1, (Optr)false_Const);
    Array PThreadedCode8497 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_false, (Optr)&t_send1, (Optr)PSend8498, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8496 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8497, 2, PSend8498, self);
    
    MethodClosure MC_SMB_noEcho = new_MethodClosure((Method)PMethod8496, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_noEcho, MC_SMB_noEcho);
}


static void init_SMB_black() {
    Symbol SMB_black = new_Symbol(L"black");
    SmallInt int_30 = new_SmallInt(30);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_30_Const = new_Constant((Optr)int_30);
    // color:. 
    Send PSend8501 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_30_Const);
    Array PThreadedCode8500 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_30, (Optr)&t_send1, (Optr)PSend8501, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8499 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8500, 2, PSend8501, self);
    
    MethodClosure MC_SMB_black = new_MethodClosure((Method)PMethod8499, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_black, MC_SMB_black);
}


static void init_SMB_green() {
    Symbol SMB_green = new_Symbol(L"green");
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_32_Const = new_Constant((Optr)int_32);
    // color:. 
    Send PSend8504 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_32_Const);
    Array PThreadedCode8503 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_32, (Optr)&t_send1, (Optr)PSend8504, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8502 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8503, 2, PSend8504, self);
    
    MethodClosure MC_SMB_green = new_MethodClosure((Method)PMethod8502, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_green, MC_SMB_green);
}


static void init_SMB_underline() {
    Symbol SMB_underline = new_Symbol(L"underline");
    String string_8507 = new_String(L"us");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8507_Const = new_Constant((Optr)string_8507);
    // getstr:. 
    Send PSend8508 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8507_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8509 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8508);
    Array PThreadedCode8506 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8507, (Optr)&t_send1, (Optr)PSend8508, (Optr)&t_send1, (Optr)PSend8509, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8505 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8506, 2, PSend8509, self);
    
    MethodClosure MC_SMB_underline = new_MethodClosure((Method)PMethod8505, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_underline, MC_SMB_underline);
}


static void init_SMB_invisible() {
    Symbol SMB_invisible = new_Symbol(L"invisible");
    String string_8512 = new_String(L"mk");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8512_Const = new_Constant((Optr)string_8512);
    // getstr:. 
    Send PSend8513 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8512_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8514 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8513);
    Array PThreadedCode8511 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8512, (Optr)&t_send1, (Optr)PSend8513, (Optr)&t_send1, (Optr)PSend8514, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8510 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8511, 2, PSend8514, self);
    
    MethodClosure MC_SMB_invisible = new_MethodClosure((Method)PMethod8510, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_invisible, MC_SMB_invisible);
}


static void init_SMB_reset() {
    Symbol SMB_reset = new_Symbol(L"reset");
    SmallInt int_0 = new_SmallInt(0);
    Constant int_0_Const = new_Constant((Optr)int_0);
    Assign PAssign8517 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentColor, (Optr)int_0_Const);
    Assign PAssign8518 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_currentBackground, (Optr)int_0_Const);
    Assign PAssign8519 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_light, (Optr)false_Const);
    Assign PAssign8520 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_blink, (Optr)false_Const);
    Array PThreadedCode8516 = instantiate_Array_with(ThreadedCode_Class, 0, 21, (Optr)&t_push1, (Optr)PAssign8517, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8518, (Optr)&t_push_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8519, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8520, (Optr)&t_push_false, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8515 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8516, 5, PAssign8517, PAssign8518, PAssign8519, PAssign8520, self);
    
    MethodClosure MC_SMB_reset = new_MethodClosure((Method)PMethod8515, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_reset, MC_SMB_reset);
}


static void init_SMB_yellow_() {
    Symbol SMB_yellow_ = new_Symbol(L"yellow:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8522 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8525 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_yellow = new_Symbol(L"yellow");
    // yellow. 
    Send PSend8527 = new_Send((Optr)VAR__receiver__1_0, SMB_yellow, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8528 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8529 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8530 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8526 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8527, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8528, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8529, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8530, (Optr)&t_method_return);
    Block PBlock8524 = new_Block_with(PArray8525, empty_Array, PThreadedCode8526, 4, PSend8527, PSend8528, PSend8529, PSend8530);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8531 = new_Send((Optr)PBlock8524, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8523 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8524, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8531, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8521 = new_Method_with(PArray8522, empty_Array, empty_Array, PThreadedCode8523, 2, PSend8531, self);
    
    MethodClosure MC_SMB_yellow_ = new_MethodClosure((Method)PMethod8521, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_yellow_, MC_SMB_yellow_);
}


static void init_SMB_down() {
    Symbol SMB_down = new_Symbol(L"down");
    Symbol SMB_csiEscape = new_Symbol(L"csiEscape");
    // csiEscape. 
    Send PSend8534 = new_Send((Optr)self, SMB_csiEscape, 0);
    Character char_8535 = new_Character(L'B');
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Constant char_8535_Const = new_Constant((Optr)char_8535);
    // <<. 
    Send PSend8536 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)char_8535_Const);
    Array PThreadedCode8533 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8534, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push1, (Optr)char_8535, (Optr)&t_send1, (Optr)PSend8536, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8532 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8533, 3, PSend8534, PSend8536, self);
    
    MethodClosure MC_SMB_down = new_MethodClosure((Method)PMethod8532, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_down, MC_SMB_down);
}


static void init_SMB_columns() {
    Symbol SMB_columns = new_Symbol(L"columns");
    String string_8539 = new_String(L"co");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8539_Const = new_Constant((Optr)string_8539);
    // getnum:. 
    Send PSend8540 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8539_Const);
    Array PThreadedCode8538 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8539, (Optr)&t_send1, (Optr)PSend8540, (Optr)&t_method_return);
    Method PMethod8537 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8538, 1, PSend8540);
    
    MethodClosure MC_SMB_columns = new_MethodClosure((Method)PMethod8537, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_columns, MC_SMB_columns);
}


static void init_SMB_cyan_() {
    Symbol SMB_cyan_ = new_Symbol(L"cyan:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8542 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8545 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_cyan = new_Symbol(L"cyan");
    // cyan. 
    Send PSend8547 = new_Send((Optr)VAR__receiver__1_0, SMB_cyan, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8548 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8549 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8550 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8546 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8547, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8548, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8549, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8550, (Optr)&t_method_return);
    Block PBlock8544 = new_Block_with(PArray8545, empty_Array, PThreadedCode8546, 4, PSend8547, PSend8548, PSend8549, PSend8550);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8551 = new_Send((Optr)PBlock8544, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8543 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8544, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8551, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8541 = new_Method_with(PArray8542, empty_Array, empty_Array, PThreadedCode8543, 2, PSend8551, self);
    
    MethodClosure MC_SMB_cyan_ = new_MethodClosure((Method)PMethod8541, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan_, MC_SMB_cyan_);
}


static void init_SMB_red() {
    Symbol SMB_red = new_Symbol(L"red");
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_31_Const = new_Constant((Optr)int_31);
    // color:. 
    Send PSend8554 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_31_Const);
    Array PThreadedCode8553 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_31, (Optr)&t_send1, (Optr)PSend8554, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8552 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8553, 2, PSend8554, self);
    
    MethodClosure MC_SMB_red = new_MethodClosure((Method)PMethod8552, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_red, MC_SMB_red);
}


static void init_SMB_insertLine() {
    Symbol SMB_insertLine = new_Symbol(L"insertLine");
    String string_8557 = new_String(L"al");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8557_Const = new_Constant((Optr)string_8557);
    // getstr:. 
    Send PSend8558 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8557_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8559 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8558);
    Symbol SMB_cr = new_Symbol(L"cr");
    // cr. 
    Send PSend8560 = new_Send((Optr)self, SMB_cr, 0);
    Array PThreadedCode8556 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8557, (Optr)&t_send1, (Optr)PSend8558, (Optr)&t_send1, (Optr)PSend8559, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8560, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8555 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8556, 3, PSend8559, PSend8560, self);
    
    MethodClosure MC_SMB_insertLine = new_MethodClosure((Method)PMethod8555, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertLine, MC_SMB_insertLine);
}


static void init_SMB_blinking() {
    Symbol SMB_blinking = new_Symbol(L"blinking");
    String string_8563 = new_String(L"mb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8563_Const = new_Constant((Optr)string_8563);
    // getstr:. 
    Send PSend8564 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8563_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8565 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8564);
    Array PThreadedCode8562 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8563, (Optr)&t_send1, (Optr)PSend8564, (Optr)&t_send1, (Optr)PSend8565, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8561 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8562, 2, PSend8565, self);
    
    MethodClosure MC_SMB_blinking = new_MethodClosure((Method)PMethod8561, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blinking, MC_SMB_blinking);
}


static void init_SMB_clearToEnd() {
    Symbol SMB_clearToEnd = new_Symbol(L"clearToEnd");
    String string_8568 = new_String(L"ce");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8568_Const = new_Constant((Optr)string_8568);
    // getstr:. 
    Send PSend8569 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8568_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8570 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8569);
    Array PThreadedCode8567 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8568, (Optr)&t_send1, (Optr)PSend8569, (Optr)&t_send1, (Optr)PSend8570, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8566 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8567, 2, PSend8570, self);
    
    MethodClosure MC_SMB_clearToEnd = new_MethodClosure((Method)PMethod8566, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearToEnd, MC_SMB_clearToEnd);
}


static void init_SMB_pink_() {
    Symbol SMB_pink_ = new_Symbol(L"pink:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8572 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8575 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_pink = new_Symbol(L"pink");
    // pink. 
    Send PSend8577 = new_Send((Optr)VAR__receiver__1_0, SMB_pink, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8578 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8579 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8580 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8576 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8577, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8578, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8579, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8580, (Optr)&t_method_return);
    Block PBlock8574 = new_Block_with(PArray8575, empty_Array, PThreadedCode8576, 4, PSend8577, PSend8578, PSend8579, PSend8580);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8581 = new_Send((Optr)PBlock8574, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8573 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8574, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8581, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8571 = new_Method_with(PArray8572, empty_Array, empty_Array, PThreadedCode8573, 2, PSend8581, self);
    
    MethodClosure MC_SMB_pink_ = new_MethodClosure((Method)PMethod8571, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink_, MC_SMB_pink_);
}


static void init_SMB_deleteLine() {
    Symbol SMB_deleteLine = new_Symbol(L"deleteLine");
    String string_8584 = new_String(L"dl");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8584_Const = new_Constant((Optr)string_8584);
    // getstr:. 
    Send PSend8585 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8584_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8586 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8585);
    Array PThreadedCode8583 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8584, (Optr)&t_send1, (Optr)PSend8585, (Optr)&t_send1, (Optr)PSend8586, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8582 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8583, 2, PSend8586, self);
    
    MethodClosure MC_SMB_deleteLine = new_MethodClosure((Method)PMethod8582, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteLine, MC_SMB_deleteLine);
}


static void init_SMB_white() {
    Symbol SMB_white = new_Symbol(L"white");
    SmallInt int_37 = new_SmallInt(37);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_37_Const = new_Constant((Optr)int_37);
    // color:. 
    Send PSend8589 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_37_Const);
    Array PThreadedCode8588 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_37, (Optr)&t_send1, (Optr)PSend8589, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8587 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8588, 2, PSend8589, self);
    
    MethodClosure MC_SMB_white = new_MethodClosure((Method)PMethod8587, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_white, MC_SMB_white);
}


static void init_SMB_left() {
    Symbol SMB_left = new_Symbol(L"left");
    String string_8592 = new_String(L"le");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8592_Const = new_Constant((Optr)string_8592);
    // getstr:. 
    Send PSend8593 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8592_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8594 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8593);
    Array PThreadedCode8591 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8592, (Optr)&t_send1, (Optr)PSend8593, (Optr)&t_send1, (Optr)PSend8594, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8590 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8591, 2, PSend8594, self);
    
    MethodClosure MC_SMB_left = new_MethodClosure((Method)PMethod8590, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_left, MC_SMB_left);
}


static void init_SMB_deleteCharacter() {
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    String string_8597 = new_String(L"dc");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8597_Const = new_Constant((Optr)string_8597);
    // getstr:. 
    Send PSend8598 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8597_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8599 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8598);
    Array PThreadedCode8596 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8597, (Optr)&t_send1, (Optr)PSend8598, (Optr)&t_send1, (Optr)PSend8599, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8595 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8596, 2, PSend8599, self);
    
    MethodClosure MC_SMB_deleteCharacter = new_MethodClosure((Method)PMethod8595, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_deleteCharacter, MC_SMB_deleteCharacter);
}


static void init_SMB_lines() {
    Symbol SMB_lines = new_Symbol(L"lines");
    String string_8602 = new_String(L"li");
    Symbol SMB_getnum_ = new_Symbol(L"getnum:");
    Constant string_8602_Const = new_Constant((Optr)string_8602);
    // getnum:. 
    Send PSend8603 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getnum_, 1, (Optr)string_8602_Const);
    Array PThreadedCode8601 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8602, (Optr)&t_send1, (Optr)PSend8603, (Optr)&t_method_return);
    Method PMethod8600 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8601, 1, PSend8603);
    
    MethodClosure MC_SMB_lines = new_MethodClosure((Method)PMethod8600, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_lines, MC_SMB_lines);
}


static void init_SMB_echo() {
    Symbol SMB_echo = new_Symbol(L"echo");
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    // echo:. 
    Send PSend8606 = new_Send((Optr)self, SMB_echo_, 1, (Optr)true_Const);
    Array PThreadedCode8605 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_self, (Optr)&t_push_true, (Optr)&t_send1, (Optr)PSend8606, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8604 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8605, 2, PSend8606, self);
    
    MethodClosure MC_SMB_echo = new_MethodClosure((Method)PMethod8604, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo, MC_SMB_echo);
}


static void init_SMB_cursorNormal() {
    Symbol SMB_cursorNormal = new_Symbol(L"cursorNormal");
    String string_8609 = new_String(L"ve");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8609_Const = new_Constant((Optr)string_8609);
    // getstr:. 
    Send PSend8610 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8609_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8611 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8610);
    Array PThreadedCode8608 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8609, (Optr)&t_send1, (Optr)PSend8610, (Optr)&t_send1, (Optr)PSend8611, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8607 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8608, 2, PSend8611, self);
    
    MethodClosure MC_SMB_cursorNormal = new_MethodClosure((Method)PMethod8607, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorNormal, MC_SMB_cursorNormal);
}


static void init_SMB__shiftLeft_() {
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8613 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    // insertMode. 
    Send PSend8615 = new_Send((Optr)self, SMB_insertMode, 0);
    // <<. 
    Send PSend8616 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    // endInsertMode. 
    Send PSend8617 = new_Send((Optr)self, SMB_endInsertMode, 0);
    Array PThreadedCode8614 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8615, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8616, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8617, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8612 = new_Method_with(PArray8613, empty_Array, empty_Array, PThreadedCode8614, 4, PSend8615, PSend8616, PSend8617, self);
    
    MethodClosure MC_SMB__shiftLeft_ = new_MethodClosure((Method)PMethod8612, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB__shiftLeft_, MC_SMB__shiftLeft_);
}


static void init_SMB_outStream() {
    Symbol SMB_outStream = new_Symbol(L"outStream");
    Array PThreadedCode8619 = instantiate_Array_with(ThreadedCode_Class, 0, 3, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_method_return);
    Method PMethod8618 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8619, 1, slot_IO_Term_TermOutputDriver_outStream);
    
    MethodClosure MC_SMB_outStream = new_MethodClosure((Method)PMethod8618, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_outStream, MC_SMB_outStream);
}


static void init_SMB_right() {
    Symbol SMB_right = new_Symbol(L"right");
    String string_8622 = new_String(L"nd");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8622_Const = new_Constant((Optr)string_8622);
    // getstr:. 
    Send PSend8623 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8622_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8624 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8623);
    Array PThreadedCode8621 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8622, (Optr)&t_send1, (Optr)PSend8623, (Optr)&t_send1, (Optr)PSend8624, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8620 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8621, 2, PSend8624, self);
    
    MethodClosure MC_SMB_right = new_MethodClosure((Method)PMethod8620, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_right, MC_SMB_right);
}


static void init_SMB_insertMode() {
    Symbol SMB_insertMode = new_Symbol(L"insertMode");
    String string_8627 = new_String(L"im");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8627_Const = new_Constant((Optr)string_8627);
    // getstr:. 
    Send PSend8628 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8627_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8629 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8628);
    Array PThreadedCode8626 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8627, (Optr)&t_send1, (Optr)PSend8628, (Optr)&t_send1, (Optr)PSend8629, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8625 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8626, 2, PSend8629, self);
    
    MethodClosure MC_SMB_insertMode = new_MethodClosure((Method)PMethod8625, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_insertMode, MC_SMB_insertMode);
}


static void init_SMB_scrollBackward() {
    Symbol SMB_scrollBackward = new_Symbol(L"scrollBackward");
    String string_8632 = new_String(L"sr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8632_Const = new_Constant((Optr)string_8632);
    // getstr:. 
    Send PSend8633 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8632_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8634 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8633);
    Array PThreadedCode8631 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8632, (Optr)&t_send1, (Optr)PSend8633, (Optr)&t_send1, (Optr)PSend8634, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8630 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8631, 2, PSend8634, self);
    
    MethodClosure MC_SMB_scrollBackward = new_MethodClosure((Method)PMethod8630, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollBackward, MC_SMB_scrollBackward);
}


static void init_SMB_black_() {
    Symbol SMB_black_ = new_Symbol(L"black:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8636 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8639 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_black = new_Symbol(L"black");
    // black. 
    Send PSend8641 = new_Send((Optr)VAR__receiver__1_0, SMB_black, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8642 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8643 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8644 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8640 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8641, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8643, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8644, (Optr)&t_method_return);
    Block PBlock8638 = new_Block_with(PArray8639, empty_Array, PThreadedCode8640, 4, PSend8641, PSend8642, PSend8643, PSend8644);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8645 = new_Send((Optr)PBlock8638, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8637 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8638, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8645, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8635 = new_Method_with(PArray8636, empty_Array, empty_Array, PThreadedCode8637, 2, PSend8645, self);
    
    MethodClosure MC_SMB_black_ = new_MethodClosure((Method)PMethod8635, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_black_, MC_SMB_black_);
}


static void init_SMB_green_() {
    Symbol SMB_green_ = new_Symbol(L"green:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8647 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8650 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_green = new_Symbol(L"green");
    // green. 
    Send PSend8652 = new_Send((Optr)VAR__receiver__1_0, SMB_green, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8653 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8654 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8655 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8651 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8652, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8653, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8654, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8655, (Optr)&t_method_return);
    Block PBlock8649 = new_Block_with(PArray8650, empty_Array, PThreadedCode8651, 4, PSend8652, PSend8653, PSend8654, PSend8655);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8656 = new_Send((Optr)PBlock8649, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8648 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8649, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8656, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8646 = new_Method_with(PArray8647, empty_Array, empty_Array, PThreadedCode8648, 2, PSend8656, self);
    
    MethodClosure MC_SMB_green_ = new_MethodClosure((Method)PMethod8646, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_green_, MC_SMB_green_);
}


static void init_SMB_scrollForward() {
    Symbol SMB_scrollForward = new_Symbol(L"scrollForward");
    String string_8659 = new_String(L"sf");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8659_Const = new_Constant((Optr)string_8659);
    // getstr:. 
    Send PSend8660 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8659_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8661 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8660);
    Array PThreadedCode8658 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8659, (Optr)&t_send1, (Optr)PSend8660, (Optr)&t_send1, (Optr)PSend8661, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8657 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8658, 2, PSend8661, self);
    
    MethodClosure MC_SMB_scrollForward = new_MethodClosure((Method)PMethod8657, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_scrollForward, MC_SMB_scrollForward);
}


static void init_SMB_overwrite_() {
    Symbol SMB_overwrite_ = new_Symbol(L"overwrite:");
    Variable VAR_char_0_0 = new_Variable_named(L"char", 0);
    Array PArray8663 = new_Array_with(1, (Optr)VAR_char_0_0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8665 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)VAR_char_0_0);
    Array PThreadedCode8664 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_variable, (Optr)VAR_char_0_0, (Optr)&t_send1, (Optr)PSend8665, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8662 = new_Method_with(PArray8663, empty_Array, empty_Array, PThreadedCode8664, 2, PSend8665, self);
    
    MethodClosure MC_SMB_overwrite_ = new_MethodClosure((Method)PMethod8662, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_overwrite_, MC_SMB_overwrite_);
}


static void init_SMB_pink() {
    Symbol SMB_pink = new_Symbol(L"pink");
    SmallInt int_35 = new_SmallInt(35);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_35_Const = new_Constant((Optr)int_35);
    // color:. 
    Send PSend8668 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_35_Const);
    Array PThreadedCode8667 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_35, (Optr)&t_send1, (Optr)PSend8668, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8666 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8667, 2, PSend8668, self);
    
    MethodClosure MC_SMB_pink = new_MethodClosure((Method)PMethod8666, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_pink, MC_SMB_pink);
}


static void init_SMB_reverse() {
    Symbol SMB_reverse = new_Symbol(L"reverse");
    String string_8671 = new_String(L"mr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8671_Const = new_Constant((Optr)string_8671);
    // getstr:. 
    Send PSend8672 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8671_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8673 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8672);
    Array PThreadedCode8670 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8671, (Optr)&t_send1, (Optr)PSend8672, (Optr)&t_send1, (Optr)PSend8673, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8669 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8670, 2, PSend8673, self);
    
    MethodClosure MC_SMB_reverse = new_MethodClosure((Method)PMethod8669, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_reverse, MC_SMB_reverse);
}


static void init_SMB_cr() {
    Symbol SMB_cr = new_Symbol(L"cr");
    String string_8676 = new_String(L"cr");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8676_Const = new_Constant((Optr)string_8676);
    // getstr:. 
    Send PSend8677 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8676_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8678 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8677);
    Array PThreadedCode8675 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8676, (Optr)&t_send1, (Optr)PSend8677, (Optr)&t_send1, (Optr)PSend8678, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8674 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8675, 2, PSend8678, self);
    
    MethodClosure MC_SMB_cr = new_MethodClosure((Method)PMethod8674, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cr, MC_SMB_cr);
}


static void init_SMB_tab() {
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend8681 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_tab, 0);
    Array PThreadedCode8680 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8681, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8679 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8680, 2, PSend8681, self);
    
    MethodClosure MC_SMB_tab = new_MethodClosure((Method)PMethod8679, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_tab, MC_SMB_tab);
}


static void init_SMB_erase() {
    Symbol SMB_erase = new_Symbol(L"erase");
    String string_8684 = new_String(L"1");
    String string_8685 = new_String(L"ec");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8685_Const = new_Constant((Optr)string_8685);
    // getstr:. 
    Send PSend8686 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8685_Const);
    Symbol SMB_parm_in_ = new_Symbol(L"parm:in:");
    Constant string_8684_Const = new_Constant((Optr)string_8684);
    // parm:in:. 
    Send PSend8687 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_parm_in_, 2, (Optr)string_8684_Const, (Optr)PSend8686);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8688 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8687);
    Array PThreadedCode8683 = instantiate_Array_with(ThreadedCode_Class, 0, 18, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8684, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8685, (Optr)&t_send1, (Optr)PSend8686, (Optr)&t_send2, (Optr)PSend8687, (Optr)&t_send1, (Optr)PSend8688, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8682 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8683, 2, PSend8688, self);
    
    MethodClosure MC_SMB_erase = new_MethodClosure((Method)PMethod8682, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_erase, MC_SMB_erase);
}


static void init_SMB_blue() {
    Symbol SMB_blue = new_Symbol(L"blue");
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_34_Const = new_Constant((Optr)int_34);
    // color:. 
    Send PSend8691 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_34_Const);
    Array PThreadedCode8690 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_34, (Optr)&t_send1, (Optr)PSend8691, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8689 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8690, 2, PSend8691, self);
    
    MethodClosure MC_SMB_blue = new_MethodClosure((Method)PMethod8689, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue, MC_SMB_blue);
}


static void init_SMB_clear() {
    Symbol SMB_clear = new_Symbol(L"clear");
    Symbol SMB_reset = new_Symbol(L"reset");
    // reset. 
    Send PSend8694 = new_Send((Optr)self, SMB_reset, 0);
    Symbol SMB_colorEscape = new_Symbol(L"colorEscape");
    // colorEscape. 
    Send PSend8695 = new_Send((Optr)self, SMB_colorEscape, 0);
    Array PThreadedCode8693 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8694, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8695, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8692 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8693, 3, PSend8694, PSend8695, self);
    
    MethodClosure MC_SMB_clear = new_MethodClosure((Method)PMethod8692, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clear, MC_SMB_clear);
}


static void init_SMB_lf() {
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend8698 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_lf, 0);
    Array PThreadedCode8697 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8698, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8696 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8697, 2, PSend8698, self);
    
    MethodClosure MC_SMB_lf = new_MethodClosure((Method)PMethod8696, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_lf, MC_SMB_lf);
}


static void init_SMB_width() {
    Symbol SMB_width = new_Symbol(L"width");
    Array PThreadedCode8700 = instantiate_Array_with(ThreadedCode_Class, 0, 1, (Optr)&t_method_return_self);
    Method PMethod8699 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8700, 1, self);
    
    MethodClosure MC_SMB_width = new_MethodClosure((Method)PMethod8699, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_width, MC_SMB_width);
}


static void init_SMB_white_() {
    Symbol SMB_white_ = new_Symbol(L"white:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8702 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8705 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_white = new_Symbol(L"white");
    // white. 
    Send PSend8707 = new_Send((Optr)VAR__receiver__1_0, SMB_white, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8708 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8709 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8710 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8706 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8707, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8708, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8709, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8710, (Optr)&t_method_return);
    Block PBlock8704 = new_Block_with(PArray8705, empty_Array, PThreadedCode8706, 4, PSend8707, PSend8708, PSend8709, PSend8710);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8711 = new_Send((Optr)PBlock8704, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8703 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8704, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8711, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8701 = new_Method_with(PArray8702, empty_Array, empty_Array, PThreadedCode8703, 2, PSend8711, self);
    
    MethodClosure MC_SMB_white_ = new_MethodClosure((Method)PMethod8701, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_white_, MC_SMB_white_);
}


static void init_SMB_cursorEnhanced() {
    Symbol SMB_cursorEnhanced = new_Symbol(L"cursorEnhanced");
    String string_8714 = new_String(L"vs");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8714_Const = new_Constant((Optr)string_8714);
    // getstr:. 
    Send PSend8715 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8714_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8716 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8715);
    Array PThreadedCode8713 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8714, (Optr)&t_send1, (Optr)PSend8715, (Optr)&t_send1, (Optr)PSend8716, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8712 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8713, 2, PSend8716, self);
    
    MethodClosure MC_SMB_cursorEnhanced = new_MethodClosure((Method)PMethod8712, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cursorEnhanced, MC_SMB_cursorEnhanced);
}


static void init_SMB_endInsertMode() {
    Symbol SMB_endInsertMode = new_Symbol(L"endInsertMode");
    String string_8719 = new_String(L"ei");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8719_Const = new_Constant((Optr)string_8719);
    // getstr:. 
    Send PSend8720 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8719_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8721 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8720);
    Array PThreadedCode8718 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8719, (Optr)&t_send1, (Optr)PSend8720, (Optr)&t_send1, (Optr)PSend8721, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8717 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8718, 2, PSend8721, self);
    
    MethodClosure MC_SMB_endInsertMode = new_MethodClosure((Method)PMethod8717, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_endInsertMode, MC_SMB_endInsertMode);
}


static void init_SMB_up() {
    Symbol SMB_up = new_Symbol(L"up");
    String string_8724 = new_String(L"up");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8724_Const = new_Constant((Optr)string_8724);
    // getstr:. 
    Send PSend8725 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8724_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8726 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8725);
    Array PThreadedCode8723 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8724, (Optr)&t_send1, (Optr)PSend8725, (Optr)&t_send1, (Optr)PSend8726, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8722 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8723, 2, PSend8726, self);
    
    MethodClosure MC_SMB_up = new_MethodClosure((Method)PMethod8722, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_up, MC_SMB_up);
}


static void init_SMB_blue_() {
    Symbol SMB_blue_ = new_Symbol(L"blue:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8728 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8731 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_blue = new_Symbol(L"blue");
    // blue. 
    Send PSend8733 = new_Send((Optr)VAR__receiver__1_0, SMB_blue, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8734 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8735 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8736 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8732 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8733, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8734, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8735, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8736, (Optr)&t_method_return);
    Block PBlock8730 = new_Block_with(PArray8731, empty_Array, PThreadedCode8732, 4, PSend8733, PSend8734, PSend8735, PSend8736);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8737 = new_Send((Optr)PBlock8730, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8729 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8730, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8737, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8727 = new_Method_with(PArray8728, empty_Array, empty_Array, PThreadedCode8729, 2, PSend8737, self);
    
    MethodClosure MC_SMB_blue_ = new_MethodClosure((Method)PMethod8727, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_blue_, MC_SMB_blue_);
}


static void init_SMB_clearFromBeginning() {
    Symbol SMB_clearFromBeginning = new_Symbol(L"clearFromBeginning");
    String string_8740 = new_String(L"cb");
    Symbol SMB_getstr_ = new_Symbol(L"getstr:");
    Constant string_8740_Const = new_Constant((Optr)string_8740);
    // getstr:. 
    Send PSend8741 = new_Send((Optr)slot_IO_Term_TermOutputDriver_termcap, SMB_getstr_, 1, (Optr)string_8740_Const);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8742 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8741);
    Array PThreadedCode8739 = instantiate_Array_with(ThreadedCode_Class, 0, 12, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_termcap, (Optr)&t_push1, (Optr)string_8740, (Optr)&t_send1, (Optr)PSend8741, (Optr)&t_send1, (Optr)PSend8742, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8738 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8739, 2, PSend8742, self);
    
    MethodClosure MC_SMB_clearFromBeginning = new_MethodClosure((Method)PMethod8738, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_clearFromBeginning, MC_SMB_clearFromBeginning);
}


static void init_SMB_space() {
    Symbol SMB_space = new_Symbol(L"space");
    // space. 
    Send PSend8745 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_space, 0);
    Array PThreadedCode8744 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8745, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8743 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8744, 2, PSend8745, self);
    
    MethodClosure MC_SMB_space = new_MethodClosure((Method)PMethod8743, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_space, MC_SMB_space);
}


static void init_SMB_echo_() {
    Symbol SMB_echo_ = new_Symbol(L"echo:");
    Variable VAR_aBool_0_0 = new_Variable_named(L"aBool", 0);
    Array PArray8747 = new_Array_with(1, (Optr)VAR_aBool_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray8750 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB__equals_ = new_Symbol(L"=");
    // =. 
    Send PSend8752 = new_Send((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, SMB__equals_, 1, (Optr)VAR_aBool_0_0);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend8756 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)self);
    Array PThreadedCode8755 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8756, (Optr)&t_block_return);
    Block PBlock8754 = new_Block_with(empty_Array, empty_Array, PThreadedCode8755, 1, PSend8756);
    // ifTrue:. 
    Send PSend8753 = new_Send((Optr)PSend8752, SMB_ifTrue_, 1, (Optr)PBlock8754);
    Assign PAssign8757 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)VAR_aBool_0_0);
    Symbol  SMB_echo = new_Symbol(L"echo");
    Symbol SMB_enable_ = new_Symbol(L"enable:");
    Constant SMB_echo_Const = new_Constant((Optr)SMB_echo);
    // enable:. 
    Send PSend8758 = new_Send((Optr)self, SMB_enable_, 1, (Optr)SMB_echo_Const);
    Array PThreadedCode8751 = instantiate_Array_with(ThreadedCode_Class, 0, 23, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_shouldEcho, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_send1, (Optr)PSend8752, (Optr)&t_send_ifTrue_, (Optr)PSend8753, (Optr)PBlock8754, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign8757, (Optr)&t_push_variable, (Optr)VAR_aBool_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push1, (Optr)SMB_echo, (Optr)&t_send1, (Optr)PSend8758, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock8749 = new_Block_with(PArray8750, empty_Array, PThreadedCode8751, 4, PSend8753, PAssign8757, PSend8758, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend8759 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock8749);
    Array PThreadedCode8748 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock8749, (Optr)&t_send1, (Optr)PSend8759, (Optr)&t_method_return);
    Method PMethod8746 = new_Method_with(PArray8747, empty_Array, empty_Array, PThreadedCode8748, 1, PSend8759);
    
    MethodClosure MC_SMB_echo_ = new_MethodClosure((Method)PMethod8746, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_echo_, MC_SMB_echo_);
}


static void init_SMB_flush() {
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8762 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB_flush, 0);
    Array PThreadedCode8761 = instantiate_Array_with(ThreadedCode_Class, 0, 6, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_send0, (Optr)PSend8762, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8760 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8761, 2, PSend8762, self);
    
    MethodClosure MC_SMB_flush = new_MethodClosure((Method)PMethod8760, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_flush, MC_SMB_flush);
}


static void init_SMB_cyan() {
    Symbol SMB_cyan = new_Symbol(L"cyan");
    SmallInt int_36 = new_SmallInt(36);
    Symbol SMB_color_ = new_Symbol(L"color:");
    Constant int_36_Const = new_Constant((Optr)int_36);
    // color:. 
    Send PSend8765 = new_Send((Optr)self, SMB_color_, 1, (Optr)int_36_Const);
    Array PThreadedCode8764 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_self, (Optr)&t_push1, (Optr)int_36, (Optr)&t_send1, (Optr)PSend8765, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8763 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8764, 2, PSend8765, self);
    
    MethodClosure MC_SMB_cyan = new_MethodClosure((Method)PMethod8763, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_cyan, MC_SMB_cyan);
}


static void init_SMB_red_() {
    Symbol SMB_red_ = new_Symbol(L"red:");
    Variable VAR_aString_0_0 = new_Variable_named(L"aString", 0);
    Array PArray8767 = new_Array_with(1, (Optr)VAR_aString_0_0);
    Variable VAR__receiver__1_0 = new_Variable_named(L"_receiver_", 1);
    Array PArray8770 = new_Array_with(1, (Optr)VAR__receiver__1_0);
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend8772 = new_Send((Optr)VAR__receiver__1_0, SMB_red, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8773 = new_Send((Optr)VAR__receiver__1_0, SMB__shiftLeft_, 1, (Optr)VAR_aString_0_0);
    Symbol SMB_flush = new_Symbol(L"flush");
    // flush. 
    Send PSend8774 = new_Send((Optr)VAR__receiver__1_0, SMB_flush, 0);
    Symbol SMB_clear = new_Symbol(L"clear");
    // clear. 
    Send PSend8775 = new_Send((Optr)VAR__receiver__1_0, SMB_clear, 0);
    Array PThreadedCode8771 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8772, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_push_variable, (Optr)VAR_aString_0_0, (Optr)&t_send1, (Optr)PSend8773, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8774, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR__receiver__1_0, (Optr)&t_send0, (Optr)PSend8775, (Optr)&t_method_return);
    Block PBlock8769 = new_Block_with(PArray8770, empty_Array, PThreadedCode8771, 4, PSend8772, PSend8773, PSend8774, PSend8775);
    Symbol SMB_value_ = new_Symbol(L"value:");
    // value:. 
    Send PSend8776 = new_Send((Optr)PBlock8769, SMB_value_, 1, (Optr)self);
    Array PThreadedCode8768 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_closure, (Optr)PBlock8769, (Optr)&t_push_self, (Optr)&t_send1, (Optr)PSend8776, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8766 = new_Method_with(PArray8767, empty_Array, empty_Array, PThreadedCode8768, 2, PSend8776, self);
    
    MethodClosure MC_SMB_red_ = new_MethodClosure((Method)PMethod8766, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_red_, MC_SMB_red_);
}


static void init_SMB_errorColor() {
    Symbol SMB_errorColor = new_Symbol(L"errorColor");
    Symbol SMB_red = new_Symbol(L"red");
    // red. 
    Send PSend8779 = new_Send((Optr)self, SMB_red, 0);
    Symbol SMB_reverse = new_Symbol(L"reverse");
    // reverse. 
    Send PSend8780 = new_Send((Optr)self, SMB_reverse, 0);
    Array PThreadedCode8778 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8779, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8780, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8777 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8778, 3, PSend8779, PSend8780, self);
    
    MethodClosure MC_SMB_errorColor = new_MethodClosure((Method)PMethod8777, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_errorColor, MC_SMB_errorColor);
}


static void init_SMB_ss3Escape() {
    Symbol SMB_ss3Escape = new_Symbol(L"ss3Escape");
    Symbol SMB_escape = new_Symbol(L"escape");
    // escape. 
    Send PSend8783 = new_Send((Optr)Character_classReference, SMB_escape, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8784 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8783);
    Character char_8785 = new_Character(L'O');
    Constant char_8785_Const = new_Constant((Optr)char_8785);
    // <<. 
    Send PSend8786 = new_Send((Optr)PSend8784, SMB__shiftLeft_, 1, (Optr)char_8785_Const);
    Array PThreadedCode8782 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8783, (Optr)&t_send1, (Optr)PSend8784, (Optr)&t_push1, (Optr)char_8785, (Optr)&t_send1, (Optr)PSend8786, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8781 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8782, 2, PSend8786, self);
    
    MethodClosure MC_SMB_ss3Escape = new_MethodClosure((Method)PMethod8781, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_ss3Escape, MC_SMB_ss3Escape);
}


static void init_SMB_backspace() {
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend8789 = new_Send((Optr)Character_classReference, SMB_backspace, 0);
    Symbol SMB__shiftLeft_ = new_Symbol(L"<<");
    // <<. 
    Send PSend8790 = new_Send((Optr)slot_IO_Term_TermOutputDriver_outStream, SMB__shiftLeft_, 1, (Optr)PSend8789);
    Symbol SMB_deleteCharacter = new_Symbol(L"deleteCharacter");
    // deleteCharacter. 
    Send PSend8791 = new_Send((Optr)self, SMB_deleteCharacter, 0);
    Array PThreadedCode8788 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_outStream, (Optr)&t_push_class_reference, (Optr)Character_classReference, (Optr)&t_send0, (Optr)PSend8789, (Optr)&t_send1, (Optr)PSend8790, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend8791, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod8787 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8788, 3, PSend8790, PSend8791, self);
    
    MethodClosure MC_SMB_backspace = new_MethodClosure((Method)PMethod8787, IO_Term_TermOutputDriver_Class);
    store_method(IO_Term_TermOutputDriver_Class, SMB_backspace, MC_SMB_backspace);
}


static void init_class_SMB_stderr() {
    Symbol SMB_stderr = new_Symbol(L"stderr");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8797 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign8796 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)PSend8797);
    // stderr. 
    Send PSend8798 = new_Send((Optr)PFile_classReference, SMB_stderr, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend8799 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_outStream_, 1, (Optr)PSend8798);
    Array PThreadedCode8795 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8796, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend8797, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8798, (Optr)&t_send1, (Optr)PSend8799, (Optr)&t_block_return);
    Block PBlock8794 = new_Block_with(empty_Array, empty_Array, PThreadedCode8795, 2, PAssign8796, PSend8799);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8800 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock8794);
    Array PThreadedCode8793 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock8794, (Optr)&t_send1, (Optr)PSend8800, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance, (Optr)&t_method_return);
    Method PMethod8792 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8793, 2, PSend8800, slot_IO_Term_TermOutputDriver_Class_class_stderrTerminalInstance);
    
    MethodClosure MC_SMB_stderr = new_MethodClosure((Method)PMethod8792, HEADER(IO_Term_TermOutputDriver_Class));
    store_method(HEADER(IO_Term_TermOutputDriver_Class), SMB_stderr, MC_SMB_stderr);
}


static void init_class_SMB_stdout() {
    Symbol SMB_stdout = new_Symbol(L"stdout");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend8806 = new_Send((Optr)PVTermOutputDriver_classReference, SMB_new, 0);
    Assign PAssign8805 = new_Assign((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)PSend8806);
    // stdout. 
    Send PSend8807 = new_Send((Optr)PFile_classReference, SMB_stdout, 0);
    Symbol SMB_outStream_ = new_Symbol(L"outStream:");
    // outStream:. 
    Send PSend8808 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_outStream_, 1, (Optr)PSend8807);
    Array PThreadedCode8804 = instantiate_Array_with(ThreadedCode_Class, 0, 17, (Optr)&t_push1, (Optr)PAssign8805, (Optr)&t_push_class_reference, (Optr)PVTermOutputDriver_classReference, (Optr)&t_send0, (Optr)PSend8806, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_class_reference, (Optr)PFile_classReference, (Optr)&t_send0, (Optr)PSend8807, (Optr)&t_send1, (Optr)PSend8808, (Optr)&t_block_return);
    Block PBlock8803 = new_Block_with(empty_Array, empty_Array, PThreadedCode8804, 2, PAssign8805, PSend8808);
    Symbol SMB_ifNil_ = new_Symbol(L"ifNil:");
    // ifNil:. 
    Send PSend8809 = new_Send((Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, SMB_ifNil_, 1, (Optr)PBlock8803);
    Array PThreadedCode8802 = instantiate_Array_with(ThreadedCode_Class, 0, 10, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_push_closure, (Optr)PBlock8803, (Optr)&t_send1, (Optr)PSend8809, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance, (Optr)&t_method_return);
    Method PMethod8801 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode8802, 2, PSend8809, slot_IO_Term_TermOutputDriver_Class_class_stdoutTerminalInstance);
    
    MethodClosure MC_SMB_stdout = new_MethodClosure((Method)PMethod8801, HEADER(IO_Term_TermOutputDriver_Class));
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