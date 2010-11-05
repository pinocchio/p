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
    Array PArray9025 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9027 = new_Character(L'p');
    Symbol SMB_keypad0 = new_Symbol(L"keypad0");
    // keypad0. 
    Send PSend9030 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad0, 0);
    Array PThreadedCode9029 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9030, (Optr)&t_block_return);
    Block PBlock9028 = new_Block_with(empty_Array, empty_Array, PThreadedCode9029, 1, PSend9030);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9027_Const = new_Constant((Optr)char_9027);
    // at:put:. 
    Send PSend9031 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9027_Const, (Optr)PBlock9028);
    Character char_9032 = new_Character(L'q');
    Symbol SMB_keypad1 = new_Symbol(L"keypad1");
    // keypad1. 
    Send PSend9035 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad1, 0);
    Array PThreadedCode9034 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9035, (Optr)&t_block_return);
    Block PBlock9033 = new_Block_with(empty_Array, empty_Array, PThreadedCode9034, 1, PSend9035);
    Constant char_9032_Const = new_Constant((Optr)char_9032);
    // at:put:. 
    Send PSend9036 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9032_Const, (Optr)PBlock9033);
    Character char_9037 = new_Character(L'r');
    Symbol SMB_keypad2 = new_Symbol(L"keypad2");
    // keypad2. 
    Send PSend9040 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad2, 0);
    Array PThreadedCode9039 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9040, (Optr)&t_block_return);
    Block PBlock9038 = new_Block_with(empty_Array, empty_Array, PThreadedCode9039, 1, PSend9040);
    Constant char_9037_Const = new_Constant((Optr)char_9037);
    // at:put:. 
    Send PSend9041 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9037_Const, (Optr)PBlock9038);
    Character char_9042 = new_Character(L's');
    Symbol SMB_keypad3 = new_Symbol(L"keypad3");
    // keypad3. 
    Send PSend9045 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad3, 0);
    Array PThreadedCode9044 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9045, (Optr)&t_block_return);
    Block PBlock9043 = new_Block_with(empty_Array, empty_Array, PThreadedCode9044, 1, PSend9045);
    Constant char_9042_Const = new_Constant((Optr)char_9042);
    // at:put:. 
    Send PSend9046 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9042_Const, (Optr)PBlock9043);
    Character char_9047 = new_Character(L't');
    Symbol SMB_keypad4 = new_Symbol(L"keypad4");
    // keypad4. 
    Send PSend9050 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad4, 0);
    Array PThreadedCode9049 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9050, (Optr)&t_block_return);
    Block PBlock9048 = new_Block_with(empty_Array, empty_Array, PThreadedCode9049, 1, PSend9050);
    Constant char_9047_Const = new_Constant((Optr)char_9047);
    // at:put:. 
    Send PSend9051 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9047_Const, (Optr)PBlock9048);
    Character char_9052 = new_Character(L'u');
    Symbol SMB_keypad5 = new_Symbol(L"keypad5");
    // keypad5. 
    Send PSend9055 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad5, 0);
    Array PThreadedCode9054 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9055, (Optr)&t_block_return);
    Block PBlock9053 = new_Block_with(empty_Array, empty_Array, PThreadedCode9054, 1, PSend9055);
    Constant char_9052_Const = new_Constant((Optr)char_9052);
    // at:put:. 
    Send PSend9056 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9052_Const, (Optr)PBlock9053);
    Character char_9057 = new_Character(L'v');
    Symbol SMB_keypad6 = new_Symbol(L"keypad6");
    // keypad6. 
    Send PSend9060 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad6, 0);
    Array PThreadedCode9059 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9060, (Optr)&t_block_return);
    Block PBlock9058 = new_Block_with(empty_Array, empty_Array, PThreadedCode9059, 1, PSend9060);
    Constant char_9057_Const = new_Constant((Optr)char_9057);
    // at:put:. 
    Send PSend9061 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9057_Const, (Optr)PBlock9058);
    Character char_9062 = new_Character(L'w');
    Symbol SMB_keypad7 = new_Symbol(L"keypad7");
    // keypad7. 
    Send PSend9065 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad7, 0);
    Array PThreadedCode9064 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9065, (Optr)&t_block_return);
    Block PBlock9063 = new_Block_with(empty_Array, empty_Array, PThreadedCode9064, 1, PSend9065);
    Constant char_9062_Const = new_Constant((Optr)char_9062);
    // at:put:. 
    Send PSend9066 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9062_Const, (Optr)PBlock9063);
    Character char_9067 = new_Character(L'x');
    Symbol SMB_keypad8 = new_Symbol(L"keypad8");
    // keypad8. 
    Send PSend9070 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad8, 0);
    Array PThreadedCode9069 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9070, (Optr)&t_block_return);
    Block PBlock9068 = new_Block_with(empty_Array, empty_Array, PThreadedCode9069, 1, PSend9070);
    Constant char_9067_Const = new_Constant((Optr)char_9067);
    // at:put:. 
    Send PSend9071 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9067_Const, (Optr)PBlock9068);
    Character char_9072 = new_Character(L'y');
    Symbol SMB_keypad9 = new_Symbol(L"keypad9");
    // keypad9. 
    Send PSend9075 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad9, 0);
    Array PThreadedCode9074 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9075, (Optr)&t_block_return);
    Block PBlock9073 = new_Block_with(empty_Array, empty_Array, PThreadedCode9074, 1, PSend9075);
    Constant char_9072_Const = new_Constant((Optr)char_9072);
    // at:put:. 
    Send PSend9076 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9072_Const, (Optr)PBlock9073);
    Character char_8494 = new_Character(L'm');
    Symbol SMB_keypadMinus = new_Symbol(L"keypadMinus");
    // keypadMinus. 
    Send PSend9079 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadMinus, 0);
    Array PThreadedCode9078 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9079, (Optr)&t_block_return);
    Block PBlock9077 = new_Block_with(empty_Array, empty_Array, PThreadedCode9078, 1, PSend9079);
    Constant char_8494_Const = new_Constant((Optr)char_8494);
    // at:put:. 
    Send PSend9080 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8494_Const, (Optr)PBlock9077);
    Character char_9081 = new_Character(L'l');
    Symbol SMB_keypadBacktick = new_Symbol(L"keypadBacktick");
    // keypadBacktick. 
    Send PSend9084 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadBacktick, 0);
    Array PThreadedCode9083 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9084, (Optr)&t_block_return);
    Block PBlock9082 = new_Block_with(empty_Array, empty_Array, PThreadedCode9083, 1, PSend9084);
    Constant char_9081_Const = new_Constant((Optr)char_9081);
    // at:put:. 
    Send PSend9085 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9081_Const, (Optr)PBlock9082);
    Character char_9086 = new_Character(L'n');
    Symbol SMB_keypadDot = new_Symbol(L"keypadDot");
    // keypadDot. 
    Send PSend9089 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadDot, 0);
    Array PThreadedCode9088 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9089, (Optr)&t_block_return);
    Block PBlock9087 = new_Block_with(empty_Array, empty_Array, PThreadedCode9088, 1, PSend9089);
    Constant char_9086_Const = new_Constant((Optr)char_9086);
    // at:put:. 
    Send PSend9090 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9086_Const, (Optr)PBlock9087);
    Character char_9091 = new_Character(L'M');
    Symbol SMB_keypadEnter = new_Symbol(L"keypadEnter");
    // keypadEnter. 
    Send PSend9094 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadEnter, 0);
    Array PThreadedCode9093 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9094, (Optr)&t_block_return);
    Block PBlock9092 = new_Block_with(empty_Array, empty_Array, PThreadedCode9093, 1, PSend9094);
    Constant char_9091_Const = new_Constant((Optr)char_9091);
    // at:put:. 
    Send PSend9095 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9091_Const, (Optr)PBlock9092);
    Character char_9096 = new_Character(L'P');
    Symbol SMB_f1 = new_Symbol(L"f1");
    // f1. 
    Send PSend9099 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f1, 0);
    Array PThreadedCode9098 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9099, (Optr)&t_block_return);
    Block PBlock9097 = new_Block_with(empty_Array, empty_Array, PThreadedCode9098, 1, PSend9099);
    Constant char_9096_Const = new_Constant((Optr)char_9096);
    // at:put:. 
    Send PSend9100 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9096_Const, (Optr)PBlock9097);
    Character char_9101 = new_Character(L'Q');
    Symbol SMB_f2 = new_Symbol(L"f2");
    // f2. 
    Send PSend9104 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f2, 0);
    Array PThreadedCode9103 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9104, (Optr)&t_block_return);
    Block PBlock9102 = new_Block_with(empty_Array, empty_Array, PThreadedCode9103, 1, PSend9104);
    Constant char_9101_Const = new_Constant((Optr)char_9101);
    // at:put:. 
    Send PSend9105 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9101_Const, (Optr)PBlock9102);
    Character char_9106 = new_Character(L'R');
    Symbol SMB_f3 = new_Symbol(L"f3");
    // f3. 
    Send PSend9109 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f3, 0);
    Array PThreadedCode9108 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9109, (Optr)&t_block_return);
    Block PBlock9107 = new_Block_with(empty_Array, empty_Array, PThreadedCode9108, 1, PSend9109);
    Constant char_9106_Const = new_Constant((Optr)char_9106);
    // at:put:. 
    Send PSend9110 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9106_Const, (Optr)PBlock9107);
    Character char_9111 = new_Character(L'S');
    Symbol SMB_f4 = new_Symbol(L"f4");
    // f4. 
    Send PSend9114 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f4, 0);
    Array PThreadedCode9113 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9114, (Optr)&t_block_return);
    Block PBlock9112 = new_Block_with(empty_Array, empty_Array, PThreadedCode9113, 1, PSend9114);
    Constant char_9111_Const = new_Constant((Optr)char_9111);
    // at:put:. 
    Send PSend9115 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9111_Const, (Optr)PBlock9112);
    Character char_9116 = new_Character(L'H');
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend9119 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_home, 0);
    Array PThreadedCode9118 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9119, (Optr)&t_block_return);
    Block PBlock9117 = new_Block_with(empty_Array, empty_Array, PThreadedCode9118, 1, PSend9119);
    Constant char_9116_Const = new_Constant((Optr)char_9116);
    // at:put:. 
    Send PSend9120 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9116_Const, (Optr)PBlock9117);
    Character char_9121 = new_Character(L'F');
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend9124 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_end, 0);
    Array PThreadedCode9123 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9124, (Optr)&t_block_return);
    Block PBlock9122 = new_Block_with(empty_Array, empty_Array, PThreadedCode9123, 1, PSend9124);
    Constant char_9121_Const = new_Constant((Optr)char_9121);
    // at:put:. 
    Send PSend9125 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9121_Const, (Optr)PBlock9122);
    Array PThreadedCode9026 = instantiate_Array_with(ThreadedCode_Class, 0, 181, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9027, (Optr)&t_push_closure, (Optr)PBlock9028, (Optr)&t_send2, (Optr)PSend9031, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9032, (Optr)&t_push_closure, (Optr)PBlock9033, (Optr)&t_send2, (Optr)PSend9036, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9037, (Optr)&t_push_closure, (Optr)PBlock9038, (Optr)&t_send2, (Optr)PSend9041, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9042, (Optr)&t_push_closure, (Optr)PBlock9043, (Optr)&t_send2, (Optr)PSend9046, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9047, (Optr)&t_push_closure, (Optr)PBlock9048, (Optr)&t_send2, (Optr)PSend9051, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9052, (Optr)&t_push_closure, (Optr)PBlock9053, (Optr)&t_send2, (Optr)PSend9056, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9057, (Optr)&t_push_closure, (Optr)PBlock9058, (Optr)&t_send2, (Optr)PSend9061, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9062, (Optr)&t_push_closure, (Optr)PBlock9063, (Optr)&t_send2, (Optr)PSend9066, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9067, (Optr)&t_push_closure, (Optr)PBlock9068, (Optr)&t_send2, (Optr)PSend9071, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9072, (Optr)&t_push_closure, (Optr)PBlock9073, (Optr)&t_send2, (Optr)PSend9076, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8494, (Optr)&t_push_closure, (Optr)PBlock9077, (Optr)&t_send2, (Optr)PSend9080, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9081, (Optr)&t_push_closure, (Optr)PBlock9082, (Optr)&t_send2, (Optr)PSend9085, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9086, (Optr)&t_push_closure, (Optr)PBlock9087, (Optr)&t_send2, (Optr)PSend9090, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9091, (Optr)&t_push_closure, (Optr)PBlock9092, (Optr)&t_send2, (Optr)PSend9095, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9096, (Optr)&t_push_closure, (Optr)PBlock9097, (Optr)&t_send2, (Optr)PSend9100, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9101, (Optr)&t_push_closure, (Optr)PBlock9102, (Optr)&t_send2, (Optr)PSend9105, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9106, (Optr)&t_push_closure, (Optr)PBlock9107, (Optr)&t_send2, (Optr)PSend9110, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9111, (Optr)&t_push_closure, (Optr)PBlock9112, (Optr)&t_send2, (Optr)PSend9115, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9116, (Optr)&t_push_closure, (Optr)PBlock9117, (Optr)&t_send2, (Optr)PSend9120, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9121, (Optr)&t_push_closure, (Optr)PBlock9122, (Optr)&t_send2, (Optr)PSend9125, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9024 = new_Method_with(PArray9025, empty_Array, empty_Array, PThreadedCode9026, 21, PSend9031, PSend9036, PSend9041, PSend9046, PSend9051, PSend9056, PSend9061, PSend9066, PSend9071, PSend9076, PSend9080, PSend9085, PSend9090, PSend9095, PSend9100, PSend9105, PSend9110, PSend9115, PSend9120, PSend9125, self);
    
    MethodClosure MC_SMB_initializeSS3_ = new_MethodClosure((Method)PMethod9024, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeSS3_, MC_SMB_initializeSS3_);
}


static void init_SMB_readC1() {
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray9127 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9130 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9133 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9132 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9133);
    Character char_8412 = new_Character(L'[');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_8412_Const = new_Constant((Optr)char_8412);
    // =. 
    Send PSend9134 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8412_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9138 = new_Send((Optr)self, SMB_readCSI, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9139 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9138);
    Array PThreadedCode9137 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9138, (Optr)&t_send1, (Optr)PSend9139, (Optr)&t_block_return);
    Block PBlock9136 = new_Block_with(empty_Array, empty_Array, PThreadedCode9137, 1, PSend9139);
    // ifTrue:. 
    Send PSend9135 = new_Send((Optr)PSend9134, SMB_ifTrue_, 1, (Optr)PBlock9136);
    Character char_8785 = new_Character(L'O');
    Constant char_8785_Const = new_Constant((Optr)char_8785);
    // =. 
    Send PSend9140 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8785_Const);
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    // readSS3. 
    Send PSend9144 = new_Send((Optr)self, SMB_readSS3, 0);
    // escape:. 
    Send PSend9145 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9144);
    Array PThreadedCode9143 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9144, (Optr)&t_send1, (Optr)PSend9145, (Optr)&t_block_return);
    Block PBlock9142 = new_Block_with(empty_Array, empty_Array, PThreadedCode9143, 1, PSend9145);
    // ifTrue:. 
    Send PSend9141 = new_Send((Optr)PSend9140, SMB_ifTrue_, 1, (Optr)PBlock9142);
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    // alt:. 
    Send PSend9146 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_alt_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode9131 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign9132, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9133, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8412, (Optr)&t_send1, (Optr)PSend9134, (Optr)&t_send_ifTrue_, (Optr)PSend9135, (Optr)PBlock9136, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8785, (Optr)&t_send1, (Optr)PSend9140, (Optr)&t_send_ifTrue_, (Optr)PSend9141, (Optr)PBlock9142, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9146, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9129 = new_Block_with(PArray9130, empty_Array, PThreadedCode9131, 5, PAssign9132, PSend9135, PSend9141, PSend9146, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9147 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9129);
    Array PThreadedCode9128 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9129, (Optr)&t_send1, (Optr)PSend9147, (Optr)&t_method_return);
    Method PMethod9126 = new_Method_with(empty_Array, PArray9127, empty_Array, PThreadedCode9128, 1, PSend9147);
    
    MethodClosure MC_SMB_readC1 = new_MethodClosure((Method)PMethod9126, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readC1, MC_SMB_readC1);
}


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9149 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9151 = new_Assign((Optr)slot_IO_Term_TermInputDriver_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9150 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9151, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9148 = new_Method_with(PArray9149, empty_Array, empty_Array, PThreadedCode9150, 2, PAssign9151, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod9148, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_continueReadCSINumber_() {
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray9153 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Variable VAR_character_0_2 = new_Variable_named(L"character", 0);
    Array PArray9154 = new_Array_with(2, (Optr)VAR_value_0_1, (Optr)VAR_character_0_2);
    Assign PAssign9156 = new_Assign((Optr)VAR_value_0_1, (Optr)VAR_v_0_0);
    Character char_9159 = new_Character(L'0');
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9161 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9160 = new_Assign((Optr)VAR_character_0_2, (Optr)PSend9161);
    Constant char_9159_Const = new_Constant((Optr)char_9159);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9162 = new_Send((Optr)char_9159_Const, SMB__lt__equals_, 1, (Optr)PAssign9160);
    Character char_9165 = new_Character(L'9');
    Constant char_9165_Const = new_Constant((Optr)char_9165);
    // <=. 
    Send PSend9166 = new_Send((Optr)VAR_character_0_2, SMB__lt__equals_, 1, (Optr)char_9165_Const);
    Array PThreadedCode9164 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9165, (Optr)&t_send1, (Optr)PSend9166, (Optr)&t_block_return);
    Block PBlock9163 = new_Block_with(empty_Array, empty_Array, PThreadedCode9164, 1, PSend9166);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend9167 = new_Send((Optr)PSend9162, SMB_and_, 1, (Optr)PBlock9163);
    Array PThreadedCode9158 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_push1, (Optr)PAssign9160, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9161, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend9162, (Optr)&t_push_closure, (Optr)PBlock9163, (Optr)&t_send1, (Optr)PSend9167, (Optr)&t_block_return);
    Block PBlock9157 = new_Block_with(empty_Array, empty_Array, PThreadedCode9158, 1, PSend9167);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // *. 
    Send PSend9172 = new_Send((Optr)VAR_value_0_1, SMB__times_, 1, (Optr)int_10_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9174 = new_Send((Optr)VAR_character_0_2, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // asInteger. 
    Send PSend9175 = new_Send((Optr)char_9159_Const, SMB_asInteger, 0);
    // -. 
    Send PSend9173 = new_Send((Optr)PSend9174, SMB__minus_, 1, (Optr)PSend9175);
    // +. 
    Send PSend9171 = new_Send((Optr)PSend9172, SMB__plus_, 1, (Optr)PSend9173);
    Assign PAssign9170 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend9171);
    Array PThreadedCode9169 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9170, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend9172, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_send0, (Optr)PSend9174, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send0, (Optr)PSend9175, (Optr)&t_send1, (Optr)PSend9173, (Optr)&t_send1, (Optr)PSend9171, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9168 = new_Block_with(empty_Array, empty_Array, PThreadedCode9169, 1, PAssign9170);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend9176 = new_Send((Optr)PBlock9157, SMB_whileTrue_, 1, (Optr)PBlock9168);
    Character char_9177 = new_Character(L'~');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9177_Const = new_Constant((Optr)char_9177);
    // =. 
    Send PSend9178 = new_Send((Optr)VAR_character_0_2, SMB__equals_, 1, (Optr)char_9177_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9182 = new_String(L"Control Sequence Introducer (number end)");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9182_Const = new_Constant((Optr)string_9182);
    // fail:in:. 
    Send PSend9183 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9182_Const);
    Array PThreadedCode9181 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9182, (Optr)&t_send2, (Optr)PSend9183, (Optr)&t_block_return);
    Block PBlock9180 = new_Block_with(empty_Array, empty_Array, PThreadedCode9181, 1, PSend9183);
    // ifFalse:. 
    Send PSend9179 = new_Send((Optr)PSend9178, SMB_ifFalse_, 1, (Optr)PBlock9180);
    String string_9186 = new_String(L"Control Sequence Introducer (number end)");
    Constant string_9186_Const = new_Constant((Optr)string_9186);
    // fail:in:. 
    Send PSend9187 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9186_Const);
    Array PThreadedCode9185 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9186, (Optr)&t_send2, (Optr)PSend9187, (Optr)&t_block_return);
    Block PBlock9184 = new_Block_with(empty_Array, empty_Array, PThreadedCode9185, 1, PSend9187);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9188 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_value_0_1, (Optr)PBlock9184);
    Array PThreadedCode9155 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9156, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9157, (Optr)&t_push_closure, (Optr)PBlock9168, (Optr)&t_send1, (Optr)PSend9176, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9177, (Optr)&t_send1, (Optr)PSend9178, (Optr)&t_send_ifFalse_, (Optr)PSend9179, (Optr)PBlock9180, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_closure, (Optr)PBlock9184, (Optr)&t_send2, (Optr)PSend9188, (Optr)&t_method_return);
    Method PMethod9152 = new_Method_with(PArray9153, PArray9154, empty_Array, PThreadedCode9155, 4, PAssign9156, PSend9176, PSend9179, PSend9188);
    
    MethodClosure MC_SMB_continueReadCSINumber_ = new_MethodClosure((Method)PMethod9152, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_continueReadCSINumber_, MC_SMB_continueReadCSINumber_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9192 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9191 = new_Assign((Optr)slot_IO_Term_TermInputDriver_normal, (Optr)PSend9192);
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    // initializeNormal:. 
    Send PSend9193 = new_Send((Optr)self, SMB_initializeNormal_, 1, (Optr)slot_IO_Term_TermInputDriver_normal);
    // new. 
    Send PSend9195 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9194 = new_Assign((Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)PSend9195);
    Symbol SMB_initializeSS3_ = new_Symbol(L"initializeSS3:");
    // initializeSS3:. 
    Send PSend9196 = new_Send((Optr)self, SMB_initializeSS3_, 1, (Optr)slot_IO_Term_TermInputDriver_ss3);
    // new. 
    Send PSend9198 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9197 = new_Assign((Optr)slot_IO_Term_TermInputDriver_csi, (Optr)PSend9198);
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    // initializeCSI:. 
    Send PSend9199 = new_Send((Optr)self, SMB_initializeCSI_, 1, (Optr)slot_IO_Term_TermInputDriver_csi);
    Array PThreadedCode9190 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign9191, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9192, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_send1, (Optr)PSend9193, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9194, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9195, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_send1, (Optr)PSend9196, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9197, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9198, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_send1, (Optr)PSend9199, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9189 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9190, 7, PAssign9191, PSend9193, PAssign9194, PSend9196, PAssign9197, PSend9199, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9189, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_fail_in_() {
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_mode_0_1 = new_Variable_named(L"mode", 0);
    Array PArray9201 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_mode_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9203 = new_Send((Optr)VAR_mode_0_1, SMB_asString, 0);
    String string_9204 = new_String(L" does not support ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_9204_Const = new_Constant((Optr)string_9204);
    // ,. 
    Send PSend9205 = new_Send((Optr)PSend9203, SMB__append_, 1, (Optr)string_9204_Const);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9206 = new_Send((Optr)VAR_value_0_0, SMB_asInteger, 0);
    // ,. 
    Send PSend9207 = new_Send((Optr)PSend9205, SMB__append_, 1, (Optr)PSend9206);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9208 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9207);
    Array PThreadedCode9202 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_mode_0_1, (Optr)&t_send0, (Optr)PSend9203, (Optr)&t_push1, (Optr)string_9204, (Optr)&t_send1, (Optr)PSend9205, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend9206, (Optr)&t_send1, (Optr)PSend9207, (Optr)&t_send1, (Optr)PSend9208, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9200 = new_Method_with(PArray9201, empty_Array, empty_Array, PThreadedCode9202, 2, PSend9208, self);
    
    MethodClosure MC_SMB_fail_in_ = new_MethodClosure((Method)PMethod9200, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_fail_in_, MC_SMB_fail_in_);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9210 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9213 = new_Array_with(1, (Optr)VAR__return__1_0);
    // read. 
    Send PSend9216 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9215 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9216);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9219 = new_Send((Optr)VAR_character_0_0, SMB_asInteger, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9222 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_write_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9223 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9222);
    Array PThreadedCode9221 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9222, (Optr)&t_send1, (Optr)PSend9223, (Optr)&t_block_return);
    Block PBlock9220 = new_Block_with(empty_Array, empty_Array, PThreadedCode9221, 1, PSend9223);
    // at:ifAbsent:. 
    Send PSend9218 = new_Send((Optr)slot_IO_Term_TermInputDriver_normal, SMB_at_ifAbsent_, 2, (Optr)PSend9219, (Optr)PBlock9220);
    Assign PAssign9217 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9218);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9224 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9214 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign9215, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9216, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9217, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend9219, (Optr)&t_push_closure, (Optr)PBlock9220, (Optr)&t_send2, (Optr)PSend9218, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9224, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9212 = new_Block_with(PArray9213, empty_Array, PThreadedCode9214, 4, PAssign9215, PAssign9217, PSend9224, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9225 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9212);
    Array PThreadedCode9211 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9212, (Optr)&t_send1, (Optr)PSend9225, (Optr)&t_method_return);
    Method PMethod9209 = new_Method_with(empty_Array, PArray9210, empty_Array, PThreadedCode9211, 1, PSend9225);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PMethod9209, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_read, MC_SMB_read);
}


static void init_SMB_readSS3() {
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9227 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9230 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9229 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9230);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_9235 = new_String(L"Single-Shift 3");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9235_Const = new_Constant((Optr)string_9235);
    // fail:in:. 
    Send PSend9236 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_0, (Optr)string_9235_Const);
    Array PThreadedCode9234 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)string_9235, (Optr)&t_send2, (Optr)PSend9236, (Optr)&t_block_return);
    Block PBlock9233 = new_Block_with(empty_Array, empty_Array, PThreadedCode9234, 1, PSend9236);
    // at:ifAbsent:. 
    Send PSend9232 = new_Send((Optr)slot_IO_Term_TermInputDriver_ss3, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_0, (Optr)PBlock9233);
    Assign PAssign9231 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9232);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9237 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9228 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign9229, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9230, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9231, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_closure, (Optr)PBlock9233, (Optr)&t_send2, (Optr)PSend9232, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9237, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9226 = new_Method_with(empty_Array, PArray9227, empty_Array, PThreadedCode9228, 4, PAssign9229, PAssign9231, PSend9237, self);
    
    MethodClosure MC_SMB_readSS3 = new_MethodClosure((Method)PMethod9226, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readSS3, MC_SMB_readSS3);
}


static void init_SMB_initializeCSI_() {
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9239 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9241 = new_Character(L'A');
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend9244 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_up, 0);
    Array PThreadedCode9243 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9244, (Optr)&t_block_return);
    Block PBlock9242 = new_Block_with(empty_Array, empty_Array, PThreadedCode9243, 1, PSend9244);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9241_Const = new_Constant((Optr)char_9241);
    // at:put:. 
    Send PSend9245 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9241_Const, (Optr)PBlock9242);
    Character char_8535 = new_Character(L'B');
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend9248 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_down, 0);
    Array PThreadedCode9247 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9248, (Optr)&t_block_return);
    Block PBlock9246 = new_Block_with(empty_Array, empty_Array, PThreadedCode9247, 1, PSend9248);
    Constant char_8535_Const = new_Constant((Optr)char_8535);
    // at:put:. 
    Send PSend9249 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8535_Const, (Optr)PBlock9246);
    Character char_9250 = new_Character(L'C');
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend9253 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_right, 0);
    Array PThreadedCode9252 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9253, (Optr)&t_block_return);
    Block PBlock9251 = new_Block_with(empty_Array, empty_Array, PThreadedCode9252, 1, PSend9253);
    Constant char_9250_Const = new_Constant((Optr)char_9250);
    // at:put:. 
    Send PSend9254 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9250_Const, (Optr)PBlock9251);
    Character char_9255 = new_Character(L'D');
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend9258 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_left, 0);
    Array PThreadedCode9257 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9258, (Optr)&t_block_return);
    Block PBlock9256 = new_Block_with(empty_Array, empty_Array, PThreadedCode9257, 1, PSend9258);
    Constant char_9255_Const = new_Constant((Optr)char_9255);
    // at:put:. 
    Send PSend9259 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9255_Const, (Optr)PBlock9256);
    Character char_8466 = new_Character(L'E');
    Symbol SMB_here = new_Symbol(L"here");
    // here. 
    Send PSend9262 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_here, 0);
    Array PThreadedCode9261 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9262, (Optr)&t_block_return);
    Block PBlock9260 = new_Block_with(empty_Array, empty_Array, PThreadedCode9261, 1, PSend9262);
    Constant char_8466_Const = new_Constant((Optr)char_8466);
    // at:put:. 
    Send PSend9263 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8466_Const, (Optr)PBlock9260);
    Symbol SMB_find = new_Symbol(L"find");
    // find. 
    Send PSend9266 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_find, 0);
    Array PThreadedCode9265 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9266, (Optr)&t_block_return);
    Block PBlock9264 = new_Block_with(empty_Array, empty_Array, PThreadedCode9265, 1, PSend9266);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9267 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9264);
    Symbol SMB_insert = new_Symbol(L"insert");
    // insert. 
    Send PSend9270 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_insert, 0);
    Array PThreadedCode9269 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9270, (Optr)&t_block_return);
    Block PBlock9268 = new_Block_with(empty_Array, empty_Array, PThreadedCode9269, 1, PSend9270);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9271 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9268);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend9274 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_remove, 0);
    Array PThreadedCode9273 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9274, (Optr)&t_block_return);
    Block PBlock9272 = new_Block_with(empty_Array, empty_Array, PThreadedCode9273, 1, PSend9274);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9275 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9272);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_select = new_Symbol(L"select");
    // select. 
    Send PSend9278 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_select, 0);
    Array PThreadedCode9277 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9278, (Optr)&t_block_return);
    Block PBlock9276 = new_Block_with(empty_Array, empty_Array, PThreadedCode9277, 1, PSend9278);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9279 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9276);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    // previousScreen. 
    Send PSend9282 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_previousScreen, 0);
    Array PThreadedCode9281 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9282, (Optr)&t_block_return);
    Block PBlock9280 = new_Block_with(empty_Array, empty_Array, PThreadedCode9281, 1, PSend9282);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9283 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9280);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    // nextScreen. 
    Send PSend9286 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_nextScreen, 0);
    Array PThreadedCode9285 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9286, (Optr)&t_block_return);
    Block PBlock9284 = new_Block_with(empty_Array, empty_Array, PThreadedCode9285, 1, PSend9286);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9287 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9284);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_f5 = new_Symbol(L"f5");
    // f5. 
    Send PSend9290 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f5, 0);
    Array PThreadedCode9289 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9290, (Optr)&t_block_return);
    Block PBlock9288 = new_Block_with(empty_Array, empty_Array, PThreadedCode9289, 1, PSend9290);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9291 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9288);
    SmallInt int_17 = new_SmallInt(17);
    Symbol SMB_f6 = new_Symbol(L"f6");
    // f6. 
    Send PSend9294 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f6, 0);
    Array PThreadedCode9293 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9294, (Optr)&t_block_return);
    Block PBlock9292 = new_Block_with(empty_Array, empty_Array, PThreadedCode9293, 1, PSend9294);
    Constant int_17_Const = new_Constant((Optr)int_17);
    // at:put:. 
    Send PSend9295 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_17_Const, (Optr)PBlock9292);
    SmallInt int_18 = new_SmallInt(18);
    Symbol SMB_f7 = new_Symbol(L"f7");
    // f7. 
    Send PSend9298 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f7, 0);
    Array PThreadedCode9297 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9298, (Optr)&t_block_return);
    Block PBlock9296 = new_Block_with(empty_Array, empty_Array, PThreadedCode9297, 1, PSend9298);
    Constant int_18_Const = new_Constant((Optr)int_18);
    // at:put:. 
    Send PSend9299 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_18_Const, (Optr)PBlock9296);
    SmallInt int_19 = new_SmallInt(19);
    Symbol SMB_f8 = new_Symbol(L"f8");
    // f8. 
    Send PSend9302 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f8, 0);
    Array PThreadedCode9301 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9302, (Optr)&t_block_return);
    Block PBlock9300 = new_Block_with(empty_Array, empty_Array, PThreadedCode9301, 1, PSend9302);
    Constant int_19_Const = new_Constant((Optr)int_19);
    // at:put:. 
    Send PSend9303 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_19_Const, (Optr)PBlock9300);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_f9 = new_Symbol(L"f9");
    // f9. 
    Send PSend9306 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f9, 0);
    Array PThreadedCode9305 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9306, (Optr)&t_block_return);
    Block PBlock9304 = new_Block_with(empty_Array, empty_Array, PThreadedCode9305, 1, PSend9306);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // at:put:. 
    Send PSend9307 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_20_Const, (Optr)PBlock9304);
    SmallInt int_21 = new_SmallInt(21);
    Symbol SMB_f10 = new_Symbol(L"f10");
    // f10. 
    Send PSend9310 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f10, 0);
    Array PThreadedCode9309 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9310, (Optr)&t_block_return);
    Block PBlock9308 = new_Block_with(empty_Array, empty_Array, PThreadedCode9309, 1, PSend9310);
    Constant int_21_Const = new_Constant((Optr)int_21);
    // at:put:. 
    Send PSend9311 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_21_Const, (Optr)PBlock9308);
    SmallInt int_23 = new_SmallInt(23);
    Symbol SMB_f11 = new_Symbol(L"f11");
    // f11. 
    Send PSend9314 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f11, 0);
    Array PThreadedCode9313 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9314, (Optr)&t_block_return);
    Block PBlock9312 = new_Block_with(empty_Array, empty_Array, PThreadedCode9313, 1, PSend9314);
    Constant int_23_Const = new_Constant((Optr)int_23);
    // at:put:. 
    Send PSend9315 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_23_Const, (Optr)PBlock9312);
    SmallInt int_24 = new_SmallInt(24);
    Symbol SMB_f12 = new_Symbol(L"f12");
    // f12. 
    Send PSend9318 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f12, 0);
    Array PThreadedCode9317 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9318, (Optr)&t_block_return);
    Block PBlock9316 = new_Block_with(empty_Array, empty_Array, PThreadedCode9317, 1, PSend9318);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // at:put:. 
    Send PSend9319 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_24_Const, (Optr)PBlock9316);
    SmallInt int_25 = new_SmallInt(25);
    Symbol SMB_f13 = new_Symbol(L"f13");
    // f13. 
    Send PSend9322 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f13, 0);
    Array PThreadedCode9321 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9322, (Optr)&t_block_return);
    Block PBlock9320 = new_Block_with(empty_Array, empty_Array, PThreadedCode9321, 1, PSend9322);
    Constant int_25_Const = new_Constant((Optr)int_25);
    // at:put:. 
    Send PSend9323 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_25_Const, (Optr)PBlock9320);
    SmallInt int_26 = new_SmallInt(26);
    Symbol SMB_f14 = new_Symbol(L"f14");
    // f14. 
    Send PSend9326 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f14, 0);
    Array PThreadedCode9325 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9326, (Optr)&t_block_return);
    Block PBlock9324 = new_Block_with(empty_Array, empty_Array, PThreadedCode9325, 1, PSend9326);
    Constant int_26_Const = new_Constant((Optr)int_26);
    // at:put:. 
    Send PSend9327 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_26_Const, (Optr)PBlock9324);
    SmallInt int_28 = new_SmallInt(28);
    Symbol SMB_f15 = new_Symbol(L"f15");
    // f15. 
    Send PSend9330 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f15, 0);
    Array PThreadedCode9329 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9330, (Optr)&t_block_return);
    Block PBlock9328 = new_Block_with(empty_Array, empty_Array, PThreadedCode9329, 1, PSend9330);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend9331 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_28_Const, (Optr)PBlock9328);
    SmallInt int_29 = new_SmallInt(29);
    Symbol SMB_f16 = new_Symbol(L"f16");
    // f16. 
    Send PSend9334 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f16, 0);
    Array PThreadedCode9333 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9334, (Optr)&t_block_return);
    Block PBlock9332 = new_Block_with(empty_Array, empty_Array, PThreadedCode9333, 1, PSend9334);
    Constant int_29_Const = new_Constant((Optr)int_29);
    // at:put:. 
    Send PSend9335 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_29_Const, (Optr)PBlock9332);
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_f17 = new_Symbol(L"f17");
    // f17. 
    Send PSend9338 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f17, 0);
    Array PThreadedCode9337 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9338, (Optr)&t_block_return);
    Block PBlock9336 = new_Block_with(empty_Array, empty_Array, PThreadedCode9337, 1, PSend9338);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend9339 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_31_Const, (Optr)PBlock9336);
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_f18 = new_Symbol(L"f18");
    // f18. 
    Send PSend9342 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f18, 0);
    Array PThreadedCode9341 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9342, (Optr)&t_block_return);
    Block PBlock9340 = new_Block_with(empty_Array, empty_Array, PThreadedCode9341, 1, PSend9342);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // at:put:. 
    Send PSend9343 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_32_Const, (Optr)PBlock9340);
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_f19 = new_Symbol(L"f19");
    // f19. 
    Send PSend9346 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f19, 0);
    Array PThreadedCode9345 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9346, (Optr)&t_block_return);
    Block PBlock9344 = new_Block_with(empty_Array, empty_Array, PThreadedCode9345, 1, PSend9346);
    Constant int_33_Const = new_Constant((Optr)int_33);
    // at:put:. 
    Send PSend9347 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_33_Const, (Optr)PBlock9344);
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_f20 = new_Symbol(L"f20");
    // f20. 
    Send PSend9350 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f20, 0);
    Array PThreadedCode9349 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9350, (Optr)&t_block_return);
    Block PBlock9348 = new_Block_with(empty_Array, empty_Array, PThreadedCode9349, 1, PSend9350);
    Constant int_34_Const = new_Constant((Optr)int_34);
    // at:put:. 
    Send PSend9351 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_34_Const, (Optr)PBlock9348);
    Character char_8412 = new_Character(L'[');
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9354 = new_Send((Optr)self, SMB_readCSI, 0);
    Array PThreadedCode9353 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9354, (Optr)&t_block_return);
    Block PBlock9352 = new_Block_with(empty_Array, empty_Array, PThreadedCode9353, 1, PSend9354);
    Constant char_8412_Const = new_Constant((Optr)char_8412);
    // at:put:. 
    Send PSend9355 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8412_Const, (Optr)PBlock9352);
    Array PThreadedCode9240 = instantiate_Array_with(ThreadedCode_Class, 0, 251, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9241, (Optr)&t_push_closure, (Optr)PBlock9242, (Optr)&t_send2, (Optr)PSend9245, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8535, (Optr)&t_push_closure, (Optr)PBlock9246, (Optr)&t_send2, (Optr)PSend9249, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9250, (Optr)&t_push_closure, (Optr)PBlock9251, (Optr)&t_send2, (Optr)PSend9254, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9255, (Optr)&t_push_closure, (Optr)PBlock9256, (Optr)&t_send2, (Optr)PSend9259, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8466, (Optr)&t_push_closure, (Optr)PBlock9260, (Optr)&t_send2, (Optr)PSend9263, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9264, (Optr)&t_send2, (Optr)PSend9267, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9268, (Optr)&t_send2, (Optr)PSend9271, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9272, (Optr)&t_send2, (Optr)PSend9275, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9276, (Optr)&t_send2, (Optr)PSend9279, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9280, (Optr)&t_send2, (Optr)PSend9283, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9284, (Optr)&t_send2, (Optr)PSend9287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9288, (Optr)&t_send2, (Optr)PSend9291, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_17, (Optr)&t_push_closure, (Optr)PBlock9292, (Optr)&t_send2, (Optr)PSend9295, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_18, (Optr)&t_push_closure, (Optr)PBlock9296, (Optr)&t_send2, (Optr)PSend9299, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_19, (Optr)&t_push_closure, (Optr)PBlock9300, (Optr)&t_send2, (Optr)PSend9303, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_push_closure, (Optr)PBlock9304, (Optr)&t_send2, (Optr)PSend9307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_21, (Optr)&t_push_closure, (Optr)PBlock9308, (Optr)&t_send2, (Optr)PSend9311, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_23, (Optr)&t_push_closure, (Optr)PBlock9312, (Optr)&t_send2, (Optr)PSend9315, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_24, (Optr)&t_push_closure, (Optr)PBlock9316, (Optr)&t_send2, (Optr)PSend9319, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_push_closure, (Optr)PBlock9320, (Optr)&t_send2, (Optr)PSend9323, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_26, (Optr)&t_push_closure, (Optr)PBlock9324, (Optr)&t_send2, (Optr)PSend9327, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_28, (Optr)&t_push_closure, (Optr)PBlock9328, (Optr)&t_send2, (Optr)PSend9331, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_29, (Optr)&t_push_closure, (Optr)PBlock9332, (Optr)&t_send2, (Optr)PSend9335, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_31, (Optr)&t_push_closure, (Optr)PBlock9336, (Optr)&t_send2, (Optr)PSend9339, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_push_closure, (Optr)PBlock9340, (Optr)&t_send2, (Optr)PSend9343, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_33, (Optr)&t_push_closure, (Optr)PBlock9344, (Optr)&t_send2, (Optr)PSend9347, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_34, (Optr)&t_push_closure, (Optr)PBlock9348, (Optr)&t_send2, (Optr)PSend9351, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8412, (Optr)&t_push_closure, (Optr)PBlock9352, (Optr)&t_send2, (Optr)PSend9355, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9238 = new_Method_with(PArray9239, empty_Array, empty_Array, PThreadedCode9240, 29, PSend9245, PSend9249, PSend9254, PSend9259, PSend9263, PSend9267, PSend9271, PSend9275, PSend9279, PSend9283, PSend9287, PSend9291, PSend9295, PSend9299, PSend9303, PSend9307, PSend9311, PSend9315, PSend9319, PSend9323, PSend9327, PSend9331, PSend9335, PSend9339, PSend9343, PSend9347, PSend9351, PSend9355, self);
    
    MethodClosure MC_SMB_initializeCSI_ = new_MethodClosure((Method)PMethod9238, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeCSI_, MC_SMB_initializeCSI_);
}


static void init_SMB_handler_() {
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9357 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9359 = new_Assign((Optr)slot_IO_Term_TermInputDriver_handler, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9358 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9359, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9356 = new_Method_with(PArray9357, empty_Array, empty_Array, PThreadedCode9358, 2, PAssign9359, self);
    
    MethodClosure MC_SMB_handler_ = new_MethodClosure((Method)PMethod9356, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_handler_, MC_SMB_handler_);
}


static void init_SMB_initializeNormal_() {
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9361 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend9365 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfHeading, 0);
    Array PThreadedCode9364 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9365, (Optr)&t_block_return);
    Block PBlock9363 = new_Block_with(empty_Array, empty_Array, PThreadedCode9364, 1, PSend9365);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9366 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9363);
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend9369 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfText, 0);
    Array PThreadedCode9368 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9369, (Optr)&t_block_return);
    Block PBlock9367 = new_Block_with(empty_Array, empty_Array, PThreadedCode9368, 1, PSend9369);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9370 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9367);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend9373 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfText, 0);
    Array PThreadedCode9372 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9373, (Optr)&t_block_return);
    Block PBlock9371 = new_Block_with(empty_Array, empty_Array, PThreadedCode9372, 1, PSend9373);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9374 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9371);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    // endOfTransmission. 
    Send PSend9377 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfTransmission, 0);
    Array PThreadedCode9376 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9377, (Optr)&t_block_return);
    Block PBlock9375 = new_Block_with(empty_Array, empty_Array, PThreadedCode9376, 1, PSend9377);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9378 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9375);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    // enquiry. 
    Send PSend9381 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_enquiry, 0);
    Array PThreadedCode9380 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9381, (Optr)&t_block_return);
    Block PBlock9379 = new_Block_with(empty_Array, empty_Array, PThreadedCode9380, 1, PSend9381);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9382 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9379);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    // acknowledge. 
    Send PSend9385 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_acknowledge, 0);
    Array PThreadedCode9384 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9385, (Optr)&t_block_return);
    Block PBlock9383 = new_Block_with(empty_Array, empty_Array, PThreadedCode9384, 1, PSend9385);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9386 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9383);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_bell = new_Symbol(L"bell");
    // bell. 
    Send PSend9389 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_bell, 0);
    Array PThreadedCode9388 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9389, (Optr)&t_block_return);
    Block PBlock9387 = new_Block_with(empty_Array, empty_Array, PThreadedCode9388, 1, PSend9389);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend9390 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PBlock9387);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend9393 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_backspace, 0);
    Array PThreadedCode9392 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9393, (Optr)&t_block_return);
    Block PBlock9391 = new_Block_with(empty_Array, empty_Array, PThreadedCode9392, 1, PSend9393);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend9394 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PBlock9391);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9397 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_tab, 0);
    Array PThreadedCode9396 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9397, (Optr)&t_block_return);
    Block PBlock9395 = new_Block_with(empty_Array, empty_Array, PThreadedCode9396, 1, PSend9397);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend9398 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PBlock9395);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend9401 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_lf, 0);
    Array PThreadedCode9400 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9401, (Optr)&t_block_return);
    Block PBlock9399 = new_Block_with(empty_Array, empty_Array, PThreadedCode9400, 1, PSend9401);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend9402 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PBlock9399);
    SmallInt int_11 = new_SmallInt(11);
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    // verticalTab. 
    Send PSend9405 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_verticalTab, 0);
    Array PThreadedCode9404 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9405, (Optr)&t_block_return);
    Block PBlock9403 = new_Block_with(empty_Array, empty_Array, PThreadedCode9404, 1, PSend9405);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend9406 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PBlock9403);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    // formfeed. 
    Send PSend9409 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_formfeed, 0);
    Array PThreadedCode9408 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9409, (Optr)&t_block_return);
    Block PBlock9407 = new_Block_with(empty_Array, empty_Array, PThreadedCode9408, 1, PSend9409);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend9410 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PBlock9407);
    SmallInt int_13 = new_SmallInt(13);
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    // carriageReturn. 
    Send PSend9413 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_carriageReturn, 0);
    Array PThreadedCode9412 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9413, (Optr)&t_block_return);
    Block PBlock9411 = new_Block_with(empty_Array, empty_Array, PThreadedCode9412, 1, PSend9413);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // at:put:. 
    Send PSend9414 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_13_Const, (Optr)PBlock9411);
    SmallInt int_14 = new_SmallInt(14);
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    // shiftOut. 
    Send PSend9417 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftOut, 0);
    Array PThreadedCode9416 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9417, (Optr)&t_block_return);
    Block PBlock9415 = new_Block_with(empty_Array, empty_Array, PThreadedCode9416, 1, PSend9417);
    Constant int_14_Const = new_Constant((Optr)int_14);
    // at:put:. 
    Send PSend9418 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_14_Const, (Optr)PBlock9415);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    // shiftIn. 
    Send PSend9421 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftIn, 0);
    Array PThreadedCode9420 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9421, (Optr)&t_block_return);
    Block PBlock9419 = new_Block_with(empty_Array, empty_Array, PThreadedCode9420, 1, PSend9421);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9422 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9419);
    SmallInt int_27 = new_SmallInt(27);
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    // readC1. 
    Send PSend9425 = new_Send((Optr)self, SMB_readC1, 0);
    Array PThreadedCode9424 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9425, (Optr)&t_block_return);
    Block PBlock9423 = new_Block_with(empty_Array, empty_Array, PThreadedCode9424, 1, PSend9425);
    Constant int_27_Const = new_Constant((Optr)int_27);
    // at:put:. 
    Send PSend9426 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_27_Const, (Optr)PBlock9423);
    SmallInt int_127 = new_SmallInt(127);
    Symbol SMB_delete = new_Symbol(L"delete");
    // delete. 
    Send PSend9429 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_delete, 0);
    Array PThreadedCode9428 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9429, (Optr)&t_block_return);
    Block PBlock9427 = new_Block_with(empty_Array, empty_Array, PThreadedCode9428, 1, PSend9429);
    Constant int_127_Const = new_Constant((Optr)int_127);
    // at:put:. 
    Send PSend9430 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_127_Const, (Optr)PBlock9427);
    Array PThreadedCode9362 = instantiate_Array_with(ThreadedCode_Class, 0, 152, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9363, (Optr)&t_send2, (Optr)PSend9366, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9367, (Optr)&t_send2, (Optr)PSend9370, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9371, (Optr)&t_send2, (Optr)PSend9374, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9375, (Optr)&t_send2, (Optr)PSend9378, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9379, (Optr)&t_send2, (Optr)PSend9382, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9383, (Optr)&t_send2, (Optr)PSend9386, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_closure, (Optr)PBlock9387, (Optr)&t_send2, (Optr)PSend9390, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_closure, (Optr)PBlock9391, (Optr)&t_send2, (Optr)PSend9394, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_closure, (Optr)PBlock9395, (Optr)&t_send2, (Optr)PSend9398, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_closure, (Optr)PBlock9399, (Optr)&t_send2, (Optr)PSend9402, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_closure, (Optr)PBlock9403, (Optr)&t_send2, (Optr)PSend9406, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_closure, (Optr)PBlock9407, (Optr)&t_send2, (Optr)PSend9410, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_push_closure, (Optr)PBlock9411, (Optr)&t_send2, (Optr)PSend9414, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_14, (Optr)&t_push_closure, (Optr)PBlock9415, (Optr)&t_send2, (Optr)PSend9418, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9419, (Optr)&t_send2, (Optr)PSend9422, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_27, (Optr)&t_push_closure, (Optr)PBlock9423, (Optr)&t_send2, (Optr)PSend9426, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_127, (Optr)&t_push_closure, (Optr)PBlock9427, (Optr)&t_send2, (Optr)PSend9430, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9360 = new_Method_with(PArray9361, empty_Array, empty_Array, PThreadedCode9362, 18, PSend9366, PSend9370, PSend9374, PSend9378, PSend9382, PSend9386, PSend9390, PSend9394, PSend9398, PSend9402, PSend9406, PSend9410, PSend9414, PSend9418, PSend9422, PSend9426, PSend9430, self);
    
    MethodClosure MC_SMB_initializeNormal_ = new_MethodClosure((Method)PMethod9360, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeNormal_, MC_SMB_initializeNormal_);
}


static void init_SMB_readCSI() {
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_2 = new_Variable_named(L"action", 0);
    Array PArray9432 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_character_0_1, (Optr)VAR_action_0_2);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9435 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9434 = new_Assign((Optr)VAR_character_0_1, (Optr)PSend9435);
    Character char_9159 = new_Character(L'0');
    Constant char_9159_Const = new_Constant((Optr)char_9159);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9439 = new_Send((Optr)char_9159_Const, SMB__lt__equals_, 1, (Optr)VAR_character_0_1);
    Symbol SMB_and_ = new_Symbol(L"and:");
    Character char_9165 = new_Character(L'9');
    Constant char_9165_Const = new_Constant((Optr)char_9165);
    // <=. 
    Send PSend9442 = new_Send((Optr)VAR_character_0_1, SMB__lt__equals_, 1, (Optr)char_9165_Const);
    Array PThreadedCode9441 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)char_9165, (Optr)&t_send1, (Optr)PSend9442, (Optr)&t_block_return);
    Block PBlock9440 = new_Block_with(empty_Array, empty_Array, PThreadedCode9441, 1, PSend9442);
    // and:. 
    Send PSend9438 = new_Send((Optr)PSend9439, SMB_and_, 1, (Optr)PBlock9440);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9445 = new_Send((Optr)VAR_character_0_1, SMB_asInteger, 0);
    // asInteger. 
    Send PSend9446 = new_Send((Optr)char_9159_Const, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9447 = new_Send((Optr)PSend9445, SMB__minus_, 1, (Optr)PSend9446);
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    // continueReadCSINumber:. 
    Send PSend9448 = new_Send((Optr)self, SMB_continueReadCSINumber_, 1, (Optr)PSend9447);
    Array PThreadedCode9444 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send0, (Optr)PSend9445, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_send0, (Optr)PSend9446, (Optr)&t_send1, (Optr)PSend9447, (Optr)&t_send1, (Optr)PSend9448, (Optr)&t_block_return);
    Block PBlock9443 = new_Block_with(empty_Array, empty_Array, PThreadedCode9444, 1, PSend9448);
    String string_9453 = new_String(L"Control Sequence Introducer");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9453_Const = new_Constant((Optr)string_9453);
    // fail:in:. 
    Send PSend9454 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_1, (Optr)string_9453_Const);
    Array PThreadedCode9452 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)string_9453, (Optr)&t_send2, (Optr)PSend9454, (Optr)&t_block_return);
    Block PBlock9451 = new_Block_with(empty_Array, empty_Array, PThreadedCode9452, 1, PSend9454);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9455 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_1, (Optr)PBlock9451);
    Array PThreadedCode9450 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push_closure, (Optr)PBlock9451, (Optr)&t_send2, (Optr)PSend9455, (Optr)&t_block_return);
    Block PBlock9449 = new_Block_with(empty_Array, empty_Array, PThreadedCode9450, 1, PSend9455);
    // ifTrue:ifFalse:. 
    Send PSend9437 = new_Send((Optr)PSend9438, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock9443, (Optr)PBlock9449);
    Assign PAssign9436 = new_Assign((Optr)VAR_action_0_2, (Optr)PSend9437);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9456 = new_Send((Optr)VAR_action_0_2, SMB_value, 0);
    Array PThreadedCode9433 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9434, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9435, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9436, (Optr)&t_push1, (Optr)char_9159, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send1, (Optr)PSend9439, (Optr)&t_push_closure, (Optr)PBlock9440, (Optr)&t_send1, (Optr)PSend9438, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend9437, (Optr)PBlock9443, (Optr)PBlock9449, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_2, (Optr)&t_send0, (Optr)PSend9456, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9431 = new_Method_with(empty_Array, PArray9432, empty_Array, PThreadedCode9433, 4, PAssign9434, PAssign9436, PSend9456, self);
    
    MethodClosure MC_SMB_readCSI = new_MethodClosure((Method)PMethod9431, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readCSI, MC_SMB_readCSI);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray9458 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper9460 = new_Super(SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend9461 = new_Send((Optr)PSuper9460, SMB_name_, 1, (Optr)VAR_n_0_0);
    Array PThreadedCode9459 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9460, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend9461, (Optr)&t_method_return);
    Method PMethod9457 = new_Method_with(PArray9458, empty_Array, empty_Array, PThreadedCode9459, 1, PSend9461);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod9457, HEADER(IO_Term_TermInputDriver_Class));
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