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
    Array PArray9261 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9263 = new_Character(L'p');
    Symbol SMB_keypad0 = new_Symbol(L"keypad0");
    // keypad0. 
    Send PSend9266 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad0, 0);
    Array PThreadedCode9265 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9266, (Optr)&t_block_return);
    Block PBlock9264 = new_Block_with(empty_Array, empty_Array, PThreadedCode9265, 1, PSend9266);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9263_Const = new_Constant((Optr)char_9263);
    // at:put:. 
    Send PSend9267 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9263_Const, (Optr)PBlock9264);
    Character char_9268 = new_Character(L'q');
    Symbol SMB_keypad1 = new_Symbol(L"keypad1");
    // keypad1. 
    Send PSend9271 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad1, 0);
    Array PThreadedCode9270 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9271, (Optr)&t_block_return);
    Block PBlock9269 = new_Block_with(empty_Array, empty_Array, PThreadedCode9270, 1, PSend9271);
    Constant char_9268_Const = new_Constant((Optr)char_9268);
    // at:put:. 
    Send PSend9272 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9268_Const, (Optr)PBlock9269);
    Character char_9273 = new_Character(L'r');
    Symbol SMB_keypad2 = new_Symbol(L"keypad2");
    // keypad2. 
    Send PSend9276 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad2, 0);
    Array PThreadedCode9275 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9276, (Optr)&t_block_return);
    Block PBlock9274 = new_Block_with(empty_Array, empty_Array, PThreadedCode9275, 1, PSend9276);
    Constant char_9273_Const = new_Constant((Optr)char_9273);
    // at:put:. 
    Send PSend9277 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9273_Const, (Optr)PBlock9274);
    Character char_9278 = new_Character(L's');
    Symbol SMB_keypad3 = new_Symbol(L"keypad3");
    // keypad3. 
    Send PSend9281 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad3, 0);
    Array PThreadedCode9280 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9281, (Optr)&t_block_return);
    Block PBlock9279 = new_Block_with(empty_Array, empty_Array, PThreadedCode9280, 1, PSend9281);
    Constant char_9278_Const = new_Constant((Optr)char_9278);
    // at:put:. 
    Send PSend9282 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9278_Const, (Optr)PBlock9279);
    Character char_9283 = new_Character(L't');
    Symbol SMB_keypad4 = new_Symbol(L"keypad4");
    // keypad4. 
    Send PSend9286 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad4, 0);
    Array PThreadedCode9285 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9286, (Optr)&t_block_return);
    Block PBlock9284 = new_Block_with(empty_Array, empty_Array, PThreadedCode9285, 1, PSend9286);
    Constant char_9283_Const = new_Constant((Optr)char_9283);
    // at:put:. 
    Send PSend9287 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9283_Const, (Optr)PBlock9284);
    Character char_9288 = new_Character(L'u');
    Symbol SMB_keypad5 = new_Symbol(L"keypad5");
    // keypad5. 
    Send PSend9291 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad5, 0);
    Array PThreadedCode9290 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9291, (Optr)&t_block_return);
    Block PBlock9289 = new_Block_with(empty_Array, empty_Array, PThreadedCode9290, 1, PSend9291);
    Constant char_9288_Const = new_Constant((Optr)char_9288);
    // at:put:. 
    Send PSend9292 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9288_Const, (Optr)PBlock9289);
    Character char_9293 = new_Character(L'v');
    Symbol SMB_keypad6 = new_Symbol(L"keypad6");
    // keypad6. 
    Send PSend9296 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad6, 0);
    Array PThreadedCode9295 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9296, (Optr)&t_block_return);
    Block PBlock9294 = new_Block_with(empty_Array, empty_Array, PThreadedCode9295, 1, PSend9296);
    Constant char_9293_Const = new_Constant((Optr)char_9293);
    // at:put:. 
    Send PSend9297 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9293_Const, (Optr)PBlock9294);
    Character char_9298 = new_Character(L'w');
    Symbol SMB_keypad7 = new_Symbol(L"keypad7");
    // keypad7. 
    Send PSend9301 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad7, 0);
    Array PThreadedCode9300 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9301, (Optr)&t_block_return);
    Block PBlock9299 = new_Block_with(empty_Array, empty_Array, PThreadedCode9300, 1, PSend9301);
    Constant char_9298_Const = new_Constant((Optr)char_9298);
    // at:put:. 
    Send PSend9302 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9298_Const, (Optr)PBlock9299);
    Character char_9303 = new_Character(L'x');
    Symbol SMB_keypad8 = new_Symbol(L"keypad8");
    // keypad8. 
    Send PSend9306 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad8, 0);
    Array PThreadedCode9305 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9306, (Optr)&t_block_return);
    Block PBlock9304 = new_Block_with(empty_Array, empty_Array, PThreadedCode9305, 1, PSend9306);
    Constant char_9303_Const = new_Constant((Optr)char_9303);
    // at:put:. 
    Send PSend9307 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9303_Const, (Optr)PBlock9304);
    Character char_9308 = new_Character(L'y');
    Symbol SMB_keypad9 = new_Symbol(L"keypad9");
    // keypad9. 
    Send PSend9311 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypad9, 0);
    Array PThreadedCode9310 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9311, (Optr)&t_block_return);
    Block PBlock9309 = new_Block_with(empty_Array, empty_Array, PThreadedCode9310, 1, PSend9311);
    Constant char_9308_Const = new_Constant((Optr)char_9308);
    // at:put:. 
    Send PSend9312 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9308_Const, (Optr)PBlock9309);
    Character char_8726 = new_Character(L'm');
    Symbol SMB_keypadMinus = new_Symbol(L"keypadMinus");
    // keypadMinus. 
    Send PSend9315 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadMinus, 0);
    Array PThreadedCode9314 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9315, (Optr)&t_block_return);
    Block PBlock9313 = new_Block_with(empty_Array, empty_Array, PThreadedCode9314, 1, PSend9315);
    Constant char_8726_Const = new_Constant((Optr)char_8726);
    // at:put:. 
    Send PSend9316 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8726_Const, (Optr)PBlock9313);
    Character char_9317 = new_Character(L'l');
    Symbol SMB_keypadBacktick = new_Symbol(L"keypadBacktick");
    // keypadBacktick. 
    Send PSend9320 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadBacktick, 0);
    Array PThreadedCode9319 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9320, (Optr)&t_block_return);
    Block PBlock9318 = new_Block_with(empty_Array, empty_Array, PThreadedCode9319, 1, PSend9320);
    Constant char_9317_Const = new_Constant((Optr)char_9317);
    // at:put:. 
    Send PSend9321 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9317_Const, (Optr)PBlock9318);
    Character char_9322 = new_Character(L'n');
    Symbol SMB_keypadDot = new_Symbol(L"keypadDot");
    // keypadDot. 
    Send PSend9325 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadDot, 0);
    Array PThreadedCode9324 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9325, (Optr)&t_block_return);
    Block PBlock9323 = new_Block_with(empty_Array, empty_Array, PThreadedCode9324, 1, PSend9325);
    Constant char_9322_Const = new_Constant((Optr)char_9322);
    // at:put:. 
    Send PSend9326 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9322_Const, (Optr)PBlock9323);
    Character char_9327 = new_Character(L'M');
    Symbol SMB_keypadEnter = new_Symbol(L"keypadEnter");
    // keypadEnter. 
    Send PSend9330 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_keypadEnter, 0);
    Array PThreadedCode9329 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9330, (Optr)&t_block_return);
    Block PBlock9328 = new_Block_with(empty_Array, empty_Array, PThreadedCode9329, 1, PSend9330);
    Constant char_9327_Const = new_Constant((Optr)char_9327);
    // at:put:. 
    Send PSend9331 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9327_Const, (Optr)PBlock9328);
    Character char_9332 = new_Character(L'P');
    Symbol SMB_f1 = new_Symbol(L"f1");
    // f1. 
    Send PSend9335 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f1, 0);
    Array PThreadedCode9334 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9335, (Optr)&t_block_return);
    Block PBlock9333 = new_Block_with(empty_Array, empty_Array, PThreadedCode9334, 1, PSend9335);
    Constant char_9332_Const = new_Constant((Optr)char_9332);
    // at:put:. 
    Send PSend9336 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9332_Const, (Optr)PBlock9333);
    Character char_9337 = new_Character(L'Q');
    Symbol SMB_f2 = new_Symbol(L"f2");
    // f2. 
    Send PSend9340 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f2, 0);
    Array PThreadedCode9339 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9340, (Optr)&t_block_return);
    Block PBlock9338 = new_Block_with(empty_Array, empty_Array, PThreadedCode9339, 1, PSend9340);
    Constant char_9337_Const = new_Constant((Optr)char_9337);
    // at:put:. 
    Send PSend9341 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9337_Const, (Optr)PBlock9338);
    Character char_9342 = new_Character(L'R');
    Symbol SMB_f3 = new_Symbol(L"f3");
    // f3. 
    Send PSend9345 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f3, 0);
    Array PThreadedCode9344 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9345, (Optr)&t_block_return);
    Block PBlock9343 = new_Block_with(empty_Array, empty_Array, PThreadedCode9344, 1, PSend9345);
    Constant char_9342_Const = new_Constant((Optr)char_9342);
    // at:put:. 
    Send PSend9346 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9342_Const, (Optr)PBlock9343);
    Character char_9347 = new_Character(L'S');
    Symbol SMB_f4 = new_Symbol(L"f4");
    // f4. 
    Send PSend9350 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f4, 0);
    Array PThreadedCode9349 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9350, (Optr)&t_block_return);
    Block PBlock9348 = new_Block_with(empty_Array, empty_Array, PThreadedCode9349, 1, PSend9350);
    Constant char_9347_Const = new_Constant((Optr)char_9347);
    // at:put:. 
    Send PSend9351 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9347_Const, (Optr)PBlock9348);
    Character char_9352 = new_Character(L'H');
    Symbol SMB_home = new_Symbol(L"home");
    // home. 
    Send PSend9355 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_home, 0);
    Array PThreadedCode9354 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9355, (Optr)&t_block_return);
    Block PBlock9353 = new_Block_with(empty_Array, empty_Array, PThreadedCode9354, 1, PSend9355);
    Constant char_9352_Const = new_Constant((Optr)char_9352);
    // at:put:. 
    Send PSend9356 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9352_Const, (Optr)PBlock9353);
    Character char_9357 = new_Character(L'F');
    Symbol SMB_end = new_Symbol(L"end");
    // end. 
    Send PSend9360 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_end, 0);
    Array PThreadedCode9359 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9360, (Optr)&t_block_return);
    Block PBlock9358 = new_Block_with(empty_Array, empty_Array, PThreadedCode9359, 1, PSend9360);
    Constant char_9357_Const = new_Constant((Optr)char_9357);
    // at:put:. 
    Send PSend9361 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9357_Const, (Optr)PBlock9358);
    Array PThreadedCode9262 = instantiate_Array_with(ThreadedCode_Class, 0, 181, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9263, (Optr)&t_push_closure, (Optr)PBlock9264, (Optr)&t_send2, (Optr)PSend9267, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9268, (Optr)&t_push_closure, (Optr)PBlock9269, (Optr)&t_send2, (Optr)PSend9272, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9273, (Optr)&t_push_closure, (Optr)PBlock9274, (Optr)&t_send2, (Optr)PSend9277, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9278, (Optr)&t_push_closure, (Optr)PBlock9279, (Optr)&t_send2, (Optr)PSend9282, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9283, (Optr)&t_push_closure, (Optr)PBlock9284, (Optr)&t_send2, (Optr)PSend9287, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9288, (Optr)&t_push_closure, (Optr)PBlock9289, (Optr)&t_send2, (Optr)PSend9292, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9293, (Optr)&t_push_closure, (Optr)PBlock9294, (Optr)&t_send2, (Optr)PSend9297, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9298, (Optr)&t_push_closure, (Optr)PBlock9299, (Optr)&t_send2, (Optr)PSend9302, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9303, (Optr)&t_push_closure, (Optr)PBlock9304, (Optr)&t_send2, (Optr)PSend9307, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9308, (Optr)&t_push_closure, (Optr)PBlock9309, (Optr)&t_send2, (Optr)PSend9312, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8726, (Optr)&t_push_closure, (Optr)PBlock9313, (Optr)&t_send2, (Optr)PSend9316, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9317, (Optr)&t_push_closure, (Optr)PBlock9318, (Optr)&t_send2, (Optr)PSend9321, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9322, (Optr)&t_push_closure, (Optr)PBlock9323, (Optr)&t_send2, (Optr)PSend9326, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9327, (Optr)&t_push_closure, (Optr)PBlock9328, (Optr)&t_send2, (Optr)PSend9331, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9332, (Optr)&t_push_closure, (Optr)PBlock9333, (Optr)&t_send2, (Optr)PSend9336, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9337, (Optr)&t_push_closure, (Optr)PBlock9338, (Optr)&t_send2, (Optr)PSend9341, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9342, (Optr)&t_push_closure, (Optr)PBlock9343, (Optr)&t_send2, (Optr)PSend9346, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9347, (Optr)&t_push_closure, (Optr)PBlock9348, (Optr)&t_send2, (Optr)PSend9351, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9352, (Optr)&t_push_closure, (Optr)PBlock9353, (Optr)&t_send2, (Optr)PSend9356, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9357, (Optr)&t_push_closure, (Optr)PBlock9358, (Optr)&t_send2, (Optr)PSend9361, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9260 = new_Method_with(PArray9261, empty_Array, empty_Array, PThreadedCode9262, 21, PSend9267, PSend9272, PSend9277, PSend9282, PSend9287, PSend9292, PSend9297, PSend9302, PSend9307, PSend9312, PSend9316, PSend9321, PSend9326, PSend9331, PSend9336, PSend9341, PSend9346, PSend9351, PSend9356, PSend9361, self);
    
    MethodClosure MC_SMB_initializeSS3_ = new_MethodClosure((Method)PMethod9260, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeSS3_, MC_SMB_initializeSS3_);
}


static void init_SMB_readC1() {
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Array PArray9363 = new_Array_with(1, (Optr)VAR_character_0_0);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9366 = new_Array_with(1, (Optr)VAR__return__1_0);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9369 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9368 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9369);
    Character char_8644 = new_Character(L'[');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_8644_Const = new_Constant((Optr)char_8644);
    // =. 
    Send PSend9370 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_8644_Const);
    Symbol SMB_ifTrue_ = new_Symbol(L"ifTrue:");
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9374 = new_Send((Optr)self, SMB_readCSI, 0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9375 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9374);
    Array PThreadedCode9373 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9374, (Optr)&t_send1, (Optr)PSend9375, (Optr)&t_block_return);
    Block PBlock9372 = new_Block_with(empty_Array, empty_Array, PThreadedCode9373, 1, PSend9375);
    // ifTrue:. 
    Send PSend9371 = new_Send((Optr)PSend9370, SMB_ifTrue_, 1, (Optr)PBlock9372);
    Character char_9017 = new_Character(L'O');
    Constant char_9017_Const = new_Constant((Optr)char_9017);
    // =. 
    Send PSend9376 = new_Send((Optr)VAR_character_0_0, SMB__equals_, 1, (Optr)char_9017_Const);
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    // readSS3. 
    Send PSend9380 = new_Send((Optr)self, SMB_readSS3, 0);
    // escape:. 
    Send PSend9381 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9380);
    Array PThreadedCode9379 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9380, (Optr)&t_send1, (Optr)PSend9381, (Optr)&t_block_return);
    Block PBlock9378 = new_Block_with(empty_Array, empty_Array, PThreadedCode9379, 1, PSend9381);
    // ifTrue:. 
    Send PSend9377 = new_Send((Optr)PSend9376, SMB_ifTrue_, 1, (Optr)PBlock9378);
    Symbol SMB_alt_ = new_Symbol(L"alt:");
    // alt:. 
    Send PSend9382 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_alt_, 1, (Optr)VAR_character_0_0);
    Array PThreadedCode9367 = instantiate_Array_with(ThreadedCode_Class, 0, 36, (Optr)&t_push1, (Optr)PAssign9368, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9369, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_8644, (Optr)&t_send1, (Optr)PSend9370, (Optr)&t_send_ifTrue_, (Optr)PSend9371, (Optr)PBlock9372, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)char_9017, (Optr)&t_send1, (Optr)PSend9376, (Optr)&t_send_ifTrue_, (Optr)PSend9377, (Optr)PBlock9378, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9382, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9365 = new_Block_with(PArray9366, empty_Array, PThreadedCode9367, 5, PAssign9368, PSend9371, PSend9377, PSend9382, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9383 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9365);
    Array PThreadedCode9364 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9365, (Optr)&t_send1, (Optr)PSend9383, (Optr)&t_method_return);
    Method PMethod9362 = new_Method_with(empty_Array, PArray9363, empty_Array, PThreadedCode9364, 1, PSend9383);
    
    MethodClosure MC_SMB_readC1 = new_MethodClosure((Method)PMethod9362, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readC1, MC_SMB_readC1);
}


static void init_SMB_input_() {
    Symbol SMB_input_ = new_Symbol(L"input:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9385 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9387 = new_Assign((Optr)slot_IO_Term_TermInputDriver_input, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9386 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9387, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9384 = new_Method_with(PArray9385, empty_Array, empty_Array, PThreadedCode9386, 2, PAssign9387, self);
    
    MethodClosure MC_SMB_input_ = new_MethodClosure((Method)PMethod9384, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_input_, MC_SMB_input_);
}


static void init_SMB_continueReadCSINumber_() {
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    Variable VAR_v_0_0 = new_Variable_named(L"v", 0);
    Array PArray9389 = new_Array_with(1, (Optr)VAR_v_0_0);
    Variable VAR_value_0_1 = new_Variable_named(L"value", 0);
    Variable VAR_character_0_2 = new_Variable_named(L"character", 0);
    Array PArray9390 = new_Array_with(2, (Optr)VAR_value_0_1, (Optr)VAR_character_0_2);
    Assign PAssign9392 = new_Assign((Optr)VAR_value_0_1, (Optr)VAR_v_0_0);
    Character char_9395 = new_Character(L'0');
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9397 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9396 = new_Assign((Optr)VAR_character_0_2, (Optr)PSend9397);
    Constant char_9395_Const = new_Constant((Optr)char_9395);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9398 = new_Send((Optr)char_9395_Const, SMB__lt__equals_, 1, (Optr)PAssign9396);
    Character char_9401 = new_Character(L'9');
    Constant char_9401_Const = new_Constant((Optr)char_9401);
    // <=. 
    Send PSend9402 = new_Send((Optr)VAR_character_0_2, SMB__lt__equals_, 1, (Optr)char_9401_Const);
    Array PThreadedCode9400 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9401, (Optr)&t_send1, (Optr)PSend9402, (Optr)&t_block_return);
    Block PBlock9399 = new_Block_with(empty_Array, empty_Array, PThreadedCode9400, 1, PSend9402);
    Symbol SMB_and_ = new_Symbol(L"and:");
    // and:. 
    Send PSend9403 = new_Send((Optr)PSend9398, SMB_and_, 1, (Optr)PBlock9399);
    Array PThreadedCode9394 = instantiate_Array_with(ThreadedCode_Class, 0, 16, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_push1, (Optr)PAssign9396, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9397, (Optr)&t_assign, (Optr)&t_send1, (Optr)PSend9398, (Optr)&t_push_closure, (Optr)PBlock9399, (Optr)&t_send1, (Optr)PSend9403, (Optr)&t_block_return);
    Block PBlock9393 = new_Block_with(empty_Array, empty_Array, PThreadedCode9394, 1, PSend9403);
    Symbol SMB__times_ = new_Symbol(L"*");
    SmallInt int_10 = new_SmallInt(10);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // *. 
    Send PSend9408 = new_Send((Optr)VAR_value_0_1, SMB__times_, 1, (Optr)int_10_Const);
    Symbol SMB__plus_ = new_Symbol(L"+");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9410 = new_Send((Optr)VAR_character_0_2, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // asInteger. 
    Send PSend9411 = new_Send((Optr)char_9395_Const, SMB_asInteger, 0);
    // -. 
    Send PSend9409 = new_Send((Optr)PSend9410, SMB__minus_, 1, (Optr)PSend9411);
    // +. 
    Send PSend9407 = new_Send((Optr)PSend9408, SMB__plus_, 1, (Optr)PSend9409);
    Assign PAssign9406 = new_Assign((Optr)VAR_value_0_1, (Optr)PSend9407);
    Array PThreadedCode9405 = instantiate_Array_with(ThreadedCode_Class, 0, 22, (Optr)&t_push1, (Optr)PAssign9406, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push1, (Optr)int_10, (Optr)&t_send1, (Optr)PSend9408, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_send0, (Optr)PSend9410, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send0, (Optr)PSend9411, (Optr)&t_send1, (Optr)PSend9409, (Optr)&t_send1, (Optr)PSend9407, (Optr)&t_assign, (Optr)&t_block_return);
    Block PBlock9404 = new_Block_with(empty_Array, empty_Array, PThreadedCode9405, 1, PAssign9406);
    Symbol SMB_whileTrue_ = new_Symbol(L"whileTrue:");
    // whileTrue:. 
    Send PSend9412 = new_Send((Optr)PBlock9393, SMB_whileTrue_, 1, (Optr)PBlock9404);
    Character char_9413 = new_Character(L'~');
    Symbol SMB__equals_ = new_Symbol(L"=");
    Constant char_9413_Const = new_Constant((Optr)char_9413);
    // =. 
    Send PSend9414 = new_Send((Optr)VAR_character_0_2, SMB__equals_, 1, (Optr)char_9413_Const);
    Symbol SMB_ifFalse_ = new_Symbol(L"ifFalse:");
    String string_9418 = new_String(L"Control Sequence Introducer (number end)");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9418_Const = new_Constant((Optr)string_9418);
    // fail:in:. 
    Send PSend9419 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9418_Const);
    Array PThreadedCode9417 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9418, (Optr)&t_send2, (Optr)PSend9419, (Optr)&t_block_return);
    Block PBlock9416 = new_Block_with(empty_Array, empty_Array, PThreadedCode9417, 1, PSend9419);
    // ifFalse:. 
    Send PSend9415 = new_Send((Optr)PSend9414, SMB_ifFalse_, 1, (Optr)PBlock9416);
    String string_9422 = new_String(L"Control Sequence Introducer (number end)");
    Constant string_9422_Const = new_Constant((Optr)string_9422);
    // fail:in:. 
    Send PSend9423 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_2, (Optr)string_9422_Const);
    Array PThreadedCode9421 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)string_9422, (Optr)&t_send2, (Optr)PSend9423, (Optr)&t_block_return);
    Block PBlock9420 = new_Block_with(empty_Array, empty_Array, PThreadedCode9421, 1, PSend9423);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9424 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_value_0_1, (Optr)PBlock9420);
    Array PThreadedCode9391 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9392, (Optr)&t_push_variable, (Optr)VAR_v_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_closure, (Optr)PBlock9393, (Optr)&t_push_closure, (Optr)PBlock9404, (Optr)&t_send1, (Optr)PSend9412, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_character_0_2, (Optr)&t_push1, (Optr)char_9413, (Optr)&t_send1, (Optr)PSend9414, (Optr)&t_send_ifFalse_, (Optr)PSend9415, (Optr)PBlock9416, (Optr)&t_zap, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_value_0_1, (Optr)&t_push_closure, (Optr)PBlock9420, (Optr)&t_send2, (Optr)PSend9424, (Optr)&t_method_return);
    Method PMethod9388 = new_Method_with(PArray9389, PArray9390, empty_Array, PThreadedCode9391, 4, PAssign9392, PSend9412, PSend9415, PSend9424);
    
    MethodClosure MC_SMB_continueReadCSINumber_ = new_MethodClosure((Method)PMethod9388, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_continueReadCSINumber_, MC_SMB_continueReadCSINumber_);
}


static void init_SMB_initialize() {
    Symbol SMB_initialize = new_Symbol(L"initialize");
    Symbol SMB_new = new_Symbol(L"new");
    // new. 
    Send PSend9428 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9427 = new_Assign((Optr)slot_IO_Term_TermInputDriver_normal, (Optr)PSend9428);
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    // initializeNormal:. 
    Send PSend9429 = new_Send((Optr)self, SMB_initializeNormal_, 1, (Optr)slot_IO_Term_TermInputDriver_normal);
    // new. 
    Send PSend9431 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9430 = new_Assign((Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)PSend9431);
    Symbol SMB_initializeSS3_ = new_Symbol(L"initializeSS3:");
    // initializeSS3:. 
    Send PSend9432 = new_Send((Optr)self, SMB_initializeSS3_, 1, (Optr)slot_IO_Term_TermInputDriver_ss3);
    // new. 
    Send PSend9434 = new_Send((Optr)Dictionary_classReference, SMB_new, 0);
    Assign PAssign9433 = new_Assign((Optr)slot_IO_Term_TermInputDriver_csi, (Optr)PSend9434);
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    // initializeCSI:. 
    Send PSend9435 = new_Send((Optr)self, SMB_initializeCSI_, 1, (Optr)slot_IO_Term_TermInputDriver_csi);
    Array PThreadedCode9426 = instantiate_Array_with(ThreadedCode_Class, 0, 43, (Optr)&t_push1, (Optr)PAssign9427, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9428, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_send1, (Optr)PSend9429, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9430, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9431, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_send1, (Optr)PSend9432, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9433, (Optr)&t_push_class_reference, (Optr)Dictionary_classReference, (Optr)&t_send0, (Optr)PSend9434, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_self, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_send1, (Optr)PSend9435, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9425 = new_Method_with(empty_Array, empty_Array, empty_Array, PThreadedCode9426, 7, PAssign9427, PSend9429, PAssign9430, PSend9432, PAssign9433, PSend9435, self);
    
    MethodClosure MC_SMB_initialize = new_MethodClosure((Method)PMethod9425, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initialize, MC_SMB_initialize);
}


static void init_SMB_fail_in_() {
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Variable VAR_value_0_0 = new_Variable_named(L"value", 0);
    Variable VAR_mode_0_1 = new_Variable_named(L"mode", 0);
    Array PArray9437 = new_Array_with(2, (Optr)VAR_value_0_0, (Optr)VAR_mode_0_1);
    Symbol SMB_asString = new_Symbol(L"asString");
    // asString. 
    Send PSend9439 = new_Send((Optr)VAR_mode_0_1, SMB_asString, 0);
    String string_9440 = new_String(L" does not support ");
    Symbol SMB__append_ = new_Symbol(L",");
    Constant string_9440_Const = new_Constant((Optr)string_9440);
    // ,. 
    Send PSend9441 = new_Send((Optr)PSend9439, SMB__append_, 1, (Optr)string_9440_Const);
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9442 = new_Send((Optr)VAR_value_0_0, SMB_asInteger, 0);
    // ,. 
    Send PSend9443 = new_Send((Optr)PSend9441, SMB__append_, 1, (Optr)PSend9442);
    Symbol SMB_warn_ = new_Symbol(L"warn:");
    // warn:. 
    Send PSend9444 = new_Send((Optr)self, SMB_warn_, 1, (Optr)PSend9443);
    Array PThreadedCode9438 = instantiate_Array_with(ThreadedCode_Class, 0, 19, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_mode_0_1, (Optr)&t_send0, (Optr)PSend9439, (Optr)&t_push1, (Optr)string_9440, (Optr)&t_send1, (Optr)PSend9441, (Optr)&t_push_variable, (Optr)VAR_value_0_0, (Optr)&t_send0, (Optr)PSend9442, (Optr)&t_send1, (Optr)PSend9443, (Optr)&t_send1, (Optr)PSend9444, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9436 = new_Method_with(PArray9437, empty_Array, empty_Array, PThreadedCode9438, 2, PSend9444, self);
    
    MethodClosure MC_SMB_fail_in_ = new_MethodClosure((Method)PMethod9436, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_fail_in_, MC_SMB_fail_in_);
}


static void init_SMB_read() {
    Symbol SMB_read = new_Symbol(L"read");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9446 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Variable VAR__return__1_0 = new_Variable_named(L"_return_", 1);
    Array PArray9449 = new_Array_with(1, (Optr)VAR__return__1_0);
    // read. 
    Send PSend9452 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9451 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9452);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9455 = new_Send((Optr)VAR_character_0_0, SMB_asInteger, 0);
    Symbol SMB_write_ = new_Symbol(L"write:");
    // write:. 
    Send PSend9458 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_write_, 1, (Optr)VAR_character_0_0);
    Symbol SMB_escape_ = new_Symbol(L"escape:");
    // escape:. 
    Send PSend9459 = new_Send((Optr)VAR__return__1_0, SMB_escape_, 1, (Optr)PSend9458);
    Array PThreadedCode9457 = instantiate_Array_with(ThreadedCode_Class, 0, 11, (Optr)&t_push_variable, (Optr)VAR__return__1_0, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send1, (Optr)PSend9458, (Optr)&t_send1, (Optr)PSend9459, (Optr)&t_block_return);
    Block PBlock9456 = new_Block_with(empty_Array, empty_Array, PThreadedCode9457, 1, PSend9459);
    // at:ifAbsent:. 
    Send PSend9454 = new_Send((Optr)slot_IO_Term_TermInputDriver_normal, SMB_at_ifAbsent_, 2, (Optr)PSend9455, (Optr)PBlock9456);
    Assign PAssign9453 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9454);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9460 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9450 = instantiate_Array_with(ThreadedCode_Class, 0, 28, (Optr)&t_push1, (Optr)PAssign9451, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9452, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9453, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_normal, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_send0, (Optr)PSend9455, (Optr)&t_push_closure, (Optr)PBlock9456, (Optr)&t_send2, (Optr)PSend9454, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9460, (Optr)&t_zap, (Optr)&t_method_return_self);
    Block PBlock9448 = new_Block_with(PArray9449, empty_Array, PThreadedCode9450, 4, PAssign9451, PAssign9453, PSend9460, self);
    Symbol SMB_on_ = new_Symbol(L"on:");
    // on:. 
    Send PSend9461 = new_Send((Optr)PContinue_classReference, SMB_on_, 1, (Optr)PBlock9448);
    Array PThreadedCode9447 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_class_reference, (Optr)PContinue_classReference, (Optr)&t_push_closure, (Optr)PBlock9448, (Optr)&t_send1, (Optr)PSend9461, (Optr)&t_method_return);
    Method PMethod9445 = new_Method_with(empty_Array, PArray9446, empty_Array, PThreadedCode9447, 1, PSend9461);
    
    MethodClosure MC_SMB_read = new_MethodClosure((Method)PMethod9445, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_read, MC_SMB_read);
}


static void init_SMB_readSS3() {
    Symbol SMB_readSS3 = new_Symbol(L"readSS3");
    Variable VAR_character_0_0 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_1 = new_Variable_named(L"action", 0);
    Array PArray9463 = new_Array_with(2, (Optr)VAR_character_0_0, (Optr)VAR_action_0_1);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9466 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9465 = new_Assign((Optr)VAR_character_0_0, (Optr)PSend9466);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    String string_9471 = new_String(L"Single-Shift 3");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9471_Const = new_Constant((Optr)string_9471);
    // fail:in:. 
    Send PSend9472 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_0, (Optr)string_9471_Const);
    Array PThreadedCode9470 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push1, (Optr)string_9471, (Optr)&t_send2, (Optr)PSend9472, (Optr)&t_block_return);
    Block PBlock9469 = new_Block_with(empty_Array, empty_Array, PThreadedCode9470, 1, PSend9472);
    // at:ifAbsent:. 
    Send PSend9468 = new_Send((Optr)slot_IO_Term_TermInputDriver_ss3, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_0, (Optr)PBlock9469);
    Assign PAssign9467 = new_Assign((Optr)VAR_action_0_1, (Optr)PSend9468);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9473 = new_Send((Optr)VAR_action_0_1, SMB_value, 0);
    Array PThreadedCode9464 = instantiate_Array_with(ThreadedCode_Class, 0, 26, (Optr)&t_push1, (Optr)PAssign9465, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9466, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9467, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_ss3, (Optr)&t_push_variable, (Optr)VAR_character_0_0, (Optr)&t_push_closure, (Optr)PBlock9469, (Optr)&t_send2, (Optr)PSend9468, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_1, (Optr)&t_send0, (Optr)PSend9473, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9462 = new_Method_with(empty_Array, PArray9463, empty_Array, PThreadedCode9464, 4, PAssign9465, PAssign9467, PSend9473, self);
    
    MethodClosure MC_SMB_readSS3 = new_MethodClosure((Method)PMethod9462, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readSS3, MC_SMB_readSS3);
}


static void init_SMB_initializeCSI_() {
    Symbol SMB_initializeCSI_ = new_Symbol(L"initializeCSI:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9475 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Character char_9477 = new_Character(L'A');
    Symbol SMB_up = new_Symbol(L"up");
    // up. 
    Send PSend9480 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_up, 0);
    Array PThreadedCode9479 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9480, (Optr)&t_block_return);
    Block PBlock9478 = new_Block_with(empty_Array, empty_Array, PThreadedCode9479, 1, PSend9480);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    Constant char_9477_Const = new_Constant((Optr)char_9477);
    // at:put:. 
    Send PSend9481 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9477_Const, (Optr)PBlock9478);
    Character char_8767 = new_Character(L'B');
    Symbol SMB_down = new_Symbol(L"down");
    // down. 
    Send PSend9484 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_down, 0);
    Array PThreadedCode9483 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9484, (Optr)&t_block_return);
    Block PBlock9482 = new_Block_with(empty_Array, empty_Array, PThreadedCode9483, 1, PSend9484);
    Constant char_8767_Const = new_Constant((Optr)char_8767);
    // at:put:. 
    Send PSend9485 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8767_Const, (Optr)PBlock9482);
    Character char_9486 = new_Character(L'C');
    Symbol SMB_right = new_Symbol(L"right");
    // right. 
    Send PSend9489 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_right, 0);
    Array PThreadedCode9488 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9489, (Optr)&t_block_return);
    Block PBlock9487 = new_Block_with(empty_Array, empty_Array, PThreadedCode9488, 1, PSend9489);
    Constant char_9486_Const = new_Constant((Optr)char_9486);
    // at:put:. 
    Send PSend9490 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9486_Const, (Optr)PBlock9487);
    Character char_9491 = new_Character(L'D');
    Symbol SMB_left = new_Symbol(L"left");
    // left. 
    Send PSend9494 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_left, 0);
    Array PThreadedCode9493 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9494, (Optr)&t_block_return);
    Block PBlock9492 = new_Block_with(empty_Array, empty_Array, PThreadedCode9493, 1, PSend9494);
    Constant char_9491_Const = new_Constant((Optr)char_9491);
    // at:put:. 
    Send PSend9495 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_9491_Const, (Optr)PBlock9492);
    Character char_8698 = new_Character(L'E');
    Symbol SMB_here = new_Symbol(L"here");
    // here. 
    Send PSend9498 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_here, 0);
    Array PThreadedCode9497 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9498, (Optr)&t_block_return);
    Block PBlock9496 = new_Block_with(empty_Array, empty_Array, PThreadedCode9497, 1, PSend9498);
    Constant char_8698_Const = new_Constant((Optr)char_8698);
    // at:put:. 
    Send PSend9499 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8698_Const, (Optr)PBlock9496);
    Symbol SMB_find = new_Symbol(L"find");
    // find. 
    Send PSend9502 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_find, 0);
    Array PThreadedCode9501 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9502, (Optr)&t_block_return);
    Block PBlock9500 = new_Block_with(empty_Array, empty_Array, PThreadedCode9501, 1, PSend9502);
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9503 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9500);
    Symbol SMB_insert = new_Symbol(L"insert");
    // insert. 
    Send PSend9506 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_insert, 0);
    Array PThreadedCode9505 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9506, (Optr)&t_block_return);
    Block PBlock9504 = new_Block_with(empty_Array, empty_Array, PThreadedCode9505, 1, PSend9506);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9507 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9504);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_remove = new_Symbol(L"remove");
    // remove. 
    Send PSend9510 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_remove, 0);
    Array PThreadedCode9509 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9510, (Optr)&t_block_return);
    Block PBlock9508 = new_Block_with(empty_Array, empty_Array, PThreadedCode9509, 1, PSend9510);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9511 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9508);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_select = new_Symbol(L"select");
    // select. 
    Send PSend9514 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_select, 0);
    Array PThreadedCode9513 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9514, (Optr)&t_block_return);
    Block PBlock9512 = new_Block_with(empty_Array, empty_Array, PThreadedCode9513, 1, PSend9514);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9515 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9512);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_previousScreen = new_Symbol(L"previousScreen");
    // previousScreen. 
    Send PSend9518 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_previousScreen, 0);
    Array PThreadedCode9517 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9518, (Optr)&t_block_return);
    Block PBlock9516 = new_Block_with(empty_Array, empty_Array, PThreadedCode9517, 1, PSend9518);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9519 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9516);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_nextScreen = new_Symbol(L"nextScreen");
    // nextScreen. 
    Send PSend9522 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_nextScreen, 0);
    Array PThreadedCode9521 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9522, (Optr)&t_block_return);
    Block PBlock9520 = new_Block_with(empty_Array, empty_Array, PThreadedCode9521, 1, PSend9522);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9523 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9520);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_f5 = new_Symbol(L"f5");
    // f5. 
    Send PSend9526 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f5, 0);
    Array PThreadedCode9525 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9526, (Optr)&t_block_return);
    Block PBlock9524 = new_Block_with(empty_Array, empty_Array, PThreadedCode9525, 1, PSend9526);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9527 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9524);
    SmallInt int_17 = new_SmallInt(17);
    Symbol SMB_f6 = new_Symbol(L"f6");
    // f6. 
    Send PSend9530 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f6, 0);
    Array PThreadedCode9529 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9530, (Optr)&t_block_return);
    Block PBlock9528 = new_Block_with(empty_Array, empty_Array, PThreadedCode9529, 1, PSend9530);
    Constant int_17_Const = new_Constant((Optr)int_17);
    // at:put:. 
    Send PSend9531 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_17_Const, (Optr)PBlock9528);
    SmallInt int_18 = new_SmallInt(18);
    Symbol SMB_f7 = new_Symbol(L"f7");
    // f7. 
    Send PSend9534 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f7, 0);
    Array PThreadedCode9533 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9534, (Optr)&t_block_return);
    Block PBlock9532 = new_Block_with(empty_Array, empty_Array, PThreadedCode9533, 1, PSend9534);
    Constant int_18_Const = new_Constant((Optr)int_18);
    // at:put:. 
    Send PSend9535 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_18_Const, (Optr)PBlock9532);
    SmallInt int_19 = new_SmallInt(19);
    Symbol SMB_f8 = new_Symbol(L"f8");
    // f8. 
    Send PSend9538 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f8, 0);
    Array PThreadedCode9537 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9538, (Optr)&t_block_return);
    Block PBlock9536 = new_Block_with(empty_Array, empty_Array, PThreadedCode9537, 1, PSend9538);
    Constant int_19_Const = new_Constant((Optr)int_19);
    // at:put:. 
    Send PSend9539 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_19_Const, (Optr)PBlock9536);
    SmallInt int_20 = new_SmallInt(20);
    Symbol SMB_f9 = new_Symbol(L"f9");
    // f9. 
    Send PSend9542 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f9, 0);
    Array PThreadedCode9541 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9542, (Optr)&t_block_return);
    Block PBlock9540 = new_Block_with(empty_Array, empty_Array, PThreadedCode9541, 1, PSend9542);
    Constant int_20_Const = new_Constant((Optr)int_20);
    // at:put:. 
    Send PSend9543 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_20_Const, (Optr)PBlock9540);
    SmallInt int_21 = new_SmallInt(21);
    Symbol SMB_f10 = new_Symbol(L"f10");
    // f10. 
    Send PSend9546 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f10, 0);
    Array PThreadedCode9545 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9546, (Optr)&t_block_return);
    Block PBlock9544 = new_Block_with(empty_Array, empty_Array, PThreadedCode9545, 1, PSend9546);
    Constant int_21_Const = new_Constant((Optr)int_21);
    // at:put:. 
    Send PSend9547 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_21_Const, (Optr)PBlock9544);
    SmallInt int_23 = new_SmallInt(23);
    Symbol SMB_f11 = new_Symbol(L"f11");
    // f11. 
    Send PSend9550 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f11, 0);
    Array PThreadedCode9549 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9550, (Optr)&t_block_return);
    Block PBlock9548 = new_Block_with(empty_Array, empty_Array, PThreadedCode9549, 1, PSend9550);
    Constant int_23_Const = new_Constant((Optr)int_23);
    // at:put:. 
    Send PSend9551 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_23_Const, (Optr)PBlock9548);
    SmallInt int_24 = new_SmallInt(24);
    Symbol SMB_f12 = new_Symbol(L"f12");
    // f12. 
    Send PSend9554 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f12, 0);
    Array PThreadedCode9553 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9554, (Optr)&t_block_return);
    Block PBlock9552 = new_Block_with(empty_Array, empty_Array, PThreadedCode9553, 1, PSend9554);
    Constant int_24_Const = new_Constant((Optr)int_24);
    // at:put:. 
    Send PSend9555 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_24_Const, (Optr)PBlock9552);
    SmallInt int_25 = new_SmallInt(25);
    Symbol SMB_f13 = new_Symbol(L"f13");
    // f13. 
    Send PSend9558 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f13, 0);
    Array PThreadedCode9557 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9558, (Optr)&t_block_return);
    Block PBlock9556 = new_Block_with(empty_Array, empty_Array, PThreadedCode9557, 1, PSend9558);
    Constant int_25_Const = new_Constant((Optr)int_25);
    // at:put:. 
    Send PSend9559 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_25_Const, (Optr)PBlock9556);
    SmallInt int_26 = new_SmallInt(26);
    Symbol SMB_f14 = new_Symbol(L"f14");
    // f14. 
    Send PSend9562 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f14, 0);
    Array PThreadedCode9561 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9562, (Optr)&t_block_return);
    Block PBlock9560 = new_Block_with(empty_Array, empty_Array, PThreadedCode9561, 1, PSend9562);
    Constant int_26_Const = new_Constant((Optr)int_26);
    // at:put:. 
    Send PSend9563 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_26_Const, (Optr)PBlock9560);
    SmallInt int_28 = new_SmallInt(28);
    Symbol SMB_f15 = new_Symbol(L"f15");
    // f15. 
    Send PSend9566 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f15, 0);
    Array PThreadedCode9565 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9566, (Optr)&t_block_return);
    Block PBlock9564 = new_Block_with(empty_Array, empty_Array, PThreadedCode9565, 1, PSend9566);
    Constant int_28_Const = new_Constant((Optr)int_28);
    // at:put:. 
    Send PSend9567 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_28_Const, (Optr)PBlock9564);
    SmallInt int_29 = new_SmallInt(29);
    Symbol SMB_f16 = new_Symbol(L"f16");
    // f16. 
    Send PSend9570 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f16, 0);
    Array PThreadedCode9569 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9570, (Optr)&t_block_return);
    Block PBlock9568 = new_Block_with(empty_Array, empty_Array, PThreadedCode9569, 1, PSend9570);
    Constant int_29_Const = new_Constant((Optr)int_29);
    // at:put:. 
    Send PSend9571 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_29_Const, (Optr)PBlock9568);
    SmallInt int_31 = new_SmallInt(31);
    Symbol SMB_f17 = new_Symbol(L"f17");
    // f17. 
    Send PSend9574 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f17, 0);
    Array PThreadedCode9573 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9574, (Optr)&t_block_return);
    Block PBlock9572 = new_Block_with(empty_Array, empty_Array, PThreadedCode9573, 1, PSend9574);
    Constant int_31_Const = new_Constant((Optr)int_31);
    // at:put:. 
    Send PSend9575 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_31_Const, (Optr)PBlock9572);
    SmallInt int_32 = new_SmallInt(32);
    Symbol SMB_f18 = new_Symbol(L"f18");
    // f18. 
    Send PSend9578 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f18, 0);
    Array PThreadedCode9577 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9578, (Optr)&t_block_return);
    Block PBlock9576 = new_Block_with(empty_Array, empty_Array, PThreadedCode9577, 1, PSend9578);
    Constant int_32_Const = new_Constant((Optr)int_32);
    // at:put:. 
    Send PSend9579 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_32_Const, (Optr)PBlock9576);
    SmallInt int_33 = new_SmallInt(33);
    Symbol SMB_f19 = new_Symbol(L"f19");
    // f19. 
    Send PSend9582 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f19, 0);
    Array PThreadedCode9581 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9582, (Optr)&t_block_return);
    Block PBlock9580 = new_Block_with(empty_Array, empty_Array, PThreadedCode9581, 1, PSend9582);
    Constant int_33_Const = new_Constant((Optr)int_33);
    // at:put:. 
    Send PSend9583 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_33_Const, (Optr)PBlock9580);
    SmallInt int_34 = new_SmallInt(34);
    Symbol SMB_f20 = new_Symbol(L"f20");
    // f20. 
    Send PSend9586 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_f20, 0);
    Array PThreadedCode9585 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9586, (Optr)&t_block_return);
    Block PBlock9584 = new_Block_with(empty_Array, empty_Array, PThreadedCode9585, 1, PSend9586);
    Constant int_34_Const = new_Constant((Optr)int_34);
    // at:put:. 
    Send PSend9587 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_34_Const, (Optr)PBlock9584);
    Character char_8644 = new_Character(L'[');
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    // readCSI. 
    Send PSend9590 = new_Send((Optr)self, SMB_readCSI, 0);
    Array PThreadedCode9589 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9590, (Optr)&t_block_return);
    Block PBlock9588 = new_Block_with(empty_Array, empty_Array, PThreadedCode9589, 1, PSend9590);
    Constant char_8644_Const = new_Constant((Optr)char_8644);
    // at:put:. 
    Send PSend9591 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)char_8644_Const, (Optr)PBlock9588);
    Array PThreadedCode9476 = instantiate_Array_with(ThreadedCode_Class, 0, 251, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9477, (Optr)&t_push_closure, (Optr)PBlock9478, (Optr)&t_send2, (Optr)PSend9481, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8767, (Optr)&t_push_closure, (Optr)PBlock9482, (Optr)&t_send2, (Optr)PSend9485, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9486, (Optr)&t_push_closure, (Optr)PBlock9487, (Optr)&t_send2, (Optr)PSend9490, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_9491, (Optr)&t_push_closure, (Optr)PBlock9492, (Optr)&t_send2, (Optr)PSend9495, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8698, (Optr)&t_push_closure, (Optr)PBlock9496, (Optr)&t_send2, (Optr)PSend9499, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9500, (Optr)&t_send2, (Optr)PSend9503, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9504, (Optr)&t_send2, (Optr)PSend9507, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9508, (Optr)&t_send2, (Optr)PSend9511, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9512, (Optr)&t_send2, (Optr)PSend9515, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9516, (Optr)&t_send2, (Optr)PSend9519, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9520, (Optr)&t_send2, (Optr)PSend9523, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9524, (Optr)&t_send2, (Optr)PSend9527, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_17, (Optr)&t_push_closure, (Optr)PBlock9528, (Optr)&t_send2, (Optr)PSend9531, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_18, (Optr)&t_push_closure, (Optr)PBlock9532, (Optr)&t_send2, (Optr)PSend9535, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_19, (Optr)&t_push_closure, (Optr)PBlock9536, (Optr)&t_send2, (Optr)PSend9539, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_20, (Optr)&t_push_closure, (Optr)PBlock9540, (Optr)&t_send2, (Optr)PSend9543, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_21, (Optr)&t_push_closure, (Optr)PBlock9544, (Optr)&t_send2, (Optr)PSend9547, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_23, (Optr)&t_push_closure, (Optr)PBlock9548, (Optr)&t_send2, (Optr)PSend9551, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_24, (Optr)&t_push_closure, (Optr)PBlock9552, (Optr)&t_send2, (Optr)PSend9555, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_25, (Optr)&t_push_closure, (Optr)PBlock9556, (Optr)&t_send2, (Optr)PSend9559, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_26, (Optr)&t_push_closure, (Optr)PBlock9560, (Optr)&t_send2, (Optr)PSend9563, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_28, (Optr)&t_push_closure, (Optr)PBlock9564, (Optr)&t_send2, (Optr)PSend9567, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_29, (Optr)&t_push_closure, (Optr)PBlock9568, (Optr)&t_send2, (Optr)PSend9571, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_31, (Optr)&t_push_closure, (Optr)PBlock9572, (Optr)&t_send2, (Optr)PSend9575, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_32, (Optr)&t_push_closure, (Optr)PBlock9576, (Optr)&t_send2, (Optr)PSend9579, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_33, (Optr)&t_push_closure, (Optr)PBlock9580, (Optr)&t_send2, (Optr)PSend9583, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_34, (Optr)&t_push_closure, (Optr)PBlock9584, (Optr)&t_send2, (Optr)PSend9587, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)char_8644, (Optr)&t_push_closure, (Optr)PBlock9588, (Optr)&t_send2, (Optr)PSend9591, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9474 = new_Method_with(PArray9475, empty_Array, empty_Array, PThreadedCode9476, 29, PSend9481, PSend9485, PSend9490, PSend9495, PSend9499, PSend9503, PSend9507, PSend9511, PSend9515, PSend9519, PSend9523, PSend9527, PSend9531, PSend9535, PSend9539, PSend9543, PSend9547, PSend9551, PSend9555, PSend9559, PSend9563, PSend9567, PSend9571, PSend9575, PSend9579, PSend9583, PSend9587, PSend9591, self);
    
    MethodClosure MC_SMB_initializeCSI_ = new_MethodClosure((Method)PMethod9474, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeCSI_, MC_SMB_initializeCSI_);
}


static void init_SMB_handler_() {
    Symbol SMB_handler_ = new_Symbol(L"handler:");
    Variable VAR_anObject_0_0 = new_Variable_named(L"anObject", 0);
    Array PArray9593 = new_Array_with(1, (Optr)VAR_anObject_0_0);
    Assign PAssign9595 = new_Assign((Optr)slot_IO_Term_TermInputDriver_handler, (Optr)VAR_anObject_0_0);
    Array PThreadedCode9594 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push1, (Optr)PAssign9595, (Optr)&t_push_variable, (Optr)VAR_anObject_0_0, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9592 = new_Method_with(PArray9593, empty_Array, empty_Array, PThreadedCode9594, 2, PAssign9595, self);
    
    MethodClosure MC_SMB_handler_ = new_MethodClosure((Method)PMethod9592, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_handler_, MC_SMB_handler_);
}


static void init_SMB_initializeNormal_() {
    Symbol SMB_initializeNormal_ = new_Symbol(L"initializeNormal:");
    Variable VAR_actions_0_0 = new_Variable_named(L"actions", 0);
    Array PArray9597 = new_Array_with(1, (Optr)VAR_actions_0_0);
    Symbol SMB_startOfHeading = new_Symbol(L"startOfHeading");
    // startOfHeading. 
    Send PSend9601 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfHeading, 0);
    Array PThreadedCode9600 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9601, (Optr)&t_block_return);
    Block PBlock9599 = new_Block_with(empty_Array, empty_Array, PThreadedCode9600, 1, PSend9601);
    Symbol SMB_at_put_ = new_Symbol(L"at:put:");
    SmallInt int_1 = new_SmallInt(1);
    Constant int_1_Const = new_Constant((Optr)int_1);
    // at:put:. 
    Send PSend9602 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_1_Const, (Optr)PBlock9599);
    Symbol SMB_startOfText = new_Symbol(L"startOfText");
    // startOfText. 
    Send PSend9605 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_startOfText, 0);
    Array PThreadedCode9604 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9605, (Optr)&t_block_return);
    Block PBlock9603 = new_Block_with(empty_Array, empty_Array, PThreadedCode9604, 1, PSend9605);
    SmallInt int_2 = new_SmallInt(2);
    Constant int_2_Const = new_Constant((Optr)int_2);
    // at:put:. 
    Send PSend9606 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_2_Const, (Optr)PBlock9603);
    SmallInt int_3 = new_SmallInt(3);
    Symbol SMB_endOfText = new_Symbol(L"endOfText");
    // endOfText. 
    Send PSend9609 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfText, 0);
    Array PThreadedCode9608 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9609, (Optr)&t_block_return);
    Block PBlock9607 = new_Block_with(empty_Array, empty_Array, PThreadedCode9608, 1, PSend9609);
    Constant int_3_Const = new_Constant((Optr)int_3);
    // at:put:. 
    Send PSend9610 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_3_Const, (Optr)PBlock9607);
    SmallInt int_4 = new_SmallInt(4);
    Symbol SMB_endOfTransmission = new_Symbol(L"endOfTransmission");
    // endOfTransmission. 
    Send PSend9613 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_endOfTransmission, 0);
    Array PThreadedCode9612 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9613, (Optr)&t_block_return);
    Block PBlock9611 = new_Block_with(empty_Array, empty_Array, PThreadedCode9612, 1, PSend9613);
    Constant int_4_Const = new_Constant((Optr)int_4);
    // at:put:. 
    Send PSend9614 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_4_Const, (Optr)PBlock9611);
    SmallInt int_5 = new_SmallInt(5);
    Symbol SMB_enquiry = new_Symbol(L"enquiry");
    // enquiry. 
    Send PSend9617 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_enquiry, 0);
    Array PThreadedCode9616 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9617, (Optr)&t_block_return);
    Block PBlock9615 = new_Block_with(empty_Array, empty_Array, PThreadedCode9616, 1, PSend9617);
    Constant int_5_Const = new_Constant((Optr)int_5);
    // at:put:. 
    Send PSend9618 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_5_Const, (Optr)PBlock9615);
    SmallInt int_6 = new_SmallInt(6);
    Symbol SMB_acknowledge = new_Symbol(L"acknowledge");
    // acknowledge. 
    Send PSend9621 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_acknowledge, 0);
    Array PThreadedCode9620 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9621, (Optr)&t_block_return);
    Block PBlock9619 = new_Block_with(empty_Array, empty_Array, PThreadedCode9620, 1, PSend9621);
    Constant int_6_Const = new_Constant((Optr)int_6);
    // at:put:. 
    Send PSend9622 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_6_Const, (Optr)PBlock9619);
    SmallInt int_7 = new_SmallInt(7);
    Symbol SMB_bell = new_Symbol(L"bell");
    // bell. 
    Send PSend9625 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_bell, 0);
    Array PThreadedCode9624 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9625, (Optr)&t_block_return);
    Block PBlock9623 = new_Block_with(empty_Array, empty_Array, PThreadedCode9624, 1, PSend9625);
    Constant int_7_Const = new_Constant((Optr)int_7);
    // at:put:. 
    Send PSend9626 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_7_Const, (Optr)PBlock9623);
    SmallInt int_8 = new_SmallInt(8);
    Symbol SMB_backspace = new_Symbol(L"backspace");
    // backspace. 
    Send PSend9629 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_backspace, 0);
    Array PThreadedCode9628 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9629, (Optr)&t_block_return);
    Block PBlock9627 = new_Block_with(empty_Array, empty_Array, PThreadedCode9628, 1, PSend9629);
    Constant int_8_Const = new_Constant((Optr)int_8);
    // at:put:. 
    Send PSend9630 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_8_Const, (Optr)PBlock9627);
    SmallInt int_9 = new_SmallInt(9);
    Symbol SMB_tab = new_Symbol(L"tab");
    // tab. 
    Send PSend9633 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_tab, 0);
    Array PThreadedCode9632 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9633, (Optr)&t_block_return);
    Block PBlock9631 = new_Block_with(empty_Array, empty_Array, PThreadedCode9632, 1, PSend9633);
    Constant int_9_Const = new_Constant((Optr)int_9);
    // at:put:. 
    Send PSend9634 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_9_Const, (Optr)PBlock9631);
    SmallInt int_10 = new_SmallInt(10);
    Symbol SMB_lf = new_Symbol(L"lf");
    // lf. 
    Send PSend9637 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_lf, 0);
    Array PThreadedCode9636 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9637, (Optr)&t_block_return);
    Block PBlock9635 = new_Block_with(empty_Array, empty_Array, PThreadedCode9636, 1, PSend9637);
    Constant int_10_Const = new_Constant((Optr)int_10);
    // at:put:. 
    Send PSend9638 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_10_Const, (Optr)PBlock9635);
    SmallInt int_11 = new_SmallInt(11);
    Symbol SMB_verticalTab = new_Symbol(L"verticalTab");
    // verticalTab. 
    Send PSend9641 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_verticalTab, 0);
    Array PThreadedCode9640 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9641, (Optr)&t_block_return);
    Block PBlock9639 = new_Block_with(empty_Array, empty_Array, PThreadedCode9640, 1, PSend9641);
    Constant int_11_Const = new_Constant((Optr)int_11);
    // at:put:. 
    Send PSend9642 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_11_Const, (Optr)PBlock9639);
    SmallInt int_12 = new_SmallInt(12);
    Symbol SMB_formfeed = new_Symbol(L"formfeed");
    // formfeed. 
    Send PSend9645 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_formfeed, 0);
    Array PThreadedCode9644 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9645, (Optr)&t_block_return);
    Block PBlock9643 = new_Block_with(empty_Array, empty_Array, PThreadedCode9644, 1, PSend9645);
    Constant int_12_Const = new_Constant((Optr)int_12);
    // at:put:. 
    Send PSend9646 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_12_Const, (Optr)PBlock9643);
    SmallInt int_13 = new_SmallInt(13);
    Symbol SMB_carriageReturn = new_Symbol(L"carriageReturn");
    // carriageReturn. 
    Send PSend9649 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_carriageReturn, 0);
    Array PThreadedCode9648 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9649, (Optr)&t_block_return);
    Block PBlock9647 = new_Block_with(empty_Array, empty_Array, PThreadedCode9648, 1, PSend9649);
    Constant int_13_Const = new_Constant((Optr)int_13);
    // at:put:. 
    Send PSend9650 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_13_Const, (Optr)PBlock9647);
    SmallInt int_14 = new_SmallInt(14);
    Symbol SMB_shiftOut = new_Symbol(L"shiftOut");
    // shiftOut. 
    Send PSend9653 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftOut, 0);
    Array PThreadedCode9652 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9653, (Optr)&t_block_return);
    Block PBlock9651 = new_Block_with(empty_Array, empty_Array, PThreadedCode9652, 1, PSend9653);
    Constant int_14_Const = new_Constant((Optr)int_14);
    // at:put:. 
    Send PSend9654 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_14_Const, (Optr)PBlock9651);
    SmallInt int_15 = new_SmallInt(15);
    Symbol SMB_shiftIn = new_Symbol(L"shiftIn");
    // shiftIn. 
    Send PSend9657 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_shiftIn, 0);
    Array PThreadedCode9656 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9657, (Optr)&t_block_return);
    Block PBlock9655 = new_Block_with(empty_Array, empty_Array, PThreadedCode9656, 1, PSend9657);
    Constant int_15_Const = new_Constant((Optr)int_15);
    // at:put:. 
    Send PSend9658 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_15_Const, (Optr)PBlock9655);
    SmallInt int_27 = new_SmallInt(27);
    Symbol SMB_readC1 = new_Symbol(L"readC1");
    // readC1. 
    Send PSend9661 = new_Send((Optr)self, SMB_readC1, 0);
    Array PThreadedCode9660 = instantiate_Array_with(ThreadedCode_Class, 0, 4, (Optr)&t_push_self, (Optr)&t_send0, (Optr)PSend9661, (Optr)&t_block_return);
    Block PBlock9659 = new_Block_with(empty_Array, empty_Array, PThreadedCode9660, 1, PSend9661);
    Constant int_27_Const = new_Constant((Optr)int_27);
    // at:put:. 
    Send PSend9662 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_27_Const, (Optr)PBlock9659);
    SmallInt int_127 = new_SmallInt(127);
    Symbol SMB_delete = new_Symbol(L"delete");
    // delete. 
    Send PSend9665 = new_Send((Optr)slot_IO_Term_TermInputDriver_handler, SMB_delete, 0);
    Array PThreadedCode9664 = instantiate_Array_with(ThreadedCode_Class, 0, 5, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_handler, (Optr)&t_send0, (Optr)PSend9665, (Optr)&t_block_return);
    Block PBlock9663 = new_Block_with(empty_Array, empty_Array, PThreadedCode9664, 1, PSend9665);
    Constant int_127_Const = new_Constant((Optr)int_127);
    // at:put:. 
    Send PSend9666 = new_Send((Optr)VAR_actions_0_0, SMB_at_put_, 2, (Optr)int_127_Const, (Optr)PBlock9663);
    Array PThreadedCode9598 = instantiate_Array_with(ThreadedCode_Class, 0, 152, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_1, (Optr)&t_push_closure, (Optr)PBlock9599, (Optr)&t_send2, (Optr)PSend9602, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push_2, (Optr)&t_push_closure, (Optr)PBlock9603, (Optr)&t_send2, (Optr)PSend9606, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_3, (Optr)&t_push_closure, (Optr)PBlock9607, (Optr)&t_send2, (Optr)PSend9610, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_4, (Optr)&t_push_closure, (Optr)PBlock9611, (Optr)&t_send2, (Optr)PSend9614, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_5, (Optr)&t_push_closure, (Optr)PBlock9615, (Optr)&t_send2, (Optr)PSend9618, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_6, (Optr)&t_push_closure, (Optr)PBlock9619, (Optr)&t_send2, (Optr)PSend9622, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_7, (Optr)&t_push_closure, (Optr)PBlock9623, (Optr)&t_send2, (Optr)PSend9626, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_8, (Optr)&t_push_closure, (Optr)PBlock9627, (Optr)&t_send2, (Optr)PSend9630, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_9, (Optr)&t_push_closure, (Optr)PBlock9631, (Optr)&t_send2, (Optr)PSend9634, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_10, (Optr)&t_push_closure, (Optr)PBlock9635, (Optr)&t_send2, (Optr)PSend9638, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_11, (Optr)&t_push_closure, (Optr)PBlock9639, (Optr)&t_send2, (Optr)PSend9642, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_12, (Optr)&t_push_closure, (Optr)PBlock9643, (Optr)&t_send2, (Optr)PSend9646, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_13, (Optr)&t_push_closure, (Optr)PBlock9647, (Optr)&t_send2, (Optr)PSend9650, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_14, (Optr)&t_push_closure, (Optr)PBlock9651, (Optr)&t_send2, (Optr)PSend9654, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_15, (Optr)&t_push_closure, (Optr)PBlock9655, (Optr)&t_send2, (Optr)PSend9658, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_27, (Optr)&t_push_closure, (Optr)PBlock9659, (Optr)&t_send2, (Optr)PSend9662, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_actions_0_0, (Optr)&t_push1, (Optr)int_127, (Optr)&t_push_closure, (Optr)PBlock9663, (Optr)&t_send2, (Optr)PSend9666, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9596 = new_Method_with(PArray9597, empty_Array, empty_Array, PThreadedCode9598, 18, PSend9602, PSend9606, PSend9610, PSend9614, PSend9618, PSend9622, PSend9626, PSend9630, PSend9634, PSend9638, PSend9642, PSend9646, PSend9650, PSend9654, PSend9658, PSend9662, PSend9666, self);
    
    MethodClosure MC_SMB_initializeNormal_ = new_MethodClosure((Method)PMethod9596, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_initializeNormal_, MC_SMB_initializeNormal_);
}


static void init_SMB_readCSI() {
    Symbol SMB_readCSI = new_Symbol(L"readCSI");
    Variable VAR_code_0_0 = new_Variable_named(L"code", 0);
    Variable VAR_character_0_1 = new_Variable_named(L"character", 0);
    Variable VAR_action_0_2 = new_Variable_named(L"action", 0);
    Array PArray9668 = new_Array_with(3, (Optr)VAR_code_0_0, (Optr)VAR_character_0_1, (Optr)VAR_action_0_2);
    Symbol SMB_read = new_Symbol(L"read");
    // read. 
    Send PSend9671 = new_Send((Optr)slot_IO_Term_TermInputDriver_input, SMB_read, 0);
    Assign PAssign9670 = new_Assign((Optr)VAR_character_0_1, (Optr)PSend9671);
    Character char_9395 = new_Character(L'0');
    Constant char_9395_Const = new_Constant((Optr)char_9395);
    Symbol SMB__lt__equals_ = new_Symbol(L"<=");
    // <=. 
    Send PSend9675 = new_Send((Optr)char_9395_Const, SMB__lt__equals_, 1, (Optr)VAR_character_0_1);
    Symbol SMB_and_ = new_Symbol(L"and:");
    Character char_9401 = new_Character(L'9');
    Constant char_9401_Const = new_Constant((Optr)char_9401);
    // <=. 
    Send PSend9678 = new_Send((Optr)VAR_character_0_1, SMB__lt__equals_, 1, (Optr)char_9401_Const);
    Array PThreadedCode9677 = instantiate_Array_with(ThreadedCode_Class, 0, 7, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)char_9401, (Optr)&t_send1, (Optr)PSend9678, (Optr)&t_block_return);
    Block PBlock9676 = new_Block_with(empty_Array, empty_Array, PThreadedCode9677, 1, PSend9678);
    // and:. 
    Send PSend9674 = new_Send((Optr)PSend9675, SMB_and_, 1, (Optr)PBlock9676);
    Symbol SMB_ifTrue_ifFalse_ = new_Symbol(L"ifTrue:ifFalse:");
    Symbol SMB_asInteger = new_Symbol(L"asInteger");
    // asInteger. 
    Send PSend9681 = new_Send((Optr)VAR_character_0_1, SMB_asInteger, 0);
    // asInteger. 
    Send PSend9682 = new_Send((Optr)char_9395_Const, SMB_asInteger, 0);
    Symbol SMB__minus_ = new_Symbol(L"-");
    // -. 
    Send PSend9683 = new_Send((Optr)PSend9681, SMB__minus_, 1, (Optr)PSend9682);
    Symbol SMB_continueReadCSINumber_ = new_Symbol(L"continueReadCSINumber:");
    // continueReadCSINumber:. 
    Send PSend9684 = new_Send((Optr)self, SMB_continueReadCSINumber_, 1, (Optr)PSend9683);
    Array PThreadedCode9680 = instantiate_Array_with(ThreadedCode_Class, 0, 14, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send0, (Optr)PSend9681, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_send0, (Optr)PSend9682, (Optr)&t_send1, (Optr)PSend9683, (Optr)&t_send1, (Optr)PSend9684, (Optr)&t_block_return);
    Block PBlock9679 = new_Block_with(empty_Array, empty_Array, PThreadedCode9680, 1, PSend9684);
    String string_9689 = new_String(L"Control Sequence Introducer");
    Symbol SMB_fail_in_ = new_Symbol(L"fail:in:");
    Constant string_9689_Const = new_Constant((Optr)string_9689);
    // fail:in:. 
    Send PSend9690 = new_Send((Optr)self, SMB_fail_in_, 2, (Optr)VAR_character_0_1, (Optr)string_9689_Const);
    Array PThreadedCode9688 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push1, (Optr)string_9689, (Optr)&t_send2, (Optr)PSend9690, (Optr)&t_block_return);
    Block PBlock9687 = new_Block_with(empty_Array, empty_Array, PThreadedCode9688, 1, PSend9690);
    Symbol SMB_at_ifAbsent_ = new_Symbol(L"at:ifAbsent:");
    // at:ifAbsent:. 
    Send PSend9691 = new_Send((Optr)slot_IO_Term_TermInputDriver_csi, SMB_at_ifAbsent_, 2, (Optr)VAR_character_0_1, (Optr)PBlock9687);
    Array PThreadedCode9686 = instantiate_Array_with(ThreadedCode_Class, 0, 9, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_csi, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_push_closure, (Optr)PBlock9687, (Optr)&t_send2, (Optr)PSend9691, (Optr)&t_block_return);
    Block PBlock9685 = new_Block_with(empty_Array, empty_Array, PThreadedCode9686, 1, PSend9691);
    // ifTrue:ifFalse:. 
    Send PSend9673 = new_Send((Optr)PSend9674, SMB_ifTrue_ifFalse_, 2, (Optr)PBlock9679, (Optr)PBlock9685);
    Assign PAssign9672 = new_Assign((Optr)VAR_action_0_2, (Optr)PSend9673);
    Symbol SMB_value = new_Symbol(L"value");
    // value. 
    Send PSend9692 = new_Send((Optr)VAR_action_0_2, SMB_value, 0);
    Array PThreadedCode9669 = instantiate_Array_with(ThreadedCode_Class, 0, 32, (Optr)&t_push1, (Optr)PAssign9670, (Optr)&t_push_slot, (Optr)slot_IO_Term_TermInputDriver_input, (Optr)&t_send0, (Optr)PSend9671, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push1, (Optr)PAssign9672, (Optr)&t_push1, (Optr)char_9395, (Optr)&t_push_variable, (Optr)VAR_character_0_1, (Optr)&t_send1, (Optr)PSend9675, (Optr)&t_push_closure, (Optr)PBlock9676, (Optr)&t_send1, (Optr)PSend9674, (Optr)&t_send_ifTrue_ifFalse_, (Optr)PSend9673, (Optr)PBlock9679, (Optr)PBlock9685, (Optr)&t_assign, (Optr)&t_zap, (Optr)&t_push_variable, (Optr)VAR_action_0_2, (Optr)&t_send0, (Optr)PSend9692, (Optr)&t_zap, (Optr)&t_method_return_self);
    Method PMethod9667 = new_Method_with(empty_Array, PArray9668, empty_Array, PThreadedCode9669, 4, PAssign9670, PAssign9672, PSend9692, self);
    
    MethodClosure MC_SMB_readCSI = new_MethodClosure((Method)PMethod9667, IO_Term_TermInputDriver_Class);
    store_method(IO_Term_TermInputDriver_Class, SMB_readCSI, MC_SMB_readCSI);
}


static void init_class_SMB_named_() {
    Symbol SMB_named_ = new_Symbol(L"named:");
    Variable VAR_n_0_0 = new_Variable_named(L"n", 0);
    Array PArray9694 = new_Array_with(1, (Optr)VAR_n_0_0);
    Symbol SMB_new = new_Symbol(L"new");
    Super PSuper9696 = new_Super(SMB_new, 0);
    Symbol SMB_name_ = new_Symbol(L"name:");
    // name:. 
    Send PSend9697 = new_Send((Optr)PSuper9696, SMB_name_, 1, (Optr)VAR_n_0_0);
    Array PThreadedCode9695 = instantiate_Array_with(ThreadedCode_Class, 0, 8, (Optr)&t_push_self, (Optr)&t_super0, (Optr)PSuper9696, (Optr)&t_push_variable, (Optr)VAR_n_0_0, (Optr)&t_send1, (Optr)PSend9697, (Optr)&t_method_return);
    Method PMethod9693 = new_Method_with(PArray9694, empty_Array, empty_Array, PThreadedCode9695, 1, PSend9697);
    
    MethodClosure MC_SMB_named_ = new_MethodClosure((Method)PMethod9693, HEADER(IO_Term_TermInputDriver_Class));
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