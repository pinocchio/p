#include <lib/class/IO/Term/TermInputDriver.h>


Optr layout_IO_Term_TermInputDriver_Class_class;
Optr slot_IO_Term_TermInputDriver_input;
Optr slot_IO_Term_TermInputDriver_handler;
Optr slot_IO_Term_TermInputDriver_normal;
Optr slot_IO_Term_TermInputDriver_csi;
Optr slot_IO_Term_TermInputDriver_ss3;
Optr layout_IO_Term_TermInputDriver;


static void init_SMB_initializeSS3_() {
    Symbol SMB_initializeSS3_ = new_Symbol(L"initializeSS3:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9063 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9065 = new_Character(L'p');
    Symbol SMB_keypad0 = new_Symbol(L"keypad0");
    // keypad0. 
    Send PSend9068 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad0, 0);
    Array PThreadedCode9067 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9068, (Optr)&t_block_return);
    Block PBlock9066 = new_Block_with(empty_Array, empty_Array, PThreadedCode9067, 1, PSend9068);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9065_Const = new_Constant((Optr)char_9065);
    // at:put:. 
    Send PSend9069 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9065_Const, (Optr)PBlock9066);
    Character char_9070 = new_Character(L'q');
    Symbol SMB_keypad1 = new_Symbol(L"keypad1");
    // keypad1. 
    Send PSend9073 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad1, 0);
    Array PThreadedCode9072 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9073, (Optr)&t_block_return);
    Block PBlock9071 = new_Block_with(empty_Array, empty_Array, PThreadedCode9072, 1, PSend9073);
    Constant char_9070_Const = new_Constant((Optr)char_9070);
    // at:put:. 
    Send PSend9074 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9070_Const, (Optr)PBlock9071);
    Character char_9075 = new_Character(L'r');
    Symbol SMB_keypad2 = new_Symbol(L"keypad2");
    // keypad2. 
    Send PSend9078 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad2, 0);
    Array PThreadedCode9077 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9078, (Optr)&t_block_return);
    Block PBlock9076 = new_Block_with(empty_Array, empty_Array, PThreadedCode9077, 1, PSend9078);
    Constant char_9075_Const = new_Constant((Optr)char_9075);
    // at:put:. 
    Send PSend9079 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9075_Const, (Optr)PBlock9076);
    Character char_9080 = new_Character(L's');
    Symbol SMB_keypad3 = new_Symbol(L"keypad3");
    // keypad3. 
    Send PSend9083 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad3, 0);
    Array PThreadedCode9082 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9083, (Optr)&t_block_return);
    Block PBlock9081 = new_Block_with(empty_Array, empty_Array, PThreadedCode9082, 1, PSend9083);
    Constant char_9080_Const = new_Constant((Optr)char_9080);
    // at:put:. 
    Send PSend9084 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9080_Const, (Optr)PBlock9081);
    Character char_9085 = new_Character(L't');
    Symbol SMB_keypad4 = new_Symbol(L"keypad4");
    // keypad4. 
    Send PSend9088 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad4, 0);
    Array PThreadedCode9087 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9088, (Optr)&t_block_return);
    Block PBlock9086 = new_Block_with(empty_Array, empty_Array, PThreadedCode9087, 1, PSend9088);
    Constant char_9085_Const = new_Constant((Optr)char_9085);
    // at:put:. 
    Send PSend9089 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9085_Const, (Optr)PBlock9086);
    Character char_9090 = new_Character(L'u');
    Symbol SMB_keypad5 = new_Symbol(L"keypad5");
    // keypad5. 
    Send PSend9093 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad5, 0);
    Array PThreadedCode9092 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9093, (Optr)&t_block_return);
    Block PBlock9091 = new_Block_with(empty_Array, empty_Array, PThreadedCode9092, 1, PSend9093);
    Constant char_9090_Const = new_Constant((Optr)char_9090);
    // at:put:. 
    Send PSend9094 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9090_Const, (Optr)PBlock9091);
    Character char_9095 = new_Character(L'v');
    Symbol SMB_keypad6 = new_Symbol(L"keypad6");
    // keypad6. 
    Send PSend9098 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad6, 0);
    Array PThreadedCode9097 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9098, (Optr)&t_block_return);
    Block PBlock9096 = new_Block_with(empty_Array, empty_Array, PThreadedCode9097, 1, PSend9098);
    Constant char_9095_Const = new_Constant((Optr)char_9095);
    // at:put:. 
    Send PSend9099 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9095_Const, (Optr)PBlock9096);
    Character char_9100 = new_Character(L'w');
    Symbol SMB_keypad7 = new_Symbol(L"keypad7");
    // keypad7. 
    Send PSend9103 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad7, 0);
    Array PThreadedCode9102 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9103, (Optr)&t_block_return);
    Block PBlock9101 = new_Block_with(empty_Array, empty_Array, PThreadedCode9102, 1, PSend9103);
    Constant char_9100_Const = new_Constant((Optr)char_9100);
    // at:put:. 
    Send PSend9104 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9100_Const, (Optr)PBlock9101);
    Character char_9105 = new_Character(L'x');
    Symbol SMB_keypad8 = new_Symbol(L"keypad8");
    // keypad8. 
    Send PSend9108 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad8, 0);
    Array PThreadedCode9107 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9108, (Optr)&t_block_return);
    Block PBlock9106 = new_Block_with(empty_Array, empty_Array, PThreadedCode9107, 1, PSend9108);
    Constant char_9105_Const = new_Constant((Optr)char_9105);
    // at:put:. 
    Send PSend9109 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9105_Const, (Optr)PBlock9106);
    Character char_9110 = new_Character(L'y');
    Symbol SMB_keypad9 = new_Symbol(L"keypad9");
    // keypad9. 
    Send PSend9113 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad9, 0);
    Array PThreadedCode9112 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9113, (Optr)&t_block_return);
    Block PBlock9111 = new_Block_with(empty_Array, empty_Array, PThreadedCode9112, 1, PSend9113);
    Constant char_9110_Const = new_Constant((Optr)char_9110);
    // at:put:. 
    Send PSend9114 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9110_Const, (Optr)PBlock9111);
    Character char_8528 = new_Character(L'm');
    Symbol SMB_keypadMinus = new_Symbol(L"keypadMinus");
    // keypadMinus. 
    Send PSend9117 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadMinus, 0);
    Array PThreadedCode9116 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9117, (Optr)&t_block_return);
    Block PBlock9115 = new_Block_with(empty_Array, empty_Array, PThreadedCode9116, 1, PSend9117);
    Constant char_8528_Const = new_Constant((Optr)char_8528);
    // at:put:. 
    Send PSend9118 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8528_Const, (Optr)PBlock9115);
    Character char_9119 = new_Character(L'l');
    Symbol SMB_keypadBacktick = new_Symbol(L"keypadBacktick");
    // keypadBacktick. 
    Send PSend9122 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadBacktick, 0);
    Array PThreadedCode9121 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9122, (Optr)&t_block_return);
    Block PBlock9120 = new_Block_with(empty_Array, empty_Array, PThreadedCode9121, 1, PSend9122);
    Constant char_9119_Const = new_Constant((Optr)char_9119);
    // at:put:. 
    Send PSend9123 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9119_Const, (Optr)PBlock9120);
    Character char_9124 = new_Character(L'n');
    Symbol SMB_keypadDot = new_Symbol(L"keypadDot");
    // keypadDot. 
    Send PSend9127 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadDot, 0);
    Array PThreadedCode9126 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9127, (Optr)&t_block_return);
    Block PBlock9125 = new_Block_with(empty_Array, empty_Array, PThreadedCode9126, 1, PSend9127);
    Constant char_9124_Const = new_Constant((Optr)char_9124);
    // at:put:. 
    Send PSend9128 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9124_Const, (Optr)PBlock9125);
    Character char_9129 = new_Character(L'M');
    Symbol SMB_keypadEnter = new_Symbol(L"keypadEnter");
    // keypadEnter. 
    Send PSend9132 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadEnter, 0);
    Array PThreadedCode9131 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9132, (Optr)&t_block_return);
    Block PBlock9130 = new_Block_with(empty_Array, empty_Array, PThreadedCode9131, 1, PSend9132);
    Constant char_9129_Const = new_Constant((Optr)char_9129);
    // at:put:. 
    Send PSend9133 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9129_Const, (Optr)PBlock9130);
    Character char_9134 = new_Character(L'P');
    Symbol SMB_f1 = new_Symbol(L"f1");
    // f1. 
    Send PSend9137 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f1, 0);
    Array PThreadedCode9136 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9137, (Optr)&t_block_return);
    Block PBlock9135 = new_Block_with(empty_Array, empty_Array, PThreadedCode9136, 1, PSend9137);
    Constant char_9134_Const = new_Constant((Optr)char_9134);
    // at:put:. 
    Send PSend9138 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9134_Const, (Optr)PBlock9135);
    Character char_9139 = new_Character(L'Q');
    Symbol SMB_f2 = new_Symbol(L"f2");
    // f2. 
    Send PSend9142 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f2, 0);
    Array PThreadedCode9141 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9142, (Optr)&t_block_return);
    Block PBlock9140 = new_Block_with(empty_Array, empty_Array, PThreadedCode9141, 1, PSend9142);
    Constant char_9139_Const = new_Constant((Optr)char_9139);
    // at:put:. 
    Send PSend9143 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9139_Const, (Optr)PBlock9140);
    Character char_9144 = new_Character(L'R');
    Symbol SMB_f3 = new_Symbol(L"f3");
    // f3. 
    Send PSend9147 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f3, 0);
    Array PThreadedCode9146 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9147, (Optr)&t_block_return);
    Block PBlock9145 = new_Block_with(empty_Array, empty_Array, PThreadedCode9146, 1, PSend9147);
    Constant char_9144_Const = new_Constant((Optr)char_9144);
    // at:put:. 
    Send PSend9148 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9144_Const, (Optr)PBlock9145);
    Character char_9149 = new_Character(L'S');
    Symbol SMB_f4 = new_Symbol(L"f4");
    // f4. 
    Send PSend9152 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f4, 0);
    Array PThreadedCode9151 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9152, (Optr)&t_block_return);
    Block PBlock9150 = new_Block_with(empty_Array, empty_Array, PThreadedCode9151, 1, PSend9152);
    Constant char_9149_Const = new_Constant((Optr)char_9149);
    // at:put:. 
    Send PSend9153 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9149_Const, (Optr)PBlock9150);
    Character char_9154 = new_Character(L'H');
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend9157 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_home, 0);
    Array PThreadedCode9156 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9157, (Optr)&t_block_return);
    Block PBlock9155 = new_Block_with(empty_Array, empty_Array, PThreadedCode9156, 1, PSend9157);
    Constant char_9154_Const = new_Constant((Optr)char_9154);
    // at:put:. 
    Send PSend9158 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9154_Const, (Optr)PBlock9155);
    Character char_9159 = new_Character(L'F');
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend9162 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_end, 0);
    Array PThreadedCode9161 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9162, (Optr)&t_block_return);
    Block PBlock9160 = new_Block_with(empty_Array, empty_Array, PThreadedCode9161, 1, PSend9162);
    Constant char_9159_Const = new_Constant((Optr)char_9159);
    // at:put:. 
    Send PSend9163 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9159_Const, (Optr)PBlock9160);
    Array PThreadedCode9064 = instantiate_Array_with(ThreadedCode_Class, 0, 181, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9065, (Optr)&t_push_closure, (Optr)PBlock9066, (Optr)&t_send2, (Optr)PSend9069, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9070, (Optr)&t_push_closure, (Optr)PBlock9071, (Optr)&t_send2, (Optr)PSend9074, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9075, (Optr)&t_push_closure, (Optr)PBlock9076, (Optr)&t_send2, (Optr)PSend9079, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9080, (Optr)&t_push_closure, (Optr)PBlock9081, (Optr)&t_send2, (Optr)PSend9084, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9085, (Optr)&t_push_closure, (Optr)PBlock9086, (Optr)&t_send2, (Optr)PSend9089, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9090, (Optr)&t_push_closure, (Optr)PBlock9091, (Optr)&t_send2, (Optr)PSend9094, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9095, (Optr)&t_push_closure, (Optr)PBlock9096, (Optr)&t_send2, (Optr)PSend9099, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9100, (Optr)&t_push_closure, (Optr)PBlock9101, (Optr)&t_send2, (Optr)PSend9104, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9105, (Optr)&t_push_closure, (Optr)PBlock9106, (Optr)&t_send2, (Optr)PSend9109, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9110, (Optr)&t_push_closure, (Optr)PBlock9111, (Optr)&t_send2, (Optr)PSend9114, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8528, (Optr)&t_push_closure, (Optr)PBlock9115, (Optr)&t_send2, (Optr)PSend9118, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9119, (Optr)&t_push_closure, (Optr)PBlock9120, (Optr)&t_send2, (Optr)PSend9123, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9124, (Optr)&t_push_closure, (Optr)PBlock9125, (Optr)&t_send2, (Optr)PSend9128, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9129, (Optr)&t_push_closure, (Optr)PBlock9130, (Optr)&t_send2, (Optr)PSend9133, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9134, (Optr)&t_push_closure, (Optr)PBlock9135, (Optr)&t_send2, (Optr)PSend9138, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9139, (Optr)&t_push_closure, (Optr)PBlock9140, (Optr)&t_send2, (Optr)PSend9143, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9144, (Optr)&t_push_closure, (Optr)PBlock9145, (Optr)&t_send2, (Optr)PSend9148, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9149, (Optr)&t_push_closure, (Optr)PBlock9150, (Optr)&t_send2, (Optr)PSend9153, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9154, (Optr)&t_push_closure, (Optr)PBlock9155, (Optr)&t_send2, (Optr)PSend9158, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_push_closure, (Optr)PBlock9160, (Optr)&t_send2, (Optr)PSend9163, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9062 = new_Method_with(PArray9063, empty_Array, empty_Array, PThreadedCode9064, 21, PSend9069, PSend9074, PSend9079, PSend9084, PSend9089, PSend9094, PSend9099, PSend9104, PSend9109, PSend9114, PSend9118, PSend9123, PSend9128, PSend9133, PSend9138, PSend9143, PSend9148, PSend9153, PSend9158, PSend9163, self);
    
    MethodClosure MC_SMB_initializeSS3_ = new_MethodClosure((Method)PMethod9062, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeSS3_, MC_SMB_initializeSS3_);
}


static void init_SMB_readC1() {
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray9165 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9168 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9171 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9170 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9171);
    Character char_8446 = new_Character(L'[');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_8446_Const = new_Constant((Optr)char_8446);
    // =. 
    Send PSend9172 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8446_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9176 = new_Send((Optr)self, SMB_readCSI, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9177 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9176);
    Array PThreadedCode9175 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9176, (Optr)&t_send1, (Optr)PSend9177, (Optr)&t_block_return);
    Block PBlock9174 = new_Block_with(empty_Array, empty_Array, PThreadedCode9175, 1, PSend9177);
    // ifTrue:. 
    Send PSend9173 = new_Send((Optr)PSend9172, SMB_ifTrue_, 1, (Optr)PBlock9174);
    Character char_8819 = new_Character(L'O');
    Constant char_8819_Const = new_Constant((Optr)char_8819);
    // =. 
    Send PSend9178 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8819_Const);
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    // readSS3. 
    Send PSend9182 = new_Send((Optr)self, SMB_readSS3, 0);
    // escape:. 
    Send PSend9183 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9182);
    Array PThreadedCode9181 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9182, (Optr)&t_send1, (Optr)PSend9183, (Optr)&t_block_return);
    Block PBlock9180 = new_Block_with(empty_Array, empty_Array, PThreadedCode9181, 1, PSend9183);
    // ifTrue:. 
    Send PSend9179 = new_Send((Optr)PSend9178, SMB_ifTrue_, 1, (Optr)PBlock9180);
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    // alt:. 
    Send PSend9184 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_alt_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode9169 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign9170, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9171, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8446, (Optr)&t_send1, (Optr)PSend9172, (Optr)&t_send_ifTrue_, (Optr)PSend9173, (Optr)PBlock9174, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8819, (Optr)&t_send1, (Optr)PSend9178, (Optr)&t_send_ifTrue_, (Optr)PSend9179, (Optr)PBlock9180, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9184, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9167 = new_Block_with(PArray9168, empty_Array, PThreadedCode9169, 5, PAssign9170, PSend9173, PSend9179, PSend9184, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9185 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9167);
    Array PThreadedCode9166 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9167, (Optr)&t_send1, (Optr)PSend9185, (Optr)&t_method_return);
    Method PMethod9164 = new_Method_with(empty_Array, PArray9165, empty_Array, PThreadedCode9166, 1, PSend9185);
    
    MethodClosure MC_SMB_readC1 = new_MethodClosure((Method)PMethod9164, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readC1, MC_SMB_readC1);
}


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9187 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9189 = new_Assign((Optr)slot_IO_Term_TermInputDriver_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9188 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9189, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9186 = new_Method_with(PArray9187, empty_Array, empty_Array, PThreadedCode9188, 2, PAssign9189, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod9186, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_continueReadCSINumber_() {
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray9191 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Variable VAR_character_0_2 = new_Variable_named(L"character", 0);
    Array PArray9192 = new_Array_with(2, (Optr)VAR_value_0_1, (Optr)VAR_character_0_2);
    Assign PAssign9194 = new_Assign((Optr)VAR_value_0_1, (Optr)VAR_v_0_0);
    Character char_9197 = new_Character(L'0');
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9199 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9198 = new_Assign((Optr)VAR_character_0_2, (Optr)PSend9199);
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9200 = new_Send((Optr)char_9197_Const, SMB__lt__equals_, 1, (Optr)PAssign9198);
    Character char_9203 = new_Character(L'9');
    Constant char_9203_Const = new_Constant((Optr)char_9203);
    // <=. 
    Send PSend9204 = new_Send((Optr)VAR_character_0_2, SMB__lt__equals_, 1, (Optr)char_9203_Const);
    Array PThreadedCode9202 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9203, (Optr)&t_send1, (Optr)PSend9204, (Optr)&t_block_return);
    Block PBlock9201 = new_Block_with(empty_Array, empty_Array, PThreadedCode9202, 1, PSend9204);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend9205 = new_Send((Optr)PSend9200, SMB_and_, 1, (Optr)PBlock9201);
    Array PThreadedCode9196 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_push1, (Optr)PAssign9198, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9199, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend9200, (Optr)&t_push_closure, (Optr)PBlock9201, (Optr)&t_send1, (Optr)PSend9205, (Optr)&t_block_return);
    Block PBlock9195 = new_Block_with(empty_Array, empty_Array, PThreadedCode9196, 1, PSend9205);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // *. 
    Send PSend9210 = new_Send((Optr)VAR_value_0_1, SMB__times_, 1, (Optr)int_10_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9212 = new_Send((Optr)VAR_character_0_2, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // asInteger. 
    Send PSend9213 = new_Send((Optr)char_9197_Const, SMB_asInteger, 0);
    // -. 
    Send PSend9211 = new_Send((Optr)PSend9212, SMB__minus_, 1, (Optr)PSend9213);
    // +. 
    Send PSend9209 = new_Send((Optr)PSend9210, SMB__plus_, 1, (Optr)PSend9211);
    Assign PAssign9208 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend9209);
    Array PThreadedCode9207 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9208, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend9210, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_send0, (Optr)PSend9212, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send0, (Optr)PSend9213, (Optr)&t_send1, (Optr)PSend9211, (Optr)&t_send1, (Optr)PSend9209, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9206 = new_Block_with(empty_Array, empty_Array, PThreadedCode9207, 1, PAssign9208);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend9214 = new_Send((Optr)PBlock9195, SMB_whileTrue_, 1, (Optr)PBlock9206);
    Character char_9215 = new_Character(L'~');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9215_Const = new_Constant((Optr)char_9215);
    // =. 
    Send PSend9216 = new_Send((Optr)VAR_character_0_2, SMB__equals_, 1, (Optr)char_9215_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9220 = new_String(L"Control Sequence Introducer (number end)");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9220_Const = new_Constant((Optr)string_9220);
    // fail:in:. 
    Send PSend9221 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9220_Const);
    Array PThreadedCode9219 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9220, (Optr)&t_send2, (Optr)PSend9221, (Optr)&t_block_return);
    Block PBlock9218 = new_Block_with(empty_Array, empty_Array, PThreadedCode9219, 1, PSend9221);
    // ifFalse:. 
    Send PSend9217 = new_Send((Optr)PSend9216, SMB_ifFalse_, 1, (Optr)PBlock9218);
    String string_9224 = new_String(L"Control Sequence Introducer (number end)");
    Constant string_9224_Const = new_Constant((Optr)string_9224);
    // fail:in:. 
    Send PSend9225 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9224_Const);
    Array PThreadedCode9223 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9224, (Optr)&t_send2, (Optr)PSend9225, (Optr)&t_block_return);
    Block PBlock9222 = new_Block_with(empty_Array, empty_Array, PThreadedCode9223, 1, PSend9225);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9226 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_value_0_1, (Optr)PBlock9222);
    Array PThreadedCode9193 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9194, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9195, (Optr)&t_push_closure, (Optr)PBlock9206, (Optr)&t_send1, (Optr)PSend9214, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9215, (Optr)&t_send1, (Optr)PSend9216, (Optr)&t_send_ifFalse_, (Optr)PSend9217, (Optr)PBlock9218, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_closure, (Optr)PBlock9222, (Optr)&t_send2, (Optr)PSend9226, (Optr)&t_method_return);
    Method PMethod9190 = new_Method_with(PArray9191, PArray9192, empty_Array, PThreadedCode9193, 4, PAssign9194, PSend9214, PSend9217, PSend9226);
    
    MethodClosure MC_SMB_continueReadCSINumber_ = new_MethodClosure((Method)PMethod9190, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_continueReadCSINumber_, MC_SMB_continueReadCSINumber_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9230 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9229 = new_Assign((Optr)slot_IO_Term_TermInputDriver_normal, (Optr)PSend9230);
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    // initializeNormal:. 
    Send PSend9231 = new_Send((Optr)self, SMB_initializeNormal_, 1, (Optr)slot_IO_Term_TermInputDriver_normal);
    // new. 
    Send PSend9233 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9232 = new_Assign((Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)PSend9233);
    Symbol SMB_initializeSS3_ = new_Symbol(L"initializeSS3:");
    // initializeSS3:. 
    Send PSend9234 = new_Send((Optr)self, SMB_initializeSS3_, 1, (Optr)slot_IO_Term_TermInputDriver_ss3);
    // new. 
    Send PSend9236 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9235 = new_Assign((Optr)slot_IO_Term_TermInputDriver_csi, (Optr)PSend9236);
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    // initializeCSI:. 
    Send PSend9237 = new_Send((Optr)self, SMB_initializeCSI_, 1, (Optr)slot_IO_Term_TermInputDriver_csi);
    Array PThreadedCode9228 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign9229, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9230, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_send1, (Optr)PSend9231, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9232, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9233, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_send1, (Optr)PSend9234, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9235, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9236, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_send1, (Optr)PSend9237, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9227 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9228, 7, PAssign9229, PSend9231, PAssign9232, PSend9234, PAssign9235, PSend9237, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9227, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_fail_in_() {
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_mode_0_1 = new_Variable_named(L"mode", 0);
    Array PArray9239 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_mode_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9241 = new_Send((Optr)VAR_mode_0_1, SMB_asString, 0);
    String string_9242 = new_String(L" does not support ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_9242_Const = new_Constant((Optr)string_9242);
    // ,. 
    Send PSend9243 = new_Send((Optr)PSend9241, SMB__append_, 1, (Optr)string_9242_Const);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9244 = new_Send((Optr)VAR_value_0_0, SMB_asInteger, 0);
    // ,. 
    Send PSend9245 = new_Send((Optr)PSend9243, SMB__append_, 1, (Optr)PSend9244);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9246 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9245);
    Array PThreadedCode9240 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_mode_0_1, (Optr)&t_send0, (Optr)PSend9241, (Optr)&t_push1, (Optr)string_9242, (Optr)&t_send1, (Optr)PSend9243, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend9244, (Optr)&t_send1, (Optr)PSend9245, (Optr)&t_send1, (Optr)PSend9246, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9238 = new_Method_with(PArray9239, empty_Array, empty_Array, PThreadedCode9240, 2, PSend9246, self);
    
    MethodClosure MC_SMB_fail_in_ = new_MethodClosure((Method)PMethod9238, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_fail_in_, MC_SMB_fail_in_);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9248 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9251 = new_Array_with(1, (Optr)VAR__return__1_0);
    // read. 
    Send PSend9254 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9253 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9254);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9257 = new_Send((Optr)VAR_character_0_0, SMB_asInteger, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9260 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_write_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9261 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9260);
    Array PThreadedCode9259 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9260, (Optr)&t_send1, (Optr)PSend9261, (Optr)&t_block_return);
    Block PBlock9258 = new_Block_with(empty_Array, empty_Array, PThreadedCode9259, 1, PSend9261);
    // at:ifAbsent:. 
    Send PSend9256 = new_Send((Optr)slot_IO_Term_TermInputDriver_normal, SMB_at_ifAbsent_, 2, (Optr)PSend9257, (Optr)PBlock9258);
    Assign PAssign9255 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9256);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9262 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9252 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign9253, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9254, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9255, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend9257, (Optr)&t_push_closure, (Optr)PBlock9258, (Optr)&t_send2, (Optr)PSend9256, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9262, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9250 = new_Block_with(PArray9251, empty_Array, PThreadedCode9252, 4, PAssign9253, PAssign9255, PSend9262, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9263 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9250);
    Array PThreadedCode9249 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9250, (Optr)&t_send1, (Optr)PSend9263, (Optr)&t_method_return);
    Method PMethod9247 = new_Method_with(empty_Array, PArray9248, empty_Array, PThreadedCode9249, 1, PSend9263);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PMethod9247, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_read, MC_SMB_read);
}


static void init_SMB_readSS3() {
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9265 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9268 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9267 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9268);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_9273 = new_String(L"Single-Shift 3");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9273_Const = new_Constant((Optr)string_9273);
    // fail:in:. 
    Send PSend9274 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_0, (Optr)string_9273_Const);
    Array PThreadedCode9272 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)string_9273, (Optr)&t_send2, (Optr)PSend9274, (Optr)&t_block_return);
    Block PBlock9271 = new_Block_with(empty_Array, empty_Array, PThreadedCode9272, 1, PSend9274);
    // at:ifAbsent:. 
    Send PSend9270 = new_Send((Optr)slot_IO_Term_TermInputDriver_ss3, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_0, (Optr)PBlock9271);
    Assign PAssign9269 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9270);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9275 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9266 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign9267, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9268, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9269, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_closure, (Optr)PBlock9271, (Optr)&t_send2, (Optr)PSend9270, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9275, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9264 = new_Method_with(empty_Array, PArray9265, empty_Array, PThreadedCode9266, 4, PAssign9267, PAssign9269, PSend9275, self);
    
    MethodClosure MC_SMB_readSS3 = new_MethodClosure((Method)PMethod9264, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readSS3, MC_SMB_readSS3);
}


static void init_SMB_initializeCSI_() {
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9277 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9279 = new_Character(L'A');
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend9282 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_up, 0);
    Array PThreadedCode9281 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9282, (Optr)&t_block_return);
    Block PBlock9280 = new_Block_with(empty_Array, empty_Array, PThreadedCode9281, 1, PSend9282);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9279_Const = new_Constant((Optr)char_9279);
    // at:put:. 
    Send PSend9283 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9279_Const, (Optr)PBlock9280);
    Character char_8569 = new_Character(L'B');
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend9286 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_down, 0);
    Array PThreadedCode9285 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9286, (Optr)&t_block_return);
    Block PBlock9284 = new_Block_with(empty_Array, empty_Array, PThreadedCode9285, 1, PSend9286);
    Constant char_8569_Const = new_Constant((Optr)char_8569);
    // at:put:. 
    Send PSend9287 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8569_Const, (Optr)PBlock9284);
    Character char_9288 = new_Character(L'C');
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend9291 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_right, 0);
    Array PThreadedCode9290 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9291, (Optr)&t_block_return);
    Block PBlock9289 = new_Block_with(empty_Array, empty_Array, PThreadedCode9290, 1, PSend9291);
    Constant char_9288_Const = new_Constant((Optr)char_9288);
    // at:put:. 
    Send PSend9292 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9288_Const, (Optr)PBlock9289);
    Character char_9293 = new_Character(L'D');
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend9296 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_left, 0);
    Array PThreadedCode9295 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9296, (Optr)&t_block_return);
    Block PBlock9294 = new_Block_with(empty_Array, empty_Array, PThreadedCode9295, 1, PSend9296);
    Constant char_9293_Const = new_Constant((Optr)char_9293);
    // at:put:. 
    Send PSend9297 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9293_Const, (Optr)PBlock9294);
    Character char_8500 = new_Character(L'E');
    Symbol SMB_here = new_Symbol(L"here");
    // here. 
    Send PSend9300 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_here, 0);
    Array PThreadedCode9299 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9300, (Optr)&t_block_return);
    Block PBlock9298 = new_Block_with(empty_Array, empty_Array, PThreadedCode9299, 1, PSend9300);
    Constant char_8500_Const = new_Constant((Optr)char_8500);
    // at:put:. 
    Send PSend9301 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8500_Const, (Optr)PBlock9298);
    Symbol SMB_find = new_Symbol(L"find");
    // find. 
    Send PSend9304 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_find, 0);
    Array PThreadedCode9303 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9304, (Optr)&t_block_return);
    Block PBlock9302 = new_Block_with(empty_Array, empty_Array, PThreadedCode9303, 1, PSend9304);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9305 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9302);
    Symbol SMB_insert = new_Symbol(L"insert");
    // insert. 
    Send PSend9308 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_insert, 0);
    Array PThreadedCode9307 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9308, (Optr)&t_block_return);
    Block PBlock9306 = new_Block_with(empty_Array, empty_Array, PThreadedCode9307, 1, PSend9308);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9309 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9306);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend9312 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_remove, 0);
    Array PThreadedCode9311 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9312, (Optr)&t_block_return);
    Block PBlock9310 = new_Block_with(empty_Array, empty_Array, PThreadedCode9311, 1, PSend9312);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9313 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9310);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_select = new_Symbol(L"select");
    // select. 
    Send PSend9316 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_select, 0);
    Array PThreadedCode9315 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9316, (Optr)&t_block_return);
    Block PBlock9314 = new_Block_with(empty_Array, empty_Array, PThreadedCode9315, 1, PSend9316);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9317 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9314);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    // previousScreen. 
    Send PSend9320 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_previousScreen, 0);
    Array PThreadedCode9319 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9320, (Optr)&t_block_return);
    Block PBlock9318 = new_Block_with(empty_Array, empty_Array, PThreadedCode9319, 1, PSend9320);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9321 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9318);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    // nextScreen. 
    Send PSend9324 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_nextScreen, 0);
    Array PThreadedCode9323 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9324, (Optr)&t_block_return);
    Block PBlock9322 = new_Block_with(empty_Array, empty_Array, PThreadedCode9323, 1, PSend9324);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9325 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9322);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_f5 = new_Symbol(L"f5");
    // f5. 
    Send PSend9328 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f5, 0);
    Array PThreadedCode9327 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9328, (Optr)&t_block_return);
    Block PBlock9326 = new_Block_with(empty_Array, empty_Array, PThreadedCode9327, 1, PSend9328);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9329 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9326);
    SmallInt int_17 = new_SmallInt(17);
    Symbol SMB_f6 = new_Symbol(L"f6");
    // f6. 
    Send PSend9332 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f6, 0);
    Array PThreadedCode9331 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9332, (Optr)&t_block_return);
    Block PBlock9330 = new_Block_with(empty_Array, empty_Array, PThreadedCode9331, 1, PSend9332);
    Constant int_17_Const = new_Constant((Optr)int_17);
    // at:put:. 
    Send PSend9333 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_17_Const, (Optr)PBlock9330);
    SmallInt int_18 = new_SmallInt(18);
    Symbol SMB_f7 = new_Symbol(L"f7");
    // f7. 
    Send PSend9336 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f7, 0);
    Array PThreadedCode9335 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9336, (Optr)&t_block_return);
    Block PBlock9334 = new_Block_with(empty_Array, empty_Array, PThreadedCode9335, 1, PSend9336);
    Constant int_18_Const = new_Constant((Optr)int_18);
    // at:put:. 
    Send PSend9337 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_18_Const, (Optr)PBlock9334);
    SmallInt int_19 = new_SmallInt(19);
    Symbol SMB_f8 = new_Symbol(L"f8");
    // f8. 
    Send PSend9340 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f8, 0);
    Array PThreadedCode9339 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9340, (Optr)&t_block_return);
    Block PBlock9338 = new_Block_with(empty_Array, empty_Array, PThreadedCode9339, 1, PSend9340);
    Constant int_19_Const = new_Constant((Optr)int_19);
    // at:put:. 
    Send PSend9341 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_19_Const, (Optr)PBlock9338);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_f9 = new_Symbol(L"f9");
    // f9. 
    Send PSend9344 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f9, 0);
    Array PThreadedCode9343 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9344, (Optr)&t_block_return);
    Block PBlock9342 = new_Block_with(empty_Array, empty_Array, PThreadedCode9343, 1, PSend9344);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // at:put:. 
    Send PSend9345 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_20_Const, (Optr)PBlock9342);
    SmallInt int_21 = new_SmallInt(21);
    Symbol SMB_f10 = new_Symbol(L"f10");
    // f10. 
    Send PSend9348 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f10, 0);
    Array PThreadedCode9347 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9348, (Optr)&t_block_return);
    Block PBlock9346 = new_Block_with(empty_Array, empty_Array, PThreadedCode9347, 1, PSend9348);
    Constant int_21_Const = new_Constant((Optr)int_21);
    // at:put:. 
    Send PSend9349 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_21_Const, (Optr)PBlock9346);
    SmallInt int_23 = new_SmallInt(23);
    Symbol SMB_f11 = new_Symbol(L"f11");
    // f11. 
    Send PSend9352 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f11, 0);
    Array PThreadedCode9351 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9352, (Optr)&t_block_return);
    Block PBlock9350 = new_Block_with(empty_Array, empty_Array, PThreadedCode9351, 1, PSend9352);
    Constant int_23_Const = new_Constant((Optr)int_23);
    // at:put:. 
    Send PSend9353 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_23_Const, (Optr)PBlock9350);
    SmallInt int_24 = new_SmallInt(24);
    Symbol SMB_f12 = new_Symbol(L"f12");
    // f12. 
    Send PSend9356 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f12, 0);
    Array PThreadedCode9355 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9356, (Optr)&t_block_return);
    Block PBlock9354 = new_Block_with(empty_Array, empty_Array, PThreadedCode9355, 1, PSend9356);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // at:put:. 
    Send PSend9357 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_24_Const, (Optr)PBlock9354);
    SmallInt int_25 = new_SmallInt(25);
    Symbol SMB_f13 = new_Symbol(L"f13");
    // f13. 
    Send PSend9360 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f13, 0);
    Array PThreadedCode9359 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9360, (Optr)&t_block_return);
    Block PBlock9358 = new_Block_with(empty_Array, empty_Array, PThreadedCode9359, 1, PSend9360);
    Constant int_25_Const = new_Constant((Optr)int_25);
    // at:put:. 
    Send PSend9361 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_25_Const, (Optr)PBlock9358);
    SmallInt int_26 = new_SmallInt(26);
    Symbol SMB_f14 = new_Symbol(L"f14");
    // f14. 
    Send PSend9364 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f14, 0);
    Array PThreadedCode9363 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9364, (Optr)&t_block_return);
    Block PBlock9362 = new_Block_with(empty_Array, empty_Array, PThreadedCode9363, 1, PSend9364);
    Constant int_26_Const = new_Constant((Optr)int_26);
    // at:put:. 
    Send PSend9365 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_26_Const, (Optr)PBlock9362);
    SmallInt int_28 = new_SmallInt(28);
    Symbol SMB_f15 = new_Symbol(L"f15");
    // f15. 
    Send PSend9368 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f15, 0);
    Array PThreadedCode9367 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9368, (Optr)&t_block_return);
    Block PBlock9366 = new_Block_with(empty_Array, empty_Array, PThreadedCode9367, 1, PSend9368);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend9369 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_28_Const, (Optr)PBlock9366);
    SmallInt int_29 = new_SmallInt(29);
    Symbol SMB_f16 = new_Symbol(L"f16");
    // f16. 
    Send PSend9372 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f16, 0);
    Array PThreadedCode9371 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9372, (Optr)&t_block_return);
    Block PBlock9370 = new_Block_with(empty_Array, empty_Array, PThreadedCode9371, 1, PSend9372);
    Constant int_29_Const = new_Constant((Optr)int_29);
    // at:put:. 
    Send PSend9373 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_29_Const, (Optr)PBlock9370);
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_f17 = new_Symbol(L"f17");
    // f17. 
    Send PSend9376 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f17, 0);
    Array PThreadedCode9375 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9376, (Optr)&t_block_return);
    Block PBlock9374 = new_Block_with(empty_Array, empty_Array, PThreadedCode9375, 1, PSend9376);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend9377 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_31_Const, (Optr)PBlock9374);
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_f18 = new_Symbol(L"f18");
    // f18. 
    Send PSend9380 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f18, 0);
    Array PThreadedCode9379 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9380, (Optr)&t_block_return);
    Block PBlock9378 = new_Block_with(empty_Array, empty_Array, PThreadedCode9379, 1, PSend9380);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // at:put:. 
    Send PSend9381 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_32_Const, (Optr)PBlock9378);
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_f19 = new_Symbol(L"f19");
    // f19. 
    Send PSend9384 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f19, 0);
    Array PThreadedCode9383 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9384, (Optr)&t_block_return);
    Block PBlock9382 = new_Block_with(empty_Array, empty_Array, PThreadedCode9383, 1, PSend9384);
    Constant int_33_Const = new_Constant((Optr)int_33);
    // at:put:. 
    Send PSend9385 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_33_Const, (Optr)PBlock9382);
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_f20 = new_Symbol(L"f20");
    // f20. 
    Send PSend9388 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f20, 0);
    Array PThreadedCode9387 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9388, (Optr)&t_block_return);
    Block PBlock9386 = new_Block_with(empty_Array, empty_Array, PThreadedCode9387, 1, PSend9388);
    Constant int_34_Const = new_Constant((Optr)int_34);
    // at:put:. 
    Send PSend9389 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_34_Const, (Optr)PBlock9386);
    Character char_8446 = new_Character(L'[');
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9392 = new_Send((Optr)self, SMB_readCSI, 0);
    Array PThreadedCode9391 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9392, (Optr)&t_block_return);
    Block PBlock9390 = new_Block_with(empty_Array, empty_Array, PThreadedCode9391, 1, PSend9392);
    Constant char_8446_Const = new_Constant((Optr)char_8446);
    // at:put:. 
    Send PSend9393 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8446_Const, (Optr)PBlock9390);
    Array PThreadedCode9278 = instantiate_Array_with(ThreadedCode_Class, 0, 251, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9279, (Optr)&t_push_closure, (Optr)PBlock9280, (Optr)&t_send2, (Optr)PSend9283, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8569, (Optr)&t_push_closure, (Optr)PBlock9284, (Optr)&t_send2, (Optr)PSend9287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9288, (Optr)&t_push_closure, (Optr)PBlock9289, (Optr)&t_send2, (Optr)PSend9292, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9293, (Optr)&t_push_closure, (Optr)PBlock9294, (Optr)&t_send2, (Optr)PSend9297, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8500, (Optr)&t_push_closure, (Optr)PBlock9298, (Optr)&t_send2, (Optr)PSend9301, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9302, (Optr)&t_send2, (Optr)PSend9305, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9306, (Optr)&t_send2, (Optr)PSend9309, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9310, (Optr)&t_send2, (Optr)PSend9313, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9314, (Optr)&t_send2, (Optr)PSend9317, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9318, (Optr)&t_send2, (Optr)PSend9321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9322, (Optr)&t_send2, (Optr)PSend9325, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9326, (Optr)&t_send2, (Optr)PSend9329, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_17, (Optr)&t_push_closure, (Optr)PBlock9330, (Optr)&t_send2, (Optr)PSend9333, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_18, (Optr)&t_push_closure, (Optr)PBlock9334, (Optr)&t_send2, (Optr)PSend9337, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_19, (Optr)&t_push_closure, (Optr)PBlock9338, (Optr)&t_send2, (Optr)PSend9341, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_push_closure, (Optr)PBlock9342, (Optr)&t_send2, (Optr)PSend9345, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_21, (Optr)&t_push_closure, (Optr)PBlock9346, (Optr)&t_send2, (Optr)PSend9349, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_23, (Optr)&t_push_closure, (Optr)PBlock9350, (Optr)&t_send2, (Optr)PSend9353, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_24, (Optr)&t_push_closure, (Optr)PBlock9354, (Optr)&t_send2, (Optr)PSend9357, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_push_closure, (Optr)PBlock9358, (Optr)&t_send2, (Optr)PSend9361, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_26, (Optr)&t_push_closure, (Optr)PBlock9362, (Optr)&t_send2, (Optr)PSend9365, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_28, (Optr)&t_push_closure, (Optr)PBlock9366, (Optr)&t_send2, (Optr)PSend9369, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_29, (Optr)&t_push_closure, (Optr)PBlock9370, (Optr)&t_send2, (Optr)PSend9373, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_31, (Optr)&t_push_closure, (Optr)PBlock9374, (Optr)&t_send2, (Optr)PSend9377, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_push_closure, (Optr)PBlock9378, (Optr)&t_send2, (Optr)PSend9381, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_33, (Optr)&t_push_closure, (Optr)PBlock9382, (Optr)&t_send2, (Optr)PSend9385, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_34, (Optr)&t_push_closure, (Optr)PBlock9386, (Optr)&t_send2, (Optr)PSend9389, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8446, (Optr)&t_push_closure, (Optr)PBlock9390, (Optr)&t_send2, (Optr)PSend9393, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9276 = new_Method_with(PArray9277, empty_Array, empty_Array, PThreadedCode9278, 29, PSend9283, PSend9287, PSend9292, PSend9297, PSend9301, PSend9305, PSend9309, PSend9313, PSend9317, PSend9321, PSend9325, PSend9329, PSend9333, PSend9337, PSend9341, PSend9345, PSend9349, PSend9353, PSend9357, PSend9361, PSend9365, PSend9369, PSend9373, PSend9377, PSend9381, PSend9385, PSend9389, PSend9393, self);
    
    MethodClosure MC_SMB_initializeCSI_ = new_MethodClosure((Method)PMethod9276, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeCSI_, MC_SMB_initializeCSI_);
}


static void init_SMB_handler_() {
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9395 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9397 = new_Assign((Optr)slot_IO_Term_TermInputDriver_handler, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9396 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9397, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9394 = new_Method_with(PArray9395, empty_Array, empty_Array, PThreadedCode9396, 2, PAssign9397, self);
    
    MethodClosure MC_SMB_handler_ = new_MethodClosure((Method)PMethod9394, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_handler_, MC_SMB_handler_);
}


static void init_SMB_initializeNormal_() {
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9399 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend9403 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfHeading, 0);
    Array PThreadedCode9402 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9403, (Optr)&t_block_return);
    Block PBlock9401 = new_Block_with(empty_Array, empty_Array, PThreadedCode9402, 1, PSend9403);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9404 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9401);
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend9407 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfText, 0);
    Array PThreadedCode9406 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9407, (Optr)&t_block_return);
    Block PBlock9405 = new_Block_with(empty_Array, empty_Array, PThreadedCode9406, 1, PSend9407);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9408 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9405);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend9411 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfText, 0);
    Array PThreadedCode9410 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9411, (Optr)&t_block_return);
    Block PBlock9409 = new_Block_with(empty_Array, empty_Array, PThreadedCode9410, 1, PSend9411);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9412 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9409);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    // endOfTransmission. 
    Send PSend9415 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfTransmission, 0);
    Array PThreadedCode9414 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9415, (Optr)&t_block_return);
    Block PBlock9413 = new_Block_with(empty_Array, empty_Array, PThreadedCode9414, 1, PSend9415);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9416 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9413);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    // enquiry. 
    Send PSend9419 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_enquiry, 0);
    Array PThreadedCode9418 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9419, (Optr)&t_block_return);
    Block PBlock9417 = new_Block_with(empty_Array, empty_Array, PThreadedCode9418, 1, PSend9419);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9420 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9417);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    // acknowledge. 
    Send PSend9423 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_acknowledge, 0);
    Array PThreadedCode9422 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9423, (Optr)&t_block_return);
    Block PBlock9421 = new_Block_with(empty_Array, empty_Array, PThreadedCode9422, 1, PSend9423);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9424 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9421);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_bell = new_Symbol(L"bell");
    // bell. 
    Send PSend9427 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_bell, 0);
    Array PThreadedCode9426 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9427, (Optr)&t_block_return);
    Block PBlock9425 = new_Block_with(empty_Array, empty_Array, PThreadedCode9426, 1, PSend9427);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend9428 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PBlock9425);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend9431 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_backspace, 0);
    Array PThreadedCode9430 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9431, (Optr)&t_block_return);
    Block PBlock9429 = new_Block_with(empty_Array, empty_Array, PThreadedCode9430, 1, PSend9431);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend9432 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PBlock9429);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9435 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_tab, 0);
    Array PThreadedCode9434 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9435, (Optr)&t_block_return);
    Block PBlock9433 = new_Block_with(empty_Array, empty_Array, PThreadedCode9434, 1, PSend9435);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend9436 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PBlock9433);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend9439 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_lf, 0);
    Array PThreadedCode9438 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9439, (Optr)&t_block_return);
    Block PBlock9437 = new_Block_with(empty_Array, empty_Array, PThreadedCode9438, 1, PSend9439);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend9440 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PBlock9437);
    SmallInt int_11 = new_SmallInt(11);
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    // verticalTab. 
    Send PSend9443 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_verticalTab, 0);
    Array PThreadedCode9442 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9443, (Optr)&t_block_return);
    Block PBlock9441 = new_Block_with(empty_Array, empty_Array, PThreadedCode9442, 1, PSend9443);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend9444 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PBlock9441);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    // formfeed. 
    Send PSend9447 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_formfeed, 0);
    Array PThreadedCode9446 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9447, (Optr)&t_block_return);
    Block PBlock9445 = new_Block_with(empty_Array, empty_Array, PThreadedCode9446, 1, PSend9447);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend9448 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PBlock9445);
    SmallInt int_13 = new_SmallInt(13);
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    // carriageReturn. 
    Send PSend9451 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_carriageReturn, 0);
    Array PThreadedCode9450 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9451, (Optr)&t_block_return);
    Block PBlock9449 = new_Block_with(empty_Array, empty_Array, PThreadedCode9450, 1, PSend9451);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // at:put:. 
    Send PSend9452 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_13_Const, (Optr)PBlock9449);
    SmallInt int_14 = new_SmallInt(14);
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    // shiftOut. 
    Send PSend9455 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftOut, 0);
    Array PThreadedCode9454 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9455, (Optr)&t_block_return);
    Block PBlock9453 = new_Block_with(empty_Array, empty_Array, PThreadedCode9454, 1, PSend9455);
    Constant int_14_Const = new_Constant((Optr)int_14);
    // at:put:. 
    Send PSend9456 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_14_Const, (Optr)PBlock9453);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    // shiftIn. 
    Send PSend9459 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftIn, 0);
    Array PThreadedCode9458 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9459, (Optr)&t_block_return);
    Block PBlock9457 = new_Block_with(empty_Array, empty_Array, PThreadedCode9458, 1, PSend9459);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9460 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9457);
    SmallInt int_27 = new_SmallInt(27);
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    // readC1. 
    Send PSend9463 = new_Send((Optr)self, SMB_readC1, 0);
    Array PThreadedCode9462 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9463, (Optr)&t_block_return);
    Block PBlock9461 = new_Block_with(empty_Array, empty_Array, PThreadedCode9462, 1, PSend9463);
    Constant int_27_Const = new_Constant((Optr)int_27);
    // at:put:. 
    Send PSend9464 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_27_Const, (Optr)PBlock9461);
    SmallInt int_127 = new_SmallInt(127);
    Symbol SMB_delete = new_Symbol(L"delete");
    // delete. 
    Send PSend9467 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_delete, 0);
    Array PThreadedCode9466 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9467, (Optr)&t_block_return);
    Block PBlock9465 = new_Block_with(empty_Array, empty_Array, PThreadedCode9466, 1, PSend9467);
    Constant int_127_Const = new_Constant((Optr)int_127);
    // at:put:. 
    Send PSend9468 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_127_Const, (Optr)PBlock9465);
    Array PThreadedCode9400 = instantiate_Array_with(ThreadedCode_Class, 0, 152, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9401, (Optr)&t_send2, (Optr)PSend9404, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9405, (Optr)&t_send2, (Optr)PSend9408, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9409, (Optr)&t_send2, (Optr)PSend9412, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9413, (Optr)&t_send2, (Optr)PSend9416, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9417, (Optr)&t_send2, (Optr)PSend9420, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9421, (Optr)&t_send2, (Optr)PSend9424, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_closure, (Optr)PBlock9425, (Optr)&t_send2, (Optr)PSend9428, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_closure, (Optr)PBlock9429, (Optr)&t_send2, (Optr)PSend9432, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_closure, (Optr)PBlock9433, (Optr)&t_send2, (Optr)PSend9436, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_closure, (Optr)PBlock9437, (Optr)&t_send2, (Optr)PSend9440, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_closure, (Optr)PBlock9441, (Optr)&t_send2, (Optr)PSend9444, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_closure, (Optr)PBlock9445, (Optr)&t_send2, (Optr)PSend9448, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_push_closure, (Optr)PBlock9449, (Optr)&t_send2, (Optr)PSend9452, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_14, (Optr)&t_push_closure, (Optr)PBlock9453, (Optr)&t_send2, (Optr)PSend9456, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9457, (Optr)&t_send2, (Optr)PSend9460, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_27, (Optr)&t_push_closure, (Optr)PBlock9461, (Optr)&t_send2, (Optr)PSend9464, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_127, (Optr)&t_push_closure, (Optr)PBlock9465, (Optr)&t_send2, (Optr)PSend9468, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9398 = new_Method_with(PArray9399, empty_Array, empty_Array, PThreadedCode9400, 18, PSend9404, PSend9408, PSend9412, PSend9416, PSend9420, PSend9424, PSend9428, PSend9432, PSend9436, PSend9440, PSend9444, PSend9448, PSend9452, PSend9456, PSend9460, PSend9464, PSend9468, self);
    
    MethodClosure MC_SMB_initializeNormal_ = new_MethodClosure((Method)PMethod9398, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeNormal_, MC_SMB_initializeNormal_);
}


static void init_SMB_readCSI() {
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_2 = new_Variable_named(L"action", 0);
    Array PArray9470 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_character_0_1, (Optr)VAR_action_0_2);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9473 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9472 = new_Assign((Optr)VAR_character_0_1, (Optr)PSend9473);
    Character char_9197 = new_Character(L'0');
    Constant char_9197_Const = new_Constant((Optr)char_9197);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9477 = new_Send((Optr)char_9197_Const, SMB__lt__equals_, 1, (Optr)VAR_character_0_1);
    Symbol SMB_and_ = new_Symbol(L"and:");
    Character char_9203 = new_Character(L'9');
    Constant char_9203_Const = new_Constant((Optr)char_9203);
    // <=. 
    Send PSend9480 = new_Send((Optr)VAR_character_0_1, SMB__lt__equals_, 1, (Optr)char_9203_Const);
    Array PThreadedCode9479 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)char_9203, (Optr)&t_send1, (Optr)PSend9480, (Optr)&t_block_return);
    Block PBlock9478 = new_Block_with(empty_Array, empty_Array, PThreadedCode9479, 1, PSend9480);
    // and:. 
    Send PSend9476 = new_Send((Optr)PSend9477, SMB_and_, 1, (Optr)PBlock9478);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9483 = new_Send((Optr)VAR_character_0_1, SMB_asInteger, 0);
    // asInteger. 
    Send PSend9484 = new_Send((Optr)char_9197_Const, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9485 = new_Send((Optr)PSend9483, SMB__minus_, 1, (Optr)PSend9484);
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    // continueReadCSINumber:. 
    Send PSend9486 = new_Send((Optr)self, SMB_continueReadCSINumber_, 1, (Optr)PSend9485);
    Array PThreadedCode9482 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send0, (Optr)PSend9483, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_send0, (Optr)PSend9484, (Optr)&t_send1, (Optr)PSend9485, (Optr)&t_send1, (Optr)PSend9486, (Optr)&t_block_return);
    Block PBlock9481 = new_Block_with(empty_Array, empty_Array, PThreadedCode9482, 1, PSend9486);
    String string_9491 = new_String(L"Control Sequence Introducer");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9491_Const = new_Constant((Optr)string_9491);
    // fail:in:. 
    Send PSend9492 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_1, (Optr)string_9491_Const);
    Array PThreadedCode9490 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)string_9491, (Optr)&t_send2, (Optr)PSend9492, (Optr)&t_block_return);
    Block PBlock9489 = new_Block_with(empty_Array, empty_Array, PThreadedCode9490, 1, PSend9492);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9493 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_1, (Optr)PBlock9489);
    Array PThreadedCode9488 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push_closure, (Optr)PBlock9489, (Optr)&t_send2, (Optr)PSend9493, (Optr)&t_block_return);
    Block PBlock9487 = new_Block_with(empty_Array, empty_Array, PThreadedCode9488, 1, PSend9493);
    // ifTrue:ifFalse:. 
    Send PSend9475 = new_Send((Optr)PSend9476, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock9481, (Optr)PBlock9487);
    Assign PAssign9474 = new_Assign((Optr)VAR_action_0_2, (Optr)PSend9475);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9494 = new_Send((Optr)VAR_action_0_2, SMB_value, 0);
    Array PThreadedCode9471 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9472, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9473, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9474, (Optr)&t_push1, (Optr)char_9197, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send1, (Optr)PSend9477, (Optr)&t_push_closure, (Optr)PBlock9478, (Optr)&t_send1, (Optr)PSend9476, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend9475, (Optr)PBlock9481, (Optr)PBlock9487, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_2, (Optr)&t_send0, (Optr)PSend9494, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9469 = new_Method_with(empty_Array, PArray9470, empty_Array, PThreadedCode9471, 4, PAssign9472, PAssign9474, PSend9494, self);
    
    MethodClosure MC_SMB_readCSI = new_MethodClosure((Method)PMethod9469, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readCSI, MC_SMB_readCSI);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray9496 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper9498 = new_Super(SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend9499 = new_Send((Optr)PSuper9498, SMB_name_, 1, (Optr)VAR_n_0_0);
    Array PThreadedCode9497 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9498, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend9499, (Optr)&t_method_return);
    Method PMethod9495 = new_Method_with(PArray9496, empty_Array, empty_Array, PThreadedCode9497, 1, PSend9499);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod9495, HEADER(IO_Term_TermInputDriver_Class));
    store_method(HEADER(IO_Term_TermInputDriver_Class), SMB_named_, MC_SMB_named_);
}

void init_IO_Term_PVTermInputDriver_layout() {
    layout_IO_Term_TermInputDriver_Class_class = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_Term_TermInputDriver_Class_class)->values[0] = slot_Kernel_Object_Object_Class_class_layout; // layout 
    ((Array)layout_IO_Term_TermInputDriver_Class_class)->values[1] = slot_Kernel_Object_Object_Class_class_superclass; // superclass 
    ((Array)layout_IO_Term_TermInputDriver_Class_class)->values[2] = slot_Kernel_Object_Object_Class_class_methods; // methods 
    ((Array)layout_IO_Term_TermInputDriver_Class_class)->values[3] = slot_Kernel_Object_Object_Class_class_name; // name 
    ((Array)layout_IO_Term_TermInputDriver_Class_class)->values[4] = slot_Kernel_Object_Object_Class_class_package; // package 
    
    Symbol  SMB_TermInputDriver = new_Symbol(L"TermInputDriver");
    slot_IO_Term_TermInputDriver_input = (Optr)new_Slot(0, L"input");
    slot_IO_Term_TermInputDriver_handler = (Optr)new_Slot(1, L"handler");
    slot_IO_Term_TermInputDriver_normal = (Optr)new_Slot(2, L"normal");
    slot_IO_Term_TermInputDriver_csi = (Optr)new_Slot(3, L"csi");
    slot_IO_Term_TermInputDriver_ss3 = (Optr)new_Slot(4, L"ss3");
    layout_IO_Term_TermInputDriver = (Optr)create_layout_with_vars(ObjectLayout_Class, 5);
    ((Array)layout_IO_Term_TermInputDriver)->values[0] = slot_IO_Term_TermInputDriver_input; // input 
    ((Array)layout_IO_Term_TermInputDriver)->values[1] = slot_IO_Term_TermInputDriver_handler; // handler 
    ((Array)layout_IO_Term_TermInputDriver)->values[2] = slot_IO_Term_TermInputDriver_normal; // normal 
    ((Array)layout_IO_Term_TermInputDriver)->values[3] = slot_IO_Term_TermInputDriver_csi; // csi 
    ((Array)layout_IO_Term_TermInputDriver)->values[4] = slot_IO_Term_TermInputDriver_ss3; // ss3 
    IO_Term_TermInputDriver_Class = (Class)new_Class(Object_Class, layout_IO_Term_TermInputDriver_Class_class);
    IO_Term_TermInputDriver_Class->layout = layout_IO_Term_TermInputDriver;
    IO_Term_TermInputDriver_Class->name = SMB_TermInputDriver;
    
}

void init_IO_Term_PVTermInputDriver_methods() {
    init_SMB_initializeSS3_();
    init_SMB_readC1();
    init_SMB_input_();
    init_SMB_continueReadCSINumber_();
    init_SMB_initialize();
    init_SMB_fail_in_();
    init_SMB_read();
    init_SMB_readSS3();
    init_SMB_initializeCSI_();
    init_SMB_handler_();
    init_SMB_initializeNormal_();
    init_SMB_readCSI();
    init_class_SMB_named_();
    
}